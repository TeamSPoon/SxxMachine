using namespace std;

#include "chat_parser.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"

Const* chat_parser::s0 = Const::Intern("cut");
Const* chat_parser::s1 = Const::Intern("!");
Const* chat_parser::s2 = Const::Intern("#");
Const* chat_parser::s3 = Const::Intern("+");
Const* chat_parser::s4 = Const::Intern(",");
Const* chat_parser::s5 = Const::Intern(".");
Const* chat_parser::s6 = Const::Intern(":-");
Const* chat_parser::s7 = Const::Intern("?");
Const* chat_parser::s8 = Const::Intern("a");
Const* chat_parser::s9 = Const::Intern("active");
Const* chat_parser::s10 = Const::Intern("adj");
Const* chat_parser::s11 = Const::Intern("adj_phrase");
Const* chat_parser::s12 = Const::Intern("adjs");
Const* chat_parser::s13 = Const::Intern("adv");
Const* chat_parser::s14 = Const::Intern("adv_phrase");
Const* chat_parser::s15 = Const::Intern("adverb");
Const* chat_parser::s16 = Const::Intern("advs");
Const* chat_parser::s17 = Const::Intern("afghanistan");
Const* chat_parser::s18 = Const::Intern("african");
Const* chat_parser::s19 = Const::Intern("ag_number");
Const* chat_parser::s20 = Const::Intern("all");
Const* chat_parser::s21 = Const::Intern("am");
Const* chat_parser::s22 = Const::Intern("american");
Const* chat_parser::s23 = Const::Intern("an");
Const* chat_parser::s24 = Const::Intern("an_s");
Const* chat_parser::s25 = Const::Intern("and");
Const* chat_parser::s26 = Const::Intern("anot");
Const* chat_parser::s27 = Const::Intern("any");
Const* chat_parser::s28 = Const::Intern("anybody");
Const* chat_parser::s29 = Const::Intern("anyone");
Const* chat_parser::s30 = Const::Intern("anything");
Const* chat_parser::s31 = Const::Intern("are");
Const* chat_parser::s32 = Const::Intern("area");
Const* chat_parser::s33 = Const::Intern("areas");
Const* chat_parser::s34 = Const::Intern("arg");
Const* chat_parser::s35 = Const::Intern("as");
Const* chat_parser::s36 = Const::Intern("asian");
Const* chat_parser::s37 = Const::Intern("at");
Const* chat_parser::s38 = Const::Intern("australasia");
Const* chat_parser::s39 = Const::Intern("aux");
Const* chat_parser::s40 = Const::Intern("average");
Const* chat_parser::s41 = Const::Intern("averages");
Const* chat_parser::s42 = Const::Intern("baltic");
Const* chat_parser::s43 = Const::Intern("be");
Const* chat_parser::s44 = Const::Intern("been");
Const* chat_parser::s45 = Const::Intern("being");
Const* chat_parser::s46 = Const::Intern("big");
Const* chat_parser::s47 = Const::Intern("bigger");
Const* chat_parser::s48 = Const::Intern("biggest");
Const* chat_parser::s49 = Const::Intern("black_sea");
Const* chat_parser::s50 = Const::Intern("border");
Const* chat_parser::s51 = Const::Intern("bordered");
Const* chat_parser::s52 = Const::Intern("bordering");
Const* chat_parser::s53 = Const::Intern("borders");
Const* chat_parser::s54 = Const::Intern("by");
Const* chat_parser::s55 = Const::Intern("call");
Const* chat_parser::s56 = Const::Intern("capital");
Const* chat_parser::s57 = Const::Intern("capitals");
Const* chat_parser::s58 = Const::Intern("chat_parser");
Const* chat_parser::s59 = Const::Intern("china");
Const* chat_parser::s60 = Const::Intern("cities");
Const* chat_parser::s61 = Const::Intern("city");
Const* chat_parser::s62 = Const::Intern("close");
Const* chat_parser::s63 = Const::Intern("common");
Const* chat_parser::s64 = Const::Intern("comp");
Const* chat_parser::s65 = Const::Intern("comp_adv");
Const* chat_parser::s66 = Const::Intern("comp_phrase");
Const* chat_parser::s67 = Const::Intern("compl");
Const* chat_parser::s68 = Const::Intern("compl_case");
Const* chat_parser::s69 = Const::Intern("conj");
Const* chat_parser::s70 = Const::Intern("contain");
Const* chat_parser::s71 = Const::Intern("contained");
Const* chat_parser::s72 = Const::Intern("containing");
Const* chat_parser::s73 = Const::Intern("contains");
Const* chat_parser::s74 = Const::Intern("context_pron");
Const* chat_parser::s75 = Const::Intern("continent");
Const* chat_parser::s76 = Const::Intern("continents");
Const* chat_parser::s77 = Const::Intern("countries");
Const* chat_parser::s78 = Const::Intern("country");
Const* chat_parser::s79 = Const::Intern("cut");
Const* chat_parser::s80 = Const::Intern("danube");
Const* chat_parser::s81 = Const::Intern("decl");
Const* chat_parser::s82 = Const::Intern("declarative");
Const* chat_parser::s83 = Const::Intern("def");
Const* chat_parser::s84 = Const::Intern("degree");
Const* chat_parser::s85 = Const::Intern("degrees");
Const* chat_parser::s86 = Const::Intern("det");
Const* chat_parser::s87 = Const::Intern("determinate_say");
Const* chat_parser::s88 = Const::Intern("determiner");
Const* chat_parser::s89 = Const::Intern("did");
Const* chat_parser::s90 = Const::Intern("dir");
Const* chat_parser::s91 = Const::Intern("ditrans");
Const* chat_parser::s92 = Const::Intern("do");
Const* chat_parser::s93 = Const::Intern("does");
Const* chat_parser::s94 = Const::Intern("doing");
Const* chat_parser::s95 = Const::Intern("done");
Const* chat_parser::s96 = Const::Intern("drain");
Const* chat_parser::s97 = Const::Intern("drained");
Const* chat_parser::s98 = Const::Intern("draining");
Const* chat_parser::s99 = Const::Intern("drains");
Const* chat_parser::s100 = Const::Intern("each");
Const* chat_parser::s101 = Const::Intern("east");
Const* chat_parser::s102 = Const::Intern("eastof");
Const* chat_parser::s103 = Const::Intern("eight");
Const* chat_parser::s104 = Const::Intern("empty");
Const* chat_parser::s105 = Const::Intern("end");
Const* chat_parser::s106 = Const::Intern("equator");
Const* chat_parser::s107 = Const::Intern("european");
Const* chat_parser::s108 = Const::Intern("every");
Const* chat_parser::s109 = Const::Intern("everybody");
Const* chat_parser::s110 = Const::Intern("everyone");
Const* chat_parser::s111 = Const::Intern("everything");
Const* chat_parser::s112 = Const::Intern("exceed");
Const* chat_parser::s113 = Const::Intern("exceeded");
Const* chat_parser::s114 = Const::Intern("exceeding");
Const* chat_parser::s115 = Const::Intern("exceeds");
Const* chat_parser::s116 = Const::Intern("execution time is ");
Const* chat_parser::s117 = Const::Intern("fail");
Const* chat_parser::s118 = Const::Intern("fem");
Const* chat_parser::s119 = Const::Intern("fin");
Const* chat_parser::s120 = Const::Intern("five");
Const* chat_parser::s121 = Const::Intern("flow");
Const* chat_parser::s122 = Const::Intern("flowed");
Const* chat_parser::s123 = Const::Intern("flowing");
Const* chat_parser::s124 = Const::Intern("flows");
Const* chat_parser::s125 = Const::Intern("four");
Const* chat_parser::s126 = Const::Intern("from");
Const* chat_parser::s127 = Const::Intern("fronted_verb");
Const* chat_parser::s128 = Const::Intern("gap");
Const* chat_parser::s129 = Const::Intern("gen_case");
Const* chat_parser::s130 = Const::Intern("gen_marker");
Const* chat_parser::s131 = Const::Intern("generic");
Const* chat_parser::s132 = Const::Intern("go");
Const* chat_parser::s133 = Const::Intern("great");
Const* chat_parser::s134 = Const::Intern("greater");
Const* chat_parser::s135 = Const::Intern("had");
Const* chat_parser::s136 = Const::Intern("has");
Const* chat_parser::s137 = Const::Intern("have");
Const* chat_parser::s138 = Const::Intern("having");
Const* chat_parser::s139 = Const::Intern("he");
Const* chat_parser::s140 = Const::Intern("her");
Const* chat_parser::s141 = Const::Intern("him");
Const* chat_parser::s142 = Const::Intern("his");
Const* chat_parser::s143 = Const::Intern("how");
Const* chat_parser::s144 = Const::Intern("i");
Const* chat_parser::s145 = Const::Intern("imp");
Const* chat_parser::s146 = Const::Intern("imperative");
Const* chat_parser::s147 = Const::Intern("imperative_verb");
Const* chat_parser::s148 = Const::Intern("in");
Const* chat_parser::s149 = Const::Intern("ind");
Const* chat_parser::s150 = Const::Intern("indef");
Const* chat_parser::s151 = Const::Intern("inf");
Const* chat_parser::s152 = Const::Intern("int_art");
Const* chat_parser::s153 = Const::Intern("int_det");
Const* chat_parser::s154 = Const::Intern("int_pron");
Const* chat_parser::s155 = Const::Intern("into");
Const* chat_parser::s156 = Const::Intern("intrans");
Const* chat_parser::s157 = Const::Intern("is");
Const* chat_parser::s158 = Const::Intern("is_adv");
Const* chat_parser::s159 = Const::Intern("is_pp");
Const* chat_parser::s160 = Const::Intern("is_pred");
Const* chat_parser::s161 = Const::Intern("is_trace");
Const* chat_parser::s162 = Const::Intern("it");
Const* chat_parser::s163 = Const::Intern("its");
Const* chat_parser::s164 = Const::Intern("ksqmile");
Const* chat_parser::s165 = Const::Intern("ksqmiles");
Const* chat_parser::s166 = Const::Intern("large");
Const* chat_parser::s167 = Const::Intern("larger");
Const* chat_parser::s168 = Const::Intern("largest");
Const* chat_parser::s169 = Const::Intern("latitude");
Const* chat_parser::s170 = Const::Intern("latitudes");
Const* chat_parser::s171 = Const::Intern("least");
Const* chat_parser::s172 = Const::Intern("less");
Const* chat_parser::s173 = Const::Intern("list");
Const* chat_parser::s174 = Const::Intern("loc_pred");
Const* chat_parser::s175 = Const::Intern("london");
Const* chat_parser::s176 = Const::Intern("longitude");
Const* chat_parser::s177 = Const::Intern("longitudes");
Const* chat_parser::s178 = Const::Intern("main");
Const* chat_parser::s179 = Const::Intern("many");
Const* chat_parser::s180 = Const::Intern("masc");
Const* chat_parser::s181 = Const::Intern("maximum");
Const* chat_parser::s182 = Const::Intern("me");
Const* chat_parser::s183 = Const::Intern("million");
Const* chat_parser::s184 = Const::Intern("milliseconds");
Const* chat_parser::s185 = Const::Intern("minimum");
Const* chat_parser::s186 = Const::Intern("minus");
Const* chat_parser::s187 = Const::Intern("more");
Const* chat_parser::s188 = Const::Intern("most");
Const* chat_parser::s189 = Const::Intern("my");
Const* chat_parser::s190 = Const::Intern("my_string");
Const* chat_parser::s191 = Const::Intern("myopen");
Const* chat_parser::s192 = Const::Intern("myplus");
Const* chat_parser::s193 = Const::Intern("name");
Const* chat_parser::s194 = Const::Intern("nb");
Const* chat_parser::s195 = Const::Intern("neg");
Const* chat_parser::s196 = Const::Intern("neg_adv");
Const* chat_parser::s197 = Const::Intern("neut");
Const* chat_parser::s198 = Const::Intern("new");
Const* chat_parser::s199 = Const::Intern("newer");
Const* chat_parser::s200 = Const::Intern("newest");
Const* chat_parser::s201 = Const::Intern("nil");
Const* chat_parser::s202 = Const::Intern("nine");
Const* chat_parser::s203 = Const::Intern("no");
Const* chat_parser::s204 = Const::Intern("no_args");
Const* chat_parser::s205 = Const::Intern("nobody");
Const* chat_parser::s206 = Const::Intern("nogap");
Const* chat_parser::s207 = Const::Intern("nonterminal");
Const* chat_parser::s208 = Const::Intern("north");
Const* chat_parser::s209 = Const::Intern("northof");
Const* chat_parser::s210 = Const::Intern("not");
Const* chat_parser::s211 = Const::Intern("nothing");
Const* chat_parser::s212 = Const::Intern("noun");
Const* chat_parser::s213 = Const::Intern("noun_form");
Const* chat_parser::s214 = Const::Intern("noun_plu");
Const* chat_parser::s215 = Const::Intern("noun_sin");
Const* chat_parser::s216 = Const::Intern("np");
Const* chat_parser::s217 = Const::Intern("np_all");
Const* chat_parser::s218 = Const::Intern("np_compls");
Const* chat_parser::s219 = Const::Intern("np_head");
Const* chat_parser::s220 = Const::Intern("np_head0");
Const* chat_parser::s221 = Const::Intern("np_mod");
Const* chat_parser::s222 = Const::Intern("np_mods");
Const* chat_parser::s223 = Const::Intern("np_no_trace");
Const* chat_parser::s224 = Const::Intern("number");
Const* chat_parser::s225 = Const::Intern("numbers");
Const* chat_parser::s226 = Const::Intern("obj");
Const* chat_parser::s227 = Const::Intern("object");
Const* chat_parser::s228 = Const::Intern("ocean");
Const* chat_parser::s229 = Const::Intern("oceans");
Const* chat_parser::s230 = Const::Intern("of");
Const* chat_parser::s231 = Const::Intern("old");
Const* chat_parser::s232 = Const::Intern("older");
Const* chat_parser::s233 = Const::Intern("oldest");
Const* chat_parser::s234 = Const::Intern("on");
Const* chat_parser::s235 = Const::Intern("one");
Const* chat_parser::s236 = Const::Intern("opt_comma");
Const* chat_parser::s237 = Const::Intern("opt_the");
Const* chat_parser::s238 = Const::Intern("or");
Const* chat_parser::s239 = Const::Intern("our");
Const* chat_parser::s240 = Const::Intern("part");
Const* chat_parser::s241 = Const::Intern("participle");
Const* chat_parser::s242 = Const::Intern("passive");
Const* chat_parser::s243 = Const::Intern("past");
Const* chat_parser::s244 = Const::Intern("people");
Const* chat_parser::s245 = Const::Intern("percentage");
Const* chat_parser::s246 = Const::Intern("perf");
Const* chat_parser::s247 = Const::Intern("pers_pron");
Const* chat_parser::s248 = Const::Intern("person");
Const* chat_parser::s249 = Const::Intern("persons");
Const* chat_parser::s250 = Const::Intern("place");
Const* chat_parser::s251 = Const::Intern("places");
Const* chat_parser::s252 = Const::Intern("plu");
Const* chat_parser::s253 = Const::Intern("population");
Const* chat_parser::s254 = Const::Intern("populations");
Const* chat_parser::s255 = Const::Intern("populous");
Const* chat_parser::s256 = Const::Intern("pos");
Const* chat_parser::s257 = Const::Intern("poss");
Const* chat_parser::s258 = Const::Intern("poss_pron");
Const* chat_parser::s259 = Const::Intern("possessive");
Const* chat_parser::s260 = Const::Intern("pp");
Const* chat_parser::s261 = Const::Intern("pre_adj");
Const* chat_parser::s262 = Const::Intern("pred_conj");
Const* chat_parser::s263 = Const::Intern("pred_rest");
Const* chat_parser::s264 = Const::Intern("predicate");
Const* chat_parser::s265 = Const::Intern("prep");
Const* chat_parser::s266 = Const::Intern("prep_case");
Const* chat_parser::s267 = Const::Intern("pres");
Const* chat_parser::s268 = Const::Intern("prog");
Const* chat_parser::s269 = Const::Intern("pronoun");
Const* chat_parser::s270 = Const::Intern("proper");
Const* chat_parser::s271 = Const::Intern("proportion");
Const* chat_parser::s272 = Const::Intern("q");
Const* chat_parser::s273 = Const::Intern("quant");
Const* chat_parser::s274 = Const::Intern("quant_phrase");
Const* chat_parser::s275 = Const::Intern("quantifier_pron");
Const* chat_parser::s276 = Const::Intern("question");
Const* chat_parser::s277 = Const::Intern("reduced_rel");
Const* chat_parser::s278 = Const::Intern("reduced_rel_conj");
Const* chat_parser::s279 = Const::Intern("reduced_rel_rest");
Const* chat_parser::s280 = Const::Intern("reduced_relative");
Const* chat_parser::s281 = Const::Intern("reduced_wh");
Const* chat_parser::s282 = Const::Intern("region");
Const* chat_parser::s283 = Const::Intern("regions");
Const* chat_parser::s284 = Const::Intern("regular_past");
Const* chat_parser::s285 = Const::Intern("regular_pres");
Const* chat_parser::s286 = Const::Intern("rel");
Const* chat_parser::s287 = Const::Intern("rel_adj");
Const* chat_parser::s288 = Const::Intern("rel_conj");
Const* chat_parser::s289 = Const::Intern("rel_pron");
Const* chat_parser::s290 = Const::Intern("rel_rest");
Const* chat_parser::s291 = Const::Intern("relative");
Const* chat_parser::s292 = Const::Intern("rest_verb");
Const* chat_parser::s293 = Const::Intern("restr");
Const* chat_parser::s294 = Const::Intern("rise");
Const* chat_parser::s295 = Const::Intern("risen");
Const* chat_parser::s296 = Const::Intern("rises");
Const* chat_parser::s297 = Const::Intern("river");
Const* chat_parser::s298 = Const::Intern("rivers");
Const* chat_parser::s299 = Const::Intern("role");
Const* chat_parser::s300 = Const::Intern("root_form");
Const* chat_parser::s301 = Const::Intern("rose");
Const* chat_parser::s302 = Const::Intern("runtime");
Const* chat_parser::s303 = Const::Intern("s");
Const* chat_parser::s304 = Const::Intern("s_all");
Const* chat_parser::s305 = Const::Intern("same");
Const* chat_parser::s306 = Const::Intern("say");
Const* chat_parser::s307 = Const::Intern("sea");
Const* chat_parser::s308 = Const::Intern("seamass");
Const* chat_parser::s309 = Const::Intern("seamasses");
Const* chat_parser::s310 = Const::Intern("seas");
Const* chat_parser::s311 = Const::Intern("sentence");
Const* chat_parser::s312 = Const::Intern("seven");
Const* chat_parser::s313 = Const::Intern("she");
Const* chat_parser::s314 = Const::Intern("sin");
Const* chat_parser::s315 = Const::Intern("six");
Const* chat_parser::s316 = Const::Intern("small");
Const* chat_parser::s317 = Const::Intern("smaller");
Const* chat_parser::s318 = Const::Intern("smallerthan");
Const* chat_parser::s319 = Const::Intern("smallest");
Const* chat_parser::s320 = Const::Intern("some");
Const* chat_parser::s321 = Const::Intern("somebody");
Const* chat_parser::s322 = Const::Intern("someone");
Const* chat_parser::s323 = Const::Intern("something");
Const* chat_parser::s324 = Const::Intern("south");
Const* chat_parser::s325 = Const::Intern("southof");
Const* chat_parser::s326 = Const::Intern("sqmile");
Const* chat_parser::s327 = Const::Intern("sqmiles");
Const* chat_parser::s328 = Const::Intern("statistics");
Const* chat_parser::s329 = Const::Intern("subj");
Const* chat_parser::s330 = Const::Intern("subj_case");
Const* chat_parser::s331 = Const::Intern("subj_question");
Const* chat_parser::s332 = Const::Intern("sum");
Const* chat_parser::s333 = Const::Intern("sums");
Const* chat_parser::s334 = Const::Intern("sup");
Const* chat_parser::s335 = Const::Intern("sup_adj");
Const* chat_parser::s336 = Const::Intern("sup_adv");
Const* chat_parser::s337 = Const::Intern("sup_op");
Const* chat_parser::s338 = Const::Intern("sup_phrase");
Const* chat_parser::s339 = Const::Intern("ten");
Const* chat_parser::s340 = Const::Intern("terminal");
Const* chat_parser::s341 = Const::Intern("terminator");
Const* chat_parser::s342 = Const::Intern("than");
Const* chat_parser::s343 = Const::Intern("that");
Const* chat_parser::s344 = Const::Intern("the");
Const* chat_parser::s345 = Const::Intern("their");
Const* chat_parser::s346 = Const::Intern("them");
Const* chat_parser::s347 = Const::Intern("there");
Const* chat_parser::s348 = Const::Intern("thing");
Const* chat_parser::s349 = Const::Intern("thousand");
Const* chat_parser::s350 = Const::Intern("three");
Const* chat_parser::s351 = Const::Intern("through");
Const* chat_parser::s352 = Const::Intern("time");
Const* chat_parser::s353 = Const::Intern("times");
Const* chat_parser::s354 = Const::Intern("to");
Const* chat_parser::s355 = Const::Intern("tomorrow");
Const* chat_parser::s356 = Const::Intern("top");
Const* chat_parser::s357 = Const::Intern("topic");
Const* chat_parser::s358 = Const::Intern("total");
Const* chat_parser::s359 = Const::Intern("totals");
Const* chat_parser::s360 = Const::Intern("tr_number");
Const* chat_parser::s361 = Const::Intern("trace1");
Const* chat_parser::s362 = Const::Intern("trans");
Const* chat_parser::s363 = Const::Intern("two");
Const* chat_parser::s364 = Const::Intern("undef");
Const* chat_parser::s365 = Const::Intern("upper_volta");
Const* chat_parser::s366 = Const::Intern("us");
Const* chat_parser::s367 = Const::Intern("value");
Const* chat_parser::s368 = Const::Intern("variable");
Const* chat_parser::s369 = Const::Intern("variable_q");
Const* chat_parser::s370 = Const::Intern("verb");
Const* chat_parser::s371 = Const::Intern("verb_arg");
Const* chat_parser::s372 = Const::Intern("verb_args");
Const* chat_parser::s373 = Const::Intern("verb_case");
Const* chat_parser::s374 = Const::Intern("verb_form");
Const* chat_parser::s375 = Const::Intern("verb_mod");
Const* chat_parser::s376 = Const::Intern("verb_mods");
Const* chat_parser::s377 = Const::Intern("verb_root");
Const* chat_parser::s378 = Const::Intern("verb_type");
Const* chat_parser::s379 = Const::Intern("virtual");
Const* chat_parser::s380 = Const::Intern("void");
Const* chat_parser::s381 = Const::Intern("was");
Const* chat_parser::s382 = Const::Intern("we");
Const* chat_parser::s383 = Const::Intern("were");
Const* chat_parser::s384 = Const::Intern("west");
Const* chat_parser::s385 = Const::Intern("westof");
Const* chat_parser::s386 = Const::Intern("wh");
Const* chat_parser::s387 = Const::Intern("wh_question");
Const* chat_parser::s388 = Const::Intern("what");
Const* chat_parser::s389 = Const::Intern("when");
Const* chat_parser::s390 = Const::Intern("where");
Const* chat_parser::s391 = Const::Intern("which");
Const* chat_parser::s392 = Const::Intern("who");
Const* chat_parser::s393 = Const::Intern("whom");
Const* chat_parser::s394 = Const::Intern("whose");
Const* chat_parser::s395 = Const::Intern("whq");
Const* chat_parser::s396 = Const::Intern("with");
Const* chat_parser::s397 = Const::Intern("word");
Const* chat_parser::s398 = Const::Intern("write");
Const* chat_parser::s399 = Const::Intern("x");
Const* chat_parser::s400 = Const::Intern("yesterday");
Const* chat_parser::s401 = Const::Intern("yn_question");
Const* chat_parser::s402 = Const::Intern("you");
Const* chat_parser::s403 = Const::Intern("your");
Const* chat_parser::s404 = Const::Intern("~");
Int* chat_parser::posint0 = Term::Number(0);
Int* chat_parser::posint1 = Term::Number(1);
Int* chat_parser::posint2 = Term::Number(2);
Int* chat_parser::posint3 = Term::Number(3);
Int* chat_parser::posint4 = Term::Number(4);
Int* chat_parser::posint5 = Term::Number(5);
Int* chat_parser::posint6 = Term::Number(6);
Int* chat_parser::posint7 = Term::Number(7);
Int* chat_parser::posint8 = Term::Number(8);
Int* chat_parser::posint9 = Term::Number(9);
Int* chat_parser::posint10 = Term::Number(10);

static* function < Function*pred_top_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_top_0__1(mach));
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_chat_parser_0::exec_static);
}

static* function < Function*pred_go_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_go_0__1(mach));
}

static* function < Function*pred_go_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = chat_parser::s302;
	local_aregs[1] = F(chat_parser::s5, var1, F(chat_parser::s5, var2, Const::Nil));
	local_aregs[2] = F(chat_parser::s58, F(chat_parser::s328, chat_parser::s302, F(chat_parser::s5, var3, F(chat_parser::s5, var4, Const::Nil)), F(chat_parser::s398, chat_parser::s116, F(chat_parser::s398, { var4->Deref(), F(chat_parser::s398, chat_parser::s184, continuation) }))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_statistics_2::exec_static);
}

static* function < Function*pred_chat_parser_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_chat_parser_0__1(mach));
}

static* function < Function*pred_chat_parser_0::(PrologMachine*) {
	mach::FillAlternative(pred_chat_parser_0::exec_pred_chat_parser_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = F(chat_parser::s87, { var1->Deref(), var2, F(chat_parser::s117, { continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_my_string_1::exec_static);
}

static* function < Function*pred_chat_parser_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_my_string_1__1(mach));
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s298, F(chat_parser::s5, chat_parser::s31, F(chat_parser::s5, chat_parser::s347, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s93, F(chat_parser::s5, chat_parser::s17, F(chat_parser::s5, chat_parser::s50, F(chat_parser::s5, chat_parser::s59, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s56, F(chat_parser::s5, chat_parser::s230, F(chat_parser::s5, chat_parser::s365, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s390, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s168, F(chat_parser::s5, chat_parser::s78, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s391, F(chat_parser::s5, chat_parser::s78, F(chat_parser::s5, chat_parser::s404, F(chat_parser::s5, chat_parser::s303, F(chat_parser::s5, chat_parser::s56, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s175, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s391, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s31, F(chat_parser::s5, chat_parser::s107, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s143, F(chat_parser::s5, chat_parser::s166, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s319, F(chat_parser::s5, chat_parser::s22, F(chat_parser::s5, chat_parser::s78, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s228, F(chat_parser::s5, chat_parser::s343, F(chat_parser::s5, chat_parser::s53, F(chat_parser::s5, chat_parser::s18, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s25, F(chat_parser::s5, chat_parser::s343, F(chat_parser::s5, chat_parser::s53, F(chat_parser::s5, chat_parser::s36, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s31, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s57, F(chat_parser::s5, chat_parser::s230, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s52, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s42, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s391, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s31, F(chat_parser::s5, chat_parser::s51, F(chat_parser::s5, chat_parser::s54, F(chat_parser::s5, chat_parser::s363, F(chat_parser::s5, chat_parser::s310, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s143, F(chat_parser::s5, chat_parser::s179, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s93, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s80, F(chat_parser::s5, chat_parser::s121, F(chat_parser::s5, chat_parser::s351, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s358, F(chat_parser::s5, chat_parser::s32, F(chat_parser::s5, chat_parser::s230, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s324, F(chat_parser::s5, chat_parser::s230, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s106, F(chat_parser::s5, chat_parser::s25, F(chat_parser::s5, chat_parser::s210, F(chat_parser::s5, chat_parser::s148, F(chat_parser::s5, chat_parser::s38, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s40, F(chat_parser::s5, chat_parser::s32, F(chat_parser::s5, chat_parser::s230, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s148, F(chat_parser::s5, chat_parser::s100, F(chat_parser::s5, chat_parser::s75, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s347, F(chat_parser::s5, chat_parser::s187, F(chat_parser::s5, chat_parser::s342, F(chat_parser::s5, chat_parser::s235, F(chat_parser::s5, chat_parser::s78, F(chat_parser::s5, chat_parser::s148, F(chat_parser::s5, chat_parser::s100, F(chat_parser::s5, chat_parser::s75, F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::FillAlternative(pred_my_string_1::exec_pred_my_string_1__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s157, F(chat_parser::s5, chat_parser::s347, F(chat_parser::s5, chat_parser::s320, F(chat_parser::s5, chat_parser::s228, F(chat_parser::s5, chat_parser::s343, F(chat_parser::s5, chat_parser::s93, F(chat_parser::s5, chat_parser::s210, F(chat_parser::s5, chat_parser::s50, F(chat_parser::s5, chat_parser::s27, F(chat_parser::s5, chat_parser::s78, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_my_string_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s5, chat_parser::s388, F(chat_parser::s5, chat_parser::s31, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s77, F(chat_parser::s5, chat_parser::s126, F(chat_parser::s5, chat_parser::s391, F(chat_parser::s5, chat_parser::s8, F(chat_parser::s5, chat_parser::s297, F(chat_parser::s5, chat_parser::s124, F(chat_parser::s5, chat_parser::s155, F(chat_parser::s5, chat_parser::s344, F(chat_parser::s5, chat_parser::s49, F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_determinate_say_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_determinate_say_2__1(mach));
}

static* function < Function*pred_determinate_say_2::(PrologMachine*) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(chat_parser::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_say_2::exec_static);
}

static* function < Function*pred_terminal_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_terminal_5__1(mach));
}

static* function < Function*pred_terminal_5::(PrologMachine*) {
	mach::FillAlternative(pred_terminal_5::exec_pred_terminal_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s399, var3, chat_parser::s340, var1->Deref(), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_terminal_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s5, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_gap_1::exec_static);
}

static* function < Function*pred_gap_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_gap_1__1(mach));
}

static* function < Function*pred_gap_1::(PrologMachine*) {
	mach::FillAlternative(pred_gap_1::exec_pred_gap_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s399, chat_parser::s128, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_gap_1::(PrologMachine*) {
	mach::RemoveChoice();
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

static* function < Function*pred_virtual_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_virtual_3__1(mach));
}

static* function < Function*pred_virtual_3::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(chat_parser::s399, var2, chat_parser::s207, var1->Deref(), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_is_pp_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_pp_1__1(mach));
}

static* function < Function*pred_is_pp_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint1, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_is_pred_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_pred_1__1(mach));
}

static* function < Function*pred_is_pred_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, chat_parser::posint1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_is_trace_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_trace_1__1(mach));
}

static* function < Function*pred_is_trace_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, var2, chat_parser::posint1, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_is_adv_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_adv_1__1(mach));
}

static* function < Function*pred_is_adv_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, var2, var3, chat_parser::posint1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_trace1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_trace1_2__1(mach));
}

static* function < Function*pred_trace1_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, var2, chat_parser::posint1, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_trace1_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_trace1_1__1(mach));
}

static* function < Function*pred_trace1_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adv_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adv_1__1(mach));
}

static* function < Function*pred_adv_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_empty_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_empty_1__1(mach));
}

static* function < Function*pred_empty_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_np_all_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_all_1__1(mach));
}

static* function < Function*pred_np_all_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint1, chat_parser::posint1, chat_parser::posint1, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_s_all_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_s_all_1__1(mach));
}

static* function < Function*pred_s_all_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint1, chat_parser::posint1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_np_no_trace_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_no_trace_1__1(mach));
}

static* function < Function*pred_np_no_trace_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint1, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_myplus_3__1(mach));
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s2, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, var9, var10, var11, var12)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var9->Deref();
	local_aregs[3] = F(chat_parser::s238, { var2->Deref(), var6->Deref(), var10->Deref(), F(chat_parser::s238, { var3->Deref(), var7->Deref(), var11->Deref(), F(chat_parser::s238, { var4->Deref(), var8->Deref(), var12->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_3::exec_static);
}

static* function < Function*pred_minus_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_minus_3__1(mach));
}

static* function < Function*pred_minus_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s2, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, var9, var10, var11, var12)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var9->Deref();
	local_aregs[3] = F(chat_parser::s26, { var2->Deref(), var6->Deref(), var10->Deref(), F(chat_parser::s26, { var3->Deref(), var7->Deref(), var11->Deref(), F(chat_parser::s26, { var4->Deref(), var8->Deref(), var12->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_anot_3::exec_static);
}

static* function < Function*pred_or_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_or_3__1(mach));
}

static* function < Function*pred_or_3::(PrologMachine*) {
	mach::FillAlternative(pred_or_3::exec_pred_or_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_or_3::(PrologMachine*) {
	mach::FillAlternative(pred_or_3::exec_pred_or_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_or_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_anot_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_anot_3__1(mach));
}

static* function < Function*pred_anot_3::(PrologMachine*) {
	mach::FillAlternative(pred_anot_3::exec_pred_anot_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint0))) {
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

static* function < Function*pred_anot_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_role_3__1(mach));
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::FillAlternative(pred_role_3::exec_pred_role_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::FillAlternative(pred_role_3::exec_pred_role_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s67))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, chat_parser::posint0, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::FillAlternative(pred_role_3::exec_pred_role_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s178))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, var1, chat_parser::posint0, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::FillAlternative(pred_role_3::exec_pred_role_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s2, chat_parser::posint0, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::FillAlternative(pred_role_3::exec_pred_role_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s81))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_role_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s201))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_subj_case_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_subj_case_1__1(mach));
}

static* function < Function*pred_subj_case_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_case_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_case_1__1(mach));
}

static* function < Function*pred_verb_case_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint1, chat_parser::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_case_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_prep_case_1__1(mach));
}

static* function < Function*pred_prep_case_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_compl_case_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_compl_case_1__1(mach));
}

static* function < Function*pred_compl_case_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s2, chat_parser::posint0, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_say_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_say_2__1(mach));
}

static* function < Function*pred_say_2::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = Const::Nil;
	local_aregs[4] = Const::Nil;
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sentence_5::exec_static);
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sentence_5__1(mach));
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	mach::FillAlternative(pred_sentence_5::exec_pred_sentence_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var7;
	local_aregs[5] = F(chat_parser::s341, chat_parser::s5, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_declarative_5::exec_static);
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	mach::FillAlternative(pred_sentence_5::exec_pred_sentence_5__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var7;
	local_aregs[5] = F(chat_parser::s341, chat_parser::s7, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_wh_question_5::exec_static);
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	mach::FillAlternative(pred_sentence_5::exec_pred_sentence_5__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = F(chat_parser::s387, { var1->Deref(), var6->Deref(), var8, var7->Deref(), var9, F(chat_parser::s341, chat_parser::s7, var8->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_topic_4::exec_static);
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	mach::FillAlternative(pred_sentence_5::exec_pred_sentence_5__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var7;
	local_aregs[5] = F(chat_parser::s341, chat_parser::s7, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_yn_question_5::exec_static);
}

static* function < Function*pred_sentence_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var7;
	local_aregs[5] = F(chat_parser::s341, chat_parser::s1, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_imperative_5::exec_static);
}

static* function < Function*pred_pp_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pp_8__1(mach));
}

static* function < Function*pred_pp_8::(PrologMachine*) {
	mach::FillAlternative(pred_pp_8::exec_pred_pp_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s260, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var7->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_pp_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s260, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = var8->Deref();
	local_aregs[4] = var11;
	local_aregs[5] = F(chat_parser::s266, var12, F(chat_parser::s216, { var2->Deref(), var13, var12->Deref(), var14, var3->Deref(), var4->Deref(), var5->Deref(), var10->Deref(), var7->Deref(), var11->Deref(), var9->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_prep_5::exec_static);
}

static* function < Function*pred_topic_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_topic_4__1(mach));
}

static* function < Function*pred_topic_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s260, var4, chat_parser::s67, var5, var6), var7)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = chat_parser::s67;
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var1->Deref();
	local_aregs[5] = var8;
	local_aregs[6] = var3->Deref();
	local_aregs[7] = var9;
	local_aregs[8] = F(chat_parser::s236, { var8->Deref(), var2->Deref(), var9->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pp_8::exec_static);
}

static* function < Function*pred_opt_comma_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_opt_comma_4__1(mach));
}

static* function < Function*pred_opt_comma_4::(PrologMachine*) {
	mach::FillAlternative(pred_opt_comma_4::exec_pred_opt_comma_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s4;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_opt_comma_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_declarative_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_declarative_5__1(mach));
}

static* function < Function*pred_declarative_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s81, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_6::exec_static);
}

static* function < Function*pred_wh_question_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wh_question_5__1(mach));
}

static* function < Function*pred_wh_question_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s395, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = var8;
	local_aregs[3] = var9;
	local_aregs[4] = var3->Deref();
	local_aregs[5] = var10;
	local_aregs[6] = var5->Deref();
	local_aregs[7] = var11;
	local_aregs[8] = F(chat_parser::s276, { var8->Deref(), var9->Deref(), var2->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_variable_q_8::exec_static);
}

static* function < Function*pred_np_11::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(11);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_11__1(mach));
}

static* function < Function*pred_np_11::(PrologMachine*) {
	mach::FillAlternative(pred_np_11::exec_pred_np_11__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s216, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() });
	local_aregs[1] = var9->Deref();
	local_aregs[2] = var10->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_np_11::(PrologMachine*) {
	mach::FillAlternative(pred_np_11::exec_pred_np_11__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s216, var1, var2, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s83))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5->Deref();
	local_aregs[1] = F(chat_parser::s247, { var2->Deref(), var1->Deref(), var11, var7->Deref(), var8->Deref(), var9->Deref(), var10->Deref(), F(chat_parser::s104, { var6->Deref(), F(chat_parser::s299, { var11->Deref(), chat_parser::s81, var3->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_pp_1::exec_static);
}

static* function < Function*pred_np_11::(PrologMachine*) {
	mach::FillAlternative(pred_np_11::exec_pred_np_11__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s216, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7->Deref();
	local_aregs[1] = F(chat_parser::s219, { var2->Deref(), var1->Deref(), F(chat_parser::s3, { var5->Deref(), var13 }), var14, var3->Deref(), var9->Deref(), var15, var11->Deref(), var16, F(chat_parser::s217, var17, F(chat_parser::s218, { var13->Deref(), var1->Deref(), var6->Deref(), var14->Deref(), var17->Deref(), var8->Deref(), var15->Deref(), var10->Deref(), var16->Deref(), var12->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_pp_1::exec_static);
}

static* function < Function*pred_np_11::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s240, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = F(chat_parser::s88, { var1->Deref(), var3->Deref(), chat_parser::s150, var8->Deref(), var12, var10->Deref(), var13, F(chat_parser::s404, chat_parser::s230, var12->Deref(), var14, var13->Deref(), var15, F(chat_parser::s304, var16, F(chat_parser::s266, var17, F(chat_parser::s216, { var2->Deref(), F(chat_parser::s3, chat_parser::posint3, chat_parser::s252), var17->Deref(), chat_parser::s83, var5->Deref(), var16->Deref(), var7->Deref(), var14->Deref(), var9->Deref(), var15->Deref(), var11->Deref(), continuation })))) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_pp_1::exec_static);
}

static* function < Function*pred_variable_q_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_variable_q_8__1(mach));
}

static* function < Function*pred_variable_q_8::(PrologMachine*) {
	mach::FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s216, var8, var2->Deref(), var4->Deref(), var9, var10, var11, var12), var13)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var8->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var13->Deref();
	local_aregs[8] = F(chat_parser::s361, { var11->Deref(), var12->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_whq_8::exec_static);
}

static* function < Function*pred_variable_q_8::(PrologMachine*) {
	mach::FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(chat_parser::s67))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s260, F(chat_parser::s260, var7, var8), chat_parser::s67, var9, var10), var11)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var12;
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var13;
	local_aregs[5] = F(chat_parser::s395, { var1->Deref(), var2->Deref(), var8->Deref(), var14, var12->Deref(), var5->Deref(), var13->Deref(), var11->Deref(), F(chat_parser::s361, { var9->Deref(), var10->Deref(), F(chat_parser::s68, { var3->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_prep_5::exec_static);
}

static* function < Function*pred_variable_q_8::(PrologMachine*) {
	mach::FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(chat_parser::s67))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s14, F(chat_parser::s260, var7, F(chat_parser::s216, { var2->Deref(), F(chat_parser::s219, F(chat_parser::s153, { var1->Deref() }), Const::Nil, var8), Const::Nil })), var9, var10), var11)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7->Deref();
	local_aregs[1] = var8->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var11->Deref();
	local_aregs[6] = F(chat_parser::s361, { var9->Deref(), var10->Deref(), F(chat_parser::s373, { var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_context_pron_6::exec_static);
}

static* function < Function*pred_variable_q_8::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[8];
Term* areg7 = local_aregs[7]->Deref();
Term* areg6 = local_aregs[6]->Deref();
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var11 = V(mach);
Var* var10 = V(mach);
Var* var9 = V(mach);
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
if(!((areg2)->Unify(chat_parser::s67))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg6)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg7)->Unify(F(chat_parser::s399,chat_parser::s128,chat_parser::s207,F(chat_parser::s264,chat_parser::s10,F(chat_parser::s367,var7,F(chat_parser::s386, { var1->Deref() })),var8),var9)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s143;
local_aregs[1] = var4->Deref();
local_aregs[2] = var10;
local_aregs[3] = var6->Deref();
local_aregs[4] = var11;
local_aregs[5] = F(chat_parser::s10,chat_parser::s273,var7->Deref(),var10->Deref(),var5->Deref(),var11->Deref(),var9->Deref(),F(chat_parser::s104, { var8->Deref(), F(chat_parser::s373, { var3->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_adv_phrase_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adv_phrase_7__1(mach));
}

static* function < Function*pred_adv_phrase_7::(PrologMachine*) {
	mach::FillAlternative(pred_adv_phrase_7::exec_pred_adv_phrase_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s14, { var1->Deref(), var2->Deref(), var3->Deref() });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_adv_phrase_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s260, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var9;
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var10;
	local_aregs[5] = F(chat_parser::s260, F(chat_parser::s260, F(chat_parser::s265, chat_parser::s230), var2->Deref()), chat_parser::s67, var3->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_loc_pred_5::exec_static);
}

static* function < Function*pred_predicate_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_predicate_7__1(mach));
}

static* function < Function*pred_predicate_7::(PrologMachine*) {
	mach::FillAlternative(pred_predicate_7::exec_pred_predicate_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s264, { var1->Deref(), var2->Deref(), var3->Deref() });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_predicate_7::(PrologMachine*) {
	mach::FillAlternative(pred_predicate_7::exec_pred_predicate_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adj_phrase_6::exec_static);
}

static* function < Function*pred_predicate_7::(PrologMachine*) {
	mach::FillAlternative(pred_predicate_7::exec_pred_predicate_7__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s195))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = F(chat_parser::s260, { var1->Deref(), chat_parser::s67, var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_all_1::exec_static);
}

static* function < Function*pred_predicate_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = F(chat_parser::s14, { var2->Deref(), var8->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_all_1::exec_static);
}

static* function < Function*pred_whq_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_whq_8__1(mach));
}

static* function < Function*pred_whq_8::(PrologMachine*) {
	mach::FillAlternative(pred_whq_8::exec_pred_whq_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var8;
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var9;
	local_aregs[6] = F(chat_parser::s304, var10, F(chat_parser::s216, { var3->Deref(), var2->Deref(), var11, var12, chat_parser::s329, var10->Deref(), var13, var8->Deref(), var5->Deref(), var9->Deref(), var7->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_det_6::exec_static);
}

static* function < Function*pred_whq_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s216, F(chat_parser::s3, chat_parser::posint3, var2->Deref()), F(chat_parser::s386, { var1->Deref() }), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_pron_5::exec_static);
}

static* function < Function*pred_int_det_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_det_6__1(mach));
}

static* function < Function*pred_int_det_6::(PrologMachine*) {
	mach::FillAlternative(pred_int_det_6::exec_pred_int_det_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_whose_6::exec_static);
}

static* function < Function*pred_int_det_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_art_6::exec_static);
}

static* function < Function*pred_gen_marker_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_gen_marker_4__1(mach));
}

static* function < Function*pred_gen_marker_4::(PrologMachine*) {
	mach::FillAlternative(pred_gen_marker_4::exec_pred_gen_marker_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s130;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_gen_marker_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s404;
local_aregs[1] = var1->Deref();
local_aregs[2] = var5;
local_aregs[3] = var3->Deref();
local_aregs[4] = var6;
local_aregs[5] = F(chat_parser::s24, { var5->Deref(), var2->Deref(), var6->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_whose_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_whose_6__1(mach));
}

static* function < Function*pred_whose_6::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(F(chat_parser::s399,chat_parser::s206,chat_parser::s207,F(chat_parser::s220,F(chat_parser::s386, { var1->Deref() }),var2->Deref(),chat_parser::s270),F(chat_parser::s399,chat_parser::s206,chat_parser::s207,chat_parser::s130,var6))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s394;
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_question_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_question_7__1(mach));
}

static* function < Function*pred_question_7::(PrologMachine*) {
	mach::FillAlternative(pred_question_7::exec_pred_question_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(chat_parser::s299, chat_parser::s329, var8, var2->Deref(), F(chat_parser::s303, { var3->Deref(), var9, var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_subj_question_1::exec_static);
}

static* function < Function*pred_question_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var8;
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var9;
	local_aregs[6] = F(chat_parser::s303, { var3->Deref(), var10, var8->Deref(), var5->Deref(), var9->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_fronted_verb_6::exec_static);
}

static* function < Function*pred_det_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_det_7__1(mach));
}

static* function < Function*pred_det_7::(PrologMachine*) {
	mach::FillAlternative(pred_det_7::exec_pred_det_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s86, { var1->Deref(), var2->Deref(), var3->Deref() });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_det_7::(PrologMachine*) {
	mach::FillAlternative(pred_det_7::exec_pred_det_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(chat_parser::s86, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = F(chat_parser::s86, { var8->Deref(), var2->Deref(), var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_det_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s131))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s131))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_art_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_art_6__1(mach));
}

static* function < Function*pred_int_art_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s86, var6, var2->Deref(), chat_parser::s83), var7)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_art_7::exec_static);
}

static* function < Function*pred_subj_question_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_subj_question_1__1(mach));
}

static* function < Function*pred_subj_question_1::(PrologMachine*) {
	mach::FillAlternative(pred_subj_question_1::exec_pred_subj_question_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_subj_question_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_yn_question_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_yn_question_5__1(mach));
}

static* function < Function*pred_yn_question_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s272, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s201;
	local_aregs[1] = var6;
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var8;
	local_aregs[6] = F(chat_parser::s303, { var1->Deref(), var9, var7->Deref(), var3->Deref(), var8->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_fronted_verb_6::exec_static);
}

static* function < Function*pred_verb_form_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_form_8__1(mach));
}

static* function < Function*pred_verb_form_8::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_8::exec_pred_verb_form_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s374, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var7->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_verb_form_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var9;
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var8->Deref();
	local_aregs[5] = F(chat_parser::s374, { var9->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_neg_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_neg_6__1(mach));
}

static* function < Function*pred_neg_6::(PrologMachine*) {
	mach::FillAlternative(pred_neg_6::exec_pred_neg_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s195, { var1->Deref(), var2->Deref() });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_neg_6::(PrologMachine*) {
	mach::FillAlternative(pred_neg_6::exec_pred_neg_6__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(chat_parser::s3,chat_parser::s39,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(chat_parser::s195))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s210;
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = var4->Deref();
local_aregs[4] = var5->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_neg_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s256))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_fronted_verb_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_fronted_verb_6__1(mach));
}

static* function < Function*pred_fronted_verb_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s374, var6, var7, var8, var9), F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s195, var10, var11), var12))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var7->Deref();
	local_aregs[2] = var8->Deref();
	local_aregs[3] = var13;
	local_aregs[4] = var3->Deref();
	local_aregs[5] = var14;
	local_aregs[6] = var5->Deref();
	local_aregs[7] = var15;
	local_aregs[8] = F(chat_parser::s378, { var6->Deref(), F(chat_parser::s3, chat_parser::s39, var16), F(chat_parser::s299, { var1->Deref(), var9->Deref(), var2->Deref(), F(chat_parser::s195, var17, var11->Deref(), var14->Deref(), var4->Deref(), var15->Deref(), var12->Deref(), continuation) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_imperative_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_imperative_5__1(mach));
}

static* function < Function*pred_imperative_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(chat_parser::s145, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = F(chat_parser::s303, { var1->Deref(), var8, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_imperative_verb_4::exec_static);
}

static* function < Function*pred_imperative_verb_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_imperative_verb_4__1(mach));
}

static* function < Function*pred_imperative_verb_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s340, chat_parser::s402, F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s374, var4, F(chat_parser::s3, chat_parser::s145, chat_parser::s119), F(chat_parser::s3, chat_parser::posint2, chat_parser::s314), chat_parser::s178), var5))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = chat_parser::s151;
	local_aregs[2] = var6;
	local_aregs[3] = var7;
	local_aregs[4] = var1->Deref();
	local_aregs[5] = var2->Deref();
	local_aregs[6] = var3->Deref();
	local_aregs[7] = var5->Deref();
	local_aregs[8] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_s_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_s_6__1(mach));
}

static* function < Function*pred_s_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var23 = V(mach);
	Var* var22 = V(mach);
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s303, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = var11;
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var12;
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var13;
	local_aregs[7] = F(chat_parser::s370, { var2->Deref(), var10->Deref(), var11->Deref(), var14, var12->Deref(), var15, var13->Deref(), var16, F(chat_parser::s104, var17, F(chat_parser::s304, var18, F(chat_parser::s372, { var11->Deref(), var14->Deref(), var3->Deref(), var17->Deref(), var19, var15->Deref(), var20, var16->Deref(), var21, F(chat_parser::s186, { var18->Deref(), var19->Deref(), var22, F(chat_parser::s192, { var18->Deref(), var19->Deref(), var23, F(chat_parser::s376, { var4->Deref(), var22->Deref(), var23->Deref(), var5->Deref(), var20->Deref(), var7->Deref(), var21->Deref(), var9->Deref(), continuation }) }) }) }))) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_subj_7::exec_static);
}

static* function < Function*pred_subj_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_subj_7__1(mach));
}

static* function < Function*pred_subj_7::(PrologMachine*) {
	mach::FillAlternative(pred_subj_7::exec_pred_subj_7__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[7];
Term* areg6 = local_aregs[6]->Deref();
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s347))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(chat_parser::s3,var2,chat_parser::s43)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg6)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s347;
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[7] = local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_subj_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = F(chat_parser::s330, var9, F(chat_parser::s216, { var1->Deref(), var2->Deref(), var9->Deref(), var10, chat_parser::s329, var8->Deref(), var11, var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_all_1::exec_static);
}

static* function < Function*pred_np_head_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_head_9__1(mach));
}

static* function < Function*pred_np_head_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var10;
	local_aregs[1] = var11;
	local_aregs[2] = var12;
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var13;
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var14;
	local_aregs[7] = F(chat_parser::s259, { var10->Deref(), var11->Deref(), var12->Deref(), var15, var15->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), var14->Deref(), var9->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_np_head0_7::exec_static);
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_head0_7__1(mach));
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	mach::FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s220, { var1->Deref(), var2->Deref(), var3->Deref() });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	mach::FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s193, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s83, chat_parser::s270)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_name_5::exec_static);
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	mach::FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s219, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, var5, chat_parser::s63)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var10;
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var11;
	local_aregs[7] = F(chat_parser::s12, { var2->Deref(), var10->Deref(), var12, var11->Deref(), var13, F(chat_parser::s212, { var3->Deref(), var4->Deref(), var12->Deref(), var7->Deref(), var13->Deref(), var9->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_determiner_7::exec_static);
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	mach::FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s83, chat_parser::s270)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s207, chat_parser::s130, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_poss_pron_6::exec_static);
}

static* function < Function*pred_np_head0_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s219, var1, Const::Nil, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s150, chat_parser::s63)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_quantifier_pron_6::exec_static);
}

static* function < Function*pred_np_compls_10::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(10);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_compls_10__1(mach));
}

static* function < Function*pred_np_compls_10::(PrologMachine*) {
	mach::FillAlternative(pred_np_compls_10::exec_pred_np_compls_10__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s270))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_empty_1::exec_static);
}

static* function < Function*pred_np_compls_10::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var10;
	local_aregs[1] = F(chat_parser::s222, { var1->Deref(), var2->Deref(), var11, var3->Deref(), var4->Deref(), var12, var10->Deref(), var13, var6->Deref(), var14, var8->Deref(), var15, F(chat_parser::s291, { var1->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var5->Deref(), var14->Deref(), var7->Deref(), var15->Deref(), var9->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_np_all_1::exec_static);
}

static* function < Function*pred_possessive_14::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11],mach.Areg[12],mach.Areg[13],mach.Areg[14]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(14);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_possessive_14__1(mach));
}

static* function < Function*pred_possessive_14::(PrologMachine*) {
	mach::FillAlternative(pred_possessive_14::exec_pred_possessive_14__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[14];
	Term* areg13 = local_aregs[13]->Deref();
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg12)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg13)->Unify(var13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var10->Deref();
	local_aregs[1] = var14;
	local_aregs[2] = var12->Deref();
	local_aregs[3] = var15;
	local_aregs[4] = F(chat_parser::s220, var16, var17, var18, var14->Deref(), var19, var15->Deref(), var20, F(chat_parser::s259, { var16->Deref(), var17->Deref(), var18->Deref(), var21, F(chat_parser::s5, F(chat_parser::s260, chat_parser::s257, F(chat_parser::s216, { var2->Deref(), var1->Deref(), var4->Deref() })), var21->Deref()), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), var19->Deref(), var11->Deref(), var20->Deref(), var13->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_gen_case_4::exec_static);
}

static* function < Function*pred_possessive_14::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[14];
	Term* areg13 = local_aregs[13]->Deref();
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg12)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg13)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_gen_case_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_gen_case_4__1(mach));
}

static* function < Function*pred_gen_case_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s340, chat_parser::s344, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_gen_marker_4::exec_static);
}

static* function < Function*pred_an_s_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_an_s_4__1(mach));
}

static* function < Function*pred_an_s_4::(PrologMachine*) {
	mach::FillAlternative(pred_an_s_4::exec_pred_an_s_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s303;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_an_s_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_determiner_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_determiner_7__1(mach));
}

static* function < Function*pred_determiner_7::(PrologMachine*) {
	mach::FillAlternative(pred_determiner_7::exec_pred_determiner_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_det_7::exec_static);
}

static* function < Function*pred_determiner_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_quant_phrase_7::exec_static);
}

static* function < Function*pred_quant_phrase_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_quant_phrase_7__1(mach));
}

static* function < Function*pred_quant_phrase_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s273, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var9;
	local_aregs[4] = var7->Deref();
	local_aregs[5] = var10;
	local_aregs[6] = F(chat_parser::s224, { var2->Deref(), var3->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_quant_6::exec_static);
}

static* function < Function*pred_quant_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_quant_6__1(mach));
}

static* function < Function*pred_quant_6::(PrologMachine*) {
	mach::FillAlternative(pred_quant_6::exec_pred_quant_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg1)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var8;
	local_aregs[6] = F(chat_parser::s65, { var6->Deref(), var7->Deref(), var9, var8->Deref(), var10, F(chat_parser::s404, chat_parser::s342, var9->Deref(), var3->Deref(), var10->Deref(), var5->Deref(), continuation) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_neg_adv_6::exec_static);
}

static* function < Function*pred_quant_6::(PrologMachine*) {
	mach::FillAlternative(pred_quant_6::exec_pred_quant_6__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
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
if(!((areg1)->Unify(chat_parser::s150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s37;
local_aregs[1] = var2->Deref();
local_aregs[2] = var6;
local_aregs[3] = var4->Deref();
local_aregs[4] = var7;
local_aregs[5] = F(chat_parser::s336,var8,var6->Deref(),var3->Deref(),var7->Deref(),var5->Deref(),F(chat_parser::s337, { var8->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_quant_6::(PrologMachine*) {
	mach::FillAlternative(pred_quant_6::exec_pred_quant_6__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s344))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(chat_parser::s83))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s344;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_quant_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s305))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_neg_adv_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_neg_adv_6__1(mach));
}

static* function < Function*pred_neg_adv_6::(PrologMachine*) {
	mach::FillAlternative(pred_neg_adv_6::exec_pred_neg_adv_6__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
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
if(!((areg1)->Unify(F(chat_parser::s3,chat_parser::s210,var1->Deref())))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s210;
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = var4->Deref();
local_aregs[4] = var5->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_neg_adv_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_op_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sup_op_2__1(mach));
}

static* function < Function*pred_sup_op_2::(PrologMachine*) {
	mach::FillAlternative(pred_sup_op_2::exec_pred_sup_op_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s171))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s210, chat_parser::s172)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_op_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s188))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s210, chat_parser::s187)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_np_mods_12::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11],mach.Areg[12]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(12);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_mods_12__1(mach));
}

static* function < Function*pred_np_mods_12::(PrologMachine*) {
	mach::FillAlternative(pred_np_mods_12::exec_pred_np_mods_12__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s5, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var14;
	local_aregs[5] = var10->Deref();
	local_aregs[6] = var15;
	local_aregs[7] = var12->Deref();
	local_aregs[8] = var16;
	local_aregs[9] = F(chat_parser::s361, var17, F(chat_parser::s192, { var17->Deref(), var14->Deref(), var18, F(chat_parser::s186, { var6->Deref(), var18->Deref(), var19, F(chat_parser::s192, { var14->Deref(), var6->Deref(), var20, F(chat_parser::s222, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var19->Deref(), var7->Deref(), var20->Deref(), var9->Deref(), var15->Deref(), var11->Deref(), var16->Deref(), var13->Deref(), continuation }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_np_mod_9::exec_static);
}

static* function < Function*pred_np_mods_12::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_np_mod_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_np_mod_9__1(mach));
}

static* function < Function*pred_np_mod_9::(PrologMachine*) {
	mach::FillAlternative(pred_np_mod_9::exec_pred_np_mod_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = var9->Deref();
	local_aregs[8] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pp_8::exec_static);
}

static* function < Function*pred_np_mod_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = var9->Deref();
	local_aregs[8] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_reduced_relative_8::exec_static);
}

static* function < Function*pred_verb_mods_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_mods_8__1(mach));
}

static* function < Function*pred_verb_mods_8::(PrologMachine*) {
	mach::FillAlternative(pred_verb_mods_8::exec_pred_verb_mods_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var11;
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var12;
	local_aregs[7] = F(chat_parser::s361, var13, F(chat_parser::s192, { var13->Deref(), var10->Deref(), var14, F(chat_parser::s186, { var3->Deref(), var14->Deref(), var15, F(chat_parser::s192, { var10->Deref(), var3->Deref(), var16, F(chat_parser::s376, { var2->Deref(), var15->Deref(), var16->Deref(), var5->Deref(), var11->Deref(), var7->Deref(), var12->Deref(), var9->Deref(), continuation }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_mod_7::exec_static);
}

static* function < Function*pred_verb_mods_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_mod_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_mod_7__1(mach));
}

static* function < Function*pred_verb_mod_7::(PrologMachine*) {
	mach::FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adv_phrase_7::exec_static);
}

static* function < Function*pred_verb_mod_7::(PrologMachine*) {
	mach::FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(chat_parser::s15, { var1->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), F(chat_parser::s104, { var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_adv_1::exec_static);
}

static* function < Function*pred_verb_mod_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = chat_parser::s67;
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = var6->Deref();
	local_aregs[7] = var7->Deref();
	local_aregs[8] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pp_8::exec_static);
}

static* function < Function*pred_adjs_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adjs_5__1(mach));
}

static* function < Function*pred_adjs_5::(PrologMachine*) {
	mach::FillAlternative(pred_adjs_5::exec_pred_adjs_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(chat_parser::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var7;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var8;
	local_aregs[5] = F(chat_parser::s12, { var2->Deref(), var7->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pre_adj_5::exec_static);
}

static* function < Function*pred_adjs_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
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
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pre_adj_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pre_adj_5__1(mach));
}

static* function < Function*pred_pre_adj_5::(PrologMachine*) {
	mach::FillAlternative(pred_pre_adj_5::exec_pred_pre_adj_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adj_6::exec_static);
}

static* function < Function*pred_pre_adj_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sup_phrase_5::exec_static);
}

static* function < Function*pred_sup_phrase_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sup_phrase_5__1(mach));
}

static* function < Function*pred_sup_phrase_5::(PrologMachine*) {
	mach::FillAlternative(pred_sup_phrase_5::exec_pred_sup_phrase_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s334, chat_parser::s188, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sup_adj_5::exec_static);
}

static* function < Function*pred_sup_phrase_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(chat_parser::s334, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var7;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var8;
	local_aregs[5] = F(chat_parser::s10, chat_parser::s273, var2->Deref(), var7->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sup_adv_5::exec_static);
}

static* function < Function*pred_comp_phrase_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_comp_phrase_6__1(mach));
}

static* function < Function*pred_comp_phrase_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s64, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var9;
	local_aregs[4] = var7->Deref();
	local_aregs[5] = var10;
	local_aregs[6] = F(chat_parser::s223, var11, F(chat_parser::s266, var12, F(chat_parser::s216, { var3->Deref(), var13, var12->Deref(), var14, chat_parser::s67, var11->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_comp_6::exec_static);
}

static* function < Function*pred_comp_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_comp_6__1(mach));
}

static* function < Function*pred_comp_6::(PrologMachine*) {
	mach::FillAlternative(pred_comp_6::exec_pred_comp_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var7;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var8;
	local_aregs[5] = F(chat_parser::s10, chat_parser::s273, var2->Deref(), var7->Deref(), var9, var8->Deref(), var10, F(chat_parser::s404, chat_parser::s342, var9->Deref(), var4->Deref(), var10->Deref(), var6->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_comp_adv_5::exec_static);
}

static* function < Function*pred_comp_6::(PrologMachine*) {
	mach::FillAlternative(pred_comp_6::exec_pred_comp_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s187))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var7;
	local_aregs[5] = F(chat_parser::s404, chat_parser::s342, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rel_adj_5::exec_static);
}

static* function < Function*pred_comp_6::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var9 = V(mach);
Var* var8 = V(mach);
Var* var7 = V(mach);
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s305))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s35;
local_aregs[1] = var2->Deref();
local_aregs[2] = var6;
local_aregs[3] = var4->Deref();
local_aregs[4] = var7;
local_aregs[5] = F(chat_parser::s10,chat_parser::s273,var1->Deref(),var6->Deref(),var8,var7->Deref(),var9,F(chat_parser::s404,chat_parser::s35,var8->Deref(),var3->Deref(),var9->Deref(),var5->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_relative_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_relative_9__1(mach));
}

static* function < Function*pred_relative_9::(PrologMachine*) {
	mach::FillAlternative(pred_relative_9::exec_pred_relative_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg1)->Unify(F(chat_parser::s5, var2, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(chat_parser::s288, { var1->Deref(), var10, var2->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_pred_1::exec_static);
}

static* function < Function*pred_relative_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_conj_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_conj_8__1(mach));
}

static* function < Function*pred_rel_conj_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var11;
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var12;
	local_aregs[7] = F(chat_parser::s290, { var1->Deref(), var2->Deref(), var9->Deref(), var3->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rel_7::exec_static);
}

static* function < Function*pred_rel_rest_10::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(10);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_rest_10__1(mach));
}

static* function < Function*pred_rel_rest_10::(PrologMachine*) {
	mach::FillAlternative(pred_rel_rest_10::exec_pred_rel_rest_10__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var11;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var12;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var13;
	local_aregs[7] = var9->Deref();
	local_aregs[8] = var14;
	local_aregs[9] = F(chat_parser::s288, { var1->Deref(), var11->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_conj_9::exec_static);
}

static* function < Function*pred_rel_rest_10::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_7__1(mach));
}

static* function < Function*pred_rel_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg1)->Unify(F(chat_parser::s286, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5->Deref();
	local_aregs[1] = var9;
	local_aregs[2] = var7->Deref();
	local_aregs[3] = var10;
	local_aregs[4] = F(chat_parser::s368, { var1->Deref(), var2->Deref(), var9->Deref(), var11, var10->Deref(), var12, F(chat_parser::s303, { var3->Deref(), var13, var11->Deref(), var14, var12->Deref(), var15, F(chat_parser::s361, var16, F(chat_parser::s186, { var13->Deref(), var16->Deref(), var4->Deref(), F(chat_parser::s62, { var14->Deref(), var6->Deref(), var15->Deref(), var8->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_myopen_4::exec_static);
}

static* function < Function*pred_variable_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_variable_6__1(mach));
}

static* function < Function*pred_variable_6::(PrologMachine*) {
	mach::FillAlternative(pred_variable_6::exec_pred_variable_6__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var11 = V(mach);
Var* var10 = V(mach);
Var* var9 = V(mach);
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
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(F(chat_parser::s399,chat_parser::s128,chat_parser::s207,F(chat_parser::s216,F(chat_parser::s216, { var1->Deref(), F(chat_parser::s386, { var2->Deref() }), Const::Nil }),var1->Deref(),var6,var7,var8,var9,var10),var11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s343;
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = var11->Deref();
local_aregs[5] = F(chat_parser::s361, { var9->Deref(), var10->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_variable_6::(PrologMachine*) {
	mach::FillAlternative(pred_variable_6::exec_pred_variable_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s216, var6, var7, var8, var9, var10, var11, var12), var13)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var8->Deref();
	local_aregs[5] = var3->Deref();
	local_aregs[6] = var4->Deref();
	local_aregs[7] = var5->Deref();
	local_aregs[8] = var13->Deref();
	local_aregs[9] = F(chat_parser::s361, { var11->Deref(), var12->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_wh_9::exec_static);
}

static* function < Function*pred_variable_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s260, F(chat_parser::s260, var6, var7), chat_parser::s67, var8, var9), var10)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var11;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var12;
	local_aregs[5] = F(chat_parser::s386, { var2->Deref(), var1->Deref(), var7->Deref(), var13, var14, var11->Deref(), var4->Deref(), var12->Deref(), var10->Deref(), F(chat_parser::s361, { var8->Deref(), var9->Deref(), F(chat_parser::s68, { var14->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_prep_5::exec_static);
}

static* function < Function*pred_wh_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wh_9__1(mach));
}

static* function < Function*pred_wh_9::(PrologMachine*) {
	mach::FillAlternative(pred_wh_9::exec_pred_wh_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(F(chat_parser::s216, { var2->Deref(), F(chat_parser::s386, { var1->Deref() }), Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = F(chat_parser::s299, { var8->Deref(), chat_parser::s81, var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rel_pron_5::exec_static);
}

static* function < Function*pred_wh_9::(PrologMachine*) {
	mach::FillAlternative(pred_wh_9::exec_pred_wh_9__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(F(chat_parser::s216, var3, var4, F(chat_parser::s5, F(chat_parser::s260, var5, var6), Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(chat_parser::s3, var12, chat_parser::s63);
	local_aregs[3] = var8->Deref();
	local_aregs[4] = var13;
	local_aregs[5] = var10->Deref();
	local_aregs[6] = var14;
	local_aregs[7] = F(chat_parser::s265, { var5->Deref(), var13->Deref(), var15, var14->Deref(), var16, F(chat_parser::s386, { var1->Deref(), var2->Deref(), var6->Deref(), var17, var18, var15->Deref(), var9->Deref(), var16->Deref(), var11->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_np_head0_7::exec_static);
}

static* function < Function*pred_wh_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var10;
	local_aregs[4] = var8->Deref();
	local_aregs[5] = var11;
	local_aregs[6] = F(chat_parser::s304, var12, F(chat_parser::s216, { var3->Deref(), var4->Deref(), var5->Deref(), chat_parser::s83, chat_parser::s329, var12->Deref(), var13, var10->Deref(), var7->Deref(), var11->Deref(), var9->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_whose_6::exec_static);
}

static* function < Function*pred_reduced_relative_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reduced_relative_8__1(mach));
}

static* function < Function*pred_reduced_relative_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(chat_parser::s278, { var1->Deref(), var9, var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_pred_1::exec_static);
}

static* function < Function*pred_reduced_rel_conj_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reduced_rel_conj_8__1(mach));
}

static* function < Function*pred_reduced_rel_conj_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var11;
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var12;
	local_aregs[7] = F(chat_parser::s279, { var1->Deref(), var2->Deref(), var9->Deref(), var3->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_reduced_rel_7::exec_static);
}

static* function < Function*pred_reduced_rel_rest_10::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(10);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reduced_rel_rest_10__1(mach));
}

static* function < Function*pred_reduced_rel_rest_10::(PrologMachine*) {
	mach::FillAlternative(pred_reduced_rel_rest_10::exec_pred_reduced_rel_rest_10__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var11;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var12;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var13;
	local_aregs[7] = var9->Deref();
	local_aregs[8] = var14;
	local_aregs[9] = F(chat_parser::s278, { var1->Deref(), var11->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_conj_9::exec_static);
}

static* function < Function*pred_reduced_rel_rest_10::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_reduced_rel_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reduced_rel_7__1(mach));
}

static* function < Function*pred_reduced_rel_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg1)->Unify(F(chat_parser::s277, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5->Deref();
	local_aregs[1] = var9;
	local_aregs[2] = var7->Deref();
	local_aregs[3] = var10;
	local_aregs[4] = F(chat_parser::s281, { var1->Deref(), var2->Deref(), var9->Deref(), var11, var10->Deref(), var12, F(chat_parser::s303, { var3->Deref(), var13, var11->Deref(), var14, var12->Deref(), var15, F(chat_parser::s361, var16, F(chat_parser::s186, { var13->Deref(), var16->Deref(), var4->Deref(), F(chat_parser::s62, { var14->Deref(), var6->Deref(), var15->Deref(), var8->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_myopen_4::exec_static);
}

static* function < Function*pred_reduced_wh_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reduced_wh_6__1(mach));
}

static* function < Function*pred_reduced_wh_6::(PrologMachine*) {
	mach::FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s216, F(chat_parser::s216, { var1->Deref(), F(chat_parser::s386, { var2->Deref() }), Const::Nil }), var1->Deref(), var6, var7, var8, var9, var10), F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s374, chat_parser::s43, F(chat_parser::s3, chat_parser::s267, chat_parser::s119), var1->Deref(), chat_parser::s178), F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s195, var11, var12), F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s264, { var12->Deref(), var13, var14 }), var15))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var16;
	local_aregs[1] = var12->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var17;
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var18;
	local_aregs[6] = F(chat_parser::s264, { var12->Deref(), var13->Deref(), var14->Deref(), var17->Deref(), var4->Deref(), var18->Deref(), var15->Deref(), F(chat_parser::s361, { var9->Deref(), var10->Deref(), F(chat_parser::s330, { var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_neg_6::exec_static);
}

static* function < Function*pred_reduced_wh_6::(PrologMachine*) {
	mach::FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s216, F(chat_parser::s216, { var1->Deref(), F(chat_parser::s386, { var2->Deref() }), Const::Nil }), var1->Deref(), var6, var7, var8, var9, var10), F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s370, var11, var12, var13, var14), var15))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var11->Deref();
	local_aregs[1] = var13->Deref();
	local_aregs[2] = var14->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = var15->Deref();
	local_aregs[7] = F(chat_parser::s361, { var9->Deref(), var10->Deref(), F(chat_parser::s330, { var6->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_participle_7::exec_static);
}

static* function < Function*pred_reduced_wh_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(chat_parser::s399, chat_parser::s206, chat_parser::s207, F(chat_parser::s216, var6, var7, var8, var9, var10, var11, var12), F(chat_parser::s399, chat_parser::s128, chat_parser::s207, F(chat_parser::s216, F(chat_parser::s216, { var1->Deref(), F(chat_parser::s386, { var2->Deref() }), Const::Nil }), var1->Deref(), var13, var14, var15, var16, var17), var18))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var19;
	local_aregs[1] = F(chat_parser::s330, { var8->Deref(), F(chat_parser::s373, { var13->Deref(), F(chat_parser::s216, { var6->Deref(), var7->Deref(), var20, var9->Deref(), chat_parser::s329, var19->Deref(), var21, var3->Deref(), var4->Deref(), var5->Deref(), var18->Deref(), F(chat_parser::s361, { var11->Deref(), var12->Deref(), F(chat_parser::s361, { var16->Deref(), var17->Deref(), continuation }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_all_1::exec_static);
}

static* function < Function*pred_verb_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_8__1(mach));
}

static* function < Function*pred_verb_8::(PrologMachine*) {
	mach::FillAlternative(pred_verb_8::exec_pred_verb_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(chat_parser::s370, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var7->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_verb_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s370, var1, var2, F(chat_parser::s3, var3, chat_parser::s119), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var12;
	local_aregs[1] = F(chat_parser::s3, { var3->Deref(), chat_parser::s119 });
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var13;
	local_aregs[4] = var8->Deref();
	local_aregs[5] = var14;
	local_aregs[6] = var10->Deref();
	local_aregs[7] = var15;
	local_aregs[8] = F(chat_parser::s378, { var12->Deref(), var16, F(chat_parser::s195, { var16->Deref(), var5->Deref(), var14->Deref(), var17, var15->Deref(), var18, F(chat_parser::s292, { var13->Deref(), var12->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), var17->Deref(), var9->Deref(), var18->Deref(), var11->Deref(), F(chat_parser::s378, { var1->Deref(), var7->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_rest_verb_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rest_verb_9__1(mach));
}

static* function < Function*pred_rest_verb_9::(PrologMachine*) {
	mach::FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s5, chat_parser::s246, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = F(chat_parser::s3, chat_parser::s243, chat_parser::s240);
	local_aregs[2] = var9;
	local_aregs[3] = var10;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var11;
	local_aregs[6] = var6->Deref();
	local_aregs[7] = var12;
	local_aregs[8] = F(chat_parser::s137, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_rest_verb_9::(PrologMachine*) {
	mach::FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = var11;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var12;
	local_aregs[6] = var6->Deref();
	local_aregs[7] = var13;
	local_aregs[8] = F(chat_parser::s43, { var9->Deref(), var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_rest_verb_9::(PrologMachine*) {
	mach::FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = chat_parser::s151;
	local_aregs[2] = var6;
	local_aregs[3] = var7;
	local_aregs[4] = var2->Deref();
	local_aregs[5] = var3->Deref();
	local_aregs[6] = var4->Deref();
	local_aregs[7] = var5->Deref();
	local_aregs[8] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_rest_verb_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s178))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_have_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_have_8__1(mach));
}

static* function < Function*pred_have_8::(PrologMachine*) {
	mach::FillAlternative(pred_have_8::exec_pred_have_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = var11;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var12;
	local_aregs[6] = var6->Deref();
	local_aregs[7] = var13;
	local_aregs[8] = F(chat_parser::s43, { var9->Deref(), var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_have_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_be_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_be_9__1(mach));
}

static* function < Function*pred_be_9::(PrologMachine*) {
	mach::FillAlternative(pred_be_9::exec_pred_be_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s242))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_be_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s5, chat_parser::s268, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_passive_7::exec_static);
}

static* function < Function*pred_passive_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_passive_7__1(mach));
}

static* function < Function*pred_passive_7::(PrologMachine*) {
	mach::FillAlternative(pred_passive_7::exec_pred_passive_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s242))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(chat_parser::s3, chat_parser::s243, chat_parser::s240);
	local_aregs[2] = var6;
	local_aregs[3] = var7;
	local_aregs[4] = var2->Deref();
	local_aregs[5] = var3->Deref();
	local_aregs[6] = var4->Deref();
	local_aregs[7] = var5->Deref();
	local_aregs[8] = F(chat_parser::s378, { var1->Deref(), var8, F(chat_parser::s242, { var8->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_8::exec_static);
}

static* function < Function*pred_passive_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_participle_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_participle_7__1(mach));
}

static* function < Function*pred_participle_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s370, var1, var2, chat_parser::s151, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var10;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var11;
	local_aregs[4] = var8->Deref();
	local_aregs[5] = var12;
	local_aregs[6] = F(chat_parser::s374, { var1->Deref(), var13, var14, var15, var11->Deref(), var7->Deref(), var12->Deref(), var9->Deref(), F(chat_parser::s241, { var13->Deref(), var2->Deref(), var3->Deref(), F(chat_parser::s378, { var1->Deref(), var5->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_neg_6::exec_static);
}

static* function < Function*pred_passive_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_passive_1__1(mach));
}

static* function < Function*pred_passive_1::(PrologMachine*) {
	mach::FillAlternative(pred_passive_1::exec_pred_passive_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, var1, chat_parser::s362)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_passive_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, var1, chat_parser::s91)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_participle_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_participle_3__1(mach));
}

static* function < Function*pred_participle_3::(PrologMachine*) {
	mach::FillAlternative(pred_participle_3::exec_pred_participle_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, chat_parser::s268, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_participle_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s242))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_close_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_close_4__1(mach));
}

static* function < Function*pred_close_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s62;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_virtual_3::exec_static);
}

static* function < Function*pred_myopen_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_myopen_4__1(mach));
}

static* function < Function*pred_myopen_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s399, chat_parser::s128, chat_parser::s207, chat_parser::s62, var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_args_9__1(mach));
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var11;
	local_aregs[2] = var12;
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var13;
	local_aregs[5] = var9->Deref();
	local_aregs[6] = var14;
	local_aregs[7] = F(chat_parser::s372, { var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_advs_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s362))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, F(chat_parser::s34, chat_parser::s90, var1), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s216;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_arg_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s91))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, F(chat_parser::s34, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s216;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var11;
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var12;
	local_aregs[5] = var9->Deref();
	local_aregs[6] = var13;
	local_aregs[7] = F(chat_parser::s227, { var2->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), var13->Deref(), var10->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_arg_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, chat_parser::s380, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s347;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, F(chat_parser::s34, chat_parser::s264, var2), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var9;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pred_conj_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, F(chat_parser::s34, chat_parser::s90, var2), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s216;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_arg_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s5, F(chat_parser::s34, chat_parser::s90, var1), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s216;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_arg_7::exec_static);
}

static* function < Function*pred_verb_args_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_no_args_1::exec_static);
}

static* function < Function*pred_object_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_object_8__1(mach));
}

static* function < Function*pred_object_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var9;
	local_aregs[1] = F(chat_parser::s186, { var9->Deref(), var3->Deref(), var10, F(chat_parser::s16, { var2->Deref(), var11, var10->Deref(), var5->Deref(), var12, var7->Deref(), var13, F(chat_parser::s226, { var1->Deref(), var11->Deref(), var3->Deref(), var4->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adv_1::exec_static);
}

static* function < Function*pred_obj_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_obj_8__1(mach));
}

static* function < Function*pred_obj_8::(PrologMachine*) {
	mach::FillAlternative(pred_obj_8::exec_pred_obj_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s149))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s5, F(chat_parser::s34, chat_parser::s90, var1), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s216;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_arg_7::exec_static);
}

static* function < Function*pred_obj_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s90))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pred_conj_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pred_conj_7__1(mach));
}

static* function < Function*pred_pred_conj_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var11;
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var12;
	local_aregs[7] = F(chat_parser::s263, { var1->Deref(), var9->Deref(), var2->Deref(), var10->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_predicate_7::exec_static);
}

static* function < Function*pred_pred_rest_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pred_rest_9__1(mach));
}

static* function < Function*pred_pred_rest_9::(PrologMachine*) {
	mach::FillAlternative(pred_pred_rest_9::exec_pred_pred_rest_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var11;
	local_aregs[4] = var3->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var12;
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var13;
	local_aregs[9] = F(chat_parser::s262, { var10->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), var13->Deref(), var9->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_conj_9::exec_static);
}

static* function < Function*pred_pred_rest_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_arg_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_arg_7__1(mach));
}

static* function < Function*pred_verb_arg_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s216))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = F(chat_parser::s373, var8, F(chat_parser::s216, { var1->Deref(), var9, var8->Deref(), var10, chat_parser::s67, var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_s_all_1::exec_static);
}

static* function < Function*pred_advs_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_advs_7__1(mach));
}

static* function < Function*pred_advs_7::(PrologMachine*) {
	mach::FillAlternative(pred_advs_7::exec_pred_advs_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = F(chat_parser::s15, { var1->Deref(), var5->Deref(), var9, var7->Deref(), var10, F(chat_parser::s16, { var2->Deref(), var3->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_adv_1::exec_static);
}

static* function < Function*pred_advs_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_phrase_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adj_phrase_6__1(mach));
}

static* function < Function*pred_adj_phrase_6::(PrologMachine*) {
	mach::FillAlternative(pred_adj_phrase_6::exec_pred_adj_phrase_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = F(chat_parser::s104, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adj_6::exec_static);
}

static* function < Function*pred_adj_phrase_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_comp_phrase_6::exec_static);
}

static* function < Function*pred_no_args_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_no_args_1__1(mach));
}

static* function < Function*pred_no_args_1::(PrologMachine*) {
	mach::FillAlternative(pred_no_args_1::exec_pred_no_args_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s362))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_no_args_1::(PrologMachine*) {
	mach::FillAlternative(pred_no_args_1::exec_pred_no_args_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s91))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_no_args_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s156))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_conj_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_conj_9__1(mach));
}

static* function < Function*pred_conj_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s69, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s69, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s69, { var1->Deref(), var4->Deref(), var5->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var9->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_conj_7::exec_static);
}

static* function < Function*pred_noun_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_noun_6__1(mach));
}

static* function < Function*pred_noun_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = F(chat_parser::s213, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_adj_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adj_6__1(mach));
}

static* function < Function*pred_adj_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg1)->Unify(F(chat_parser::s10, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = F(chat_parser::s10, { var2->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_prep_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_prep_5__1(mach));
}

static* function < Function*pred_prep_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s265, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s265, { var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_rel_adj_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_adj_5__1(mach));
}

static* function < Function*pred_rel_adj_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s10, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s287, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_sup_adj_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sup_adj_5__1(mach));
}

static* function < Function*pred_sup_adj_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s10, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s335, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_comp_adv_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_comp_adv_5__1(mach));
}

static* function < Function*pred_comp_adv_5::(PrologMachine*) {
	mach::FillAlternative(pred_comp_adv_5::exec_pred_comp_adv_5__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s172))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s172;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_comp_adv_5::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s187))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s187;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_sup_adv_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sup_adv_5__1(mach));
}

static* function < Function*pred_sup_adv_5::(PrologMachine*) {
	mach::FillAlternative(pred_sup_adv_5::exec_pred_sup_adv_5__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s171))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s171;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_sup_adv_5::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(chat_parser::s188))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s188;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_rel_pron_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_pron_5__1(mach));
}

static* function < Function*pred_rel_pron_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s289, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_name_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_name_5__1(mach));
}

static* function < Function*pred_name_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = F(chat_parser::s340, { var1->Deref(), var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), F(chat_parser::s193, { var1->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_opt_the_4::exec_static);
}

static* function < Function*pred_int_art_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_art_7__1(mach));
}

static* function < Function*pred_int_art_7::(PrologMachine*) {
	mach::FillAlternative(pred_int_art_7::exec_pred_int_art_7__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[7];
Term* areg6 = local_aregs[6]->Deref();
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
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
if(!((areg1)->Unify(chat_parser::s252))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(chat_parser::s273,chat_parser::s305,F(chat_parser::s386, { var1->Deref() }))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg6)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s143;
local_aregs[1] = var2->Deref();
local_aregs[2] = var6;
local_aregs[3] = var4->Deref();
local_aregs[4] = var7;
local_aregs[5] = F(chat_parser::s404,chat_parser::s179,var6->Deref(),var3->Deref(),var7->Deref(),var5->Deref(),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[7] = local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_int_art_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = F(chat_parser::s152, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_int_pron_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_pron_5__1(mach));
}

static* function < Function*pred_int_pron_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s154, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_adverb_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adverb_5__1(mach));
}

static* function < Function*pred_adverb_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s13, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s15, { var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_poss_pron_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_poss_pron_6__1(mach));
}

static* function < Function*pred_poss_pron_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(chat_parser::s269, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = var7->Deref();
	local_aregs[5] = F(chat_parser::s258, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_pers_pron_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pers_pron_7__1(mach));
}

static* function < Function*pred_pers_pron_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s269, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var9;
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var6->Deref();
	local_aregs[3] = var7->Deref();
	local_aregs[4] = var8->Deref();
	local_aregs[5] = F(chat_parser::s247, { var9->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_quantifier_pron_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_quantifier_pron_6__1(mach));
}

static* function < Function*pred_quantifier_pron_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = F(chat_parser::s275, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_context_pron_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_context_pron_6__1(mach));
}

static* function < Function*pred_context_pron_6::(PrologMachine*) {
	mach::FillAlternative(pred_context_pron_6::exec_pred_context_pron_6__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(chat_parser::s265,chat_parser::s148)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(chat_parser::s250))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s390;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_context_pron_6::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[6];
Term* areg5 = local_aregs[5]->Deref();
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(chat_parser::s265,chat_parser::s37)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(chat_parser::s352))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s389;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_number_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_number_6__1(mach));
}

static* function < Function*pred_number_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s194, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = F(chat_parser::s224, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_terminator_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_terminator_5__1(mach));
}

static* function < Function*pred_terminator_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s341, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_opt_the_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_opt_the_4__1(mach));
}

static* function < Function*pred_opt_the_4::(PrologMachine*) {
	mach::FillAlternative(pred_opt_the_4::exec_pred_opt_the_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opt_the_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = chat_parser::s344;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_5::exec_static;
}

static* function < Function*pred_conj_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_conj_7__1(mach));
}

static* function < Function*pred_conj_7::(PrologMachine*) {
	mach::FillAlternative(pred_conj_7::exec_pred_conj_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg1)->Unify(chat_parser::s173))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s173))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::s4;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_conj_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg1)->Unify(chat_parser::s173))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s105))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s69, { var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_loc_pred_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_loc_pred_5__1(mach));
}

static* function < Function*pred_loc_pred_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = F(chat_parser::s174, { var6->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_)~_5__1(mach);
}

static* function < Function*pred_::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
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
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = var4->Deref();
local_aregs[4] = var5->Deref();
local_aregs[5] = F(chat_parser::s404, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_terminal_5::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_word_1__1(mach));
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_)~_1::exec_static;
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_conj_1::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adverb_1::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sup_adj_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rel_adj_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_adj_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_name_1::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_terminator_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = var5;
	local_aregs[5] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pers_pron_5::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_poss_pron_4::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rel_pron_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_form_4::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_noun_form_3::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_prep_1::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_quantifier_pron_3::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_number_3::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_det_4::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_art_4::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::FillAlternative(pred_word_1::exec_pred_word_1__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_int_pron_2::exec_static);
}

static* function < Function*pred_word_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_loc_pred_2::exec_static);
}

static* function < Function*pred_::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_)~_1__1(mach);
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s143))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s394))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s347))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s230))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s404))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s303))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s342))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s37))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s344))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s210))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s35))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s343))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__15);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s172))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__16);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s187))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__17);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s171))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__18);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s188))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__19);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s179))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::FillAlternative(pred_~_1::exec_pred_~_1__20);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s390))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(chat_parser::s389))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_conj_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_conj_1__1(mach));
}

static* function < Function*pred_conj_1::(PrologMachine*) {
	mach::FillAlternative(pred_conj_1::exec_pred_conj_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_conj_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s238))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_pron_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_pron_2__1(mach));
}

static* function < Function*pred_int_pron_2::(PrologMachine*) {
	mach::FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s388))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_pron_2::(PrologMachine*) {
	mach::FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s391))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_pron_2::(PrologMachine*) {
	mach::FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s392))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_pron_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s393))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s67))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_art_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_int_art_4__1(mach));
}

static* function < Function*pred_int_art_4::(PrologMachine*) {
	mach::FillAlternative(pred_int_art_4::exec_pred_int_art_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s388))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s153, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_int_art_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s391))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s153, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_det_4__1(mach));
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s344))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s344, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s83))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s23))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s108))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s108))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s20))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s20))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::FillAlternative(pred_det_4::exec_pred_det_4__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_det_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s203))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s203))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_number_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_number_3__1(mach));
}

static* function < Function*pred_number_3::(PrologMachine*) {
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
	local_aregs[2] = F(chat_parser::s19, { var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_tr_number_2::exec_static);
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tr_number_2__1(mach));
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s194, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s235))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s363))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s350))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s120))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s315))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s312))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s103))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s202))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tr_number_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s339))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::posint10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_ag_number_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ag_number_2__1(mach));
}

static* function < Function*pred_ag_number_2::(PrologMachine*) {
	mach::FillAlternative(pred_ag_number_2::exec_pred_ag_number_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_ag_number_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = chat_parser::posint1;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_quantifier_pron_3__1(mach));
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s109))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s108))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s110))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s108))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s111))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s108))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s348))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s321))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s322))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s323))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s348))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s28))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s30))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s348))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s205))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s203))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quantifier_pron_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s211))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s203))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s348))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_prep_1__1(mach));
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s35))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s37))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s230))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s354))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s54))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s396))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s148))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s234))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s126))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::FillAlternative(pred_prep_1::exec_pred_prep_1__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s155))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prep_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s351))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_form_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_noun_form_3__1(mach));
}

static* function < Function*pred_noun_form_3::(PrologMachine*) {
	mach::FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__2);
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_noun_plu_2::exec_static);
}

static* function < Function*pred_noun_form_3::(PrologMachine*) {
	mach::FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_noun_sin_1::exec_static);
}

static* function < Function*pred_noun_form_3::(PrologMachine*) {
	mach::FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s271))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s271))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_form_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s245))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s245))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_root_form_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_root_form_1__1(mach));
}

static* function < Function*pred_root_form_1::(PrologMachine*) {
	mach::FillAlternative(pred_root_form_1::exec_pred_root_form_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::posint1, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_root_form_1::(PrologMachine*) {
	mach::FillAlternative(pred_root_form_1::exec_pred_root_form_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::posint2, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_root_form_1::(PrologMachine*) {
	mach::FillAlternative(pred_root_form_1::exec_pred_root_form_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::posint1, chat_parser::s252)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_root_form_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s252)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_root_1__1(mach));
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_root_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_regular_pres_1__1(mach));
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_pres_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_regular_past_2__1(mach));
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s135))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s51))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s71))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s97))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s113))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_regular_past_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s122))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_pron_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_pron_2__1(mach));
}

static* function < Function*pred_rel_pron_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s392))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_pron_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s393))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s67))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_pron_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s391))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s364))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_poss_pron_4__1(mach));
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s189))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s403))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s142))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s180))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s140))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s118))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s163))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s197))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s239))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_poss_pron_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s345))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pers_pron_5__1(mach));
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s144))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s402))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s139))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s180))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s313))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s118))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s162))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s197))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s382))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s346))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(chat_parser::s329))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s182))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s67, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s141))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s180))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s67, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s140))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s118))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s67, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s366))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s67, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pers_pron_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s346))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(chat_parser::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(chat_parser::s67, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_terminator_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_terminator_2__1(mach));
}

static* function < Function*pred_terminator_2::(PrologMachine*) {
	mach::FillAlternative(pred_terminator_2::exec_pred_terminator_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_terminator_2::(PrologMachine*) {
	mach::FillAlternative(pred_terminator_2::exec_pred_terminator_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_terminator_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_name_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_name_1__1(mach));
}

static* function < Function*pred_name_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_loc_pred_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_loc_pred_2__1(mach));
}

static* function < Function*pred_loc_pred_2::(PrologMachine*) {
	mach::FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s101))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s265, chat_parser::s102)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_loc_pred_2::(PrologMachine*) {
	mach::FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s384))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s265, chat_parser::s385)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_loc_pred_2::(PrologMachine*) {
	mach::FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s208))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s265, chat_parser::s209)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_loc_pred_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s324))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s265, chat_parser::s325)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adj_2__1(mach));
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s185))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s181))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s358))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s18))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s22))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s36))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s107))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s293))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s133))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s46))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s316))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s166))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s231))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_adj_2::exec_pred_adj_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s198))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adj_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s255))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s273))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rel_adj_2__1(mach));
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s134))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s133))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s172))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s316))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s47))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s46))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s317))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s316))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s167))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s166))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s232))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s231))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rel_adj_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s199))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s198))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sup_adj_2__1(mach));
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s48))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s46))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s319))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s316))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s168))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s166))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	mach::FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s233))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s231))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sup_adj_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s198))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_noun_sin_1__1(mach));
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s358))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s332))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s84))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s326))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s164))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s349))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s183))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s352))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s250))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s32))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s56))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s61))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s75))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s78))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s169))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s176))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s228))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s253))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s282))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s297))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s307))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s308))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_sin_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s224))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_noun_plu_2__1(mach));
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s41))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s359))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s358))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s333))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s332))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s85))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s84))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s327))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s326))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s165))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s164))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s183))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s183))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s349))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s349))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s353))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s352))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s251))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s250))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s33))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s32))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s57))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s56))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s60))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s61))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s76))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s75))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s77))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s78))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s170))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s169))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s177))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s176))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s229))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s228))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s249))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s244))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s248))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s254))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s253))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s283))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s282))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s298))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s297))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s310))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s307))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s309))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s308))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noun_plu_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s225))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s224))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_form_4__1(mach));
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(chat_parser::s151))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_verb_root_1::exec_static);
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(chat_parser::s300, { var2->Deref(), F(chat_parser::s377, { var1->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_regular_pres_1::exec_static);
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_regular_past_2::exec_static);
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s21))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint1, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s31))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint2, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s157))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s31))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, var1, chat_parser::s252)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s381))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint1, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s383))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint2, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s381))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s383))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, var1, chat_parser::s252)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s44))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s45))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s136))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s138))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s93))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s89))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s94))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s95))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s124))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s123))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s296))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s301))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s295))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s243, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s53))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s52))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s73))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__29);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s72))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s99))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s98))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s115))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s119)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(chat_parser::s3, chat_parser::posint3, chat_parser::s314)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_form_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(chat_parser::s114))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(chat_parser::s3, chat_parser::s267, chat_parser::s240)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_verb_type_2__1(mach));
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s39, chat_parser::s137)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s39, chat_parser::s43)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s39, chat_parser::s91)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s294))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s156)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s50))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s362)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s70))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s362)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s96))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s156)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s112))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s362)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_verb_type_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s121))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(chat_parser::s3, chat_parser::s178, chat_parser::s156)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adverb_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_adverb_1__1(mach));
}

static* function < Function*pred_adverb_1::(PrologMachine*) {
	mach::FillAlternative(pred_adverb_1::exec_pred_adverb_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s400))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_adverb_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(chat_parser::s355))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
