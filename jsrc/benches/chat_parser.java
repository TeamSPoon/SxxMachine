import java.util.function.Function; class chat_parser /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("!") ;
static Const s2 = Const.Intern("#") ;
static Const s3 = Const.Intern("+") ;
static Const s4 = Const.Intern(",") ;
static Const s5 = Const.Intern(".") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern("?") ;
static Const s8 = Const.Intern("a") ;
static Const s9 = Const.Intern("active") ;
static Const s10 = Const.Intern("adj") ;
static Const s11 = Const.Intern("adj_phrase") ;
static Const s12 = Const.Intern("adjs") ;
static Const s13 = Const.Intern("adv") ;
static Const s14 = Const.Intern("adv_phrase") ;
static Const s15 = Const.Intern("adverb") ;
static Const s16 = Const.Intern("advs") ;
static Const s17 = Const.Intern("afghanistan") ;
static Const s18 = Const.Intern("african") ;
static Const s19 = Const.Intern("ag_number") ;
static Const s20 = Const.Intern("all") ;
static Const s21 = Const.Intern("am") ;
static Const s22 = Const.Intern("american") ;
static Const s23 = Const.Intern("an") ;
static Const s24 = Const.Intern("an_s") ;
static Const s25 = Const.Intern("and") ;
static Const s26 = Const.Intern("anot") ;
static Const s27 = Const.Intern("any") ;
static Const s28 = Const.Intern("anybody") ;
static Const s29 = Const.Intern("anyone") ;
static Const s30 = Const.Intern("anything") ;
static Const s31 = Const.Intern("are") ;
static Const s32 = Const.Intern("area") ;
static Const s33 = Const.Intern("areas") ;
static Const s34 = Const.Intern("arg") ;
static Const s35 = Const.Intern("as") ;
static Const s36 = Const.Intern("asian") ;
static Const s37 = Const.Intern("at") ;
static Const s38 = Const.Intern("australasia") ;
static Const s39 = Const.Intern("aux") ;
static Const s40 = Const.Intern("average") ;
static Const s41 = Const.Intern("averages") ;
static Const s42 = Const.Intern("baltic") ;
static Const s43 = Const.Intern("be") ;
static Const s44 = Const.Intern("been") ;
static Const s45 = Const.Intern("being") ;
static Const s46 = Const.Intern("big") ;
static Const s47 = Const.Intern("bigger") ;
static Const s48 = Const.Intern("biggest") ;
static Const s49 = Const.Intern("black_sea") ;
static Const s50 = Const.Intern("border") ;
static Const s51 = Const.Intern("bordered") ;
static Const s52 = Const.Intern("bordering") ;
static Const s53 = Const.Intern("borders") ;
static Const s54 = Const.Intern("by") ;
static Const s55 = Const.Intern("call") ;
static Const s56 = Const.Intern("capital") ;
static Const s57 = Const.Intern("capitals") ;
static Const s58 = Const.Intern("chat_parser") ;
static Const s59 = Const.Intern("china") ;
static Const s60 = Const.Intern("cities") ;
static Const s61 = Const.Intern("city") ;
static Const s62 = Const.Intern("close") ;
static Const s63 = Const.Intern("common") ;
static Const s64 = Const.Intern("comp") ;
static Const s65 = Const.Intern("comp_adv") ;
static Const s66 = Const.Intern("comp_phrase") ;
static Const s67 = Const.Intern("compl") ;
static Const s68 = Const.Intern("compl_case") ;
static Const s69 = Const.Intern("conj") ;
static Const s70 = Const.Intern("contain") ;
static Const s71 = Const.Intern("contained") ;
static Const s72 = Const.Intern("containing") ;
static Const s73 = Const.Intern("contains") ;
static Const s74 = Const.Intern("context_pron") ;
static Const s75 = Const.Intern("continent") ;
static Const s76 = Const.Intern("continents") ;
static Const s77 = Const.Intern("countries") ;
static Const s78 = Const.Intern("country") ;
static Const s79 = Const.Intern("cut") ;
static Const s80 = Const.Intern("danube") ;
static Const s81 = Const.Intern("decl") ;
static Const s82 = Const.Intern("declarative") ;
static Const s83 = Const.Intern("def") ;
static Const s84 = Const.Intern("degree") ;
static Const s85 = Const.Intern("degrees") ;
static Const s86 = Const.Intern("det") ;
static Const s87 = Const.Intern("determinate_say") ;
static Const s88 = Const.Intern("determiner") ;
static Const s89 = Const.Intern("did") ;
static Const s90 = Const.Intern("dir") ;
static Const s91 = Const.Intern("ditrans") ;
static Const s92 = Const.Intern("do") ;
static Const s93 = Const.Intern("does") ;
static Const s94 = Const.Intern("doing") ;
static Const s95 = Const.Intern("done") ;
static Const s96 = Const.Intern("drain") ;
static Const s97 = Const.Intern("drained") ;
static Const s98 = Const.Intern("draining") ;
static Const s99 = Const.Intern("drains") ;
static Const s100 = Const.Intern("each") ;
static Const s101 = Const.Intern("east") ;
static Const s102 = Const.Intern("eastof") ;
static Const s103 = Const.Intern("eight") ;
static Const s104 = Const.Intern("empty") ;
static Const s105 = Const.Intern("end") ;
static Const s106 = Const.Intern("equator") ;
static Const s107 = Const.Intern("european") ;
static Const s108 = Const.Intern("every") ;
static Const s109 = Const.Intern("everybody") ;
static Const s110 = Const.Intern("everyone") ;
static Const s111 = Const.Intern("everything") ;
static Const s112 = Const.Intern("exceed") ;
static Const s113 = Const.Intern("exceeded") ;
static Const s114 = Const.Intern("exceeding") ;
static Const s115 = Const.Intern("exceeds") ;
static Const s116 = Const.Intern("execution time is ") ;
static Const s117 = Const.Intern("fail") ;
static Const s118 = Const.Intern("fem") ;
static Const s119 = Const.Intern("fin") ;
static Const s120 = Const.Intern("five") ;
static Const s121 = Const.Intern("flow") ;
static Const s122 = Const.Intern("flowed") ;
static Const s123 = Const.Intern("flowing") ;
static Const s124 = Const.Intern("flows") ;
static Const s125 = Const.Intern("four") ;
static Const s126 = Const.Intern("from") ;
static Const s127 = Const.Intern("fronted_verb") ;
static Const s128 = Const.Intern("gap") ;
static Const s129 = Const.Intern("gen_case") ;
static Const s130 = Const.Intern("gen_marker") ;
static Const s131 = Const.Intern("generic") ;
static Const s132 = Const.Intern("go") ;
static Const s133 = Const.Intern("great") ;
static Const s134 = Const.Intern("greater") ;
static Const s135 = Const.Intern("had") ;
static Const s136 = Const.Intern("has") ;
static Const s137 = Const.Intern("have") ;
static Const s138 = Const.Intern("having") ;
static Const s139 = Const.Intern("he") ;
static Const s140 = Const.Intern("her") ;
static Const s141 = Const.Intern("him") ;
static Const s142 = Const.Intern("his") ;
static Const s143 = Const.Intern("how") ;
static Const s144 = Const.Intern("i") ;
static Const s145 = Const.Intern("imp") ;
static Const s146 = Const.Intern("imperative") ;
static Const s147 = Const.Intern("imperative_verb") ;
static Const s148 = Const.Intern("in") ;
static Const s149 = Const.Intern("ind") ;
static Const s150 = Const.Intern("indef") ;
static Const s151 = Const.Intern("inf") ;
static Const s152 = Const.Intern("int_art") ;
static Const s153 = Const.Intern("int_det") ;
static Const s154 = Const.Intern("int_pron") ;
static Const s155 = Const.Intern("into") ;
static Const s156 = Const.Intern("intrans") ;
static Const s157 = Const.Intern("is") ;
static Const s158 = Const.Intern("is_adv") ;
static Const s159 = Const.Intern("is_pp") ;
static Const s160 = Const.Intern("is_pred") ;
static Const s161 = Const.Intern("is_trace") ;
static Const s162 = Const.Intern("it") ;
static Const s163 = Const.Intern("its") ;
static Const s164 = Const.Intern("ksqmile") ;
static Const s165 = Const.Intern("ksqmiles") ;
static Const s166 = Const.Intern("large") ;
static Const s167 = Const.Intern("larger") ;
static Const s168 = Const.Intern("largest") ;
static Const s169 = Const.Intern("latitude") ;
static Const s170 = Const.Intern("latitudes") ;
static Const s171 = Const.Intern("least") ;
static Const s172 = Const.Intern("less") ;
static Const s173 = Const.Intern("list") ;
static Const s174 = Const.Intern("loc_pred") ;
static Const s175 = Const.Intern("london") ;
static Const s176 = Const.Intern("longitude") ;
static Const s177 = Const.Intern("longitudes") ;
static Const s178 = Const.Intern("main") ;
static Const s179 = Const.Intern("many") ;
static Const s180 = Const.Intern("masc") ;
static Const s181 = Const.Intern("maximum") ;
static Const s182 = Const.Intern("me") ;
static Const s183 = Const.Intern("million") ;
static Const s184 = Const.Intern("milliseconds") ;
static Const s185 = Const.Intern("minimum") ;
static Const s186 = Const.Intern("minus") ;
static Const s187 = Const.Intern("more") ;
static Const s188 = Const.Intern("most") ;
static Const s189 = Const.Intern("my") ;
static Const s190 = Const.Intern("my_string") ;
static Const s191 = Const.Intern("myopen") ;
static Const s192 = Const.Intern("myplus") ;
static Const s193 = Const.Intern("name") ;
static Const s194 = Const.Intern("nb") ;
static Const s195 = Const.Intern("neg") ;
static Const s196 = Const.Intern("neg_adv") ;
static Const s197 = Const.Intern("neut") ;
static Const s198 = Const.Intern("new") ;
static Const s199 = Const.Intern("newer") ;
static Const s200 = Const.Intern("newest") ;
static Const s201 = Const.Intern("nil") ;
static Const s202 = Const.Intern("nine") ;
static Const s203 = Const.Intern("no") ;
static Const s204 = Const.Intern("no_args") ;
static Const s205 = Const.Intern("nobody") ;
static Const s206 = Const.Intern("nogap") ;
static Const s207 = Const.Intern("nonterminal") ;
static Const s208 = Const.Intern("north") ;
static Const s209 = Const.Intern("northof") ;
static Const s210 = Const.Intern("not") ;
static Const s211 = Const.Intern("nothing") ;
static Const s212 = Const.Intern("noun") ;
static Const s213 = Const.Intern("noun_form") ;
static Const s214 = Const.Intern("noun_plu") ;
static Const s215 = Const.Intern("noun_sin") ;
static Const s216 = Const.Intern("np") ;
static Const s217 = Const.Intern("np_all") ;
static Const s218 = Const.Intern("np_compls") ;
static Const s219 = Const.Intern("np_head") ;
static Const s220 = Const.Intern("np_head0") ;
static Const s221 = Const.Intern("np_mod") ;
static Const s222 = Const.Intern("np_mods") ;
static Const s223 = Const.Intern("np_no_trace") ;
static Const s224 = Const.Intern("number") ;
static Const s225 = Const.Intern("numbers") ;
static Const s226 = Const.Intern("obj") ;
static Const s227 = Const.Intern("object") ;
static Const s228 = Const.Intern("ocean") ;
static Const s229 = Const.Intern("oceans") ;
static Const s230 = Const.Intern("of") ;
static Const s231 = Const.Intern("old") ;
static Const s232 = Const.Intern("older") ;
static Const s233 = Const.Intern("oldest") ;
static Const s234 = Const.Intern("on") ;
static Const s235 = Const.Intern("one") ;
static Const s236 = Const.Intern("opt_comma") ;
static Const s237 = Const.Intern("opt_the") ;
static Const s238 = Const.Intern("or") ;
static Const s239 = Const.Intern("our") ;
static Const s240 = Const.Intern("part") ;
static Const s241 = Const.Intern("participle") ;
static Const s242 = Const.Intern("passive") ;
static Const s243 = Const.Intern("past") ;
static Const s244 = Const.Intern("people") ;
static Const s245 = Const.Intern("percentage") ;
static Const s246 = Const.Intern("perf") ;
static Const s247 = Const.Intern("pers_pron") ;
static Const s248 = Const.Intern("person") ;
static Const s249 = Const.Intern("persons") ;
static Const s250 = Const.Intern("place") ;
static Const s251 = Const.Intern("places") ;
static Const s252 = Const.Intern("plu") ;
static Const s253 = Const.Intern("population") ;
static Const s254 = Const.Intern("populations") ;
static Const s255 = Const.Intern("populous") ;
static Const s256 = Const.Intern("pos") ;
static Const s257 = Const.Intern("poss") ;
static Const s258 = Const.Intern("poss_pron") ;
static Const s259 = Const.Intern("possessive") ;
static Const s260 = Const.Intern("pp") ;
static Const s261 = Const.Intern("pre_adj") ;
static Const s262 = Const.Intern("pred_conj") ;
static Const s263 = Const.Intern("pred_rest") ;
static Const s264 = Const.Intern("predicate") ;
static Const s265 = Const.Intern("prep") ;
static Const s266 = Const.Intern("prep_case") ;
static Const s267 = Const.Intern("pres") ;
static Const s268 = Const.Intern("prog") ;
static Const s269 = Const.Intern("pronoun") ;
static Const s270 = Const.Intern("proper") ;
static Const s271 = Const.Intern("proportion") ;
static Const s272 = Const.Intern("q") ;
static Const s273 = Const.Intern("quant") ;
static Const s274 = Const.Intern("quant_phrase") ;
static Const s275 = Const.Intern("quantifier_pron") ;
static Const s276 = Const.Intern("question") ;
static Const s277 = Const.Intern("reduced_rel") ;
static Const s278 = Const.Intern("reduced_rel_conj") ;
static Const s279 = Const.Intern("reduced_rel_rest") ;
static Const s280 = Const.Intern("reduced_relative") ;
static Const s281 = Const.Intern("reduced_wh") ;
static Const s282 = Const.Intern("region") ;
static Const s283 = Const.Intern("regions") ;
static Const s284 = Const.Intern("regular_past") ;
static Const s285 = Const.Intern("regular_pres") ;
static Const s286 = Const.Intern("rel") ;
static Const s287 = Const.Intern("rel_adj") ;
static Const s288 = Const.Intern("rel_conj") ;
static Const s289 = Const.Intern("rel_pron") ;
static Const s290 = Const.Intern("rel_rest") ;
static Const s291 = Const.Intern("relative") ;
static Const s292 = Const.Intern("rest_verb") ;
static Const s293 = Const.Intern("restr") ;
static Const s294 = Const.Intern("rise") ;
static Const s295 = Const.Intern("risen") ;
static Const s296 = Const.Intern("rises") ;
static Const s297 = Const.Intern("river") ;
static Const s298 = Const.Intern("rivers") ;
static Const s299 = Const.Intern("role") ;
static Const s300 = Const.Intern("root_form") ;
static Const s301 = Const.Intern("rose") ;
static Const s302 = Const.Intern("runtime") ;
static Const s303 = Const.Intern("s") ;
static Const s304 = Const.Intern("s_all") ;
static Const s305 = Const.Intern("same") ;
static Const s306 = Const.Intern("say") ;
static Const s307 = Const.Intern("sea") ;
static Const s308 = Const.Intern("seamass") ;
static Const s309 = Const.Intern("seamasses") ;
static Const s310 = Const.Intern("seas") ;
static Const s311 = Const.Intern("sentence") ;
static Const s312 = Const.Intern("seven") ;
static Const s313 = Const.Intern("she") ;
static Const s314 = Const.Intern("sin") ;
static Const s315 = Const.Intern("six") ;
static Const s316 = Const.Intern("small") ;
static Const s317 = Const.Intern("smaller") ;
static Const s318 = Const.Intern("smallerthan") ;
static Const s319 = Const.Intern("smallest") ;
static Const s320 = Const.Intern("some") ;
static Const s321 = Const.Intern("somebody") ;
static Const s322 = Const.Intern("someone") ;
static Const s323 = Const.Intern("something") ;
static Const s324 = Const.Intern("south") ;
static Const s325 = Const.Intern("southof") ;
static Const s326 = Const.Intern("sqmile") ;
static Const s327 = Const.Intern("sqmiles") ;
static Const s328 = Const.Intern("statistics") ;
static Const s329 = Const.Intern("subj") ;
static Const s330 = Const.Intern("subj_case") ;
static Const s331 = Const.Intern("subj_question") ;
static Const s332 = Const.Intern("sum") ;
static Const s333 = Const.Intern("sums") ;
static Const s334 = Const.Intern("sup") ;
static Const s335 = Const.Intern("sup_adj") ;
static Const s336 = Const.Intern("sup_adv") ;
static Const s337 = Const.Intern("sup_op") ;
static Const s338 = Const.Intern("sup_phrase") ;
static Const s339 = Const.Intern("ten") ;
static Const s340 = Const.Intern("terminal") ;
static Const s341 = Const.Intern("terminator") ;
static Const s342 = Const.Intern("than") ;
static Const s343 = Const.Intern("that") ;
static Const s344 = Const.Intern("the") ;
static Const s345 = Const.Intern("their") ;
static Const s346 = Const.Intern("them") ;
static Const s347 = Const.Intern("there") ;
static Const s348 = Const.Intern("thing") ;
static Const s349 = Const.Intern("thousand") ;
static Const s350 = Const.Intern("three") ;
static Const s351 = Const.Intern("through") ;
static Const s352 = Const.Intern("time") ;
static Const s353 = Const.Intern("times") ;
static Const s354 = Const.Intern("to") ;
static Const s355 = Const.Intern("tomorrow") ;
static Const s356 = Const.Intern("top") ;
static Const s357 = Const.Intern("topic") ;
static Const s358 = Const.Intern("total") ;
static Const s359 = Const.Intern("totals") ;
static Const s360 = Const.Intern("tr_number") ;
static Const s361 = Const.Intern("trace1") ;
static Const s362 = Const.Intern("trans") ;
static Const s363 = Const.Intern("two") ;
static Const s364 = Const.Intern("undef") ;
static Const s365 = Const.Intern("upper_volta") ;
static Const s366 = Const.Intern("us") ;
static Const s367 = Const.Intern("value") ;
static Const s368 = Const.Intern("variable") ;
static Const s369 = Const.Intern("variable_q") ;
static Const s370 = Const.Intern("verb") ;
static Const s371 = Const.Intern("verb_arg") ;
static Const s372 = Const.Intern("verb_args") ;
static Const s373 = Const.Intern("verb_case") ;
static Const s374 = Const.Intern("verb_form") ;
static Const s375 = Const.Intern("verb_mod") ;
static Const s376 = Const.Intern("verb_mods") ;
static Const s377 = Const.Intern("verb_root") ;
static Const s378 = Const.Intern("verb_type") ;
static Const s379 = Const.Intern("virtual") ;
static Const s380 = Const.Intern("void") ;
static Const s381 = Const.Intern("was") ;
static Const s382 = Const.Intern("we") ;
static Const s383 = Const.Intern("were") ;
static Const s384 = Const.Intern("west") ;
static Const s385 = Const.Intern("westof") ;
static Const s386 = Const.Intern("wh") ;
static Const s387 = Const.Intern("wh_question") ;
static Const s388 = Const.Intern("what") ;
static Const s389 = Const.Intern("when") ;
static Const s390 = Const.Intern("where") ;
static Const s391 = Const.Intern("which") ;
static Const s392 = Const.Intern("who") ;
static Const s393 = Const.Intern("whom") ;
static Const s394 = Const.Intern("whose") ;
static Const s395 = Const.Intern("whq") ;
static Const s396 = Const.Intern("with") ;
static Const s397 = Const.Intern("word") ;
static Const s398 = Const.Intern("write") ;
static Const s399 = Const.Intern("x") ;
static Const s400 = Const.Intern("yesterday") ;
static Const s401 = Const.Intern("yn_question") ;
static Const s402 = Const.Intern("you") ;
static Const s403 = Const.Intern("your") ;
static Const s404 = Const.Intern("~") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint3 = Term.Number(3) ;
static Int posint4 = Term.Number(4) ;
static Int posint5 = Term.Number(5) ;
static Int posint6 = Term.Number(6) ;
static Int posint7 = Term.Number(7) ;
static Int posint8 = Term.Number(8) ;
static Int posint9 = Term.Number(9) ;
static Int posint10 = Term.Number(10) ;
}


class pred_top_0 extends Code {

/*

top(_596):-chat_parser(_596).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_chat_parser_0::exec_static ;}
}


class pred_go_0 extends Code {

/*

go(_642):-statistics(runtime,[_614,_620],chat_parser(statistics(runtime,[_626,_632],write('execution time is ',write(_632,write(milliseconds,_642)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_go_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_go_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = chat_parser.s302 ;
local_aregs[1] = F(chat_parser.s5,var1,F(chat_parser.s5,var2,Const.Nil)) ;
local_aregs[2] = F(chat_parser.s58,F(chat_parser.s328,chat_parser.s302,F(chat_parser.s5,var3,F(chat_parser.s5,var4,Const.Nil)),F(chat_parser.s398,chat_parser.s116,F(chat_parser.s398,var4.Deref(),F(chat_parser.s398,chat_parser.s184,continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_statistics_2::exec_static ;}
}


class pred_chat_parser_0 extends Code {

/*

chat_parser(_702):-my_string(_692,determinate_say(_692,_694,fail(_702))).
chat_parser(_740):-call(_740).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_chat_parser_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_chat_parser_0__1(PrologMachine mach){ mach.FillAlternative(pred_chat_parser_0::exec_pred_chat_parser_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = F(chat_parser.s87,var1.Deref(),var2,F(chat_parser.s117,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_my_string_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_chat_parser_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_my_string_1 extends Code {

/*

my_string([what,rivers,are,there,?],_790):-call(_790).
my_string([does,afghanistan,border,china,?],_842):-call(_842).
my_string([what,is,the,capital,of,upper_volta,?],_906):-call(_906).
my_string([where,is,the,largest,country,?],_964):-call(_964).
my_string([which,country,~,s,capital,is,london,?],_1034):-call(_1034).
my_string([which,countries,are,european,?],_1086):-call(_1086).
my_string([how,large,is,the,smallest,american,country,?],_1156):-call(_1156).
my_string([what,is,the,ocean,that,borders,african,countries,and,that,borders,asian,countries,?],_1262):-call(_1262).
my_string([what,are,the,capitals,of,the,countries,bordering,the,baltic,?],_1350):-call(_1350).
my_string([which,countries,are,bordered,by,two,seas,?],_1420):-call(_1420).
my_string([how,many,countries,does,the,danube,flow,through,?],_1496):-call(_1496).
my_string([what,is,the,total,area,of,countries,south,of,the,equator,and,not,in,australasia,?],_1614):-call(_1614).
my_string([what,is,the,average,area,of,the,countries,in,each,continent,?],_1708):-call(_1708).
my_string([is,there,more,than,one,country,in,each,continent,?],_1790):-call(_1790).
my_string([is,there,some,ocean,that,does,not,border,any,country,?],_1878):-call(_1878).
my_string([what,are,the,countries,from,which,a,river,flows,into,the,black_sea,?],_1978):-call(_1978).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_my_string_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_my_string_1__1(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s298,F(chat_parser.s5,chat_parser.s31,F(chat_parser.s5,chat_parser.s347,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__2(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s93,F(chat_parser.s5,chat_parser.s17,F(chat_parser.s5,chat_parser.s50,F(chat_parser.s5,chat_parser.s59,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__3(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s56,F(chat_parser.s5,chat_parser.s230,F(chat_parser.s5,chat_parser.s365,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__4(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s390,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s168,F(chat_parser.s5,chat_parser.s78,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__5(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s391,F(chat_parser.s5,chat_parser.s78,F(chat_parser.s5,chat_parser.s404,F(chat_parser.s5,chat_parser.s303,F(chat_parser.s5,chat_parser.s56,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s175,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__6(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s391,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s31,F(chat_parser.s5,chat_parser.s107,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__7(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s143,F(chat_parser.s5,chat_parser.s166,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s319,F(chat_parser.s5,chat_parser.s22,F(chat_parser.s5,chat_parser.s78,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__8(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s228,F(chat_parser.s5,chat_parser.s343,F(chat_parser.s5,chat_parser.s53,F(chat_parser.s5,chat_parser.s18,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s25,F(chat_parser.s5,chat_parser.s343,F(chat_parser.s5,chat_parser.s53,F(chat_parser.s5,chat_parser.s36,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__9(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s31,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s57,F(chat_parser.s5,chat_parser.s230,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s52,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s42,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__10(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s391,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s31,F(chat_parser.s5,chat_parser.s51,F(chat_parser.s5,chat_parser.s54,F(chat_parser.s5,chat_parser.s363,F(chat_parser.s5,chat_parser.s310,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__11(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s143,F(chat_parser.s5,chat_parser.s179,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s93,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s80,F(chat_parser.s5,chat_parser.s121,F(chat_parser.s5,chat_parser.s351,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__12(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s358,F(chat_parser.s5,chat_parser.s32,F(chat_parser.s5,chat_parser.s230,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s324,F(chat_parser.s5,chat_parser.s230,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s106,F(chat_parser.s5,chat_parser.s25,F(chat_parser.s5,chat_parser.s210,F(chat_parser.s5,chat_parser.s148,F(chat_parser.s5,chat_parser.s38,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__13(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s40,F(chat_parser.s5,chat_parser.s32,F(chat_parser.s5,chat_parser.s230,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s148,F(chat_parser.s5,chat_parser.s100,F(chat_parser.s5,chat_parser.s75,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__14(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s347,F(chat_parser.s5,chat_parser.s187,F(chat_parser.s5,chat_parser.s342,F(chat_parser.s5,chat_parser.s235,F(chat_parser.s5,chat_parser.s78,F(chat_parser.s5,chat_parser.s148,F(chat_parser.s5,chat_parser.s100,F(chat_parser.s5,chat_parser.s75,F(chat_parser.s5,chat_parser.s7,Const.Nil))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__15(PrologMachine mach){ mach.FillAlternative(pred_my_string_1::exec_pred_my_string_1__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s157,F(chat_parser.s5,chat_parser.s347,F(chat_parser.s5,chat_parser.s320,F(chat_parser.s5,chat_parser.s228,F(chat_parser.s5,chat_parser.s343,F(chat_parser.s5,chat_parser.s93,F(chat_parser.s5,chat_parser.s210,F(chat_parser.s5,chat_parser.s50,F(chat_parser.s5,chat_parser.s27,F(chat_parser.s5,chat_parser.s78,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_my_string_1__16(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s5,chat_parser.s388,F(chat_parser.s5,chat_parser.s31,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s77,F(chat_parser.s5,chat_parser.s126,F(chat_parser.s5,chat_parser.s391,F(chat_parser.s5,chat_parser.s8,F(chat_parser.s5,chat_parser.s297,F(chat_parser.s5,chat_parser.s124,F(chat_parser.s5,chat_parser.s155,F(chat_parser.s5,chat_parser.s344,F(chat_parser.s5,chat_parser.s49,F(chat_parser.s5,chat_parser.s7,Const.Nil)))))))))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_determinate_say_2 extends Code {

/*

determinate_say(_1992,_1994,_2002):-say(_1992,_1994,cut(1,_2002)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_determinate_say_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_determinate_say_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(chat_parser.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_say_2::exec_static ;}
}


class pred_terminal_5 extends Code {

/*

terminal(_2038,_2042,_2042,x(_2034,terminal,_2038,_2040),_2040,_2052):-call(_2052).
terminal(_2076,[_2076|_2078],_2078,_2080,_2080,_2088):-gap(_2080,_2088).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_terminal_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_terminal_5__1(PrologMachine mach){ mach.FillAlternative(pred_terminal_5::exec_pred_terminal_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s399,var3,chat_parser.s340,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_terminal_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s5,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_gap_1::exec_static ;}
}


class pred_gap_1 extends Code {

/*

gap(x(gap,_2120,_2122,_2124),_2134):-call(_2134).
gap([],_2156):-call(_2156).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_gap_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_gap_1__1(PrologMachine mach){ mach.FillAlternative(pred_gap_1::exec_pred_gap_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s399,chat_parser.s128,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_gap_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_virtual_3 extends Code {

/*

virtual(_2176,x(_2172,nonterminal,_2176,_2178),_2178,_2188):-call(_2188).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_virtual_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_virtual_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s399,var2,chat_parser.s207,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_is_pp_1 extends Code {

/*

is_pp(#(1,_2210,_2212,_2214),_2224):-call(_2224).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_pp_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_pp_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint1,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_is_pred_1 extends Code {

/*

is_pred(#(_2240,1,_2244,_2246),_2256):-call(_2256).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_pred_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_pred_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,chat_parser.posint1,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_is_trace_1 extends Code {

/*

is_trace(#(_2272,_2274,1,_2278),_2288):-call(_2288).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_trace_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_trace_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,var2,chat_parser.posint1,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_is_adv_1 extends Code {

/*

is_adv(#(_2304,_2306,_2308,1),_2320):-call(_2320).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_adv_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_adv_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,var2,var3,chat_parser.posint1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_trace1_2 extends Code {

/*

trace1(#(_2336,_2338,1,_2342),#(0,0,0,0),_2362):-call(_2362).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_trace1_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_trace1_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,var2,chat_parser.posint1,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint0,chat_parser.posint0,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_trace1_1 extends Code {

/*

trace1(#(0,0,1,0),_2396):-call(_2396).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_trace1_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_trace1_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint0,chat_parser.posint1,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_adv_1 extends Code {

/*

adv(#(0,0,0,1),_2428):-call(_2428).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adv_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adv_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint0,chat_parser.posint0,chat_parser.posint1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_empty_1 extends Code {

/*

empty(#(0,0,0,0),_2460):-call(_2460).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_empty_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_empty_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint0,chat_parser.posint0,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_np_all_1 extends Code {

/*

np_all(#(1,1,1,0),_2492):-call(_2492).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_all_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_all_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint1,chat_parser.posint1,chat_parser.posint1,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_s_all_1 extends Code {

/*

s_all(#(1,0,1,1),_2524):-call(_2524).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_s_all_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_s_all_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint1,chat_parser.posint0,chat_parser.posint1,chat_parser.posint1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_np_no_trace_1 extends Code {

/*

np_no_trace(#(1,1,0,0),_2556):-call(_2556).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_no_trace_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_no_trace_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint1,chat_parser.posint1,chat_parser.posint0,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_myplus_3 extends Code {

/*

myplus(#(_2572,_2574,_2576,_2578),#(_2582,_2584,_2586,_2588),#(_2592,_2594,_2596,_2598),_2606):-or(_2572,_2582,_2592,or(_2574,_2584,_2594,or(_2576,_2586,_2596,or(_2578,_2588,_2598,_2606)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_myplus_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_myplus_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s2,var5,var6,var7,var8)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,var9,var10,var11,var12)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var9.Deref() ;
local_aregs[3] = F(chat_parser.s238,var2.Deref(),var6.Deref(),var10.Deref(),F(chat_parser.s238,var3.Deref(),var7.Deref(),var11.Deref(),F(chat_parser.s238,var4.Deref(),var8.Deref(),var12.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_or_3::exec_static ;}
}


class pred_minus_3 extends Code {

/*

minus(#(_2666,_2668,_2670,_2672),#(_2676,_2678,_2680,_2682),#(_2686,_2688,_2690,_2692),_2700):-anot(_2666,_2676,_2686,anot(_2668,_2678,_2688,anot(_2670,_2680,_2690,anot(_2672,_2682,_2692,_2700)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_minus_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_minus_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s2,var5,var6,var7,var8)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,var9,var10,var11,var12)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var9.Deref() ;
local_aregs[3] = F(chat_parser.s26,var2.Deref(),var6.Deref(),var10.Deref(),F(chat_parser.s26,var3.Deref(),var7.Deref(),var11.Deref(),F(chat_parser.s26,var4.Deref(),var8.Deref(),var12.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_anot_3::exec_static ;}
}


class pred_or_3 extends Code {

/*

or(1,_2758,1,_2768):-call(_2768).
or(0,1,1,_2794):-call(_2794).
or(0,0,0,_2820):-call(_2820).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_or_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_or_3__1(PrologMachine mach){ mach.FillAlternative(pred_or_3::exec_pred_or_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_or_3__2(PrologMachine mach){ mach.FillAlternative(pred_or_3::exec_pred_or_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_or_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_anot_3 extends Code {

/*

anot(_2838,0,_2838,_2848):-call(_2848).
anot(_2866,1,0,_2876):-call(_2876).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_anot_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_anot_3__1(PrologMachine mach){ mach.FillAlternative(pred_anot_3::exec_pred_anot_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_anot_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint0))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_role_3 extends Code {

/*

role(subj,_2902,#(1,0,0),_2912):-call(_2912).
role(compl,_2938,#(0,_2934,_2936),_2948):-call(_2948).
role(undef,main,#(_2968,0,_2972),_2982):-call(_2982).
role(undef,aux,#(0,_3004,_3006),_3016):-call(_3016).
role(undef,decl,_3034,_3044):-call(_3044).
role(nil,_3062,_3064,_3074):-call(_3074).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_role_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_role_3__1(PrologMachine mach){ mach.FillAlternative(pred_role_3::exec_pred_role_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,chat_parser.posint1,chat_parser.posint0,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_role_3__2(PrologMachine mach){ mach.FillAlternative(pred_role_3::exec_pred_role_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,chat_parser.posint0,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_role_3__3(PrologMachine mach){ mach.FillAlternative(pred_role_3::exec_pred_role_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s178))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,var1,chat_parser.posint0,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_role_3__4(PrologMachine mach){ mach.FillAlternative(pred_role_3::exec_pred_role_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s39))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s2,chat_parser.posint0,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_role_3__5(PrologMachine mach){ mach.FillAlternative(pred_role_3::exec_pred_role_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s81))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_role_3__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s201))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_subj_case_1 extends Code {

/*

subj_case(#(1,0,0),_3108):-call(_3108).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_subj_case_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_subj_case_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint1,chat_parser.posint0,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_case_1 extends Code {

/*

verb_case(#(0,1,0),_3138):-call(_3138).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_case_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_case_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint1,chat_parser.posint0)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_prep_case_1 extends Code {

/*

prep_case(#(0,0,1),_3168):-call(_3168).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_prep_case_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_prep_case_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,chat_parser.posint0,chat_parser.posint1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_compl_case_1 extends Code {

/*

compl_case(#(0,_3186,_3188),_3198):-call(_3198).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_compl_case_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_compl_case_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s2,chat_parser.posint0,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_say_2 extends Code {

/*

say(_3212,_3214,_3222):-sentence(_3214,_3212,[],[],[],_3222).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_say_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_say_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = Const.Nil ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sentence_5::exec_static ;}
}


class pred_sentence_5 extends Code {

/*

sentence(_3252,_3254,_3256,_3258,_3260,_3272):-declarative(_3252,_3254,_3262,_3258,_3264,terminator('.',_3262,_3256,_3264,_3260,_3272)).
sentence(_3322,_3324,_3326,_3328,_3330,_3342):-wh_question(_3322,_3324,_3332,_3328,_3334,terminator(?,_3332,_3326,_3334,_3330,_3342)).
sentence(_3392,_3394,_3396,_3398,_3400,_3416):-topic(_3394,_3402,_3398,_3404,wh_question(_3392,_3402,_3406,_3404,_3408,terminator(?,_3406,_3396,_3408,_3400,_3416))).
sentence(_3478,_3480,_3482,_3484,_3486,_3498):-yn_question(_3478,_3480,_3488,_3484,_3490,terminator(?,_3488,_3482,_3490,_3486,_3498)).
sentence(_3548,_3550,_3552,_3554,_3556,_3568):-imperative(_3548,_3550,_3558,_3554,_3560,terminator(!,_3558,_3552,_3560,_3556,_3568)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sentence_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sentence_5__1(PrologMachine mach){ mach.FillAlternative(pred_sentence_5::exec_pred_sentence_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s341,chat_parser.s5,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_declarative_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sentence_5__2(PrologMachine mach){ mach.FillAlternative(pred_sentence_5::exec_pred_sentence_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s341,chat_parser.s7,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_wh_question_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sentence_5__3(PrologMachine mach){ mach.FillAlternative(pred_sentence_5::exec_pred_sentence_5__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = F(chat_parser.s387,var1.Deref(),var6.Deref(),var8,var7.Deref(),var9,F(chat_parser.s341,chat_parser.s7,var8.Deref(),var3.Deref(),var9.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_topic_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sentence_5__4(PrologMachine mach){ mach.FillAlternative(pred_sentence_5::exec_pred_sentence_5__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s341,chat_parser.s7,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_yn_question_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sentence_5__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s341,chat_parser.s1,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_imperative_5::exec_static ;}
}


class pred_pp_8 extends Code {

/*

pp(_3618,_3620,_3622,_3624,_3626,_3626,_3628,_3630,_3648):-virtual(pp(_3618,_3620,_3622,_3624),_3628,_3630,_3648).
pp(pp(_3688,_3690),_3692,_3694,_3696,_3698,_3700,_3702,_3704,_3722):-prep(_3688,_3698,_3706,_3702,_3708,prep_case(_3710,np(_3690,_3712,_3710,_3714,_3692,_3694,_3696,_3706,_3700,_3708,_3704,_3722))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pp_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pp_8__1(PrologMachine mach){ mach.FillAlternative(pred_pp_8::exec_pred_pp_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s260,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_pp_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s260,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var10 ;
local_aregs[3] = var8.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = F(chat_parser.s266,var12,F(chat_parser.s216,var2.Deref(),var13,var12.Deref(),var14,var3.Deref(),var4.Deref(),var5.Deref(),var10.Deref(),var7.Deref(),var11.Deref(),var9.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_prep_5::exec_static ;}
}


class pred_topic_4 extends Code {

/*

topic(_3816,_3818,_3820,x(gap,nonterminal,pp(_3798,compl,_3802,_3804),_3814),_3832):-pp(_3798,compl,_3802,_3804,_3816,_3822,_3820,_3824,opt_comma(_3822,_3818,_3824,_3814,_3832)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_topic_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_topic_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s260,var4,chat_parser.s67,var5,var6),var7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = chat_parser.s67 ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var1.Deref() ;
local_aregs[5] = var8 ;
local_aregs[6] = var3.Deref() ;
local_aregs[7] = var9 ;
local_aregs[8] = F(chat_parser.s236,var8.Deref(),var2.Deref(),var9.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_pp_8::exec_static ;}
}


class pred_opt_comma_4 extends Code {

/*

opt_comma(_3884,_3886,_3888,_3890,_3898):- ~(',',_3884,_3886,_3888,_3890,_3898).
opt_comma(_3932,_3932,_3934,_3934,_3944):-call(_3944).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_opt_comma_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_opt_comma_4__1(PrologMachine mach){ mach.FillAlternative(pred_opt_comma_4::exec_pred_opt_comma_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s4 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_opt_comma_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_declarative_5 extends Code {

/*

declarative(decl(_3966),_3968,_3970,_3972,_3974,_3984):-s(_3966,_3976,_3968,_3970,_3972,_3974,_3984).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_declarative_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_declarative_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s81,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_s_6::exec_static ;}
}


class pred_wh_question_5 extends Code {

/*

wh_question(whq(_4024,_4026),_4028,_4030,_4032,_4034,_4052):-variable_q(_4024,_4036,_4038,_4040,_4028,_4042,_4032,_4044,question(_4038,_4040,_4026,_4042,_4030,_4044,_4034,_4052)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_wh_question_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_wh_question_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s395,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var7 ;
local_aregs[2] = var8 ;
local_aregs[3] = var9 ;
local_aregs[4] = var3.Deref() ;
local_aregs[5] = var10 ;
local_aregs[6] = var5.Deref() ;
local_aregs[7] = var11 ;
local_aregs[8] = F(chat_parser.s276,var8.Deref(),var9.Deref(),var2.Deref(),var10.Deref(),var4.Deref(),var11.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_variable_q_8::exec_static ;}
}


class pred_np_11 extends Code {

/*

np(_4112,_4114,_4116,_4118,_4120,_4122,_4124,_4126,_4126,_4128,_4130,_4154):-virtual(np(_4112,_4114,_4116,_4118,_4120,_4122,_4124),_4128,_4130,_4154).
np(np(_4200,_4202,[]),_4200,_4206,def,_4208,_4210,_4212,_4214,_4216,_4218,_4220,_4230):-is_pp(_4210,pers_pron(_4202,_4200,_4222,_4214,_4216,_4218,_4220,empty(_4212,role(_4222,decl,_4206,_4230)))).
np(np(_4306,_4308,_4310),_4306,_4312,_4314,_4316,_4318,_4320,_4322,_4324,_4326,_4328,_4350):-is_pp(_4318,np_head(_4308,_4306,_4314+_4334,_4336,_4310,_4322,_4338,_4326,_4340,np_all(_4342,np_compls(_4334,_4306,_4316,_4336,_4342,_4320,_4338,_4324,_4340,_4328,_4350)))).
np(part(_4444,_4446),3+_4452,_4454,indef,_4456,_4458,_4460,_4462,_4464,_4466,_4468,_4494):-is_pp(_4458,determiner(_4444,_4452,indef,_4462,_4470,_4466,_4472,~(of,_4470,_4474,_4472,_4476,s_all(_4478,prep_case(_4480,np(_4446,3+plu,_4480,def,_4456,_4478,_4460,_4474,_4464,_4476,_4468,_4494)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
Term aregs[] = mach.RegPull(11);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_11__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_11__1(PrologMachine mach){ mach.FillAlternative(pred_np_11::exec_pred_np_11__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s216,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref()) ;
local_aregs[1] = var9.Deref() ;
local_aregs[2] = var10.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_11__2(PrologMachine mach){ mach.FillAlternative(pred_np_11::exec_pred_np_11__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s216,var1,var2,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s83))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = F(chat_parser.s247,var2.Deref(),var1.Deref(),var11,var7.Deref(),var8.Deref(),var9.Deref(),var10.Deref(),F(chat_parser.s104,var6.Deref(),F(chat_parser.s299,var11.Deref(),chat_parser.s81,var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_pp_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_11__3(PrologMachine mach){ mach.FillAlternative(pred_np_11::exec_pred_np_11__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s216,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var11))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var12))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7.Deref() ;
local_aregs[1] = F(chat_parser.s219,var2.Deref(),var1.Deref(),F(chat_parser.s3,var5.Deref(),var13),var14,var3.Deref(),var9.Deref(),var15,var11.Deref(),var16,F(chat_parser.s217,var17,F(chat_parser.s218,var13.Deref(),var1.Deref(),var6.Deref(),var14.Deref(),var17.Deref(),var8.Deref(),var15.Deref(),var10.Deref(),var16.Deref(),var12.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_pp_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_11__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s240,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var11))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = F(chat_parser.s88,var1.Deref(),var3.Deref(),chat_parser.s150,var8.Deref(),var12,var10.Deref(),var13,F(chat_parser.s404,chat_parser.s230,var12.Deref(),var14,var13.Deref(),var15,F(chat_parser.s304,var16,F(chat_parser.s266,var17,F(chat_parser.s216,var2.Deref(),F(chat_parser.s3,chat_parser.posint3,chat_parser.s252),var17.Deref(),chat_parser.s83,var5.Deref(),var16.Deref(),var7.Deref(),var14.Deref(),var9.Deref(),var15.Deref(),var11.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_pp_1::exec_static ;}
}


class pred_variable_q_8 extends Code {

/*

variable_q(_4630,_4608,_4632,_4610,_4634,_4636,_4638,x(gap,nonterminal,np(_4606,_4608,_4610,_4612,_4614,_4616,_4618),_4628),_4646):-whq(_4630,_4608,_4606,_4632,_4634,_4636,_4638,_4628,trace1(_4616,_4618,_4646)).
variable_q(_4728,_4730,compl,_4732,_4734,_4736,_4738,x(gap,nonterminal,pp(pp(_4704,_4706),compl,_4714,_4716),_4726),_4752):-prep(_4704,_4734,_4740,_4738,_4742,whq(_4728,_4730,_4706,_4744,_4740,_4736,_4742,_4726,trace1(_4714,_4716,compl_case(_4732,_4752)))).
variable_q(_4830,_4842,compl,_4872,_4874,_4876,_4878,x(gap,nonterminal,adv_phrase(pp(_4850,np(_4842,np_head(int_det(_4830),[],_4838),[])),_4858,_4860),_4870),_4886):-context_pron(_4850,_4838,_4874,_4876,_4878,_4870,trace1(_4858,_4860,verb_case(_4872,_4886))).
variable_q(_4946,_4972,compl,_4974,_4976,_4978,_4980,x(gap,nonterminal,predicate(adj,value(_4950,wh(_4946)),_4960),_4970),_4992):- ~(how,_4976,_4982,_4980,_4984,adj(quant,_4950,_4982,_4978,_4984,_4970,empty(_4960,verb_case(_4974,_4992)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_variable_q_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_variable_q_8__1(PrologMachine mach){ mach.FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s216,var8,var2.Deref(),var4.Deref(),var9,var10,var11,var12),var13)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var8.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = var13.Deref() ;
local_aregs[8] = F(chat_parser.s361,var11.Deref(),var12.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_whq_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_variable_q_8__2(PrologMachine mach){ mach.FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s260,F(chat_parser.s260,var7,var8),chat_parser.s67,var9,var10),var11)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var12 ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var13 ;
local_aregs[5] = F(chat_parser.s395,var1.Deref(),var2.Deref(),var8.Deref(),var14,var12.Deref(),var5.Deref(),var13.Deref(),var11.Deref(),F(chat_parser.s361,var9.Deref(),var10.Deref(),F(chat_parser.s68,var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_prep_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_variable_q_8__3(PrologMachine mach){ mach.FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s14,F(chat_parser.s260,var7,F(chat_parser.s216,var2.Deref(),F(chat_parser.s219,F(chat_parser.s153,var1.Deref()),Const.Nil,var8),Const.Nil)),var9,var10),var11)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7.Deref() ;
local_aregs[1] = var8.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var11.Deref() ;
local_aregs[6] = F(chat_parser.s361,var9.Deref(),var10.Deref(),F(chat_parser.s373,var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_context_pron_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_variable_q_8__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s264,chat_parser.s10,F(chat_parser.s367,var7,F(chat_parser.s386,var1.Deref())),var8),var9)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s143 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var10 ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = F(chat_parser.s10,chat_parser.s273,var7.Deref(),var10.Deref(),var5.Deref(),var11.Deref(),var9.Deref(),F(chat_parser.s104,var8.Deref(),F(chat_parser.s373,var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_adv_phrase_7 extends Code {

/*

adv_phrase(_5062,_5064,_5066,_5068,_5068,_5070,_5072,_5088):-virtual(adv_phrase(_5062,_5064,_5066),_5070,_5072,_5088).
adv_phrase(pp(_5126,_5128),_5130,_5132,_5134,_5136,_5138,_5140,_5162):-loc_pred(_5126,_5134,_5142,_5138,_5144,pp(pp(prep(of),_5128),compl,_5130,_5132,_5142,_5136,_5144,_5140,_5162)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adv_phrase_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adv_phrase_7__1(PrologMachine mach){ mach.FillAlternative(pred_adv_phrase_7::exec_pred_adv_phrase_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s14,var1.Deref(),var2.Deref(),var3.Deref()) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_adv_phrase_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s260,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var9 ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var10 ;
local_aregs[5] = F(chat_parser.s260,F(chat_parser.s260,F(chat_parser.s265,chat_parser.s230),var2.Deref()),chat_parser.s67,var3.Deref(),var4.Deref(),var9.Deref(),var6.Deref(),var10.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_loc_pred_5::exec_static ;}
}


class pred_predicate_7 extends Code {

/*

predicate(_5222,_5224,_5226,_5228,_5228,_5230,_5232,_5248):-virtual(predicate(_5222,_5224,_5226),_5230,_5232,_5248).
predicate(_5284,_5286,_5288,_5290,_5292,_5294,_5296,_5304):-adj_phrase(_5286,_5288,_5290,_5292,_5294,_5296,_5304).
predicate(neg,_5346,_5348,_5350,_5352,_5354,_5356,_5366):-s_all(_5358,pp(_5346,compl,_5358,_5348,_5350,_5352,_5354,_5356,_5366)).
predicate(_5418,_5420,_5422,_5424,_5426,_5428,_5430,_5440):-s_all(_5432,adv_phrase(_5420,_5432,_5422,_5424,_5426,_5428,_5430,_5440)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_predicate_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_predicate_7__1(PrologMachine mach){ mach.FillAlternative(pred_predicate_7::exec_pred_predicate_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s264,var1.Deref(),var2.Deref(),var3.Deref()) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_predicate_7__2(PrologMachine mach){ mach.FillAlternative(pred_predicate_7::exec_pred_predicate_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_adj_phrase_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_predicate_7__3(PrologMachine mach){ mach.FillAlternative(pred_predicate_7::exec_pred_predicate_7__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s195))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = F(chat_parser.s260,var1.Deref(),chat_parser.s67,var7.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_s_all_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_predicate_7__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = F(chat_parser.s14,var2.Deref(),var8.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_s_all_1::exec_static ;}
}


class pred_whq_8 extends Code {

/*

whq(_5490,_5492,_5494,undef,_5496,_5498,_5500,_5502,_5522):-int_det(_5490,_5492,_5496,_5504,_5500,_5506,s_all(_5508,np(_5494,_5492,_5510,_5512,subj,_5508,_5514,_5504,_5498,_5506,_5502,_5522))).
whq(_5612,3+_5602,np(3+_5602,wh(_5612),[]),_5622,_5624,_5626,_5628,_5630,_5638):-int_pron(_5622,_5624,_5626,_5628,_5630,_5638).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_whq_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_whq_8__1(PrologMachine mach){ mach.FillAlternative(pred_whq_8::exec_pred_whq_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var8 ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var9 ;
local_aregs[6] = F(chat_parser.s304,var10,F(chat_parser.s216,var3.Deref(),var2.Deref(),var11,var12,chat_parser.s329,var10.Deref(),var13,var8.Deref(),var5.Deref(),var9.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_int_det_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_whq_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s216,F(chat_parser.s3,chat_parser.posint3,var2.Deref()),F(chat_parser.s386,var1.Deref()),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_int_pron_5::exec_static ;}
}


class pred_int_det_6 extends Code {

/*

int_det(_5686,3+_5684,_5688,_5690,_5692,_5694,_5702):-whose(_5686,_5684,_5688,_5690,_5692,_5694,_5702).
int_det(_5748,3+_5746,_5750,_5752,_5754,_5756,_5764):-int_art(_5748,_5746,_5750,_5752,_5754,_5756,_5764).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_det_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_det_6__1(PrologMachine mach){ mach.FillAlternative(pred_int_det_6::exec_pred_int_det_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_whose_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_int_det_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_int_art_6::exec_static ;}
}


class pred_gen_marker_4 extends Code {

/*

gen_marker(_5804,_5804,_5806,_5808,_5816):-virtual(gen_marker,_5806,_5808,_5816).
gen_marker(_5846,_5848,_5850,_5852,_5864):- ~(~,_5846,_5854,_5850,_5856,an_s(_5854,_5848,_5856,_5852,_5864)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_gen_marker_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_gen_marker_4__1(PrologMachine mach){ mach.FillAlternative(pred_gen_marker_4::exec_pred_gen_marker_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s130 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_gen_marker_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s404 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var6 ;
local_aregs[5] = F(chat_parser.s24,var5.Deref(),var2.Deref(),var6.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_whose_6 extends Code {

/*

whose(_5912,_5918,_5942,_5944,_5946,x(nogap,nonterminal,np_head0(wh(_5912),_5918,proper),x(nogap,nonterminal,gen_marker,_5930)),_5954):- ~(whose,_5942,_5944,_5946,_5930,_5954).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_whose_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_whose_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s220,F(chat_parser.s386,var1.Deref()),var2.Deref(),chat_parser.s270),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,chat_parser.s130,var6))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s394 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_question_7 extends Code {

/*

question(_5992,_5994,_5996,_5998,_6000,_6002,_6004,_6016):-subj_question(_5992,role(subj,_6006,_5994,s(_5996,_6008,_5998,_6000,_6002,_6004,_6016))).
question(_6074,_6076,_6078,_6080,_6082,_6084,_6086,_6100):-fronted_verb(_6074,_6076,_6080,_6088,_6084,_6090,s(_6078,_6092,_6088,_6082,_6090,_6086,_6100)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_question_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_question_7__1(PrologMachine mach){ mach.FillAlternative(pred_question_7::exec_pred_question_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(chat_parser.s299,chat_parser.s329,var8,var2.Deref(),F(chat_parser.s303,var3.Deref(),var9,var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_subj_question_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_question_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var8 ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var9 ;
local_aregs[6] = F(chat_parser.s303,var3.Deref(),var10,var8.Deref(),var5.Deref(),var9.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_fronted_verb_6::exec_static ;}
}


class pred_det_7 extends Code {

/*

det(_6158,_6160,_6162,_6164,_6164,_6166,_6168,_6184):-virtual(det(_6158,_6160,_6162),_6166,_6168,_6184).
det(det(_6222),_6224,_6226,_6228,_6230,_6232,_6234,_6244):-terminal(_6236,_6228,_6230,_6232,_6234,det(_6236,_6224,_6222,_6226,_6244)).
det(generic,_6296,generic,_6298,_6298,_6300,_6300,_6310):-call(_6310).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_det_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_det_7__1(PrologMachine mach){ mach.FillAlternative(pred_det_7::exec_pred_det_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s86,var1.Deref(),var2.Deref(),var3.Deref()) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_det_7__2(PrologMachine mach){ mach.FillAlternative(pred_det_7::exec_pred_det_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s86,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = F(chat_parser.s86,var8.Deref(),var2.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_det_7__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s131))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s131))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_int_art_6 extends Code {

/*

int_art(_6354,_6340,_6356,_6358,_6360,x(nogap,nonterminal,det(_6338,_6340,def),_6352),_6368):-int_art(_6354,_6340,_6338,_6356,_6358,_6360,_6352,_6368).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_art_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_art_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s86,var6,var2.Deref(),chat_parser.s83),var7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_int_art_7::exec_static ;}
}


class pred_subj_question_1 extends Code {

/*

subj_question(subj,_6418):-call(_6418).
subj_question(undef,_6440):-call(_6440).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_subj_question_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_subj_question_1__1(PrologMachine mach){ mach.FillAlternative(pred_subj_question_1::exec_pred_subj_question_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_subj_question_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_yn_question_5 extends Code {

/*

yn_question(q(_6456),_6458,_6460,_6462,_6464,_6480):-fronted_verb(nil,_6466,_6458,_6468,_6462,_6470,s(_6456,_6472,_6468,_6460,_6470,_6464,_6480)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_yn_question_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_yn_question_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s272,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s201 ;
local_aregs[1] = var6 ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var8 ;
local_aregs[6] = F(chat_parser.s303,var1.Deref(),var9,var7.Deref(),var3.Deref(),var8.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_fronted_verb_6::exec_static ;}
}


class pred_verb_form_8 extends Code {

/*

verb_form(_6534,_6536,_6538,_6540,_6542,_6542,_6544,_6546,_6564):-virtual(verb_form(_6534,_6536,_6538,_6540),_6544,_6546,_6564).
verb_form(_6602,_6604,_6606,_6608,_6610,_6612,_6614,_6616,_6626):-terminal(_6618,_6610,_6612,_6614,_6616,verb_form(_6618,_6602,_6604,_6606,_6626)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_form_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_form_8__1(PrologMachine mach){ mach.FillAlternative(pred_verb_form_8::exec_pred_verb_form_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s374,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var9 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = F(chat_parser.s374,var9.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_neg_6 extends Code {

/*

neg(_6680,_6682,_6684,_6684,_6686,_6688,_6702):-virtual(neg(_6680,_6682),_6686,_6688,_6702).
neg(aux+_6740,neg,_6742,_6744,_6746,_6748,_6756):- ~(not,_6742,_6744,_6746,_6748,_6756).
neg(_6794,pos,_6796,_6796,_6798,_6798,_6808):-call(_6808).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_neg_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_neg_6__1(PrologMachine mach){ mach.FillAlternative(pred_neg_6::exec_pred_neg_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s195,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_neg_6__2(PrologMachine mach){ mach.FillAlternative(pred_neg_6::exec_pred_neg_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.s39,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s195))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s210 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_neg_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s256))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_fronted_verb_6 extends Code {

/*

fronted_verb(_6868,_6870,_6872,_6874,_6876,x(gap,nonterminal,verb_form(_6834,_6836,_6838,_6840),x(nogap,nonterminal,neg(_6844,_6846),_6856)),_6898):-verb_form(_6834,_6836,_6838,_6878,_6872,_6880,_6876,_6882,verb_type(_6834,aux+_6888,role(_6868,_6840,_6870,neg(_6890,_6846,_6880,_6874,_6882,_6856,_6898)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_fronted_verb_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_fronted_verb_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s374,var6,var7,var8,var9),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s195,var10,var11),var12))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = var7.Deref() ;
local_aregs[2] = var8.Deref() ;
local_aregs[3] = var13 ;
local_aregs[4] = var3.Deref() ;
local_aregs[5] = var14 ;
local_aregs[6] = var5.Deref() ;
local_aregs[7] = var15 ;
local_aregs[8] = F(chat_parser.s378,var6.Deref(),F(chat_parser.s3,chat_parser.s39,var16),F(chat_parser.s299,var1.Deref(),var9.Deref(),var2.Deref(),F(chat_parser.s195,var17,var11.Deref(),var14.Deref(),var4.Deref(),var15.Deref(),var12.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
}


class pred_imperative_5 extends Code {

/*

imperative(imp(_6978),_6980,_6982,_6984,_6986,_7000):-imperative_verb(_6980,_6988,_6984,_6990,s(_6978,_6992,_6988,_6982,_6990,_6986,_7000)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_imperative_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_imperative_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s145,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = F(chat_parser.s303,var1.Deref(),var8,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_imperative_verb_4::exec_static ;}
}


class pred_imperative_verb_4 extends Code {

/*

imperative_verb(_7092,_7094,_7096,x(nogap,terminal,you,x(nogap,nonterminal,verb_form(_7064,imp+fin,2+sin,main),_7080)),_7108):-verb_form(_7064,inf,_7098,_7100,_7092,_7094,_7096,_7080,_7108).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_imperative_verb_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_imperative_verb_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s340,chat_parser.s402,F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s374,var4,F(chat_parser.s3,chat_parser.s145,chat_parser.s119),F(chat_parser.s3,chat_parser.posint2,chat_parser.s314),chat_parser.s178),var5))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = chat_parser.s151 ;
local_aregs[2] = var6 ;
local_aregs[3] = var7 ;
local_aregs[4] = var1.Deref() ;
local_aregs[5] = var2.Deref() ;
local_aregs[6] = var3.Deref() ;
local_aregs[7] = var5.Deref() ;
local_aregs[8] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
}


class pred_s_6 extends Code {

/*

s(s(_7150,_7152,_7154,_7156),_7158,_7160,_7162,_7164,_7166,_7202):-subj(_7150,_7168,_7170,_7160,_7172,_7164,_7174,verb(_7152,_7168,_7170,_7176,_7172,_7178,_7174,_7180,empty(_7182,s_all(_7184,verb_args(_7170,_7176,_7154,_7182,_7186,_7178,_7188,_7180,_7190,minus(_7184,_7186,_7192,myplus(_7184,_7186,_7194,verb_mods(_7156,_7192,_7194,_7158,_7188,_7162,_7190,_7166,_7202)))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_s_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_s_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var23 = V(mach) ;
Var var22 = V(mach) ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s303,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var11 ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var12 ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var13 ;
local_aregs[7] = F(chat_parser.s370,var2.Deref(),var10.Deref(),var11.Deref(),var14,var12.Deref(),var15,var13.Deref(),var16,F(chat_parser.s104,var17,F(chat_parser.s304,var18,F(chat_parser.s372,var11.Deref(),var14.Deref(),var3.Deref(),var17.Deref(),var19,var15.Deref(),var20,var16.Deref(),var21,F(chat_parser.s186,var18.Deref(),var19.Deref(),var22,F(chat_parser.s192,var18.Deref(),var19.Deref(),var23,F(chat_parser.s376,var4.Deref(),var22.Deref(),var23.Deref(),var5.Deref(),var20.Deref(),var7.Deref(),var21.Deref(),var9.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_subj_7::exec_static ;}
}


class pred_subj_7 extends Code {

/*

subj(there,_7344,_7340+be,_7346,_7348,_7350,_7352,_7360):- ~(there,_7346,_7348,_7350,_7352,_7360).
subj(_7400,_7402,_7404,_7406,_7408,_7410,_7412,_7428):-s_all(_7414,subj_case(_7416,np(_7400,_7402,_7416,_7418,subj,_7414,_7420,_7406,_7408,_7410,_7412,_7428))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_subj_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_subj_7__1(PrologMachine mach){ mach.FillAlternative(pred_subj_7::exec_pred_subj_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s347))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,var2,chat_parser.s43)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s347 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_subj_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = F(chat_parser.s330,var9,F(chat_parser.s216,var1.Deref(),var2.Deref(),var9.Deref(),var10,chat_parser.s329,var8.Deref(),var11,var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_s_all_1::exec_static ;}
}


class pred_np_head_9 extends Code {

/*

np_head(_7492,_7494,_7496,_7498,_7500,_7502,_7504,_7506,_7508,_7528):-np_head0(_7510,_7512,_7514,_7502,_7516,_7506,_7518,possessive(_7510,_7512,_7514,_7520,_7520,_7492,_7494,_7496,_7498,_7500,_7516,_7504,_7518,_7508,_7528)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_head_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_head_9__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var10 ;
local_aregs[1] = var11 ;
local_aregs[2] = var12 ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var13 ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var14 ;
local_aregs[7] = F(chat_parser.s259,var10.Deref(),var11.Deref(),var12.Deref(),var15,var15.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var13.Deref(),var7.Deref(),var14.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_np_head0_7::exec_static ;}
}


class pred_np_head0_7 extends Code {

/*

np_head0(_7608,_7610,_7612,_7614,_7614,_7616,_7618,_7634):-virtual(np_head0(_7608,_7610,_7612),_7616,_7618,_7634).
np_head0(name(_7672),3+sin,def+proper,_7686,_7688,_7690,_7692,_7700):-name(_7672,_7686,_7688,_7690,_7692,_7700).
np_head0(np_head(_7742,_7744,_7746),3+_7752,_7756+common,_7760,_7762,_7764,_7766,_7782):-determiner(_7742,_7752,_7756,_7760,_7768,_7764,_7770,adjs(_7744,_7768,_7772,_7770,_7774,noun(_7746,_7752,_7772,_7762,_7774,_7766,_7782))).
np_head0(_7872,_7874,def+proper,_7876,_7878,_7880,x(nogap,nonterminal,gen_marker,_7870),_7888):-poss_pron(_7872,_7874,_7876,_7878,_7880,_7870,_7888).
np_head0(np_head(_7932,[],_7936),3+sin,indef+common,_7950,_7952,_7954,_7956,_7964):-quantifier_pron(_7932,_7936,_7950,_7952,_7954,_7956,_7964).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_head0_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_head0_7__1(PrologMachine mach){ mach.FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s220,var1.Deref(),var2.Deref(),var3.Deref()) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_head0_7__2(PrologMachine mach){ mach.FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s193,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s83,chat_parser.s270)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_name_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_head0_7__3(PrologMachine mach){ mach.FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s219,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,var5,chat_parser.s63)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var10 ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var11 ;
local_aregs[7] = F(chat_parser.s12,var2.Deref(),var10.Deref(),var12,var11.Deref(),var13,F(chat_parser.s212,var3.Deref(),var4.Deref(),var12.Deref(),var7.Deref(),var13.Deref(),var9.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_determiner_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_head0_7__4(PrologMachine mach){ mach.FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s83,chat_parser.s270)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,chat_parser.s130,var6)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_poss_pron_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_head0_7__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s219,var1,Const.Nil,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s150,chat_parser.s63)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_quantifier_pron_6::exec_static ;}
}


class pred_np_compls_10 extends Code {

/*

np_compls(proper,_8006,_8008,[],_8010,_8012,_8014,_8014,_8016,_8016,_8024):-empty(_8012,_8024).
np_compls(common,_8062,_8064,_8066,_8068,_8070,_8072,_8074,_8076,_8078,_8098):-np_all(_8080,np_mods(_8062,_8064,_8082,_8066,_8068,_8084,_8080,_8086,_8072,_8088,_8076,_8090,relative(_8062,_8082,_8084,_8086,_8070,_8088,_8074,_8090,_8078,_8098))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
Term aregs[] = mach.RegPull(10);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_compls_10__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_compls_10__1(PrologMachine mach){ mach.FillAlternative(pred_np_compls_10::exec_pred_np_compls_10__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s270))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var6.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_empty_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_compls_10__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var10 ;
local_aregs[1] = F(chat_parser.s222,var1.Deref(),var2.Deref(),var11,var3.Deref(),var4.Deref(),var12,var10.Deref(),var13,var6.Deref(),var14,var8.Deref(),var15,F(chat_parser.s291,var1.Deref(),var11.Deref(),var12.Deref(),var13.Deref(),var5.Deref(),var14.Deref(),var7.Deref(),var15.Deref(),var9.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_np_all_1::exec_static ;}
}


class pred_possessive_14 extends Code {

/*

possessive(_8186,_8188,_8190,[],_8192,_8194,_8196,_8198,_8200,_8202,_8204,_8206,_8208,_8210,_8252):-gen_case(_8204,_8212,_8208,_8214,np_head0(_8216,_8218,_8220,_8212,_8222,_8214,_8224,possessive(_8216,_8218,_8220,_8244,[pp(poss,np(_8188,_8186,_8192))|_8244],_8194,_8196,_8198,_8200,_8202,_8222,_8206,_8224,_8210,_8252))).
possessive(_8354,_8356,_8358,_8360,_8362,_8354,_8356,_8358,_8360,_8362,_8364,_8364,_8366,_8366,_8376):-call(_8376).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12],mach.Areg[13],mach.Areg[14]} ;*/
Term aregs[] = mach.RegPull(14);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_possessive_14__1(mach); }
public static Function<PrologMachine,Function> exec_pred_possessive_14__1(PrologMachine mach){ mach.FillAlternative(pred_possessive_14::exec_pred_possessive_14__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[14] ;
Term areg13 = local_aregs[13].Deref() ;
Term areg12 = local_aregs[12].Deref() ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var11))) return UpperPrologMachine.Fail0 ;
if (!( (areg12).Unify(var12))) return UpperPrologMachine.Fail0 ;
if (!( (areg13).Unify(var13))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var10.Deref() ;
local_aregs[1] = var14 ;
local_aregs[2] = var12.Deref() ;
local_aregs[3] = var15 ;
local_aregs[4] = F(chat_parser.s220,var16,var17,var18,var14.Deref(),var19,var15.Deref(),var20,F(chat_parser.s259,var16.Deref(),var17.Deref(),var18.Deref(),var21,F(chat_parser.s5,F(chat_parser.s260,chat_parser.s257,F(chat_parser.s216,var2.Deref(),var1.Deref(),var4.Deref())),var21.Deref()),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),var19.Deref(),var11.Deref(),var20.Deref(),var13.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_gen_case_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_possessive_14__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[14] ;
Term areg13 = local_aregs[13].Deref() ;
Term areg12 = local_aregs[12].Deref() ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var6.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg12).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg13).Unify(var7.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_gen_case_4 extends Code {

/*

gen_case(_8426,_8428,_8430,x(nogap,terminal,the,_8424),_8438):-gen_marker(_8426,_8428,_8430,_8424,_8438).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_gen_case_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_gen_case_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s340,chat_parser.s344,var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_gen_marker_4::exec_static ;}
}


class pred_an_s_4 extends Code {

/*

an_s(_8470,_8472,_8474,_8476,_8484):- ~(s,_8470,_8472,_8474,_8476,_8484).
an_s(_8518,_8518,_8520,_8520,_8530):-call(_8530).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_an_s_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_an_s_4__1(PrologMachine mach){ mach.FillAlternative(pred_an_s_4::exec_pred_an_s_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s303 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_an_s_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_determiner_7 extends Code {

/*

determiner(_8550,_8552,_8554,_8556,_8558,_8560,_8562,_8570):-det(_8550,_8552,_8554,_8556,_8558,_8560,_8562,_8570).
determiner(_8614,_8616,_8618,_8620,_8622,_8624,_8626,_8634):-quant_phrase(_8614,_8616,_8618,_8620,_8622,_8624,_8626,_8634).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_determiner_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_determiner_7__1(PrologMachine mach){ mach.FillAlternative(pred_determiner_7::exec_pred_determiner_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_det_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_determiner_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_quant_phrase_7::exec_static ;}
}


class pred_quant_phrase_7 extends Code {

/*

quant_phrase(quant(_8680,_8682),_8684,_8686,_8688,_8690,_8692,_8694,_8706):-quant(_8680,_8686,_8688,_8696,_8692,_8698,number(_8682,_8684,_8696,_8690,_8698,_8694,_8706)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_quant_phrase_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_quant_phrase_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s273,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var9 ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = var10 ;
local_aregs[6] = F(chat_parser.s224,var2.Deref(),var3.Deref(),var9.Deref(),var6.Deref(),var10.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_quant_6::exec_static ;}
}


class pred_quant_6 extends Code {

/*

quant(_8764,indef,_8766,_8768,_8770,_8772,_8790):-neg_adv(_8774,_8764,_8766,_8776,_8770,_8778,comp_adv(_8774,_8776,_8780,_8778,_8782,~(than,_8780,_8768,_8782,_8772,_8790))).
quant(_8858,indef,_8860,_8862,_8864,_8866,_8880):- ~(at,_8860,_8868,_8864,_8870,sup_adv(_8872,_8868,_8862,_8870,_8866,sup_op(_8872,_8858,_8880))).
quant(the,def,_8940,_8942,_8944,_8946,_8954):- ~(the,_8940,_8942,_8944,_8946,_8954).
quant(same,indef,_8992,_8992,_8994,_8994,_9004):-call(_9004).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_quant_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_quant_6__1(PrologMachine mach){ mach.FillAlternative(pred_quant_6::exec_pred_quant_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var8 ;
local_aregs[6] = F(chat_parser.s65,var6.Deref(),var7.Deref(),var9,var8.Deref(),var10,F(chat_parser.s404,chat_parser.s342,var9.Deref(),var3.Deref(),var10.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_neg_adv_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_quant_6__2(PrologMachine mach){ mach.FillAlternative(pred_quant_6::exec_pred_quant_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s37 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s336,var8,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),F(chat_parser.s337,var8.Deref(),var1.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_quant_6__3(PrologMachine mach){ mach.FillAlternative(pred_quant_6::exec_pred_quant_6__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s344))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s83))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s344 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_quant_6__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s305))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_neg_adv_6 extends Code {

/*

neg_adv(_9032,not+_9032,_9034,_9036,_9038,_9040,_9048):- ~(not,_9034,_9036,_9038,_9040,_9048).
neg_adv(_9086,_9086,_9088,_9088,_9090,_9090,_9100):-call(_9100).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_neg_adv_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_neg_adv_6__1(PrologMachine mach){ mach.FillAlternative(pred_neg_adv_6::exec_pred_neg_adv_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s210,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s210 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_neg_adv_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_sup_op_2 extends Code {

/*

sup_op(least,not+less,_9138):-call(_9138).
sup_op(most,not+more,_9168):-call(_9168).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sup_op_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sup_op_2__1(PrologMachine mach){ mach.FillAlternative(pred_sup_op_2::exec_pred_sup_op_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s171))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s210,chat_parser.s172)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sup_op_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s188))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s210,chat_parser.s187)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_np_mods_12 extends Code {

/*

np_mods(_9190,_9192,_9194,[_9186|_9188],_9196,_9198,_9200,_9202,_9204,_9206,_9208,_9210,_9232):-np_mod(_9190,_9192,_9186,_9196,_9212,_9204,_9214,_9208,_9216,trace1(_9218,myplus(_9218,_9212,_9220,minus(_9196,_9220,_9222,myplus(_9212,_9196,_9224,np_mods(_9190,_9192,_9194,_9188,_9222,_9198,_9224,_9202,_9214,_9206,_9216,_9210,_9232)))))).
np_mods(_9354,_9356,_9358,_9358,_9360,_9360,_9362,_9362,_9364,_9364,_9366,_9366,_9376):-call(_9376).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
Term aregs[] = mach.RegPull(12);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_mods_12__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_mods_12__1(PrologMachine mach){ mach.FillAlternative(pred_np_mods_12::exec_pred_np_mods_12__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var20 = V(mach) ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s5,var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var11))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var12))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var13))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var14 ;
local_aregs[5] = var10.Deref() ;
local_aregs[6] = var15 ;
local_aregs[7] = var12.Deref() ;
local_aregs[8] = var16 ;
local_aregs[9] = F(chat_parser.s361,var17,F(chat_parser.s192,var17.Deref(),var14.Deref(),var18,F(chat_parser.s186,var6.Deref(),var18.Deref(),var19,F(chat_parser.s192,var14.Deref(),var6.Deref(),var20,F(chat_parser.s222,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),var19.Deref(),var7.Deref(),var20.Deref(),var9.Deref(),var15.Deref(),var11.Deref(),var16.Deref(),var13.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = null ;
return (Function<PrologMachine,Function>)pred_np_mod_9::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_mods_12__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var6.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var7.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_np_mod_9 extends Code {

/*

np_mod(_9412,_9414,_9416,_9418,_9420,_9422,_9424,_9426,_9428,_9436):-pp(_9416,_9414,_9418,_9420,_9422,_9424,_9426,_9428,_9436).
np_mod(_9486,_9488,_9490,_9492,_9494,_9496,_9498,_9500,_9502,_9510):-reduced_relative(_9486,_9490,_9492,_9494,_9496,_9498,_9500,_9502,_9510).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_np_mod_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_np_mod_9__1(PrologMachine mach){ mach.FillAlternative(pred_np_mod_9::exec_pred_np_mod_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var8.Deref() ;
local_aregs[7] = var9.Deref() ;
local_aregs[8] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = null ;
return (Function<PrologMachine,Function>)pred_pp_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_np_mod_9__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var8.Deref() ;
local_aregs[7] = var9.Deref() ;
local_aregs[8] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = null ;
return (Function<PrologMachine,Function>)pred_reduced_relative_8::exec_static ;}
}


class pred_verb_mods_8 extends Code {

/*

verb_mods([_9562|_9564],_9566,_9568,_9570,_9572,_9574,_9576,_9578,_9600):-verb_mod(_9562,_9566,_9580,_9572,_9582,_9576,_9584,trace1(_9586,myplus(_9586,_9580,_9588,minus(_9566,_9588,_9590,myplus(_9580,_9566,_9592,verb_mods(_9564,_9590,_9592,_9570,_9582,_9574,_9584,_9578,_9600)))))).
verb_mods([],_9702,_9704,_9704,_9706,_9706,_9708,_9708,_9718):-call(_9718).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_mods_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_mods_8__1(PrologMachine mach){ mach.FillAlternative(pred_verb_mods_8::exec_pred_verb_mods_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var10 ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var12 ;
local_aregs[7] = F(chat_parser.s361,var13,F(chat_parser.s192,var13.Deref(),var10.Deref(),var14,F(chat_parser.s186,var3.Deref(),var14.Deref(),var15,F(chat_parser.s192,var10.Deref(),var3.Deref(),var16,F(chat_parser.s376,var2.Deref(),var15.Deref(),var16.Deref(),var5.Deref(),var11.Deref(),var7.Deref(),var12.Deref(),var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_mod_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_mods_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_mod_7 extends Code {

/*

verb_mod(_9746,_9748,_9750,_9752,_9754,_9756,_9758,_9766):-adv_phrase(_9746,_9748,_9750,_9752,_9754,_9756,_9758,_9766).
verb_mod(_9810,_9812,_9814,_9816,_9818,_9820,_9822,_9830):-is_adv(_9812,adverb(_9810,_9816,_9818,_9820,_9822,empty(_9814,_9830))).
verb_mod(_9882,_9884,_9886,_9888,_9890,_9892,_9894,_9902):-pp(_9882,compl,_9884,_9886,_9888,_9890,_9892,_9894,_9902).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_mod_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_mod_7__1(PrologMachine mach){ mach.FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_adv_phrase_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_mod_7__2(PrologMachine mach){ mach.FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = F(chat_parser.s15,var1.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),F(chat_parser.s104,var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_adv_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_mod_7__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = chat_parser.s67 ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = var7.Deref() ;
local_aregs[8] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_pp_8::exec_static ;}
}


class pred_adjs_5 extends Code {

/*

adjs([_9950|_9952],_9954,_9956,_9958,_9960,_9972):-pre_adj(_9950,_9954,_9962,_9958,_9964,adjs(_9952,_9962,_9956,_9964,_9960,_9972)).
adjs([],_10022,_10022,_10024,_10024,_10034):-call(_10034).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adjs_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adjs_5__1(PrologMachine mach){ mach.FillAlternative(pred_adjs_5::exec_pred_adjs_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var7 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var8 ;
local_aregs[5] = F(chat_parser.s12,var2.Deref(),var7.Deref(),var4.Deref(),var8.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_pre_adj_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_adjs_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_pre_adj_5 extends Code {

/*

pre_adj(_10056,_10058,_10060,_10062,_10064,_10074):-adj(_10066,_10056,_10058,_10060,_10062,_10064,_10074).
pre_adj(_10112,_10114,_10116,_10118,_10120,_10128):-sup_phrase(_10112,_10114,_10116,_10118,_10120,_10128).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pre_adj_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pre_adj_5__1(PrologMachine mach){ mach.FillAlternative(pred_pre_adj_5::exec_pred_pre_adj_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_adj_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_pre_adj_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sup_phrase_5::exec_static ;}
}


class pred_sup_phrase_5 extends Code {

/*

sup_phrase(sup(most,_10168),_10170,_10172,_10174,_10176,_10184):-sup_adj(_10168,_10170,_10172,_10174,_10176,_10184).
sup_phrase(sup(_10222,_10224),_10226,_10228,_10230,_10232,_10244):-sup_adv(_10222,_10226,_10234,_10230,_10236,adj(quant,_10224,_10234,_10228,_10236,_10232,_10244)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sup_phrase_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sup_phrase_5__1(PrologMachine mach){ mach.FillAlternative(pred_sup_phrase_5::exec_pred_sup_phrase_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s334,chat_parser.s188,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sup_adj_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sup_phrase_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s334,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var7 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var8 ;
local_aregs[5] = F(chat_parser.s10,chat_parser.s273,var2.Deref(),var7.Deref(),var4.Deref(),var8.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sup_adv_5::exec_static ;}
}


class pred_comp_phrase_6 extends Code {

/*

comp_phrase(comp(_10298,_10300,_10302),_10304,_10306,_10308,_10310,_10312,_10332):-comp(_10298,_10300,_10306,_10314,_10310,_10316,np_no_trace(_10318,prep_case(_10320,np(_10302,_10322,_10320,_10324,compl,_10318,_10304,_10314,_10308,_10316,_10312,_10332)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_comp_phrase_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_comp_phrase_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s64,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var9 ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = var10 ;
local_aregs[6] = F(chat_parser.s223,var11,F(chat_parser.s266,var12,F(chat_parser.s216,var3.Deref(),var13,var12.Deref(),var14,chat_parser.s67,var11.Deref(),var4.Deref(),var9.Deref(),var6.Deref(),var10.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_comp_6::exec_static ;}
}


class pred_comp_6 extends Code {

/*

comp(_10410,_10412,_10414,_10416,_10418,_10420,_10436):-comp_adv(_10410,_10414,_10422,_10418,_10424,adj(quant,_10412,_10422,_10426,_10424,_10428,~(than,_10426,_10416,_10428,_10420,_10436))).
comp(more,_10504,_10506,_10508,_10510,_10512,_10524):-rel_adj(_10504,_10506,_10514,_10510,_10516,~(than,_10514,_10508,_10516,_10512,_10524)).
comp(same,_10576,_10578,_10580,_10582,_10584,_10600):- ~(as,_10578,_10586,_10582,_10588,adj(quant,_10576,_10586,_10590,_10588,_10592,~(as,_10590,_10580,_10592,_10584,_10600))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_comp_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_comp_6__1(PrologMachine mach){ mach.FillAlternative(pred_comp_6::exec_pred_comp_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var7 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var8 ;
local_aregs[5] = F(chat_parser.s10,chat_parser.s273,var2.Deref(),var7.Deref(),var9,var8.Deref(),var10,F(chat_parser.s404,chat_parser.s342,var9.Deref(),var4.Deref(),var10.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_comp_adv_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_comp_6__2(PrologMachine mach){ mach.FillAlternative(pred_comp_6::exec_pred_comp_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s187))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s404,chat_parser.s342,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_rel_adj_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_comp_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s305))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s35 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s10,chat_parser.s273,var1.Deref(),var6.Deref(),var8,var7.Deref(),var9,F(chat_parser.s404,chat_parser.s35,var8.Deref(),var3.Deref(),var9.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_relative_9 extends Code {

/*

relative(_10674,[_10670],_10676,_10678,_10680,_10682,_10684,_10686,_10688,_10698):-is_pred(_10676,rel_conj(_10674,_10690,_10670,_10680,_10682,_10684,_10686,_10688,_10698)).
relative(_10754,[],_10756,_10758,_10758,_10760,_10760,_10762,_10762,_10772):-call(_10772).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_relative_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_relative_9__1(PrologMachine mach){ mach.FillAlternative(pred_relative_9::exec_pred_relative_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s5,var2,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(chat_parser.s288,var1.Deref(),var10,var2.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_pred_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_relative_9__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_rel_conj_8 extends Code {

/*

rel_conj(_10802,_10804,_10806,_10808,_10810,_10812,_10814,_10816,_10832):-rel(_10802,_10818,_10820,_10810,_10822,_10814,_10824,rel_rest(_10802,_10804,_10818,_10806,_10820,_10808,_10822,_10812,_10824,_10816,_10832)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_conj_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_conj_8__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var12 ;
local_aregs[7] = F(chat_parser.s290,var1.Deref(),var2.Deref(),var9.Deref(),var3.Deref(),var10.Deref(),var4.Deref(),var11.Deref(),var6.Deref(),var12.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_rel_7::exec_static ;}
}


class pred_rel_rest_10 extends Code {

/*

rel_rest(_10902,_10904,_10906,_10908,_10910,_10912,_10914,_10916,_10918,_10920,_10936):-conj(_10904,_10922,_10906,_10924,_10908,_10914,_10926,_10918,_10928,rel_conj(_10902,_10922,_10924,_10912,_10926,_10916,_10928,_10920,_10936)).
rel_rest(_11010,_11012,_11014,_11014,_11016,_11016,_11018,_11018,_11020,_11020,_11030):-call(_11030).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
Term aregs[] = mach.RegPull(10);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_rest_10__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_rest_10__1(PrologMachine mach){ mach.FillAlternative(pred_rel_rest_10::exec_pred_rel_rest_10__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var11 ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var12 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var13 ;
local_aregs[7] = var9.Deref() ;
local_aregs[8] = var14 ;
local_aregs[9] = F(chat_parser.s288,var1.Deref(),var11.Deref(),var12.Deref(),var6.Deref(),var13.Deref(),var8.Deref(),var14.Deref(),var10.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = null ;
return (Function<PrologMachine,Function>)pred_conj_9::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rel_rest_10__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var6.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_rel_7 extends Code {

/*

rel(_11068,rel(_11064,_11066),_11070,_11072,_11074,_11076,_11078,_11102):-myopen(_11072,_11080,_11076,_11082,variable(_11068,_11064,_11080,_11084,_11082,_11086,s(_11066,_11088,_11084,_11090,_11086,_11092,trace1(_11094,minus(_11088,_11094,_11070,close(_11090,_11074,_11092,_11078,_11102)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s286,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = var10 ;
local_aregs[4] = F(chat_parser.s368,var1.Deref(),var2.Deref(),var9.Deref(),var11,var10.Deref(),var12,F(chat_parser.s303,var3.Deref(),var13,var11.Deref(),var14,var12.Deref(),var15,F(chat_parser.s361,var16,F(chat_parser.s186,var13.Deref(),var16.Deref(),var4.Deref(),F(chat_parser.s62,var14.Deref(),var6.Deref(),var15.Deref(),var8.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_myopen_4::exec_static ;}
}


class pred_variable_6 extends Code {

/*

variable(_11206,_11202,_11238,_11240,_11242,x(gap,nonterminal,np(np(_11206,wh(_11202),[]),_11206,_11218,_11220,_11222,_11224,_11226),_11236),_11250):- ~(that,_11238,_11240,_11242,_11236,trace1(_11224,_11226,_11250)).
variable(_11322,_11324,_11326,_11328,_11330,x(gap,nonterminal,np(_11298,_11300,_11302,_11304,_11306,_11308,_11310),_11320),_11338):-wh(_11324,_11322,_11298,_11300,_11302,_11326,_11328,_11330,_11320,trace1(_11308,_11310,_11338)).
variable(_11418,_11420,_11422,_11424,_11426,x(gap,nonterminal,pp(pp(_11394,_11396),compl,_11404,_11406),_11416),_11442):-prep(_11394,_11422,_11428,_11426,_11430,wh(_11420,_11418,_11396,_11432,_11434,_11428,_11424,_11430,_11416,trace1(_11404,_11406,compl_case(_11434,_11442)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_variable_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_variable_6__1(PrologMachine mach){ mach.FillAlternative(pred_variable_6::exec_pred_variable_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s216,F(chat_parser.s216,var1.Deref(),F(chat_parser.s386,var2.Deref()),Const.Nil),var1.Deref(),var6,var7,var8,var9,var10),var11)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s343 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var11.Deref() ;
local_aregs[5] = F(chat_parser.s361,var9.Deref(),var10.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_variable_6__2(PrologMachine mach){ mach.FillAlternative(pred_variable_6::exec_pred_variable_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s216,var6,var7,var8,var9,var10,var11,var12),var13)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = var3.Deref() ;
local_aregs[6] = var4.Deref() ;
local_aregs[7] = var5.Deref() ;
local_aregs[8] = var13.Deref() ;
local_aregs[9] = F(chat_parser.s361,var11.Deref(),var12.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_wh_9::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_variable_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s260,F(chat_parser.s260,var6,var7),chat_parser.s67,var8,var9),var10)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var11 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var12 ;
local_aregs[5] = F(chat_parser.s386,var2.Deref(),var1.Deref(),var7.Deref(),var13,var14,var11.Deref(),var4.Deref(),var12.Deref(),var10.Deref(),F(chat_parser.s361,var8.Deref(),var9.Deref(),F(chat_parser.s68,var14.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_prep_5::exec_static ;}
}


class pred_wh_9 extends Code {

/*

wh(_11518,_11522,np(_11522,wh(_11518),[]),_11522,_11528,_11530,_11532,_11534,_11536,_11546):-rel_pron(_11538,_11530,_11532,_11534,_11536,role(_11538,decl,_11528,_11546)).
wh(_11620,_11622,np(_11614,_11616,[pp(_11602,_11604)]),_11614,_11624,_11626,_11628,_11630,_11632,_11658):-np_head0(_11616,_11614,_11636+common,_11626,_11640,_11630,_11642,prep(_11602,_11640,_11644,_11642,_11646,wh(_11620,_11622,_11604,_11648,_11650,_11644,_11628,_11646,_11632,_11658))).
wh(_11742,_11744,_11746,_11748,_11750,_11752,_11754,_11756,_11758,_11774):-whose(_11742,_11744,_11752,_11760,_11756,_11762,s_all(_11764,np(_11746,_11748,_11750,def,subj,_11764,_11766,_11760,_11754,_11762,_11758,_11774))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_wh_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_wh_9__1(PrologMachine mach){ mach.FillAlternative(pred_wh_9::exec_pred_wh_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s216,var2.Deref(),F(chat_parser.s386,var1.Deref()),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = F(chat_parser.s299,var8.Deref(),chat_parser.s81,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_rel_pron_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_wh_9__2(PrologMachine mach){ mach.FillAlternative(pred_wh_9::exec_pred_wh_9__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s216,var3,var4,F(chat_parser.s5,F(chat_parser.s260,var5,var6),Const.Nil))))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var11))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(chat_parser.s3,var12,chat_parser.s63) ;
local_aregs[3] = var8.Deref() ;
local_aregs[4] = var13 ;
local_aregs[5] = var10.Deref() ;
local_aregs[6] = var14 ;
local_aregs[7] = F(chat_parser.s265,var5.Deref(),var13.Deref(),var15,var14.Deref(),var16,F(chat_parser.s386,var1.Deref(),var2.Deref(),var6.Deref(),var17,var18,var15.Deref(),var9.Deref(),var16.Deref(),var11.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_np_head0_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_wh_9__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var10 ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = var11 ;
local_aregs[6] = F(chat_parser.s304,var12,F(chat_parser.s216,var3.Deref(),var4.Deref(),var5.Deref(),chat_parser.s83,chat_parser.s329,var12.Deref(),var13,var10.Deref(),var7.Deref(),var11.Deref(),var9.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_whose_6::exec_static ;}
}


class pred_reduced_relative_8 extends Code {

/*

reduced_relative(_11852,_11854,_11856,_11858,_11860,_11862,_11864,_11866,_11876):-is_pred(_11856,reduced_rel_conj(_11852,_11868,_11854,_11858,_11860,_11862,_11864,_11866,_11876)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reduced_relative_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reduced_relative_8__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(chat_parser.s278,var1.Deref(),var9,var2.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_pred_1::exec_static ;}
}


class pred_reduced_rel_conj_8 extends Code {

/*

reduced_rel_conj(_11930,_11932,_11934,_11936,_11938,_11940,_11942,_11944,_11960):-reduced_rel(_11930,_11946,_11948,_11938,_11950,_11942,_11952,reduced_rel_rest(_11930,_11932,_11946,_11934,_11948,_11936,_11950,_11940,_11952,_11944,_11960)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reduced_rel_conj_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reduced_rel_conj_8__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var12 ;
local_aregs[7] = F(chat_parser.s279,var1.Deref(),var2.Deref(),var9.Deref(),var3.Deref(),var10.Deref(),var4.Deref(),var11.Deref(),var6.Deref(),var12.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_reduced_rel_7::exec_static ;}
}


class pred_reduced_rel_rest_10 extends Code {

/*

reduced_rel_rest(_12030,_12032,_12034,_12036,_12038,_12040,_12042,_12044,_12046,_12048,_12064):-conj(_12032,_12050,_12034,_12052,_12036,_12042,_12054,_12046,_12056,reduced_rel_conj(_12030,_12050,_12052,_12040,_12054,_12044,_12056,_12048,_12064)).
reduced_rel_rest(_12138,_12140,_12142,_12142,_12144,_12144,_12146,_12146,_12148,_12148,_12158):-call(_12158).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
Term aregs[] = mach.RegPull(10);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reduced_rel_rest_10__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reduced_rel_rest_10__1(PrologMachine mach){ mach.FillAlternative(pred_reduced_rel_rest_10::exec_pred_reduced_rel_rest_10__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var11 ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var12 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var13 ;
local_aregs[7] = var9.Deref() ;
local_aregs[8] = var14 ;
local_aregs[9] = F(chat_parser.s278,var1.Deref(),var11.Deref(),var12.Deref(),var6.Deref(),var13.Deref(),var8.Deref(),var14.Deref(),var10.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = null ;
return (Function<PrologMachine,Function>)pred_conj_9::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_reduced_rel_rest_10__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[10] ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var6.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_reduced_rel_7 extends Code {

/*

reduced_rel(_12196,reduced_rel(_12192,_12194),_12198,_12200,_12202,_12204,_12206,_12230):-myopen(_12200,_12208,_12204,_12210,reduced_wh(_12196,_12192,_12208,_12212,_12210,_12214,s(_12194,_12216,_12212,_12218,_12214,_12220,trace1(_12222,minus(_12216,_12222,_12198,close(_12218,_12202,_12220,_12206,_12230)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reduced_rel_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reduced_rel_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s277,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = var10 ;
local_aregs[4] = F(chat_parser.s281,var1.Deref(),var2.Deref(),var9.Deref(),var11,var10.Deref(),var12,F(chat_parser.s303,var3.Deref(),var13,var11.Deref(),var14,var12.Deref(),var15,F(chat_parser.s361,var16,F(chat_parser.s186,var13.Deref(),var16.Deref(),var4.Deref(),F(chat_parser.s62,var14.Deref(),var6.Deref(),var15.Deref(),var8.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_myopen_4::exec_static ;}
}


class pred_reduced_wh_6 extends Code {

/*

reduced_wh(_12334,_12330,_12426,_12428,_12430,x(nogap,nonterminal,np(np(_12334,wh(_12330),[]),_12334,_12346,_12348,_12350,_12352,_12354),x(nogap,nonterminal,verb_form(be,pres+fin,_12334,main),x(nogap,nonterminal,neg(_12374,_12376),x(nogap,nonterminal,predicate(_12376,_12382,_12384),_12394)))),_12444):-neg(_12432,_12376,_12426,_12434,_12430,_12436,predicate(_12376,_12382,_12384,_12434,_12428,_12436,_12394,trace1(_12352,_12354,subj_case(_12346,_12444)))).
reduced_wh(_12522,_12518,_12574,_12576,_12578,x(nogap,nonterminal,np(np(_12522,wh(_12518),[]),_12522,_12534,_12536,_12538,_12540,_12542),x(nogap,nonterminal,verb(_12546,_12548,_12550,_12552),_12562)),_12586):-participle(_12546,_12550,_12552,_12574,_12576,_12578,_12562,trace1(_12540,_12542,subj_case(_12534,_12586))).
reduced_wh(_12664,_12660,_12706,_12708,_12710,x(nogap,nonterminal,np(_12644,_12646,_12648,_12650,_12652,_12654,_12656),x(gap,nonterminal,np(np(_12664,wh(_12660),[]),_12664,_12676,_12678,_12680,_12682,_12684),_12694)),_12724):-s_all(_12712,subj_case(_12648,verb_case(_12676,np(_12644,_12646,_12714,_12650,subj,_12712,_12716,_12706,_12708,_12710,_12694,trace1(_12654,_12656,trace1(_12682,_12684,_12724)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reduced_wh_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reduced_wh_6__1(PrologMachine mach){ mach.FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s216,F(chat_parser.s216,var1.Deref(),F(chat_parser.s386,var2.Deref()),Const.Nil),var1.Deref(),var6,var7,var8,var9,var10),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s374,chat_parser.s43,F(chat_parser.s3,chat_parser.s267,chat_parser.s119),var1.Deref(),chat_parser.s178),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s195,var11,var12),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s264,var12.Deref(),var13,var14),var15))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var16 ;
local_aregs[1] = var12.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var17 ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var18 ;
local_aregs[6] = F(chat_parser.s264,var12.Deref(),var13.Deref(),var14.Deref(),var17.Deref(),var4.Deref(),var18.Deref(),var15.Deref(),F(chat_parser.s361,var9.Deref(),var10.Deref(),F(chat_parser.s330,var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_neg_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_reduced_wh_6__2(PrologMachine mach){ mach.FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s216,F(chat_parser.s216,var1.Deref(),F(chat_parser.s386,var2.Deref()),Const.Nil),var1.Deref(),var6,var7,var8,var9,var10),F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s370,var11,var12,var13,var14),var15))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var11.Deref() ;
local_aregs[1] = var13.Deref() ;
local_aregs[2] = var14.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = var15.Deref() ;
local_aregs[7] = F(chat_parser.s361,var9.Deref(),var10.Deref(),F(chat_parser.s330,var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_participle_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_reduced_wh_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(chat_parser.s399,chat_parser.s206,chat_parser.s207,F(chat_parser.s216,var6,var7,var8,var9,var10,var11,var12),F(chat_parser.s399,chat_parser.s128,chat_parser.s207,F(chat_parser.s216,F(chat_parser.s216,var1.Deref(),F(chat_parser.s386,var2.Deref()),Const.Nil),var1.Deref(),var13,var14,var15,var16,var17),var18))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var19 ;
local_aregs[1] = F(chat_parser.s330,var8.Deref(),F(chat_parser.s373,var13.Deref(),F(chat_parser.s216,var6.Deref(),var7.Deref(),var20,var9.Deref(),chat_parser.s329,var19.Deref(),var21,var3.Deref(),var4.Deref(),var5.Deref(),var18.Deref(),F(chat_parser.s361,var11.Deref(),var12.Deref(),F(chat_parser.s361,var16.Deref(),var17.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_s_all_1::exec_static ;}
}


class pred_verb_8 extends Code {

/*

verb(_12808,_12810,_12812,_12814,_12816,_12816,_12818,_12820,_12838):-virtual(verb(_12808,_12810,_12812,_12814),_12818,_12820,_12838).
verb(verb(_12884,_12886,_12878+fin,_12890,_12892),_12894,_12896,_12886,_12898,_12900,_12902,_12904,_12932):-verb_form(_12912,_12878+fin,_12894,_12914,_12898,_12916,_12902,_12918,verb_type(_12912,_12920,neg(_12920,_12892,_12916,_12922,_12918,_12924,rest_verb(_12914,_12912,_12884,_12886,_12890,_12922,_12900,_12924,_12904,verb_type(_12884,_12896,_12932))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_8__1(PrologMachine mach){ mach.FillAlternative(pred_verb_8::exec_pred_verb_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(chat_parser.s370,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s370,var1,var2,F(chat_parser.s3,var3,chat_parser.s119),var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var11))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var12 ;
local_aregs[1] = F(chat_parser.s3,var3.Deref(),chat_parser.s119) ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var13 ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = var14 ;
local_aregs[6] = var10.Deref() ;
local_aregs[7] = var15 ;
local_aregs[8] = F(chat_parser.s378,var12.Deref(),var16,F(chat_parser.s195,var16.Deref(),var5.Deref(),var14.Deref(),var17,var15.Deref(),var18,F(chat_parser.s292,var13.Deref(),var12.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),var17.Deref(),var9.Deref(),var18.Deref(),var11.Deref(),F(chat_parser.s378,var1.Deref(),var7.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
}


class pred_rest_verb_9 extends Code {

/*

rest_verb(aux,have,_13040,_13042,[perf|_13038],_13044,_13046,_13048,_13050,_13074):-verb_form(_13058,past+part,_13060,_13062,_13044,_13064,_13048,_13066,have(_13058,_13040,_13042,_13038,_13064,_13046,_13066,_13050,_13074)).
rest_verb(aux,be,_13144,_13146,_13148,_13150,_13152,_13154,_13156,_13176):-verb_form(_13158,_13160,_13162,_13164,_13150,_13166,_13154,_13168,be(_13160,_13158,_13144,_13146,_13148,_13166,_13152,_13168,_13156,_13176)).
rest_verb(aux,do,_13248,active,[],_13250,_13252,_13254,_13256,_13268):-verb_form(_13248,inf,_13258,_13260,_13250,_13252,_13254,_13256,_13268).
rest_verb(main,_13318,_13318,active,[],_13320,_13320,_13322,_13322,_13332):-call(_13332).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rest_verb_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rest_verb_9__1(PrologMachine mach){ mach.FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s39))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s5,chat_parser.s246,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = F(chat_parser.s3,chat_parser.s243,chat_parser.s240) ;
local_aregs[2] = var9 ;
local_aregs[3] = var10 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var11 ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = var12 ;
local_aregs[8] = F(chat_parser.s137,var8.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),var11.Deref(),var5.Deref(),var12.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = null ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rest_verb_9__2(PrologMachine mach){ mach.FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s39))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = var11 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var12 ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = var13 ;
local_aregs[8] = F(chat_parser.s43,var9.Deref(),var8.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),var12.Deref(),var5.Deref(),var13.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = null ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rest_verb_9__3(PrologMachine mach){ mach.FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s39))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = chat_parser.s151 ;
local_aregs[2] = var6 ;
local_aregs[3] = var7 ;
local_aregs[4] = var2.Deref() ;
local_aregs[5] = var3.Deref() ;
local_aregs[6] = var4.Deref() ;
local_aregs[7] = var5.Deref() ;
local_aregs[8] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = null ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rest_verb_9__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s178))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_have_8 extends Code {

/*

have(be,_13362,_13364,_13366,_13368,_13370,_13372,_13374,_13394):-verb_form(_13376,_13378,_13380,_13382,_13368,_13384,_13372,_13386,be(_13378,_13376,_13362,_13364,_13366,_13384,_13370,_13386,_13374,_13394)).
have(_13464,_13464,active,[],_13466,_13466,_13468,_13468,_13478):-call(_13478).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_have_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_have_8__1(PrologMachine mach){ mach.FillAlternative(pred_have_8::exec_pred_have_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = var11 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var12 ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = var13 ;
local_aregs[8] = F(chat_parser.s43,var9.Deref(),var8.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),var12.Deref(),var5.Deref(),var13.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_have_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_be_9 extends Code {

/*

be(past+part,_13512,_13512,passive,[],_13514,_13514,_13516,_13516,_13526):-call(_13526).
be(pres+part,_13568,_13570,_13572,[prog],_13574,_13576,_13578,_13580,_13588):-passive(_13568,_13570,_13572,_13574,_13576,_13578,_13580,_13588).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_be_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_be_9__1(PrologMachine mach){ mach.FillAlternative(pred_be_9::exec_pred_be_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s242))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_be_9__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s5,chat_parser.s268,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_passive_7::exec_static ;}
}


class pred_passive_7 extends Code {

/*

passive(be,_13636,passive,_13638,_13640,_13642,_13644,_13664):-verb_form(_13636,past+part,_13652,_13654,_13638,_13640,_13642,_13644,verb_type(_13636,_13656,passive(_13656,_13664))).
passive(_13724,_13724,active,_13726,_13726,_13728,_13728,_13738):-call(_13738).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_passive_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_passive_7__1(PrologMachine mach){ mach.FillAlternative(pred_passive_7::exec_pred_passive_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s242))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(chat_parser.s3,chat_parser.s243,chat_parser.s240) ;
local_aregs[2] = var6 ;
local_aregs[3] = var7 ;
local_aregs[4] = var2.Deref() ;
local_aregs[5] = var3.Deref() ;
local_aregs[6] = var4.Deref() ;
local_aregs[7] = var5.Deref() ;
local_aregs[8] = F(chat_parser.s378,var1.Deref(),var8,F(chat_parser.s242,var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_8::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_passive_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_participle_7 extends Code {

/*

participle(verb(_13766,_13768,inf,_13772,_13774),_13776,_13768,_13778,_13780,_13782,_13784,_13804):-neg(_13786,_13774,_13778,_13788,_13782,_13790,verb_form(_13766,_13792,_13794,_13796,_13788,_13780,_13790,_13784,participle(_13792,_13768,_13772,verb_type(_13766,_13776,_13804)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_participle_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_participle_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s370,var1,var2,chat_parser.s151,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var10 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var11 ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = var12 ;
local_aregs[6] = F(chat_parser.s374,var1.Deref(),var13,var14,var15,var11.Deref(),var7.Deref(),var12.Deref(),var9.Deref(),F(chat_parser.s241,var13.Deref(),var2.Deref(),var3.Deref(),F(chat_parser.s378,var1.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = null ;
return (Function<PrologMachine,Function>)pred_neg_6::exec_static ;}
}


class pred_passive_1 extends Code {

/*

passive(_13886+trans,_13898):-call(_13898).
passive(_13914+ditrans,_13926):-call(_13926).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_passive_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_passive_1__1(PrologMachine mach){ mach.FillAlternative(pred_passive_1::exec_pred_passive_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,var1,chat_parser.s362)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_passive_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,var1,chat_parser.s91)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_participle_3 extends Code {

/*

participle(pres+part,active,[prog],_13960):-call(_13960).
participle(past+part,passive,[],_13992):-call(_13992).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_participle_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_participle_3__1(PrologMachine mach){ mach.FillAlternative(pred_participle_3::exec_pred_participle_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,chat_parser.s268,Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_participle_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s242))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_close_4 extends Code {

/*

close(_14010,_14010,_14012,_14014,_14022):-virtual(close,_14012,_14014,_14022).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_close_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_close_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s62 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_virtual_3::exec_static ;}
}


class pred_myopen_4 extends Code {

/*

myopen(_14062,_14062,_14060,x(gap,nonterminal,close,_14060),_14072):-call(_14072).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_myopen_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_myopen_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s399,chat_parser.s128,chat_parser.s207,chat_parser.s62,var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_args_9 extends Code {

/*

verb_args(_14094+_14096,_14098,_14100,_14102,_14104,_14106,_14108,_14110,_14112,_14128):-advs(_14100,_14114,_14116,_14106,_14118,_14110,_14120,verb_args(_14096,_14098,_14114,_14102,_14104,_14118,_14108,_14120,_14112,_14128)).
verb_args(trans,active,[arg(dir,_14202)],_14210,_14212,_14214,_14216,_14218,_14220,_14228):-verb_arg(np,_14202,_14212,_14214,_14216,_14218,_14220,_14228).
verb_args(ditrans,_14288,[arg(_14278,_14280)|_14286],_14290,_14292,_14294,_14296,_14298,_14300,_14314):-verb_arg(np,_14280,_14302,_14294,_14304,_14298,_14306,object(_14278,_14286,_14302,_14292,_14304,_14296,_14306,_14300,_14314)).
verb_args(be,_14388,[void],_14390,_14390,_14392,_14394,_14396,_14398,_14406):-terminal(there,_14392,_14394,_14396,_14398,_14406).
verb_args(be,_14462,[arg(predicate,_14454)],_14464,_14466,_14468,_14470,_14472,_14474,_14484):-pred_conj(_14476,_14454,_14466,_14468,_14470,_14472,_14474,_14484).
verb_args(be,_14544,[arg(dir,_14536)],_14546,_14548,_14550,_14552,_14554,_14556,_14564):-verb_arg(np,_14536,_14548,_14550,_14552,_14554,_14556,_14564).
verb_args(have,active,[arg(dir,_14616)],_14624,_14626,_14628,_14630,_14632,_14634,_14642):-verb_arg(np,_14616,_14626,_14628,_14630,_14632,_14634,_14642).
verb_args(_14690,_14692,[],_14694,_14694,_14696,_14696,_14698,_14698,_14706):-no_args(_14690,_14706).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_args_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_args_9__1(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var11 ;
local_aregs[2] = var12 ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var13 ;
local_aregs[5] = var9.Deref() ;
local_aregs[6] = var14 ;
local_aregs[7] = F(chat_parser.s372,var2.Deref(),var3.Deref(),var11.Deref(),var5.Deref(),var6.Deref(),var13.Deref(),var8.Deref(),var14.Deref(),var10.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_advs_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__2(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s362))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,F(chat_parser.s34,chat_parser.s90,var1),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s216 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_arg_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__3(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s91))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,F(chat_parser.s34,var2,var3),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s216 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var11 ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var12 ;
local_aregs[5] = var9.Deref() ;
local_aregs[6] = var13 ;
local_aregs[7] = F(chat_parser.s227,var2.Deref(),var4.Deref(),var11.Deref(),var6.Deref(),var12.Deref(),var8.Deref(),var13.Deref(),var10.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_arg_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__4(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,chat_parser.s380,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s347 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__5(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,F(chat_parser.s34,chat_parser.s264,var2),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var9 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var8.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_pred_conj_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__6(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,F(chat_parser.s34,chat_parser.s90,var2),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s216 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = var8.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_arg_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__7(PrologMachine mach){ mach.FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s9))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s5,F(chat_parser.s34,chat_parser.s90,var1),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s216 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_arg_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_args_9__8(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_no_args_1::exec_static ;}
}


class pred_object_8 extends Code {

/*

object(_14742,_14744,_14746,_14748,_14750,_14752,_14754,_14756,_14774):-adv(_14758,minus(_14758,_14746,_14760,advs(_14744,_14762,_14760,_14750,_14764,_14754,_14766,obj(_14742,_14762,_14746,_14748,_14764,_14752,_14766,_14756,_14774)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_object_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_object_8__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var9 ;
local_aregs[1] = F(chat_parser.s186,var9.Deref(),var3.Deref(),var10,F(chat_parser.s16,var2.Deref(),var11,var10.Deref(),var5.Deref(),var12,var7.Deref(),var13,F(chat_parser.s226,var1.Deref(),var11.Deref(),var3.Deref(),var4.Deref(),var12.Deref(),var6.Deref(),var13.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_adv_1::exec_static ;}
}


class pred_obj_8 extends Code {

/*

obj(ind,[arg(dir,_14860)],_14868,_14870,_14872,_14874,_14876,_14878,_14886):-verb_arg(np,_14860,_14870,_14872,_14874,_14876,_14878,_14886).
obj(dir,[],_14932,_14932,_14934,_14934,_14936,_14936,_14946):-call(_14946).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_obj_8__1(mach); }
public static Function<PrologMachine,Function> exec_pred_obj_8__1(PrologMachine mach){ mach.FillAlternative(pred_obj_8::exec_pred_obj_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s149))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s5,F(chat_parser.s34,chat_parser.s90,var1),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s216 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var7.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_verb_arg_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_obj_8__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s90))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_pred_conj_7 extends Code {

/*

pred_conj(_14974,_14976,_14978,_14980,_14982,_14984,_14986,_15004):-predicate(_14988,_14990,_14992,_14980,_14994,_14984,_14996,pred_rest(_14974,_14990,_14976,_14992,_14978,_14994,_14982,_14996,_14986,_15004)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pred_conj_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pred_conj_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var11 ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var12 ;
local_aregs[7] = F(chat_parser.s263,var1.Deref(),var9.Deref(),var2.Deref(),var10.Deref(),var3.Deref(),var11.Deref(),var5.Deref(),var12.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_predicate_7::exec_static ;}
}


class pred_pred_rest_9 extends Code {

/*

pred_rest(_15070,_15072,_15074,_15076,_15078,_15080,_15082,_15084,_15086,_15102):-conj(_15070,_15088,_15072,_15090,_15074,_15080,_15092,_15084,_15094,pred_conj(_15088,_15090,_15078,_15092,_15082,_15094,_15086,_15102)).
pred_rest(_15172,_15174,_15174,_15176,_15176,_15178,_15178,_15180,_15180,_15190):-call(_15190).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pred_rest_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pred_rest_9__1(PrologMachine mach){ mach.FillAlternative(pred_pred_rest_9::exec_pred_pred_rest_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var11 ;
local_aregs[4] = var3.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = var12 ;
local_aregs[7] = var8.Deref() ;
local_aregs[8] = var13 ;
local_aregs[9] = F(chat_parser.s262,var10.Deref(),var11.Deref(),var5.Deref(),var12.Deref(),var7.Deref(),var13.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_conj_9::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_pred_rest_9__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_arg_7 extends Code {

/*

verb_arg(np,_15220,_15222,_15224,_15226,_15228,_15230,_15246):-s_all(_15232,verb_case(_15234,np(_15220,_15236,_15234,_15238,compl,_15232,_15222,_15224,_15226,_15228,_15230,_15246))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_arg_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_arg_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s216))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = F(chat_parser.s373,var8,F(chat_parser.s216,var1.Deref(),var9,var8.Deref(),var10,chat_parser.s67,var7.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_s_all_1::exec_static ;}
}


class pred_advs_7 extends Code {

/*

advs([_15312|_15314],_15316,_15318,_15320,_15322,_15324,_15326,_15338):-is_adv(_15318,adverb(_15312,_15320,_15328,_15324,_15330,advs(_15314,_15316,_15318,_15328,_15322,_15330,_15326,_15338))).
advs(_15402,_15402,_15404,_15406,_15406,_15408,_15408,_15418):-call(_15418).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_advs_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_advs_7__1(PrologMachine mach){ mach.FillAlternative(pred_advs_7::exec_pred_advs_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = F(chat_parser.s15,var1.Deref(),var5.Deref(),var9,var7.Deref(),var10,F(chat_parser.s16,var2.Deref(),var3.Deref(),var4.Deref(),var9.Deref(),var6.Deref(),var10.Deref(),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_adv_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_advs_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_adj_phrase_6 extends Code {

/*

adj_phrase(_15444,_15446,_15448,_15450,_15452,_15454,_15464):-adj(_15456,_15444,_15448,_15450,_15452,_15454,empty(_15446,_15464)).
adj_phrase(_15510,_15512,_15514,_15516,_15518,_15520,_15528):-comp_phrase(_15510,_15512,_15514,_15516,_15518,_15520,_15528).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adj_phrase_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adj_phrase_6__1(PrologMachine mach){ mach.FillAlternative(pred_adj_phrase_6::exec_pred_adj_phrase_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = F(chat_parser.s104,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_adj_6::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_adj_phrase_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_comp_phrase_6::exec_static ;}
}


class pred_no_args_1 extends Code {

/*

no_args(trans,_15576):-call(_15576).
no_args(ditrans,_15598):-call(_15598).
no_args(intrans,_15620):-call(_15620).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_no_args_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_no_args_1__1(PrologMachine mach){ mach.FillAlternative(pred_no_args_1::exec_pred_no_args_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s362))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_no_args_1__2(PrologMachine mach){ mach.FillAlternative(pred_no_args_1::exec_pred_no_args_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s91))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_no_args_1__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s156))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_conj_9 extends Code {

/*

conj(conj(_15636,_15638),conj(_15636,_15644),_15650,_15652,conj(_15636,_15650,_15652),_15654,_15656,_15658,_15660,_15668):-conj(_15636,_15638,_15644,_15654,_15656,_15658,_15660,_15668).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_conj_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_conj_9__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s69,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s69,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s69,var1.Deref(),var4.Deref(),var5.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var9.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = null ;
return (Function<PrologMachine,Function>)pred_conj_7::exec_static ;}
}


class pred_noun_6 extends Code {

/*

noun(_15716,_15718,_15720,_15722,_15724,_15726,_15736):-terminal(_15728,_15720,_15722,_15724,_15726,noun_form(_15728,_15716,_15718,_15736)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_noun_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_noun_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = F(chat_parser.s213,var7.Deref(),var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_adj_6 extends Code {

/*

adj(_15788,adj(_15786),_15790,_15792,_15794,_15796,_15804):-terminal(_15786,_15790,_15792,_15794,_15796,adj(_15786,_15788,_15804)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adj_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adj_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s10,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = F(chat_parser.s10,var2.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_prep_5 extends Code {

/*

prep(prep(_15852),_15854,_15856,_15858,_15860,_15868):-terminal(_15852,_15854,_15856,_15858,_15860,prep(_15852,_15868)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_prep_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_prep_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s265,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s265,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_rel_adj_5 extends Code {

/*

rel_adj(adj(_15912),_15914,_15916,_15918,_15920,_15930):-terminal(_15922,_15914,_15916,_15918,_15920,rel_adj(_15922,_15912,_15930)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_adj_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_adj_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s10,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s287,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_sup_adj_5 extends Code {

/*

sup_adj(adj(_15976),_15978,_15980,_15982,_15984,_15994):-terminal(_15986,_15978,_15980,_15982,_15984,sup_adj(_15986,_15976,_15994)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sup_adj_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sup_adj_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s10,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s335,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_comp_adv_5 extends Code {

/*

comp_adv(less,_16038,_16040,_16042,_16044,_16052):- ~(less,_16038,_16040,_16042,_16044,_16052).
comp_adv(more,_16088,_16090,_16092,_16094,_16102):- ~(more,_16088,_16090,_16092,_16094,_16102).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_comp_adv_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_comp_adv_5__1(PrologMachine mach){ mach.FillAlternative(pred_comp_adv_5::exec_pred_comp_adv_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s172))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s172 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_comp_adv_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s187))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s187 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_sup_adv_5 extends Code {

/*

sup_adv(least,_16138,_16140,_16142,_16144,_16152):- ~(least,_16138,_16140,_16142,_16144,_16152).
sup_adv(most,_16188,_16190,_16192,_16194,_16202):- ~(most,_16188,_16190,_16192,_16194,_16202).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sup_adv_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sup_adv_5__1(PrologMachine mach){ mach.FillAlternative(pred_sup_adv_5::exec_pred_sup_adv_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s171))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s171 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_sup_adv_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s188))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s188 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_rel_pron_5 extends Code {

/*

rel_pron(_16238,_16240,_16242,_16244,_16246,_16256):-terminal(_16248,_16240,_16242,_16244,_16246,rel_pron(_16248,_16238,_16256)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_pron_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_pron_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s289,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_name_5 extends Code {

/*

name(_16300,_16302,_16304,_16306,_16308,_16320):-opt_the(_16302,_16310,_16306,_16312,terminal(_16300,_16310,_16304,_16312,_16308,name(_16300,_16320))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_name_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_name_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = F(chat_parser.s340,var1.Deref(),var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),F(chat_parser.s193,var1.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_opt_the_4::exec_static ;}
}


class pred_int_art_7 extends Code {

/*

int_art(_16376,plu,quant(same,wh(_16376)),_16384,_16386,_16388,_16390,_16402):- ~(how,_16384,_16392,_16388,_16394,~(many,_16392,_16386,_16394,_16390,_16402)).
int_art(_16456,_16458,_16460,_16462,_16464,_16466,_16468,_16478):-terminal(_16470,_16462,_16464,_16466,_16468,int_art(_16470,_16456,_16458,_16460,_16478)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_art_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_art_7__1(PrologMachine mach){ mach.FillAlternative(pred_int_art_7::exec_pred_int_art_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s273,chat_parser.s305,F(chat_parser.s386,var1.Deref()))))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s143 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var7 ;
local_aregs[5] = F(chat_parser.s404,chat_parser.s179,var6.Deref(),var3.Deref(),var7.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_int_art_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = F(chat_parser.s152,var8.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_int_pron_5 extends Code {

/*

int_pron(_16530,_16532,_16534,_16536,_16538,_16548):-terminal(_16540,_16532,_16534,_16536,_16538,int_pron(_16540,_16530,_16548)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_pron_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_pron_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s154,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_adverb_5 extends Code {

/*

adverb(adv(_16594),_16596,_16598,_16600,_16602,_16610):-terminal(_16594,_16596,_16598,_16600,_16602,adverb(_16594,_16610)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adverb_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adverb_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s13,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s15,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_poss_pron_6 extends Code {

/*

poss_pron(pronoun(_16654),_16658+_16660,_16662,_16664,_16666,_16668,_16678):-terminal(_16670,_16662,_16664,_16666,_16668,poss_pron(_16670,_16654,_16658,_16660,_16678)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poss_pron_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poss_pron_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s269,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = F(chat_parser.s258,var8.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_pers_pron_7 extends Code {

/*

pers_pron(pronoun(_16730),_16734+_16736,_16738,_16740,_16742,_16744,_16746,_16756):-terminal(_16748,_16740,_16742,_16744,_16746,pers_pron(_16748,_16730,_16734,_16736,_16738,_16756)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pers_pron_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pers_pron_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s269,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var9 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var6.Deref() ;
local_aregs[3] = var7.Deref() ;
local_aregs[4] = var8.Deref() ;
local_aregs[5] = F(chat_parser.s247,var9.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_quantifier_pron_6 extends Code {

/*

quantifier_pron(_16810,_16812,_16814,_16816,_16818,_16820,_16830):-terminal(_16822,_16814,_16816,_16818,_16820,quantifier_pron(_16822,_16810,_16812,_16830)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_quantifier_pron_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = F(chat_parser.s275,var7.Deref(),var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_context_pron_6 extends Code {

/*

context_pron(prep(in),place,_16882,_16884,_16886,_16888,_16896):- ~(where,_16882,_16884,_16886,_16888,_16896).
context_pron(prep(at),time,_16938,_16940,_16942,_16944,_16952):- ~(when,_16938,_16940,_16942,_16944,_16952).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_context_pron_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_context_pron_6__1(PrologMachine mach){ mach.FillAlternative(pred_context_pron_6::exec_pred_context_pron_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s265,chat_parser.s148)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s250))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s390 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_context_pron_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s265,chat_parser.s37)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s352))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s389 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_number_6 extends Code {

/*

number(nb(_16992),_16994,_16996,_16998,_17000,_17002,_17012):-terminal(_17004,_16996,_16998,_17000,_17002,number(_17004,_16992,_16994,_17012)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_number_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_number_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s194,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = F(chat_parser.s224,var7.Deref(),var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_terminator_5 extends Code {

/*

terminator(_17060,_17062,_17064,_17066,_17068,_17078):-terminal(_17070,_17062,_17064,_17066,_17068,terminator(_17070,_17060,_17078)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_terminator_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_terminator_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s341,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_opt_the_4 extends Code {

/*

opt_the(_17122,_17122,_17124,_17124,_17134):-call(_17134).
opt_the(_17154,_17156,_17158,_17160,_17168):- ~(the,_17154,_17156,_17158,_17160,_17168).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_opt_the_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_opt_the_4__1(PrologMachine mach){ mach.FillAlternative(pred_opt_the_4::exec_pred_opt_the_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_opt_the_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s344 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_5::exec_static ;}
}


class pred_conj_7 extends Code {

/*

conj(_17202,list,list,_17204,_17206,_17208,_17210,_17218):-terminal(',',_17204,_17206,_17208,_17210,_17218).
conj(_17258,list,end,_17260,_17262,_17264,_17266,_17274):-terminal(_17258,_17260,_17262,_17264,_17266,conj(_17258,_17274)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_conj_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_conj_7__1(PrologMachine mach){ mach.FillAlternative(pred_conj_7::exec_pred_conj_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s173))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s173))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.s4 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_conj_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s173))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s105))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s69,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = null ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_loc_pred_5 extends Code {

/*

loc_pred(_17320,_17322,_17324,_17326,_17328,_17338):-terminal(_17330,_17322,_17324,_17326,_17328,loc_pred(_17330,_17320,_17338)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_loc_pred_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_loc_pred_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s174,var6.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_~_5 extends Code {

/*

~(_17382,_17384,_17386,_17388,_17390,_17398):-terminal(_17382,_17384,_17386,_17388,_17390,~(_17382,_17398)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_~_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_~_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = F(chat_parser.s404,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminal_5::exec_static ;}
}


class pred_word_1 extends Code {

/*

word(_17440,_17448):- ~(_17440,_17448).
word(_17468,_17476):-conj(_17468,_17476).
word(_17496,_17504):-adverb(_17496,_17504).
word(_17524,_17534):-sup_adj(_17524,_17526,_17534).
word(_17556,_17566):-rel_adj(_17556,_17558,_17566).
word(_17588,_17598):-adj(_17588,_17590,_17598).
word(_17620,_17628):-name(_17620,_17628).
word(_17648,_17658):-terminator(_17648,_17650,_17658).
word(_17680,_17696):-pers_pron(_17680,_17682,_17684,_17686,_17688,_17696).
word(_17724,_17738):-poss_pron(_17724,_17726,_17728,_17730,_17738).
word(_17764,_17774):-rel_pron(_17764,_17766,_17774).
word(_17796,_17810):-verb_form(_17796,_17798,_17800,_17802,_17810).
word(_17836,_17848):-noun_form(_17836,_17838,_17840,_17848).
word(_17872,_17880):-prep(_17872,_17880).
word(_17900,_17912):-quantifier_pron(_17900,_17902,_17904,_17912).
word(_17936,_17948):-number(_17936,_17938,_17940,_17948).
word(_17972,_17986):-det(_17972,_17974,_17976,_17978,_17986).
word(_18012,_18026):-int_art(_18012,_18014,_18016,_18018,_18026).
word(_18052,_18062):-int_pron(_18052,_18054,_18062).
word(_18084,_18094):-loc_pred(_18084,_18086,_18094).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_word_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_word_1__1(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_~_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__2(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_conj_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__3(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_adverb_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__4(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sup_adj_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__5(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_rel_adj_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__6(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_adj_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__7(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_name_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__8(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_terminator_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__9(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = var4 ;
local_aregs[4] = var5 ;
local_aregs[5] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_pers_pron_5::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__10(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = var4 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_poss_pron_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__11(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_rel_pron_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__12(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = var4 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_verb_form_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__13(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_noun_form_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__14(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_prep_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__15(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_quantifier_pron_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__16(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_number_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__17(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = var4 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_det_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__18(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = var4 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_int_art_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__19(PrologMachine mach){ mach.FillAlternative(pred_word_1::exec_pred_word_1__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_int_pron_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_word_1__20(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_loc_pred_2::exec_static ;}
}


class pred_~_1 extends Code {

/*

~(how,_18124):-call(_18124).
~(whose,_18146):-call(_18146).
~(there,_18168):-call(_18168).
~(of,_18190):-call(_18190).
~(~,_18212):-call(_18212).
~(',',_18234):-call(_18234).
~(s,_18256):-call(_18256).
~(than,_18278):-call(_18278).
~(at,_18300):-call(_18300).
~(the,_18322):-call(_18322).
~(not,_18344):-call(_18344).
~(as,_18366):-call(_18366).
~(that,_18388):-call(_18388).
~(less,_18410):-call(_18410).
~(more,_18432):-call(_18432).
~(least,_18454):-call(_18454).
~(most,_18476):-call(_18476).
~(many,_18498):-call(_18498).
~(where,_18520):-call(_18520).
~(when,_18542):-call(_18542).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_~_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_~_1__1(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s143))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__2(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s394))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__3(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s347))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__4(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s230))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__5(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s404))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__6(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__7(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s303))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__8(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s342))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__9(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s37))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__10(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s344))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__11(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s210))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__12(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s35))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__13(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s343))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__14(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s172))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__15(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s187))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__16(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s171))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__17(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s188))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__18(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s179))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__19(PrologMachine mach){ mach.FillAlternative(pred_~_1::exec_pred_~_1__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s390))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_~_1__20(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s389))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_conj_1 extends Code {

/*

conj(and,_18564):-call(_18564).
conj(or,_18586):-call(_18586).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_conj_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_conj_1__1(PrologMachine mach){ mach.FillAlternative(pred_conj_1::exec_pred_conj_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s25))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_conj_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s238))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_int_pron_2 extends Code {

/*

int_pron(what,undef,_18608):-call(_18608).
int_pron(which,undef,_18632):-call(_18632).
int_pron(who,subj,_18656):-call(_18656).
int_pron(whom,compl,_18680):-call(_18680).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_pron_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_pron_2__1(PrologMachine mach){ mach.FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s388))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_int_pron_2__2(PrologMachine mach){ mach.FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s391))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_int_pron_2__3(PrologMachine mach){ mach.FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s392))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_int_pron_2__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s393))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_int_art_4 extends Code {

/*

int_art(what,_18698,_18700,int_det(_18698),_18710):-call(_18710).
int_art(which,_18732,_18734,int_det(_18732),_18744):-call(_18744).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_int_art_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_int_art_4__1(PrologMachine mach){ mach.FillAlternative(pred_int_art_4::exec_pred_int_art_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s388))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s153,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_int_art_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s391))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s153,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_det_4 extends Code {

/*

det(the,_18766,the(_18766),def,_18776):-call(_18776).
det(a,sin,a,indef,_18804):-call(_18804).
det(an,sin,a,indef,_18832):-call(_18832).
det(every,sin,every,indef,_18860):-call(_18860).
det(some,_18880,some,indef,_18890):-call(_18890).
det(any,_18910,any,indef,_18920):-call(_18920).
det(all,plu,all,indef,_18948):-call(_18948).
det(each,sin,each,indef,_18976):-call(_18976).
det(no,_18996,no,indef,_19006):-call(_19006).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_det_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_det_4__1(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s344))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s344,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s83))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__2(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s8))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s8))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__3(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s23))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s8))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__4(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s108))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s108))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__5(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s320))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s320))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__6(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__7(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s20))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s20))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__8(PrologMachine mach){ mach.FillAlternative(pred_det_4::exec_pred_det_4__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s100))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s100))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_det_4__9(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s203))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s203))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s150))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_number_3 extends Code {

/*

number(_19026,_19028,_19030,_19038):-tr_number(_19026,_19028,ag_number(_19028,_19030,_19038)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_number_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_number_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(chat_parser.s19,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_tr_number_2::exec_static ;}
}


class pred_tr_number_2 extends Code {

/*

tr_number(nb(_19074),_19074,_19084):-call(_19084).
tr_number(one,1,_19108):-call(_19108).
tr_number(two,2,_19132):-call(_19132).
tr_number(three,3,_19156):-call(_19156).
tr_number(four,4,_19180):-call(_19180).
tr_number(five,5,_19204):-call(_19204).
tr_number(six,6,_19228):-call(_19228).
tr_number(seven,7,_19252):-call(_19252).
tr_number(eight,8,_19276):-call(_19276).
tr_number(nine,9,_19300):-call(_19300).
tr_number(ten,10,_19324):-call(_19324).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_tr_number_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_tr_number_2__1(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s194,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__2(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s235))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__3(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s363))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__4(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s350))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__5(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__6(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s120))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__7(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s315))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__8(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s312))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__9(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s103))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__10(PrologMachine mach){ mach.FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s202))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_tr_number_2__11(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s339))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.posint10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_ag_number_2 extends Code {

/*

ag_number(1,sin,_19348):-call(_19348).
ag_number(_19364,plu,_19372):-smallerthan(1,_19364,_19372).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ag_number_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ag_number_2__1(PrologMachine mach){ mach.FillAlternative(pred_ag_number_2::exec_pred_ag_number_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_ag_number_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = chat_parser.posint1 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
}


class pred_quantifier_pron_3 extends Code {

/*

quantifier_pron(everybody,every,person,_19404):-call(_19404).
quantifier_pron(everyone,every,person,_19430):-call(_19430).
quantifier_pron(everything,every,thing,_19456):-call(_19456).
quantifier_pron(somebody,some,person,_19482):-call(_19482).
quantifier_pron(someone,some,person,_19508):-call(_19508).
quantifier_pron(something,some,thing,_19534):-call(_19534).
quantifier_pron(anybody,any,person,_19560):-call(_19560).
quantifier_pron(anyone,any,person,_19586):-call(_19586).
quantifier_pron(anything,any,thing,_19612):-call(_19612).
quantifier_pron(nobody,no,person,_19638):-call(_19638).
quantifier_pron(nothing,no,thing,_19664):-call(_19664).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_quantifier_pron_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__1(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s109))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s108))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__2(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s108))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__3(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s111))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s108))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s348))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__4(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s321))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s320))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__5(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s322))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s320))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__6(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s323))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s320))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s348))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__7(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s28))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__8(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s29))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__9(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s30))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s348))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__10(PrologMachine mach){ mach.FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s205))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s203))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quantifier_pron_3__11(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s211))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s203))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s348))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_prep_1 extends Code {

/*

prep(as,_19690):-call(_19690).
prep(at,_19712):-call(_19712).
prep(of,_19734):-call(_19734).
prep(to,_19756):-call(_19756).
prep(by,_19778):-call(_19778).
prep(with,_19800):-call(_19800).
prep(in,_19822):-call(_19822).
prep(on,_19844):-call(_19844).
prep(from,_19866):-call(_19866).
prep(into,_19888):-call(_19888).
prep(through,_19910):-call(_19910).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_prep_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_prep_1__1(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s35))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__2(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s37))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__3(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s230))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__4(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s354))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__5(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s54))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__6(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s396))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__7(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s148))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__8(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s234))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__9(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s126))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__10(PrologMachine mach){ mach.FillAlternative(pred_prep_1::exec_pred_prep_1__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s155))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prep_1__11(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s351))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_noun_form_3 extends Code {

/*

noun_form(_19924,_19926,plu,_19934):-noun_plu(_19924,_19926,_19934).
noun_form(_19960,_19960,sin,_19968):-noun_sin(_19960,_19968).
noun_form(proportion,proportion,_19992,_20002):-call(_20002).
noun_form(percentage,percentage,_20020,_20030):-call(_20030).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_noun_form_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_noun_form_3__1(PrologMachine mach){ mach.FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_noun_plu_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_noun_form_3__2(PrologMachine mach){ mach.FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_noun_sin_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_noun_form_3__3(PrologMachine mach){ mach.FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s271))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s271))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_form_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s245))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s245))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_root_form_1 extends Code {

/*

root_form(1+sin,_20062):-call(_20062).
root_form(2+_20080,_20090):-call(_20090).
root_form(1+plu,_20118):-call(_20118).
root_form(3+plu,_20146):-call(_20146).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_root_form_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_root_form_1__1(PrologMachine mach){ mach.FillAlternative(pred_root_form_1::exec_pred_root_form_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.posint1,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_root_form_1__2(PrologMachine mach){ mach.FillAlternative(pred_root_form_1::exec_pred_root_form_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.posint2,var1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_root_form_1__3(PrologMachine mach){ mach.FillAlternative(pred_root_form_1::exec_pred_root_form_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.posint1,chat_parser.s252)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_root_form_1__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s252)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_root_1 extends Code {

/*

verb_root(be,_20168):-call(_20168).
verb_root(have,_20190):-call(_20190).
verb_root(do,_20212):-call(_20212).
verb_root(border,_20234):-call(_20234).
verb_root(contain,_20256):-call(_20256).
verb_root(drain,_20278):-call(_20278).
verb_root(exceed,_20300):-call(_20300).
verb_root(flow,_20322):-call(_20322).
verb_root(rise,_20344):-call(_20344).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_root_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_root_1__1(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__2(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__3(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__4(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__5(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__6(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__7(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__8(PrologMachine mach){ mach.FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_root_1__9(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_regular_pres_1 extends Code {

/*

regular_pres(have,_20366):-call(_20366).
regular_pres(do,_20388):-call(_20388).
regular_pres(rise,_20410):-call(_20410).
regular_pres(border,_20432):-call(_20432).
regular_pres(contain,_20454):-call(_20454).
regular_pres(drain,_20476):-call(_20476).
regular_pres(exceed,_20498):-call(_20498).
regular_pres(flow,_20520):-call(_20520).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_regular_pres_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__1(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__2(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__3(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__4(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__5(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__6(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__7(PrologMachine mach){ mach.FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_pres_1__8(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_regular_past_2 extends Code {

/*

regular_past(had,have,_20542):-call(_20542).
regular_past(bordered,border,_20566):-call(_20566).
regular_past(contained,contain,_20590):-call(_20590).
regular_past(drained,drain,_20614):-call(_20614).
regular_past(exceeded,exceed,_20638):-call(_20638).
regular_past(flowed,flow,_20662):-call(_20662).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_regular_past_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_regular_past_2__1(PrologMachine mach){ mach.FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s135))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_past_2__2(PrologMachine mach){ mach.FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s51))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_past_2__3(PrologMachine mach){ mach.FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s71))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_past_2__4(PrologMachine mach){ mach.FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s97))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_past_2__5(PrologMachine mach){ mach.FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s113))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_regular_past_2__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s122))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_rel_pron_2 extends Code {

/*

rel_pron(who,subj,_20686):-call(_20686).
rel_pron(whom,compl,_20710):-call(_20710).
rel_pron(which,undef,_20734):-call(_20734).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_pron_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_pron_2__1(PrologMachine mach){ mach.FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s392))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_pron_2__2(PrologMachine mach){ mach.FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s393))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s67))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_pron_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s391))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s364))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_poss_pron_4 extends Code {

/*

poss_pron(my,_20750,1,sin,_20760):-call(_20760).
poss_pron(your,_20780,2,_20782,_20792):-call(_20792).
poss_pron(his,masc,3,sin,_20820):-call(_20820).
poss_pron(her,fem,3,sin,_20848):-call(_20848).
poss_pron(its,neut,3,sin,_20876):-call(_20876).
poss_pron(our,_20896,1,plu,_20906):-call(_20906).
poss_pron(their,_20926,3,plu,_20936):-call(_20936).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poss_pron_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__1(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s189))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__2(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s403))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__3(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s142))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s180))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__4(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s140))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s118))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__5(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s163))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s197))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__6(PrologMachine mach){ mach.FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s239))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_poss_pron_4__7(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s345))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_pers_pron_5 extends Code {

/*

pers_pron(i,_20956,1,sin,subj,_20966):-call(_20966).
pers_pron(you,_20988,2,_20990,_20992,_21002):-call(_21002).
pers_pron(he,masc,3,sin,subj,_21032):-call(_21032).
pers_pron(she,fem,3,sin,subj,_21062):-call(_21062).
pers_pron(it,neut,3,sin,_21084,_21094):-call(_21094).
pers_pron(we,_21116,1,plu,subj,_21126):-call(_21126).
pers_pron(them,_21148,3,plu,subj,_21158):-call(_21158).
pers_pron(me,_21184,1,sin,compl(_21182),_21194):-call(_21194).
pers_pron(him,masc,3,sin,compl(_21218),_21228):-call(_21228).
pers_pron(her,fem,3,sin,compl(_21252),_21262):-call(_21262).
pers_pron(us,_21288,1,plu,compl(_21286),_21298):-call(_21298).
pers_pron(them,_21324,3,plu,compl(_21322),_21334):-call(_21334).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pers_pron_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__1(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s144))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__2(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s402))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__3(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s139))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s180))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__4(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s313))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s118))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__5(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s162))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s197))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__6(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s382))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__7(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s346))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(chat_parser.s329))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__8(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s182))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s67,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__9(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s141))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s180))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s67,var1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__10(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s140))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s118))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s314))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s67,var1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__11(PrologMachine mach){ mach.FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s366))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s67,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pers_pron_5__12(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s346))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(chat_parser.s252))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(chat_parser.s67,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_terminator_2 extends Code {

/*

terminator('.',_21356,_21366):-call(_21366).
terminator(?,?,_21390):-call(_21390).
terminator(!,!,_21414):-call(_21414).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_terminator_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_terminator_2__1(PrologMachine mach){ mach.FillAlternative(pred_terminator_2::exec_pred_terminator_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s5))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_terminator_2__2(PrologMachine mach){ mach.FillAlternative(pred_terminator_2::exec_pred_terminator_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s7))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_terminator_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_name_1 extends Code {

/*

name(_21430,_21440):-call(_21440).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_name_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_name_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_loc_pred_2 extends Code {

/*

loc_pred(east,prep(eastof),_21466):-call(_21466).
loc_pred(west,prep(westof),_21494):-call(_21494).
loc_pred(north,prep(northof),_21522):-call(_21522).
loc_pred(south,prep(southof),_21550):-call(_21550).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_loc_pred_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_loc_pred_2__1(PrologMachine mach){ mach.FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s101))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s265,chat_parser.s102)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_loc_pred_2__2(PrologMachine mach){ mach.FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s384))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s265,chat_parser.s385)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_loc_pred_2__3(PrologMachine mach){ mach.FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s208))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s265,chat_parser.s209)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_loc_pred_2__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s324))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s265,chat_parser.s325)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_adj_2 extends Code {

/*

adj(minimum,restr,_21574):-call(_21574).
adj(maximum,restr,_21598):-call(_21598).
adj(average,restr,_21622):-call(_21622).
adj(total,restr,_21646):-call(_21646).
adj(african,restr,_21670):-call(_21670).
adj(american,restr,_21694):-call(_21694).
adj(asian,restr,_21718):-call(_21718).
adj(european,restr,_21742):-call(_21742).
adj(great,quant,_21766):-call(_21766).
adj(big,quant,_21790):-call(_21790).
adj(small,quant,_21814):-call(_21814).
adj(large,quant,_21838):-call(_21838).
adj(old,quant,_21862):-call(_21862).
adj(new,quant,_21886):-call(_21886).
adj(populous,quant,_21910):-call(_21910).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adj_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adj_2__1(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s185))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__2(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s181))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__3(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s40))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__4(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s358))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__5(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__6(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s22))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__7(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s36))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__8(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s107))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s293))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__9(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s133))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__10(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s46))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__11(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s316))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__12(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s166))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__13(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s231))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__14(PrologMachine mach){ mach.FillAlternative(pred_adj_2::exec_pred_adj_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s198))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adj_2__15(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s255))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s273))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_rel_adj_2 extends Code {

/*

rel_adj(greater,great,_21934):-call(_21934).
rel_adj(less,small,_21958):-call(_21958).
rel_adj(bigger,big,_21982):-call(_21982).
rel_adj(smaller,small,_22006):-call(_22006).
rel_adj(larger,large,_22030):-call(_22030).
rel_adj(older,old,_22054):-call(_22054).
rel_adj(newer,new,_22078):-call(_22078).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rel_adj_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__1(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s134))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s133))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__2(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s172))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s316))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__3(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s47))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s46))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__4(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s317))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s316))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__5(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s167))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s166))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__6(PrologMachine mach){ mach.FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s232))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s231))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_rel_adj_2__7(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s199))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s198))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_sup_adj_2 extends Code {

/*

sup_adj(biggest,big,_22102):-call(_22102).
sup_adj(smallest,small,_22126):-call(_22126).
sup_adj(largest,large,_22150):-call(_22150).
sup_adj(oldest,old,_22174):-call(_22174).
sup_adj(newest,new,_22198):-call(_22198).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sup_adj_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sup_adj_2__1(PrologMachine mach){ mach.FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s46))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sup_adj_2__2(PrologMachine mach){ mach.FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s319))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s316))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sup_adj_2__3(PrologMachine mach){ mach.FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s168))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s166))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sup_adj_2__4(PrologMachine mach){ mach.FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s233))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s231))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sup_adj_2__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s198))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_noun_sin_1 extends Code {

/*

noun_sin(average,_22222):-call(_22222).
noun_sin(total,_22244):-call(_22244).
noun_sin(sum,_22266):-call(_22266).
noun_sin(degree,_22288):-call(_22288).
noun_sin(sqmile,_22310):-call(_22310).
noun_sin(ksqmile,_22332):-call(_22332).
noun_sin(thousand,_22354):-call(_22354).
noun_sin(million,_22376):-call(_22376).
noun_sin(time,_22398):-call(_22398).
noun_sin(place,_22420):-call(_22420).
noun_sin(area,_22442):-call(_22442).
noun_sin(capital,_22464):-call(_22464).
noun_sin(city,_22486):-call(_22486).
noun_sin(continent,_22508):-call(_22508).
noun_sin(country,_22530):-call(_22530).
noun_sin(latitude,_22552):-call(_22552).
noun_sin(longitude,_22574):-call(_22574).
noun_sin(ocean,_22596):-call(_22596).
noun_sin(person,_22618):-call(_22618).
noun_sin(population,_22640):-call(_22640).
noun_sin(region,_22662):-call(_22662).
noun_sin(river,_22684):-call(_22684).
noun_sin(sea,_22706):-call(_22706).
noun_sin(seamass,_22728):-call(_22728).
noun_sin(number,_22750):-call(_22750).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_noun_sin_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__1(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s40))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__2(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s358))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__3(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s332))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__4(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s84))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__5(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s326))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__6(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s164))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__7(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s349))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__8(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s183))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__9(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s352))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__10(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s250))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__11(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s32))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__12(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s56))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__13(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s61))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__14(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s75))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__15(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s78))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__16(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s169))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__17(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s176))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__18(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s228))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__19(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__20(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s253))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__21(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s282))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__22(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s297))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__23(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s307))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__24(PrologMachine mach){ mach.FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s308))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_sin_1__25(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s224))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_noun_plu_2 extends Code {

/*

noun_plu(averages,average,_22772):-call(_22772).
noun_plu(totals,total,_22796):-call(_22796).
noun_plu(sums,sum,_22820):-call(_22820).
noun_plu(degrees,degree,_22844):-call(_22844).
noun_plu(sqmiles,sqmile,_22868):-call(_22868).
noun_plu(ksqmiles,ksqmile,_22892):-call(_22892).
noun_plu(million,million,_22916):-call(_22916).
noun_plu(thousand,thousand,_22940):-call(_22940).
noun_plu(times,time,_22964):-call(_22964).
noun_plu(places,place,_22988):-call(_22988).
noun_plu(areas,area,_23012):-call(_23012).
noun_plu(capitals,capital,_23036):-call(_23036).
noun_plu(cities,city,_23060):-call(_23060).
noun_plu(continents,continent,_23084):-call(_23084).
noun_plu(countries,country,_23108):-call(_23108).
noun_plu(latitudes,latitude,_23132):-call(_23132).
noun_plu(longitudes,longitude,_23156):-call(_23156).
noun_plu(oceans,ocean,_23180):-call(_23180).
noun_plu(persons,person,_23204):-call(_23204).
noun_plu(people,person,_23228):-call(_23228).
noun_plu(populations,population,_23252):-call(_23252).
noun_plu(regions,region,_23276):-call(_23276).
noun_plu(rivers,river,_23300):-call(_23300).
noun_plu(seas,sea,_23324):-call(_23324).
noun_plu(seamasses,seamass,_23348):-call(_23348).
noun_plu(numbers,number,_23372):-call(_23372).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_noun_plu_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__1(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s41))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s40))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__2(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s359))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s358))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__3(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s333))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s332))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__4(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s85))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s84))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__5(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s327))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s326))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__6(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s165))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s164))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__7(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s183))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s183))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__8(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s349))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s349))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__9(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s353))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s352))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__10(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s251))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s250))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__11(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s33))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s32))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__12(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s57))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s56))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__13(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s60))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s61))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__14(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s76))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s75))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__15(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s77))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s78))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__16(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s170))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s169))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__17(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s177))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s176))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__18(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s229))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s228))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__19(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s249))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__20(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s244))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s248))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__21(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s254))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s253))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__22(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s283))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s282))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__23(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s298))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s297))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__24(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s310))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s307))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__25(PrologMachine mach){ mach.FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s309))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s308))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_noun_plu_2__26(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s225))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s224))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_form_4 extends Code {

/*

verb_form(_23388,_23388,inf,_23390,_23398):-verb_root(_23388,_23398).
verb_form(_23430,_23430,pres+fin,_23432,_23440):-regular_pres(_23430,root_form(_23432,verb_root(_23430,_23440))).
verb_form(_23484,_23486,past+_23482,_23488,_23496):-regular_past(_23484,_23486,_23496).
verb_form(am,be,pres+fin,1+sin,_23544):-call(_23544).
verb_form(are,be,pres+fin,2+sin,_23584):-call(_23584).
verb_form(is,be,pres+fin,3+sin,_23624):-call(_23624).
verb_form(are,be,pres+fin,_23652+plu,_23664):-call(_23664).
verb_form(was,be,past+fin,1+sin,_23704):-call(_23704).
verb_form(were,be,past+fin,2+sin,_23744):-call(_23744).
verb_form(was,be,past+fin,3+sin,_23784):-call(_23784).
verb_form(were,be,past+fin,_23812+plu,_23824):-call(_23824).
verb_form(been,be,past+part,_23850,_23860):-call(_23860).
verb_form(being,be,pres+part,_23886,_23896):-call(_23896).
verb_form(has,have,pres+fin,3+sin,_23936):-call(_23936).
verb_form(having,have,pres+part,_23962,_23972):-call(_23972).
verb_form(does,do,pres+fin,3+sin,_24012):-call(_24012).
verb_form(did,do,past+fin,_24038,_24048):-call(_24048).
verb_form(doing,do,pres+part,_24074,_24084):-call(_24084).
verb_form(done,do,past+part,_24110,_24120):-call(_24120).
verb_form(flows,flow,pres+fin,3+sin,_24160):-call(_24160).
verb_form(flowing,flow,pres+part,_24186,_24196):-call(_24196).
verb_form(rises,rise,pres+fin,3+sin,_24236):-call(_24236).
verb_form(rose,rise,past+fin,_24262,_24272):-call(_24272).
verb_form(risen,rise,past+part,_24298,_24308):-call(_24308).
verb_form(borders,border,pres+fin,3+sin,_24348):-call(_24348).
verb_form(bordering,border,pres+part,_24374,_24384):-call(_24384).
verb_form(contains,contain,pres+fin,3+sin,_24424):-call(_24424).
verb_form(containing,contain,pres+part,_24450,_24460):-call(_24460).
verb_form(drains,drain,pres+fin,3+sin,_24500):-call(_24500).
verb_form(draining,drain,pres+part,_24526,_24536):-call(_24536).
verb_form(exceeds,exceed,pres+fin,3+sin,_24576):-call(_24576).
verb_form(exceeding,exceed,pres+part,_24602,_24612):-call(_24612).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_form_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_form_4__1(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(chat_parser.s151))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_verb_root_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__2(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(chat_parser.s300,var2.Deref(),F(chat_parser.s377,var1.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_regular_pres_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__3(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_regular_past_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__4(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s21))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint1,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__5(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s31))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint2,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__6(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s157))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__7(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s31))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,var1,chat_parser.s252)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__8(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s381))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint1,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__9(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s383))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint2,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__10(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s381))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__11(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s383))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,var1,chat_parser.s252)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__12(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s44))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__13(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s45))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__14(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s136))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__15(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s138))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__16(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s93))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__17(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s89))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__18(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s94))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__19(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s95))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__20(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s124))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__21(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s123))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__22(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s296))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__23(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s301))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__24(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s295))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s243,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__25(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s53))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__26(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s52))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__27(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s73))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__28(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__29(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__30(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s98))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__31(PrologMachine mach){ mach.FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s115))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s119)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(chat_parser.s3,chat_parser.posint3,chat_parser.s314)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_form_4__32(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(chat_parser.s114))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(chat_parser.s3,chat_parser.s267,chat_parser.s240)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_verb_type_2 extends Code {

/*

verb_type(have,aux+have,_24646):-call(_24646).
verb_type(be,aux+be,_24676):-call(_24676).
verb_type(do,aux+ditrans,_24706):-call(_24706).
verb_type(rise,main+intrans,_24736):-call(_24736).
verb_type(border,main+trans,_24766):-call(_24766).
verb_type(contain,main+trans,_24796):-call(_24796).
verb_type(drain,main+intrans,_24826):-call(_24826).
verb_type(exceed,main+trans,_24856):-call(_24856).
verb_type(flow,main+intrans,_24886):-call(_24886).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_verb_type_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_verb_type_2__1(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s137))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s39,chat_parser.s137)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__2(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s39,chat_parser.s43)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__3(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s92))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s39,chat_parser.s91)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__4(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s294))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s156)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__5(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s50))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s362)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__6(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s70))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s362)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__7(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s96))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s156)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__8(PrologMachine mach){ mach.FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s112))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s362)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_verb_type_2__9(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s121))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(chat_parser.s3,chat_parser.s178,chat_parser.s156)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_adverb_1 extends Code {

/*

adverb(yesterday,_24910):-call(_24910).
adverb(tomorrow,_24932):-call(_24932).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_adverb_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_adverb_1__1(PrologMachine mach){ mach.FillAlternative(pred_adverb_1::exec_pred_adverb_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s400))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_adverb_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(chat_parser.s355))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


