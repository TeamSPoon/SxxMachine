using namespace std;

#include "chat_parser.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  chat_parser::s_cut = Data::Intern("cut");
Const* const  chat_parser::s1 = Data::Intern("!");
Const* const  chat_parser::s2 = Data::Intern("#");
Const* const  chat_parser::s3 = Data::Intern("+");
Const* const  chat_parser::s4 = Data::Intern(",");
Const* const  chat_parser::s5 = Data::Intern(".");
Const* const  chat_parser::s6 = Data::Intern(":-");
Const* const  chat_parser::s7 = Data::Intern("?");
Const* const  chat_parser::s_a = Data::Intern("a");
Const* const  chat_parser::s_active = Data::Intern("active");
Const* const  chat_parser::s_adj = Data::Intern("adj");
Const* const  chat_parser::s_adj_phrase = Data::Intern("adj_phrase");
Const* const  chat_parser::s_adjs = Data::Intern("adjs");
Const* const  chat_parser::s_adv = Data::Intern("adv");
Const* const  chat_parser::s_adv_phrase = Data::Intern("adv_phrase");
Const* const  chat_parser::s_adverb = Data::Intern("adverb");
Const* const  chat_parser::s_advs = Data::Intern("advs");
Const* const  chat_parser::s_afghanistan = Data::Intern("afghanistan");
Const* const  chat_parser::s_african = Data::Intern("african");
Const* const  chat_parser::s_ag_number = Data::Intern("ag_number");
Const* const  chat_parser::s_all = Data::Intern("all");
Const* const  chat_parser::s_am = Data::Intern("am");
Const* const  chat_parser::s_american = Data::Intern("american");
Const* const  chat_parser::s_an = Data::Intern("an");
Const* const  chat_parser::s_an_s = Data::Intern("an_s");
Const* const  chat_parser::s_and = Data::Intern("and");
Const* const  chat_parser::s_anot = Data::Intern("anot");
Const* const  chat_parser::s_any = Data::Intern("any");
Const* const  chat_parser::s_anybody = Data::Intern("anybody");
Const* const  chat_parser::s_anyone = Data::Intern("anyone");
Const* const  chat_parser::s_anything = Data::Intern("anything");
Const* const  chat_parser::s_are = Data::Intern("are");
Const* const  chat_parser::s_area = Data::Intern("area");
Const* const  chat_parser::s_areas = Data::Intern("areas");
Const* const  chat_parser::s_arg = Data::Intern("arg");
Const* const  chat_parser::s_as = Data::Intern("as");
Const* const  chat_parser::s_asian = Data::Intern("asian");
Const* const  chat_parser::s_at = Data::Intern("at");
Const* const  chat_parser::s_australasia = Data::Intern("australasia");
Const* const  chat_parser::s_aux = Data::Intern("aux");
Const* const  chat_parser::s_average = Data::Intern("average");
Const* const  chat_parser::s_averages = Data::Intern("averages");
Const* const  chat_parser::s_baltic = Data::Intern("baltic");
Const* const  chat_parser::s_be = Data::Intern("be");
Const* const  chat_parser::s_been = Data::Intern("been");
Const* const  chat_parser::s_being = Data::Intern("being");
Const* const  chat_parser::s_big = Data::Intern("big");
Const* const  chat_parser::s_bigger = Data::Intern("bigger");
Const* const  chat_parser::s_biggest = Data::Intern("biggest");
Const* const  chat_parser::s_black_sea = Data::Intern("black_sea");
Const* const  chat_parser::s_border = Data::Intern("border");
Const* const  chat_parser::s_bordered = Data::Intern("bordered");
Const* const  chat_parser::s_bordering = Data::Intern("bordering");
Const* const  chat_parser::s_borders = Data::Intern("borders");
Const* const  chat_parser::s_by = Data::Intern("by");
Const* const  chat_parser::s_call = Data::Intern("call");
Const* const  chat_parser::s_capital = Data::Intern("capital");
Const* const  chat_parser::s_capitals = Data::Intern("capitals");
Const* const  chat_parser::s_chat_parser = Data::Intern("chat_parser");
Const* const  chat_parser::s_china = Data::Intern("china");
Const* const  chat_parser::s_cities = Data::Intern("cities");
Const* const  chat_parser::s_city = Data::Intern("city");
Const* const  chat_parser::s_close = Data::Intern("close");
Const* const  chat_parser::s_common = Data::Intern("common");
Const* const  chat_parser::s_comp = Data::Intern("comp");
Const* const  chat_parser::s_comp_adv = Data::Intern("comp_adv");
Const* const  chat_parser::s_comp_phrase = Data::Intern("comp_phrase");
Const* const  chat_parser::s_compl = Data::Intern("compl");
Const* const  chat_parser::s_compl_case = Data::Intern("compl_case");
Const* const  chat_parser::s_conj = Data::Intern("conj");
Const* const  chat_parser::s_contain = Data::Intern("contain");
Const* const  chat_parser::s_contained = Data::Intern("contained");
Const* const  chat_parser::s_containing = Data::Intern("containing");
Const* const  chat_parser::s_contains = Data::Intern("contains");
Const* const  chat_parser::s_context_pron = Data::Intern("context_pron");
Const* const  chat_parser::s_continent = Data::Intern("continent");
Const* const  chat_parser::s_continents = Data::Intern("continents");
Const* const  chat_parser::s_countries = Data::Intern("countries");
Const* const  chat_parser::s_country = Data::Intern("country");
Const* const  chat_parser::s_danube = Data::Intern("danube");
Const* const  chat_parser::s_decl = Data::Intern("decl");
Const* const  chat_parser::s_declarative = Data::Intern("declarative");
Const* const  chat_parser::s_def = Data::Intern("def");
Const* const  chat_parser::s_degree = Data::Intern("degree");
Const* const  chat_parser::s_degrees = Data::Intern("degrees");
Const* const  chat_parser::s_det = Data::Intern("det");
Const* const  chat_parser::s_determinate_say = Data::Intern("determinate_say");
Const* const  chat_parser::s_determiner = Data::Intern("determiner");
Const* const  chat_parser::s_did = Data::Intern("did");
Const* const  chat_parser::s_dir = Data::Intern("dir");
Const* const  chat_parser::s_ditrans = Data::Intern("ditrans");
Const* const  chat_parser::s_do = Data::Intern("do");
Const* const  chat_parser::s_does = Data::Intern("does");
Const* const  chat_parser::s_doing = Data::Intern("doing");
Const* const  chat_parser::s_done = Data::Intern("done");
Const* const  chat_parser::s_drain = Data::Intern("drain");
Const* const  chat_parser::s_drained = Data::Intern("drained");
Const* const  chat_parser::s_draining = Data::Intern("draining");
Const* const  chat_parser::s_drains = Data::Intern("drains");
Const* const  chat_parser::s_each = Data::Intern("each");
Const* const  chat_parser::s_east = Data::Intern("east");
Const* const  chat_parser::s_eastof = Data::Intern("eastof");
Const* const  chat_parser::s_eight = Data::Intern("eight");
Const* const  chat_parser::s_empty = Data::Intern("empty");
Const* const  chat_parser::s_end = Data::Intern("end");
Const* const  chat_parser::s_equator = Data::Intern("equator");
Const* const  chat_parser::s_european = Data::Intern("european");
Const* const  chat_parser::s_every = Data::Intern("every");
Const* const  chat_parser::s_everybody = Data::Intern("everybody");
Const* const  chat_parser::s_everyone = Data::Intern("everyone");
Const* const  chat_parser::s_everything = Data::Intern("everything");
Const* const  chat_parser::s_exceed = Data::Intern("exceed");
Const* const  chat_parser::s_exceeded = Data::Intern("exceeded");
Const* const  chat_parser::s_exceeding = Data::Intern("exceeding");
Const* const  chat_parser::s_exceeds = Data::Intern("exceeds");
Const* const  chat_parser::s116 = Data::Intern("execution time is ");
Const* const  chat_parser::s_fail = Data::Intern("fail");
Const* const  chat_parser::s_fem = Data::Intern("fem");
Const* const  chat_parser::s_fin = Data::Intern("fin");
Const* const  chat_parser::s_five = Data::Intern("five");
Const* const  chat_parser::s_flow = Data::Intern("flow");
Const* const  chat_parser::s_flowed = Data::Intern("flowed");
Const* const  chat_parser::s_flowing = Data::Intern("flowing");
Const* const  chat_parser::s_flows = Data::Intern("flows");
Const* const  chat_parser::s_four = Data::Intern("four");
Const* const  chat_parser::s_from = Data::Intern("from");
Const* const  chat_parser::s_fronted_verb = Data::Intern("fronted_verb");
Const* const  chat_parser::s_gap = Data::Intern("gap");
Const* const  chat_parser::s_gen_case = Data::Intern("gen_case");
Const* const  chat_parser::s_gen_marker = Data::Intern("gen_marker");
Const* const  chat_parser::s_generic = Data::Intern("generic");
Const* const  chat_parser::s_go = Data::Intern("go");
Const* const  chat_parser::s_great = Data::Intern("great");
Const* const  chat_parser::s_greater = Data::Intern("greater");
Const* const  chat_parser::s_had = Data::Intern("had");
Const* const  chat_parser::s_has = Data::Intern("has");
Const* const  chat_parser::s_have = Data::Intern("have");
Const* const  chat_parser::s_having = Data::Intern("having");
Const* const  chat_parser::s_he = Data::Intern("he");
Const* const  chat_parser::s_her = Data::Intern("her");
Const* const  chat_parser::s_him = Data::Intern("him");
Const* const  chat_parser::s_his = Data::Intern("his");
Const* const  chat_parser::s_how = Data::Intern("how");
Const* const  chat_parser::s_i = Data::Intern("i");
Const* const  chat_parser::s_imp = Data::Intern("imp");
Const* const  chat_parser::s_imperative = Data::Intern("imperative");
Const* const  chat_parser::s_imperative_verb = Data::Intern("imperative_verb");
Const* const  chat_parser::s_in = Data::Intern("in");
Const* const  chat_parser::s_ind = Data::Intern("ind");
Const* const  chat_parser::s_indef = Data::Intern("indef");
Const* const  chat_parser::s_inf = Data::Intern("inf");
Const* const  chat_parser::s_int_art = Data::Intern("int_art");
Const* const  chat_parser::s_int_det = Data::Intern("int_det");
Const* const  chat_parser::s_int_pron = Data::Intern("int_pron");
Const* const  chat_parser::s_into = Data::Intern("into");
Const* const  chat_parser::s_intrans = Data::Intern("intrans");
Const* const  chat_parser::s_is = Data::Intern("is");
Const* const  chat_parser::s_is_adv = Data::Intern("is_adv");
Const* const  chat_parser::s_is_pp = Data::Intern("is_pp");
Const* const  chat_parser::s_is_pred = Data::Intern("is_pred");
Const* const  chat_parser::s_is_trace = Data::Intern("is_trace");
Const* const  chat_parser::s_it = Data::Intern("it");
Const* const  chat_parser::s_its = Data::Intern("its");
Const* const  chat_parser::s_ksqmile = Data::Intern("ksqmile");
Const* const  chat_parser::s_ksqmiles = Data::Intern("ksqmiles");
Const* const  chat_parser::s_large = Data::Intern("large");
Const* const  chat_parser::s_larger = Data::Intern("larger");
Const* const  chat_parser::s_largest = Data::Intern("largest");
Const* const  chat_parser::s_latitude = Data::Intern("latitude");
Const* const  chat_parser::s_latitudes = Data::Intern("latitudes");
Const* const  chat_parser::s_least = Data::Intern("least");
Const* const  chat_parser::s_less = Data::Intern("less");
Const* const  chat_parser::s_list = Data::Intern("list");
Const* const  chat_parser::s_loc_pred = Data::Intern("loc_pred");
Const* const  chat_parser::s_london = Data::Intern("london");
Const* const  chat_parser::s_longitude = Data::Intern("longitude");
Const* const  chat_parser::s_longitudes = Data::Intern("longitudes");
Const* const  chat_parser::s_main = Data::Intern("main");
Const* const  chat_parser::s_many = Data::Intern("many");
Const* const  chat_parser::s_masc = Data::Intern("masc");
Const* const  chat_parser::s_maximum = Data::Intern("maximum");
Const* const  chat_parser::s_me = Data::Intern("me");
Const* const  chat_parser::s_million = Data::Intern("million");
Const* const  chat_parser::s_milliseconds = Data::Intern("milliseconds");
Const* const  chat_parser::s_minimum = Data::Intern("minimum");
Const* const  chat_parser::s_minus = Data::Intern("minus");
Const* const  chat_parser::s_more = Data::Intern("more");
Const* const  chat_parser::s_most = Data::Intern("most");
Const* const  chat_parser::s_my = Data::Intern("my");
Const* const  chat_parser::s_my_string = Data::Intern("my_string");
Const* const  chat_parser::s_myopen = Data::Intern("myopen");
Const* const  chat_parser::s_myplus = Data::Intern("myplus");
Const* const  chat_parser::s_name = Data::Intern("name");
Const* const  chat_parser::s_nb = Data::Intern("nb");
Const* const  chat_parser::s_neg = Data::Intern("neg");
Const* const  chat_parser::s_neg_adv = Data::Intern("neg_adv");
Const* const  chat_parser::s_neut = Data::Intern("neut");
Const* const  chat_parser::s_new = Data::Intern("new");
Const* const  chat_parser::s_newer = Data::Intern("newer");
Const* const  chat_parser::s_newest = Data::Intern("newest");
Const* const  chat_parser::s_nil = Data::Intern("nil");
Const* const  chat_parser::s_nine = Data::Intern("nine");
Const* const  chat_parser::s_no = Data::Intern("no");
Const* const  chat_parser::s_no_args = Data::Intern("no_args");
Const* const  chat_parser::s_nobody = Data::Intern("nobody");
Const* const  chat_parser::s_nogap = Data::Intern("nogap");
Const* const  chat_parser::s_nonterminal = Data::Intern("nonterminal");
Const* const  chat_parser::s_north = Data::Intern("north");
Const* const  chat_parser::s_northof = Data::Intern("northof");
Const* const  chat_parser::s_not = Data::Intern("not");
Const* const  chat_parser::s_nothing = Data::Intern("nothing");
Const* const  chat_parser::s_noun = Data::Intern("noun");
Const* const  chat_parser::s_noun_form = Data::Intern("noun_form");
Const* const  chat_parser::s_noun_plu = Data::Intern("noun_plu");
Const* const  chat_parser::s_noun_sin = Data::Intern("noun_sin");
Const* const  chat_parser::s_np = Data::Intern("np");
Const* const  chat_parser::s_np_all = Data::Intern("np_all");
Const* const  chat_parser::s_np_compls = Data::Intern("np_compls");
Const* const  chat_parser::s_np_head = Data::Intern("np_head");
Const* const  chat_parser::s_np_head0 = Data::Intern("np_head0");
Const* const  chat_parser::s_np_mod = Data::Intern("np_mod");
Const* const  chat_parser::s_np_mods = Data::Intern("np_mods");
Const* const  chat_parser::s_np_no_trace = Data::Intern("np_no_trace");
Const* const  chat_parser::s_number = Data::Intern("number");
Const* const  chat_parser::s_numbers = Data::Intern("numbers");
Const* const  chat_parser::s_obj = Data::Intern("obj");
Const* const  chat_parser::s_object = Data::Intern("object");
Const* const  chat_parser::s_ocean = Data::Intern("ocean");
Const* const  chat_parser::s_oceans = Data::Intern("oceans");
Const* const  chat_parser::s_of = Data::Intern("of");
Const* const  chat_parser::s_old = Data::Intern("old");
Const* const  chat_parser::s_older = Data::Intern("older");
Const* const  chat_parser::s_oldest = Data::Intern("oldest");
Const* const  chat_parser::s_on = Data::Intern("on");
Const* const  chat_parser::s_one = Data::Intern("one");
Const* const  chat_parser::s_opt_comma = Data::Intern("opt_comma");
Const* const  chat_parser::s_opt_the = Data::Intern("opt_the");
Const* const  chat_parser::s_or = Data::Intern("or");
Const* const  chat_parser::s_our = Data::Intern("our");
Const* const  chat_parser::s_part = Data::Intern("part");
Const* const  chat_parser::s_participle = Data::Intern("participle");
Const* const  chat_parser::s_passive = Data::Intern("passive");
Const* const  chat_parser::s_past = Data::Intern("past");
Const* const  chat_parser::s_people = Data::Intern("people");
Const* const  chat_parser::s_percentage = Data::Intern("percentage");
Const* const  chat_parser::s_perf = Data::Intern("perf");
Const* const  chat_parser::s_pers_pron = Data::Intern("pers_pron");
Const* const  chat_parser::s_person = Data::Intern("person");
Const* const  chat_parser::s_persons = Data::Intern("persons");
Const* const  chat_parser::s_place = Data::Intern("place");
Const* const  chat_parser::s_places = Data::Intern("places");
Const* const  chat_parser::s_plu = Data::Intern("plu");
Const* const  chat_parser::s_population = Data::Intern("population");
Const* const  chat_parser::s_populations = Data::Intern("populations");
Const* const  chat_parser::s_populous = Data::Intern("populous");
Const* const  chat_parser::s_pos = Data::Intern("pos");
Const* const  chat_parser::s_poss = Data::Intern("poss");
Const* const  chat_parser::s_poss_pron = Data::Intern("poss_pron");
Const* const  chat_parser::s_possessive = Data::Intern("possessive");
Const* const  chat_parser::s_pp = Data::Intern("pp");
Const* const  chat_parser::s_pre_adj = Data::Intern("pre_adj");
Const* const  chat_parser::s_pred_conj = Data::Intern("pred_conj");
Const* const  chat_parser::s_pred_rest = Data::Intern("pred_rest");
Const* const  chat_parser::s_predicate = Data::Intern("predicate");
Const* const  chat_parser::s_prep = Data::Intern("prep");
Const* const  chat_parser::s_prep_case = Data::Intern("prep_case");
Const* const  chat_parser::s_pres = Data::Intern("pres");
Const* const  chat_parser::s_prog = Data::Intern("prog");
Const* const  chat_parser::s_pronoun = Data::Intern("pronoun");
Const* const  chat_parser::s_proper = Data::Intern("proper");
Const* const  chat_parser::s_proportion = Data::Intern("proportion");
Const* const  chat_parser::s_q = Data::Intern("q");
Const* const  chat_parser::s_quant = Data::Intern("quant");
Const* const  chat_parser::s_quant_phrase = Data::Intern("quant_phrase");
Const* const  chat_parser::s_quantifier_pron = Data::Intern("quantifier_pron");
Const* const  chat_parser::s_question = Data::Intern("question");
Const* const  chat_parser::s_reduced_rel = Data::Intern("reduced_rel");
Const* const  chat_parser::s_reduced_rel_conj = Data::Intern("reduced_rel_conj");
Const* const  chat_parser::s_reduced_rel_rest = Data::Intern("reduced_rel_rest");
Const* const  chat_parser::s_reduced_relative = Data::Intern("reduced_relative");
Const* const  chat_parser::s_reduced_wh = Data::Intern("reduced_wh");
Const* const  chat_parser::s_region = Data::Intern("region");
Const* const  chat_parser::s_regions = Data::Intern("regions");
Const* const  chat_parser::s_regular_past = Data::Intern("regular_past");
Const* const  chat_parser::s_regular_pres = Data::Intern("regular_pres");
Const* const  chat_parser::s_rel = Data::Intern("rel");
Const* const  chat_parser::s_rel_adj = Data::Intern("rel_adj");
Const* const  chat_parser::s_rel_conj = Data::Intern("rel_conj");
Const* const  chat_parser::s_rel_pron = Data::Intern("rel_pron");
Const* const  chat_parser::s_rel_rest = Data::Intern("rel_rest");
Const* const  chat_parser::s_relative = Data::Intern("relative");
Const* const  chat_parser::s_rest_verb = Data::Intern("rest_verb");
Const* const  chat_parser::s_restr = Data::Intern("restr");
Const* const  chat_parser::s_rise = Data::Intern("rise");
Const* const  chat_parser::s_risen = Data::Intern("risen");
Const* const  chat_parser::s_rises = Data::Intern("rises");
Const* const  chat_parser::s_river = Data::Intern("river");
Const* const  chat_parser::s_rivers = Data::Intern("rivers");
Const* const  chat_parser::s_role = Data::Intern("role");
Const* const  chat_parser::s_root_form = Data::Intern("root_form");
Const* const  chat_parser::s_rose = Data::Intern("rose");
Const* const  chat_parser::s_runtime = Data::Intern("runtime");
Const* const  chat_parser::s_s = Data::Intern("s");
Const* const  chat_parser::s_s_all = Data::Intern("s_all");
Const* const  chat_parser::s_same = Data::Intern("same");
Const* const  chat_parser::s_say = Data::Intern("say");
Const* const  chat_parser::s_sea = Data::Intern("sea");
Const* const  chat_parser::s_seamass = Data::Intern("seamass");
Const* const  chat_parser::s_seamasses = Data::Intern("seamasses");
Const* const  chat_parser::s_seas = Data::Intern("seas");
Const* const  chat_parser::s_sentence = Data::Intern("sentence");
Const* const  chat_parser::s_seven = Data::Intern("seven");
Const* const  chat_parser::s_she = Data::Intern("she");
Const* const  chat_parser::s_sin = Data::Intern("sin");
Const* const  chat_parser::s_six = Data::Intern("six");
Const* const  chat_parser::s_small = Data::Intern("small");
Const* const  chat_parser::s_smaller = Data::Intern("smaller");
Const* const  chat_parser::s_smallerthan = Data::Intern("smallerthan");
Const* const  chat_parser::s_smallest = Data::Intern("smallest");
Const* const  chat_parser::s_some = Data::Intern("some");
Const* const  chat_parser::s_somebody = Data::Intern("somebody");
Const* const  chat_parser::s_someone = Data::Intern("someone");
Const* const  chat_parser::s_something = Data::Intern("something");
Const* const  chat_parser::s_south = Data::Intern("south");
Const* const  chat_parser::s_southof = Data::Intern("southof");
Const* const  chat_parser::s_sqmile = Data::Intern("sqmile");
Const* const  chat_parser::s_sqmiles = Data::Intern("sqmiles");
Const* const  chat_parser::s_statistics = Data::Intern("statistics");
Const* const  chat_parser::s_subj = Data::Intern("subj");
Const* const  chat_parser::s_subj_case = Data::Intern("subj_case");
Const* const  chat_parser::s_subj_question = Data::Intern("subj_question");
Const* const  chat_parser::s_sum = Data::Intern("sum");
Const* const  chat_parser::s_sums = Data::Intern("sums");
Const* const  chat_parser::s_sup = Data::Intern("sup");
Const* const  chat_parser::s_sup_adj = Data::Intern("sup_adj");
Const* const  chat_parser::s_sup_adv = Data::Intern("sup_adv");
Const* const  chat_parser::s_sup_op = Data::Intern("sup_op");
Const* const  chat_parser::s_sup_phrase = Data::Intern("sup_phrase");
Const* const  chat_parser::s_ten = Data::Intern("ten");
Const* const  chat_parser::s_terminal = Data::Intern("terminal");
Const* const  chat_parser::s_terminator = Data::Intern("terminator");
Const* const  chat_parser::s_than = Data::Intern("than");
Const* const  chat_parser::s_that = Data::Intern("that");
Const* const  chat_parser::s_the = Data::Intern("the");
Const* const  chat_parser::s_their = Data::Intern("their");
Const* const  chat_parser::s_them = Data::Intern("them");
Const* const  chat_parser::s_there = Data::Intern("there");
Const* const  chat_parser::s_thing = Data::Intern("thing");
Const* const  chat_parser::s_thousand = Data::Intern("thousand");
Const* const  chat_parser::s_three = Data::Intern("three");
Const* const  chat_parser::s_through = Data::Intern("through");
Const* const  chat_parser::s_time = Data::Intern("time");
Const* const  chat_parser::s_times = Data::Intern("times");
Const* const  chat_parser::s_to = Data::Intern("to");
Const* const  chat_parser::s_tomorrow = Data::Intern("tomorrow");
Const* const  chat_parser::s_top = Data::Intern("top");
Const* const  chat_parser::s_topic = Data::Intern("topic");
Const* const  chat_parser::s_total = Data::Intern("total");
Const* const  chat_parser::s_totals = Data::Intern("totals");
Const* const  chat_parser::s_tr_number = Data::Intern("tr_number");
Const* const  chat_parser::s_trace1 = Data::Intern("trace1");
Const* const  chat_parser::s_trans = Data::Intern("trans");
Const* const  chat_parser::s_two = Data::Intern("two");
Const* const  chat_parser::s_undef = Data::Intern("undef");
Const* const  chat_parser::s_upper_volta = Data::Intern("upper_volta");
Const* const  chat_parser::s_us = Data::Intern("us");
Const* const  chat_parser::s_value = Data::Intern("value");
Const* const  chat_parser::s_variable = Data::Intern("variable");
Const* const  chat_parser::s_variable_q = Data::Intern("variable_q");
Const* const  chat_parser::s_verb = Data::Intern("verb");
Const* const  chat_parser::s_verb_arg = Data::Intern("verb_arg");
Const* const  chat_parser::s_verb_args = Data::Intern("verb_args");
Const* const  chat_parser::s_verb_case = Data::Intern("verb_case");
Const* const  chat_parser::s_verb_form = Data::Intern("verb_form");
Const* const  chat_parser::s_verb_mod = Data::Intern("verb_mod");
Const* const  chat_parser::s_verb_mods = Data::Intern("verb_mods");
Const* const  chat_parser::s_verb_root = Data::Intern("verb_root");
Const* const  chat_parser::s_verb_type = Data::Intern("verb_type");
Const* const  chat_parser::s_virtual = Data::Intern("virtual");
Const* const  chat_parser::s_void = Data::Intern("void");
Const* const  chat_parser::s_was = Data::Intern("was");
Const* const  chat_parser::s_we = Data::Intern("we");
Const* const  chat_parser::s_were = Data::Intern("were");
Const* const  chat_parser::s_west = Data::Intern("west");
Const* const  chat_parser::s_westof = Data::Intern("westof");
Const* const  chat_parser::s_wh = Data::Intern("wh");
Const* const  chat_parser::s_wh_question = Data::Intern("wh_question");
Const* const  chat_parser::s_what = Data::Intern("what");
Const* const  chat_parser::s_when = Data::Intern("when");
Const* const  chat_parser::s_where = Data::Intern("where");
Const* const  chat_parser::s_which = Data::Intern("which");
Const* const  chat_parser::s_who = Data::Intern("who");
Const* const  chat_parser::s_whom = Data::Intern("whom");
Const* const  chat_parser::s_whose = Data::Intern("whose");
Const* const  chat_parser::s_whq = Data::Intern("whq");
Const* const  chat_parser::s_with = Data::Intern("with");
Const* const  chat_parser::s_word = Data::Intern("word");
Const* const  chat_parser::s_write = Data::Intern("write");
Const* const  chat_parser::s_x = Data::Intern("x");
Const* const  chat_parser::s_yesterday = Data::Intern("yesterday");
Const* const  chat_parser::s_yn_question = Data::Intern("yn_question");
Const* const  chat_parser::s_you = Data::Intern("you");
Const* const  chat_parser::s_your = Data::Intern("your");
Const* const  chat_parser::s404 = Data::Intern("~");
Int* const  chat_parser::posint0 = Data::Number(0LL);
Int* const  chat_parser::posint1 = Data::Number(1LL);
Int* const  chat_parser::posint2 = Data::Number(2LL);
Int* const  chat_parser::posint3 = Data::Number(3LL);
Int* const  chat_parser::posint4 = Data::Number(4LL);
Int* const  chat_parser::posint5 = Data::Number(5LL);
Int* const  chat_parser::posint6 = Data::Number(6LL);
Int* const  chat_parser::posint7 = Data::Number(7LL);
Int* const  chat_parser::posint8 = Data::Number(8LL);
Int* const  chat_parser::posint9 = Data::Number(9LL);
Int* const  chat_parser::posint10 = Data::Number(10LL);
const Operation chat_parser::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation chat_parser::reg_go_0 = PredTable::Register("go", 0, new pred_go_0());
const Operation chat_parser::reg_chat_parser_0 = PredTable::Register("chat_parser", 0, new pred_chat_parser_0());
const Operation chat_parser::reg_my_string_1 = PredTable::Register("my_string", 1, new pred_my_string_1());
const Operation chat_parser::reg_determinate_say_2 = PredTable::Register("determinate_say", 2, new pred_determinate_say_2());
const Operation chat_parser::reg_terminal_5 = PredTable::Register("terminal", 5, new pred_terminal_5());
const Operation chat_parser::reg_gap_1 = PredTable::Register("gap", 1, new pred_gap_1());
const Operation chat_parser::reg_virtual_3 = PredTable::Register("virtual", 3, new pred_virtual_3());
const Operation chat_parser::reg_is_pp_1 = PredTable::Register("is_pp", 1, new pred_is_pp_1());
const Operation chat_parser::reg_is_pred_1 = PredTable::Register("is_pred", 1, new pred_is_pred_1());
const Operation chat_parser::reg_is_trace_1 = PredTable::Register("is_trace", 1, new pred_is_trace_1());
const Operation chat_parser::reg_is_adv_1 = PredTable::Register("is_adv", 1, new pred_is_adv_1());
const Operation chat_parser::reg_trace1_2 = PredTable::Register("trace1", 2, new pred_trace1_2());
const Operation chat_parser::reg_trace1_1 = PredTable::Register("trace1", 1, new pred_trace1_1());
const Operation chat_parser::reg_adv_1 = PredTable::Register("adv", 1, new pred_adv_1());
const Operation chat_parser::reg_empty_1 = PredTable::Register("empty", 1, new pred_empty_1());
const Operation chat_parser::reg_np_all_1 = PredTable::Register("np_all", 1, new pred_np_all_1());
const Operation chat_parser::reg_s_all_1 = PredTable::Register("s_all", 1, new pred_s_all_1());
const Operation chat_parser::reg_np_no_trace_1 = PredTable::Register("np_no_trace", 1, new pred_np_no_trace_1());
const Operation chat_parser::reg_myplus_3 = PredTable::Register("myplus", 3, new pred_myplus_3());
const Operation chat_parser::reg_minus_3 = PredTable::Register("minus", 3, new pred_minus_3());
const Operation chat_parser::reg_or_3 = PredTable::Register("or", 3, new pred_or_3());
const Operation chat_parser::reg_anot_3 = PredTable::Register("anot", 3, new pred_anot_3());
const Operation chat_parser::reg_role_3 = PredTable::Register("role", 3, new pred_role_3());
const Operation chat_parser::reg_subj_case_1 = PredTable::Register("subj_case", 1, new pred_subj_case_1());
const Operation chat_parser::reg_verb_case_1 = PredTable::Register("verb_case", 1, new pred_verb_case_1());
const Operation chat_parser::reg_prep_case_1 = PredTable::Register("prep_case", 1, new pred_prep_case_1());
const Operation chat_parser::reg_compl_case_1 = PredTable::Register("compl_case", 1, new pred_compl_case_1());
const Operation chat_parser::reg_say_2 = PredTable::Register("say", 2, new pred_say_2());
const Operation chat_parser::reg_sentence_5 = PredTable::Register("sentence", 5, new pred_sentence_5());
const Operation chat_parser::reg_pp_8 = PredTable::Register("pp", 8, new pred_pp_8());
const Operation chat_parser::reg_topic_4 = PredTable::Register("topic", 4, new pred_topic_4());
const Operation chat_parser::reg_opt_comma_4 = PredTable::Register("opt_comma", 4, new pred_opt_comma_4());
const Operation chat_parser::reg_declarative_5 = PredTable::Register("declarative", 5, new pred_declarative_5());
const Operation chat_parser::reg_wh_question_5 = PredTable::Register("wh_question", 5, new pred_wh_question_5());
const Operation chat_parser::reg_np_11 = PredTable::Register("np", 11, new pred_np_11());
const Operation chat_parser::reg_variable_q_8 = PredTable::Register("variable_q", 8, new pred_variable_q_8());
const Operation chat_parser::reg_adv_phrase_7 = PredTable::Register("adv_phrase", 7, new pred_adv_phrase_7());
const Operation chat_parser::reg_predicate_7 = PredTable::Register("predicate", 7, new pred_predicate_7());
const Operation chat_parser::reg_whq_8 = PredTable::Register("whq", 8, new pred_whq_8());
const Operation chat_parser::reg_int_det_6 = PredTable::Register("int_det", 6, new pred_int_det_6());
const Operation chat_parser::reg_gen_marker_4 = PredTable::Register("gen_marker", 4, new pred_gen_marker_4());
const Operation chat_parser::reg_whose_6 = PredTable::Register("whose", 6, new pred_whose_6());
const Operation chat_parser::reg_question_7 = PredTable::Register("question", 7, new pred_question_7());
const Operation chat_parser::reg_det_7 = PredTable::Register("det", 7, new pred_det_7());
const Operation chat_parser::reg_int_art_6 = PredTable::Register("int_art", 6, new pred_int_art_6());
const Operation chat_parser::reg_subj_question_1 = PredTable::Register("subj_question", 1, new pred_subj_question_1());
const Operation chat_parser::reg_yn_question_5 = PredTable::Register("yn_question", 5, new pred_yn_question_5());
const Operation chat_parser::reg_verb_form_8 = PredTable::Register("verb_form", 8, new pred_verb_form_8());
const Operation chat_parser::reg_neg_6 = PredTable::Register("neg", 6, new pred_neg_6());
const Operation chat_parser::reg_fronted_verb_6 = PredTable::Register("fronted_verb", 6, new pred_fronted_verb_6());
const Operation chat_parser::reg_imperative_5 = PredTable::Register("imperative", 5, new pred_imperative_5());
const Operation chat_parser::reg_imperative_verb_4 = PredTable::Register("imperative_verb", 4, new pred_imperative_verb_4());
const Operation chat_parser::reg_s_6 = PredTable::Register("s", 6, new pred_s_6());
const Operation chat_parser::reg_subj_7 = PredTable::Register("subj", 7, new pred_subj_7());
const Operation chat_parser::reg_np_head_9 = PredTable::Register("np_head", 9, new pred_np_head_9());
const Operation chat_parser::reg_np_head0_7 = PredTable::Register("np_head0", 7, new pred_np_head0_7());
const Operation chat_parser::reg_np_compls_10 = PredTable::Register("np_compls", 10, new pred_np_compls_10());
const Operation chat_parser::reg_possessive_14 = PredTable::Register("possessive", 14, new pred_possessive_14());
const Operation chat_parser::reg_gen_case_4 = PredTable::Register("gen_case", 4, new pred_gen_case_4());
const Operation chat_parser::reg_an_s_4 = PredTable::Register("an_s", 4, new pred_an_s_4());
const Operation chat_parser::reg_determiner_7 = PredTable::Register("determiner", 7, new pred_determiner_7());
const Operation chat_parser::reg_quant_phrase_7 = PredTable::Register("quant_phrase", 7, new pred_quant_phrase_7());
const Operation chat_parser::reg_quant_6 = PredTable::Register("quant", 6, new pred_quant_6());
const Operation chat_parser::reg_neg_adv_6 = PredTable::Register("neg_adv", 6, new pred_neg_adv_6());
const Operation chat_parser::reg_sup_op_2 = PredTable::Register("sup_op", 2, new pred_sup_op_2());
const Operation chat_parser::reg_np_mods_12 = PredTable::Register("np_mods", 12, new pred_np_mods_12());
const Operation chat_parser::reg_np_mod_9 = PredTable::Register("np_mod", 9, new pred_np_mod_9());
const Operation chat_parser::reg_verb_mods_8 = PredTable::Register("verb_mods", 8, new pred_verb_mods_8());
const Operation chat_parser::reg_verb_mod_7 = PredTable::Register("verb_mod", 7, new pred_verb_mod_7());
const Operation chat_parser::reg_adjs_5 = PredTable::Register("adjs", 5, new pred_adjs_5());
const Operation chat_parser::reg_pre_adj_5 = PredTable::Register("pre_adj", 5, new pred_pre_adj_5());
const Operation chat_parser::reg_sup_phrase_5 = PredTable::Register("sup_phrase", 5, new pred_sup_phrase_5());
const Operation chat_parser::reg_comp_phrase_6 = PredTable::Register("comp_phrase", 6, new pred_comp_phrase_6());
const Operation chat_parser::reg_comp_6 = PredTable::Register("comp", 6, new pred_comp_6());
const Operation chat_parser::reg_relative_9 = PredTable::Register("relative", 9, new pred_relative_9());
const Operation chat_parser::reg_rel_conj_8 = PredTable::Register("rel_conj", 8, new pred_rel_conj_8());
const Operation chat_parser::reg_rel_rest_10 = PredTable::Register("rel_rest", 10, new pred_rel_rest_10());
const Operation chat_parser::reg_rel_7 = PredTable::Register("rel", 7, new pred_rel_7());
const Operation chat_parser::reg_variable_6 = PredTable::Register("variable", 6, new pred_variable_6());
const Operation chat_parser::reg_wh_9 = PredTable::Register("wh", 9, new pred_wh_9());
const Operation chat_parser::reg_reduced_relative_8 = PredTable::Register("reduced_relative", 8, new pred_reduced_relative_8());
const Operation chat_parser::reg_reduced_rel_conj_8 = PredTable::Register("reduced_rel_conj", 8, new pred_reduced_rel_conj_8());
const Operation chat_parser::reg_reduced_rel_rest_10 = PredTable::Register("reduced_rel_rest", 10, new pred_reduced_rel_rest_10());
const Operation chat_parser::reg_reduced_rel_7 = PredTable::Register("reduced_rel", 7, new pred_reduced_rel_7());
const Operation chat_parser::reg_reduced_wh_6 = PredTable::Register("reduced_wh", 6, new pred_reduced_wh_6());
const Operation chat_parser::reg_verb_8 = PredTable::Register("verb", 8, new pred_verb_8());
const Operation chat_parser::reg_rest_verb_9 = PredTable::Register("rest_verb", 9, new pred_rest_verb_9());
const Operation chat_parser::reg_have_8 = PredTable::Register("have", 8, new pred_have_8());
const Operation chat_parser::reg_be_9 = PredTable::Register("be", 9, new pred_be_9());
const Operation chat_parser::reg_passive_7 = PredTable::Register("passive", 7, new pred_passive_7());
const Operation chat_parser::reg_participle_7 = PredTable::Register("participle", 7, new pred_participle_7());
const Operation chat_parser::reg_passive_1 = PredTable::Register("passive", 1, new pred_passive_1());
const Operation chat_parser::reg_participle_3 = PredTable::Register("participle", 3, new pred_participle_3());
const Operation chat_parser::reg_close_4 = PredTable::Register("close", 4, new pred_close_4());
const Operation chat_parser::reg_myopen_4 = PredTable::Register("myopen", 4, new pred_myopen_4());
const Operation chat_parser::reg_verb_args_9 = PredTable::Register("verb_args", 9, new pred_verb_args_9());
const Operation chat_parser::reg_object_8 = PredTable::Register("object", 8, new pred_object_8());
const Operation chat_parser::reg_obj_8 = PredTable::Register("obj", 8, new pred_obj_8());
const Operation chat_parser::reg_pred_conj_7 = PredTable::Register("pred_conj", 7, new pred_pred_conj_7());
const Operation chat_parser::reg_pred_rest_9 = PredTable::Register("pred_rest", 9, new pred_pred_rest_9());
const Operation chat_parser::reg_verb_arg_7 = PredTable::Register("verb_arg", 7, new pred_verb_arg_7());
const Operation chat_parser::reg_advs_7 = PredTable::Register("advs", 7, new pred_advs_7());
const Operation chat_parser::reg_adj_phrase_6 = PredTable::Register("adj_phrase", 6, new pred_adj_phrase_6());
const Operation chat_parser::reg_no_args_1 = PredTable::Register("no_args", 1, new pred_no_args_1());
const Operation chat_parser::reg_conj_9 = PredTable::Register("conj", 9, new pred_conj_9());
const Operation chat_parser::reg_noun_6 = PredTable::Register("noun", 6, new pred_noun_6());
const Operation chat_parser::reg_adj_6 = PredTable::Register("adj", 6, new pred_adj_6());
const Operation chat_parser::reg_prep_5 = PredTable::Register("prep", 5, new pred_prep_5());
const Operation chat_parser::reg_rel_adj_5 = PredTable::Register("rel_adj", 5, new pred_rel_adj_5());
const Operation chat_parser::reg_sup_adj_5 = PredTable::Register("sup_adj", 5, new pred_sup_adj_5());
const Operation chat_parser::reg_comp_adv_5 = PredTable::Register("comp_adv", 5, new pred_comp_adv_5());
const Operation chat_parser::reg_sup_adv_5 = PredTable::Register("sup_adv", 5, new pred_sup_adv_5());
const Operation chat_parser::reg_rel_pron_5 = PredTable::Register("rel_pron", 5, new pred_rel_pron_5());
const Operation chat_parser::reg_name_5 = PredTable::Register("name", 5, new pred_name_5());
const Operation chat_parser::reg_int_art_7 = PredTable::Register("int_art", 7, new pred_int_art_7());
const Operation chat_parser::reg_int_pron_5 = PredTable::Register("int_pron", 5, new pred_int_pron_5());
const Operation chat_parser::reg_adverb_5 = PredTable::Register("adverb", 5, new pred_adverb_5());
const Operation chat_parser::reg_poss_pron_6 = PredTable::Register("poss_pron", 6, new pred_poss_pron_6());
const Operation chat_parser::reg_pers_pron_7 = PredTable::Register("pers_pron", 7, new pred_pers_pron_7());
const Operation chat_parser::reg_quantifier_pron_6 = PredTable::Register("quantifier_pron", 6, new pred_quantifier_pron_6());
const Operation chat_parser::reg_context_pron_6 = PredTable::Register("context_pron", 6, new pred_context_pron_6());
const Operation chat_parser::reg_number_6 = PredTable::Register("number", 6, new pred_number_6());
const Operation chat_parser::reg_terminator_5 = PredTable::Register("terminator", 5, new pred_terminator_5());
const Operation chat_parser::reg_opt_the_4 = PredTable::Register("opt_the", 4, new pred_opt_the_4());
const Operation chat_parser::reg_conj_7 = PredTable::Register("conj", 7, new pred_conj_7());
const Operation chat_parser::reg_loc_pred_5 = PredTable::Register("loc_pred", 5, new pred_loc_pred_5());
const Operation chat_parser::reg_$007E_5 = PredTable::Register("~", 5, new pred_$007E_5());
const Operation chat_parser::reg_word_1 = PredTable::Register("word", 1, new pred_word_1());
const Operation chat_parser::reg_$007E_1 = PredTable::Register("~", 1, new pred_$007E_1());
const Operation chat_parser::reg_conj_1 = PredTable::Register("conj", 1, new pred_conj_1());
const Operation chat_parser::reg_int_pron_2 = PredTable::Register("int_pron", 2, new pred_int_pron_2());
const Operation chat_parser::reg_int_art_4 = PredTable::Register("int_art", 4, new pred_int_art_4());
const Operation chat_parser::reg_det_4 = PredTable::Register("det", 4, new pred_det_4());
const Operation chat_parser::reg_number_3 = PredTable::Register("number", 3, new pred_number_3());
const Operation chat_parser::reg_tr_number_2 = PredTable::Register("tr_number", 2, new pred_tr_number_2());
const Operation chat_parser::reg_ag_number_2 = PredTable::Register("ag_number", 2, new pred_ag_number_2());
const Operation chat_parser::reg_quantifier_pron_3 = PredTable::Register("quantifier_pron", 3, new pred_quantifier_pron_3());
const Operation chat_parser::reg_prep_1 = PredTable::Register("prep", 1, new pred_prep_1());
const Operation chat_parser::reg_noun_form_3 = PredTable::Register("noun_form", 3, new pred_noun_form_3());
const Operation chat_parser::reg_root_form_1 = PredTable::Register("root_form", 1, new pred_root_form_1());
const Operation chat_parser::reg_verb_root_1 = PredTable::Register("verb_root", 1, new pred_verb_root_1());
const Operation chat_parser::reg_regular_pres_1 = PredTable::Register("regular_pres", 1, new pred_regular_pres_1());
const Operation chat_parser::reg_regular_past_2 = PredTable::Register("regular_past", 2, new pred_regular_past_2());
const Operation chat_parser::reg_rel_pron_2 = PredTable::Register("rel_pron", 2, new pred_rel_pron_2());
const Operation chat_parser::reg_poss_pron_4 = PredTable::Register("poss_pron", 4, new pred_poss_pron_4());
const Operation chat_parser::reg_pers_pron_5 = PredTable::Register("pers_pron", 5, new pred_pers_pron_5());
const Operation chat_parser::reg_terminator_2 = PredTable::Register("terminator", 2, new pred_terminator_2());
const Operation chat_parser::reg_name_1 = PredTable::Register("name", 1, new pred_name_1());
const Operation chat_parser::reg_loc_pred_2 = PredTable::Register("loc_pred", 2, new pred_loc_pred_2());
const Operation chat_parser::reg_adj_2 = PredTable::Register("adj", 2, new pred_adj_2());
const Operation chat_parser::reg_rel_adj_2 = PredTable::Register("rel_adj", 2, new pred_rel_adj_2());
const Operation chat_parser::reg_sup_adj_2 = PredTable::Register("sup_adj", 2, new pred_sup_adj_2());
const Operation chat_parser::reg_noun_sin_1 = PredTable::Register("noun_sin", 1, new pred_noun_sin_1());
const Operation chat_parser::reg_noun_plu_2 = PredTable::Register("noun_plu", 2, new pred_noun_plu_2());
const Operation chat_parser::reg_verb_form_4 = PredTable::Register("verb_form", 4, new pred_verb_form_4());
const Operation chat_parser::reg_verb_type_2 = PredTable::Register("verb_type", 2, new pred_verb_type_2());
const Operation chat_parser::reg_adverb_1 = PredTable::Register("adverb", 1, new pred_adverb_1());

	Operation chat_parser::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation chat_parser::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_chat_parser_0::exec_static);
	}

	Operation chat_parser::pred_go_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_go_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_go_0__1(mach));
	}

	Operation chat_parser::pred_go_0::exec_pred_go_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = chat_parser::s_runtime;
		local_aregs[1] = Data::F(chat_parser::s5, var1, Data::F(chat_parser::s5, var2, Const::Nil));
		local_aregs[2] = Data::F(chat_parser::s_chat_parser, Data::F(chat_parser::s_statistics, chat_parser::s_runtime, Data::F(chat_parser::s5, var3, Data::F(chat_parser::s5, var4, Const::Nil)), Data::F(chat_parser::s_write, chat_parser::s116, Data::F(chat_parser::s_write, { var4->Deref(), Data::F(chat_parser::s_write, chat_parser::s_milliseconds, continuation) }))));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_statistics_2::exec_static);
	}

	Operation chat_parser::pred_chat_parser_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_chat_parser_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_chat_parser_0__1(mach));
	}

	Operation chat_parser::pred_chat_parser_0::exec_pred_chat_parser_0__1(Prolog* mach) {
		mach->FillAlternative(pred_chat_parser_0::exec_pred_chat_parser_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = Data::F(chat_parser::s_determinate_say, { var1->Deref(), var2, Data::F(chat_parser::s_fail, { continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_my_string_1::exec_static);
	}

	Operation chat_parser::pred_chat_parser_0::exec_pred_chat_parser_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_my_string_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_my_string_1__1(mach));
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__1(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_rivers, Data::F(chat_parser::s5, chat_parser::s_are, Data::F(chat_parser::s5, chat_parser::s_there, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__2(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_does, Data::F(chat_parser::s5, chat_parser::s_afghanistan, Data::F(chat_parser::s5, chat_parser::s_border, Data::F(chat_parser::s5, chat_parser::s_china, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__3(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_capital, Data::F(chat_parser::s5, chat_parser::s_of, Data::F(chat_parser::s5, chat_parser::s_upper_volta, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__4(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_where, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_largest, Data::F(chat_parser::s5, chat_parser::s_country, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__5(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_which, Data::F(chat_parser::s5, chat_parser::s_country, Data::F(chat_parser::s5, chat_parser::s404, Data::F(chat_parser::s5, chat_parser::s_s, Data::F(chat_parser::s5, chat_parser::s_capital, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_london, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__6(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_which, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_are, Data::F(chat_parser::s5, chat_parser::s_european, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__7(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_how, Data::F(chat_parser::s5, chat_parser::s_large, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_smallest, Data::F(chat_parser::s5, chat_parser::s_american, Data::F(chat_parser::s5, chat_parser::s_country, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__8(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_ocean, Data::F(chat_parser::s5, chat_parser::s_that, Data::F(chat_parser::s5, chat_parser::s_borders, Data::F(chat_parser::s5, chat_parser::s_african, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_and, Data::F(chat_parser::s5, chat_parser::s_that, Data::F(chat_parser::s5, chat_parser::s_borders, Data::F(chat_parser::s5, chat_parser::s_asian, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__9(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_are, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_capitals, Data::F(chat_parser::s5, chat_parser::s_of, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_bordering, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_baltic, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__10(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_which, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_are, Data::F(chat_parser::s5, chat_parser::s_bordered, Data::F(chat_parser::s5, chat_parser::s_by, Data::F(chat_parser::s5, chat_parser::s_two, Data::F(chat_parser::s5, chat_parser::s_seas, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__11(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_how, Data::F(chat_parser::s5, chat_parser::s_many, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_does, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_danube, Data::F(chat_parser::s5, chat_parser::s_flow, Data::F(chat_parser::s5, chat_parser::s_through, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__12(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_total, Data::F(chat_parser::s5, chat_parser::s_area, Data::F(chat_parser::s5, chat_parser::s_of, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_south, Data::F(chat_parser::s5, chat_parser::s_of, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_equator, Data::F(chat_parser::s5, chat_parser::s_and, Data::F(chat_parser::s5, chat_parser::s_not, Data::F(chat_parser::s5, chat_parser::s_in, Data::F(chat_parser::s5, chat_parser::s_australasia, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__13(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_average, Data::F(chat_parser::s5, chat_parser::s_area, Data::F(chat_parser::s5, chat_parser::s_of, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_in, Data::F(chat_parser::s5, chat_parser::s_each, Data::F(chat_parser::s5, chat_parser::s_continent, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__14(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_there, Data::F(chat_parser::s5, chat_parser::s_more, Data::F(chat_parser::s5, chat_parser::s_than, Data::F(chat_parser::s5, chat_parser::s_one, Data::F(chat_parser::s5, chat_parser::s_country, Data::F(chat_parser::s5, chat_parser::s_in, Data::F(chat_parser::s5, chat_parser::s_each, Data::F(chat_parser::s5, chat_parser::s_continent, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__15(Prolog* mach) {
		mach->FillAlternative(pred_my_string_1::exec_pred_my_string_1__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_is, Data::F(chat_parser::s5, chat_parser::s_there, Data::F(chat_parser::s5, chat_parser::s_some, Data::F(chat_parser::s5, chat_parser::s_ocean, Data::F(chat_parser::s5, chat_parser::s_that, Data::F(chat_parser::s5, chat_parser::s_does, Data::F(chat_parser::s5, chat_parser::s_not, Data::F(chat_parser::s5, chat_parser::s_border, Data::F(chat_parser::s5, chat_parser::s_any, Data::F(chat_parser::s5, chat_parser::s_country, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_my_string_1::exec_pred_my_string_1__16(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s5, chat_parser::s_what, Data::F(chat_parser::s5, chat_parser::s_are, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_countries, Data::F(chat_parser::s5, chat_parser::s_from, Data::F(chat_parser::s5, chat_parser::s_which, Data::F(chat_parser::s5, chat_parser::s_a, Data::F(chat_parser::s5, chat_parser::s_river, Data::F(chat_parser::s5, chat_parser::s_flows, Data::F(chat_parser::s5, chat_parser::s_into, Data::F(chat_parser::s5, chat_parser::s_the, Data::F(chat_parser::s5, chat_parser::s_black_sea, Data::F(chat_parser::s5, chat_parser::s7, Const::Nil)))))))))))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_determinate_say_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_determinate_say_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_determinate_say_2__1(mach));
	}

	Operation chat_parser::pred_determinate_say_2::exec_pred_determinate_say_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_say_2::exec_static);
	}

	Operation chat_parser::pred_terminal_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_terminal_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_terminal_5__1(mach));
	}

	Operation chat_parser::pred_terminal_5::exec_pred_terminal_5__1(Prolog* mach) {
		mach->FillAlternative(pred_terminal_5::exec_pred_terminal_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_x, var3, chat_parser::s_terminal, var1->Deref(), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_terminal_5::exec_pred_terminal_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s5, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_gap_1::exec_static);
	}

	Operation chat_parser::pred_gap_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_gap_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_gap_1__1(mach));
	}

	Operation chat_parser::pred_gap_1::exec_pred_gap_1__1(Prolog* mach) {
		mach->FillAlternative(pred_gap_1::exec_pred_gap_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_gap_1::exec_pred_gap_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_virtual_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_virtual_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_virtual_3__1(mach));
	}

	Operation chat_parser::pred_virtual_3::exec_pred_virtual_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_x, var2, chat_parser::s_nonterminal, var1->Deref(), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_is_pp_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_is_pp_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_is_pp_1__1(mach));
	}

	Operation chat_parser::pred_is_pp_1::exec_pred_is_pp_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_is_pred_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_is_pred_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_is_pred_1__1(mach));
	}

	Operation chat_parser::pred_is_pred_1::exec_pred_is_pred_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, chat_parser::posint1, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_is_trace_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_is_trace_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_is_trace_1__1(mach));
	}

	Operation chat_parser::pred_is_trace_1::exec_pred_is_trace_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, var2, chat_parser::posint1, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_is_adv_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_is_adv_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_is_adv_1__1(mach));
	}

	Operation chat_parser::pred_is_adv_1::exec_pred_is_adv_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, var2, var3, chat_parser::posint1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_trace1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_trace1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_trace1_2__1(mach));
	}

	Operation chat_parser::pred_trace1_2::exec_pred_trace1_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, var2, chat_parser::posint1, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_trace1_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_trace1_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_trace1_1__1(mach));
	}

	Operation chat_parser::pred_trace1_1::exec_pred_trace1_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adv_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adv_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adv_1__1(mach));
	}

	Operation chat_parser::pred_adv_1::exec_pred_adv_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_empty_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_empty_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_empty_1__1(mach));
	}

	Operation chat_parser::pred_empty_1::exec_pred_empty_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_np_all_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_all_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_all_1__1(mach));
	}

	Operation chat_parser::pred_np_all_1::exec_pred_np_all_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, chat_parser::posint1, chat_parser::posint1, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_s_all_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_s_all_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_s_all_1__1(mach));
	}

	Operation chat_parser::pred_s_all_1::exec_pred_s_all_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint1, chat_parser::posint1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_np_no_trace_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_no_trace_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_no_trace_1__1(mach));
	}

	Operation chat_parser::pred_np_no_trace_1::exec_pred_np_no_trace_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_myplus_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_myplus_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_myplus_3__1(mach));
	}

	Operation chat_parser::pred_myplus_3::exec_pred_myplus_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s2, var5, var6, var7, var8)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, var9, var10, var11, var12)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var9->Deref();
		local_aregs[3] = Data::F(chat_parser::s_or, { var2->Deref(), var6->Deref(), var10->Deref(), Data::F(chat_parser::s_or, { var3->Deref(), var7->Deref(), var11->Deref(), Data::F(chat_parser::s_or, { var4->Deref(), var8->Deref(), var12->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_or_3::exec_static);
	}

	Operation chat_parser::pred_minus_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_minus_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_minus_3__1(mach));
	}

	Operation chat_parser::pred_minus_3::exec_pred_minus_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s2, var5, var6, var7, var8)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, var9, var10, var11, var12)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var9->Deref();
		local_aregs[3] = Data::F(chat_parser::s_anot, { var2->Deref(), var6->Deref(), var10->Deref(), Data::F(chat_parser::s_anot, { var3->Deref(), var7->Deref(), var11->Deref(), Data::F(chat_parser::s_anot, { var4->Deref(), var8->Deref(), var12->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_anot_3::exec_static);
	}

	Operation chat_parser::pred_or_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_or_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_or_3__1(mach));
	}

	Operation chat_parser::pred_or_3::exec_pred_or_3__1(Prolog* mach) {
		mach->FillAlternative(pred_or_3::exec_pred_or_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_or_3::exec_pred_or_3__2(Prolog* mach) {
		mach->FillAlternative(pred_or_3::exec_pred_or_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_or_3::exec_pred_or_3__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_anot_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_anot_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_anot_3__1(mach));
	}

	Operation chat_parser::pred_anot_3::exec_pred_anot_3__1(Prolog* mach) {
		mach->FillAlternative(pred_anot_3::exec_pred_anot_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_anot_3::exec_pred_anot_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_role_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_role_3__1(mach));
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__1(Prolog* mach) {
		mach->FillAlternative(pred_role_3::exec_pred_role_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__2(Prolog* mach) {
		mach->FillAlternative(pred_role_3::exec_pred_role_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__3(Prolog* mach) {
		mach->FillAlternative(pred_role_3::exec_pred_role_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_main))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, var1, chat_parser::posint0, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__4(Prolog* mach) {
		mach->FillAlternative(pred_role_3::exec_pred_role_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_aux))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, var1, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__5(Prolog* mach) {
		mach->FillAlternative(pred_role_3::exec_pred_role_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_decl))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_role_3::exec_pred_role_3__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_subj_case_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_subj_case_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_subj_case_1__1(mach));
	}

	Operation chat_parser::pred_subj_case_1::exec_pred_subj_case_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint1, chat_parser::posint0, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_case_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_case_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_case_1__1(mach));
	}

	Operation chat_parser::pred_verb_case_1::exec_pred_verb_case_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint1, chat_parser::posint0)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_case_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_prep_case_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_prep_case_1__1(mach));
	}

	Operation chat_parser::pred_prep_case_1::exec_pred_prep_case_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, chat_parser::posint0, chat_parser::posint1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_compl_case_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_compl_case_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_compl_case_1__1(mach));
	}

	Operation chat_parser::pred_compl_case_1::exec_pred_compl_case_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s2, chat_parser::posint0, var1, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_say_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_say_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_say_2__1(mach));
	}

	Operation chat_parser::pred_say_2::exec_pred_say_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Const::Nil;
		local_aregs[3] = Const::Nil;
		local_aregs[4] = Const::Nil;
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sentence_5::exec_static);
	}

	Operation chat_parser::pred_sentence_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sentence_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sentence_5__1(mach));
	}

	Operation chat_parser::pred_sentence_5::exec_pred_sentence_5__1(Prolog* mach) {
		mach->FillAlternative(pred_sentence_5::exec_pred_sentence_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_terminator, chat_parser::s5, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_declarative_5::exec_static);
	}

	Operation chat_parser::pred_sentence_5::exec_pred_sentence_5__2(Prolog* mach) {
		mach->FillAlternative(pred_sentence_5::exec_pred_sentence_5__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_terminator, chat_parser::s7, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_wh_question_5::exec_static);
	}

	Operation chat_parser::pred_sentence_5::exec_pred_sentence_5__3(Prolog* mach) {
		mach->FillAlternative(pred_sentence_5::exec_pred_sentence_5__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var6;
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = Data::F(chat_parser::s_wh_question, { var1->Deref(), var6->Deref(), var8, var7->Deref(), var9, Data::F(chat_parser::s_terminator, chat_parser::s7, var8->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_topic_4::exec_static);
	}

	Operation chat_parser::pred_sentence_5::exec_pred_sentence_5__4(Prolog* mach) {
		mach->FillAlternative(pred_sentence_5::exec_pred_sentence_5__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_terminator, chat_parser::s7, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_yn_question_5::exec_static);
	}

	Operation chat_parser::pred_sentence_5::exec_pred_sentence_5__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_terminator, chat_parser::s1, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_imperative_5::exec_static);
	}

	Operation chat_parser::pred_pp_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pp_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pp_8__1(mach));
	}

	Operation chat_parser::pred_pp_8::exec_pred_pp_8__1(Prolog* mach) {
		mach->FillAlternative(pred_pp_8::exec_pred_pp_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_pp, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var7->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_pp_8::exec_pred_pp_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_pp, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var10;
		local_aregs[3] = var8->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = Data::F(chat_parser::s_prep_case, var12, Data::F(chat_parser::s_np, { var2->Deref(), var13, var12->Deref(), var14, var3->Deref(), var4->Deref(), var5->Deref(), var10->Deref(), var7->Deref(), var11->Deref(), var9->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_prep_5::exec_static);
	}

	Operation chat_parser::pred_topic_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_topic_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_topic_4__1(mach));
	}

	Operation chat_parser::pred_topic_4::exec_pred_topic_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_pp, var4, chat_parser::s_compl, var5, var6), var7)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = chat_parser::s_compl;
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var1->Deref();
		local_aregs[5] = var8;
		local_aregs[6] = var3->Deref();
		local_aregs[7] = var9;
		local_aregs[8] = Data::F(chat_parser::s_opt_comma, { var8->Deref(), var2->Deref(), var9->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_pp_8::exec_static);
	}

	Operation chat_parser::pred_opt_comma_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_opt_comma_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_opt_comma_4__1(mach));
	}

	Operation chat_parser::pred_opt_comma_4::exec_pred_opt_comma_4__1(Prolog* mach) {
		mach->FillAlternative(pred_opt_comma_4::exec_pred_opt_comma_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s4;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_opt_comma_4::exec_pred_opt_comma_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_declarative_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_declarative_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_declarative_5__1(mach));
	}

	Operation chat_parser::pred_declarative_5::exec_pred_declarative_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_decl, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var6;
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_s_6::exec_static);
	}

	Operation chat_parser::pred_wh_question_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_wh_question_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_wh_question_5__1(mach));
	}

	Operation chat_parser::pred_wh_question_5::exec_pred_wh_question_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_whq, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var7;
		local_aregs[2] = var8;
		local_aregs[3] = var9;
		local_aregs[4] = var3->Deref();
		local_aregs[5] = var10;
		local_aregs[6] = var5->Deref();
		local_aregs[7] = var11;
		local_aregs[8] = Data::F(chat_parser::s_question, { var8->Deref(), var9->Deref(), var2->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_variable_q_8::exec_static);
	}

	Operation chat_parser::pred_np_11::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_11::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
		std::vector<Term*> aregs = mach->RegPull(11);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_11__1(mach));
	}

	Operation chat_parser::pred_np_11::exec_pred_np_11__1(Prolog* mach) {
		mach->FillAlternative(pred_np_11::exec_pred_np_11__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_np, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() });
		local_aregs[1] = var9->Deref();
		local_aregs[2] = var10->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_np_11::exec_pred_np_11__2(Prolog* mach) {
		mach->FillAlternative(pred_np_11::exec_pred_np_11__3);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_np, var1, var2, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_def))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5->Deref();
		local_aregs[1] = Data::F(chat_parser::s_pers_pron, { var2->Deref(), var1->Deref(), var11, var7->Deref(), var8->Deref(), var9->Deref(), var10->Deref(), Data::F(chat_parser::s_empty, { var6->Deref(), Data::F(chat_parser::s_role, { var11->Deref(), chat_parser::s_decl, var3->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_pp_1::exec_static);
	}

	Operation chat_parser::pred_np_11::exec_pred_np_11__3(Prolog* mach) {
		mach->FillAlternative(pred_np_11::exec_pred_np_11__4);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_np, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var11))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var12))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7->Deref();
		local_aregs[1] = Data::F(chat_parser::s_np_head, { var2->Deref(), var1->Deref(), Data::F(chat_parser::s3, { var5->Deref(), var13 }), var14, var3->Deref(), var9->Deref(), var15, var11->Deref(), var16, Data::F(chat_parser::s_np_all, var17, Data::F(chat_parser::s_np_compls, { var13->Deref(), var1->Deref(), var6->Deref(), var14->Deref(), var17->Deref(), var8->Deref(), var15->Deref(), var10->Deref(), var16->Deref(), var12->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_pp_1::exec_static);
	}

	Operation chat_parser::pred_np_11::exec_pred_np_11__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_part, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var11))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6->Deref();
		local_aregs[1] = Data::F(chat_parser::s_determiner, { var1->Deref(), var3->Deref(), chat_parser::s_indef, var8->Deref(), var12, var10->Deref(), var13, Data::F(chat_parser::s404, chat_parser::s_of, var12->Deref(), var14, var13->Deref(), var15, Data::F(chat_parser::s_s_all, var16, Data::F(chat_parser::s_prep_case, var17, Data::F(chat_parser::s_np, { var2->Deref(), Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_plu), var17->Deref(), chat_parser::s_def, var5->Deref(), var16->Deref(), var7->Deref(), var14->Deref(), var9->Deref(), var15->Deref(), var11->Deref(), continuation })))) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_pp_1::exec_static);
	}

	Operation chat_parser::pred_variable_q_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_variable_q_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_variable_q_8__1(mach));
	}

	Operation chat_parser::pred_variable_q_8::exec_pred_variable_q_8__1(Prolog* mach) {
		mach->FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, var8, var2->Deref(), var4->Deref(), var9, var10, var11, var12), var13)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var8->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = var13->Deref();
		local_aregs[8] = Data::F(chat_parser::s_trace1, { var11->Deref(), var12->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_whq_8::exec_static);
	}

	Operation chat_parser::pred_variable_q_8::exec_pred_variable_q_8__2(Prolog* mach) {
		mach->FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_pp, Data::F(chat_parser::s_pp, var7, var8), chat_parser::s_compl, var9, var10), var11)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var12;
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var13;
		local_aregs[5] = Data::F(chat_parser::s_whq, { var1->Deref(), var2->Deref(), var8->Deref(), var14, var12->Deref(), var5->Deref(), var13->Deref(), var11->Deref(), Data::F(chat_parser::s_trace1, { var9->Deref(), var10->Deref(), Data::F(chat_parser::s_compl_case, { var3->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_prep_5::exec_static);
	}

	Operation chat_parser::pred_variable_q_8::exec_pred_variable_q_8__3(Prolog* mach) {
		mach->FillAlternative(pred_variable_q_8::exec_pred_variable_q_8__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_adv_phrase, Data::F(chat_parser::s_pp, var7, Data::F(chat_parser::s_np, { var2->Deref(), Data::F(chat_parser::s_np_head, Data::F(chat_parser::s_int_det, { var1->Deref() }), Const::Nil, var8), Const::Nil })), var9, var10), var11)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7->Deref();
		local_aregs[1] = var8->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var11->Deref();
		local_aregs[6] = Data::F(chat_parser::s_trace1, { var9->Deref(), var10->Deref(), Data::F(chat_parser::s_verb_case, { var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_context_pron_6::exec_static);
	}

	Operation chat_parser::pred_variable_q_8::exec_pred_variable_q_8__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_predicate, chat_parser::s_adj, Data::F(chat_parser::s_value, var7, Data::F(chat_parser::s_wh, { var1->Deref() })), var8), var9)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_how;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var10;
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = Data::F(chat_parser::s_adj, chat_parser::s_quant, var7->Deref(), var10->Deref(), var5->Deref(), var11->Deref(), var9->Deref(), Data::F(chat_parser::s_empty, { var8->Deref(), Data::F(chat_parser::s_verb_case, { var3->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_adv_phrase_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adv_phrase_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adv_phrase_7__1(mach));
	}

	Operation chat_parser::pred_adv_phrase_7::exec_pred_adv_phrase_7__1(Prolog* mach) {
		mach->FillAlternative(pred_adv_phrase_7::exec_pred_adv_phrase_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_adv_phrase, { var1->Deref(), var2->Deref(), var3->Deref() });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_adv_phrase_7::exec_pred_adv_phrase_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_pp, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var9;
		local_aregs[3] = var7->Deref();
		local_aregs[4] = var10;
		local_aregs[5] = Data::F(chat_parser::s_pp, Data::F(chat_parser::s_pp, Data::F(chat_parser::s_prep, chat_parser::s_of), var2->Deref()), chat_parser::s_compl, var3->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_loc_pred_5::exec_static);
	}

	Operation chat_parser::pred_predicate_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_predicate_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_predicate_7__1(mach));
	}

	Operation chat_parser::pred_predicate_7::exec_pred_predicate_7__1(Prolog* mach) {
		mach->FillAlternative(pred_predicate_7::exec_pred_predicate_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_predicate, { var1->Deref(), var2->Deref(), var3->Deref() });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_predicate_7::exec_pred_predicate_7__2(Prolog* mach) {
		mach->FillAlternative(pred_predicate_7::exec_pred_predicate_7__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var7->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_adj_phrase_6::exec_static);
	}

	Operation chat_parser::pred_predicate_7::exec_pred_predicate_7__3(Prolog* mach) {
		mach->FillAlternative(pred_predicate_7::exec_pred_predicate_7__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_neg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = Data::F(chat_parser::s_pp, { var1->Deref(), chat_parser::s_compl, var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_s_all_1::exec_static);
	}

	Operation chat_parser::pred_predicate_7::exec_pred_predicate_7__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = Data::F(chat_parser::s_adv_phrase, { var2->Deref(), var8->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_s_all_1::exec_static);
	}

	Operation chat_parser::pred_whq_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_whq_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_whq_8__1(mach));
	}

	Operation chat_parser::pred_whq_8::exec_pred_whq_8__1(Prolog* mach) {
		mach->FillAlternative(pred_whq_8::exec_pred_whq_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var8;
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var9;
		local_aregs[6] = Data::F(chat_parser::s_s_all, var10, Data::F(chat_parser::s_np, { var3->Deref(), var2->Deref(), var11, var12, chat_parser::s_subj, var10->Deref(), var13, var8->Deref(), var5->Deref(), var9->Deref(), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_int_det_6::exec_static);
	}

	Operation chat_parser::pred_whq_8::exec_pred_whq_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s_np, Data::F(chat_parser::s3, chat_parser::posint3, var2->Deref()), Data::F(chat_parser::s_wh, { var1->Deref() }), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_int_pron_5::exec_static);
	}

	Operation chat_parser::pred_int_det_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_det_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_det_6__1(mach));
	}

	Operation chat_parser::pred_int_det_6::exec_pred_int_det_6__1(Prolog* mach) {
		mach->FillAlternative(pred_int_det_6::exec_pred_int_det_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_whose_6::exec_static);
	}

	Operation chat_parser::pred_int_det_6::exec_pred_int_det_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_int_art_6::exec_static);
	}

	Operation chat_parser::pred_gen_marker_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_gen_marker_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_gen_marker_4__1(mach));
	}

	Operation chat_parser::pred_gen_marker_4::exec_pred_gen_marker_4__1(Prolog* mach) {
		mach->FillAlternative(pred_gen_marker_4::exec_pred_gen_marker_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_gen_marker;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_gen_marker_4::exec_pred_gen_marker_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s404;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var5;
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var6;
		local_aregs[5] = Data::F(chat_parser::s_an_s, { var5->Deref(), var2->Deref(), var6->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_whose_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_whose_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_whose_6__1(mach));
	}

	Operation chat_parser::pred_whose_6::exec_pred_whose_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np_head0, Data::F(chat_parser::s_wh, { var1->Deref() }), var2->Deref(), chat_parser::s_proper), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, chat_parser::s_gen_marker, var6))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_whose;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_question_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_question_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_question_7__1(mach));
	}

	Operation chat_parser::pred_question_7::exec_pred_question_7__1(Prolog* mach) {
		mach->FillAlternative(pred_question_7::exec_pred_question_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(chat_parser::s_role, chat_parser::s_subj, var8, var2->Deref(), Data::F(chat_parser::s_s, { var3->Deref(), var9, var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_subj_question_1::exec_static);
	}

	Operation chat_parser::pred_question_7::exec_pred_question_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var8;
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var9;
		local_aregs[6] = Data::F(chat_parser::s_s, { var3->Deref(), var10, var8->Deref(), var5->Deref(), var9->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_fronted_verb_6::exec_static);
	}

	Operation chat_parser::pred_det_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_det_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_det_7__1(mach));
	}

	Operation chat_parser::pred_det_7::exec_pred_det_7__1(Prolog* mach) {
		mach->FillAlternative(pred_det_7::exec_pred_det_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_det, { var1->Deref(), var2->Deref(), var3->Deref() });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_det_7::exec_pred_det_7__2(Prolog* mach) {
		mach->FillAlternative(pred_det_7::exec_pred_det_7__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_det, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = Data::F(chat_parser::s_det, { var8->Deref(), var2->Deref(), var1->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_det_7::exec_pred_det_7__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_generic))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_generic))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_art_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_art_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_art_6__1(mach));
	}

	Operation chat_parser::pred_int_art_6::exec_pred_int_art_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_det, var6, var2->Deref(), chat_parser::s_def), var7)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_int_art_7::exec_static);
	}

	Operation chat_parser::pred_subj_question_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_subj_question_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_subj_question_1__1(mach));
	}

	Operation chat_parser::pred_subj_question_1::exec_pred_subj_question_1__1(Prolog* mach) {
		mach->FillAlternative(pred_subj_question_1::exec_pred_subj_question_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_subj_question_1::exec_pred_subj_question_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_yn_question_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_yn_question_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_yn_question_5__1(mach));
	}

	Operation chat_parser::pred_yn_question_5::exec_pred_yn_question_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_q, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_nil;
		local_aregs[1] = var6;
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var8;
		local_aregs[6] = Data::F(chat_parser::s_s, { var1->Deref(), var9, var7->Deref(), var3->Deref(), var8->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_fronted_verb_6::exec_static);
	}

	Operation chat_parser::pred_verb_form_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_form_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_form_8__1(mach));
	}

	Operation chat_parser::pred_verb_form_8::exec_pred_verb_form_8__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_8::exec_pred_verb_form_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_verb_form, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var7->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_verb_form_8::exec_pred_verb_form_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var9;
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var7->Deref();
		local_aregs[4] = var8->Deref();
		local_aregs[5] = Data::F(chat_parser::s_verb_form, { var9->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_neg_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_neg_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_neg_6__1(mach));
	}

	Operation chat_parser::pred_neg_6::exec_pred_neg_6__1(Prolog* mach) {
		mach->FillAlternative(pred_neg_6::exec_pred_neg_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_neg, { var1->Deref(), var2->Deref() });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_neg_6::exec_pred_neg_6__2(Prolog* mach) {
		mach->FillAlternative(pred_neg_6::exec_pred_neg_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::s_aux, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_neg))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_not;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_neg_6::exec_pred_neg_6__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_pos))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_fronted_verb_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_fronted_verb_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_fronted_verb_6__1(mach));
	}

	Operation chat_parser::pred_fronted_verb_6::exec_pred_fronted_verb_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_verb_form, var6, var7, var8, var9), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_neg, var10, var11), var12))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6->Deref();
		local_aregs[1] = var7->Deref();
		local_aregs[2] = var8->Deref();
		local_aregs[3] = var13;
		local_aregs[4] = var3->Deref();
		local_aregs[5] = var14;
		local_aregs[6] = var5->Deref();
		local_aregs[7] = var15;
		local_aregs[8] = Data::F(chat_parser::s_verb_type, { var6->Deref(), Data::F(chat_parser::s3, chat_parser::s_aux, var16), Data::F(chat_parser::s_role, { var1->Deref(), var9->Deref(), var2->Deref(), Data::F(chat_parser::s_neg, var17, var11->Deref(), var14->Deref(), var4->Deref(), var15->Deref(), var12->Deref(), continuation) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_imperative_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_imperative_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_imperative_5__1(mach));
	}

	Operation chat_parser::pred_imperative_5::exec_pred_imperative_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_imp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var6;
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = Data::F(chat_parser::s_s, { var1->Deref(), var8, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_imperative_verb_4::exec_static);
	}

	Operation chat_parser::pred_imperative_verb_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_imperative_verb_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_imperative_verb_4__1(mach));
	}

	Operation chat_parser::pred_imperative_verb_4::exec_pred_imperative_verb_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_terminal, chat_parser::s_you, Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_verb_form, var4, Data::F(chat_parser::s3, chat_parser::s_imp, chat_parser::s_fin), Data::F(chat_parser::s3, chat_parser::posint2, chat_parser::s_sin), chat_parser::s_main), var5))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = chat_parser::s_inf;
		local_aregs[2] = var6;
		local_aregs[3] = var7;
		local_aregs[4] = var1->Deref();
		local_aregs[5] = var2->Deref();
		local_aregs[6] = var3->Deref();
		local_aregs[7] = var5->Deref();
		local_aregs[8] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_s_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_s_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_s_6__1(mach));
	}

	Operation chat_parser::pred_s_6::exec_pred_s_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var23 = Data::V(mach);
		Var* var22 = Data::V(mach);
		Var* var21 = Data::V(mach);
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_s, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var10;
		local_aregs[2] = var11;
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var12;
		local_aregs[5] = var8->Deref();
		local_aregs[6] = var13;
		local_aregs[7] = Data::F(chat_parser::s_verb, { var2->Deref(), var10->Deref(), var11->Deref(), var14, var12->Deref(), var15, var13->Deref(), var16, Data::F(chat_parser::s_empty, var17, Data::F(chat_parser::s_s_all, var18, Data::F(chat_parser::s_verb_args, { var11->Deref(), var14->Deref(), var3->Deref(), var17->Deref(), var19, var15->Deref(), var20, var16->Deref(), var21, Data::F(chat_parser::s_minus, { var18->Deref(), var19->Deref(), var22, Data::F(chat_parser::s_myplus, { var18->Deref(), var19->Deref(), var23, Data::F(chat_parser::s_verb_mods, { var4->Deref(), var22->Deref(), var23->Deref(), var5->Deref(), var20->Deref(), var7->Deref(), var21->Deref(), var9->Deref(), continuation }) }) }) }))) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_subj_7::exec_static);
	}

	Operation chat_parser::pred_subj_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_subj_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_subj_7__1(mach));
	}

	Operation chat_parser::pred_subj_7::exec_pred_subj_7__1(Prolog* mach) {
		mach->FillAlternative(pred_subj_7::exec_pred_subj_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_there))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, var2, chat_parser::s_be)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_there;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_subj_7::exec_pred_subj_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = Data::F(chat_parser::s_subj_case, var9, Data::F(chat_parser::s_np, { var1->Deref(), var2->Deref(), var9->Deref(), var10, chat_parser::s_subj, var8->Deref(), var11, var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_s_all_1::exec_static);
	}

	Operation chat_parser::pred_np_head_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_head_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_head_9__1(mach));
	}

	Operation chat_parser::pred_np_head_9::exec_pred_np_head_9__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var10;
		local_aregs[1] = var11;
		local_aregs[2] = var12;
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var13;
		local_aregs[5] = var8->Deref();
		local_aregs[6] = var14;
		local_aregs[7] = Data::F(chat_parser::s_possessive, { var10->Deref(), var11->Deref(), var12->Deref(), var15, var15->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), var14->Deref(), var9->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_np_head0_7::exec_static);
	}

	Operation chat_parser::pred_np_head0_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_head0_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_head0_7__1(mach));
	}

	Operation chat_parser::pred_np_head0_7::exec_pred_np_head0_7__1(Prolog* mach) {
		mach->FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_np_head0, { var1->Deref(), var2->Deref(), var3->Deref() });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_np_head0_7::exec_pred_np_head0_7__2(Prolog* mach) {
		mach->FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_name, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_def, chat_parser::s_proper)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_name_5::exec_static);
	}

	Operation chat_parser::pred_np_head0_7::exec_pred_np_head0_7__3(Prolog* mach) {
		mach->FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_np_head, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, var5, chat_parser::s_common)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var10;
		local_aregs[5] = var8->Deref();
		local_aregs[6] = var11;
		local_aregs[7] = Data::F(chat_parser::s_adjs, { var2->Deref(), var10->Deref(), var12, var11->Deref(), var13, Data::F(chat_parser::s_noun, { var3->Deref(), var4->Deref(), var12->Deref(), var7->Deref(), var13->Deref(), var9->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_determiner_7::exec_static);
	}

	Operation chat_parser::pred_np_head0_7::exec_pred_np_head0_7__4(Prolog* mach) {
		mach->FillAlternative(pred_np_head0_7::exec_pred_np_head0_7__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_def, chat_parser::s_proper)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, chat_parser::s_gen_marker, var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_poss_pron_6::exec_static);
	}

	Operation chat_parser::pred_np_head0_7::exec_pred_np_head0_7__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_np_head, var1, Const::Nil, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_indef, chat_parser::s_common)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_quantifier_pron_6::exec_static);
	}

	Operation chat_parser::pred_np_compls_10::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_compls_10::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
		std::vector<Term*> aregs = mach->RegPull(10);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_compls_10__1(mach));
	}

	Operation chat_parser::pred_np_compls_10::exec_pred_np_compls_10__1(Prolog* mach) {
		mach->FillAlternative(pred_np_compls_10::exec_pred_np_compls_10__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_proper))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var6->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_empty_1::exec_static);
	}

	Operation chat_parser::pred_np_compls_10::exec_pred_np_compls_10__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_common))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var10;
		local_aregs[1] = Data::F(chat_parser::s_np_mods, { var1->Deref(), var2->Deref(), var11, var3->Deref(), var4->Deref(), var12, var10->Deref(), var13, var6->Deref(), var14, var8->Deref(), var15, Data::F(chat_parser::s_relative, { var1->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var5->Deref(), var14->Deref(), var7->Deref(), var15->Deref(), var9->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_np_all_1::exec_static);
	}

	Operation chat_parser::pred_possessive_14::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_possessive_14::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12],mach.Areg[13],mach.Areg[14]} ;*/
		std::vector<Term*> aregs = mach->RegPull(14);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_possessive_14__1(mach));
	}

	Operation chat_parser::pred_possessive_14::exec_pred_possessive_14__1(Prolog* mach) {
		mach->FillAlternative(pred_possessive_14::exec_pred_possessive_14__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var21 = Data::V(mach);
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg11)->Unify(var11))) {
			return Prolog::Fail0;
		}
		if(!((areg12)->Unify(var12))) {
			return Prolog::Fail0;
		}
		if(!((areg13)->Unify(var13))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var10->Deref();
		local_aregs[1] = var14;
		local_aregs[2] = var12->Deref();
		local_aregs[3] = var15;
		local_aregs[4] = Data::F(chat_parser::s_np_head0, var16, var17, var18, var14->Deref(), var19, var15->Deref(), var20, Data::F(chat_parser::s_possessive, { var16->Deref(), var17->Deref(), var18->Deref(), var21, Data::F(chat_parser::s5, Data::F(chat_parser::s_pp, chat_parser::s_poss, Data::F(chat_parser::s_np, { var2->Deref(), var1->Deref(), var4->Deref() })), var21->Deref()), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), var19->Deref(), var11->Deref(), var20->Deref(), var13->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_gen_case_4::exec_static);
	}

	Operation chat_parser::pred_possessive_14::exec_pred_possessive_14__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg11)->Unify(var6->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg12)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg13)->Unify(var7->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[14] = local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_gen_case_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_gen_case_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_gen_case_4__1(mach));
	}

	Operation chat_parser::pred_gen_case_4::exec_pred_gen_case_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_terminal, chat_parser::s_the, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_gen_marker_4::exec_static);
	}

	Operation chat_parser::pred_an_s_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_an_s_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_an_s_4__1(mach));
	}

	Operation chat_parser::pred_an_s_4::exec_pred_an_s_4__1(Prolog* mach) {
		mach->FillAlternative(pred_an_s_4::exec_pred_an_s_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_s;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_an_s_4::exec_pred_an_s_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_determiner_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_determiner_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_determiner_7__1(mach));
	}

	Operation chat_parser::pred_determiner_7::exec_pred_determiner_7__1(Prolog* mach) {
		mach->FillAlternative(pred_determiner_7::exec_pred_determiner_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_det_7::exec_static);
	}

	Operation chat_parser::pred_determiner_7::exec_pred_determiner_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_quant_phrase_7::exec_static);
	}

	Operation chat_parser::pred_quant_phrase_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_quant_phrase_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_quant_phrase_7__1(mach));
	}

	Operation chat_parser::pred_quant_phrase_7::exec_pred_quant_phrase_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_quant, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var9;
		local_aregs[4] = var7->Deref();
		local_aregs[5] = var10;
		local_aregs[6] = Data::F(chat_parser::s_number, { var2->Deref(), var3->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_quant_6::exec_static);
	}

	Operation chat_parser::pred_quant_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_quant_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_quant_6__1(mach));
	}

	Operation chat_parser::pred_quant_6::exec_pred_quant_6__1(Prolog* mach) {
		mach->FillAlternative(pred_quant_6::exec_pred_quant_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var8;
		local_aregs[6] = Data::F(chat_parser::s_comp_adv, { var6->Deref(), var7->Deref(), var9, var8->Deref(), var10, Data::F(chat_parser::s404, chat_parser::s_than, var9->Deref(), var3->Deref(), var10->Deref(), var5->Deref(), continuation) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_neg_adv_6::exec_static);
	}

	Operation chat_parser::pred_quant_6::exec_pred_quant_6__2(Prolog* mach) {
		mach->FillAlternative(pred_quant_6::exec_pred_quant_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_at;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_sup_adv, var8, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), Data::F(chat_parser::s_sup_op, { var8->Deref(), var1->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_quant_6::exec_pred_quant_6__3(Prolog* mach) {
		mach->FillAlternative(pred_quant_6::exec_pred_quant_6__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_the))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_def))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_the;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_quant_6::exec_pred_quant_6__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_same))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_neg_adv_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_neg_adv_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_neg_adv_6__1(mach));
	}

	Operation chat_parser::pred_neg_adv_6::exec_pred_neg_adv_6__1(Prolog* mach) {
		mach->FillAlternative(pred_neg_adv_6::exec_pred_neg_adv_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_not, var1->Deref())))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_not;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_neg_adv_6::exec_pred_neg_adv_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_op_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sup_op_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sup_op_2__1(mach));
	}

	Operation chat_parser::pred_sup_op_2::exec_pred_sup_op_2__1(Prolog* mach) {
		mach->FillAlternative(pred_sup_op_2::exec_pred_sup_op_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_least))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_not, chat_parser::s_less)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_op_2::exec_pred_sup_op_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_most))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_not, chat_parser::s_more)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_np_mods_12::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_mods_12::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
		std::vector<Term*> aregs = mach->RegPull(12);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_mods_12__1(mach));
	}

	Operation chat_parser::pred_np_mods_12::exec_pred_np_mods_12__1(Prolog* mach) {
		mach->FillAlternative(pred_np_mods_12::exec_pred_np_mods_12__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s5, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var11))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var12))) {
			return Prolog::Fail0;
		}
		if(!((areg11)->Unify(var13))) {
			return Prolog::Fail0;
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
		local_aregs[9] = Data::F(chat_parser::s_trace1, var17, Data::F(chat_parser::s_myplus, { var17->Deref(), var14->Deref(), var18, Data::F(chat_parser::s_minus, { var6->Deref(), var18->Deref(), var19, Data::F(chat_parser::s_myplus, { var14->Deref(), var6->Deref(), var20, Data::F(chat_parser::s_np_mods, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var19->Deref(), var7->Deref(), var20->Deref(), var9->Deref(), var15->Deref(), var11->Deref(), var16->Deref(), var13->Deref(), continuation }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = nullptr;
		return static_cast<Operation>(pred_np_mod_9::exec_static);
	}

	Operation chat_parser::pred_np_mods_12::exec_pred_np_mods_12__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var6->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg11)->Unify(var7->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_np_mod_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_np_mod_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_np_mod_9__1(mach));
	}

	Operation chat_parser::pred_np_mod_9::exec_pred_np_mod_9__1(Prolog* mach) {
		mach->FillAlternative(pred_np_mod_9::exec_pred_np_mod_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
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
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = nullptr;
		return static_cast<Operation>(pred_pp_8::exec_static);
	}

	Operation chat_parser::pred_np_mod_9::exec_pred_np_mod_9__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
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
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = nullptr;
		return static_cast<Operation>(pred_reduced_relative_8::exec_static);
	}

	Operation chat_parser::pred_verb_mods_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_mods_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_mods_8__1(mach));
	}

	Operation chat_parser::pred_verb_mods_8::exec_pred_verb_mods_8__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_mods_8::exec_pred_verb_mods_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var10;
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = var8->Deref();
		local_aregs[6] = var12;
		local_aregs[7] = Data::F(chat_parser::s_trace1, var13, Data::F(chat_parser::s_myplus, { var13->Deref(), var10->Deref(), var14, Data::F(chat_parser::s_minus, { var3->Deref(), var14->Deref(), var15, Data::F(chat_parser::s_myplus, { var10->Deref(), var3->Deref(), var16, Data::F(chat_parser::s_verb_mods, { var2->Deref(), var15->Deref(), var16->Deref(), var5->Deref(), var11->Deref(), var7->Deref(), var12->Deref(), var9->Deref(), continuation }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_mod_7::exec_static);
	}

	Operation chat_parser::pred_verb_mods_8::exec_pred_verb_mods_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_mod_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_mod_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_mod_7__1(mach));
	}

	Operation chat_parser::pred_verb_mod_7::exec_pred_verb_mod_7__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_adv_phrase_7::exec_static);
	}

	Operation chat_parser::pred_verb_mod_7::exec_pred_verb_mod_7__2(Prolog* mach) {
		mach->FillAlternative(pred_verb_mod_7::exec_pred_verb_mod_7__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(chat_parser::s_adverb, { var1->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), Data::F(chat_parser::s_empty, { var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_adv_1::exec_static);
	}

	Operation chat_parser::pred_verb_mod_7::exec_pred_verb_mod_7__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = chat_parser::s_compl;
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = var6->Deref();
		local_aregs[7] = var7->Deref();
		local_aregs[8] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_pp_8::exec_static);
	}

	Operation chat_parser::pred_adjs_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adjs_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adjs_5__1(mach));
	}

	Operation chat_parser::pred_adjs_5::exec_pred_adjs_5__1(Prolog* mach) {
		mach->FillAlternative(pred_adjs_5::exec_pred_adjs_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var7;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var8;
		local_aregs[5] = Data::F(chat_parser::s_adjs, { var2->Deref(), var7->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_pre_adj_5::exec_static);
	}

	Operation chat_parser::pred_adjs_5::exec_pred_adjs_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pre_adj_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pre_adj_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pre_adj_5__1(mach));
	}

	Operation chat_parser::pred_pre_adj_5::exec_pred_pre_adj_5__1(Prolog* mach) {
		mach->FillAlternative(pred_pre_adj_5::exec_pred_pre_adj_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_adj_6::exec_static);
	}

	Operation chat_parser::pred_pre_adj_5::exec_pred_pre_adj_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sup_phrase_5::exec_static);
	}

	Operation chat_parser::pred_sup_phrase_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sup_phrase_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sup_phrase_5__1(mach));
	}

	Operation chat_parser::pred_sup_phrase_5::exec_pred_sup_phrase_5__1(Prolog* mach) {
		mach->FillAlternative(pred_sup_phrase_5::exec_pred_sup_phrase_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_sup, chat_parser::s_most, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sup_adj_5::exec_static);
	}

	Operation chat_parser::pred_sup_phrase_5::exec_pred_sup_phrase_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_sup, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var7;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var8;
		local_aregs[5] = Data::F(chat_parser::s_adj, chat_parser::s_quant, var2->Deref(), var7->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sup_adv_5::exec_static);
	}

	Operation chat_parser::pred_comp_phrase_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_comp_phrase_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_comp_phrase_6__1(mach));
	}

	Operation chat_parser::pred_comp_phrase_6::exec_pred_comp_phrase_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_comp, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var9;
		local_aregs[4] = var7->Deref();
		local_aregs[5] = var10;
		local_aregs[6] = Data::F(chat_parser::s_np_no_trace, var11, Data::F(chat_parser::s_prep_case, var12, Data::F(chat_parser::s_np, { var3->Deref(), var13, var12->Deref(), var14, chat_parser::s_compl, var11->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation })));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_comp_6::exec_static);
	}

	Operation chat_parser::pred_comp_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_comp_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_comp_6__1(mach));
	}

	Operation chat_parser::pred_comp_6::exec_pred_comp_6__1(Prolog* mach) {
		mach->FillAlternative(pred_comp_6::exec_pred_comp_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var7;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var8;
		local_aregs[5] = Data::F(chat_parser::s_adj, chat_parser::s_quant, var2->Deref(), var7->Deref(), var9, var8->Deref(), var10, Data::F(chat_parser::s404, chat_parser::s_than, var9->Deref(), var4->Deref(), var10->Deref(), var6->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_comp_adv_5::exec_static);
	}

	Operation chat_parser::pred_comp_6::exec_pred_comp_6__2(Prolog* mach) {
		mach->FillAlternative(pred_comp_6::exec_pred_comp_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_more))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s404, chat_parser::s_than, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_rel_adj_5::exec_static);
	}

	Operation chat_parser::pred_comp_6::exec_pred_comp_6__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_same))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_as;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s_adj, chat_parser::s_quant, var1->Deref(), var6->Deref(), var8, var7->Deref(), var9, Data::F(chat_parser::s404, chat_parser::s_as, var8->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_relative_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_relative_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_relative_9__1(mach));
	}

	Operation chat_parser::pred_relative_9::exec_pred_relative_9__1(Prolog* mach) {
		mach->FillAlternative(pred_relative_9::exec_pred_relative_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s5, var2, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(chat_parser::s_rel_conj, { var1->Deref(), var10, var2->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_pred_1::exec_static);
	}

	Operation chat_parser::pred_relative_9::exec_pred_relative_9__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_conj_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_conj_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_conj_8__1(mach));
	}

	Operation chat_parser::pred_rel_conj_8::exec_pred_rel_conj_8__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var9;
		local_aregs[2] = var10;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = var7->Deref();
		local_aregs[6] = var12;
		local_aregs[7] = Data::F(chat_parser::s_rel_rest, { var1->Deref(), var2->Deref(), var9->Deref(), var3->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_rel_7::exec_static);
	}

	Operation chat_parser::pred_rel_rest_10::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_rest_10::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
		std::vector<Term*> aregs = mach->RegPull(10);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_rest_10__1(mach));
	}

	Operation chat_parser::pred_rel_rest_10::exec_pred_rel_rest_10__1(Prolog* mach) {
		mach->FillAlternative(pred_rel_rest_10::exec_pred_rel_rest_10__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var10))) {
			return Prolog::Fail0;
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
		local_aregs[9] = Data::F(chat_parser::s_rel_conj, { var1->Deref(), var11->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = nullptr;
		return static_cast<Operation>(pred_conj_9::exec_static);
	}

	Operation chat_parser::pred_rel_rest_10::exec_pred_rel_rest_10__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var6->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_7__1(mach));
	}

	Operation chat_parser::pred_rel_7::exec_pred_rel_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_rel, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5->Deref();
		local_aregs[1] = var9;
		local_aregs[2] = var7->Deref();
		local_aregs[3] = var10;
		local_aregs[4] = Data::F(chat_parser::s_variable, { var1->Deref(), var2->Deref(), var9->Deref(), var11, var10->Deref(), var12, Data::F(chat_parser::s_s, { var3->Deref(), var13, var11->Deref(), var14, var12->Deref(), var15, Data::F(chat_parser::s_trace1, var16, Data::F(chat_parser::s_minus, { var13->Deref(), var16->Deref(), var4->Deref(), Data::F(chat_parser::s_close, { var14->Deref(), var6->Deref(), var15->Deref(), var8->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_myopen_4::exec_static);
	}

	Operation chat_parser::pred_variable_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_variable_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_variable_6__1(mach));
	}

	Operation chat_parser::pred_variable_6::exec_pred_variable_6__1(Prolog* mach) {
		mach->FillAlternative(pred_variable_6::exec_pred_variable_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, Data::F(chat_parser::s_np, { var1->Deref(), Data::F(chat_parser::s_wh, { var2->Deref() }), Const::Nil }), var1->Deref(), var6, var7, var8, var9, var10), var11)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_that;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var11->Deref();
		local_aregs[5] = Data::F(chat_parser::s_trace1, { var9->Deref(), var10->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_variable_6::exec_pred_variable_6__2(Prolog* mach) {
		mach->FillAlternative(pred_variable_6::exec_pred_variable_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, var6, var7, var8, var9, var10, var11, var12), var13)))) {
			return Prolog::Fail0;
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
		local_aregs[9] = Data::F(chat_parser::s_trace1, { var11->Deref(), var12->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_wh_9::exec_static);
	}

	Operation chat_parser::pred_variable_6::exec_pred_variable_6__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_pp, Data::F(chat_parser::s_pp, var6, var7), chat_parser::s_compl, var8, var9), var10)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var11;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var12;
		local_aregs[5] = Data::F(chat_parser::s_wh, { var2->Deref(), var1->Deref(), var7->Deref(), var13, var14, var11->Deref(), var4->Deref(), var12->Deref(), var10->Deref(), Data::F(chat_parser::s_trace1, { var8->Deref(), var9->Deref(), Data::F(chat_parser::s_compl_case, { var14->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_prep_5::exec_static);
	}

	Operation chat_parser::pred_wh_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_wh_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_wh_9__1(mach));
	}

	Operation chat_parser::pred_wh_9::exec_pred_wh_9__1(Prolog* mach) {
		mach->FillAlternative(pred_wh_9::exec_pred_wh_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s_np, { var2->Deref(), Data::F(chat_parser::s_wh, { var1->Deref() }), Const::Nil })))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = Data::F(chat_parser::s_role, { var8->Deref(), chat_parser::s_decl, var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_rel_pron_5::exec_static);
	}

	Operation chat_parser::pred_wh_9::exec_pred_wh_9__2(Prolog* mach) {
		mach->FillAlternative(pred_wh_9::exec_pred_wh_9__3);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s_np, var3, var4, Data::F(chat_parser::s5, Data::F(chat_parser::s_pp, var5, var6), Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var11))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(chat_parser::s3, var12, chat_parser::s_common);
		local_aregs[3] = var8->Deref();
		local_aregs[4] = var13;
		local_aregs[5] = var10->Deref();
		local_aregs[6] = var14;
		local_aregs[7] = Data::F(chat_parser::s_prep, { var5->Deref(), var13->Deref(), var15, var14->Deref(), var16, Data::F(chat_parser::s_wh, { var1->Deref(), var2->Deref(), var6->Deref(), var17, var18, var15->Deref(), var9->Deref(), var16->Deref(), var11->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_np_head0_7::exec_static);
	}

	Operation chat_parser::pred_wh_9::exec_pred_wh_9__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var10;
		local_aregs[4] = var8->Deref();
		local_aregs[5] = var11;
		local_aregs[6] = Data::F(chat_parser::s_s_all, var12, Data::F(chat_parser::s_np, { var3->Deref(), var4->Deref(), var5->Deref(), chat_parser::s_def, chat_parser::s_subj, var12->Deref(), var13, var10->Deref(), var7->Deref(), var11->Deref(), var9->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_whose_6::exec_static);
	}

	Operation chat_parser::pred_reduced_relative_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_reduced_relative_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_reduced_relative_8__1(mach));
	}

	Operation chat_parser::pred_reduced_relative_8::exec_pred_reduced_relative_8__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(chat_parser::s_reduced_rel_conj, { var1->Deref(), var9, var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_pred_1::exec_static);
	}

	Operation chat_parser::pred_reduced_rel_conj_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_reduced_rel_conj_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_reduced_rel_conj_8__1(mach));
	}

	Operation chat_parser::pred_reduced_rel_conj_8::exec_pred_reduced_rel_conj_8__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var9;
		local_aregs[2] = var10;
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = var7->Deref();
		local_aregs[6] = var12;
		local_aregs[7] = Data::F(chat_parser::s_reduced_rel_rest, { var1->Deref(), var2->Deref(), var9->Deref(), var3->Deref(), var10->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_reduced_rel_7::exec_static);
	}

	Operation chat_parser::pred_reduced_rel_rest_10::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_reduced_rel_rest_10::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
		std::vector<Term*> aregs = mach->RegPull(10);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_reduced_rel_rest_10__1(mach));
	}

	Operation chat_parser::pred_reduced_rel_rest_10::exec_pred_reduced_rel_rest_10__1(Prolog* mach) {
		mach->FillAlternative(pred_reduced_rel_rest_10::exec_pred_reduced_rel_rest_10__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var10))) {
			return Prolog::Fail0;
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
		local_aregs[9] = Data::F(chat_parser::s_reduced_rel_conj, { var1->Deref(), var11->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = nullptr;
		return static_cast<Operation>(pred_conj_9::exec_static);
	}

	Operation chat_parser::pred_reduced_rel_rest_10::exec_pred_reduced_rel_rest_10__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var6->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_reduced_rel_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_reduced_rel_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_reduced_rel_7__1(mach));
	}

	Operation chat_parser::pred_reduced_rel_7::exec_pred_reduced_rel_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_reduced_rel, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5->Deref();
		local_aregs[1] = var9;
		local_aregs[2] = var7->Deref();
		local_aregs[3] = var10;
		local_aregs[4] = Data::F(chat_parser::s_reduced_wh, { var1->Deref(), var2->Deref(), var9->Deref(), var11, var10->Deref(), var12, Data::F(chat_parser::s_s, { var3->Deref(), var13, var11->Deref(), var14, var12->Deref(), var15, Data::F(chat_parser::s_trace1, var16, Data::F(chat_parser::s_minus, { var13->Deref(), var16->Deref(), var4->Deref(), Data::F(chat_parser::s_close, { var14->Deref(), var6->Deref(), var15->Deref(), var8->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_myopen_4::exec_static);
	}

	Operation chat_parser::pred_reduced_wh_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_reduced_wh_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_reduced_wh_6__1(mach));
	}

	Operation chat_parser::pred_reduced_wh_6::exec_pred_reduced_wh_6__1(Prolog* mach) {
		mach->FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, Data::F(chat_parser::s_np, { var1->Deref(), Data::F(chat_parser::s_wh, { var2->Deref() }), Const::Nil }), var1->Deref(), var6, var7, var8, var9, var10), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_verb_form, chat_parser::s_be, Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin), var1->Deref(), chat_parser::s_main), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_neg, var11, var12), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_predicate, { var12->Deref(), var13, var14 }), var15))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var16;
		local_aregs[1] = var12->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var17;
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var18;
		local_aregs[6] = Data::F(chat_parser::s_predicate, { var12->Deref(), var13->Deref(), var14->Deref(), var17->Deref(), var4->Deref(), var18->Deref(), var15->Deref(), Data::F(chat_parser::s_trace1, { var9->Deref(), var10->Deref(), Data::F(chat_parser::s_subj_case, { var6->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_neg_6::exec_static);
	}

	Operation chat_parser::pred_reduced_wh_6::exec_pred_reduced_wh_6__2(Prolog* mach) {
		mach->FillAlternative(pred_reduced_wh_6::exec_pred_reduced_wh_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, Data::F(chat_parser::s_np, { var1->Deref(), Data::F(chat_parser::s_wh, { var2->Deref() }), Const::Nil }), var1->Deref(), var6, var7, var8, var9, var10), Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_verb, var11, var12, var13, var14), var15))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var11->Deref();
		local_aregs[1] = var13->Deref();
		local_aregs[2] = var14->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = var15->Deref();
		local_aregs[7] = Data::F(chat_parser::s_trace1, { var9->Deref(), var10->Deref(), Data::F(chat_parser::s_subj_case, { var6->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_participle_7::exec_static);
	}

	Operation chat_parser::pred_reduced_wh_6::exec_pred_reduced_wh_6__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var21 = Data::V(mach);
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(chat_parser::s_x, chat_parser::s_nogap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, var6, var7, var8, var9, var10, var11, var12), Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, Data::F(chat_parser::s_np, Data::F(chat_parser::s_np, { var1->Deref(), Data::F(chat_parser::s_wh, { var2->Deref() }), Const::Nil }), var1->Deref(), var13, var14, var15, var16, var17), var18))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var19;
		local_aregs[1] = Data::F(chat_parser::s_subj_case, { var8->Deref(), Data::F(chat_parser::s_verb_case, { var13->Deref(), Data::F(chat_parser::s_np, { var6->Deref(), var7->Deref(), var20, var9->Deref(), chat_parser::s_subj, var19->Deref(), var21, var3->Deref(), var4->Deref(), var5->Deref(), var18->Deref(), Data::F(chat_parser::s_trace1, { var11->Deref(), var12->Deref(), Data::F(chat_parser::s_trace1, { var16->Deref(), var17->Deref(), continuation }) }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_s_all_1::exec_static);
	}

	Operation chat_parser::pred_verb_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_8__1(mach));
	}

	Operation chat_parser::pred_verb_8::exec_pred_verb_8__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_8::exec_pred_verb_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(chat_parser::s_verb, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var7->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_verb_8::exec_pred_verb_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_verb, var1, var2, Data::F(chat_parser::s3, var3, chat_parser::s_fin), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var11))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var12;
		local_aregs[1] = Data::F(chat_parser::s3, { var3->Deref(), chat_parser::s_fin });
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var13;
		local_aregs[4] = var8->Deref();
		local_aregs[5] = var14;
		local_aregs[6] = var10->Deref();
		local_aregs[7] = var15;
		local_aregs[8] = Data::F(chat_parser::s_verb_type, { var12->Deref(), var16, Data::F(chat_parser::s_neg, { var16->Deref(), var5->Deref(), var14->Deref(), var17, var15->Deref(), var18, Data::F(chat_parser::s_rest_verb, { var13->Deref(), var12->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), var17->Deref(), var9->Deref(), var18->Deref(), var11->Deref(), Data::F(chat_parser::s_verb_type, { var1->Deref(), var7->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_rest_verb_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rest_verb_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rest_verb_9__1(mach));
	}

	Operation chat_parser::pred_rest_verb_9::exec_pred_rest_verb_9__1(Prolog* mach) {
		mach->FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_aux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s5, chat_parser::s_perf, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part);
		local_aregs[2] = var9;
		local_aregs[3] = var10;
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var11;
		local_aregs[6] = var6->Deref();
		local_aregs[7] = var12;
		local_aregs[8] = Data::F(chat_parser::s_have, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = nullptr;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_rest_verb_9::exec_pred_rest_verb_9__2(Prolog* mach) {
		mach->FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__3);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_aux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var9;
		local_aregs[2] = var10;
		local_aregs[3] = var11;
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var12;
		local_aregs[6] = var6->Deref();
		local_aregs[7] = var13;
		local_aregs[8] = Data::F(chat_parser::s_be, { var9->Deref(), var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = nullptr;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_rest_verb_9::exec_pred_rest_verb_9__3(Prolog* mach) {
		mach->FillAlternative(pred_rest_verb_9::exec_pred_rest_verb_9__4);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_aux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = chat_parser::s_inf;
		local_aregs[2] = var6;
		local_aregs[3] = var7;
		local_aregs[4] = var2->Deref();
		local_aregs[5] = var3->Deref();
		local_aregs[6] = var4->Deref();
		local_aregs[7] = var5->Deref();
		local_aregs[8] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = nullptr;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_rest_verb_9::exec_pred_rest_verb_9__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_main))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_have_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_have_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_have_8__1(mach));
	}

	Operation chat_parser::pred_have_8::exec_pred_have_8__1(Prolog* mach) {
		mach->FillAlternative(pred_have_8::exec_pred_have_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var9;
		local_aregs[2] = var10;
		local_aregs[3] = var11;
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var12;
		local_aregs[6] = var6->Deref();
		local_aregs[7] = var13;
		local_aregs[8] = Data::F(chat_parser::s_be, { var9->Deref(), var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var5->Deref(), var13->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_have_8::exec_pred_have_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_be_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_be_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_be_9__1(mach));
	}

	Operation chat_parser::pred_be_9::exec_pred_be_9__1(Prolog* mach) {
		mach->FillAlternative(pred_be_9::exec_pred_be_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_passive))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_be_9::exec_pred_be_9__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s5, chat_parser::s_prog, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_passive_7::exec_static);
	}

	Operation chat_parser::pred_passive_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_passive_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_passive_7__1(mach));
	}

	Operation chat_parser::pred_passive_7::exec_pred_passive_7__1(Prolog* mach) {
		mach->FillAlternative(pred_passive_7::exec_pred_passive_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_passive))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part);
		local_aregs[2] = var6;
		local_aregs[3] = var7;
		local_aregs[4] = var2->Deref();
		local_aregs[5] = var3->Deref();
		local_aregs[6] = var4->Deref();
		local_aregs[7] = var5->Deref();
		local_aregs[8] = Data::F(chat_parser::s_verb_type, { var1->Deref(), var8, Data::F(chat_parser::s_passive, { var8->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_8::exec_static);
	}

	Operation chat_parser::pred_passive_7::exec_pred_passive_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_participle_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_participle_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_participle_7__1(mach));
	}

	Operation chat_parser::pred_participle_7::exec_pred_participle_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_verb, var1, var2, chat_parser::s_inf, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var10;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var11;
		local_aregs[4] = var8->Deref();
		local_aregs[5] = var12;
		local_aregs[6] = Data::F(chat_parser::s_verb_form, { var1->Deref(), var13, var14, var15, var11->Deref(), var7->Deref(), var12->Deref(), var9->Deref(), Data::F(chat_parser::s_participle, { var13->Deref(), var2->Deref(), var3->Deref(), Data::F(chat_parser::s_verb_type, { var1->Deref(), var5->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = nullptr;
		return static_cast<Operation>(pred_neg_6::exec_static);
	}

	Operation chat_parser::pred_passive_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_passive_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_passive_1__1(mach));
	}

	Operation chat_parser::pred_passive_1::exec_pred_passive_1__1(Prolog* mach) {
		mach->FillAlternative(pred_passive_1::exec_pred_passive_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, var1, chat_parser::s_trans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_passive_1::exec_pred_passive_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, var1, chat_parser::s_ditrans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_participle_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_participle_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_participle_3__1(mach));
	}

	Operation chat_parser::pred_participle_3::exec_pred_participle_3__1(Prolog* mach) {
		mach->FillAlternative(pred_participle_3::exec_pred_participle_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, chat_parser::s_prog, Const::Nil)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_participle_3::exec_pred_participle_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_passive))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_close_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_close_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_close_4__1(mach));
	}

	Operation chat_parser::pred_close_4::exec_pred_close_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_close;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_virtual_3::exec_static);
	}

	Operation chat_parser::pred_myopen_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_myopen_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_myopen_4__1(mach));
	}

	Operation chat_parser::pred_myopen_4::exec_pred_myopen_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_x, chat_parser::s_gap, chat_parser::s_nonterminal, chat_parser::s_close, var2->Deref())))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_args_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_args_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_args_9__1(mach));
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var14 = Data::V(mach);
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var11;
		local_aregs[2] = var12;
		local_aregs[3] = var7->Deref();
		local_aregs[4] = var13;
		local_aregs[5] = var9->Deref();
		local_aregs[6] = var14;
		local_aregs[7] = Data::F(chat_parser::s_verb_args, { var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), var14->Deref(), var10->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_advs_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__2(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__3);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_trans))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, chat_parser::s_dir, var1), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_np;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_arg_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__3(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__4);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_ditrans))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_np;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var11;
		local_aregs[3] = var7->Deref();
		local_aregs[4] = var12;
		local_aregs[5] = var9->Deref();
		local_aregs[6] = var13;
		local_aregs[7] = Data::F(chat_parser::s_object, { var2->Deref(), var4->Deref(), var11->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), var13->Deref(), var10->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_arg_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__4(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__5);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, chat_parser::s_void, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_there;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__5(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__6);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, chat_parser::s_predicate, var2), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var9;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var7->Deref();
		local_aregs[6] = var8->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_pred_conj_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__6(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__7);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, chat_parser::s_dir, var2), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_np;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var7->Deref();
		local_aregs[6] = var8->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_arg_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__7(Prolog* mach) {
		mach->FillAlternative(pred_verb_args_9::exec_pred_verb_args_9__8);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_active))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, chat_parser::s_dir, var1), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_np;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_arg_7::exec_static);
	}

	Operation chat_parser::pred_verb_args_9::exec_pred_verb_args_9__8(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_no_args_1::exec_static);
	}

	Operation chat_parser::pred_object_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_object_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_object_8__1(mach));
	}

	Operation chat_parser::pred_object_8::exec_pred_object_8__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var9;
		local_aregs[1] = Data::F(chat_parser::s_minus, { var9->Deref(), var3->Deref(), var10, Data::F(chat_parser::s_advs, { var2->Deref(), var11, var10->Deref(), var5->Deref(), var12, var7->Deref(), var13, Data::F(chat_parser::s_obj, { var1->Deref(), var11->Deref(), var3->Deref(), var4->Deref(), var12->Deref(), var6->Deref(), var13->Deref(), var8->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_adv_1::exec_static);
	}

	Operation chat_parser::pred_obj_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_obj_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_obj_8__1(mach));
	}

	Operation chat_parser::pred_obj_8::exec_pred_obj_8__1(Prolog* mach) {
		mach->FillAlternative(pred_obj_8::exec_pred_obj_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_ind))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s5, Data::F(chat_parser::s_arg, chat_parser::s_dir, var1), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_np;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var7->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_verb_arg_7::exec_static);
	}

	Operation chat_parser::pred_obj_8::exec_pred_obj_8__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_dir))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pred_conj_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pred_conj_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pred_conj_7__1(mach));
	}

	Operation chat_parser::pred_pred_conj_7::exec_pred_pred_conj_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var9;
		local_aregs[2] = var10;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var11;
		local_aregs[5] = var6->Deref();
		local_aregs[6] = var12;
		local_aregs[7] = Data::F(chat_parser::s_pred_rest, { var1->Deref(), var9->Deref(), var2->Deref(), var10->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_predicate_7::exec_static);
	}

	Operation chat_parser::pred_pred_rest_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pred_rest_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pred_rest_9__1(mach));
	}

	Operation chat_parser::pred_pred_rest_9::exec_pred_pred_rest_9__1(Prolog* mach) {
		mach->FillAlternative(pred_pred_rest_9::exec_pred_pred_rest_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
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
		local_aregs[9] = Data::F(chat_parser::s_pred_conj, { var10->Deref(), var11->Deref(), var5->Deref(), var12->Deref(), var7->Deref(), var13->Deref(), var9->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_conj_9::exec_static);
	}

	Operation chat_parser::pred_pred_rest_9::exec_pred_pred_rest_9__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var5->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_arg_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_arg_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_arg_7__1(mach));
	}

	Operation chat_parser::pred_verb_arg_7::exec_pred_verb_arg_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_np))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = Data::F(chat_parser::s_verb_case, var8, Data::F(chat_parser::s_np, { var1->Deref(), var9, var8->Deref(), var10, chat_parser::s_compl, var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_s_all_1::exec_static);
	}

	Operation chat_parser::pred_advs_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_advs_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_advs_7__1(mach));
	}

	Operation chat_parser::pred_advs_7::exec_pred_advs_7__1(Prolog* mach) {
		mach->FillAlternative(pred_advs_7::exec_pred_advs_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = Data::F(chat_parser::s_adverb, { var1->Deref(), var5->Deref(), var9, var7->Deref(), var10, Data::F(chat_parser::s_advs, { var2->Deref(), var3->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), var10->Deref(), var8->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_is_adv_1::exec_static);
	}

	Operation chat_parser::pred_advs_7::exec_pred_advs_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_phrase_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adj_phrase_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adj_phrase_6__1(mach));
	}

	Operation chat_parser::pred_adj_phrase_6::exec_pred_adj_phrase_6__1(Prolog* mach) {
		mach->FillAlternative(pred_adj_phrase_6::exec_pred_adj_phrase_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = Data::F(chat_parser::s_empty, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_adj_6::exec_static);
	}

	Operation chat_parser::pred_adj_phrase_6::exec_pred_adj_phrase_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_comp_phrase_6::exec_static);
	}

	Operation chat_parser::pred_no_args_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_no_args_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_no_args_1__1(mach));
	}

	Operation chat_parser::pred_no_args_1::exec_pred_no_args_1__1(Prolog* mach) {
		mach->FillAlternative(pred_no_args_1::exec_pred_no_args_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_trans))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_no_args_1::exec_pred_no_args_1__2(Prolog* mach) {
		mach->FillAlternative(pred_no_args_1::exec_pred_no_args_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_ditrans))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_no_args_1::exec_pred_no_args_1__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_intrans))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_conj_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_conj_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_conj_9__1(mach));
	}

	Operation chat_parser::pred_conj_9::exec_pred_conj_9__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
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
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_conj, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_conj, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_conj, { var1->Deref(), var4->Deref(), var5->Deref() })))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = var8->Deref();
		local_aregs[6] = var9->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = nullptr;
		return static_cast<Operation>(pred_conj_7::exec_static);
	}

	Operation chat_parser::pred_noun_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_noun_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_noun_6__1(mach));
	}

	Operation chat_parser::pred_noun_6::exec_pred_noun_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = Data::F(chat_parser::s_noun_form, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_adj_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adj_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adj_6__1(mach));
	}

	Operation chat_parser::pred_adj_6::exec_pred_adj_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_adj, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = Data::F(chat_parser::s_adj, { var2->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_prep_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_prep_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_prep_5__1(mach));
	}

	Operation chat_parser::pred_prep_5::exec_pred_prep_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_prep, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_prep, { var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_rel_adj_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_adj_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_adj_5__1(mach));
	}

	Operation chat_parser::pred_rel_adj_5::exec_pred_rel_adj_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_adj, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_rel_adj, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_sup_adj_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sup_adj_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sup_adj_5__1(mach));
	}

	Operation chat_parser::pred_sup_adj_5::exec_pred_sup_adj_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_adj, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_sup_adj, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_comp_adv_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_comp_adv_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_comp_adv_5__1(mach));
	}

	Operation chat_parser::pred_comp_adv_5::exec_pred_comp_adv_5__1(Prolog* mach) {
		mach->FillAlternative(pred_comp_adv_5::exec_pred_comp_adv_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_less))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_less;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_comp_adv_5::exec_pred_comp_adv_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_more))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_more;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_sup_adv_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sup_adv_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sup_adv_5__1(mach));
	}

	Operation chat_parser::pred_sup_adv_5::exec_pred_sup_adv_5__1(Prolog* mach) {
		mach->FillAlternative(pred_sup_adv_5::exec_pred_sup_adv_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_least))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_least;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_sup_adv_5::exec_pred_sup_adv_5__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_most))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_most;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_rel_pron_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_pron_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_pron_5__1(mach));
	}

	Operation chat_parser::pred_rel_pron_5::exec_pred_rel_pron_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_rel_pron, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_name_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_name_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_name_5__1(mach));
	}

	Operation chat_parser::pred_name_5::exec_pred_name_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var6;
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = Data::F(chat_parser::s_terminal, { var1->Deref(), var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), Data::F(chat_parser::s_name, { var1->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_opt_the_4::exec_static);
	}

	Operation chat_parser::pred_int_art_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_art_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_art_7__1(mach));
	}

	Operation chat_parser::pred_int_art_7::exec_pred_int_art_7__1(Prolog* mach) {
		mach->FillAlternative(pred_int_art_7::exec_pred_int_art_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s_quant, chat_parser::s_same, Data::F(chat_parser::s_wh, { var1->Deref() }))))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_how;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var7;
		local_aregs[5] = Data::F(chat_parser::s404, chat_parser::s_many, var6->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_int_art_7::exec_pred_int_art_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = Data::F(chat_parser::s_int_art, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_int_pron_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_pron_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_pron_5__1(mach));
	}

	Operation chat_parser::pred_int_pron_5::exec_pred_int_pron_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_int_pron, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_adverb_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adverb_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adverb_5__1(mach));
	}

	Operation chat_parser::pred_adverb_5::exec_pred_adverb_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_adv, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_adverb, { var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_poss_pron_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_poss_pron_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poss_pron_6__1(mach));
	}

	Operation chat_parser::pred_poss_pron_6::exec_pred_poss_pron_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_pronoun, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = var6->Deref();
		local_aregs[4] = var7->Deref();
		local_aregs[5] = Data::F(chat_parser::s_poss_pron, { var8->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_pers_pron_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pers_pron_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pers_pron_7__1(mach));
	}

	Operation chat_parser::pred_pers_pron_7::exec_pred_pers_pron_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_pronoun, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var9;
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var6->Deref();
		local_aregs[3] = var7->Deref();
		local_aregs[4] = var8->Deref();
		local_aregs[5] = Data::F(chat_parser::s_pers_pron, { var9->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_quantifier_pron_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_quantifier_pron_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_quantifier_pron_6__1(mach));
	}

	Operation chat_parser::pred_quantifier_pron_6::exec_pred_quantifier_pron_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = Data::F(chat_parser::s_quantifier_pron, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_context_pron_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_context_pron_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_context_pron_6__1(mach));
	}

	Operation chat_parser::pred_context_pron_6::exec_pred_context_pron_6__1(Prolog* mach) {
		mach->FillAlternative(pred_context_pron_6::exec_pred_context_pron_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_in)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_place))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_where;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_context_pron_6::exec_pred_context_pron_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_at)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_time))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_when;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_number_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_number_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_number_6__1(mach));
	}

	Operation chat_parser::pred_number_6::exec_pred_number_6__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_nb, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = Data::F(chat_parser::s_number, { var7->Deref(), var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_terminator_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_terminator_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_terminator_5__1(mach));
	}

	Operation chat_parser::pred_terminator_5::exec_pred_terminator_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_terminator, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_opt_the_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_opt_the_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_opt_the_4__1(mach));
	}

	Operation chat_parser::pred_opt_the_4::exec_pred_opt_the_4__1(Prolog* mach) {
		mach->FillAlternative(pred_opt_the_4::exec_pred_opt_the_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_opt_the_4::exec_pred_opt_the_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s_the;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_5::exec_static);
	}

	Operation chat_parser::pred_conj_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_conj_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_conj_7__1(mach));
	}

	Operation chat_parser::pred_conj_7::exec_pred_conj_7__1(Prolog* mach) {
		mach->FillAlternative(pred_conj_7::exec_pred_conj_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_list))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_list))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::s4;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_conj_7::exec_pred_conj_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_list))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_end))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_conj, { var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = nullptr;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_loc_pred_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_loc_pred_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_loc_pred_5__1(mach));
	}

	Operation chat_parser::pred_loc_pred_5::exec_pred_loc_pred_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s_loc_pred, { var6->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_$007E_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_$007E_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_$007E_5__1(mach));
	}

	Operation chat_parser::pred_$007E_5::exec_pred_$007E_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = Data::F(chat_parser::s404, { var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminal_5::exec_static);
	}

	Operation chat_parser::pred_word_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_word_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_word_1__1(mach));
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__1(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$007E_1::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__2(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_conj_1::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__3(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_adverb_1::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__4(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sup_adj_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__5(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_rel_adj_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__6(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_adj_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__7(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_name_1::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__8(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_terminator_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__9(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = var5;
		local_aregs[5] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_pers_pron_5::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__10(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_poss_pron_4::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__11(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_rel_pron_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__12(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_verb_form_4::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__13(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_noun_form_3::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__14(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_prep_1::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__15(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_quantifier_pron_3::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__16(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_number_3::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__17(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_det_4::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__18(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_int_art_4::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__19(Prolog* mach) {
		mach->FillAlternative(pred_word_1::exec_pred_word_1__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_int_pron_2::exec_static);
	}

	Operation chat_parser::pred_word_1::exec_pred_word_1__20(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_loc_pred_2::exec_static);
	}

	Operation chat_parser::pred_$007E_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_$007E_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_$007E_1__1(mach));
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__1(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_how))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__2(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_whose))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__3(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_there))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__4(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_of))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__5(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s404))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__6(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__7(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_s))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__8(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_than))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__9(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_at))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__10(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_the))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__11(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_not))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__12(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_as))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__13(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_that))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__14(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_less))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__15(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_more))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__16(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_least))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__17(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_most))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__18(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_many))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__19(Prolog* mach) {
		mach->FillAlternative(pred_$007E_1::exec_pred_$007E_1__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_where))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_$007E_1::exec_pred_$007E_1__20(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_when))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_conj_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_conj_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_conj_1__1(mach));
	}

	Operation chat_parser::pred_conj_1::exec_pred_conj_1__1(Prolog* mach) {
		mach->FillAlternative(pred_conj_1::exec_pred_conj_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_and))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_conj_1::exec_pred_conj_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_or))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_pron_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_pron_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_pron_2__1(mach));
	}

	Operation chat_parser::pred_int_pron_2::exec_pred_int_pron_2__1(Prolog* mach) {
		mach->FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_what))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_pron_2::exec_pred_int_pron_2__2(Prolog* mach) {
		mach->FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_which))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_pron_2::exec_pred_int_pron_2__3(Prolog* mach) {
		mach->FillAlternative(pred_int_pron_2::exec_pred_int_pron_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_who))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_pron_2::exec_pred_int_pron_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_whom))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_art_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_int_art_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_int_art_4__1(mach));
	}

	Operation chat_parser::pred_int_art_4::exec_pred_int_art_4__1(Prolog* mach) {
		mach->FillAlternative(pred_int_art_4::exec_pred_int_art_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_what))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_int_det, { var1->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_int_art_4::exec_pred_int_art_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_which))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s_int_det, { var1->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_det_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_det_4__1(mach));
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__1(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_the))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s_the, { var1->Deref() })))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_def))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__2(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_a))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_a))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__3(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_an))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_a))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__4(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_every))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_every))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__5(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_some))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_some))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__6(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_any))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_any))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__7(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_all))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_all))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__8(Prolog* mach) {
		mach->FillAlternative(pred_det_4::exec_pred_det_4__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_each))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_each))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_det_4::exec_pred_det_4__9(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_no))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_no))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_indef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_number_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_number_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_number_3__1(mach));
	}

	Operation chat_parser::pred_number_3::exec_pred_number_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = Data::F(chat_parser::s_ag_number, { var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_tr_number_2::exec_static);
	}

	Operation chat_parser::pred_tr_number_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_tr_number_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_tr_number_2__1(mach));
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__1(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s_nb, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__2(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_one))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__3(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_two))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__4(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_three))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__5(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_four))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__6(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_five))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__7(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_six))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__8(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_seven))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__9(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_eight))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__10(Prolog* mach) {
		mach->FillAlternative(pred_tr_number_2::exec_pred_tr_number_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_nine))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_tr_number_2::exec_pred_tr_number_2__11(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_ten))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::posint10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_ag_number_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_ag_number_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_ag_number_2__1(mach));
	}

	Operation chat_parser::pred_ag_number_2::exec_pred_ag_number_2__1(Prolog* mach) {
		mach->FillAlternative(pred_ag_number_2::exec_pred_ag_number_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_ag_number_2::exec_pred_ag_number_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = chat_parser::posint1;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation chat_parser::pred_quantifier_pron_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_quantifier_pron_3__1(mach));
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__1(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_everybody))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_every))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__2(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_everyone))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_every))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__3(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_everything))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_every))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_thing))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__4(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_somebody))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_some))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__5(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_someone))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_some))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__6(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_something))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_some))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_thing))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__7(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_anybody))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_any))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__8(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_anyone))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_any))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__9(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_anything))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_any))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_thing))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__10(Prolog* mach) {
		mach->FillAlternative(pred_quantifier_pron_3::exec_pred_quantifier_pron_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_nobody))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_no))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_quantifier_pron_3::exec_pred_quantifier_pron_3__11(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_nothing))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_no))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_thing))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_prep_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_prep_1__1(mach));
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__1(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_as))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__2(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_at))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__3(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_of))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__4(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_to))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__5(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_by))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__6(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_with))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__7(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_in))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__8(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_on))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__9(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_from))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__10(Prolog* mach) {
		mach->FillAlternative(pred_prep_1::exec_pred_prep_1__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_into))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_prep_1::exec_pred_prep_1__11(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_through))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_form_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_noun_form_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_noun_form_3__1(mach));
	}

	Operation chat_parser::pred_noun_form_3::exec_pred_noun_form_3__1(Prolog* mach) {
		mach->FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_noun_plu_2::exec_static);
	}

	Operation chat_parser::pred_noun_form_3::exec_pred_noun_form_3__2(Prolog* mach) {
		mach->FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_noun_sin_1::exec_static);
	}

	Operation chat_parser::pred_noun_form_3::exec_pred_noun_form_3__3(Prolog* mach) {
		mach->FillAlternative(pred_noun_form_3::exec_pred_noun_form_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_proportion))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_proportion))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_form_3::exec_pred_noun_form_3__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_percentage))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_percentage))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_root_form_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_root_form_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_root_form_1__1(mach));
	}

	Operation chat_parser::pred_root_form_1::exec_pred_root_form_1__1(Prolog* mach) {
		mach->FillAlternative(pred_root_form_1::exec_pred_root_form_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::posint1, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_root_form_1::exec_pred_root_form_1__2(Prolog* mach) {
		mach->FillAlternative(pred_root_form_1::exec_pred_root_form_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::posint2, var1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_root_form_1::exec_pred_root_form_1__3(Prolog* mach) {
		mach->FillAlternative(pred_root_form_1::exec_pred_root_form_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::posint1, chat_parser::s_plu)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_root_form_1::exec_pred_root_form_1__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_plu)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_root_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_root_1__1(mach));
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__2(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__3(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__4(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__5(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__6(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__7(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__8(Prolog* mach) {
		mach->FillAlternative(pred_verb_root_1::exec_pred_verb_root_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_root_1::exec_pred_verb_root_1__9(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_regular_pres_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_regular_pres_1__1(mach));
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__1(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__2(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__3(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__4(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__5(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__6(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__7(Prolog* mach) {
		mach->FillAlternative(pred_regular_pres_1::exec_pred_regular_pres_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_pres_1::exec_pred_regular_pres_1__8(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_regular_past_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_regular_past_2__1(mach));
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__1(Prolog* mach) {
		mach->FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_had))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__2(Prolog* mach) {
		mach->FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_bordered))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__3(Prolog* mach) {
		mach->FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_contained))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__4(Prolog* mach) {
		mach->FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_drained))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__5(Prolog* mach) {
		mach->FillAlternative(pred_regular_past_2::exec_pred_regular_past_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_exceeded))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_regular_past_2::exec_pred_regular_past_2__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_flowed))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_pron_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_pron_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_pron_2__1(mach));
	}

	Operation chat_parser::pred_rel_pron_2::exec_pred_rel_pron_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_who))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_pron_2::exec_pred_rel_pron_2__2(Prolog* mach) {
		mach->FillAlternative(pred_rel_pron_2::exec_pred_rel_pron_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_whom))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_compl))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_pron_2::exec_pred_rel_pron_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_which))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_undef))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_poss_pron_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poss_pron_4__1(mach));
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__1(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_my))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__2(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_your))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__3(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_his))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_masc))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__4(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_her))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_fem))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__5(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_its))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_neut))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__6(Prolog* mach) {
		mach->FillAlternative(pred_poss_pron_4::exec_pred_poss_pron_4__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_our))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_poss_pron_4::exec_pred_poss_pron_4__7(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_their))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_pers_pron_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_pers_pron_5__1(mach));
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__1(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_i))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__2(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_you))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__3(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_he))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_masc))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__4(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_she))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_fem))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__5(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_it))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_neut))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__6(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_we))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__7(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_them))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(chat_parser::s_subj))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__8(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_me))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_compl, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__9(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_him))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_masc))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_compl, var1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__10(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_her))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_fem))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_sin))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_compl, var1)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__11(Prolog* mach) {
		mach->FillAlternative(pred_pers_pron_5::exec_pred_pers_pron_5__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_us))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_compl, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_pers_pron_5::exec_pred_pers_pron_5__12(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_them))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(chat_parser::s_plu))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(Data::F(chat_parser::s_compl, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_terminator_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_terminator_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_terminator_2__1(mach));
	}

	Operation chat_parser::pred_terminator_2::exec_pred_terminator_2__1(Prolog* mach) {
		mach->FillAlternative(pred_terminator_2::exec_pred_terminator_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s5))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_terminator_2::exec_pred_terminator_2__2(Prolog* mach) {
		mach->FillAlternative(pred_terminator_2::exec_pred_terminator_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s7))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_terminator_2::exec_pred_terminator_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_name_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_name_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_name_1__1(mach));
	}

	Operation chat_parser::pred_name_1::exec_pred_name_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_loc_pred_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_loc_pred_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_loc_pred_2__1(mach));
	}

	Operation chat_parser::pred_loc_pred_2::exec_pred_loc_pred_2__1(Prolog* mach) {
		mach->FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_east))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_eastof)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_loc_pred_2::exec_pred_loc_pred_2__2(Prolog* mach) {
		mach->FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_west))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_westof)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_loc_pred_2::exec_pred_loc_pred_2__3(Prolog* mach) {
		mach->FillAlternative(pred_loc_pred_2::exec_pred_loc_pred_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_north))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_northof)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_loc_pred_2::exec_pred_loc_pred_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_south))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s_prep, chat_parser::s_southof)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adj_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adj_2__1(mach));
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__1(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_minimum))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__2(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_maximum))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__3(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_average))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__4(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_total))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__5(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_african))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__6(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_american))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__7(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_asian))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__8(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_european))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_restr))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__9(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_great))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__10(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_big))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__11(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_small))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__12(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_large))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__13(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_old))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__14(Prolog* mach) {
		mach->FillAlternative(pred_adj_2::exec_pred_adj_2__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_new))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adj_2::exec_pred_adj_2__15(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_populous))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_quant))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_rel_adj_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rel_adj_2__1(mach));
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_greater))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_great))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__2(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_less))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_small))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__3(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_bigger))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_big))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__4(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_smaller))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_small))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__5(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_larger))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_large))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__6(Prolog* mach) {
		mach->FillAlternative(pred_rel_adj_2::exec_pred_rel_adj_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_older))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_old))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_rel_adj_2::exec_pred_rel_adj_2__7(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_newer))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_new))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_adj_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_sup_adj_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sup_adj_2__1(mach));
	}

	Operation chat_parser::pred_sup_adj_2::exec_pred_sup_adj_2__1(Prolog* mach) {
		mach->FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_biggest))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_big))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_adj_2::exec_pred_sup_adj_2__2(Prolog* mach) {
		mach->FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_smallest))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_small))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_adj_2::exec_pred_sup_adj_2__3(Prolog* mach) {
		mach->FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_largest))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_large))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_adj_2::exec_pred_sup_adj_2__4(Prolog* mach) {
		mach->FillAlternative(pred_sup_adj_2::exec_pred_sup_adj_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_oldest))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_old))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_sup_adj_2::exec_pred_sup_adj_2__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_newest))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_new))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_noun_sin_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_noun_sin_1__1(mach));
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__1(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_average))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__2(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_total))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__3(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_sum))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__4(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_degree))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__5(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_sqmile))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__6(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_ksqmile))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__7(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_thousand))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__8(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_million))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__9(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_time))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__10(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_place))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__11(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_area))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__12(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_capital))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__13(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_city))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__14(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_continent))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__15(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_country))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__16(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_latitude))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__17(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_longitude))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__18(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_ocean))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__19(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__20(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_population))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__21(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_region))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__22(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_river))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__23(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_sea))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__24(Prolog* mach) {
		mach->FillAlternative(pred_noun_sin_1::exec_pred_noun_sin_1__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_seamass))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_sin_1::exec_pred_noun_sin_1__25(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_number))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_noun_plu_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_noun_plu_2__1(mach));
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__1(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_averages))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_average))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__2(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_totals))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_total))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__3(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_sums))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sum))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__4(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_degrees))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_degree))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__5(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_sqmiles))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sqmile))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__6(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_ksqmiles))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_ksqmile))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__7(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_million))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_million))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__8(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_thousand))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_thousand))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__9(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_times))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_time))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__10(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_places))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_place))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__11(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_areas))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_area))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__12(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_capitals))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_capital))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__13(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_cities))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_city))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__14(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_continents))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_continent))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__15(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_countries))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_country))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__16(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_latitudes))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_latitude))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__17(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_longitudes))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_longitude))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__18(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_oceans))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_ocean))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__19(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_persons))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__20(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_people))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_person))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__21(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_populations))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_population))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__22(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_regions))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_region))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__23(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_rivers))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_river))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__24(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_seas))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_sea))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__25(Prolog* mach) {
		mach->FillAlternative(pred_noun_plu_2::exec_pred_noun_plu_2__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_seamasses))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_seamass))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_noun_plu_2::exec_pred_noun_plu_2__26(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_numbers))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_number))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_form_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_form_4__1(mach));
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(chat_parser::s_inf))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_verb_root_1::exec_static);
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__2(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(chat_parser::s_root_form, { var2->Deref(), Data::F(chat_parser::s_verb_root, { var1->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_regular_pres_1::exec_static);
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__3(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_regular_past_2::exec_static);
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__4(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_am))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint1, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__5(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_are))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint2, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__6(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_is))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__7(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_are))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, var1, chat_parser::s_plu)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__8(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_was))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint1, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__9(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_were))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint2, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__10(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_was))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__11(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_were))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, var1, chat_parser::s_plu)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__12(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_been))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__13(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_being))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__14(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_has))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__15(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_having))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__16(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_does))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__17(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_did))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__18(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_doing))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__19(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_done))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__20(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_flows))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__21(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_flowing))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__22(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_rises))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__23(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_rose))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__24(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_risen))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_past, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__25(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_borders))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__26(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__27);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_bordering))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__27(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__28);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_contains))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__28(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__29);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_containing))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__29(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__30);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_drains))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__30(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__31);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_draining))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__31(Prolog* mach) {
		mach->FillAlternative(pred_verb_form_4::exec_pred_verb_form_4__32);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_exceeds))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_fin)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(chat_parser::s3, chat_parser::posint3, chat_parser::s_sin)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_form_4::exec_pred_verb_form_4__32(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(chat_parser::s_exceeding))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(chat_parser::s3, chat_parser::s_pres, chat_parser::s_part)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_verb_type_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_verb_type_2__1(mach));
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__1(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_have))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_aux, chat_parser::s_have)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__2(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_be))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_aux, chat_parser::s_be)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__3(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_do))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_aux, chat_parser::s_ditrans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__4(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_rise))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_intrans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__5(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_border))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_trans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__6(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_contain))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_trans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__7(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_drain))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_intrans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__8(Prolog* mach) {
		mach->FillAlternative(pred_verb_type_2::exec_pred_verb_type_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_exceed))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_trans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_verb_type_2::exec_pred_verb_type_2__9(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_flow))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(chat_parser::s3, chat_parser::s_main, chat_parser::s_intrans)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adverb_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation chat_parser::pred_adverb_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_adverb_1__1(mach));
	}

	Operation chat_parser::pred_adverb_1::exec_pred_adverb_1__1(Prolog* mach) {
		mach->FillAlternative(pred_adverb_1::exec_pred_adverb_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_yesterday))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation chat_parser::pred_adverb_1::exec_pred_adverb_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(chat_parser::s_tomorrow))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}
}
