using namespace std;

#include "sxx_builtins_cafe.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../machine/builtins.h"

Const* sxx_builtins_cafe::s0 = Const::Intern("cut");
Const* sxx_builtins_cafe::s1 = Const::Intern("\n");
Const* sxx_builtins_cafe::s2 = Const::Intern(" ");
Const* sxx_builtins_cafe::s3 = Const::Intern(" **");
Const* sxx_builtins_cafe::s4 = Const::Intern(" - arg ");
Const* sxx_builtins_cafe::s5 = Const::Intern(" - can not ");
Const* sxx_builtins_cafe::s6 = Const::Intern(" :-");
Const* sxx_builtins_cafe::s7 = Const::Intern(" = ");
Const* sxx_builtins_cafe::s8 = Const::Intern(" ? ");
Const* sxx_builtins_cafe::s9 = Const::Intern(" does not exist");
Const* sxx_builtins_cafe::s10 = Const::Intern(" is breached");
Const* sxx_builtins_cafe::s11 = Const::Intern("!");
Const* sxx_builtins_cafe::s12 = Const::Intern("\"");
Const* sxx_builtins_cafe::s13 = Const::Intern("#");
Const* sxx_builtins_cafe::s14 = Const::Intern("$FINDALL");
Const* sxx_builtins_cafe::s15 = Const::Intern("$VAR");
Const* sxx_builtins_cafe::s16 = Const::Intern("$abs");
Const* sxx_builtins_cafe::s17 = Const::Intern("$acos");
Const* sxx_builtins_cafe::s18 = Const::Intern("$add_op");
Const* sxx_builtins_cafe::s19 = Const::Intern("$add_operators");
Const* sxx_builtins_cafe::s20 = Const::Intern("$after");
Const* sxx_builtins_cafe::s21 = Const::Intern("$arith_equal");
Const* sxx_builtins_cafe::s22 = Const::Intern("$arith_not_equal");
Const* sxx_builtins_cafe::s23 = Const::Intern("$asin");
Const* sxx_builtins_cafe::s24 = Const::Intern("$assert_consulted_clause");
Const* sxx_builtins_cafe::s25 = Const::Intern("$assert_consulted_import");
Const* sxx_builtins_cafe::s26 = Const::Intern("$assert_consulted_package");
Const* sxx_builtins_cafe::s27 = Const::Intern("$assert_leash");
Const* sxx_builtins_cafe::s28 = Const::Intern("$assert_spypoint");
Const* sxx_builtins_cafe::s29 = Const::Intern("$atan");
Const* sxx_builtins_cafe::s30 = Const::Intern("$atom_type");
Const* sxx_builtins_cafe::s31 = Const::Intern("$atom_type0");
Const* sxx_builtins_cafe::s32 = Const::Intern("$bagof");
Const* sxx_builtins_cafe::s33 = Const::Intern("$bagof_instances");
Const* sxx_builtins_cafe::s34 = Const::Intern("$bagof_instances0");
Const* sxx_builtins_cafe::s35 = Const::Intern("$before");
Const* sxx_builtins_cafe::s36 = Const::Intern("$begin_exception");
Const* sxx_builtins_cafe::s37 = Const::Intern("$begin_sync");
Const* sxx_builtins_cafe::s38 = Const::Intern("$bitwise_conj");
Const* sxx_builtins_cafe::s39 = Const::Intern("$bitwise_disj");
Const* sxx_builtins_cafe::s40 = Const::Intern("$bitwise_exclusive_or");
Const* sxx_builtins_cafe::s41 = Const::Intern("$bitwise_neg");
Const* sxx_builtins_cafe::s42 = Const::Intern("$builtin_append");
Const* sxx_builtins_cafe::s43 = Const::Intern("$builtin_member");
Const* sxx_builtins_cafe::s44 = Const::Intern("$builtin_memq");
Const* sxx_builtins_cafe::s45 = Const::Intern("$builtin_message");
Const* sxx_builtins_cafe::s46 = Const::Intern("$builtin_meta_predicates");
Const* sxx_builtins_cafe::s47 = Const::Intern("$builtin_set_diff");
Const* sxx_builtins_cafe::s48 = Const::Intern("$builtin_set_diff0");
Const* sxx_builtins_cafe::s49 = Const::Intern("$cafeteria");
Const* sxx_builtins_cafe::s50 = Const::Intern("$cafeteria_init");
Const* sxx_builtins_cafe::s51 = Const::Intern("$calc_indexing_key");
Const* sxx_builtins_cafe::s52 = Const::Intern("$calc_indexing_key0");
Const* sxx_builtins_cafe::s53 = Const::Intern("$call");
Const* sxx_builtins_cafe::s54 = Const::Intern("$call_closure");
Const* sxx_builtins_cafe::s55 = Const::Intern("$call_internal");
Const* sxx_builtins_cafe::s56 = Const::Intern("$catch_and_throw");
Const* sxx_builtins_cafe::s57 = Const::Intern("$ceil");
Const* sxx_builtins_cafe::s58 = Const::Intern("$check_procedure_permission");
Const* sxx_builtins_cafe::s59 = Const::Intern("$clause_internal");
Const* sxx_builtins_cafe::s60 = Const::Intern("$clause_internal0");
Const* sxx_builtins_cafe::s61 = Const::Intern("$clause_to_term");
Const* sxx_builtins_cafe::s62 = Const::Intern("$compare0");
Const* sxx_builtins_cafe::s63 = Const::Intern("$compiled_predicate");
Const* sxx_builtins_cafe::s64 = Const::Intern("$compiled_predicate_or_builtin");
Const* sxx_builtins_cafe::s65 = Const::Intern("$consult");
Const* sxx_builtins_cafe::s66 = Const::Intern("$consult_clause");
Const* sxx_builtins_cafe::s67 = Const::Intern("$consult_cls");
Const* sxx_builtins_cafe::s68 = Const::Intern("$consult_init");
Const* sxx_builtins_cafe::s69 = Const::Intern("$consult_preprocess");
Const* sxx_builtins_cafe::s70 = Const::Intern("$consulted_file");
Const* sxx_builtins_cafe::s71 = Const::Intern("$consulted_import");
Const* sxx_builtins_cafe::s72 = Const::Intern("$consulted_package");
Const* sxx_builtins_cafe::s73 = Const::Intern("$consulted_predicate");
Const* sxx_builtins_cafe::s74 = Const::Intern("$cos");
Const* sxx_builtins_cafe::s75 = Const::Intern("$current_leash");
Const* sxx_builtins_cafe::s76 = Const::Intern("$current_operator");
Const* sxx_builtins_cafe::s77 = Const::Intern("$current_spypoint");
Const* sxx_builtins_cafe::s78 = Const::Intern("$cut");
Const* sxx_builtins_cafe::s79 = Const::Intern("$dcg_concat");
Const* sxx_builtins_cafe::s80 = Const::Intern("$dcg_expansion");
Const* sxx_builtins_cafe::s81 = Const::Intern("$dcg_trans");
Const* sxx_builtins_cafe::s82 = Const::Intern("$dcg_trans0");
Const* sxx_builtins_cafe::s83 = Const::Intern("$dcg_translation");
Const* sxx_builtins_cafe::s84 = Const::Intern("$dcg_translation_atom");
Const* sxx_builtins_cafe::s85 = Const::Intern("$debug_option");
Const* sxx_builtins_cafe::s86 = Const::Intern("$defined_internal_database");
Const* sxx_builtins_cafe::s87 = Const::Intern("$degrees");
Const* sxx_builtins_cafe::s88 = Const::Intern("$end_exception");
Const* sxx_builtins_cafe::s89 = Const::Intern("$end_sync");
Const* sxx_builtins_cafe::s90 = Const::Intern("$equality_of_term");
Const* sxx_builtins_cafe::s91 = Const::Intern("$erase");
Const* sxx_builtins_cafe::s92 = Const::Intern("$erase_all");
Const* sxx_builtins_cafe::s93 = Const::Intern("$error_message");
Const* sxx_builtins_cafe::s94 = Const::Intern("$existential_variables_set");
Const* sxx_builtins_cafe::s95 = Const::Intern("$exp");
Const* sxx_builtins_cafe::s96 = Const::Intern("$fast_write");
Const* sxx_builtins_cafe::s97 = Const::Intern("$fast_writeq");
Const* sxx_builtins_cafe::s98 = Const::Intern("$findall");
Const* sxx_builtins_cafe::s99 = Const::Intern("$float");
Const* sxx_builtins_cafe::s100 = Const::Intern("$float_fractional_part");
Const* sxx_builtins_cafe::s101 = Const::Intern("$float_integer_part");
Const* sxx_builtins_cafe::s102 = Const::Intern("$float_quotient");
Const* sxx_builtins_cafe::s103 = Const::Intern("$floor");
Const* sxx_builtins_cafe::s104 = Const::Intern("$free_variables_set");
Const* sxx_builtins_cafe::s105 = Const::Intern("$gen_indexing_keys");
Const* sxx_builtins_cafe::s106 = Const::Intern("$gen_indexing_keys0");
Const* sxx_builtins_cafe::s107 = Const::Intern("$get_current_B");
Const* sxx_builtins_cafe::s108 = Const::Intern("$get_exception");
Const* sxx_builtins_cafe::s109 = Const::Intern("$get_hash_manager");
Const* sxx_builtins_cafe::s110 = Const::Intern("$get_indices");
Const* sxx_builtins_cafe::s111 = Const::Intern("$get_instances");
Const* sxx_builtins_cafe::s112 = Const::Intern("$get_prolog_impl_flag");
Const* sxx_builtins_cafe::s113 = Const::Intern("$get_stream_manager");
Const* sxx_builtins_cafe::s114 = Const::Intern("$give_an_answer");
Const* sxx_builtins_cafe::s115 = Const::Intern("$give_answers_with_prompt");
Const* sxx_builtins_cafe::s116 = Const::Intern("$greater_or_equal");
Const* sxx_builtins_cafe::s117 = Const::Intern("$greater_than");
Const* sxx_builtins_cafe::s118 = Const::Intern("$hash_adda");
Const* sxx_builtins_cafe::s119 = Const::Intern("$hash_adda_all");
Const* sxx_builtins_cafe::s120 = Const::Intern("$hash_addz");
Const* sxx_builtins_cafe::s121 = Const::Intern("$hash_addz_all");
Const* sxx_builtins_cafe::s122 = Const::Intern("$hash_remove_first");
Const* sxx_builtins_cafe::s123 = Const::Intern("$head_to_term");
Const* sxx_builtins_cafe::s124 = Const::Intern("$identical_or_cannot_unify");
Const* sxx_builtins_cafe::s125 = Const::Intern("$inequality_of_term");
Const* sxx_builtins_cafe::s126 = Const::Intern("$init");
Const* sxx_builtins_cafe::s127 = Const::Intern("$init_internal_database");
Const* sxx_builtins_cafe::s128 = Const::Intern("$insert");
Const* sxx_builtins_cafe::s129 = Const::Intern("$int_quotient");
Const* sxx_builtins_cafe::s130 = Const::Intern("$leap_flag");
Const* sxx_builtins_cafe::s131 = Const::Intern("$leash");
Const* sxx_builtins_cafe::s132 = Const::Intern("$leash_specifier");
Const* sxx_builtins_cafe::s133 = Const::Intern("$length");
Const* sxx_builtins_cafe::s134 = Const::Intern("$length0");
Const* sxx_builtins_cafe::s135 = Const::Intern("$less_or_equal");
Const* sxx_builtins_cafe::s136 = Const::Intern("$less_than");
Const* sxx_builtins_cafe::s137 = Const::Intern("$listing");
Const* sxx_builtins_cafe::s138 = Const::Intern("$listing_dynamic_clause");
Const* sxx_builtins_cafe::s139 = Const::Intern("$localize_args");
Const* sxx_builtins_cafe::s140 = Const::Intern("$localize_body");
Const* sxx_builtins_cafe::s141 = Const::Intern("$log");
Const* sxx_builtins_cafe::s142 = Const::Intern("$map_compare_op");
Const* sxx_builtins_cafe::s143 = Const::Intern("$match_type");
Const* sxx_builtins_cafe::s144 = Const::Intern("$max");
Const* sxx_builtins_cafe::s145 = Const::Intern("$mem_pair");
Const* sxx_builtins_cafe::s146 = Const::Intern("$member_in_reverse");
Const* sxx_builtins_cafe::s147 = Const::Intern("$meta_call");
Const* sxx_builtins_cafe::s148 = Const::Intern("$min");
Const* sxx_builtins_cafe::s149 = Const::Intern("$minus");
Const* sxx_builtins_cafe::s150 = Const::Intern("$mod");
Const* sxx_builtins_cafe::s151 = Const::Intern("$multi");
Const* sxx_builtins_cafe::s152 = Const::Intern("$new_indexing_hash");
Const* sxx_builtins_cafe::s153 = Const::Intern("$new_internal_database");
Const* sxx_builtins_cafe::s154 = Const::Intern("$none");
Const* sxx_builtins_cafe::s155 = Const::Intern("$not_after");
Const* sxx_builtins_cafe::s156 = Const::Intern("$not_before");
Const* sxx_builtins_cafe::s157 = Const::Intern("$not_unifiable");
Const* sxx_builtins_cafe::s158 = Const::Intern("$numbervars");
Const* sxx_builtins_cafe::s159 = Const::Intern("$numbervars_str");
Const* sxx_builtins_cafe::s160 = Const::Intern("$on_exception");
Const* sxx_builtins_cafe::s161 = Const::Intern("$op1");
Const* sxx_builtins_cafe::s162 = Const::Intern("$op2");
Const* sxx_builtins_cafe::s163 = Const::Intern("$op_atom_list");
Const* sxx_builtins_cafe::s164 = Const::Intern("$op_specifier");
Const* sxx_builtins_cafe::s165 = Const::Intern("$parse_tokens");
Const* sxx_builtins_cafe::s166 = Const::Intern("$parse_tokens1");
Const* sxx_builtins_cafe::s167 = Const::Intern("$parse_tokens2");
Const* sxx_builtins_cafe::s168 = Const::Intern("$parse_tokens_args");
Const* sxx_builtins_cafe::s169 = Const::Intern("$parse_tokens_args_rest");
Const* sxx_builtins_cafe::s170 = Const::Intern("$parse_tokens_before_op");
Const* sxx_builtins_cafe::s171 = Const::Intern("$parse_tokens_brace");
Const* sxx_builtins_cafe::s172 = Const::Intern("$parse_tokens_error");
Const* sxx_builtins_cafe::s173 = Const::Intern("$parse_tokens_error1");
Const* sxx_builtins_cafe::s174 = Const::Intern("$parse_tokens_error2");
Const* sxx_builtins_cafe::s175 = Const::Intern("$parse_tokens_expect");
Const* sxx_builtins_cafe::s176 = Const::Intern("$parse_tokens_is_post_in_op");
Const* sxx_builtins_cafe::s177 = Const::Intern("$parse_tokens_is_starter");
Const* sxx_builtins_cafe::s178 = Const::Intern("$parse_tokens_is_terminator");
Const* sxx_builtins_cafe::s179 = Const::Intern("$parse_tokens_list");
Const* sxx_builtins_cafe::s180 = Const::Intern("$parse_tokens_list_rest");
Const* sxx_builtins_cafe::s181 = Const::Intern("$parse_tokens_op");
Const* sxx_builtins_cafe::s182 = Const::Intern("$parse_tokens_peep_next");
Const* sxx_builtins_cafe::s183 = Const::Intern("$parse_tokens_post_in_ops");
Const* sxx_builtins_cafe::s184 = Const::Intern("$parse_tokens_post_in_type");
Const* sxx_builtins_cafe::s185 = Const::Intern("$parse_tokens_skip_spaces");
Const* sxx_builtins_cafe::s186 = Const::Intern("$parse_tokens_write_message");
Const* sxx_builtins_cafe::s187 = Const::Intern("$parse_tokens_write_string");
Const* sxx_builtins_cafe::s188 = Const::Intern("$plus");
Const* sxx_builtins_cafe::s189 = Const::Intern("$pow");
Const* sxx_builtins_cafe::s190 = Const::Intern("$print_an answer");
Const* sxx_builtins_cafe::s191 = Const::Intern("$print_stack_trace");
Const* sxx_builtins_cafe::s192 = Const::Intern("$process_order");
Const* sxx_builtins_cafe::s193 = Const::Intern("$prolog_file_name");
Const* sxx_builtins_cafe::s194 = Const::Intern("$prolog_impl_flag");
Const* sxx_builtins_cafe::s195 = Const::Intern("$radians");
Const* sxx_builtins_cafe::s196 = Const::Intern("$read_blocked");
Const* sxx_builtins_cafe::s197 = Const::Intern("$read_token0");
Const* sxx_builtins_cafe::s198 = Const::Intern("$read_token1");
Const* sxx_builtins_cafe::s199 = Const::Intern("$read_tokens");
Const* sxx_builtins_cafe::s200 = Const::Intern("$read_tokens1");
Const* sxx_builtins_cafe::s201 = Const::Intern("$read_tokens_until_fullstop");
Const* sxx_builtins_cafe::s202 = Const::Intern("$rehash_indexing");
Const* sxx_builtins_cafe::s203 = Const::Intern("$remove_index_all");
Const* sxx_builtins_cafe::s204 = Const::Intern("$retract_spypoint");
Const* sxx_builtins_cafe::s205 = Const::Intern("$rint");
Const* sxx_builtins_cafe::s206 = Const::Intern("$rm_redundant_vars");
Const* sxx_builtins_cafe::s207 = Const::Intern("$round");
Const* sxx_builtins_cafe::s208 = Const::Intern("$set_debug_flag");
Const* sxx_builtins_cafe::s209 = Const::Intern("$set_exception");
Const* sxx_builtins_cafe::s210 = Const::Intern("$set_prolog_flag0");
Const* sxx_builtins_cafe::s211 = Const::Intern("$set_prolog_impl_flag");
Const* sxx_builtins_cafe::s212 = Const::Intern("$shift_left");
Const* sxx_builtins_cafe::s213 = Const::Intern("$shift_right");
Const* sxx_builtins_cafe::s214 = Const::Intern("$show_debug_option");
Const* sxx_builtins_cafe::s215 = Const::Intern("$sign");
Const* sxx_builtins_cafe::s216 = Const::Intern("$sin");
Const* sxx_builtins_cafe::s217 = Const::Intern("$sqrt");
Const* sxx_builtins_cafe::s218 = Const::Intern("$statistics");
Const* sxx_builtins_cafe::s219 = Const::Intern("$statistics_mode");
Const* sxx_builtins_cafe::s220 = Const::Intern("$stream_property");
Const* sxx_builtins_cafe::s221 = Const::Intern("$stream_property_specifier");
Const* sxx_builtins_cafe::s222 = Const::Intern("$tan");
Const* sxx_builtins_cafe::s223 = Const::Intern("$term_hash");
Const* sxx_builtins_cafe::s224 = Const::Intern("$term_to_body");
Const* sxx_builtins_cafe::s225 = Const::Intern("$term_to_clause");
Const* sxx_builtins_cafe::s226 = Const::Intern("$term_to_head");
Const* sxx_builtins_cafe::s227 = Const::Intern("$term_to_predicateindicator");
Const* sxx_builtins_cafe::s228 = Const::Intern("$term_variant");
Const* sxx_builtins_cafe::s229 = Const::Intern("$tokens");
Const* sxx_builtins_cafe::s230 = Const::Intern("$toplvel_loop");
Const* sxx_builtins_cafe::s231 = Const::Intern("$trace_goal");
Const* sxx_builtins_cafe::s232 = Const::Intern("$trace_init");
Const* sxx_builtins_cafe::s233 = Const::Intern("$truncate");
Const* sxx_builtins_cafe::s234 = Const::Intern("$unify");
Const* sxx_builtins_cafe::s235 = Const::Intern("$unify_witness");
Const* sxx_builtins_cafe::s236 = Const::Intern("$update_indexing");
Const* sxx_builtins_cafe::s237 = Const::Intern("$update_indexing_hash");
Const* sxx_builtins_cafe::s238 = Const::Intern("$variables_set");
Const* sxx_builtins_cafe::s239 = Const::Intern("$variants_subset");
Const* sxx_builtins_cafe::s240 = Const::Intern("$witness");
Const* sxx_builtins_cafe::s241 = Const::Intern("$write_VAR");
Const* sxx_builtins_cafe::s242 = Const::Intern("$write_atom");
Const* sxx_builtins_cafe::s243 = Const::Intern("$write_dynamic_body");
Const* sxx_builtins_cafe::s244 = Const::Intern("$write_dynamic_clause");
Const* sxx_builtins_cafe::s245 = Const::Intern("$write_dynamic_head");
Const* sxx_builtins_cafe::s246 = Const::Intern("$write_goal");
Const* sxx_builtins_cafe::s247 = Const::Intern("$write_is_operator");
Const* sxx_builtins_cafe::s248 = Const::Intern("$write_op_type");
Const* sxx_builtins_cafe::s249 = Const::Intern("$write_space_if_needed");
Const* sxx_builtins_cafe::s250 = Const::Intern("$write_term");
Const* sxx_builtins_cafe::s251 = Const::Intern("$write_term0");
Const* sxx_builtins_cafe::s252 = Const::Intern("$write_term_args");
Const* sxx_builtins_cafe::s253 = Const::Intern("$write_term_infix_op");
Const* sxx_builtins_cafe::s254 = Const::Intern("$write_term_list_args");
Const* sxx_builtins_cafe::s255 = Const::Intern("$write_term_op");
Const* sxx_builtins_cafe::s256 = Const::Intern("$write_term_op1");
Const* sxx_builtins_cafe::s257 = Const::Intern("$write_toString");
Const* sxx_builtins_cafe::s258 = Const::Intern("(");
Const* sxx_builtins_cafe::s259 = Const::Intern(")");
Const* sxx_builtins_cafe::s260 = Const::Intern("*");
Const* sxx_builtins_cafe::s261 = Const::Intern("**");
Const* sxx_builtins_cafe::s262 = Const::Intern("** ");
Const* sxx_builtins_cafe::s263 = Const::Intern("** here **");
Const* sxx_builtins_cafe::s264 = Const::Intern("+");
Const* sxx_builtins_cafe::s265 = Const::Intern("+      spy this");
Const* sxx_builtins_cafe::s266 = Const::Intern(",");
Const* sxx_builtins_cafe::s267 = Const::Intern(", found ");
Const* sxx_builtins_cafe::s268 = Const::Intern("-");
Const* sxx_builtins_cafe::s269 = Const::Intern("-      nospy this");
Const* sxx_builtins_cafe::s270 = Const::Intern("-->");
Const* sxx_builtins_cafe::s271 = Const::Intern("->");
Const* sxx_builtins_cafe::s272 = Const::Intern(".");
Const* sxx_builtins_cafe::s273 = Const::Intern("...");
Const* sxx_builtins_cafe::s274 = Const::Intern(".pl");
Const* sxx_builtins_cafe::s275 = Const::Intern("/");
Const* sxx_builtins_cafe::s276 = Const::Intern("//");
Const* sxx_builtins_cafe::s277 = Const::Intern("/\\");
Const* sxx_builtins_cafe::s278 = Const::Intern(":");
Const* sxx_builtins_cafe::s279 = Const::Intern(": ");
Const* sxx_builtins_cafe::s280 = Const::Intern(": expected ");
Const* sxx_builtins_cafe::s281 = Const::Intern(": limit of ");
Const* sxx_builtins_cafe::s282 = Const::Intern(":-");
Const* sxx_builtins_cafe::s283 = Const::Intern(";");
Const* sxx_builtins_cafe::s284 = Const::Intern("<");
Const* sxx_builtins_cafe::s285 = Const::Intern("<<");
Const* sxx_builtins_cafe::s286 = Const::Intern("=");
Const* sxx_builtins_cafe::s287 = Const::Intern("=..");
Const* sxx_builtins_cafe::s288 = Const::Intern("=:=");
Const* sxx_builtins_cafe::s289 = Const::Intern("=<");
Const* sxx_builtins_cafe::s290 = Const::Intern("==");
Const* sxx_builtins_cafe::s291 = Const::Intern("=\\=");
Const* sxx_builtins_cafe::s292 = Const::Intern(">");
Const* sxx_builtins_cafe::s293 = Const::Intern(">=");
Const* sxx_builtins_cafe::s294 = Const::Intern(">>");
Const* sxx_builtins_cafe::s295 = Const::Intern("?");
Const* sxx_builtins_cafe::s296 = Const::Intern("?      help");
Const* sxx_builtins_cafe::s297 = Const::Intern("?-");
Const* sxx_builtins_cafe::s298 = Const::Intern("?=");
Const* sxx_builtins_cafe::s299 = Const::Intern("@<");
Const* sxx_builtins_cafe::s300 = Const::Intern("@=<");
Const* sxx_builtins_cafe::s301 = Const::Intern("@>");
Const* sxx_builtins_cafe::s302 = Const::Intern("@>=");
Const* sxx_builtins_cafe::s303 = Const::Intern("C");
Const* sxx_builtins_cafe::s304 = Const::Intern("Debuggin options:");
Const* sxx_builtins_cafe::s305 = Const::Intern("Execution aborted");
Const* sxx_builtins_cafe::s306 = Const::Intern("RET    creep");
Const* sxx_builtins_cafe::s307 = Const::Intern("TauMachine.builtin");
Const* sxx_builtins_cafe::s308 = Const::Intern("[");
Const* sxx_builtins_cafe::s309 = Const::Intern("[]");
Const* sxx_builtins_cafe::s310 = Const::Intern("\\");
Const* sxx_builtins_cafe::s311 = Const::Intern("\\+");
Const* sxx_builtins_cafe::s312 = Const::Intern("\\/");
Const* sxx_builtins_cafe::s313 = Const::Intern("\\=");
Const* sxx_builtins_cafe::s314 = Const::Intern("\\==");
Const* sxx_builtins_cafe::s315 = Const::Intern("]");
Const* sxx_builtins_cafe::s316 = Const::Intern("^");
Const* sxx_builtins_cafe::s317 = Const::Intern("_");
Const* sxx_builtins_cafe::s318 = Const::Intern("a");
Const* sxx_builtins_cafe::s319 = Const::Intern("a      abort");
Const* sxx_builtins_cafe::s320 = Const::Intern("abolish");
Const* sxx_builtins_cafe::s321 = Const::Intern("abort");
Const* sxx_builtins_cafe::s322 = Const::Intern("access");
Const* sxx_builtins_cafe::s323 = Const::Intern("added");
Const* sxx_builtins_cafe::s324 = Const::Intern("after");
Const* sxx_builtins_cafe::s325 = Const::Intern("alias");
Const* sxx_builtins_cafe::s326 = Const::Intern("all");
Const* sxx_builtins_cafe::s327 = Const::Intern("alpha");
Const* sxx_builtins_cafe::s328 = Const::Intern("already");
Const* sxx_builtins_cafe::s329 = Const::Intern("an");
Const* sxx_builtins_cafe::s330 = Const::Intern("arg");
Const* sxx_builtins_cafe::s331 = Const::Intern("arithequal");
Const* sxx_builtins_cafe::s332 = Const::Intern("assert");
Const* sxx_builtins_cafe::s333 = Const::Intern("asserta");
Const* sxx_builtins_cafe::s334 = Const::Intern("assertz");
Const* sxx_builtins_cafe::s335 = Const::Intern("atom");
Const* sxx_builtins_cafe::s336 = Const::Intern("atom_codes");
Const* sxx_builtins_cafe::s337 = Const::Intern("atom_concat");
Const* sxx_builtins_cafe::s338 = Const::Intern("atom_length");
Const* sxx_builtins_cafe::s339 = Const::Intern("atomic");
Const* sxx_builtins_cafe::s340 = Const::Intern("bagof");
Const* sxx_builtins_cafe::s341 = Const::Intern("block");
Const* sxx_builtins_cafe::s342 = Const::Intern("builtin_java_convert_args");
Const* sxx_builtins_cafe::s343 = Const::Intern("bye");
Const* sxx_builtins_cafe::s344 = Const::Intern("byte");
Const* sxx_builtins_cafe::s345 = Const::Intern("c      creep");
Const* sxx_builtins_cafe::s346 = Const::Intern("cafeteria");
Const* sxx_builtins_cafe::s347 = Const::Intern("call");
Const* sxx_builtins_cafe::s348 = Const::Intern("callable");
Const* sxx_builtins_cafe::s349 = Const::Intern("cannot");
Const* sxx_builtins_cafe::s350 = Const::Intern("catch");
Const* sxx_builtins_cafe::s351 = Const::Intern("changeable");
Const* sxx_builtins_cafe::s352 = Const::Intern("char");
Const* sxx_builtins_cafe::s353 = Const::Intern("character");
Const* sxx_builtins_cafe::s354 = Const::Intern("chars");
Const* sxx_builtins_cafe::s355 = Const::Intern("choice");
Const* sxx_builtins_cafe::s356 = Const::Intern("clause");
Const* sxx_builtins_cafe::s357 = Const::Intern("close");
Const* sxx_builtins_cafe::s358 = Const::Intern("closure");
Const* sxx_builtins_cafe::s359 = Const::Intern("codes");
Const* sxx_builtins_cafe::s360 = Const::Intern("com.googlecode.prolog_cafe.lang.HashtableOfTerm");
Const* sxx_builtins_cafe::s361 = Const::Intern("compare");
Const* sxx_builtins_cafe::s362 = Const::Intern("compound");
Const* sxx_builtins_cafe::s363 = Const::Intern("constant");
Const* sxx_builtins_cafe::s364 = Const::Intern("consult");
Const* sxx_builtins_cafe::s365 = Const::Intern("consult_stream");
Const* sxx_builtins_cafe::s366 = Const::Intern("consulted");
Const* sxx_builtins_cafe::s367 = Const::Intern("consulting");
Const* sxx_builtins_cafe::s368 = Const::Intern("context");
Const* sxx_builtins_cafe::s369 = Const::Intern("copy_term");
Const* sxx_builtins_cafe::s370 = Const::Intern("current_input");
Const* sxx_builtins_cafe::s371 = Const::Intern("current_op");
Const* sxx_builtins_cafe::s372 = Const::Intern("current_output");
Const* sxx_builtins_cafe::s373 = Const::Intern("current_prolog_flag");
Const* sxx_builtins_cafe::s374 = Const::Intern("cut");
Const* sxx_builtins_cafe::s375 = Const::Intern("database");
Const* sxx_builtins_cafe::s376 = Const::Intern("debug");
Const* sxx_builtins_cafe::s377 = Const::Intern("domain");
Const* sxx_builtins_cafe::s378 = Const::Intern("domain_error");
Const* sxx_builtins_cafe::s379 = Const::Intern("double_quotes");
Const* sxx_builtins_cafe::s380 = Const::Intern("dynamic");
Const* sxx_builtins_cafe::s381 = Const::Intern("end_of_file");
Const* sxx_builtins_cafe::s382 = Const::Intern("error");
Const* sxx_builtins_cafe::s383 = Const::Intern("evaluation");
Const* sxx_builtins_cafe::s384 = Const::Intern("evaluation_error");
Const* sxx_builtins_cafe::s385 = Const::Intern("existence");
Const* sxx_builtins_cafe::s386 = Const::Intern("existence_error");
Const* sxx_builtins_cafe::s387 = Const::Intern("exit");
Const* sxx_builtins_cafe::s388 = Const::Intern("expand_term");
Const* sxx_builtins_cafe::s389 = Const::Intern("expected");
Const* sxx_builtins_cafe::s390 = Const::Intern("expression");
Const* sxx_builtins_cafe::s391 = Const::Intern("fail");
Const* sxx_builtins_cafe::s392 = Const::Intern("false");
Const* sxx_builtins_cafe::s393 = Const::Intern("file_name");
Const* sxx_builtins_cafe::s394 = Const::Intern("findall");
Const* sxx_builtins_cafe::s395 = Const::Intern("flag");
Const* sxx_builtins_cafe::s396 = Const::Intern("flag_value");
Const* sxx_builtins_cafe::s397 = Const::Intern("float");
Const* sxx_builtins_cafe::s398 = Const::Intern("flush_output");
Const* sxx_builtins_cafe::s399 = Const::Intern("for");
Const* sxx_builtins_cafe::s400 = Const::Intern("freeze");
Const* sxx_builtins_cafe::s401 = Const::Intern("functor");
Const* sxx_builtins_cafe::s402 = Const::Intern("fx");
Const* sxx_builtins_cafe::s403 = Const::Intern("fy");
Const* sxx_builtins_cafe::s404 = Const::Intern("get");
Const* sxx_builtins_cafe::s405 = Const::Intern("get0");
Const* sxx_builtins_cafe::s406 = Const::Intern("get_byte");
Const* sxx_builtins_cafe::s407 = Const::Intern("get_char");
Const* sxx_builtins_cafe::s408 = Const::Intern("get_code");
Const* sxx_builtins_cafe::s409 = Const::Intern("ground");
Const* sxx_builtins_cafe::s410 = Const::Intern("h      help");
Const* sxx_builtins_cafe::s411 = Const::Intern("halt");
Const* sxx_builtins_cafe::s412 = Const::Intern("hash");
Const* sxx_builtins_cafe::s413 = Const::Intern("hash_contains_key");
Const* sxx_builtins_cafe::s414 = Const::Intern("hash_exists");
Const* sxx_builtins_cafe::s415 = Const::Intern("hash_get");
Const* sxx_builtins_cafe::s416 = Const::Intern("hash_keys");
Const* sxx_builtins_cafe::s417 = Const::Intern("hash_map");
Const* sxx_builtins_cafe::s418 = Const::Intern("hash_or_alias");
Const* sxx_builtins_cafe::s419 = Const::Intern("hash_put");
Const* sxx_builtins_cafe::s420 = Const::Intern("hash_remove");
Const* sxx_builtins_cafe::s421 = Const::Intern("if");
Const* sxx_builtins_cafe::s422 = Const::Intern("ifdef");
Const* sxx_builtins_cafe::s423 = Const::Intern("ifndef");
Const* sxx_builtins_cafe::s424 = Const::Intern("ignore_ops");
Const* sxx_builtins_cafe::s425 = Const::Intern("illarg");
Const* sxx_builtins_cafe::s426 = Const::Intern("import");
Const* sxx_builtins_cafe::s427 = Const::Intern("in_byte");
Const* sxx_builtins_cafe::s428 = Const::Intern("in_character");
Const* sxx_builtins_cafe::s429 = Const::Intern("include");
Const* sxx_builtins_cafe::s430 = Const::Intern("include_resource");
Const* sxx_builtins_cafe::s431 = Const::Intern("infix");
Const* sxx_builtins_cafe::s432 = Const::Intern("info");
Const* sxx_builtins_cafe::s433 = Const::Intern("initialization");
Const* sxx_builtins_cafe::s434 = Const::Intern("input");
Const* sxx_builtins_cafe::s435 = Const::Intern("instantiation_error");
Const* sxx_builtins_cafe::s436 = Const::Intern("integer");
Const* sxx_builtins_cafe::s437 = Const::Intern("internal");
Const* sxx_builtins_cafe::s438 = Const::Intern("internal_error");
Const* sxx_builtins_cafe::s439 = Const::Intern("interpret");
Const* sxx_builtins_cafe::s440 = Const::Intern("is");
Const* sxx_builtins_cafe::s441 = Const::Intern("java");
Const* sxx_builtins_cafe::s442 = Const::Intern("java.io.PrintWriter");
Const* sxx_builtins_cafe::s443 = Const::Intern("java.io.PushbackReader");
Const* sxx_builtins_cafe::s444 = Const::Intern("java_constructor");
Const* sxx_builtins_cafe::s445 = Const::Intern("java_constructor0");
Const* sxx_builtins_cafe::s446 = Const::Intern("java_conversion");
Const* sxx_builtins_cafe::s447 = Const::Intern("java_declared_constructor");
Const* sxx_builtins_cafe::s448 = Const::Intern("java_declared_constructor0");
Const* sxx_builtins_cafe::s449 = Const::Intern("java_declared_method");
Const* sxx_builtins_cafe::s450 = Const::Intern("java_declared_method0");
Const* sxx_builtins_cafe::s451 = Const::Intern("java_error");
Const* sxx_builtins_cafe::s452 = Const::Intern("java_get_declared_field");
Const* sxx_builtins_cafe::s453 = Const::Intern("java_get_declared_field0");
Const* sxx_builtins_cafe::s454 = Const::Intern("java_get_field");
Const* sxx_builtins_cafe::s455 = Const::Intern("java_get_field0");
Const* sxx_builtins_cafe::s456 = Const::Intern("java_method");
Const* sxx_builtins_cafe::s457 = Const::Intern("java_method0");
Const* sxx_builtins_cafe::s458 = Const::Intern("java_set_declared_field");
Const* sxx_builtins_cafe::s459 = Const::Intern("java_set_declared_field0");
Const* sxx_builtins_cafe::s460 = Const::Intern("java_set_field");
Const* sxx_builtins_cafe::s461 = Const::Intern("java_set_field0");
Const* sxx_builtins_cafe::s462 = Const::Intern("l      leap");
Const* sxx_builtins_cafe::s463 = Const::Intern("leap");
Const* sxx_builtins_cafe::s464 = Const::Intern("leash");
Const* sxx_builtins_cafe::s465 = Const::Intern("leash_specifier");
Const* sxx_builtins_cafe::s466 = Const::Intern("leashing");
Const* sxx_builtins_cafe::s467 = Const::Intern("length");
Const* sxx_builtins_cafe::s468 = Const::Intern("lis");
Const* sxx_builtins_cafe::s469 = Const::Intern("list");
Const* sxx_builtins_cafe::s470 = Const::Intern("listing");
Const* sxx_builtins_cafe::s471 = Const::Intern("long");
Const* sxx_builtins_cafe::s472 = Const::Intern("matching");
Const* sxx_builtins_cafe::s473 = Const::Intern("max_arity");
Const* sxx_builtins_cafe::s474 = Const::Intern("max_integer");
Const* sxx_builtins_cafe::s475 = Const::Intern("meta_predicate");
Const* sxx_builtins_cafe::s476 = Const::Intern("min_integer");
Const* sxx_builtins_cafe::s477 = Const::Intern("mod");
Const* sxx_builtins_cafe::s478 = Const::Intern("mode");
Const* sxx_builtins_cafe::s479 = Const::Intern("modify");
Const* sxx_builtins_cafe::s480 = Const::Intern("module");
Const* sxx_builtins_cafe::s481 = Const::Intern("msec");
Const* sxx_builtins_cafe::s482 = Const::Intern("multifile");
Const* sxx_builtins_cafe::s483 = Const::Intern("mutex_lock_bt");
Const* sxx_builtins_cafe::s484 = Const::Intern("mutex_unlock");
Const* sxx_builtins_cafe::s485 = Const::Intern("name");
Const* sxx_builtins_cafe::s486 = Const::Intern("new_hash");
Const* sxx_builtins_cafe::s487 = Const::Intern("nl");
Const* sxx_builtins_cafe::s488 = Const::Intern("no");
Const* sxx_builtins_cafe::s489 = Const::Intern("nodebug");
Const* sxx_builtins_cafe::s490 = Const::Intern("nonvar");
Const* sxx_builtins_cafe::s491 = Const::Intern("nospy");
Const* sxx_builtins_cafe::s492 = Const::Intern("nospyall");
Const* sxx_builtins_cafe::s493 = Const::Intern("not");
Const* sxx_builtins_cafe::s494 = Const::Intern("notrace");
Const* sxx_builtins_cafe::s495 = Const::Intern("number");
Const* sxx_builtins_cafe::s496 = Const::Intern("number_codes");
Const* sxx_builtins_cafe::s497 = Const::Intern("numbervars");
Const* sxx_builtins_cafe::s498 = Const::Intern("off");
Const* sxx_builtins_cafe::s499 = Const::Intern("on");
Const* sxx_builtins_cafe::s500 = Const::Intern("on_exception");
Const* sxx_builtins_cafe::s501 = Const::Intern("on_load_sxx_builtins_cafe");
Const* sxx_builtins_cafe::s502 = Const::Intern("once");
Const* sxx_builtins_cafe::s503 = Const::Intern("op");
Const* sxx_builtins_cafe::s504 = Const::Intern("open");
Const* sxx_builtins_cafe::s505 = Const::Intern("operator");
Const* sxx_builtins_cafe::s506 = Const::Intern("or");
Const* sxx_builtins_cafe::s507 = Const::Intern("other");
Const* sxx_builtins_cafe::s508 = Const::Intern("otherwise");
Const* sxx_builtins_cafe::s509 = Const::Intern("output");
Const* sxx_builtins_cafe::s510 = Const::Intern("package");
Const* sxx_builtins_cafe::s511 = Const::Intern("parse_tokens");
Const* sxx_builtins_cafe::s512 = Const::Intern("peek_byte");
Const* sxx_builtins_cafe::s513 = Const::Intern("peek_char");
Const* sxx_builtins_cafe::s514 = Const::Intern("peek_code");
Const* sxx_builtins_cafe::s515 = Const::Intern("permission");
Const* sxx_builtins_cafe::s516 = Const::Intern("permission_error");
Const* sxx_builtins_cafe::s517 = Const::Intern("phrase");
Const* sxx_builtins_cafe::s518 = Const::Intern("postfix");
Const* sxx_builtins_cafe::s519 = Const::Intern("predicate");
Const* sxx_builtins_cafe::s520 = Const::Intern("predicate_indicator");
Const* sxx_builtins_cafe::s521 = Const::Intern("prefix");
Const* sxx_builtins_cafe::s522 = Const::Intern("print_message");
Const* sxx_builtins_cafe::s523 = Const::Intern("print_procedure_box");
Const* sxx_builtins_cafe::s524 = Const::Intern("print_stack_trace");
Const* sxx_builtins_cafe::s525 = Const::Intern("private_procedure");
Const* sxx_builtins_cafe::s526 = Const::Intern("prolog_flag");
Const* sxx_builtins_cafe::s527 = Const::Intern("public");
Const* sxx_builtins_cafe::s528 = Const::Intern("punct");
Const* sxx_builtins_cafe::s529 = Const::Intern("put");
Const* sxx_builtins_cafe::s530 = Const::Intern("put_byte");
Const* sxx_builtins_cafe::s531 = Const::Intern("put_char");
Const* sxx_builtins_cafe::s532 = Const::Intern("put_code");
Const* sxx_builtins_cafe::s533 = Const::Intern("quoted");
Const* sxx_builtins_cafe::s534 = Const::Intern("raise_exception");
Const* sxx_builtins_cafe::s535 = Const::Intern("read");
Const* sxx_builtins_cafe::s536 = Const::Intern("read_line");
Const* sxx_builtins_cafe::s537 = Const::Intern("read_token");
Const* sxx_builtins_cafe::s538 = Const::Intern("read_tokens");
Const* sxx_builtins_cafe::s539 = Const::Intern("read_with_variables");
Const* sxx_builtins_cafe::s540 = Const::Intern("redo");
Const* sxx_builtins_cafe::s541 = Const::Intern("redo_procedure_box");
Const* sxx_builtins_cafe::s542 = Const::Intern("regex_compile");
Const* sxx_builtins_cafe::s543 = Const::Intern("regex_list");
Const* sxx_builtins_cafe::s544 = Const::Intern("regex_match");
Const* sxx_builtins_cafe::s545 = Const::Intern("regex_matches");
Const* sxx_builtins_cafe::s546 = Const::Intern("rem");
Const* sxx_builtins_cafe::s547 = Const::Intern("removed");
Const* sxx_builtins_cafe::s548 = Const::Intern("repeat");
Const* sxx_builtins_cafe::s549 = Const::Intern("representation");
Const* sxx_builtins_cafe::s550 = Const::Intern("representation_error");
Const* sxx_builtins_cafe::s551 = Const::Intern("retract");
Const* sxx_builtins_cafe::s552 = Const::Intern("retractall");
Const* sxx_builtins_cafe::s553 = Const::Intern("reverse");
Const* sxx_builtins_cafe::s554 = Const::Intern("runtime");
Const* sxx_builtins_cafe::s555 = Const::Intern("set_prolog_flag");
Const* sxx_builtins_cafe::s556 = Const::Intern("setof");
Const* sxx_builtins_cafe::s557 = Const::Intern("skip");
Const* sxx_builtins_cafe::s558 = Const::Intern("smallerorequal");
Const* sxx_builtins_cafe::s559 = Const::Intern("smallerthan");
Const* sxx_builtins_cafe::s560 = Const::Intern("sort");
Const* sxx_builtins_cafe::s561 = Const::Intern("spy");
Const* sxx_builtins_cafe::s562 = Const::Intern("spypoint");
Const* sxx_builtins_cafe::s563 = Const::Intern("start");
Const* sxx_builtins_cafe::s564 = Const::Intern("static_procedure");
Const* sxx_builtins_cafe::s565 = Const::Intern("statistics");
Const* sxx_builtins_cafe::s566 = Const::Intern("stopping");
Const* sxx_builtins_cafe::s567 = Const::Intern("str");
Const* sxx_builtins_cafe::s568 = Const::Intern("stream");
Const* sxx_builtins_cafe::s569 = Const::Intern("stream_or_alias");
Const* sxx_builtins_cafe::s570 = Const::Intern("stream_property");
Const* sxx_builtins_cafe::s571 = Const::Intern("string");
Const* sxx_builtins_cafe::s572 = Const::Intern("sub_atom");
Const* sxx_builtins_cafe::s573 = Const::Intern("symbol");
Const* sxx_builtins_cafe::s574 = Const::Intern("synchronized");
Const* sxx_builtins_cafe::s575 = Const::Intern("syntax");
Const* sxx_builtins_cafe::s576 = Const::Intern("syntax_error");
Const* sxx_builtins_cafe::s577 = Const::Intern("system");
Const* sxx_builtins_cafe::s578 = Const::Intern("system_error");
Const* sxx_builtins_cafe::s579 = Const::Intern("system_predicate");
Const* sxx_builtins_cafe::s580 = Const::Intern("tab");
Const* sxx_builtins_cafe::s581 = Const::Intern("term");
Const* sxx_builtins_cafe::s582 = Const::Intern("termequal");
Const* sxx_builtins_cafe::s583 = Const::Intern("termgreaterequal");
Const* sxx_builtins_cafe::s584 = Const::Intern("termgreaterthan");
Const* sxx_builtins_cafe::s585 = Const::Intern("termsmallerequal");
Const* sxx_builtins_cafe::s586 = Const::Intern("termsmallerthan");
Const* sxx_builtins_cafe::s587 = Const::Intern("throw");
Const* sxx_builtins_cafe::s588 = Const::Intern("trace");
Const* sxx_builtins_cafe::s589 = Const::Intern("trail");
Const* sxx_builtins_cafe::s590 = Const::Intern("true");
Const* sxx_builtins_cafe::s591 = Const::Intern("type");
Const* sxx_builtins_cafe::s592 = Const::Intern("type_error");
Const* sxx_builtins_cafe::s593 = Const::Intern("unify");
Const* sxx_builtins_cafe::s594 = Const::Intern("unknown");
Const* sxx_builtins_cafe::s595 = Const::Intern("user");
Const* sxx_builtins_cafe::s596 = Const::Intern("user_error");
Const* sxx_builtins_cafe::s597 = Const::Intern("var");
Const* sxx_builtins_cafe::s598 = Const::Intern("variable");
Const* sxx_builtins_cafe::s599 = Const::Intern("warning");
Const* sxx_builtins_cafe::s600 = Const::Intern("with_mutex");
Const* sxx_builtins_cafe::s601 = Const::Intern("write");
Const* sxx_builtins_cafe::s602 = Const::Intern("write_canonical");
Const* sxx_builtins_cafe::s603 = Const::Intern("write_term");
Const* sxx_builtins_cafe::s604 = Const::Intern("writeq");
Const* sxx_builtins_cafe::s605 = Const::Intern("xf");
Const* sxx_builtins_cafe::s606 = Const::Intern("xfx");
Const* sxx_builtins_cafe::s607 = Const::Intern("xfy");
Const* sxx_builtins_cafe::s608 = Const::Intern("yes");
Const* sxx_builtins_cafe::s609 = Const::Intern("yf");
Const* sxx_builtins_cafe::s610 = Const::Intern("yfx");
Const* sxx_builtins_cafe::s611 = Const::Intern("z");
Const* sxx_builtins_cafe::s612 = Const::Intern("{");
Const* sxx_builtins_cafe::s613 = Const::Intern("{DOMAIN ERROR: ");
Const* sxx_builtins_cafe::s614 = Const::Intern("{EVALUATION ERROR: ");
Const* sxx_builtins_cafe::s615 = Const::Intern("{EXISTENCE ERROR: ");
Const* sxx_builtins_cafe::s616 = Const::Intern("{INSTANTIATION ERROR: ");
Const* sxx_builtins_cafe::s617 = Const::Intern("{INTERNAL ERROR: ");
Const* sxx_builtins_cafe::s618 = Const::Intern("{JAVA ERROR: ");
Const* sxx_builtins_cafe::s619 = Const::Intern("{PERMISSION ERROR: ");
Const* sxx_builtins_cafe::s620 = Const::Intern("{REPRESENTATION ERROR: ");
Const* sxx_builtins_cafe::s621 = Const::Intern("{SYNTAX ERROR: ");
Const* sxx_builtins_cafe::s622 = Const::Intern("{SYNTAX ERROR}");
Const* sxx_builtins_cafe::s623 = Const::Intern("{SYSTEM ERROR: ");
Const* sxx_builtins_cafe::s624 = Const::Intern("{Small debugger is switch off}");
Const* sxx_builtins_cafe::s625 = Const::Intern("{Small debugger is switch on}");
Const* sxx_builtins_cafe::s626 = Const::Intern("{TYPE ERROR: ");
Const* sxx_builtins_cafe::s627 = Const::Intern("{WARNING: ");
Const* sxx_builtins_cafe::s628 = Const::Intern("{}");
Const* sxx_builtins_cafe::s629 = Const::Intern("|");
Const* sxx_builtins_cafe::s630 = Const::Intern("| ?- ");
Const* sxx_builtins_cafe::s631 = Const::Intern("}");
Const* sxx_builtins_cafe::s632 = Const::Intern("~");
Int* sxx_builtins_cafe::negint2 = Term::Number(-2);
Int* sxx_builtins_cafe::negint1 = Term::Number(-1);
Int* sxx_builtins_cafe::posint0 = Term::Number(0);
Int* sxx_builtins_cafe::posint1 = Term::Number(1);
Int* sxx_builtins_cafe::posint2 = Term::Number(2);
Int* sxx_builtins_cafe::posint3 = Term::Number(3);
Int* sxx_builtins_cafe::posint4 = Term::Number(4);
Int* sxx_builtins_cafe::posint5 = Term::Number(5);
Int* sxx_builtins_cafe::posint8 = Term::Number(8);
Int* sxx_builtins_cafe::posint26 = Term::Number(26);
Int* sxx_builtins_cafe::posint43 = Term::Number(43);
Int* sxx_builtins_cafe::posint45 = Term::Number(45);
Int* sxx_builtins_cafe::posint63 = Term::Number(63);
Int* sxx_builtins_cafe::posint97 = Term::Number(97);
Int* sxx_builtins_cafe::posint99 = Term::Number(99);
Int* sxx_builtins_cafe::posint104 = Term::Number(104);
Int* sxx_builtins_cafe::posint108 = Term::Number(108);
Int* sxx_builtins_cafe::posint200 = Term::Number(200);
Int* sxx_builtins_cafe::posint255 = Term::Number(255);
Int* sxx_builtins_cafe::posint300 = Term::Number(300);
Int* sxx_builtins_cafe::posint400 = Term::Number(400);
Int* sxx_builtins_cafe::posint500 = Term::Number(500);
Int* sxx_builtins_cafe::posint550 = Term::Number(550);
Int* sxx_builtins_cafe::posint700 = Term::Number(700);
Int* sxx_builtins_cafe::posint900 = Term::Number(900);
Int* sxx_builtins_cafe::posint999 = Term::Number(999);
Int* sxx_builtins_cafe::posint1000 = Term::Number(1000);
Int* sxx_builtins_cafe::posint1050 = Term::Number(1050);
Int* sxx_builtins_cafe::posint1100 = Term::Number(1100);
Int* sxx_builtins_cafe::posint1150 = Term::Number(1150);
Int* sxx_builtins_cafe::posint1170 = Term::Number(1170);
Int* sxx_builtins_cafe::posint1200 = Term::Number(1200);
Int* sxx_builtins_cafe::posint1201 = Term::Number(1201);

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_load_sxx_builtins_cafe_0__1(mach));
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s510;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s307;
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_package_1::exec_pred_package_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s590,sxx_builtins_cafe::posint0),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s508,sxx_builtins_cafe::posint0));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s391,sxx_builtins_cafe::posint0),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s392,sxx_builtins_cafe::posint0));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s11,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s316,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s266,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s283,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s271,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s347,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s350,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s587,sxx_builtins_cafe::posint1));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s500,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s286,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s234,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__15);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s313,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s157,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__16);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s597,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s335,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s436,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s471,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s397,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s339,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s362,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s490,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s495,sxx_builtins_cafe::posint1)))))))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__17);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s441,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s441,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s358,sxx_builtins_cafe::posint1)));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__18);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s409,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s348,sxx_builtins_cafe::posint1));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__19);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s290,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s90,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__20);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s314,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s125,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__21);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s299,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s35,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__22);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s301,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s20,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__23);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s300,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s155,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__24);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s302,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s156,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__25);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s298,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s124,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__26);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s361,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__27);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s287,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__28);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s369,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__29);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s440,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__30);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s16,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s23,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s17,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s29,sxx_builtins_cafe::posint2))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__31);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s38,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s39,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s40,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s41,sxx_builtins_cafe::posint2))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__32);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s57,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s74,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__33);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s87,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__34);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s95,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__35);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s99,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s101,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s100,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s102,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s103,sxx_builtins_cafe::posint2)))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__36);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s129,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__37);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s141,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__38);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s144,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s148,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s149,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s150,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s151,sxx_builtins_cafe::posint3)))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__39);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s188,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s189,sxx_builtins_cafe::posint3));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__40);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s195,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s205,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s207,sxx_builtins_cafe::posint2)));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__41);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s212,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s213,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s215,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s216,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s217,sxx_builtins_cafe::posint2)))));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__42);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s222,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s233,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__43);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s288,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s21,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__44);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s291,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s22,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__45);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s284,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s136,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__46);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s289,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s135,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__47);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s292,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s117,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__48);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s293,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s116,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__49);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s356,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__50);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s433,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__51);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s152,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__52);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s332,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__53);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s334,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__54);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s333,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__55);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s551,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__56);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s320,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__57);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s552,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__58);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s394,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__59);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s340,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__60);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s556,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__61);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s504,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__62);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s357,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__63);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s398,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__64);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s570,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__65);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s407,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s408,sxx_builtins_cafe::posint1));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__66);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s513,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s514,sxx_builtins_cafe::posint1));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__67);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s531,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s532,sxx_builtins_cafe::posint1));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__68);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s487,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__69);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s405,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s405,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__70);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s404,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__71);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s529,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s529,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__72);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s580,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__73);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s557,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__74);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s406,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s512,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s530,sxx_builtins_cafe::posint1)));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__75);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s535,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s535,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__76);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s539,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s539,sxx_builtins_cafe::posint3));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__77);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s536,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__78);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s229,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__79);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s601,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s601,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__80);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s604,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s604,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__81);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s602,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s602,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__82);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s603,sxx_builtins_cafe::posint2),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s603,sxx_builtins_cafe::posint3));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__83);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s503,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__84);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s371,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__85);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s76,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__86);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s311,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__87);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s502,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__88);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s548,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__89);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s572,sxx_builtins_cafe::posint5);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__90);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s485,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__91);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s545,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__92);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s545,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__93);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s555,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__94);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s373,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__95);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s411,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__96);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s321,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__97);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s303,sxx_builtins_cafe::posint3),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s388,sxx_builtins_cafe::posint2));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__98);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s486,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__99);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s417,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__100);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s414,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__101);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s444,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__102);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s447,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__103);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s456,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__104);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s449,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__105);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s454,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__106);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s452,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__107);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s460,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__108);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s458,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__109);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s574,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__110);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1170;
local_aregs[1] = sxx_builtins_cafe::s606;
local_aregs[2] = sxx_builtins_cafe::s282;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__111);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1170;
local_aregs[1] = sxx_builtins_cafe::s606;
local_aregs[2] = sxx_builtins_cafe::s270;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__112);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1170;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s282;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__113);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1170;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s297;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__114);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s510;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__115);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s426;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__116);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s527;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__117);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s380;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__118);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s475;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__119);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s478;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__120);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s482;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__121);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint1150;
local_aregs[1] = sxx_builtins_cafe::s402;
local_aregs[2] = sxx_builtins_cafe::s341;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_op_3::exec_pred_op_3);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__122);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s346,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__123);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s364,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__124);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s365,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__125);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s588,sxx_builtins_cafe::posint0),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s494,sxx_builtins_cafe::posint0));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__126);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s376,sxx_builtins_cafe::posint0),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s489,sxx_builtins_cafe::posint0));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__127);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s464,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__128);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s561,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s491,sxx_builtins_cafe::posint1),F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s492,sxx_builtins_cafe::posint0)));
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__129);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s470,sxx_builtins_cafe::posint0);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__130);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s470,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__131);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s75,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__132);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s77,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__133);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s130,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__134);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s70,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__135);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s71,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__136);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s72,sxx_builtins_cafe::posint1);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__137);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s73,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_dynamic_1::exec_pred_dynamic_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__138);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s553,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__139);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s467,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__140);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s497,sxx_builtins_cafe::posint3);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_builtins_cafe_0::exec_pred_on_load_sxx_builtins_cafe_0__141);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s565,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_on_load_sxx_builtins_cafe_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = F(sxx_builtins_cafe::s275,sxx_builtins_cafe::s600,sxx_builtins_cafe::posint2);
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_public_1::exec_pred_public_1);
}

static* function < Function*pred_package_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_package_1__1(mach));
}

static* function < Function*pred_package_1::(PrologMachine*) {
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

static* function < Function*pred_true_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_true_0__1(mach));
}

static* function < Function*pred_true_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_otherwise_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_otherwise_0__1(mach));
}

static* function < Function*pred_otherwise_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_fail_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_fail_0__1(mach));
}

static* function < Function*pred_fail_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_fail_0::exec_pred_fail_0);
}

static* function < Function*pred_false_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_false_0__1(mach));
}

static* function < Function*pred_false_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_fail_0::exec_pred_fail_0);
}

static* function < Function*pred_cut_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cut_1__1(mach));
}

static* function < Function*pred_cut_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_system_carrot_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_system_carrot_2__1(mach));
}

static* function < Function*pred_sym_system_carrot_2::(PrologMachine*) {
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
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_sym_system_comma_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_system_comma_2__1(mach));
}

static* function < Function*pred_sym_system_comma_2::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s347, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_or_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_or_2__1(mach));
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s271,var3,var4);
local_aregs[2] = F(sxx_builtins_cafe::s347, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_notequals_2::exec_pred_sym_system_notequals_2);
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var2->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s271,var3,var4);
local_aregs[2] = F(sxx_builtins_cafe::s347, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_notequals_2::exec_pred_sym_system_notequals_2);
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s347, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_sym_if_then_arrow_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_if_then_arrow_2__1(mach));
}

static* function < Function*pred_sym_if_then_arrow_2::(PrologMachine*) {
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s347, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_call_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_call_1__1(mach));
}

static* function < Function*pred_call_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s147, { var1->Deref(), sxx_builtins_cafe::s595, var2->Deref(), sxx_builtins_cafe::posint0, sxx_builtins_cafe::s439, continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$get_current_B_1::exec_pred_$get_current_B_1);
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$meta_call_5__1(mach));
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s347, { var1->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__3);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s54, { var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_closure_1::exec_pred_closure_1);
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__4);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s590))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__5);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s588))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s588, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__6);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s376))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s376, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__7);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s494))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s494, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__8);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s489))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s489, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__9);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s561,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s561, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__10);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s491,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s491, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__11);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s492))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s492, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__12);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s464,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s464, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__13);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s364,F(sxx_builtins_cafe::s272, { var1->Deref(), var2->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__14);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s316,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s147, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__15);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s147, { var2->Deref(), var1->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__16);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s11))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s488))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s368,sxx_builtins_cafe::s421,sxx_builtins_cafe::s0),sxx_builtins_cafe::s11,sxx_builtins_cafe::posint0,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__17);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s11))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s78, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__18);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s266,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s147, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__19);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s271,var1,var2),var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s147, { var1->Deref(), var4->Deref(), sxx_builtins_cafe::s488, var6->Deref(), var7->Deref() }),F(sxx_builtins_cafe::s147, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() })),F(sxx_builtins_cafe::s147, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__20);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s147, { var1->Deref(), var3->Deref(), sxx_builtins_cafe::s488, var5->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s147, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__21);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s283,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s147, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s147, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__22);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s311,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s493,F(sxx_builtins_cafe::s147, { var1->Deref(), var2->Deref(), sxx_builtins_cafe::s488, var4->Deref(), var5->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__23);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s394,var1,var2,var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s394, { var1->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__24);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s340,var1,var2,var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s340, { var1->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__25);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s556,var1,var2,var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s556, { var1->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__26);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s502,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s502,F(sxx_builtins_cafe::s147, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__27);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s500,var1,var2,var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s500, { var1->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }), F(sxx_builtins_cafe::s147, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__28);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s350,var1,var2,var3)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s350,F(sxx_builtins_cafe::s147, { var1->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }),var2->Deref(),F(sxx_builtins_cafe::s147, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__29);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s574,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s574, { var1->Deref(), F(sxx_builtins_cafe::s147, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__30);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s356,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s278, { var3->Deref(), var1->Deref() }),var2->Deref(),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__31);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s332,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__32);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s334,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__33);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s333,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s333,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__34);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s551,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s551,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__35);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s320,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s320,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__36);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s552,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_5::exec_pred_$meta_call_5__37);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s348, { var1->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s147, { var5->Deref(), var4->Deref(), var2->Deref(), var1->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$meta_call_5::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = F(sxx_builtins_cafe::s347,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }));
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$meta_call_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$meta_call_4__1(mach));
}

static* function < Function*pred_$meta_call_4::(PrologMachine*) {
	mach::FillAlternative(pred_$meta_call_4::exec_pred_$meta_call_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s588))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s401, { var3->Deref(), var4, var5, F(sxx_builtins_cafe::s231, { var3->Deref(), var2->Deref(), F(sxx_builtins_cafe::s275, { var4->Deref(), var5->Deref() }), var1->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$meta_call_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s439))) {
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
local_aregs[0] = var3->Deref();
local_aregs[1] = var4;
local_aregs[2] = var5;
local_aregs[3] = F(sxx_builtins_cafe::s55, { var3->Deref(), var2->Deref(), F(sxx_builtins_cafe::s275, { var4->Deref(), var5->Deref() }), var1->Deref(), sxx_builtins_cafe::s439, continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_pred_functor_3);
}

static* function < Function*pred_$call_internal_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$call_internal_5__1(mach));
}

static* function < Function*pred_$call_internal_5::(PrologMachine*) {
	mach::FillAlternative(pred_$call_internal_5::exec_pred_$call_internal_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s413, { var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s107,var6,F(sxx_builtins_cafe::s440,var7,F(sxx_builtins_cafe::s264, { var4->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),var8,F(sxx_builtins_cafe::s147, { var8->Deref(), var2->Deref(), var6->Deref(), var7->Deref(), var5->Deref(), continuation }))))) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_internal_database_1::exec_pred_$new_internal_database_1);
}

static* function < Function*pred_$call_internal_5::(PrologMachine*) {
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
local_aregs[0] = var2->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$call_2::exec_pred_$call_2);
}

static* function < Function*pred_catch_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_catch_3__1(mach));
}

static* function < Function*pred_catch_3::(PrologMachine*) {
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
local_aregs[0] = var2->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_on_exception_3::exec_pred_on_exception_3);
}

static* function < Function*pred_throw_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_throw_1__1(mach));
}

static* function < Function*pred_throw_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_on_exception_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_exception_3__1(mach));
}

static* function < Function*pred_on_exception_3::(PrologMachine*) {
	mach::FillAlternative(pred_on_exception_3::exec_pred_on_exception_3__2);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s160, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_on_exception_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = F(sxx_builtins_cafe::s500, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$on_exception_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$on_exception_3__1(mach));
}

static* function < Function*pred_$on_exception_3::(PrologMachine*) {
	mach::FillAlternative(pred_$on_exception_3::exec_pred_$on_exception_3__2);
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
local_aregs[0] = sxx_builtins_cafe::s154;
local_aregs[1] = F(sxx_builtins_cafe::s36,var4,F(sxx_builtins_cafe::s347, { var2->Deref(), F(sxx_builtins_cafe::s88, { var4->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$set_exception_1::exec_pred_$set_exception_1);
}

static* function < Function*pred_$on_exception_3::(PrologMachine*) {
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
local_aregs[0] = var4;
local_aregs[1] = F(sxx_builtins_cafe::s314, { var4->Deref(), sxx_builtins_cafe::s154, F(sxx_builtins_cafe::s56, { var4->Deref(), var1->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$get_exception_1::exec_pred_$get_exception_1);
}

static* function < Function*pred_$catch_and_throw_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$catch_and_throw_3__1(mach));
}

static* function < Function*pred_$catch_and_throw_3::(PrologMachine*) {
	mach::FillAlternative(pred_$catch_and_throw_3::exec_pred_$catch_and_throw_3__2);
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
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s209,sxx_builtins_cafe::s154,F(sxx_builtins_cafe::s347, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$catch_and_throw_3::(PrologMachine*) {
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
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_unify_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_unify_2__1(mach));
}

static* function < Function*pred_unify_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$unify_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$unify_2__1(mach));
}

static* function < Function*pred_$unify_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$unify_2::exec_pred_$unify_2);
}

static* function < Function*pred_sym_system_notequals_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_system_notequals_2__1(mach));
}

static* function < Function*pred_sym_system_notequals_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_notequals_2::exec_pred_sym_system_notequals_2);
}

static* function < Function*pred_$not_unifiable_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$not_unifiable_2__1(mach));
}

static* function < Function*pred_$not_unifiable_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$not_unifiable_2::exec_pred_$not_unifiable_2);
}

static* function < Function*pred_var_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_var_1__1(mach));
}

static* function < Function*pred_var_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_atom_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_atom_1__1(mach));
}

static* function < Function*pred_atom_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_integer_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_integer_1__1(mach));
}

static* function < Function*pred_integer_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_long_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_long_1__1(mach));
}

static* function < Function*pred_long_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_long_1::exec_pred_long_1);
}

static* function < Function*pred_float_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_float_1__1(mach));
}

static* function < Function*pred_float_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_float_1::exec_pred_float_1);
}

static* function < Function*pred_atomic_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_atomic_1__1(mach));
}

static* function < Function*pred_atomic_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_pred_atomic_1);
}

static* function < Function*pred_nonvar_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nonvar_1__1(mach));
}

static* function < Function*pred_nonvar_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_number_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_number_1__1(mach));
}

static* function < Function*pred_number_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_number_1::exec_pred_number_1);
}

static* function < Function*pred_java_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_1__1(mach));
}

static* function < Function*pred_java_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_java_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_2__1(mach));
}

static* function < Function*pred_java_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_2::exec_pred_java_2);
}

static* function < Function*pred_closure_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_closure_1__1(mach));
}

static* function < Function*pred_closure_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_closure_1::exec_pred_closure_1);
}

static* function < Function*pred_ground_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ground_1__1(mach));
}

static* function < Function*pred_ground_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_ground_1::exec_pred_ground_1);
}

static* function < Function*pred_compound_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_compound_1__1(mach));
}

static* function < Function*pred_compound_1::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[1] = F(sxx_builtins_cafe::s401, { var1->Deref(), var2, var3, F(sxx_builtins_cafe::s559,sxx_builtins_cafe::posint0,var3->Deref(),continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_callable_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_callable_1__1(mach));
}

static* function < Function*pred_callable_1::(PrologMachine*) {
	mach::FillAlternative(pred_callable_1::exec_pred_callable_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_callable_1::(PrologMachine*) {
	mach::FillAlternative(pred_callable_1::exec_pred_callable_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_compound_1::exec_pred_compound_1);
}

static* function < Function*pred_callable_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_closure_1::exec_pred_closure_1);
}

static* function < Function*pred_termequal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termequal_2__1(mach));
}

static* function < Function*pred_termequal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$equality_of_term_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$equality_of_term_2__1(mach));
}

static* function < Function*pred_$equality_of_term_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$equality_of_term_2::exec_pred_$equality_of_term_2);
}

static* function < Function*pred_sym_strict_noteq_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_strict_noteq_2__1(mach));
}

static* function < Function*pred_sym_strict_noteq_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_strict_noteq_2::exec_pred_sym_strict_noteq_2);
}

static* function < Function*pred_$inequality_of_term_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$inequality_of_term_2__1(mach));
}

static* function < Function*pred_$inequality_of_term_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$inequality_of_term_2::exec_pred_$inequality_of_term_2);
}

static* function < Function*pred_termsmallerthan_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termsmallerthan_2__1(mach));
}

static* function < Function*pred_termsmallerthan_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termsmallerthan_2::exec_pred_termsmallerthan_2);
}

static* function < Function*pred_$before_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$before_2__1(mach));
}

static* function < Function*pred_$before_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$before_2::exec_pred_$before_2);
}

static* function < Function*pred_termgreaterthan_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termgreaterthan_2__1(mach));
}

static* function < Function*pred_termgreaterthan_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termgreaterthan_2::exec_pred_termgreaterthan_2);
}

static* function < Function*pred_$after_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$after_2__1(mach));
}

static* function < Function*pred_$after_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$after_2::exec_pred_$after_2);
}

static* function < Function*pred_termsmallerequal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termsmallerequal_2__1(mach));
}

static* function < Function*pred_termsmallerequal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termsmallerequal_2::exec_pred_termsmallerequal_2);
}

static* function < Function*pred_$not_after_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$not_after_2__1(mach));
}

static* function < Function*pred_$not_after_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$not_after_2::exec_pred_$not_after_2);
}

static* function < Function*pred_termgreaterequal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termgreaterequal_2__1(mach));
}

static* function < Function*pred_termgreaterequal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termgreaterequal_2::exec_pred_termgreaterequal_2);
}

static* function < Function*pred_$not_before_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$not_before_2__1(mach));
}

static* function < Function*pred_$not_before_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$not_before_2::exec_pred_$not_before_2);
}

static* function < Function*pred_sym__c63_system_equals_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym__c63_system_equals_2__1(mach));
}

static* function < Function*pred_sym__c63_system_equals_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c63_system_equals_2::exec_pred_sym__c63_system_equals_2);
}

static* function < Function*pred_$identical_or_cannot_unify_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$identical_or_cannot_unify_2__1(mach));
}

static* function < Function*pred_$identical_or_cannot_unify_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$identical_or_cannot_unify_2::exec_pred_$identical_or_cannot_unify_2);
}

static* function < Function*pred_compare_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_compare_3__1(mach));
}

static* function < Function*pred_compare_3::(PrologMachine*) {
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
local_aregs[0] = var4;
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s142, { var4->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$compare0_3::exec_pred_$compare0_3);
}

static* function < Function*pred_$map_compare_op_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$map_compare_op_2__1(mach));
}

static* function < Function*pred_$map_compare_op_2::(PrologMachine*) {
	mach::FillAlternative(pred_$map_compare_op_2::exec_pred_$map_compare_op_2__2);
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
local_aregs[0] = sxx_builtins_cafe::posint0;
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593,sxx_builtins_cafe::s286,var2->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arithequal_2::exec_pred_arithequal_2);
}

static* function < Function*pred_$map_compare_op_2::(PrologMachine*) {
	mach::FillAlternative(pred_$map_compare_op_2::exec_pred_$map_compare_op_2__3);
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
local_aregs[1] = sxx_builtins_cafe::posint0;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593,sxx_builtins_cafe::s284,var2->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_$map_compare_op_2::(PrologMachine*) {
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
local_aregs[0] = sxx_builtins_cafe::posint0;
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593,sxx_builtins_cafe::s292,var2->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_sym_system_univ_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_system_univ_2__1(mach));
}

static* function < Function*pred_sym_system_univ_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_copy_term_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_copy_term_2__1(mach));
}

static* function < Function*pred_copy_term_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_copy_term_2::exec_pred_copy_term_2);
}

static* function < Function*pred_is_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_2__1(mach));
}

static* function < Function*pred_is_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_pred_is_2);
}

static* function < Function*pred_$abs_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$abs_2__1(mach));
}

static* function < Function*pred_$abs_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$abs_2::exec_pred_$abs_2);
}

static* function < Function*pred_$asin_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$asin_2__1(mach));
}

static* function < Function*pred_$asin_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$asin_2::exec_pred_$asin_2);
}

static* function < Function*pred_$acos_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$acos_2__1(mach));
}

static* function < Function*pred_$acos_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$acos_2::exec_pred_$acos_2);
}

static* function < Function*pred_$atan_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$atan_2__1(mach));
}

static* function < Function*pred_$atan_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atan_2::exec_pred_$atan_2);
}

static* function < Function*pred_$bitwise_conj_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bitwise_conj_3__1(mach));
}

static* function < Function*pred_$bitwise_conj_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$bitwise_conj_3::exec_pred_$bitwise_conj_3);
}

static* function < Function*pred_$bitwise_disj_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bitwise_disj_3__1(mach));
}

static* function < Function*pred_$bitwise_disj_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$bitwise_disj_3::exec_pred_$bitwise_disj_3);
}

static* function < Function*pred_$bitwise_exclusive_or_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bitwise_exclusive_or_3__1(mach));
}

static* function < Function*pred_$bitwise_exclusive_or_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$bitwise_exclusive_or_3::exec_pred_$bitwise_exclusive_or_3);
}

static* function < Function*pred_$bitwise_neg_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bitwise_neg_2__1(mach));
}

static* function < Function*pred_$bitwise_neg_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$bitwise_neg_2::exec_pred_$bitwise_neg_2);
}

static* function < Function*pred_$ceil_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$ceil_2__1(mach));
}

static* function < Function*pred_$ceil_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$ceil_2::exec_pred_$ceil_2);
}

static* function < Function*pred_$cos_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$cos_2__1(mach));
}

static* function < Function*pred_$cos_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$cos_2::exec_pred_$cos_2);
}

static* function < Function*pred_$degrees_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$degrees_2__1(mach));
}

static* function < Function*pred_$degrees_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$degrees_2::exec_pred_$degrees_2);
}

static* function < Function*pred_$exp_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$exp_2__1(mach));
}

static* function < Function*pred_$exp_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$exp_2::exec_pred_$exp_2);
}

static* function < Function*pred_$float_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$float_2__1(mach));
}

static* function < Function*pred_$float_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$float_2::exec_pred_$float_2);
}

static* function < Function*pred_$float_integer_part_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$float_integer_part_2__1(mach));
}

static* function < Function*pred_$float_integer_part_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$float_integer_part_2::exec_pred_$float_integer_part_2);
}

static* function < Function*pred_$float_fractional_part_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$float_fractional_part_2__1(mach));
}

static* function < Function*pred_$float_fractional_part_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$float_fractional_part_2::exec_pred_$float_fractional_part_2);
}

static* function < Function*pred_$float_quotient_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$float_quotient_3__1(mach));
}

static* function < Function*pred_$float_quotient_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$float_quotient_3::exec_pred_$float_quotient_3);
}

static* function < Function*pred_$floor_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$floor_2__1(mach));
}

static* function < Function*pred_$floor_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$floor_2::exec_pred_$floor_2);
}

static* function < Function*pred_$int_quotient_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$int_quotient_3__1(mach));
}

static* function < Function*pred_$int_quotient_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$int_quotient_3::exec_pred_$int_quotient_3);
}

static* function < Function*pred_$log_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$log_2__1(mach));
}

static* function < Function*pred_$log_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$log_2::exec_pred_$log_2);
}

static* function < Function*pred_$max_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$max_3__1(mach));
}

static* function < Function*pred_$max_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$max_3::exec_pred_$max_3);
}

static* function < Function*pred_$min_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$min_3__1(mach));
}

static* function < Function*pred_$min_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$min_3::exec_pred_$min_3);
}

static* function < Function*pred_$minus_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$minus_3__1(mach));
}

static* function < Function*pred_$minus_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$minus_3::exec_pred_$minus_3);
}

static* function < Function*pred_$mod_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$mod_3__1(mach));
}

static* function < Function*pred_$mod_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$mod_3::exec_pred_$mod_3);
}

static* function < Function*pred_$multi_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$multi_3__1(mach));
}

static* function < Function*pred_$multi_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$multi_3::exec_pred_$multi_3);
}

static* function < Function*pred_$plus_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$plus_3__1(mach));
}

static* function < Function*pred_$plus_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$plus_3::exec_pred_$plus_3);
}

static* function < Function*pred_$pow_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$pow_3__1(mach));
}

static* function < Function*pred_$pow_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$pow_3::exec_pred_$pow_3);
}

static* function < Function*pred_$radians_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$radians_2__1(mach));
}

static* function < Function*pred_$radians_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$radians_2::exec_pred_$radians_2);
}

static* function < Function*pred_$rint_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$rint_2__1(mach));
}

static* function < Function*pred_$rint_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$rint_2::exec_pred_$rint_2);
}

static* function < Function*pred_$round_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$round_2__1(mach));
}

static* function < Function*pred_$round_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$round_2::exec_pred_$round_2);
}

static* function < Function*pred_$shift_left_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$shift_left_3__1(mach));
}

static* function < Function*pred_$shift_left_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$shift_left_3::exec_pred_$shift_left_3);
}

static* function < Function*pred_$shift_right_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$shift_right_3__1(mach));
}

static* function < Function*pred_$shift_right_3::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$shift_right_3::exec_pred_$shift_right_3);
}

static* function < Function*pred_$sign_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$sign_2__1(mach));
}

static* function < Function*pred_$sign_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$sign_2::exec_pred_$sign_2);
}

static* function < Function*pred_$sin_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$sin_2__1(mach));
}

static* function < Function*pred_$sin_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$sin_2::exec_pred_$sin_2);
}

static* function < Function*pred_$sqrt_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$sqrt_2__1(mach));
}

static* function < Function*pred_$sqrt_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$sqrt_2::exec_pred_$sqrt_2);
}

static* function < Function*pred_$tan_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$tan_2__1(mach));
}

static* function < Function*pred_$tan_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$tan_2::exec_pred_$tan_2);
}

static* function < Function*pred_$truncate_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$truncate_2__1(mach));
}

static* function < Function*pred_$truncate_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$truncate_2::exec_pred_$truncate_2);
}

static* function < Function*pred_arithequal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_arithequal_2__1(mach));
}

static* function < Function*pred_arithequal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arithequal_2::exec_pred_arithequal_2);
}

static* function < Function*pred_$arith_equal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$arith_equal_2__1(mach));
}

static* function < Function*pred_$arith_equal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$arith_equal_2::exec_pred_$arith_equal_2);
}

static* function < Function*pred_sym__c61_system_notequals_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym__c61_system_notequals_2__1(mach));
}

static* function < Function*pred_sym__c61_system_notequals_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c61_system_notequals_2::exec_pred_sym__c61_system_notequals_2);
}

static* function < Function*pred_$arith_not_equal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$arith_not_equal_2__1(mach));
}

static* function < Function*pred_$arith_not_equal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$arith_not_equal_2::exec_pred_$arith_not_equal_2);
}

static* function < Function*pred_smallerthan_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_smallerthan_2__1(mach));
}

static* function < Function*pred_smallerthan_2::(PrologMachine*) {
	mach::FillAlternative(pred_smallerthan_2::exec_pred_smallerthan_2__2);
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_smallerthan_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_$less_than_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$less_than_2__1(mach));
}

static* function < Function*pred_$less_than_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$less_than_2::exec_pred_$less_than_2);
}

static* function < Function*pred_smallerorequal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_smallerorequal_2__1(mach));
}

static* function < Function*pred_smallerorequal_2::(PrologMachine*) {
	mach::FillAlternative(pred_smallerorequal_2::exec_pred_smallerorequal_2__2);
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_pred_smallerorequal_2);
}

static* function < Function*pred_smallerorequal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_pred_smallerorequal_2);
}

static* function < Function*pred_$less_or_equal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$less_or_equal_2__1(mach));
}

static* function < Function*pred_$less_or_equal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$less_or_equal_2::exec_pred_$less_or_equal_2);
}

static* function < Function*pred_$greater_than_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$greater_than_2__1(mach));
}

static* function < Function*pred_$greater_than_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$greater_than_2::exec_pred_$greater_than_2);
}

static* function < Function*pred_$greater_or_equal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$greater_or_equal_2__1(mach));
}

static* function < Function*pred_$greater_or_equal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$greater_or_equal_2::exec_pred_$greater_or_equal_2);
}

static* function < Function*pred_clause_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_clause_2__1(mach));
}

static* function < Function*pred_clause_2::(PrologMachine*) {
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s278,var4,var5);
local_aregs[3] = F(sxx_builtins_cafe::s356, { var1->Deref(), var2->Deref() });
local_aregs[4] = F(sxx_builtins_cafe::s153, { var4->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var4->Deref(), var5->Deref() }),sxx_builtins_cafe::s322,sxx_builtins_cafe::s525,F(sxx_builtins_cafe::s356, { var1->Deref(), var2->Deref() }),F(sxx_builtins_cafe::s59, { var4->Deref(), var5->Deref(), var3->Deref(), var6, var7, F(sxx_builtins_cafe::s369, { var6->Deref(), F(sxx_builtins_cafe::s282, { var3->Deref(), var2->Deref() }), continuation }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$head_to_term_4::exec_pred_$head_to_term_4);
}

static* function < Function*pred_$head_to_term_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$head_to_term_4__1(mach));
}

static* function < Function*pred_$head_to_term_4::(PrologMachine*) {
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s278,var3,F(sxx_builtins_cafe::s275,var4,var5))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = sxx_builtins_cafe::s595;
local_aregs[3] = var3->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s401, { var2->Deref(), var4->Deref(), var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$head_to_term_5::exec_pred_$head_to_term_5);
}

static* function < Function*pred_$head_to_term_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$head_to_term_5__1(mach));
}

static* function < Function*pred_$head_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$head_to_term_5::exec_pred_$head_to_term_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$head_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$head_to_term_5::exec_pred_$head_to_term_5__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s123, { var2->Deref(), var3->Deref(), var1->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$head_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$head_to_term_5::exec_pred_$head_to_term_5__4);
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s335, { var2->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_$head_to_term_5::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = var5->Deref();
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$new_internal_database_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$new_internal_database_1__1(mach));
}

static* function < Function*pred_$new_internal_database_1::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s109,var2,F(sxx_builtins_cafe::s153, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$new_internal_database_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$new_internal_database_2__1(mach));
}

static* function < Function*pred_$new_internal_database_2::(PrologMachine*) {
	mach::FillAlternative(pred_$new_internal_database_2::exec_pred_$new_internal_database_2__2);
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
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_contains_key_2::exec_pred_hash_contains_key_2);
}

static* function < Function*pred_$new_internal_database_2::(PrologMachine*) {
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s325, { var2->Deref() }),Const::Nil);
local_aregs[2] = F(sxx_builtins_cafe::s127, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_new_hash_2::exec_pred_new_hash_2);
}

static* function < Function*pred_$init_internal_database_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$init_internal_database_1__1(mach));
}

static* function < Function*pred_$init_internal_database_1::(PrologMachine*) {
	mach::FillAlternative(pred_$init_internal_database_1::exec_pred_$init_internal_database_1__2);
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
local_aregs[1] = sxx_builtins_cafe::s126;
local_aregs[2] = sxx_builtins_cafe::posint0;
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s394,var2,F(sxx_builtins_cafe::s278, { var1->Deref(), sxx_builtins_cafe::s126 }),var3,F(sxx_builtins_cafe::s0, &tempVar,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$compiled_predicate_3::exec_pred_$compiled_predicate_3);
}

static* function < Function*pred_$init_internal_database_1::(PrologMachine*) {
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

static* function < Function*pred_$defined_internal_database_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$defined_internal_database_1__1(mach));
}

static* function < Function*pred_$defined_internal_database_1::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s109,var2,F(sxx_builtins_cafe::s413, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$clause_internal_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$clause_internal_5__1(mach));
}

static* function < Function*pred_$clause_internal_5::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s110, { var1->Deref(), var2->Deref(), var3->Deref(), var6, F(sxx_builtins_cafe::s111, { var6->Deref(), var7, F(sxx_builtins_cafe::s60, { var7->Deref(), var4->Deref(), var5->Deref(), continuation }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_contains_key_2::exec_pred_hash_contains_key_2);
}

static* function < Function*pred_$clause_internal0_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$clause_internal0_3__1(mach));
}

static* function < Function*pred_$clause_internal0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_internal0_3::exec_pred_$clause_internal0_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_fail_0::exec_pred_fail_0);
}

static* function < Function*pred_$clause_internal0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_internal0_3::exec_pred_$clause_internal0_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s266,var1,var2),Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$clause_internal0_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s266, { var2->Deref(), var3->Deref() });
local_aregs[1] = var1->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_member_2::exec_pred_$builtin_member_2);
}

static* function < Function*pred_$get_indices_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$get_indices_4__1(mach));
}

static* function < Function*pred_$get_indices_4::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var5;
local_aregs[3] = F(sxx_builtins_cafe::s51, { var3->Deref(), var6, F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s413, { var5->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s415, { var5->Deref(), var6->Deref(), var4->Deref() })),F(sxx_builtins_cafe::s415, { var5->Deref(), sxx_builtins_cafe::s597, var4->Deref() }),continuation) });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_indexing_hash_3::exec_pred_$new_indexing_hash_3);
}

static* function < Function*pred_$new_indexing_hash_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$new_indexing_hash_3__1(mach));
}

static* function < Function*pred_$new_indexing_hash_3::(PrologMachine*) {
	mach::FillAlternative(pred_$new_indexing_hash_3::exec_pred_$new_indexing_hash_3__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s415, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_contains_key_2::exec_pred_hash_contains_key_2);
}

static* function < Function*pred_$new_indexing_hash_3::(PrologMachine*) {
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
local_aregs[0] = var3->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s419, { var3->Deref(), sxx_builtins_cafe::s326, Const::Nil, F(sxx_builtins_cafe::s419, { var3->Deref(), sxx_builtins_cafe::s597, Const::Nil, F(sxx_builtins_cafe::s419, { var3->Deref(), sxx_builtins_cafe::s468, Const::Nil, F(sxx_builtins_cafe::s419, { var3->Deref(), sxx_builtins_cafe::s567, Const::Nil, F(sxx_builtins_cafe::s419, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }) }) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_new_hash_1::exec_pred_new_hash_1);
}

static* function < Function*pred_$calc_indexing_key_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$calc_indexing_key_2__1(mach));
}

static* function < Function*pred_$calc_indexing_key_2::(PrologMachine*) {
	mach::FillAlternative(pred_$calc_indexing_key_2::exec_pred_$calc_indexing_key_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s326))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$calc_indexing_key_2::(PrologMachine*) {
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
local_aregs[0] = sxx_builtins_cafe::posint1;
local_aregs[1] = var1->Deref();
local_aregs[2] = var3;
local_aregs[3] = F(sxx_builtins_cafe::s52, { var3->Deref(), var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_pred_arg_3);
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$calc_indexing_key0_2__1(mach));
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
	mach::FillAlternative(pred_$calc_indexing_key0_2::exec_pred_$calc_indexing_key0_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s326))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
	mach::FillAlternative(pred_$calc_indexing_key0_2::exec_pred_$calc_indexing_key0_2__3);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s468))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272,var2,var3);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
	mach::FillAlternative(pred_$calc_indexing_key0_2::exec_pred_$calc_indexing_key0_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s567))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_compound_1::exec_pred_compound_1);
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
	mach::FillAlternative(pred_$calc_indexing_key0_2::exec_pred_$calc_indexing_key0_2__5);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s223, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_ground_1::exec_pred_ground_1);
}

static* function < Function*pred_$calc_indexing_key0_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s581);
local_aregs[1] = F(sxx_builtins_cafe::s52, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$check_procedure_permission_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$check_procedure_permission_4__1(mach));
}

static* function < Function*pred_$check_procedure_permission_4::(PrologMachine*) {
	mach::FillAlternative(pred_$check_procedure_permission_4::exec_pred_$check_procedure_permission_4__2);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_contains_key_2::exec_pred_hash_contains_key_2);
}

static* function < Function*pred_$check_procedure_permission_4::(PrologMachine*) {
	mach::FillAlternative(pred_$check_procedure_permission_4::exec_pred_$check_procedure_permission_4__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s515, { var4->Deref(), var5->Deref(), F(sxx_builtins_cafe::s278, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }) }), var7 }),var6->Deref(),var8,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$compiled_predicate_or_builtin_3::exec_pred_$compiled_predicate_or_builtin_3);
}

static* function < Function*pred_$check_procedure_permission_4::(PrologMachine*) {
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_initialization_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_initialization_2__1(mach));
}

static* function < Function*pred_initialization_2::(PrologMachine*) {
	mach::FillAlternative(pred_initialization_2::exec_pred_initialization_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s502, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_initialization_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s433, { var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_internal_database_1::exec_pred_$new_internal_database_1);
}

static* function < Function*pred_assert_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_assert_1__1(mach));
}

static* function < Function*pred_assert_1::(PrologMachine*) {
	mach::RemoveChoice();
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
return static_cast<function<Function*(PrologMachine*)> >(pred_assertz_1::exec_pred_assertz_1);
}

static* function < Function*pred_assertz_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_assertz_1__1(mach));
}

static* function < Function*pred_assertz_1::(PrologMachine*) {
	mach::FillAlternative(pred_assertz_1::exec_pred_assertz_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = F(sxx_builtins_cafe::s278,var3,var4);
local_aregs[3] = F(sxx_builtins_cafe::s334, { var1->Deref() });
local_aregs[4] = F(sxx_builtins_cafe::s153, { var3->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),sxx_builtins_cafe::s479,sxx_builtins_cafe::s564,F(sxx_builtins_cafe::s334, { var1->Deref() }),F(sxx_builtins_cafe::s369, { var2->Deref(), var5, F(sxx_builtins_cafe::s128, { var5->Deref(), var6, F(sxx_builtins_cafe::s236, { var3->Deref(), var4->Deref(), var2->Deref(), var6->Deref(), sxx_builtins_cafe::s611, F(sxx_builtins_cafe::s391, { continuation }) }) }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_clause_4::exec_pred_$term_to_clause_4);
}

static* function < Function*pred_assertz_1::(PrologMachine*) {
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

static* function < Function*pred_asserta_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asserta_1__1(mach));
}

static* function < Function*pred_asserta_1::(PrologMachine*) {
	mach::FillAlternative(pred_asserta_1::exec_pred_asserta_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = F(sxx_builtins_cafe::s278,var3,var4);
local_aregs[3] = F(sxx_builtins_cafe::s333, { var1->Deref() });
local_aregs[4] = F(sxx_builtins_cafe::s153, { var3->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),sxx_builtins_cafe::s479,sxx_builtins_cafe::s564,F(sxx_builtins_cafe::s333, { var1->Deref() }),F(sxx_builtins_cafe::s369, { var2->Deref(), var5, F(sxx_builtins_cafe::s128, { var5->Deref(), var6, F(sxx_builtins_cafe::s236, { var3->Deref(), var4->Deref(), var2->Deref(), var6->Deref(), sxx_builtins_cafe::s318, F(sxx_builtins_cafe::s391, { continuation }) }) }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_clause_4::exec_pred_$term_to_clause_4);
}

static* function < Function*pred_asserta_1::(PrologMachine*) {
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

static* function < Function*pred_abolish_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_abolish_1__1(mach));
}

static* function < Function*pred_abolish_1::(PrologMachine*) {
	mach::FillAlternative(pred_abolish_1::exec_pred_abolish_1__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s278,var2,var3);
local_aregs[2] = F(sxx_builtins_cafe::s320, { var1->Deref() });
local_aregs[3] = F(sxx_builtins_cafe::s153, { var2->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var2->Deref(), var3->Deref() }),sxx_builtins_cafe::s479,sxx_builtins_cafe::s564,F(sxx_builtins_cafe::s320, { var1->Deref() }),F(sxx_builtins_cafe::s152, { var2->Deref(), var3->Deref(), var4, F(sxx_builtins_cafe::s415, { var4->Deref(), sxx_builtins_cafe::s326, var5, F(sxx_builtins_cafe::s92, { var5->Deref(), F(sxx_builtins_cafe::s420, { var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s391, { continuation }) }) }) }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_predicateindicator_3::exec_pred_$term_to_predicateindicator_3);
}

static* function < Function*pred_abolish_1::(PrologMachine*) {
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

static* function < Function*pred_retract_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_retract_1__1(mach));
}

static* function < Function*pred_retract_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = F(sxx_builtins_cafe::s278,var3,var4);
local_aregs[3] = F(sxx_builtins_cafe::s551, { var1->Deref() });
local_aregs[4] = F(sxx_builtins_cafe::s153, { var3->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),sxx_builtins_cafe::s322,sxx_builtins_cafe::s564,F(sxx_builtins_cafe::s551, { var1->Deref() }),F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s282,var5,var6),var2->Deref(),F(sxx_builtins_cafe::s59, { var3->Deref(), var4->Deref(), var5->Deref(), var7, var8, F(sxx_builtins_cafe::s369, { var7->Deref(), var2->Deref(), F(sxx_builtins_cafe::s91, { var8->Deref(), F(sxx_builtins_cafe::s202, { var3->Deref(), var4->Deref(), var8->Deref(), continuation }) }) }) }))) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$clause_to_term_4::exec_pred_$clause_to_term_4);
}

static* function < Function*pred_retractall_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_retractall_1__1(mach));
}

static* function < Function*pred_retractall_1::(PrologMachine*) {
	mach::FillAlternative(pred_retractall_1::exec_pred_retractall_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = F(sxx_builtins_cafe::s278,var3,var4);
local_aregs[3] = F(sxx_builtins_cafe::s552, { var1->Deref() });
local_aregs[4] = F(sxx_builtins_cafe::s153, { var3->Deref(), F(sxx_builtins_cafe::s58,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),sxx_builtins_cafe::s322,sxx_builtins_cafe::s564,F(sxx_builtins_cafe::s552, { var1->Deref() }),F(sxx_builtins_cafe::s59, { var3->Deref(), var4->Deref(), var2->Deref(), var5, var6, F(sxx_builtins_cafe::s369, { var5->Deref(), F(sxx_builtins_cafe::s282, { var2->Deref(), var7 }), F(sxx_builtins_cafe::s91, { var6->Deref(), F(sxx_builtins_cafe::s202, { var3->Deref(), var4->Deref(), var6->Deref(), F(sxx_builtins_cafe::s391, { continuation }) }) }) }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$head_to_term_4::exec_pred_$head_to_term_4);
}

static* function < Function*pred_retractall_1::(PrologMachine*) {
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

static* function < Function*pred_$term_to_clause_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_clause_4__1(mach));
}

static* function < Function*pred_$term_to_clause_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s278,var3,F(sxx_builtins_cafe::s275,var4,var5))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = sxx_builtins_cafe::s595;
local_aregs[3] = var3->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s282,var7,var8),var2->Deref(),F(sxx_builtins_cafe::s401, { var7->Deref(), var4->Deref(), var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_clause_5::exec_pred_$term_to_clause_5);
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_clause_5__1(mach));
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_clause_5::exec_pred_$term_to_clause_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_clause_5::exec_pred_$term_to_clause_5__3);
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
local_aregs[0] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_clause_5::exec_pred_$term_to_clause_5__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s225, { var2->Deref(), var3->Deref(), var1->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_clause_5::exec_pred_$term_to_clause_5__5);
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
local_aregs[0] = F(sxx_builtins_cafe::s335, { var3->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335),var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_clause_5::exec_pred_$term_to_clause_5__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var5->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s226, { var1->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), F(sxx_builtins_cafe::s224, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$term_to_clause_5::(PrologMachine*) {
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var2,sxx_builtins_cafe::s590)))) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = var4->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_head_4::exec_pred_$term_to_head_4);
}

static* function < Function*pred_$term_to_head_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_head_4__1(mach));
}

static* function < Function*pred_$term_to_head_4::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_head_4::exec_pred_$term_to_head_4__2);
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$term_to_head_4::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_head_4::exec_pred_$term_to_head_4__3);
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_compound_1::exec_pred_compound_1);
}

static* function < Function*pred_$term_to_head_4::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = var4->Deref();
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$term_to_body_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_body_4__1(mach));
}

static* function < Function*pred_$term_to_body_4::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$localize_body_3::exec_pred_$localize_body_3);
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$localize_body_3__1(mach));
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s140,F(sxx_builtins_cafe::s347, { var1->Deref() }),var2->Deref(),var3->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s140, { var2->Deref(), var1->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s266,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s266,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s140, { var1->Deref(), var3->Deref(), var4->Deref(), F(sxx_builtins_cafe::s140, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s271,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s140, { var1->Deref(), var3->Deref(), var4->Deref(), F(sxx_builtins_cafe::s140, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s283,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s283,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s140, { var1->Deref(), var3->Deref(), var4->Deref(), F(sxx_builtins_cafe::s140, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var4;
local_aregs[2] = var5;
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s46, { var4->Deref(), var5->Deref(), var6, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s287, { var1->Deref(), F(sxx_builtins_cafe::s272, { var4->Deref(), var7 }), F(sxx_builtins_cafe::s139, { var6->Deref(), var7->Deref(), var2->Deref(), var8, F(sxx_builtins_cafe::s287, { var3->Deref(), F(sxx_builtins_cafe::s272, { var4->Deref(), var8->Deref() }), continuation }) }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_pred_functor_3);
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__8);
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s347,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s595))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_body_3::exec_pred_$localize_body_3__10);
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
if(!((areg2)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_system_predicate_1::exec_pred_system_predicate_1);
}

static* function < Function*pred_$localize_body_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_args_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$localize_args_4__1(mach));
}

static* function < Function*pred_$localize_args_4::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_args_4::exec_pred_$localize_args_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$localize_args_4::(PrologMachine*) {
	mach::FillAlternative(pred_$localize_args_4::exec_pred_$localize_args_4__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var4->Deref(), var2->Deref() }),var5)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s597, { var2->Deref() });
local_aregs[1] = F(sxx_builtins_cafe::s313, { var2->Deref(), F(sxx_builtins_cafe::s278,var6,var7) });
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s139, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_pred_or_2);
}

static* function < Function*pred_$localize_args_4::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(F(sxx_builtins_cafe::s272, { var3->Deref(), var6 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var4->Deref();
local_aregs[2] = var5->Deref();
local_aregs[3] = var6->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$localize_args_4::exec_pred_$localize_args_4);
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_meta_predicates_3__1(mach));
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s316))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s347))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s502))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s311))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s394))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s556))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s340))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s350))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_meta_predicates_3::exec_pred_$builtin_meta_predicates_3__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s574))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_meta_predicates_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s295,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$clause_to_term_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$clause_to_term_4__1(mach));
}

static* function < Function*pred_$clause_to_term_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s278,var3,F(sxx_builtins_cafe::s275,var4,var5))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = sxx_builtins_cafe::s595;
local_aregs[3] = var3->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s282,var7,var8),var2->Deref(),F(sxx_builtins_cafe::s401, { var7->Deref(), var4->Deref(), var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$clause_to_term_5::exec_pred_$clause_to_term_5);
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$clause_to_term_5__1(mach));
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_to_term_5::exec_pred_$clause_to_term_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_to_term_5::exec_pred_$clause_to_term_5__3);
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
local_aregs[0] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_to_term_5::exec_pred_$clause_to_term_5__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s61, { var2->Deref(), var3->Deref(), var1->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_to_term_5::exec_pred_$clause_to_term_5__5);
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
local_aregs[0] = F(sxx_builtins_cafe::s335, { var3->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335),var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
	mach::FillAlternative(pred_$clause_to_term_5::exec_pred_$clause_to_term_5__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var3,var2->Deref())))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s123, { var1->Deref(), var3->Deref(), var6, var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$clause_to_term_5::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var2,sxx_builtins_cafe::s590)))) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var5;
local_aregs[3] = var4->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$head_to_term_4::exec_pred_$head_to_term_4);
}

static* function < Function*pred_$term_to_predicateindicator_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_predicateindicator_3__1(mach));
}

static* function < Function*pred_$term_to_predicateindicator_3::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s278,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = sxx_builtins_cafe::s595;
local_aregs[3] = var2->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_to_predicateindicator_5__1(mach));
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__3);
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
local_aregs[0] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s227, { var2->Deref(), var3->Deref(), var1->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__5);
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
local_aregs[1] = F(sxx_builtins_cafe::s275,var6,var7);
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s520),var5->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_notequals_2::exec_pred_sym_system_notequals_2);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s275,var1,var2)))) {
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
local_aregs[0] = F(sxx_builtins_cafe::s335, { var1->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335),var6->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
	mach::FillAlternative(pred_$term_to_predicateindicator_5::exec_pred_$term_to_predicateindicator_5__7);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s275,var1,var2)))) {
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
local_aregs[0] = F(sxx_builtins_cafe::s436, { var2->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s436),var6->Deref(),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_$term_to_predicateindicator_5::(PrologMachine*) {
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$update_indexing_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$update_indexing_5__1(mach));
}

static* function < Function*pred_$update_indexing_5::(PrologMachine*) {
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
local_aregs[3] = F(sxx_builtins_cafe::s105, { var3->Deref(), var6->Deref(), var7, F(sxx_builtins_cafe::s237, { var5->Deref(), var7->Deref(), var6->Deref(), var4->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_indexing_hash_3::exec_pred_$new_indexing_hash_3);
}

static* function < Function*pred_$gen_indexing_keys_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$gen_indexing_keys_3__1(mach));
}

static* function < Function*pred_$gen_indexing_keys_3::(PrologMachine*) {
	mach::FillAlternative(pred_$gen_indexing_keys_3::exec_pred_$gen_indexing_keys_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s326,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$gen_indexing_keys_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::posint1;
local_aregs[1] = var1->Deref();
local_aregs[2] = var5;
local_aregs[3] = F(sxx_builtins_cafe::s106, { var5->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_pred_arg_3);
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$gen_indexing_keys0_3__1(mach));
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$gen_indexing_keys0_3::exec_pred_$gen_indexing_keys0_3__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s416, { var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$gen_indexing_keys0_3::exec_pred_$gen_indexing_keys0_3__3);
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s326,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s468,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272,var3,var4);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$gen_indexing_keys0_3::exec_pred_$gen_indexing_keys0_3__4);
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s326,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s567,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_compound_1::exec_pred_compound_1);
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$gen_indexing_keys0_3::exec_pred_$gen_indexing_keys0_3__5);
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s326,F(sxx_builtins_cafe::s272,var3,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s223, { var1->Deref(), var3->Deref(), F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s413, { var2->Deref(), var3->Deref() }),sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s415, { var2->Deref(), sxx_builtins_cafe::s597, var4 }),F(sxx_builtins_cafe::s419, { var2->Deref(), var3->Deref(), var4->Deref() })),continuation) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_ground_1::exec_pred_ground_1);
}

static* function < Function*pred_$gen_indexing_keys0_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s581);
local_aregs[1] = F(sxx_builtins_cafe::s106, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$update_indexing_hash_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$update_indexing_hash_4__1(mach));
}

static* function < Function*pred_$update_indexing_hash_4::(PrologMachine*) {
	mach::FillAlternative(pred_$update_indexing_hash_4::exec_pred_$update_indexing_hash_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s318))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s121, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$update_indexing_hash_4::(PrologMachine*) {
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
if(!((areg0)->Unify(sxx_builtins_cafe::s611))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s119, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$hash_adda_all_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$hash_adda_all_3__1(mach));
}

static* function < Function*pred_$hash_adda_all_3::(PrologMachine*) {
	mach::FillAlternative(pred_$hash_adda_all_3::exec_pred_$hash_adda_all_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$hash_adda_all_3::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s119, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$hash_adda_3::exec_pred_$hash_adda_3);
}

static* function < Function*pred_$hash_addz_all_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$hash_addz_all_3__1(mach));
}

static* function < Function*pred_$hash_addz_all_3::(PrologMachine*) {
	mach::FillAlternative(pred_$hash_addz_all_3::exec_pred_$hash_addz_all_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$hash_addz_all_3::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s121, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$hash_addz_3::exec_pred_$hash_addz_3);
}

static* function < Function*pred_$erase_all_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$erase_all_1__1(mach));
}

static* function < Function*pred_$erase_all_1::(PrologMachine*) {
	mach::FillAlternative(pred_$erase_all_1::exec_pred_$erase_all_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$erase_all_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s92, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$erase_1::exec_pred_$erase_1);
}

static* function < Function*pred_$rehash_indexing_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$rehash_indexing_3__1(mach));
}

static* function < Function*pred_$rehash_indexing_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s416, { var4->Deref(), var5, F(sxx_builtins_cafe::s203, { var5->Deref(), var4->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_indexing_hash_3::exec_pred_$new_indexing_hash_3);
}

static* function < Function*pred_$remove_index_all_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$remove_index_all_3__1(mach));
}

static* function < Function*pred_$remove_index_all_3::(PrologMachine*) {
	mach::FillAlternative(pred_$remove_index_all_3::exec_pred_$remove_index_all_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$remove_index_all_3::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s203, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$hash_remove_first_3::exec_pred_$hash_remove_first_3);
}

static* function < Function*pred_findall_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_findall_3__1(mach));
}

static* function < Function*pred_findall_3::(PrologMachine*) {
	mach::FillAlternative(pred_findall_3::exec_pred_findall_3__2);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s486,var4,F(sxx_builtins_cafe::s98, { var4->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation })));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_findall_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = F(sxx_builtins_cafe::s394, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$findall_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$findall_4__1(mach));
}

static* function < Function*pred_$findall_4::(PrologMachine*) {
	mach::FillAlternative(pred_$findall_4::exec_pred_$findall_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
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
local_aregs[0] = var3->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s369, { var2->Deref(), var5, F(sxx_builtins_cafe::s120, { var1->Deref(), sxx_builtins_cafe::s14, var5->Deref(), F(sxx_builtins_cafe::s391, { continuation }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_$findall_4::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::s14;
local_aregs[2] = var4->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_get_3::exec_pred_hash_get_3);
}

static* function < Function*pred_bagof_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_bagof_3__1(mach));
}

static* function < Function*pred_bagof_3::(PrologMachine*) {
	mach::FillAlternative(pred_bagof_3::exec_pred_bagof_3__2);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s32, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_bagof_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = F(sxx_builtins_cafe::s340, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_setof_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_setof_3__1(mach));
}

static* function < Function*pred_setof_3::(PrologMachine*) {
	mach::FillAlternative(pred_setof_3::exec_pred_setof_3__2);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s32, { var1->Deref(), var2->Deref(), var4, F(sxx_builtins_cafe::s560, { var4->Deref(), var3->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_setof_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348);
local_aregs[1] = F(sxx_builtins_cafe::s556, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$bagof_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bagof_3__1(mach));
}

static* function < Function*pred_$bagof_3::(PrologMachine*) {
	mach::FillAlternative(pred_$bagof_3::exec_pred_$bagof_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = var2->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var4;
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s314, { var4->Deref(), Const::Nil, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s287,var5,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s240,var4->Deref()),F(sxx_builtins_cafe::s394,F(sxx_builtins_cafe::s264, { var5->Deref(), var1->Deref() }),var2->Deref(),var6,F(sxx_builtins_cafe::s33, { var6->Deref(), var5->Deref(), var7, F(sxx_builtins_cafe::s593, { var7->Deref(), var3->Deref(), continuation }) })))) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$free_variables_set_3::exec_pred_$free_variables_set_3);
}

static* function < Function*pred_$bagof_3::(PrologMachine*) {
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
local_aregs[3] = F(sxx_builtins_cafe::s314, { var3->Deref(), Const::Nil, continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_findall_3::exec_pred_findall_3);
}

static* function < Function*pred_$bagof_instances_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bagof_instances_3__1(mach));
}

static* function < Function*pred_$bagof_instances_3::(PrologMachine*) {
	mach::FillAlternative(pred_$bagof_instances_3::exec_pred_$bagof_instances_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_fail_0::exec_pred_fail_0);
}

static* function < Function*pred_$bagof_instances_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s264,var4,var5),var6);
local_aregs[1] = var1->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s239, { var6->Deref(), var4->Deref(), var7, var8, var9, F(sxx_builtins_cafe::s34, { var9->Deref(), var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s264, { var4->Deref(), var5->Deref() }),var7->Deref()), F(sxx_builtins_cafe::s272, { var5->Deref(), var8->Deref() }), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$bagof_instances0_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$bagof_instances0_5__1(mach));
}

static* function < Function*pred_$bagof_instances0_5::(PrologMachine*) {
	mach::FillAlternative(pred_$bagof_instances0_5::exec_pred_$bagof_instances0_5__2);
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
local_aregs[0] = var4->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s593, { var5->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$unify_witness_2::exec_pred_$unify_witness_2);
}

static* function < Function*pred_$bagof_instances0_5::(PrologMachine*) {
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
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$bagof_instances_3::exec_pred_$bagof_instances_3);
}

static* function < Function*pred_$variants_subset_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$variants_subset_5__1(mach));
}

static* function < Function*pred_$variants_subset_5::(PrologMachine*) {
	mach::FillAlternative(pred_$variants_subset_5::exec_pred_$variants_subset_5__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
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
if(!((areg2)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$variants_subset_5::(PrologMachine*) {
	mach::FillAlternative(pred_$variants_subset_5::exec_pred_$variants_subset_5__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s264,var1,var2),var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s264, { var1->Deref(), var2->Deref() }),var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(F(sxx_builtins_cafe::s272, { var2->Deref(), var6 })))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var7))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var4->Deref();
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s239, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_variant_2::exec_pred_$term_variant_2);
}

static* function < Function*pred_$variants_subset_5::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
if(!((areg4)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var6 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = var6->Deref();
local_aregs[5] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$variants_subset_5::exec_pred_$variants_subset_5);
}

static* function < Function*pred_$term_variant_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_variant_2__1(mach));
}

static* function < Function*pred_$term_variant_2::(PrologMachine*) {
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s228, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_new_hash_1::exec_pred_new_hash_1);
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$term_variant_3__1(mach));
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
	mach::FillAlternative(pred_$term_variant_3::exec_pred_$term_variant_3__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s413, { var3->Deref(), var1->Deref() }),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s415, { var3->Deref(), var1->Deref(), var4 }),F(sxx_builtins_cafe::s290, { var2->Deref(), var4->Deref() }))),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s597, { var2->Deref() }),F(sxx_builtins_cafe::s419, { var3->Deref(), var1->Deref(), var2->Deref() })),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
	mach::FillAlternative(pred_$term_variant_3::exec_pred_$term_variant_3__3);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s582, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_ground_1::exec_pred_ground_1);
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
	mach::FillAlternative(pred_$term_variant_3::exec_pred_$term_variant_3__4);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s391, { continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
	mach::FillAlternative(pred_$term_variant_3::exec_pred_$term_variant_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s228, { var1->Deref(), var3->Deref(), var5->Deref(), F(sxx_builtins_cafe::s228, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$term_variant_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = F(sxx_builtins_cafe::s287, { var2->Deref(), var5, F(sxx_builtins_cafe::s228, { var4->Deref(), var5->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_$unify_witness_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$unify_witness_2__1(mach));
}

static* function < Function*pred_$unify_witness_2::(PrologMachine*) {
	mach::FillAlternative(pred_$unify_witness_2::exec_pred_$unify_witness_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$unify_witness_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s264,var1,var2),var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$unify_witness_2::exec_pred_$unify_witness_2);
}

static* function < Function*pred_$variables_set_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$variables_set_2__1(mach));
}

static* function < Function*pred_$variables_set_2::(PrologMachine*) {
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
local_aregs[1] = Const::Nil;
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$variables_set_3::exec_pred_$variables_set_3);
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$variables_set_3__1(mach));
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$variables_set_3::exec_pred_$variables_set_3__2);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s44, { var1->Deref(), var2->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$variables_set_3::exec_pred_$variables_set_3__3);
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var2->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$variables_set_3::exec_pred_$variables_set_3__4);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_pred_atomic_1);
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$variables_set_3::exec_pred_$variables_set_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s238, { var1->Deref(), var3->Deref(), var5, F(sxx_builtins_cafe::s238, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$variables_set_3::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var4;
local_aregs[2] = F(sxx_builtins_cafe::s238, { var4->Deref(), var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_$builtin_memq_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_memq_2__1(mach));
}

static* function < Function*pred_$builtin_memq_2::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_memq_2::exec_pred_$builtin_memq_2__2);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$builtin_memq_2::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_memq_2::exec_pred_$builtin_memq_2);
}

static* function < Function*pred_$existential_variables_set_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$existential_variables_set_2__1(mach));
}

static* function < Function*pred_$existential_variables_set_2::(PrologMachine*) {
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
local_aregs[1] = Const::Nil;
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3);
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$existential_variables_set_3__1(mach));
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3__2);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3__3);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_pred_atomic_1);
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s94, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s316,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s238, { var1->Deref(), var3->Deref(), var5, F(sxx_builtins_cafe::s94, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::FillAlternative(pred_$existential_variables_set_3::exec_pred_$existential_variables_set_3__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s147,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var7))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s94, { var1->Deref(), var6->Deref(), var7->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$existential_variables_set_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$free_variables_set_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$free_variables_set_3__1(mach));
}

static* function < Function*pred_$free_variables_set_3::(PrologMachine*) {
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
local_aregs[1] = var4;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s238, { var2->Deref(), var5, F(sxx_builtins_cafe::s94, { var1->Deref(), var5->Deref(), var6, F(sxx_builtins_cafe::s47, { var4->Deref(), var6->Deref(), var3->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$variables_set_2::exec_pred_$variables_set_2);
}

static* function < Function*pred_$builtin_set_diff_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_set_diff_3__1(mach));
}

static* function < Function*pred_$builtin_set_diff_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = F(sxx_builtins_cafe::s560, { var2->Deref(), var5, F(sxx_builtins_cafe::s48, { var4->Deref(), var5->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sort_2::exec_pred_sort_2);
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_set_diff0_3__1(mach));
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_set_diff0_3::exec_pred_$builtin_set_diff0_3__2);
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
if(!((areg2)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_set_diff0_3::exec_pred_$builtin_set_diff0_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_set_diff0_3::exec_pred_$builtin_set_diff0_3__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s48, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_set_diff0_3::exec_pred_$builtin_set_diff0_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var5 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s48, { var2->Deref(), F(sxx_builtins_cafe::s272, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_termsmallerthan_2::exec_pred_termsmallerthan_2);
}

static* function < Function*pred_$builtin_set_diff0_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272, { var3->Deref(), var5 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272, { var1->Deref(), var2->Deref() });
local_aregs[1] = var4->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s272, { var3->Deref(), var5->Deref() });
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_set_diff0_3::exec_pred_$builtin_set_diff0_3);
}

static* function < Function*pred_open_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_open_3__1(mach));
}

static* function < Function*pred_open_3::(PrologMachine*) {
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
local_aregs[3] = Const::Nil;
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_open_4::exec_pred_open_4);
}

static* function < Function*pred_close_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_close_1__1(mach));
}

static* function < Function*pred_close_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = Const::Nil;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_close_2::exec_pred_close_2);
}

static* function < Function*pred_flush_output_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_flush_output_0__1(mach));
}

static* function < Function*pred_flush_output_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var1 = V(mach);
local_aregs[0] = var1;
local_aregs[1] = F(sxx_builtins_cafe::s398, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_stream_property_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_stream_property_2__1(mach));
}

static* function < Function*pred_stream_property_2::(PrologMachine*) {
	mach::FillAlternative(pred_stream_property_2::exec_pred_stream_property_2__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s220, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_stream_property_2::(PrologMachine*) {
	mach::FillAlternative(pred_stream_property_2::exec_pred_stream_property_2__3);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s220, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1);
}

static* function < Function*pred_stream_property_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s581,sxx_builtins_cafe::s570);
local_aregs[1] = F(sxx_builtins_cafe::s570, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$stream_property_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$stream_property_2__1(mach));
}

static* function < Function*pred_$stream_property_2::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_2::exec_pred_$stream_property_2__2);
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s113,var3,F(sxx_builtins_cafe::s417, { var3->Deref(), var4, F(sxx_builtins_cafe::s43,F(sxx_builtins_cafe::s266, { var1->Deref(), var5 }),var4->Deref(),F(sxx_builtins_cafe::s441, { var1->Deref(), F(sxx_builtins_cafe::s43, { var2->Deref(), var5->Deref(), continuation }) })) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$stream_property_2::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_2::exec_pred_$stream_property_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s113,var3,F(sxx_builtins_cafe::s415, { var3->Deref(), var1->Deref(), var4, F(sxx_builtins_cafe::s43, { var2->Deref(), var4->Deref(), continuation }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_$stream_property_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s568,sxx_builtins_cafe::s568);
local_aregs[1] = F(sxx_builtins_cafe::s570, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$stream_property_specifier_1__1(mach));
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s434))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s509))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s325,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s478,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$stream_property_specifier_1::exec_pred_$stream_property_specifier_1__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s591,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$stream_property_specifier_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s393,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_get_char_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get_char_1__1(mach));
}

static* function < Function*pred_get_char_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s407, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_get_code_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get_code_1__1(mach));
}

static* function < Function*pred_get_code_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s408, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_peek_char_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_peek_char_1__1(mach));
}

static* function < Function*pred_peek_char_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s513, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_peek_code_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_peek_code_1__1(mach));
}

static* function < Function*pred_peek_code_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s514, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_put_char_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_put_char_1__1(mach));
}

static* function < Function*pred_put_char_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s531, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_put_code_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_put_code_1__1(mach));
}

static* function < Function*pred_put_code_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s532, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_nl_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nl_1__1(mach));
}

static* function < Function*pred_nl_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::s1;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_put_char_2::exec_pred_put_char_2);
}

static* function < Function*pred_get0_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get0_1__1(mach));
}

static* function < Function*pred_get0_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s408, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_get0_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get0_2__1(mach));
}

static* function < Function*pred_get0_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_get_code_2::exec_pred_get_code_2);
}

static* function < Function*pred_get_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get_1__1(mach));
}

static* function < Function*pred_get_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s404, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_put_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_put_1__1(mach));
}

static* function < Function*pred_put_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s529, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_put_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_put_2__1(mach));
}

static* function < Function*pred_put_2::(PrologMachine*) {
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
local_aregs[0] = var3;
local_aregs[1] = var2->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s532, { var1->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_pred_is_2);
}

static* function < Function*pred_tab_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tab_1__1(mach));
}

static* function < Function*pred_tab_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s580, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_skip_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_skip_1__1(mach));
}

static* function < Function*pred_skip_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s557, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_get_byte_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_get_byte_1__1(mach));
}

static* function < Function*pred_get_byte_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s406, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_peek_byte_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_peek_byte_1__1(mach));
}

static* function < Function*pred_peek_byte_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s512, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_put_byte_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_put_byte_1__1(mach));
}

static* function < Function*pred_put_byte_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s530, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_read_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_1__1(mach));
}

static* function < Function*pred_read_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s535, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_read_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_2__1(mach));
}

static* function < Function*pred_read_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var3;
local_aregs[2] = var4;
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s511, { var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_tokens_3::exec_pred_read_tokens_3);
}

static* function < Function*pred_read_with_variables_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_with_variables_2__1(mach));
}

static* function < Function*pred_read_with_variables_2::(PrologMachine*) {
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s539, { var3->Deref(), var1->Deref(), var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_read_with_variables_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_with_variables_3__1(mach));
}

static* function < Function*pred_read_with_variables_3::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var4;
local_aregs[2] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s511, { var2->Deref(), var4->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_tokens_3::exec_pred_read_tokens_3);
}

static* function < Function*pred_read_line_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_line_1__1(mach));
}

static* function < Function*pred_read_line_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s536, { var2->Deref(), var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_input_1::exec_pred_current_input_1);
}

static* function < Function*pred_read_token_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_token_2__1(mach));
}

static* function < Function*pred_read_token_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var3;
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s198,F(sxx_builtins_cafe::s272, { var3->Deref(), Const::Nil }),var4->Deref(),var2->Deref(),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$read_token0_3::exec_pred_$read_token0_3);
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_token1_3__1(mach));
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::negint2,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s382, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("I")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s495, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("L")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s495, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("D")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s495, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("A")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s335, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("V")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s597, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$read_token1_3::exec_pred_$read_token1_3__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Intern("S")))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s571, { var1->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_token1_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_read_tokens_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_tokens_3__1(mach));
}

static* function < Function*pred_read_tokens_3::(PrologMachine*) {
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
local_aregs[3] = Const::Nil;
HeapChoice tempVar(mach::CUTB);
local_aregs[4] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$read_tokens_4::exec_pred_$read_tokens_4);
}

static* function < Function*pred_$read_tokens_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_tokens_4__1(mach));
}

static* function < Function*pred_$read_tokens_4::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var5;
local_aregs[2] = F(sxx_builtins_cafe::s200, { var1->Deref(), var5->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_token_2::exec_pred_read_token_2);
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_tokens1_5__1(mach));
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__2);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s382,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s622,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s262,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s3,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s201, { var1->Deref(), F(sxx_builtins_cafe::s391, { continuation }) }))))))));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s381))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s381,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s272,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s272))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s272,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__5);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s597,sxx_builtins_cafe::s317)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s597,sxx_builtins_cafe::s317,var2),var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286,sxx_builtins_cafe::s317,var2->Deref()),var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s199, { var1->Deref(), var3->Deref(), var4->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286,sxx_builtins_cafe::s317,var2->Deref()),var5->Deref()), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__6);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s597,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s597, { var2->Deref(), var3 }),var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s286, { var2->Deref(), var3->Deref() });
local_aregs[1] = var6->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s199, { var1->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$mem_pair_2::exec_pred_$mem_pair_2);
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens1_5::exec_pred_$read_tokens1_5__7);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s597,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s597, { var2->Deref(), var3 }),var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286, { var2->Deref(), var3->Deref() }),var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s199, { var1->Deref(), var4->Deref(), var5->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286, { var2->Deref(), var3->Deref() }),var6->Deref()), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens1_5::(PrologMachine*) {
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272, { var2->Deref(), var3 })))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$read_tokens_4::exec_pred_$read_tokens_4);
}

static* function < Function*pred_$mem_pair_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$mem_pair_2__1(mach));
}

static* function < Function*pred_$mem_pair_2::(PrologMachine*) {
	mach::FillAlternative(pred_$mem_pair_2::exec_pred_$mem_pair_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s286,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286,var3,var4),var5)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var4->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$mem_pair_2::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$mem_pair_2::exec_pred_$mem_pair_2);
}

static* function < Function*pred_$read_tokens_until_fullstop_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_tokens_until_fullstop_1__1(mach));
}

static* function < Function*pred_$read_tokens_until_fullstop_1::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s201, { var1->Deref(), var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_token_2::exec_pred_read_token_2);
}

static* function < Function*pred_$read_tokens_until_fullstop_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_tokens_until_fullstop_2__1(mach));
}

static* function < Function*pred_$read_tokens_until_fullstop_2::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens_until_fullstop_2::exec_pred_$read_tokens_until_fullstop_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s381))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens_until_fullstop_2::(PrologMachine*) {
	mach::FillAlternative(pred_$read_tokens_until_fullstop_2::exec_pred_$read_tokens_until_fullstop_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s272))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$read_tokens_until_fullstop_2::(PrologMachine*) {
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
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s201, { var1->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_token_2::exec_pred_read_token_2);
}

static* function < Function*pred_parse_tokens_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_parse_tokens_2__1(mach));
}

static* function < Function*pred_parse_tokens_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s229,var3);
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s229, { var2->Deref() }),F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint1201, var2->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s272,Const::Nil), F(sxx_builtins_cafe::s551,F(sxx_builtins_cafe::s229, { var2->Deref() }),F(sxx_builtins_cafe::s0, &tempVar,continuation)) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_dcg_arrow_2__1(mach));
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s165,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s166, { var2->Deref(), var3, var4 }),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s167, { var2->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var5 }),sxx_builtins_cafe::s11)))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s166,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var4),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s177, { var4->Deref() })),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s170, { var1->Deref(), var2->Deref(), var3->Deref() }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s166,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var4),F(sxx_builtins_cafe::s172,F(sxx_builtins_cafe::s272, { var4->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s349,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s563,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s329,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s390,Const::Nil)))) })))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s167,var1,var2,var3,var2->Deref(),var3->Deref())))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var4),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s178, { var4->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var3->Deref(), var1->Deref() })),sxx_builtins_cafe::s11)))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s167,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var6),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s176, { var6->Deref() })),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s183, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s167,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s172,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s505,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s389,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s324,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s390,Const::Nil)))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s2,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s170, { var1->Deref(), var2->Deref(), var3->Deref() })))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,sxx_builtins_cafe::s381,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s381,Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s495, { var2->Deref() }),Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s335,sxx_builtins_cafe::s268),Const::Nil),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s495,var3),Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s440, { var2->Deref(), F(sxx_builtins_cafe::s268, { var3->Deref() }) })))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s597,var3,var2->Deref()),Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s571, { var2->Deref() }),Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s258,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var2->Deref(), sxx_builtins_cafe::posint1201 }),F(sxx_builtins_cafe::s175,sxx_builtins_cafe::s259))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__15);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s612,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s171, { var2->Deref() }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__16);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s308,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s179, { var2->Deref() }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__17);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s335,var3),Const::Nil),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s258,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s168,var4),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s287, { var2->Deref(), F(sxx_builtins_cafe::s272, { var3->Deref(), var4->Deref() }) })))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__18);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s335,var4),Const::Nil),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var3->Deref(), sxx_builtins_cafe::s402, var4->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var3->Deref(), var1->Deref() })),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var5),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s177, { var5->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s311,F(sxx_builtins_cafe::s176, { var5->Deref() }))),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s440,var6,F(sxx_builtins_cafe::s268, { var3->Deref(), sxx_builtins_cafe::posint1 }))),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var7,var6->Deref()),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var2->Deref(), var4->Deref(), sxx_builtins_cafe::posint1 })),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var2->Deref(),var7->Deref())))))))))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__19);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s335,var4),Const::Nil),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var3->Deref(), sxx_builtins_cafe::s403, var4->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var3->Deref(), var1->Deref() })),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s182,var5),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s177, { var5->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s311,F(sxx_builtins_cafe::s176, { var5->Deref() }))),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var6,var3->Deref()),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var2->Deref(), var4->Deref(), sxx_builtins_cafe::posint1 })),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var2->Deref(),var6->Deref()))))))))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__20);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s170,var1,var2,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s335, { var2->Deref() }),Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__21);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(F(sxx_builtins_cafe::s171,sxx_builtins_cafe::s628)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s631,Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__22);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s171,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var2,sxx_builtins_cafe::posint1201),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s175,sxx_builtins_cafe::s631),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s286, { var1->Deref(), F(sxx_builtins_cafe::s628, { var2->Deref() }) }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__23);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(F(sxx_builtins_cafe::s179,sxx_builtins_cafe::s309)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s315,Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__24);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s179,F(sxx_builtins_cafe::s272,var1,var2))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint999 }),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s180, { var2->Deref() })))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__25);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s180,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s629,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint999 }),F(sxx_builtins_cafe::s175,sxx_builtins_cafe::s315))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__26);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s180,F(sxx_builtins_cafe::s272,var1,var2))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s266,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint999 }),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s180, { var2->Deref() })))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__27);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(F(sxx_builtins_cafe::s180,sxx_builtins_cafe::s309)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s175,sxx_builtins_cafe::s315)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__28);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(F(sxx_builtins_cafe::s168,sxx_builtins_cafe::s309)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s259,Const::Nil),sxx_builtins_cafe::s11)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__29);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s168,F(sxx_builtins_cafe::s272,var1,var2))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint999 }),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s169, { var2->Deref() })))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__30);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s169,F(sxx_builtins_cafe::s272,var1,var2))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s266,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165, { var1->Deref(), sxx_builtins_cafe::posint999 }),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s169, { var2->Deref() })))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__31);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(F(sxx_builtins_cafe::s169,sxx_builtins_cafe::s309)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s175,sxx_builtins_cafe::s259)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__32);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s183,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,var6,Const::Nil),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s181, { var6->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var7, var8 }),F(sxx_builtins_cafe::s183, { var1->Deref(), var7->Deref(), var8->Deref(), var4->Deref(), var5->Deref() }))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__33);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s183,var1,var2,var3,var2->Deref(),var3->Deref())))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var3->Deref(), var1->Deref() }))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__34);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,sxx_builtins_cafe::s266,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,sxx_builtins_cafe::s266),var1->Deref(),var2->Deref(),var3->Deref(),var4->Deref(),var5->Deref()))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__35);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,sxx_builtins_cafe::s629,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,sxx_builtins_cafe::s283),var1->Deref(),var2->Deref(),var3->Deref(),var4->Deref(),var5->Deref()))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__36);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,var1),var2,var3,var4,var5,var6)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var6->Deref(), sxx_builtins_cafe::s605, var1->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var6->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s284, { var4->Deref(), var6->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var5->Deref(), var1->Deref(), sxx_builtins_cafe::posint1 })),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var5->Deref(),var3->Deref()))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__37);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,var1),var2,var3,var4,var5,var6)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var6->Deref(), sxx_builtins_cafe::s609, var1->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var6->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var4->Deref(), var6->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var5->Deref(), var1->Deref(), sxx_builtins_cafe::posint1 })),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var5->Deref(),var3->Deref()))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__38);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,var1),var2,var3,var4,var5,var6)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var6->Deref(), sxx_builtins_cafe::s606, var1->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var6->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s284, { var4->Deref(), var6->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s440,var7,F(sxx_builtins_cafe::s268, { var6->Deref(), sxx_builtins_cafe::posint1 }))),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var8,var7->Deref()),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var5->Deref(), var1->Deref(), sxx_builtins_cafe::posint2 })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var5->Deref(),var3->Deref())),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint2,var5->Deref(),var8->Deref()))))))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__39);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,var1),var2,var3,var4,var5,var6)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var6->Deref(), sxx_builtins_cafe::s607, var1->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var6->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s284, { var4->Deref(), var6->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s440,var7,var6->Deref())),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var8,var7->Deref()),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var5->Deref(), var1->Deref(), sxx_builtins_cafe::posint2 })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var5->Deref(),var3->Deref())),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint2,var5->Deref(),var8->Deref()))))))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__40);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s181,F(sxx_builtins_cafe::s335,var1),var2,var3,var4,var5,var6)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s371, { var6->Deref(), sxx_builtins_cafe::s610, var1->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var6->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s289, { var4->Deref(), var6->Deref() })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s440,var7,F(sxx_builtins_cafe::s268, { var6->Deref(), sxx_builtins_cafe::posint1 }))),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s165,var8,var7->Deref()),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s401, { var5->Deref(), var1->Deref(), sxx_builtins_cafe::posint2 })),F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint1,var5->Deref(),var3->Deref())),F(sxx_builtins_cafe::s628,F(sxx_builtins_cafe::s330,sxx_builtins_cafe::posint2,var5->Deref(),var8->Deref()))))))))))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__41);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s175,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s185,F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272, { var1->Deref(), Const::Nil }),sxx_builtins_cafe::s11))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__42);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s175,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s172,F(sxx_builtins_cafe::s272, { var1->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s389,Const::Nil) }))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__43);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s185))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s2,Const::Nil),F(sxx_builtins_cafe::s266,sxx_builtins_cafe::s11,sxx_builtins_cafe::s185))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s185))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_is_starter_1__1(mach));
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s381))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s258))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s308))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s612))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s495,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s335,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_starter_1::exec_pred_$parse_tokens_is_starter_1__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s597,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_starter_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s571,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_terminator_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_is_terminator_1__1(mach));
}

static* function < Function*pred_$parse_tokens_is_terminator_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_terminator_1::exec_pred_$parse_tokens_is_terminator_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s259))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_terminator_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_terminator_1::exec_pred_$parse_tokens_is_terminator_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s315))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_terminator_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_terminator_1::exec_pred_$parse_tokens_is_terminator_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s631))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_terminator_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s272))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_post_in_op_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_is_post_in_op_1__1(mach));
}

static* function < Function*pred_$parse_tokens_is_post_in_op_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_post_in_op_1::exec_pred_$parse_tokens_is_post_in_op_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s266))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_post_in_op_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_is_post_in_op_1::exec_pred_$parse_tokens_is_post_in_op_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s629))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_is_post_in_op_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s335,var1)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = var3;
local_aregs[2] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s184, { var3->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_op_3::exec_pred_current_op_3);
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_post_in_type_1__1(mach));
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_post_in_type_1::exec_pred_$parse_tokens_post_in_type_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_post_in_type_1::exec_pred_$parse_tokens_post_in_type_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_post_in_type_1::exec_pred_$parse_tokens_post_in_type_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_post_in_type_1::exec_pred_$parse_tokens_post_in_type_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s605))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_post_in_type_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s609))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_peep_next_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_peep_next_3__1(mach));
}

static* function < Function*pred_$parse_tokens_peep_next_3::(PrologMachine*) {
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272, { var1->Deref(), var3 });
local_aregs[1] = var2->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$parse_tokens_error_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_error_3__1(mach));
}

static* function < Function*pred_$parse_tokens_error_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::s596;
local_aregs[1] = sxx_builtins_cafe::s622;
local_aregs[2] = F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s262,F(sxx_builtins_cafe::s186,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s3,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s173, { Const::Nil, var2->Deref(), F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s229,var4),var5,F(sxx_builtins_cafe::s173, { var4->Deref(), var2->Deref(), F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s391, { continuation })) })) }))))));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_2::exec_pred_write_2);
}

static* function < Function*pred_$parse_tokens_error1_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_error1_2__1(mach));
}

static* function < Function*pred_$parse_tokens_error1_2::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error1_2::exec_pred_$parse_tokens_error1_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_error1_2::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error1_2::exec_pred_$parse_tokens_error1_2__3);
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
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s263,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s173, { var1->Deref(), Const::Nil, F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,continuation) })))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$parse_tokens_error1_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s173, { var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$parse_tokens_error2_1::exec_pred_$parse_tokens_error2_1);
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_error2_1__1(mach));
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error2_1::exec_pred_$parse_tokens_error2_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s495,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s601, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error2_1::exec_pred_$parse_tokens_error2_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s335,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s604, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error2_1::exec_pred_$parse_tokens_error2_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s597,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s601, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_error2_1::exec_pred_$parse_tokens_error2_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s571,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s12,F(sxx_builtins_cafe::s187,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,sxx_builtins_cafe::s12,continuation)));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_error2_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::s596;
local_aregs[1] = var1->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_2::exec_pred_write_2);
}

static* function < Function*pred_$parse_tokens_write_string_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_write_string_2__1(mach));
}

static* function < Function*pred_$parse_tokens_write_string_2::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_write_string_2::exec_pred_$parse_tokens_write_string_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_write_string_2::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_write_string_2::exec_pred_$parse_tokens_write_string_2__3);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = Const::Intern("\"");
local_aregs[1] = F(sxx_builtins_cafe::s272, { var2->Deref(), Const::Nil });
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s532, { var1->Deref(), var2->Deref(), F(sxx_builtins_cafe::s532, { var1->Deref(), var2->Deref(), F(sxx_builtins_cafe::s187, { var1->Deref(), var3->Deref(), continuation }) }) }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$parse_tokens_write_string_2::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s187, { var1->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_put_code_2::exec_pred_put_code_2);
}

static* function < Function*pred_$parse_tokens_write_message_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$parse_tokens_write_message_2__1(mach));
}

static* function < Function*pred_$parse_tokens_write_message_2::(PrologMachine*) {
	mach::FillAlternative(pred_$parse_tokens_write_message_2::exec_pred_$parse_tokens_write_message_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$parse_tokens_write_message_2::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s601, { var1->Deref(), sxx_builtins_cafe::s2, F(sxx_builtins_cafe::s186, { var1->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_2::exec_pred_write_2);
}

static* function < Function*pred_write_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_1__1(mach));
}

static* function < Function*pred_write_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s603, { var2->Deref(), var1->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s497,sxx_builtins_cafe::s590),Const::Nil), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_write_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_2__1(mach));
}

static* function < Function*pred_write_2::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s497,sxx_builtins_cafe::s590),Const::Nil);
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_term_3::exec_pred_write_term_3);
}

static* function < Function*pred_writeq_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_writeq_1__1(mach));
}

static* function < Function*pred_writeq_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s603, { var2->Deref(), var1->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s533,sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s497,sxx_builtins_cafe::s590),Const::Nil)), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_writeq_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_writeq_2__1(mach));
}

static* function < Function*pred_writeq_2::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s533,sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s497,sxx_builtins_cafe::s590),Const::Nil));
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_term_3::exec_pred_write_term_3);
}

static* function < Function*pred_write_canonical_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_canonical_1__1(mach));
}

static* function < Function*pred_write_canonical_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = F(sxx_builtins_cafe::s603, { var2->Deref(), var1->Deref(), F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s533,sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s424,sxx_builtins_cafe::s590),Const::Nil)), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_write_canonical_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_canonical_2__1(mach));
}

static* function < Function*pred_write_canonical_2::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s533,sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s424,sxx_builtins_cafe::s590),Const::Nil));
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_term_3::exec_pred_write_term_3);
}

static* function < Function*pred_write_term_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_term_2__1(mach));
}

static* function < Function*pred_write_term_2::(PrologMachine*) {
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s603, { var3->Deref(), var1->Deref(), var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_output_1::exec_pred_current_output_1);
}

static* function < Function*pred_write_term_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_term_3__1(mach));
}

static* function < Function*pred_write_term_3::(PrologMachine*) {
	mach::FillAlternative(pred_write_term_3::exec_pred_write_term_3__2);
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
local_aregs[3] = F(sxx_builtins_cafe::s391, { continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$write_term_3::exec_pred_$write_term_3);
}

static* function < Function*pred_write_term_3::(PrologMachine*) {
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_3__1(mach));
}

static* function < Function*pred_$write_term_3::(PrologMachine*) {
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
local_aregs[0] = var2->Deref();
local_aregs[1] = sxx_builtins_cafe::posint1200;
local_aregs[2] = sxx_builtins_cafe::s528;
local_aregs[3] = var4;
local_aregs[4] = var3->Deref();
local_aregs[5] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[6] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$write_term0_6::exec_pred_$write_term0_6);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
std::vector<Term*> aregs = mach::RegPull(6);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term0_6__1(mach));
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__2);
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
if(!((areg3)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s327, var5->Deref(), F(sxx_builtins_cafe::s96, { var5->Deref(), var1->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__3);
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
if(!((areg3)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s327, var5->Deref(), F(sxx_builtins_cafe::s96, { var5->Deref(), var1->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__4);
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
if(!((areg3)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s15,var6);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s436, { var6->Deref(), F(sxx_builtins_cafe::s558,sxx_builtins_cafe::posint0,var6->Deref(),F(sxx_builtins_cafe::s43,F(sxx_builtins_cafe::s497,sxx_builtins_cafe::s590),var4->Deref(),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s327, var5->Deref(), F(sxx_builtins_cafe::s241, { var6->Deref(), var5->Deref(), continuation }) })))) });
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__5);
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
if(!((areg3)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s559, { var1->Deref(), sxx_builtins_cafe::posint0, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s573, var5->Deref(), F(sxx_builtins_cafe::s96, { var5->Deref(), var1->Deref(), continuation }) })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_number_1::exec_pred_number_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__6);
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
if(!((areg3)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s327, var5->Deref(), F(sxx_builtins_cafe::s96, { var5->Deref(), var1->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_number_1::exec_pred_number_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__7);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s242, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__8);
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
local_aregs[0] = F(sxx_builtins_cafe::s43,F(sxx_builtins_cafe::s424,sxx_builtins_cafe::s590),var5->Deref());
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s247, { var1->Deref(), var7, var8, var9, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s255, { var7->Deref(), var9->Deref(), var8->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__9);
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
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272,var6,var7);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s493,F(sxx_builtins_cafe::s43,F(sxx_builtins_cafe::s424,sxx_builtins_cafe::s590),var4->Deref()),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s528, var5->Deref(), F(sxx_builtins_cafe::s531, { var5->Deref(), sxx_builtins_cafe::s308, F(sxx_builtins_cafe::s254, { var1->Deref(), sxx_builtins_cafe::s528, var8, var4->Deref(), var5->Deref(), F(sxx_builtins_cafe::s531, { var5->Deref(), sxx_builtins_cafe::s315, continuation }) }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term0_6::exec_pred_$write_term0_6__10);
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
local_aregs[0] = F(sxx_builtins_cafe::s628,var7);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s493,F(sxx_builtins_cafe::s43,F(sxx_builtins_cafe::s424,sxx_builtins_cafe::s590),var5->Deref()),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var3->Deref(), sxx_builtins_cafe::s528, var6->Deref(), F(sxx_builtins_cafe::s531, { var6->Deref(), sxx_builtins_cafe::s612, F(sxx_builtins_cafe::s251, { var7->Deref(), sxx_builtins_cafe::posint1200, sxx_builtins_cafe::s528, var8, var5->Deref(), var6->Deref(), F(sxx_builtins_cafe::s531, { var6->Deref(), sxx_builtins_cafe::s631, continuation }) }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_$write_term0_6::(PrologMachine*) {
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg5)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var6,var7);
local_aregs[2] = F(sxx_builtins_cafe::s242, { var6->Deref(), var3->Deref(), var8, var4->Deref(), var5->Deref(), F(sxx_builtins_cafe::s531, { var5->Deref(), sxx_builtins_cafe::s258, F(sxx_builtins_cafe::s252, { var7->Deref(), sxx_builtins_cafe::s528, var9, var4->Deref(), var5->Deref(), F(sxx_builtins_cafe::s531, { var5->Deref(), sxx_builtins_cafe::s259, continuation }) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_$write_space_if_needed_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_space_if_needed_3__1(mach));
}

static* function < Function*pred_$write_space_if_needed_3::(PrologMachine*) {
	mach::FillAlternative(pred_$write_space_if_needed_3::exec_pred_$write_space_if_needed_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_space_if_needed_3::(PrologMachine*) {
	mach::FillAlternative(pred_$write_space_if_needed_3::exec_pred_$write_space_if_needed_3__3);
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
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s531, { var2->Deref(), sxx_builtins_cafe::s2, continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_space_if_needed_3::(PrologMachine*) {
	mach::FillAlternative(pred_$write_space_if_needed_3::exec_pred_$write_space_if_needed_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s507))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s531, { var1->Deref(), sxx_builtins_cafe::s2, continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_space_if_needed_3::(PrologMachine*) {
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_VAR_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_VAR_2__1(mach));
}

static* function < Function*pred_$write_VAR_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_VAR_2::exec_pred_$write_VAR_2__2);
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
local_aregs[1] = sxx_builtins_cafe::posint26;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s440,var3,F(sxx_builtins_cafe::s264,F(sxx_builtins_cafe::s477, { var1->Deref(), sxx_builtins_cafe::posint26 }),Const::Intern("A")),F(sxx_builtins_cafe::s532, { var2->Deref(), var3->Deref(), continuation })));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_$write_VAR_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s264,F(sxx_builtins_cafe::s477, { var1->Deref(), sxx_builtins_cafe::posint26 }),Const::Intern("A"));
local_aregs[2] = F(sxx_builtins_cafe::s532, { var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s440,var4,F(sxx_builtins_cafe::s276, { var1->Deref(), sxx_builtins_cafe::posint26 }),F(sxx_builtins_cafe::s96, { var2->Deref(), var4->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_pred_is_2);
}

static* function < Function*pred_$write_atom_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_atom_5__1(mach));
}

static* function < Function*pred_$write_atom_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_atom_5::exec_pred_$write_atom_5__2);
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
local_aregs[0] = F(sxx_builtins_cafe::s533,sxx_builtins_cafe::s590);
local_aregs[1] = var4->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s30, { var1->Deref(), var3->Deref(), F(sxx_builtins_cafe::s249, { var2->Deref(), var3->Deref(), var5->Deref(), F(sxx_builtins_cafe::s97, { var5->Deref(), var1->Deref(), continuation }) }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_member_2::exec_pred_$builtin_member_2);
}

static* function < Function*pred_$write_atom_5::(PrologMachine*) {
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
local_aregs[1] = var3->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s249, { var2->Deref(), var3->Deref(), var5->Deref(), F(sxx_builtins_cafe::s96, { var5->Deref(), var1->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atom_type_2::exec_pred_$atom_type_2);
}

static* function < Function*pred_$atom_type_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$atom_type_2__1(mach));
}

static* function < Function*pred_$atom_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$atom_type_2::exec_pred_$atom_type_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s327))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::posint0;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atom_type0_2::exec_pred_$atom_type0_2);
}

static* function < Function*pred_$atom_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$atom_type_2::exec_pred_$atom_type_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s573))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::posint1;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atom_type0_2::exec_pred_$atom_type0_2);
}

static* function < Function*pred_$atom_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$atom_type_2::exec_pred_$atom_type_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::posint2;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atom_type0_2::exec_pred_$atom_type0_2);
}

static* function < Function*pred_$atom_type_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s507))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::posint3;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$atom_type0_2::exec_pred_$atom_type0_2);
}

static* function < Function*pred_$write_is_operator_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_is_operator_4__1(mach));
}

static* function < Function*pred_$write_is_operator_4::(PrologMachine*) {
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var5;
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s248, { var5->Deref(), var4->Deref(), F(sxx_builtins_cafe::s371,var6,var4->Deref(),var2->Deref(),F(sxx_builtins_cafe::s287, { var1->Deref(), F(sxx_builtins_cafe::s272,var7,var3->Deref()), F(sxx_builtins_cafe::s0, &tempVar,continuation) })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_pred_functor_3);
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_op_type_2__1(mach));
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s605))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s609))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_op_type_2::exec_pred_$write_op_type_2__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_op_type_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op_8::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
std::vector<Term*> aregs = mach::RegPull(8);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_op_8__1(mach));
}

static* function < Function*pred_$write_term_op_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op_8::exec_pred_$write_term_op_8__2);
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
if(!((areg5)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg6)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg7)->Unify(var7))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var8;
local_aregs[1] = var2->Deref();
local_aregs[2] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s559, { var4->Deref(), var8->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s249, { var5->Deref(), sxx_builtins_cafe::s528, var7->Deref(), F(sxx_builtins_cafe::s531, { var7->Deref(), sxx_builtins_cafe::s258, F(sxx_builtins_cafe::s256, { var1->Deref(), var2->Deref(), var3->Deref(), var8->Deref(), sxx_builtins_cafe::s528, var9, var6->Deref(), var7->Deref(), F(sxx_builtins_cafe::s531, { var7->Deref(), sxx_builtins_cafe::s259, continuation }) }) }) })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_op_3::exec_pred_current_op_3);
}

static* function < Function*pred_$write_term_op_8::(PrologMachine*) {
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
local_aregs[1] = var2->Deref();
local_aregs[2] = var1->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s256, { var1->Deref(), var2->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_op_3::exec_pred_current_op_3);
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
std::vector<Term*> aregs = mach::RegPull(8);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_op1_8__1(mach));
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__2);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,Const::Nil)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s242, { var1->Deref(), var4->Deref(), var8, var6->Deref(), var7->Deref(), F(sxx_builtins_cafe::s440,var9,F(sxx_builtins_cafe::s268, { var3->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s251, { var2->Deref(), var9->Deref(), var8->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__3);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,Const::Nil)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s242, { var1->Deref(), var4->Deref(), var8, var6->Deref(), var7->Deref(), F(sxx_builtins_cafe::s440,var9,var3->Deref(),F(sxx_builtins_cafe::s251, { var2->Deref(), var9->Deref(), var8->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__4);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s605))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,Const::Nil)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var8,F(sxx_builtins_cafe::s268, { var3->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s251, { var2->Deref(), var8->Deref(), var4->Deref(), var9, var6->Deref(), var7->Deref(), F(sxx_builtins_cafe::s242, { var1->Deref(), var9->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__5);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s609))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,Const::Nil)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var8,var3->Deref(),F(sxx_builtins_cafe::s251, { var2->Deref(), var8->Deref(), var4->Deref(), var9, var6->Deref(), var7->Deref(), F(sxx_builtins_cafe::s242, { var1->Deref(), var9->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__6);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,F(sxx_builtins_cafe::s272,var3,Const::Nil))))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var9,F(sxx_builtins_cafe::s268, { var4->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s440,var10,F(sxx_builtins_cafe::s268, { var4->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s251, { var2->Deref(), var9->Deref(), var5->Deref(), var11, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s253, { var1->Deref(), var11->Deref(), var12, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s251, { var3->Deref(), var10->Deref(), var12->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_op1_8::exec_pred_$write_term_op1_8__7);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,F(sxx_builtins_cafe::s272,var3,Const::Nil))))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var9,F(sxx_builtins_cafe::s268, { var4->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s440,var10,var4->Deref(),F(sxx_builtins_cafe::s251, { var2->Deref(), var9->Deref(), var5->Deref(), var11, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s253, { var1->Deref(), var11->Deref(), var12, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s251, { var3->Deref(), var10->Deref(), var12->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_op1_8::(PrologMachine*) {
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
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272,var2,F(sxx_builtins_cafe::s272,var3,Const::Nil))))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var9,var4->Deref(),F(sxx_builtins_cafe::s440,var10,F(sxx_builtins_cafe::s268, { var4->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s251, { var2->Deref(), var9->Deref(), var5->Deref(), var11, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s253, { var1->Deref(), var11->Deref(), var12, var7->Deref(), var8->Deref(), F(sxx_builtins_cafe::s251, { var3->Deref(), var10->Deref(), var12->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_infix_op_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_infix_op_5__1(mach));
}

static* function < Function*pred_$write_term_infix_op_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_infix_op_5::exec_pred_$write_term_infix_op_5__2);
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
if(!((areg0)->Unify(sxx_builtins_cafe::s266))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s528))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s249, { var1->Deref(), sxx_builtins_cafe::s528, var3->Deref(), F(sxx_builtins_cafe::s531, { var3->Deref(), sxx_builtins_cafe::s266, continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_infix_op_5::(PrologMachine*) {
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
return static_cast<function<Function*(PrologMachine*)> >(pred_$write_atom_5::exec_pred_$write_atom_5);
}

static* function < Function*pred_$write_term_list_args_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_list_args_5__1(mach));
}

static* function < Function*pred_$write_term_list_args_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_list_args_5::exec_pred_$write_term_list_args_5__2);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s272,var7,var8),var2->Deref(),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s251, { var1->Deref(), sxx_builtins_cafe::posint999, var3->Deref(), var9, var5->Deref(), var6->Deref(), F(sxx_builtins_cafe::s249, { var9->Deref(), sxx_builtins_cafe::s528, var6->Deref(), F(sxx_builtins_cafe::s531, { var6->Deref(), sxx_builtins_cafe::s266, F(sxx_builtins_cafe::s254, { var2->Deref(), sxx_builtins_cafe::s528, var4->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) })));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_$write_term_list_args_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_list_args_5::exec_pred_$write_term_list_args_5__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s593, { Const::Nil, var2->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s251, { var1->Deref(), sxx_builtins_cafe::posint999, var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_$write_term_list_args_5::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
local_aregs[1] = sxx_builtins_cafe::posint999;
local_aregs[2] = var3->Deref();
local_aregs[3] = var7;
local_aregs[4] = var5->Deref();
local_aregs[5] = var6->Deref();
local_aregs[6] = F(sxx_builtins_cafe::s249, { var7->Deref(), sxx_builtins_cafe::s528, var6->Deref(), F(sxx_builtins_cafe::s531, { var6->Deref(), sxx_builtins_cafe::s629, F(sxx_builtins_cafe::s251, { var2->Deref(), sxx_builtins_cafe::posint999, sxx_builtins_cafe::s528, var4->Deref(), var5->Deref(), var6->Deref(), continuation }) }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$write_term0_6::exec_pred_$write_term0_6);
}

static* function < Function*pred_$write_term_args_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_term_args_5__1(mach));
}

static* function < Function*pred_$write_term_args_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_args_5::exec_pred_$write_term_args_5__2);
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
if(!((areg4)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_args_5::(PrologMachine*) {
	mach::FillAlternative(pred_$write_term_args_5::exec_pred_$write_term_args_5__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,Const::Nil)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s251, { var1->Deref(), sxx_builtins_cafe::posint999, var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_term_args_5::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s251, { var1->Deref(), sxx_builtins_cafe::posint999, var3->Deref(), var7, var5->Deref(), var6->Deref(), F(sxx_builtins_cafe::s249, { var7->Deref(), sxx_builtins_cafe::s528, var6->Deref(), F(sxx_builtins_cafe::s531, { var6->Deref(), sxx_builtins_cafe::s266, F(sxx_builtins_cafe::s252, { var2->Deref(), sxx_builtins_cafe::s528, var4->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_op_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_op_3__1(mach));
}

static* function < Function*pred_op_3::(PrologMachine*) {
	mach::FillAlternative(pred_op_3::exec_pred_op_3__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s558,sxx_builtins_cafe::posint0,var1->Deref(),F(sxx_builtins_cafe::s558, { var1->Deref(), sxx_builtins_cafe::posint1200, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s161, { var1->Deref(), var2->Deref(), var3->Deref(), continuation })) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_op_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s436,F(sxx_builtins_cafe::s268,sxx_builtins_cafe::posint0,sxx_builtins_cafe::posint1200));
local_aregs[1] = F(sxx_builtins_cafe::s503, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$op1_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$op1_3__1(mach));
}

static* function < Function*pred_$op1_3::(PrologMachine*) {
	mach::FillAlternative(pred_$op1_3::exec_pred_$op1_3__2);
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s164, { var2->Deref(), var4, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s162, { var1->Deref(), var2->Deref(), var3->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_$op1_3::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s164, { var4->Deref(), var5 });
local_aregs[2] = var6;
local_aregs[3] = F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s581,var6->Deref()),F(sxx_builtins_cafe::s503, { var1->Deref(), var2->Deref(), var3->Deref() }),sxx_builtins_cafe::posint2,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_findall_3::exec_pred_findall_3);
}

static* function < Function*pred_$op2_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$op2_3__1(mach));
}

static* function < Function*pred_$op2_3::(PrologMachine*) {
	mach::FillAlternative(pred_$op2_3::exec_pred_$op2_3__2);
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
local_aregs[0] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s19,F(sxx_builtins_cafe::s272, { var3->Deref(), Const::Nil }),var1->Deref(),var2->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$op2_3::(PrologMachine*) {
	mach::FillAlternative(pred_$op2_3::exec_pred_$op2_3__3);
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
local_aregs[0] = var3->Deref();
local_aregs[1] = var4;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s19, { var4->Deref(), var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$op_atom_list_2::exec_pred_$op_atom_list_2);
}

static* function < Function*pred_$op2_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,F(sxx_builtins_cafe::s469,sxx_builtins_cafe::s335));
local_aregs[1] = F(sxx_builtins_cafe::s503, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint3;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$add_operators_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$add_operators_3__1(mach));
}

static* function < Function*pred_$add_operators_3::(PrologMachine*) {
	mach::FillAlternative(pred_$add_operators_3::exec_pred_$add_operators_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$add_operators_3::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s19, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$add_op_3::exec_pred_$add_op_3);
}

static* function < Function*pred_$add_op_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$add_op_3__1(mach));
}

static* function < Function*pred_$add_op_3::(PrologMachine*) {
	mach::FillAlternative(pred_$add_op_3::exec_pred_$add_op_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s266))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s515,sxx_builtins_cafe::s479,sxx_builtins_cafe::s505,sxx_builtins_cafe::s266,var3),F(sxx_builtins_cafe::s503, { var1->Deref(), var2->Deref(), sxx_builtins_cafe::s266 }),sxx_builtins_cafe::posint3,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$add_op_3::(PrologMachine*) {
	mach::FillAlternative(pred_$add_op_3::exec_pred_$add_op_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = F(sxx_builtins_cafe::s76,var4,var5,var1->Deref());
local_aregs[1] = var6;
local_aregs[2] = F(sxx_builtins_cafe::s164, { var3->Deref(), var7, F(sxx_builtins_cafe::s164, { var5->Deref(), var8, F(sxx_builtins_cafe::s593, { var8->Deref(), var7->Deref(), F(sxx_builtins_cafe::s551,F(sxx_builtins_cafe::s76,var9,var5->Deref(),var1->Deref()),F(sxx_builtins_cafe::s391, { continuation })) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$add_op_3::(PrologMachine*) {
	mach::FillAlternative(pred_$add_op_3::exec_pred_$add_op_3__4);
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
if(!((areg1)->Unify(sxx_builtins_cafe::posint0))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$add_op_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s76, { var2->Deref(), var3->Deref(), var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_assertz_1::exec_pred_assertz_1);
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$op_specifier_2__1(mach));
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s521))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s521))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s431))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s431))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s431))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_specifier_2::exec_pred_$op_specifier_2__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s605))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s518))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_specifier_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s609))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s518))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_atom_list_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$op_atom_list_2__1(mach));
}

static* function < Function*pred_$op_atom_list_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_atom_list_2::exec_pred_$op_atom_list_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s391, { continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$op_atom_list_2::(PrologMachine*) {
	mach::FillAlternative(pred_$op_atom_list_2::exec_pred_$op_atom_list_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$op_atom_list_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var3 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s163, { var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_current_op_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_current_op_3__1(mach));
}

static* function < Function*pred_current_op_3::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s76, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[1] = var4;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$current_operator_3__1(mach));
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s282))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s270))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s282))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s297))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s510))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s426))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s429))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s430))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s363))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s527))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s380))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s475))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s478))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__15);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s482))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__16);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s341))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__17);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s422))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__18);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s423))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__19);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s377))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__20);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1150))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s375))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__21);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1100))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s283))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__22);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1050))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s271))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__23);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint1000))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s266))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__24);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint900))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s311))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__25);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s286))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__26);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s313))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__27);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s290))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__28);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s314))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__29);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s299))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__30);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s301))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__31);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s300))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__32);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s302))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__33);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s287))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__34);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s440))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__35);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s288))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__36);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s291))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__37);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s284))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__38);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s292))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__39);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s289))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__40);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint700))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s293))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__41);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint550))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s278))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__42);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s264))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__43);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s268))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__44);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s13))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__45);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s277))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__46);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s312))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__47);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint500))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s402))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s264))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__48);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s260))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__49);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s275))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__50);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s276))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__51);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s477))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__52);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s546))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__53);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s285))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__54);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint400))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s610))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s294))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__55);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint300))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s632))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__56);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s606))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s261))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__57);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s607))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s316))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::FillAlternative(pred_$current_operator_3::exec_pred_$current_operator_3__58);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s310))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$current_operator_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::posint200))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s403))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(sxx_builtins_cafe::s268))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_not_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_1__1(mach));
}

static* function < Function*pred_not_1::(PrologMachine*) {
	mach::FillAlternative(pred_not_1::exec_pred_not_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s391, { continuation }));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_not_1::(PrologMachine*) {
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

static* function < Function*pred_repeat_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_repeat_0__1(mach));
}

static* function < Function*pred_repeat_0::(PrologMachine*) {
	mach::FillAlternative(pred_repeat_0::exec_pred_repeat_0__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_repeat_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_repeat_0::exec_pred_repeat_0);
}

static* function < Function*pred_once_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_once_1__1(mach));
}

static* function < Function*pred_once_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call2;
}

static* function < Function*pred_sub_atom_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sub_atom_5__1(mach));
}

static* function < Function*pred_sub_atom_5::(PrologMachine*) {
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
local_aregs[1] = var7;
local_aregs[2] = var1->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s338, { var6->Deref(), var2->Deref(), F(sxx_builtins_cafe::s337, { var5->Deref(), var8, var7->Deref(), F(sxx_builtins_cafe::s338, { var5->Deref(), var3->Deref(), F(sxx_builtins_cafe::s338, { var8->Deref(), var4->Deref(), continuation }) }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_concat_3::exec_pred_atom_concat_3);
}

static* function < Function*pred_name_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_name_2__1(mach));
}

static* function < Function*pred_name_2::(PrologMachine*) {
	mach::FillAlternative(pred_name_2::exec_pred_name_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s495, { var1->Deref() }),F(sxx_builtins_cafe::s496, { var1->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s339, { var1->Deref() }),F(sxx_builtins_cafe::s336, { var1->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s339),F(sxx_builtins_cafe::s485, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1)),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_name_2::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s496,var3,var2->Deref()),F(sxx_builtins_cafe::s286, { var1->Deref(), var3->Deref() })),F(sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s336, { var3->Deref(), var2->Deref() }),F(sxx_builtins_cafe::s286, { var1->Deref(), var3->Deref() })),F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,F(sxx_builtins_cafe::s469,sxx_builtins_cafe::s352)),F(sxx_builtins_cafe::s485, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint2)),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_regex_matches_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_regex_matches_3__1(mach));
}

static* function < Function*pred_regex_matches_3::(PrologMachine*) {
	mach::FillAlternative(pred_regex_matches_3::exec_pred_regex_matches_3__2);
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
local_aregs[0] = F(sxx_builtins_cafe::s391, { continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_regex_matches_3::(PrologMachine*) {
	mach::FillAlternative(pred_regex_matches_3::exec_pred_regex_matches_3__3);
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s272,var4,var5);
local_aregs[1] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s543, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_regex_matches_3::(PrologMachine*) {
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
local_aregs[0] = var2->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s542, { var1->Deref(), var4, F(sxx_builtins_cafe::s544, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_regex_matches_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_regex_matches_2__1(mach));
}

static* function < Function*pred_regex_matches_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s545, { var1->Deref(), var2->Deref(), var3 });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_once_1::exec_pred_once_1);
}

static* function < Function*pred_regex_list_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_regex_list_3__1(mach));
}

static* function < Function*pred_regex_list_3::(PrologMachine*) {
	mach::FillAlternative(pred_regex_list_3::exec_pred_regex_list_3__2);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_regex_matches_3::exec_pred_regex_matches_3);
}

static* function < Function*pred_regex_list_3::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_regex_list_3::exec_pred_regex_list_3);
}

static* function < Function*pred_set_prolog_flag_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_prolog_flag_2__1(mach));
}

static* function < Function*pred_set_prolog_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_prolog_flag_2::exec_pred_set_prolog_flag_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s555, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_set_prolog_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_prolog_flag_2::exec_pred_set_prolog_flag_2__3);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s555, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint2,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_set_prolog_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_prolog_flag_2::exec_pred_set_prolog_flag_2__4);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s210, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_set_prolog_flag_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335);
local_aregs[1] = F(sxx_builtins_cafe::s555, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$set_prolog_flag0_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$set_prolog_flag0_2__1(mach));
}

static* function < Function*pred_$set_prolog_flag0_2::(PrologMachine*) {
	mach::FillAlternative(pred_$set_prolog_flag0_2::exec_pred_$set_prolog_flag0_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s351,var4);
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s210, { var4->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3);
}

static* function < Function*pred_$set_prolog_flag0_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s335,sxx_builtins_cafe::s526);
local_aregs[1] = F(sxx_builtins_cafe::s555, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$set_prolog_flag0_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$set_prolog_flag0_4__1(mach));
}

static* function < Function*pred_$set_prolog_flag0_4::(PrologMachine*) {
	mach::FillAlternative(pred_$set_prolog_flag0_4::exec_pred_$set_prolog_flag0_4__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s488))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s515,sxx_builtins_cafe::s479,sxx_builtins_cafe::s395,var1->Deref(),var4),F(sxx_builtins_cafe::s555, { var1->Deref(), var2->Deref() }),var5,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$set_prolog_flag0_4::(PrologMachine*) {
	mach::FillAlternative(pred_$set_prolog_flag0_4::exec_pred_$set_prolog_flag0_4__3);
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
local_aregs[0] = var3->Deref();
local_aregs[1] = var4->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s211, { var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_member_2::exec_pred_$builtin_member_2);
}

static* function < Function*pred_$set_prolog_flag0_4::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s335,sxx_builtins_cafe::s396);
local_aregs[1] = F(sxx_builtins_cafe::s555, { var2->Deref(), var3->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint2;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_current_prolog_flag_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_current_prolog_flag_2__1(mach));
}

static* function < Function*pred_current_prolog_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s194, { var1->Deref(), var3, var4, F(sxx_builtins_cafe::s112, { var1->Deref(), var2->Deref(), continuation }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_current_prolog_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s194, { var1->Deref(), var3, var4 }),F(sxx_builtins_cafe::s112, { var1->Deref(), var2->Deref() })),F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s335,sxx_builtins_cafe::s526),F(sxx_builtins_cafe::s373, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_current_prolog_flag_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335);
local_aregs[1] = F(sxx_builtins_cafe::s373, { var1->Deref(), var2->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$prolog_impl_flag_3__1(mach));
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s474))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s488)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s476))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s488)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s376))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s499,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s498,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s608)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s473))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s488)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s594))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s382,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s391,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s599,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s608)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_impl_flag_3::exec_pred_$prolog_impl_flag_3__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s379))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s354,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s359,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s335,Const::Nil)))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s488)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$prolog_impl_flag_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s524))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s499,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s498,Const::Nil))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s351,sxx_builtins_cafe::s608)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_halt_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_halt_0__1(mach));
}

static* function < Function*pred_halt_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint0;
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_halt_1::exec_pred_halt_1);
}

static* function < Function*pred_abort_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_abort_0__1(mach));
}

static* function < Function*pred_abort_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s305;
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_C_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_C_3__1(mach));
}

static* function < Function*pred_C_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_expand_term_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_expand_term_2__1(mach));
}

static* function < Function*pred_expand_term_2::(PrologMachine*) {
	mach::FillAlternative(pred_expand_term_2::exec_pred_expand_term_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_expand_term_2::(PrologMachine*) {
	mach::FillAlternative(pred_expand_term_2::exec_pred_expand_term_2__3);
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
local_aregs[1] = var3;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$dcg_expansion_2::exec_pred_$dcg_expansion_2);
}

static* function < Function*pred_expand_term_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
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

static* function < Function*pred_$dcg_expansion_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_expansion_2__1(mach));
}

static* function < Function*pred_$dcg_expansion_2::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_expansion_2::exec_pred_$dcg_expansion_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$dcg_expansion_2::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_expansion_2::exec_pred_$dcg_expansion_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s270,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var3,F(sxx_builtins_cafe::s266,var4,var5))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s266,var6,var7),var1->Deref(),F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s272,var8,var9),var7->Deref(),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s84, { var6->Deref(), var3->Deref(), var10, var11, F(sxx_builtins_cafe::s83, { var2->Deref(), var4->Deref(), var10->Deref(), var12, F(sxx_builtins_cafe::s83, { var7->Deref(), var5->Deref(), var11->Deref(), var12->Deref(), continuation }) }) }))));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_$dcg_expansion_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var6 = V(mach);
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s270,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var5;
local_aregs[3] = var6;
local_aregs[4] = F(sxx_builtins_cafe::s83, { var2->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$dcg_translation_atom_4::exec_pred_$dcg_translation_atom_4);
}

static* function < Function*pred_$dcg_translation_atom_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_translation_atom_4__1(mach));
}

static* function < Function*pred_$dcg_translation_atom_4::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_translation_atom_4::exec_pred_$dcg_translation_atom_4__2);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s517, { var1->Deref(), var2, var3 })))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$dcg_translation_atom_4::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_translation_atom_4::exec_pred_$dcg_translation_atom_4__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[4];
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s278, { var1->Deref(), var3 })))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s84, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_translation_atom_4::(PrologMachine*) {
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
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var5,var6);
local_aregs[2] = F(sxx_builtins_cafe::s42, { var6->Deref(), F(sxx_builtins_cafe::s272, { var3->Deref(), F(sxx_builtins_cafe::s272, { var4->Deref(), Const::Nil }) }), var7, F(sxx_builtins_cafe::s287, { var2->Deref(), F(sxx_builtins_cafe::s272, { var5->Deref(), var7->Deref() }), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_$dcg_translation_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_translation_4__1(mach));
}

static* function < Function*pred_$dcg_translation_4::(PrologMachine*) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var5;
local_aregs[2] = var6;
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s82, { var5->Deref(), var2->Deref(), var6->Deref(), var3->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$dcg_trans_5::exec_pred_$dcg_trans_5);
}

static* function < Function*pred_$dcg_trans0_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_trans0_5__1(mach));
}

static* function < Function*pred_$dcg_trans0_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans0_5::exec_pred_$dcg_trans0_5__2);
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
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var3->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_strict_noteq_2::exec_pred_sym_strict_noteq_2);
}

static* function < Function*pred_$dcg_trans0_5::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s286, { var5->Deref(), var3->Deref() });
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$dcg_concat_3::exec_pred_$dcg_concat_3);
}

static* function < Function*pred_$dcg_concat_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_concat_3__1(mach));
}

static* function < Function*pred_$dcg_concat_3::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_concat_3::exec_pred_$dcg_concat_3__2);
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
local_aregs[1] = sxx_builtins_cafe::s590;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var2->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$dcg_concat_3::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_concat_3::exec_pred_$dcg_concat_3__3);
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
local_aregs[0] = var2->Deref();
local_aregs[1] = sxx_builtins_cafe::s590;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593, { var1->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_pred_termequal_2);
}

static* function < Function*pred_$dcg_concat_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg2)->Unify(F(sxx_builtins_cafe::s266, { var1->Deref(), var2->Deref() })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$dcg_trans_5__1(mach));
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__2);
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
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s84, { var1->Deref(), var2->Deref(), var4->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__3);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s278, { var1->Deref(), var3 })))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s81, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__4);
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
if(!((areg1)->Unify(sxx_builtins_cafe::s590))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s81, { var2->Deref(), var7, var4->Deref(), var8, var6->Deref(), F(sxx_builtins_cafe::s79,F(sxx_builtins_cafe::s303, { var5->Deref(), var1->Deref(), var8->Deref() }),var7->Deref(),var3->Deref(),continuation) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s311,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s271,var2,sxx_builtins_cafe::s391),F(sxx_builtins_cafe::s286,var3,var4))))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var4->Deref()))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var3->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s81, { var1->Deref(), var2->Deref(), var5, var4->Deref(), var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__7);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s266,var1,var2)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s81, { var1->Deref(), var7, var8, var5->Deref(), var8->Deref(), F(sxx_builtins_cafe::s81, { var2->Deref(), var9, var4->Deref(), var8->Deref(), var6->Deref(), F(sxx_builtins_cafe::s79, { var7->Deref(), var9->Deref(), var3->Deref(), continuation }) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__8);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s271,var3,var4)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s81, { var1->Deref(), var3->Deref(), var8, var6->Deref(), var8->Deref(), F(sxx_builtins_cafe::s81, { var2->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var7->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__9);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s283,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s283,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var5->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s83, { var1->Deref(), var3->Deref(), var6->Deref(), var5->Deref(), F(sxx_builtins_cafe::s83, { var2->Deref(), var4->Deref(), var6->Deref(), var5->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[5];
Term* areg4 = local_aregs[4]->Deref();
Term* areg3 = local_aregs[3]->Deref();
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s11))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(sxx_builtins_cafe::s11))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__11);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s628,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s347, { var1->Deref() })))) {
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
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
	mach::FillAlternative(pred_$dcg_trans_5::exec_pred_$dcg_trans_5__12);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s628,var1)))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$dcg_trans_5::(PrologMachine*) {
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
if(!((areg4)->Unify(var3->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$dcg_translation_atom_4::exec_pred_$dcg_translation_atom_4);
}

static* function < Function*pred_new_hash_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_new_hash_1__1(mach));
}

static* function < Function*pred_new_hash_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = Const::Nil;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_new_hash_2::exec_pred_new_hash_2);
}

static* function < Function*pred_hash_map_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_hash_map_2__1(mach));
}

static* function < Function*pred_hash_map_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s560, { var3->Deref(), var4, F(sxx_builtins_cafe::s417, { var4->Deref(), var2->Deref(), var1->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_keys_2::exec_pred_hash_keys_2);
}

static* function < Function*pred_hash_map_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_hash_map_3__1(mach));
}

static* function < Function*pred_hash_map_3::(PrologMachine*) {
	mach::FillAlternative(pred_hash_map_3::exec_pred_hash_map_3__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_hash_map_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s266, { var1->Deref(), var3 }),var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var5->Deref();
local_aregs[1] = var1->Deref();
local_aregs[2] = var3->Deref();
local_aregs[3] = F(sxx_builtins_cafe::s417, { var2->Deref(), var4->Deref(), var5->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_hash_get_3::exec_pred_hash_get_3);
}

static* function < Function*pred_hash_exists_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_hash_exists_1__1(mach));
}

static* function < Function*pred_hash_exists_1::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s109,var2,F(sxx_builtins_cafe::s413, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_java_constructor_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_constructor_2__1(mach));
}

static* function < Function*pred_java_constructor_2::(PrologMachine*) {
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var3,var4);
local_aregs[2] = F(sxx_builtins_cafe::s342, { var4->Deref(), var5, F(sxx_builtins_cafe::s287,var6,F(sxx_builtins_cafe::s272, { var3->Deref(), var5->Deref() }),F(sxx_builtins_cafe::s445, { var6->Deref(), var7, F(sxx_builtins_cafe::s593, { var7->Deref(), var2->Deref(), continuation }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_java_declared_constructor_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_declared_constructor_2__1(mach));
}

static* function < Function*pred_java_declared_constructor_2::(PrologMachine*) {
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
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var3,var4);
local_aregs[2] = F(sxx_builtins_cafe::s342, { var4->Deref(), var5, F(sxx_builtins_cafe::s287,var6,F(sxx_builtins_cafe::s272, { var3->Deref(), var5->Deref() }),F(sxx_builtins_cafe::s448, { var6->Deref(), var7, F(sxx_builtins_cafe::s593, { var7->Deref(), var2->Deref(), continuation }) })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_java_method_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_method_3__1(mach));
}

static* function < Function*pred_java_method_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = var2->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var4,var5);
local_aregs[2] = F(sxx_builtins_cafe::s342, { var5->Deref(), var6, F(sxx_builtins_cafe::s287,var7,F(sxx_builtins_cafe::s272, { var4->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s457, { var1->Deref(), var7->Deref(), var8, F(sxx_builtins_cafe::s446,var9,var8->Deref(),F(sxx_builtins_cafe::s593, { var9->Deref(), var3->Deref(), continuation })) })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_java_declared_method_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_declared_method_3__1(mach));
}

static* function < Function*pred_java_declared_method_3::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
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
local_aregs[0] = var2->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s272,var4,var5);
local_aregs[2] = F(sxx_builtins_cafe::s342, { var5->Deref(), var6, F(sxx_builtins_cafe::s287,var7,F(sxx_builtins_cafe::s272, { var4->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s450, { var1->Deref(), var7->Deref(), var8, F(sxx_builtins_cafe::s446,var9,var8->Deref(),F(sxx_builtins_cafe::s593, { var9->Deref(), var3->Deref(), continuation })) })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_pred_sym_system_univ_2);
}

static* function < Function*pred_java_get_field_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_get_field_3__1(mach));
}

static* function < Function*pred_java_get_field_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s446,var5,var4->Deref(),F(sxx_builtins_cafe::s593, { var5->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_get_field0_3::exec_pred_java_get_field0_3);
}

static* function < Function*pred_java_get_declared_field_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_get_declared_field_3__1(mach));
}

static* function < Function*pred_java_get_declared_field_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s446,var5,var4->Deref(),F(sxx_builtins_cafe::s593, { var5->Deref(), var3->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_get_declared_field0_3::exec_pred_java_get_declared_field0_3);
}

static* function < Function*pred_java_set_field_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_set_field_3__1(mach));
}

static* function < Function*pred_java_set_field_3::(PrologMachine*) {
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
local_aregs[0] = var3->Deref();
local_aregs[1] = var4;
local_aregs[2] = F(sxx_builtins_cafe::s461, { var1->Deref(), var2->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_conversion_2::exec_pred_java_conversion_2);
}

static* function < Function*pred_java_set_declared_field_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_java_set_declared_field_3__1(mach));
}

static* function < Function*pred_java_set_declared_field_3::(PrologMachine*) {
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
local_aregs[0] = var3->Deref();
local_aregs[1] = var4;
local_aregs[2] = F(sxx_builtins_cafe::s459, { var1->Deref(), var2->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_conversion_2::exec_pred_java_conversion_2);
}

static* function < Function*pred_builtin_java_convert_args_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_builtin_java_convert_args_2__1(mach));
}

static* function < Function*pred_builtin_java_convert_args_2::(PrologMachine*) {
	mach::FillAlternative(pred_builtin_java_convert_args_2::exec_pred_builtin_java_convert_args_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_builtin_java_convert_args_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s342, { var2->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_conversion_2::exec_pred_java_conversion_2);
}

static* function < Function*pred_synchronized_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_synchronized_2__1(mach));
}

static* function < Function*pred_synchronized_2::(PrologMachine*) {
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
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s347, { var2->Deref(), F(sxx_builtins_cafe::s89, { var3->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$begin_sync_2::exec_pred_$begin_sync_2);
}

static* function < Function*pred_cafeteria_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cafeteria_0__1(mach));
}

static* function < Function*pred_cafeteria_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var2 = V(mach);
Var* var1 = V(mach);
HeapChoice tempVar(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s548,F(sxx_builtins_cafe::s230,F(sxx_builtins_cafe::s500,var1,F(sxx_builtins_cafe::s49,var2),F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s382,var1->Deref()),F(sxx_builtins_cafe::s582, { var2->Deref(), sxx_builtins_cafe::s381, F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s343,F(sxx_builtins_cafe::s487, { continuation })))) }))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$cafeteria_init_0::exec_pred_$cafeteria_init_0);
}

static* function < Function*pred_$cafeteria_init_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$cafeteria_init_0__1(mach));
}

static* function < Function*pred_$cafeteria_init_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
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
local_aregs[0] = F(sxx_builtins_cafe::s130,var1);
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s75,var2),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s77,var3,var4,var5),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s70,var6),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s72,var7),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s73,var8,var9,var10),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s130,sxx_builtins_cafe::s488),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s347),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s387),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s540),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s391),F(sxx_builtins_cafe::s0, &tempVar,continuation)))))))))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_$toplvel_loop_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$toplvel_loop_0__1(mach));
}

static* function < Function*pred_$toplvel_loop_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var1 = V(mach);
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = var1;
local_aregs[2] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s290, { var1->Deref(), sxx_builtins_cafe::s498 }),sxx_builtins_cafe::s590),F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s376,Const::Nil)),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s630,F(sxx_builtins_cafe::s398, { continuation })));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2);
}

static* function < Function*pred_$cafeteria_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$cafeteria_1__1(mach));
}

static* function < Function*pred_$cafeteria_1::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s192, { var1->Deref(), var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_read_with_variables_2::exec_pred_read_with_variables_2);
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$process_order_2__1(mach));
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_$process_order_2::exec_pred_$process_order_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s297, { var1->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_$process_order_2::exec_pred_$process_order_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s381))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_$process_order_2::exec_pred_$process_order_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s364,F(sxx_builtins_cafe::s272, { var1->Deref(), var2->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_$process_order_2::exec_pred_$process_order_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = var3;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s290, { var3->Deref(), sxx_builtins_cafe::s498 }),F(sxx_builtins_cafe::s347,F(sxx_builtins_cafe::s278,sxx_builtins_cafe::s595,var1->Deref()))),F(sxx_builtins_cafe::s231,F(sxx_builtins_cafe::s278,sxx_builtins_cafe::s595,var1->Deref())),F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s206, { var2->Deref(), var4, F(sxx_builtins_cafe::s115, { var4->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s608,F(sxx_builtins_cafe::s487, { continuation }))) }) })));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2);
}

static* function < Function*pred_$process_order_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s488,F(sxx_builtins_cafe::s487, { continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nl_0::exec_pred_nl_0);
}

static* function < Function*pred_$rm_redundant_vars_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$rm_redundant_vars_2__1(mach));
}

static* function < Function*pred_$rm_redundant_vars_2::(PrologMachine*) {
	mach::FillAlternative(pred_$rm_redundant_vars_2::exec_pred_$rm_redundant_vars_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$rm_redundant_vars_2::(PrologMachine*) {
	mach::FillAlternative(pred_$rm_redundant_vars_2::exec_pred_$rm_redundant_vars_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s286,sxx_builtins_cafe::s317,var1),var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s206, { var2->Deref(), var3->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$rm_redundant_vars_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var3 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$rm_redundant_vars_2::exec_pred_$rm_redundant_vars_2);
}

static* function < Function*pred_$give_answers_with_prompt_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$give_answers_with_prompt_1__1(mach));
}

static* function < Function*pred_$give_answers_with_prompt_1::(PrologMachine*) {
	mach::FillAlternative(pred_$give_answers_with_prompt_1::exec_pred_$give_answers_with_prompt_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$give_answers_with_prompt_1::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s8,F(sxx_builtins_cafe::s398,F(sxx_builtins_cafe::s536,var2,F(sxx_builtins_cafe::s314, { var2->Deref(), Const::Intern(";"), F(sxx_builtins_cafe::s487, { continuation }) }))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$give_an_answer_1::exec_pred_$give_an_answer_1);
}

static* function < Function*pred_$give_an_answer_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$give_an_answer_1__1(mach));
}

static* function < Function*pred_$give_an_answer_1::(PrologMachine*) {
	mach::FillAlternative(pred_$give_an_answer_1::exec_pred_$give_an_answer_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s590,continuation);
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$give_an_answer_1::(PrologMachine*) {
	mach::FillAlternative(pred_$give_an_answer_1::exec_pred_$give_an_answer_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s190, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$give_an_answer_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s114, { var2->Deref(), continuation })));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$print_an) answer_1::exec_pred_$print_an answer_1;
}

static* function < Function*pred_$print_an::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$print_an) answer_1__1(mach);
}

static* function < Function*pred_$print_an::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s286,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s7,F(sxx_builtins_cafe::s604, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_pred_write_1);
}

static* function < Function*pred_consult_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_consult_1__1(mach));
}

static* function < Function*pred_consult_1::(PrologMachine*) {
	mach::FillAlternative(pred_consult_1::exec_pred_consult_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s364, { var1->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_consult_1::(PrologMachine*) {
	mach::FillAlternative(pred_consult_1::exec_pred_consult_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_consult_1::(PrologMachine*) {
	mach::FillAlternative(pred_consult_1::exec_pred_consult_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s364, { var1->Deref(), F(sxx_builtins_cafe::s364, { var2->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_consult_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s65, { var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$consult_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$consult_1__1(mach));
}

static* function < Function*pred_$consult_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = F(sxx_builtins_cafe::s504, { var2->Deref(), sxx_builtins_cafe::s535, var3, F(sxx_builtins_cafe::s570, { var3->Deref(), F(sxx_builtins_cafe::s393,var4), F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s367,F(sxx_builtins_cafe::s272, { var4->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s273,Const::Nil) })),F(sxx_builtins_cafe::s565,sxx_builtins_cafe::s554,var5,F(sxx_builtins_cafe::s365, { var4->Deref(), var3->Deref(), F(sxx_builtins_cafe::s565,sxx_builtins_cafe::s554,F(sxx_builtins_cafe::s272,var6,F(sxx_builtins_cafe::s272,var7,Const::Nil)),F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272, { var4->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s366,F(sxx_builtins_cafe::s272, { var7->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s481,Const::Nil) })) }),F(sxx_builtins_cafe::s357, { var3->Deref(), continuation }))) }))) }) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$prolog_file_name_2::exec_pred_$prolog_file_name_2);
}

static* function < Function*pred_consult_stream_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_consult_stream_2__1(mach));
}

static* function < Function*pred_consult_stream_2::(PrologMachine*) {
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s548,F(sxx_builtins_cafe::s535, { var2->Deref(), var3, F(sxx_builtins_cafe::s66, { var3->Deref(), F(sxx_builtins_cafe::s582, { var3->Deref(), sxx_builtins_cafe::s381, F(sxx_builtins_cafe::s0, &tempVar,continuation) }) }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$consult_init_1::exec_pred_$consult_init_1);
}

static* function < Function*pred_$prolog_file_name_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$prolog_file_name_2__1(mach));
}

static* function < Function*pred_$prolog_file_name_2::(PrologMachine*) {
	mach::FillAlternative(pred_$prolog_file_name_2::exec_pred_$prolog_file_name_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = var3;
local_aregs[3] = var4;
local_aregs[4] = sxx_builtins_cafe::s272;
HeapChoice tempVar(mach::CUTB);
local_aregs[5] = F(sxx_builtins_cafe::s559,sxx_builtins_cafe::posint0,var4->Deref(),F(sxx_builtins_cafe::s0, &tempVar,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_sub_atom_5::exec_pred_sub_atom_5);
}

static* function < Function*pred_$prolog_file_name_2::(PrologMachine*) {
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
local_aregs[1] = sxx_builtins_cafe::s274;
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_concat_3::exec_pred_atom_concat_3);
}

static* function < Function*pred_$consult_init_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$consult_init_1__1(mach));
}

static* function < Function*pred_$consult_init_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_init_1::exec_pred_$consult_init_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = F(sxx_builtins_cafe::s70,var2);
local_aregs[1] = F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s72,var3),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s71, { var1->Deref(), var4 }),F(sxx_builtins_cafe::s551,F(sxx_builtins_cafe::s73,var5,var6,var1->Deref()),F(sxx_builtins_cafe::s320,F(sxx_builtins_cafe::s278, { var5->Deref(), var6->Deref() }),F(sxx_builtins_cafe::s391, { continuation })))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_$consult_init_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s70, { var1->Deref() });
local_aregs[1] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s72,sxx_builtins_cafe::s595),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_assertz_1::exec_pred_assertz_1);
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$consult_clause_1__1(mach));
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s381))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s480,var1,var2))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s26, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s510,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s26, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s426,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s25, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s380,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s527,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s475,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s478,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s482,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,F(sxx_builtins_cafe::s341,var1))))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_clause_1::exec_pred_$consult_clause_1__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s72,var2),var3,F(sxx_builtins_cafe::s502,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }),continuation));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_clause_1::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s67, { var2->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$consult_preprocess_2::exec_pred_$consult_preprocess_2);
}

static* function < Function*pred_$assert_consulted_package_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$assert_consulted_package_1__1(mach));
}

static* function < Function*pred_$assert_consulted_package_1::(PrologMachine*) {
	mach::FillAlternative(pred_$assert_consulted_package_1::exec_pred_$assert_consulted_package_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s72, { var1->Deref() });
local_aregs[1] = var2;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$assert_consulted_package_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s72,var2);
local_aregs[1] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s72, { var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_$assert_consulted_import_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$assert_consulted_import_1__1(mach));
}

static* function < Function*pred_$assert_consulted_import_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s70,var2);
local_aregs[1] = var3;
local_aregs[2] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s71, { var2->Deref(), var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$consult_preprocess_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$consult_preprocess_2__1(mach));
}

static* function < Function*pred_$consult_preprocess_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_expand_term_2::exec_pred_expand_term_2);
}

static* function < Function*pred_$consult_cls_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$consult_cls_1__1(mach));
}

static* function < Function*pred_$consult_cls_1::(PrologMachine*) {
	mach::FillAlternative(pred_$consult_cls_1::exec_pred_$consult_cls_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s282,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s24,F(sxx_builtins_cafe::s282, { var1->Deref(), var2->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$consult_cls_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s282, { var1->Deref(), sxx_builtins_cafe::s590 });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$assert_consulted_clause_1::exec_pred_$assert_consulted_clause_1);
}

static* function < Function*pred_$assert_consulted_clause_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$assert_consulted_clause_1__1(mach));
}

static* function < Function*pred_$assert_consulted_clause_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
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
local_aregs[0] = F(sxx_builtins_cafe::s282,var2,var3);
local_aregs[1] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s401, { var2->Deref(), var4, var5, F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s70,var6),var7,F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s72,var8),var9,F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s278, { var8->Deref(), var1->Deref() }),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s73, { var8->Deref(), F(sxx_builtins_cafe::s275, { var4->Deref(), var5->Deref() }), var6->Deref() }),F(sxx_builtins_cafe::s0, &tempVar,continuation))))) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_pred_unify_2);
}

static* function < Function*pred_trace_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_trace_0__1(mach));
}

static* function < Function*pred_trace_0::(PrologMachine*) {
	mach::FillAlternative(pred_trace_0::exec_pred_trace_0__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = sxx_builtins_cafe::s499;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2);
}

static* function < Function*pred_trace_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = sxx_builtins_cafe::s499;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s232,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s625,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s0, &tempVar,continuation))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_set_prolog_flag_2::exec_pred_set_prolog_flag_2);
}

static* function < Function*pred_$trace_init_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$trace_init_0__1(mach));
}

static* function < Function*pred_$trace_init_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
local_aregs[0] = F(sxx_builtins_cafe::s130,var1);
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s75,var2),F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s77,var3,var4,var5),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s130,sxx_builtins_cafe::s488),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s347),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s387),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s540),F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75,sxx_builtins_cafe::s391),F(sxx_builtins_cafe::s0, &tempVar,continuation))))))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_notrace_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notrace_0__1(mach));
}

static* function < Function*pred_notrace_0::(PrologMachine*) {
	mach::FillAlternative(pred_notrace_0::exec_pred_notrace_0__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = sxx_builtins_cafe::s498;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_current_prolog_flag_2::exec_pred_current_prolog_flag_2);
}

static* function < Function*pred_notrace_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::s376;
local_aregs[1] = sxx_builtins_cafe::s498;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s624,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s0, &tempVar,continuation)));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_set_prolog_flag_2::exec_pred_set_prolog_flag_2);
}

static* function < Function*pred_debug_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_debug_0__1(mach));
}

static* function < Function*pred_debug_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_trace_0::exec_pred_trace_0);
}

static* function < Function*pred_nodebug_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nodebug_0__1(mach));
}

static* function < Function*pred_nodebug_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_notrace_0::exec_pred_notrace_0);
}

static* function < Function*pred_spy_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_spy_1__1(mach));
}

static* function < Function*pred_spy_1::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s561, { var1->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s588,F(sxx_builtins_cafe::s28, { var2->Deref(), F(sxx_builtins_cafe::s208,sxx_builtins_cafe::s463,sxx_builtins_cafe::s608,F(sxx_builtins_cafe::s0, &tempVar,continuation)) }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_predicateindicator_3::exec_pred_$term_to_predicateindicator_3);
}

static* function < Function*pred_$assert_spypoint_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$assert_spypoint_1__1(mach));
}

static* function < Function*pred_$assert_spypoint_1::(PrologMachine*) {
	mach::FillAlternative(pred_$assert_spypoint_1::exec_pred_$assert_spypoint_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s77, { var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[1] = var4;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s562,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }) }),F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s440,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s328,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s323,Const::Nil))))),F(sxx_builtins_cafe::s0, &tempVar,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$assert_spypoint_1::(PrologMachine*) {
	mach::FillAlternative(pred_$assert_spypoint_1::exec_pred_$assert_spypoint_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s73, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }), var4 });
local_aregs[1] = var5;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s77, { var1->Deref(), var2->Deref(), var3->Deref() }),F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s562,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }) }),F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s440,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s323,Const::Nil)))),F(sxx_builtins_cafe::s0, &tempVar,continuation)));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$assert_spypoint_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::s599;
local_aregs[1] = F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s488,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s472,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s519,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s399,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s561,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }) }),Const::Nil))))));
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_print_message_2::exec_pred_print_message_2);
}

static* function < Function*pred_nospy_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nospy_1__1(mach));
}

static* function < Function*pred_nospy_1::(PrologMachine*) {
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
local_aregs[2] = F(sxx_builtins_cafe::s491, { var1->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[3] = F(sxx_builtins_cafe::s204, { var2->Deref(), F(sxx_builtins_cafe::s208,sxx_builtins_cafe::s463,sxx_builtins_cafe::s488,F(sxx_builtins_cafe::s0, &tempVar,continuation)) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$term_to_predicateindicator_3::exec_pred_$term_to_predicateindicator_3);
}

static* function < Function*pred_$retract_spypoint_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$retract_spypoint_1__1(mach));
}

static* function < Function*pred_$retract_spypoint_1::(PrologMachine*) {
	mach::FillAlternative(pred_$retract_spypoint_1::exec_pred_$retract_spypoint_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,F(sxx_builtins_cafe::s275,var2,var3))))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s77, { var1->Deref(), var2->Deref(), var3->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s562,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var1->Deref(), F(sxx_builtins_cafe::s275, { var2->Deref(), var3->Deref() }) }),F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s440,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s547,Const::Nil)))),F(sxx_builtins_cafe::s0, &tempVar,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retract_1::exec_pred_retract_1);
}

static* function < Function*pred_$retract_spypoint_1::(PrologMachine*) {
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

static* function < Function*pred_nospyall_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nospyall_0__1(mach));
}

static* function < Function*pred_nospyall_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
local_aregs[0] = F(sxx_builtins_cafe::s77,var1,var2,var3);
local_aregs[1] = F(sxx_builtins_cafe::s208,sxx_builtins_cafe::s463,sxx_builtins_cafe::s488,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_leash_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_leash_1__1(mach));
}

static* function < Function*pred_leash_1::(PrologMachine*) {
	mach::FillAlternative(pred_leash_1::exec_pred_leash_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s131, { var1->Deref(), F(sxx_builtins_cafe::s0, &tempVar,continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_leash_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s465);
local_aregs[1] = F(sxx_builtins_cafe::s464, { var1->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$leash_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$leash_1__1(mach));
}

static* function < Function*pred_$leash_1::(PrologMachine*) {
	mach::FillAlternative(pred_$leash_1::exec_pred_$leash_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s552,F(sxx_builtins_cafe::s75,var1),F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s488,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s466,Const::Nil)),continuation));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$leash_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s75,var2);
local_aregs[1] = F(sxx_builtins_cafe::s27, { var1->Deref(), F(sxx_builtins_cafe::s522,sxx_builtins_cafe::s432,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s466,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s566,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s499,F(sxx_builtins_cafe::s272, { var1->Deref(), Const::Nil })))),continuation) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_$assert_leash_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$assert_leash_1__1(mach));
}

static* function < Function*pred_$assert_leash_1::(PrologMachine*) {
	mach::FillAlternative(pred_$assert_leash_1::exec_pred_$assert_leash_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$assert_leash_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s75, { var1->Deref() }),F(sxx_builtins_cafe::s27, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$leash_specifier_1::exec_pred_$leash_specifier_1);
}

static* function < Function*pred_$leash_specifier_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$leash_specifier_1__1(mach));
}

static* function < Function*pred_$leash_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$leash_specifier_1::exec_pred_$leash_specifier_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s347))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$leash_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$leash_specifier_1::exec_pred_$leash_specifier_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s387))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$leash_specifier_1::(PrologMachine*) {
	mach::FillAlternative(pred_$leash_specifier_1::exec_pred_$leash_specifier_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s540))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$leash_specifier_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s391))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$trace_goal_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$trace_goal_1__1(mach));
}

static* function < Function*pred_$trace_goal_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::s463;
local_aregs[1] = sxx_builtins_cafe::s488;
local_aregs[2] = F(sxx_builtins_cafe::s107,var2,F(sxx_builtins_cafe::s147, { var1->Deref(), sxx_builtins_cafe::s595, var2->Deref(), sxx_builtins_cafe::posint0, sxx_builtins_cafe::s588, continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$set_debug_flag_2::exec_pred_$set_debug_flag_2);
}

static* function < Function*pred_$trace_goal_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$trace_goal_4__1(mach));
}

static* function < Function*pred_$trace_goal_4::(PrologMachine*) {
	mach::FillAlternative(pred_$trace_goal_4::exec_pred_$trace_goal_4__2);
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
local_aregs[0] = sxx_builtins_cafe::s347;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s55, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), sxx_builtins_cafe::s588, F(sxx_builtins_cafe::s523,sxx_builtins_cafe::s387,var1->Deref(),var2->Deref(),var3->Deref(),var4->Deref(),F(sxx_builtins_cafe::s541, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_print_procedure_box_5::exec_pred_print_procedure_box_5);
}

static* function < Function*pred_$trace_goal_4::(PrologMachine*) {
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
local_aregs[0] = sxx_builtins_cafe::s391;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s391, { continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_print_procedure_box_5::exec_pred_print_procedure_box_5);
}

static* function < Function*pred_print_procedure_box_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_print_procedure_box_5__1(mach));
}

static* function < Function*pred_print_procedure_box_5::(PrologMachine*) {
	mach::FillAlternative(pred_print_procedure_box_5::exec_pred_print_procedure_box_5__2);
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
if(!((areg3)->Unify(F(sxx_builtins_cafe::s275,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg4)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s77, { var3->Deref(), var4->Deref(), var5->Deref() });
local_aregs[1] = var7;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s45,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s264,F(sxx_builtins_cafe::s272, { var6->Deref(), F(sxx_builtins_cafe::s272, { var1->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var3->Deref(), var2->Deref() }),Const::Nil)) }) })),F(sxx_builtins_cafe::s196,F(sxx_builtins_cafe::s523, { var1->Deref(), var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s275, { var4->Deref(), var5->Deref() }), var6->Deref() }),continuation)));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_print_procedure_box_5::(PrologMachine*) {
	mach::FillAlternative(pred_print_procedure_box_5::exec_pred_print_procedure_box_5__3);
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
local_aregs[0] = F(sxx_builtins_cafe::s130,sxx_builtins_cafe::s488);
local_aregs[1] = var6;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s45,F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s272, { var5->Deref(), F(sxx_builtins_cafe::s272, { var1->Deref(), F(sxx_builtins_cafe::s272,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s278, { var3->Deref(), var2->Deref() }),Const::Nil)) }) })),F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s356,F(sxx_builtins_cafe::s75, { var1->Deref() }),var7),F(sxx_builtins_cafe::s196,F(sxx_builtins_cafe::s523, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }))),sxx_builtins_cafe::s487,continuation)));
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_print_procedure_box_5::(PrologMachine*) {
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_redo_procedure_box_4::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
std::vector<Term*> aregs = mach::RegPull(4);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_redo_procedure_box_4__1(mach));
}

static* function < Function*pred_redo_procedure_box_4::(PrologMachine*) {
	mach::FillAlternative(pred_redo_procedure_box_4::exec_pred_redo_procedure_box_4__2);
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
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_redo_procedure_box_4::(PrologMachine*) {
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
local_aregs[0] = sxx_builtins_cafe::s540;
local_aregs[1] = var1->Deref();
local_aregs[2] = var2->Deref();
local_aregs[3] = var3->Deref();
local_aregs[4] = var4->Deref();
local_aregs[5] = F(sxx_builtins_cafe::s391, { continuation });
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_print_procedure_box_5::exec_pred_print_procedure_box_5);
}

static* function < Function*pred_$read_blocked_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$read_blocked_1__1(mach));
}

static* function < Function*pred_$read_blocked_1::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[0] = sxx_builtins_cafe::s8;
local_aregs[1] = F(sxx_builtins_cafe::s398,F(sxx_builtins_cafe::s536,var2,F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s290, { var2->Deref(), Const::Nil }),F(sxx_builtins_cafe::s286,var3,sxx_builtins_cafe::posint99)),F(sxx_builtins_cafe::s286, { var2->Deref(), F(sxx_builtins_cafe::s272, { var3->Deref(), var4 }) }),F(sxx_builtins_cafe::s85, { var3->Deref(), var1->Deref(), continuation }))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$fast_write_1::exec_pred_$fast_write_1);
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$debug_option_2__1(mach));
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint97))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s494,F(sxx_builtins_cafe::s321, { continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint99))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s208,sxx_builtins_cafe::s463,sxx_builtins_cafe::s488,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint108))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s208,sxx_builtins_cafe::s463,sxx_builtins_cafe::s608,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint43))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s523,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s561,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),F(sxx_builtins_cafe::s347,F(sxx_builtins_cafe::s523, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint45))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s523,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s491,F(sxx_builtins_cafe::s278, { var3->Deref(), var4->Deref() }),F(sxx_builtins_cafe::s347,F(sxx_builtins_cafe::s523, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint63))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s214,F(sxx_builtins_cafe::s347, { var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
	mach::FillAlternative(pred_$debug_option_2::exec_pred_$debug_option_2__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::posint104))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s214,F(sxx_builtins_cafe::s347, { var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$debug_option_2::(PrologMachine*) {
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

static* function < Function*pred_$show_debug_option_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$show_debug_option_0__1(mach));
}

static* function < Function*pred_$show_debug_option_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
local_aregs[0] = sxx_builtins_cafe::posint4;
local_aregs[1] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s304,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s319,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s306,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s345,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s462,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s265,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s269,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s296,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580,sxx_builtins_cafe::posint4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s410,F(sxx_builtins_cafe::s487, { continuation }))))))))))))))))))))))))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_tab_1::exec_pred_tab_1);
}

static* function < Function*pred_$set_debug_flag_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$set_debug_flag_2__1(mach));
}

static* function < Function*pred_$set_debug_flag_2::(PrologMachine*) {
	mach::FillAlternative(pred_$set_debug_flag_2::exec_pred_$set_debug_flag_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s463))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s130, { var1->Deref() });
local_aregs[1] = var2;
HeapChoice tempVar(mach::CUTB);
local_aregs[2] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_clause_2::exec_pred_clause_2);
}

static* function < Function*pred_$set_debug_flag_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s463))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s130,var2);
local_aregs[1] = F(sxx_builtins_cafe::s334,F(sxx_builtins_cafe::s130, { var1->Deref() }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_retractall_1::exec_pred_retractall_1);
}

static* function < Function*pred_listing_0::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0]} ;*/
std::vector<Term*> aregs = mach::RegPull(0);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_listing_0__1(mach));
}

static* function < Function*pred_listing_0::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[0];
Var* var1 = V(mach);
local_aregs[0] = var1;
local_aregs[1] = sxx_builtins_cafe::s595;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$listing_2::exec_pred_$listing_2);
}

static* function < Function*pred_listing_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_listing_1__1(mach));
}

static* function < Function*pred_listing_1::(PrologMachine*) {
	mach::FillAlternative(pred_listing_1::exec_pred_listing_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s470, { var1->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_listing_1::(PrologMachine*) {
	mach::FillAlternative(pred_listing_1::exec_pred_listing_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s137,var2,var1->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_listing_1::(PrologMachine*) {
	mach::FillAlternative(pred_listing_1::exec_pred_listing_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s275,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s137,F(sxx_builtins_cafe::s275, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::s595,continuation);
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_listing_1::(PrologMachine*) {
	mach::FillAlternative(pred_listing_1::exec_pred_listing_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s278,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s137, { var2->Deref(), var1->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_listing_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s520);
local_aregs[1] = F(sxx_builtins_cafe::s470, { var1->Deref() });
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$listing_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$listing_2__1(mach));
}

static* function < Function*pred_$listing_2::(PrologMachine*) {
	mach::FillAlternative(pred_$listing_2::exec_pred_$listing_2__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s138, { var2->Deref(), var3, continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$listing_2::(PrologMachine*) {
	mach::FillAlternative(pred_$listing_2::exec_pred_$listing_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s275,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s436, { var2->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s138, { var3->Deref(), F(sxx_builtins_cafe::s275, { var1->Deref(), var2->Deref() }), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$listing_2::(PrologMachine*) {
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
local_aregs[0] = F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s520);
local_aregs[1] = F(sxx_builtins_cafe::s470,F(sxx_builtins_cafe::s278, { var2->Deref(), var1->Deref() }));
local_aregs[2] = sxx_builtins_cafe::posint1;
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_illarg_3::exec_pred_illarg_3);
}

static* function < Function*pred_$listing_dynamic_clause_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$listing_dynamic_clause_2__1(mach));
}

static* function < Function*pred_$listing_dynamic_clause_2::(PrologMachine*) {
	mach::FillAlternative(pred_$listing_dynamic_clause_2::exec_pred_$listing_dynamic_clause_2__2);
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
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s416, { var1->Deref(), var3, F(sxx_builtins_cafe::s43, { var2->Deref(), var3->Deref(), F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s275,var4,var5),var2->Deref(),F(sxx_builtins_cafe::s401,var6,var4->Deref(),var5->Deref(),F(sxx_builtins_cafe::s59, { var1->Deref(), var2->Deref(), var6->Deref(), var7, var8, F(sxx_builtins_cafe::s244, { var1->Deref(), var7->Deref(), F(sxx_builtins_cafe::s391, { continuation }) }) }))) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_$new_internal_database_1::exec_pred_$new_internal_database_1);
}

static* function < Function*pred_$listing_dynamic_clause_2::(PrologMachine*) {
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

static* function < Function*pred_$write_dynamic_clause_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_dynamic_clause_2__1(mach));
}

static* function < Function*pred_$write_dynamic_clause_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_clause_2::exec_pred_$write_dynamic_clause_2__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s391, { continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$write_dynamic_clause_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_clause_2::exec_pred_$write_dynamic_clause_2__3);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var2,sxx_builtins_cafe::s590)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s497, { var2->Deref(), sxx_builtins_cafe::posint0, var3, F(sxx_builtins_cafe::s245, { var1->Deref(), var2->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s487, { continuation })) }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_clause_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(F(sxx_builtins_cafe::s282,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s497,F(sxx_builtins_cafe::s282, { var2->Deref(), var3->Deref() }),sxx_builtins_cafe::posint0,var4,F(sxx_builtins_cafe::s245, { var1->Deref(), var2->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s6,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var3->Deref(), sxx_builtins_cafe::posint8, F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s272,F(sxx_builtins_cafe::s487, { continuation })) }))) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_head_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_dynamic_head_2__1(mach));
}

static* function < Function*pred_$write_dynamic_head_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_head_2::exec_pred_$write_dynamic_head_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s595))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s604, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_head_2::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s278,F(sxx_builtins_cafe::s604, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_pred_write_1);
}

static* function < Function*pred_$write_dynamic_body_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_dynamic_body_2__1(mach));
}

static* function < Function*pred_$write_dynamic_body_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_body_2::exec_pred_$write_dynamic_body_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s266,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s243, { var1->Deref(), var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s266,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var2->Deref(), var3->Deref(), continuation }))) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_body_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_body_2::exec_pred_$write_dynamic_body_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s283,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var4,F(sxx_builtins_cafe::s264, { var3->Deref(), sxx_builtins_cafe::posint4 }),F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s258,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var1->Deref(), var4->Deref(), F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var2->Deref(), var4->Deref(), F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s259,continuation) })) }))) })) }))) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_body_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_dynamic_body_2::exec_pred_$write_dynamic_body_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s271,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s440,var4,F(sxx_builtins_cafe::s264, { var3->Deref(), sxx_builtins_cafe::posint4 }),F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s258,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var1->Deref(), var4->Deref(), F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s243, { var2->Deref(), var4->Deref(), F(sxx_builtins_cafe::s487,F(sxx_builtins_cafe::s580, { var3->Deref(), F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s259,continuation) })) }))) })) }))) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$write_dynamic_body_2::(PrologMachine*) {
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
local_aregs[1] = F(sxx_builtins_cafe::s604, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_tab_1::exec_pred_tab_1);
}

static* function < Function*pred_length_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_length_2__1(mach));
}

static* function < Function*pred_length_2::(PrologMachine*) {
	mach::FillAlternative(pred_length_2::exec_pred_length_2__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s133, { var1->Deref(), sxx_builtins_cafe::posint0, var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_length_2::(PrologMachine*) {
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
local_aregs[1] = sxx_builtins_cafe::posint0;
local_aregs[2] = var2->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$length0_3::exec_pred_$length0_3);
}

static* function < Function*pred_$length_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$length_3__1(mach));
}

static* function < Function*pred_$length_3::(PrologMachine*) {
	mach::FillAlternative(pred_$length_3::exec_pred_$length_3__2);
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

static* function < Function*pred_$length_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var5;
local_aregs[1] = F(sxx_builtins_cafe::s264, { var3->Deref(), sxx_builtins_cafe::posint1 });
local_aregs[2] = F(sxx_builtins_cafe::s133, { var2->Deref(), var5->Deref(), var4->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_pred_is_2);
}

static* function < Function*pred_$length0_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$length0_3__1(mach));
}

static* function < Function*pred_$length0_3::(PrologMachine*) {
	mach::FillAlternative(pred_$length0_3::exec_pred_$length0_3__2);
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
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$length0_3::(PrologMachine*) {
	mach::RemoveChoice();
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var4->Deref();
local_aregs[2] = F(sxx_builtins_cafe::s440,var5,F(sxx_builtins_cafe::s264, { var3->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s134, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_pred_smallerthan_2);
}

static* function < Function*pred_numbervars_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_numbervars_3__1(mach));
}

static* function < Function*pred_numbervars_3::(PrologMachine*) {
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
local_aregs[0] = var2->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s558,sxx_builtins_cafe::posint0,var2->Deref(),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s158, { var1->Deref(), var2->Deref(), var3->Deref(), continuation })));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_$numbervars_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$numbervars_3__1(mach));
}

static* function < Function*pred_$numbervars_3::(PrologMachine*) {
	mach::FillAlternative(pred_$numbervars_3::exec_pred_$numbervars_3__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s15, { var2->Deref() }),var1->Deref(),F(sxx_builtins_cafe::s440, { var3->Deref(), F(sxx_builtins_cafe::s264, { var2->Deref(), sxx_builtins_cafe::posint1 }), continuation })));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$numbervars_3::(PrologMachine*) {
	mach::FillAlternative(pred_$numbervars_3::exec_pred_$numbervars_3__3);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_pred_atomic_1);
}

static* function < Function*pred_$numbervars_3::(PrologMachine*) {
	mach::FillAlternative(pred_$numbervars_3::exec_pred_$numbervars_3__4);
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
if(!((areg2)->Unify(var2->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_$numbervars_3::(PrologMachine*) {
	mach::RemoveChoice();
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
local_aregs[2] = var5;
local_aregs[3] = F(sxx_builtins_cafe::s159,sxx_builtins_cafe::posint1,var5->Deref(),var1->Deref(),var2->Deref(),var3->Deref(),continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_pred_functor_3);
}

static* function < Function*pred_$numbervars_str_5::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
std::vector<Term*> aregs = mach::RegPull(5);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$numbervars_str_5__1(mach));
}

static* function < Function*pred_$numbervars_str_5::(PrologMachine*) {
	mach::FillAlternative(pred_$numbervars_str_5::exec_pred_$numbervars_str_5__2);
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
if(!((areg1)->Unify(var1->Deref()))) {
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
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s330, { var1->Deref(), var2->Deref(), var5, F(sxx_builtins_cafe::s158, { var5->Deref(), var3->Deref(), var4->Deref(), continuation }) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$numbervars_str_5::(PrologMachine*) {
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
local_aregs[1] = var3->Deref();
local_aregs[2] = var6;
local_aregs[3] = F(sxx_builtins_cafe::s158, { var6->Deref(), var4->Deref(), var7, F(sxx_builtins_cafe::s440,var8,F(sxx_builtins_cafe::s264, { var1->Deref(), sxx_builtins_cafe::posint1 }),F(sxx_builtins_cafe::s159, { var8->Deref(), var2->Deref(), var3->Deref(), var7->Deref(), var5->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[5] = local_aregs[4] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_pred_arg_3);
}

static* function < Function*pred_statistics_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_statistics_2__1(mach));
}

static* function < Function*pred_statistics_2::(PrologMachine*) {
	mach::FillAlternative(pred_statistics_2::exec_pred_statistics_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s219, { var1->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s218, { var1->Deref(), var2->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_statistics_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
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
local_aregs[0] = var3;
local_aregs[1] = F(sxx_builtins_cafe::s219, { var3->Deref() });
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s377,sxx_builtins_cafe::s335,var4->Deref()),F(sxx_builtins_cafe::s565, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1,continuation);
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_findall_3::exec_pred_findall_3);
}

static* function < Function*pred_$statistics_mode_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$statistics_mode_1__1(mach));
}

static* function < Function*pred_$statistics_mode_1::(PrologMachine*) {
	mach::FillAlternative(pred_$statistics_mode_1::exec_pred_$statistics_mode_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s554))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$statistics_mode_1::(PrologMachine*) {
	mach::FillAlternative(pred_$statistics_mode_1::exec_pred_$statistics_mode_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s589))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$statistics_mode_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(sxx_builtins_cafe::s355))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_print_message_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_print_message_2__1(mach));
}

static* function < Function*pred_print_message_2::(PrologMachine*) {
	mach::FillAlternative(pred_print_message_2::exec_pred_print_message_2__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s522, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_print_message_2::(PrologMachine*) {
	mach::FillAlternative(pred_print_message_2::exec_pred_print_message_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s382))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s93, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_print_message_2::(PrologMachine*) {
	mach::FillAlternative(pred_print_message_2::exec_pred_print_message_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s432))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s612,F(sxx_builtins_cafe::s45, { var1->Deref(), F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487, { continuation })) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_print_message_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s599))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s627,F(sxx_builtins_cafe::s45, { var1->Deref(), F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487, { continuation })) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$error_message_1__1(mach));
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s435,var1,sxx_builtins_cafe::posint0)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s616,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s435,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s616,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s592,var1,var2,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s626,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s280,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s267,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var4->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s378,var1,var2,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s613,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s280,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s267,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var4->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s386,var1,sxx_builtins_cafe::posint0,var2,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s615,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s9,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s386,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s615,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s279,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var4->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s9,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation))))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s516,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s619,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s5,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var4->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s279,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var5->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s550,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s620,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s281,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s10,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s384,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s614,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s267,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var5 = V(mach);
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s576,var1,var2,var3,var4,var5)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s621,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s280,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s267,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var4->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s578,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s623,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s438,var1)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s617,F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation)))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$error_message_1::exec_pred_$error_message_1__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s451,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s618,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s4,F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,var2->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s267,F(sxx_builtins_cafe::s246,sxx_builtins_cafe::s596,var3->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s191, { var3->Deref(), F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation) })))))))));
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$error_message_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = sxx_builtins_cafe::s596;
local_aregs[1] = sxx_builtins_cafe::s612;
local_aregs[2] = F(sxx_builtins_cafe::s601,sxx_builtins_cafe::s596,var1->Deref(),F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s596,sxx_builtins_cafe::s631,F(sxx_builtins_cafe::s487,sxx_builtins_cafe::s596,F(sxx_builtins_cafe::s398,sxx_builtins_cafe::s596,continuation))));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$fast_write_2::exec_pred_$fast_write_2);
}

static* function < Function*pred_$write_goal_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$write_goal_2__1(mach));
}

static* function < Function*pred_$write_goal_2::(PrologMachine*) {
	mach::FillAlternative(pred_$write_goal_2::exec_pred_$write_goal_2__2);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s257, { var1->Deref(), var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_$write_goal_2::(PrologMachine*) {
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
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_2::exec_pred_write_2);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_illarg_3__1(mach));
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__2);
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
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,var2->Deref(),var3->Deref(),continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s597))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s435, { var1->Deref(), var2->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__4);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s591,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var4;
local_aregs[3] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s490, { var4->Deref() }),F(sxx_builtins_cafe::s286,var5,F(sxx_builtins_cafe::s592, { var2->Deref(), var3->Deref(), var1->Deref(), var4->Deref() }))),F(sxx_builtins_cafe::s286, { var5->Deref(), F(sxx_builtins_cafe::s435, { var2->Deref(), var3->Deref() }) }),F(sxx_builtins_cafe::s534, { var5->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_pred_arg_3);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__5);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s377,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var4->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var5;
local_aregs[3] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s143, { var1->Deref(), var5->Deref() }),F(sxx_builtins_cafe::s286,var6,F(sxx_builtins_cafe::s378, { var3->Deref(), var4->Deref(), var2->Deref(), var5->Deref() }))),F(sxx_builtins_cafe::s283,F(sxx_builtins_cafe::s271,F(sxx_builtins_cafe::s490, { var5->Deref() }),F(sxx_builtins_cafe::s286, { var6->Deref(), F(sxx_builtins_cafe::s592, { var3->Deref(), var4->Deref(), var1->Deref(), var5->Deref() }) })),F(sxx_builtins_cafe::s286, { var6->Deref(), F(sxx_builtins_cafe::s435, { var3->Deref(), var4->Deref() }) })),F(sxx_builtins_cafe::s534, { var6->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_pred_arg_3);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__6);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s385,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s386, { var4->Deref(), var5->Deref(), var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__7);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s515,var1,var2,var3,var4)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s516, { var5->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s549,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s550, { var2->Deref(), var3->Deref(), var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s383,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s384, { var2->Deref(), var3->Deref(), var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__10);
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s575,var1,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s576, { var4->Deref(), var5->Deref(), var1->Deref(), var2->Deref(), var3->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s577,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s578, { var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s437,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s438, { var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
	mach::FillAlternative(pred_illarg_3::exec_pred_illarg_3__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[3];
Term* areg2 = local_aregs[2]->Deref();
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s441,var1)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s451, { var2->Deref(), var3->Deref(), var1->Deref() });
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_illarg_3::(PrologMachine*) {
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
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_raise_exception_1::exec_pred_raise_exception_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$match_type_2__1(mach));
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s581))) {
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

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s598))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__4);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s335))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__5);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s339))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_pred_atomic_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__6);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s344))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s558,sxx_builtins_cafe::posint0,var1->Deref(),F(sxx_builtins_cafe::s558, { var1->Deref(), sxx_builtins_cafe::posint255, continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__7);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s427))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s558,sxx_builtins_cafe::negint1,var1->Deref(),F(sxx_builtins_cafe::s558, { var1->Deref(), sxx_builtins_cafe::posint255, continuation }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__8);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s353))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s338, { var1->Deref(), sxx_builtins_cafe::posint1, continuation });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_pred_atom_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__9);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s428))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s290, { var1->Deref(), sxx_builtins_cafe::s381 });
local_aregs[1] = F(sxx_builtins_cafe::s143,sxx_builtins_cafe::s353,var1->Deref());
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_pred_or_2);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__10);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s495))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_number_1::exec_pred_number_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__11);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s436))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_integer_1::exec_pred_integer_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__12);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s471))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_long_1::exec_pred_long_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__13);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s397))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_float_1::exec_pred_float_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__14);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s348))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_callable_1::exec_pred_callable_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__15);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s362))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_compound_1::exec_pred_compound_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__16);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s469))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s506,F(sxx_builtins_cafe::s286, { var1->Deref(), Const::Nil }),F(sxx_builtins_cafe::s286, { var1->Deref(), F(sxx_builtins_cafe::s272,var2,var3) }),continuation);
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__17);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s441))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_1::exec_pred_java_1);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__18);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s568))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s441, { var1->Deref(), sxx_builtins_cafe::s443 });
local_aregs[1] = F(sxx_builtins_cafe::s441, { var1->Deref(), sxx_builtins_cafe::s442 });
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_pred_or_2);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__19);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s569))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s335, { var1->Deref() });
local_aregs[1] = F(sxx_builtins_cafe::s143,sxx_builtins_cafe::s568,var1->Deref());
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_pred_or_2);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__20);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s412))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = sxx_builtins_cafe::s360;
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_java_2::exec_pred_java_2);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::FillAlternative(pred_$match_type_2::exec_pred_$match_type_2__21);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s418))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = F(sxx_builtins_cafe::s335, { var1->Deref() });
local_aregs[1] = F(sxx_builtins_cafe::s143,sxx_builtins_cafe::s412,var1->Deref());
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_pred_or_2);
}

static* function < Function*pred_$match_type_2::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[2];
Term* areg1 = local_aregs[1]->Deref();
Term* areg0 = local_aregs[0]->Deref();
Var* var4 = V(mach);
Var* var3 = V(mach);
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(sxx_builtins_cafe::s520))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s593,F(sxx_builtins_cafe::s278,var2,F(sxx_builtins_cafe::s275,var3,var4)),var1->Deref(),F(sxx_builtins_cafe::s335, { var2->Deref(), F(sxx_builtins_cafe::s335, { var3->Deref(), F(sxx_builtins_cafe::s436, { var4->Deref(), continuation }) }) }));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_pred_nonvar_1);
}

static* function < Function*pred_with_mutex_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_with_mutex_2__1(mach));
}

static* function < Function*pred_with_mutex_2::(PrologMachine*) {
	mach::FillAlternative(pred_with_mutex_2::exec_pred_with_mutex_2__2);
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
local_aregs[0] = F(sxx_builtins_cafe::s335, { var1->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s493,F(sxx_builtins_cafe::s441, { var1->Deref() }),F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s335),F(sxx_builtins_cafe::s600, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint1,continuation)));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_with_mutex_2::(PrologMachine*) {
	mach::FillAlternative(pred_with_mutex_2::exec_pred_with_mutex_2__3);
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,sxx_builtins_cafe::s597,F(sxx_builtins_cafe::s600, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint2,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_pred_var_1);
}

static* function < Function*pred_with_mutex_2::(PrologMachine*) {
	mach::FillAlternative(pred_with_mutex_2::exec_pred_with_mutex_2__4);
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
local_aregs[0] = F(sxx_builtins_cafe::s348, { var2->Deref() });
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s425,F(sxx_builtins_cafe::s591,sxx_builtins_cafe::s348),F(sxx_builtins_cafe::s600, { var1->Deref(), var2->Deref() }),sxx_builtins_cafe::posint2,continuation));
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_pred_not_1);
}

static* function < Function*pred_with_mutex_2::(PrologMachine*) {
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
HeapChoice tempVar(mach::CUTB);
local_aregs[1] = F(sxx_builtins_cafe::s347, { var2->Deref(), F(sxx_builtins_cafe::s0, &tempVar,F(sxx_builtins_cafe::s484, { var1->Deref(), continuation })) });
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = nullptr;
return static_cast<function<Function*(PrologMachine*)> >(pred_mutex_lock_bt_1::exec_pred_mutex_lock_bt_1);
}

static* function < Function*pred_$builtin_append_3::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
std::vector<Term*> aregs = mach::RegPull(3);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_append_3__1(mach));
}

static* function < Function*pred_$builtin_append_3::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_append_3::exec_pred_$builtin_append_3__2);
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

static* function < Function*pred_$builtin_append_3::(PrologMachine*) {
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
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var4 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$builtin_append_3::exec_pred_$builtin_append_3);
}

static* function < Function*pred_$builtin_message_1::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
std::vector<Term*> aregs = mach::RegPull(1);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$builtin_message_1__1(mach));
}

static* function < Function*pred_$builtin_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_message_1::exec_pred_$builtin_message_1__2);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(Const::Nil))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_message_1::(PrologMachine*) {
	mach::FillAlternative(pred_$builtin_message_1::exec_pred_$builtin_message_1__3);
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,Const::Nil)))) {
	return UpperPrologMachine::Fail0;
}
mach::DoCut(mach::CUTB);
local_aregs[0] = F(sxx_builtins_cafe::s601, { var1->Deref(), continuation });
mach->CUTB = mach::CurrentChoice;
return UpperPrologMachine::Call1;
}

static* function < Function*pred_$builtin_message_1::(PrologMachine*) {
	mach::RemoveChoice();
std::vector<Term*> local_aregs = mach::Areg;
Term* continuation = local_aregs[1];
Term* areg0 = local_aregs[0]->Deref();
Var* var2 = V(mach);
Var* var1 = V(mach);
if(!((areg0)->Unify(F(sxx_builtins_cafe::s272,var1,var2)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = F(sxx_builtins_cafe::s96,sxx_builtins_cafe::s2,F(sxx_builtins_cafe::s45, { var2->Deref(), continuation }));
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_pred_write_1);
}

static* function < Function*pred_$member_in_reverse_2::(PrologMachine*) {
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
std::vector<Term*> aregs = mach::RegPull(2);
mach::CreateChoicePoint(aregs);
return static_cast<function<Function*(PrologMachine*)> >(exec_pred_$member_in_reverse_2__1(mach));
}

static* function < Function*pred_$member_in_reverse_2::(PrologMachine*) {
	mach::FillAlternative(pred_$member_in_reverse_2::exec_pred_$member_in_reverse_2__2);
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272,var2,var3)))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach::CurrentChoice;
return static_cast<function<Function*(PrologMachine*)> >(pred_$member_in_reverse_2::exec_pred_$member_in_reverse_2);
}

static* function < Function*pred_$member_in_reverse_2::(PrologMachine*) {
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
if(!((areg1)->Unify(F(sxx_builtins_cafe::s272, { var1->Deref(), var2 })))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach::CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}