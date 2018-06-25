using namespace std;

#include "asm.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* asm_Renamed::s0 = Const::Intern("cut");
Const* asm_Renamed::s1 = Const::Intern(" is called but not defined");
Const* asm_Renamed::s2 = Const::Intern(" is doubly defined");
Const* asm_Renamed::s3 = Const::Intern("$asm_bp");
Const* asm_Renamed::s4 = Const::Intern("$sym_no");
Const* asm_Renamed::s5 = Const::Intern("+");
Const* asm_Renamed::s6 = Const::Intern(",");
Const* asm_Renamed::s7 = Const::Intern("-");
Const* asm_Renamed::s8 = Const::Intern("->");
Const* asm_Renamed::s9 = Const::Intern(".");
Const* asm_Renamed::s10 = Const::Intern("/");
Const* asm_Renamed::s11 = Const::Intern("/\\");
Const* asm_Renamed::s12 = Const::Intern(":");
Const* asm_Renamed::s13 = Const::Intern(":-");
Const* asm_Renamed::s14 = Const::Intern(":=");
Const* asm_Renamed::s15 = Const::Intern(";");
Const* asm_Renamed::s16 = Const::Intern("<");
Const* asm_Renamed::s17 = Const::Intern("<<");
Const* asm_Renamed::s18 = Const::Intern("<=");
Const* asm_Renamed::s19 = Const::Intern("=");
Const* asm_Renamed::s20 = Const::Intern("=:=");
Const* asm_Renamed::s21 = Const::Intern("==");
Const* asm_Renamed::s22 = Const::Intern("=\\=");
Const* asm_Renamed::s23 = Const::Intern(">");
Const* asm_Renamed::s24 = Const::Intern(">>");
Const* asm_Renamed::s25 = Const::Intern("The predicate ");
Const* asm_Renamed::s26 = Const::Intern("\\/");
Const* asm_Renamed::s27 = Const::Intern("add");
Const* asm_Renamed::s28 = Const::Intern("add1_y");
Const* asm_Renamed::s29 = Const::Intern("allocate_flat");
Const* asm_Renamed::s30 = Const::Intern("allocate_nondet");
Const* asm_Renamed::s31 = Const::Intern("allocate_nonflat");
Const* asm_Renamed::s32 = Const::Intern("allocate_susp");
Const* asm_Renamed::s33 = Const::Intern("and");
Const* asm_Renamed::s34 = Const::Intern("arg");
Const* asm_Renamed::s35 = Const::Intern("arg0");
Const* asm_Renamed::s36 = Const::Intern("arglabel");
Const* asm_Renamed::s37 = Const::Intern("asm");
Const* asm_Renamed::s38 = Const::Intern("asm0");
Const* asm_Renamed::s39 = Const::Intern("asm_bp");
Const* asm_Renamed::s40 = Const::Intern("asm_getaslist");
Const* asm_Renamed::s41 = Const::Intern("asm_getaslist1");
Const* asm_Renamed::s42 = Const::Intern("asm_hash_value");
Const* asm_Renamed::s43 = Const::Intern("asm_index");
Const* asm_Renamed::s44 = Const::Intern("asm_index_inst");
Const* asm_Renamed::s45 = Const::Intern("asm_index_pass1");
Const* asm_Renamed::s46 = Const::Intern("asm_lookup_ctab");
Const* asm_Renamed::s47 = Const::Intern("asm_lookup_ctab1");
Const* asm_Renamed::s48 = Const::Intern("asm_lookup_ltab");
Const* asm_Renamed::s49 = Const::Intern("asm_lookup_ltab1");
Const* asm_Renamed::s50 = Const::Intern("asm_magic");
Const* asm_Renamed::s51 = Const::Intern("asm_mark_eot");
Const* asm_Renamed::s52 = Const::Intern("asm_merge");
Const* asm_Renamed::s53 = Const::Intern("asm_pass1");
Const* asm_Renamed::s54 = Const::Intern("asm_pass11");
Const* asm_Renamed::s55 = Const::Intern("asm_pass12");
Const* asm_Renamed::s56 = Const::Intern("asm_pass12_call");
Const* asm_Renamed::s57 = Const::Intern("asm_pass1_bp");
Const* asm_Renamed::s58 = Const::Intern("asm_pass2");
Const* asm_Renamed::s59 = Const::Intern("asm_pass2_inst");
Const* asm_Renamed::s60 = Const::Intern("asm_pass2_inst_op");
Const* asm_Renamed::s61 = Const::Intern("asm_pass2a");
Const* asm_Renamed::s62 = Const::Intern("asm_proc_index");
Const* asm_Renamed::s63 = Const::Intern("asm_putnum");
Const* asm_Renamed::s64 = Const::Intern("asm_rearange_csym");
Const* asm_Renamed::s65 = Const::Intern("asm_symbol");
Const* asm_Renamed::s66 = Const::Intern("asmpass1_fillin");
Const* asm_Renamed::s67 = Const::Intern("asmpass1_fillin_bp");
Const* asm_Renamed::s68 = Const::Intern("asmpass1_setundef");
Const* asm_Renamed::s69 = Const::Intern("b_ASPN2_cc");
Const* asm_Renamed::s70 = Const::Intern("b_ASPN3_ccc");
Const* asm_Renamed::s71 = Const::Intern("b_ASPN4_cccc");
Const* asm_Renamed::s72 = Const::Intern("b_ASPN_c");
Const* asm_Renamed::s73 = Const::Intern("b_GET_LENGTH_cf");
Const* asm_Renamed::s74 = Const::Intern("b_GET_SYM_TYPE_ccf");
Const* asm_Renamed::s75 = Const::Intern("builtin0");
Const* asm_Renamed::s76 = Const::Intern("builtin1");
Const* asm_Renamed::s77 = Const::Intern("builtin2");
Const* asm_Renamed::s78 = Const::Intern("builtin3");
Const* asm_Renamed::s79 = Const::Intern("builtin4");
Const* asm_Renamed::s80 = Const::Intern("c");
Const* asm_Renamed::s81 = Const::Intern("call");
Const* asm_Renamed::s82 = Const::Intern("call_d");
Const* asm_Renamed::s83 = Const::Intern("callv");
Const* asm_Renamed::s84 = Const::Intern("cmp_error");
Const* asm_Renamed::s85 = Const::Intern("commit");
Const* asm_Renamed::s86 = Const::Intern("complement");
Const* asm_Renamed::s87 = Const::Intern("csym");
Const* asm_Renamed::s88 = Const::Intern("cut");
Const* asm_Renamed::s89 = Const::Intern("cut_fail");
Const* asm_Renamed::s90 = Const::Intern("cut_return");
Const* asm_Renamed::s91 = Const::Intern("d");
Const* asm_Renamed::s92 = Const::Intern("delay");
Const* asm_Renamed::s93 = Const::Intern("determinate");
Const* asm_Renamed::s94 = Const::Intern("div");
Const* asm_Renamed::s95 = Const::Intern("djmp");
Const* asm_Renamed::s96 = Const::Intern("domain_set_false_yx");
Const* asm_Renamed::s97 = Const::Intern("domain_set_false_yy");
Const* asm_Renamed::s98 = Const::Intern("end_delay");
Const* asm_Renamed::s99 = Const::Intern("end_of_file");
Const* asm_Renamed::s100 = Const::Intern("endfile");
Const* asm_Renamed::s101 = Const::Intern("error in asm pass2 :");
Const* asm_Renamed::s102 = Const::Intern("error_double_define");
Const* asm_Renamed::s103 = Const::Intern("execute");
Const* asm_Renamed::s104 = Const::Intern("executev");
Const* asm_Renamed::s105 = Const::Intern("f");
Const* asm_Renamed::s106 = Const::Intern("fail");
Const* asm_Renamed::s107 = Const::Intern("fail0");
Const* asm_Renamed::s108 = Const::Intern("flat_to_nondet");
Const* asm_Renamed::s109 = Const::Intern("fork");
Const* asm_Renamed::s110 = Const::Intern("fork_unicut_atom_y");
Const* asm_Renamed::s111 = Const::Intern("fork_unicut_int_y");
Const* asm_Renamed::s112 = Const::Intern("fork_unicut_list_y");
Const* asm_Renamed::s113 = Const::Intern("fork_unicut_nil_y");
Const* asm_Renamed::s114 = Const::Intern("fork_unicut_struct_y");
Const* asm_Renamed::s115 = Const::Intern("fork_unicut_ux_uy");
Const* asm_Renamed::s116 = Const::Intern("fork_unicut_uy_uy");
Const* asm_Renamed::s117 = Const::Intern("fork_unify_atom_y");
Const* asm_Renamed::s118 = Const::Intern("fork_unify_int_y");
Const* asm_Renamed::s119 = Const::Intern("fork_unify_list_y");
Const* asm_Renamed::s120 = Const::Intern("fork_unify_nil_y");
Const* asm_Renamed::s121 = Const::Intern("fork_unify_struct_y");
Const* asm_Renamed::s122 = Const::Intern("fork_unify_ux_uy");
Const* asm_Renamed::s123 = Const::Intern("fork_unify_uy_uy");
Const* asm_Renamed::s124 = Const::Intern("func_arity");
Const* asm_Renamed::s125 = Const::Intern("functor");
Const* asm_Renamed::s126 = Const::Intern("get_ar_cps");
Const* asm_Renamed::s127 = Const::Intern("getbreg");
Const* asm_Renamed::s128 = Const::Intern("gethtreg");
Const* asm_Renamed::s129 = Const::Intern("getpbreg");
Const* asm_Renamed::s130 = Const::Intern("global_create");
Const* asm_Renamed::s131 = Const::Intern("global_del");
Const* asm_Renamed::s132 = Const::Intern("global_get");
Const* asm_Renamed::s133 = Const::Intern("global_set");
Const* asm_Renamed::s134 = Const::Intern("halt");
Const* asm_Renamed::s135 = Const::Intern("hash_jmpn_atom");
Const* asm_Renamed::s136 = Const::Intern("hash_jmpn_int");
Const* asm_Renamed::s137 = Const::Intern("hash_jmpn_list");
Const* asm_Renamed::s138 = Const::Intern("hash_jmpn_nil");
Const* asm_Renamed::s139 = Const::Intern("hash_jmpn_struct");
Const* asm_Renamed::s140 = Const::Intern("hash_jmpn_struct_x");
Const* asm_Renamed::s141 = Const::Intern("hash_jmpn_struct_xx");
Const* asm_Renamed::s142 = Const::Intern("hash_jmpn_struct_xy");
Const* asm_Renamed::s143 = Const::Intern("hash_jmpn_struct_y");
Const* asm_Renamed::s144 = Const::Intern("hash_jmpn_struct_yx");
Const* asm_Renamed::s145 = Const::Intern("hash_jmpn_struct_yy");
Const* asm_Renamed::s146 = Const::Intern("hash_x");
Const* asm_Renamed::s147 = Const::Intern("hash_y");
Const* asm_Renamed::s148 = Const::Intern("i");
Const* asm_Renamed::s149 = Const::Intern("idiv");
Const* asm_Renamed::s150 = Const::Intern("integer");
Const* asm_Renamed::s151 = Const::Intern("is");
Const* asm_Renamed::s152 = Const::Intern("is not defined");
Const* asm_Renamed::s153 = Const::Intern("is_unify_arg_inst");
Const* asm_Renamed::s154 = Const::Intern("isglobal");
Const* asm_Renamed::s155 = Const::Intern("jmp");
Const* asm_Renamed::s156 = Const::Intern("jmp_eql");
Const* asm_Renamed::s157 = Const::Intern("jmp_eql_yy");
Const* asm_Renamed::s158 = Const::Intern("jmp_id");
Const* asm_Renamed::s159 = Const::Intern("jmp_susp");
Const* asm_Renamed::s160 = Const::Intern("jmp_var_x");
Const* asm_Renamed::s161 = Const::Intern("jmp_var_y");
Const* asm_Renamed::s162 = Const::Intern("jmpn_atom_x");
Const* asm_Renamed::s163 = Const::Intern("jmpn_atom_y");
Const* asm_Renamed::s164 = Const::Intern("jmpn_atomic_x");
Const* asm_Renamed::s165 = Const::Intern("jmpn_atomic_y");
Const* asm_Renamed::s166 = Const::Intern("jmpn_det");
Const* asm_Renamed::s167 = Const::Intern("jmpn_det_get_ar_cps");
Const* asm_Renamed::s168 = Const::Intern("jmpn_dvar_y");
Const* asm_Renamed::s169 = Const::Intern("jmpn_eq_atom_x");
Const* asm_Renamed::s170 = Const::Intern("jmpn_eq_atom_y");
Const* asm_Renamed::s171 = Const::Intern("jmpn_eq_int_x");
Const* asm_Renamed::s172 = Const::Intern("jmpn_eq_int_y");
Const* asm_Renamed::s173 = Const::Intern("jmpn_eq_struct_x");
Const* asm_Renamed::s174 = Const::Intern("jmpn_eq_struct_y");
Const* asm_Renamed::s175 = Const::Intern("jmpn_eql");
Const* asm_Renamed::s176 = Const::Intern("jmpn_float_x");
Const* asm_Renamed::s177 = Const::Intern("jmpn_float_y");
Const* asm_Renamed::s178 = Const::Intern("jmpn_ge");
Const* asm_Renamed::s179 = Const::Intern("jmpn_ge_yy");
Const* asm_Renamed::s180 = Const::Intern("jmpn_gt");
Const* asm_Renamed::s181 = Const::Intern("jmpn_gt_yy");
Const* asm_Renamed::s182 = Const::Intern("jmpn_id");
Const* asm_Renamed::s183 = Const::Intern("jmpn_int_x");
Const* asm_Renamed::s184 = Const::Intern("jmpn_int_y");
Const* asm_Renamed::s185 = Const::Intern("jmpn_nil_x");
Const* asm_Renamed::s186 = Const::Intern("jmpn_nil_y");
Const* asm_Renamed::s187 = Const::Intern("jmpn_num_x");
Const* asm_Renamed::s188 = Const::Intern("jmpn_num_y");
Const* asm_Renamed::s189 = Const::Intern("jmpn_var_x");
Const* asm_Renamed::s190 = Const::Intern("jmpn_var_y");
Const* asm_Renamed::s191 = Const::Intern("lab");
Const* asm_Renamed::s192 = Const::Intern("lab_member1");
Const* asm_Renamed::s193 = Const::Intern("label");
Const* asm_Renamed::s194 = Const::Intern("length");
Const* asm_Renamed::s195 = Const::Intern("lshiftl");
Const* asm_Renamed::s196 = Const::Intern("lshiftr");
Const* asm_Renamed::s197 = Const::Intern("lsym");
Const* asm_Renamed::s198 = Const::Intern("mod");
Const* asm_Renamed::s199 = Const::Intern("mode");
Const* asm_Renamed::s200 = Const::Intern("move_ar_cps");
Const* asm_Renamed::s201 = Const::Intern("move_atom_x");
Const* asm_Renamed::s202 = Const::Intern("move_atom_y");
Const* asm_Renamed::s203 = Const::Intern("move_int_x");
Const* asm_Renamed::s204 = Const::Intern("move_int_y");
Const* asm_Renamed::s205 = Const::Intern("move_list_x");
Const* asm_Renamed::s206 = Const::Intern("move_list_y");
Const* asm_Renamed::s207 = Const::Intern("move_nil_x");
Const* asm_Renamed::s208 = Const::Intern("move_nil_y");
Const* asm_Renamed::s209 = Const::Intern("move_struct_x");
Const* asm_Renamed::s210 = Const::Intern("move_struct_y");
Const* asm_Renamed::s211 = Const::Intern("move_vx");
Const* asm_Renamed::s212 = Const::Intern("move_vy");
Const* asm_Renamed::s213 = Const::Intern("move_x_ux");
Const* asm_Renamed::s214 = Const::Intern("move_x_uy");
Const* asm_Renamed::s215 = Const::Intern("move_x_wy");
Const* asm_Renamed::s216 = Const::Intern("move_y_ux");
Const* asm_Renamed::s217 = Const::Intern("move_y_uy");
Const* asm_Renamed::s218 = Const::Intern("move_y_wy");
Const* asm_Renamed::s219 = Const::Intern("move_yw_yy");
Const* asm_Renamed::s220 = Const::Intern("move_yy_yw");
Const* asm_Renamed::s221 = Const::Intern("move_yy_yy");
Const* asm_Renamed::s222 = Const::Intern("move_yy_yy_yy");
Const* asm_Renamed::s223 = Const::Intern("mul");
Const* asm_Renamed::s224 = Const::Intern("name");
Const* asm_Renamed::s225 = Const::Intern("next_sym_no");
Const* asm_Renamed::s226 = Const::Intern("nl");
Const* asm_Renamed::s227 = Const::Intern("nondet");
Const* asm_Renamed::s228 = Const::Intern("noop");
Const* asm_Renamed::s229 = Const::Intern("on_load_asm");
Const* asm_Renamed::s230 = Const::Intern("op");
Const* asm_Renamed::s231 = Const::Intern("opcode");
Const* asm_Renamed::s232 = Const::Intern("or");
Const* asm_Renamed::s233 = Const::Intern("output_mess");
Const* asm_Renamed::s234 = Const::Intern("para_atom");
Const* asm_Renamed::s235 = Const::Intern("para_int");
Const* asm_Renamed::s236 = Const::Intern("para_list");
Const* asm_Renamed::s237 = Const::Intern("para_nil");
Const* asm_Renamed::s238 = Const::Intern("para_struct");
Const* asm_Renamed::s239 = Const::Intern("para_ux");
Const* asm_Renamed::s240 = Const::Intern("para_ux_ux");
Const* asm_Renamed::s241 = Const::Intern("para_ux_ux_ux");
Const* asm_Renamed::s242 = Const::Intern("para_ux_ux_uy");
Const* asm_Renamed::s243 = Const::Intern("para_ux_uy");
Const* asm_Renamed::s244 = Const::Intern("para_ux_uy_ux");
Const* asm_Renamed::s245 = Const::Intern("para_ux_uy_uy");
Const* asm_Renamed::s246 = Const::Intern("para_ux_vy");
Const* asm_Renamed::s247 = Const::Intern("para_uy");
Const* asm_Renamed::s248 = Const::Intern("para_uy_ux");
Const* asm_Renamed::s249 = Const::Intern("para_uy_ux_ux");
Const* asm_Renamed::s250 = Const::Intern("para_uy_ux_uy");
Const* asm_Renamed::s251 = Const::Intern("para_uy_uy");
Const* asm_Renamed::s252 = Const::Intern("para_uy_uy_ux");
Const* asm_Renamed::s253 = Const::Intern("para_uy_uy_uy");
Const* asm_Renamed::s254 = Const::Intern("para_uy_uy_uy_uy");
Const* asm_Renamed::s255 = Const::Intern("para_uy_vy");
Const* asm_Renamed::s256 = Const::Intern("para_void");
Const* asm_Renamed::s257 = Const::Intern("para_void_one");
Const* asm_Renamed::s258 = Const::Intern("para_vx");
Const* asm_Renamed::s259 = Const::Intern("para_vy");
Const* asm_Renamed::s260 = Const::Intern("para_vy_ux");
Const* asm_Renamed::s261 = Const::Intern("para_vy_uy");
Const* asm_Renamed::s262 = Const::Intern("para_vy_vy");
Const* asm_Renamed::s263 = Const::Intern("pred");
Const* asm_Renamed::s264 = Const::Intern("predefined");
Const* asm_Renamed::s265 = Const::Intern("put");
Const* asm_Renamed::s266 = Const::Intern("put_ar_cps");
Const* asm_Renamed::s267 = Const::Intern("putbreg");
Const* asm_Renamed::s268 = Const::Intern("puthtreg");
Const* asm_Renamed::s269 = Const::Intern("read");
Const* asm_Renamed::s270 = Const::Intern("return_a");
Const* asm_Renamed::s271 = Const::Intern("return_b");
Const* asm_Renamed::s272 = Const::Intern("s");
Const* asm_Renamed::s273 = Const::Intern("save_b");
Const* asm_Renamed::s274 = Const::Intern("save_ht_jmp");
Const* asm_Renamed::s275 = Const::Intern("see");
Const* asm_Renamed::s276 = Const::Intern("seen");
Const* asm_Renamed::s277 = Const::Intern("setarg");
Const* asm_Renamed::s278 = Const::Intern("setarg0");
Const* asm_Renamed::s279 = Const::Intern("smallerorequal");
Const* asm_Renamed::s280 = Const::Intern("sub");
Const* asm_Renamed::s281 = Const::Intern("sub1_y");
Const* asm_Renamed::s282 = Const::Intern("susp_var2_delay");
Const* asm_Renamed::s283 = Const::Intern("susp_var_delay");
Const* asm_Renamed::s284 = Const::Intern("susp_var_x");
Const* asm_Renamed::s285 = Const::Intern("susp_var_y");
Const* asm_Renamed::s286 = Const::Intern("switch_list_x");
Const* asm_Renamed::s287 = Const::Intern("switch_list_y");
Const* asm_Renamed::s288 = Const::Intern("switch_list_yxx");
Const* asm_Renamed::s289 = Const::Intern("switch_list_yxy");
Const* asm_Renamed::s290 = Const::Intern("switch_list_yyx");
Const* asm_Renamed::s291 = Const::Intern("switch_list_yyy");
Const* asm_Renamed::s292 = Const::Intern("sym");
Const* asm_Renamed::s293 = Const::Intern("sym_member1");
Const* asm_Renamed::s294 = Const::Intern("tabsize");
Const* asm_Renamed::s295 = Const::Intern("tell");
Const* asm_Renamed::s296 = Const::Intern("telling");
Const* asm_Renamed::s297 = Const::Intern("told");
Const* asm_Renamed::s298 = Const::Intern("true");
Const* asm_Renamed::s299 = Const::Intern("unicut");
Const* asm_Renamed::s300 = Const::Intern("unicut_atom_y");
Const* asm_Renamed::s301 = Const::Intern("unicut_int_y");
Const* asm_Renamed::s302 = Const::Intern("unicut_list_y");
Const* asm_Renamed::s303 = Const::Intern("unicut_nil_y");
Const* asm_Renamed::s304 = Const::Intern("unicut_struct_y");
Const* asm_Renamed::s305 = Const::Intern("unicut_uy_uy");
Const* asm_Renamed::s306 = Const::Intern("unify");
Const* asm_Renamed::s307 = Const::Intern("unify0_atom_y");
Const* asm_Renamed::s308 = Const::Intern("unify0_int_y");
Const* asm_Renamed::s309 = Const::Intern("unify0_list_y");
Const* asm_Renamed::s310 = Const::Intern("unify0_nil_y");
Const* asm_Renamed::s311 = Const::Intern("unify0_struct_y");
Const* asm_Renamed::s312 = Const::Intern("unify0_ux_uy");
Const* asm_Renamed::s313 = Const::Intern("unify0_uy_uy");
Const* asm_Renamed::s314 = Const::Intern("unify_arg_atom");
Const* asm_Renamed::s315 = Const::Intern("unify_arg_iii");
Const* asm_Renamed::s316 = Const::Intern("unify_arg_int");
Const* asm_Renamed::s317 = Const::Intern("unify_arg_list");
Const* asm_Renamed::s318 = Const::Intern("unify_arg_nil");
Const* asm_Renamed::s319 = Const::Intern("unify_arg_struct");
Const* asm_Renamed::s320 = Const::Intern("unify_arg_ux");
Const* asm_Renamed::s321 = Const::Intern("unify_arg_ux_ux");
Const* asm_Renamed::s322 = Const::Intern("unify_arg_ux_vx");
Const* asm_Renamed::s323 = Const::Intern("unify_arg_ux_vy");
Const* asm_Renamed::s324 = Const::Intern("unify_arg_uy");
Const* asm_Renamed::s325 = Const::Intern("unify_arg_uy_uy");
Const* asm_Renamed::s326 = Const::Intern("unify_arg_void");
Const* asm_Renamed::s327 = Const::Intern("unify_arg_void_one");
Const* asm_Renamed::s328 = Const::Intern("unify_arg_vx");
Const* asm_Renamed::s329 = Const::Intern("unify_arg_vx_ux");
Const* asm_Renamed::s330 = Const::Intern("unify_arg_vx_uy");
Const* asm_Renamed::s331 = Const::Intern("unify_arg_vx_vx");
Const* asm_Renamed::s332 = Const::Intern("unify_arg_vx_vy");
Const* asm_Renamed::s333 = Const::Intern("unify_arg_vy");
Const* asm_Renamed::s334 = Const::Intern("unify_arg_vy_ux");
Const* asm_Renamed::s335 = Const::Intern("unify_arg_vy_uy");
Const* asm_Renamed::s336 = Const::Intern("unify_arg_vy_vx");
Const* asm_Renamed::s337 = Const::Intern("unify_arg_vy_vy");
Const* asm_Renamed::s338 = Const::Intern("unify_arg_wy");
Const* asm_Renamed::s339 = Const::Intern("unify_atom_x");
Const* asm_Renamed::s340 = Const::Intern("unify_atom_y");
Const* asm_Renamed::s341 = Const::Intern("unify_cons_x");
Const* asm_Renamed::s342 = Const::Intern("unify_cons_y");
Const* asm_Renamed::s343 = Const::Intern("unify_int_x");
Const* asm_Renamed::s344 = Const::Intern("unify_int_y");
Const* asm_Renamed::s345 = Const::Intern("unify_list_x");
Const* asm_Renamed::s346 = Const::Intern("unify_list_y");
Const* asm_Renamed::s347 = Const::Intern("unify_nil_x");
Const* asm_Renamed::s348 = Const::Intern("unify_nil_y");
Const* asm_Renamed::s349 = Const::Intern("unify_struct_x");
Const* asm_Renamed::s350 = Const::Intern("unify_struct_y");
Const* asm_Renamed::s351 = Const::Intern("unify_ux_ux");
Const* asm_Renamed::s352 = Const::Intern("unify_ux_uy");
Const* asm_Renamed::s353 = Const::Intern("unify_uy_uy");
Const* asm_Renamed::s354 = Const::Intern("user");
Const* asm_Renamed::s355 = Const::Intern("var");
Const* asm_Renamed::s356 = Const::Intern("vx");
Const* asm_Renamed::s357 = Const::Intern("vy");
Const* asm_Renamed::s358 = Const::Intern("warning");
Const* asm_Renamed::s359 = Const::Intern("write");
Const* asm_Renamed::s360 = Const::Intern("writename");
Const* asm_Renamed::s361 = Const::Intern("x");
Const* asm_Renamed::s362 = Const::Intern("x_or_y");
Const* asm_Renamed::s363 = Const::Intern("xfx");
Const* asm_Renamed::s364 = Const::Intern("y");
Int* asm_Renamed::negint2 = Term::Number(-2);
Int* asm_Renamed::posint0 = Term::Number(0);
Int* asm_Renamed::posint1 = Term::Number(1);
Int* asm_Renamed::posint2 = Term::Number(2);
Int* asm_Renamed::posint3 = Term::Number(3);
Int* asm_Renamed::posint4 = Term::Number(4);
Int* asm_Renamed::posint5 = Term::Number(5);
Int* asm_Renamed::posint6 = Term::Number(6);
Int* asm_Renamed::posint7 = Term::Number(7);
Int* asm_Renamed::posint8 = Term::Number(8);
Int* asm_Renamed::posint9 = Term::Number(9);
Int* asm_Renamed::posint10 = Term::Number(10);
Int* asm_Renamed::posint11 = Term::Number(11);
Int* asm_Renamed::posint12 = Term::Number(12);
Int* asm_Renamed::posint13 = Term::Number(13);
Int* asm_Renamed::posint14 = Term::Number(14);
Int* asm_Renamed::posint15 = Term::Number(15);
Int* asm_Renamed::posint16 = Term::Number(16);
Int* asm_Renamed::posint17 = Term::Number(17);
Int* asm_Renamed::posint18 = Term::Number(18);
Int* asm_Renamed::posint19 = Term::Number(19);
Int* asm_Renamed::posint20 = Term::Number(20);
Int* asm_Renamed::posint21 = Term::Number(21);
Int* asm_Renamed::posint22 = Term::Number(22);
Int* asm_Renamed::posint23 = Term::Number(23);
Int* asm_Renamed::posint24 = Term::Number(24);
Int* asm_Renamed::posint25 = Term::Number(25);
Int* asm_Renamed::posint26 = Term::Number(26);
Int* asm_Renamed::posint27 = Term::Number(27);
Int* asm_Renamed::posint28 = Term::Number(28);
Int* asm_Renamed::posint29 = Term::Number(29);
Int* asm_Renamed::posint30 = Term::Number(30);
Int* asm_Renamed::posint31 = Term::Number(31);
Int* asm_Renamed::posint32 = Term::Number(32);
Int* asm_Renamed::posint33 = Term::Number(33);
Int* asm_Renamed::posint34 = Term::Number(34);
Int* asm_Renamed::posint35 = Term::Number(35);
Int* asm_Renamed::posint36 = Term::Number(36);
Int* asm_Renamed::posint37 = Term::Number(37);
Int* asm_Renamed::posint38 = Term::Number(38);
Int* asm_Renamed::posint39 = Term::Number(39);
Int* asm_Renamed::posint40 = Term::Number(40);
Int* asm_Renamed::posint41 = Term::Number(41);
Int* asm_Renamed::posint42 = Term::Number(42);
Int* asm_Renamed::posint43 = Term::Number(43);
Int* asm_Renamed::posint44 = Term::Number(44);
Int* asm_Renamed::posint45 = Term::Number(45);
Int* asm_Renamed::posint46 = Term::Number(46);
Int* asm_Renamed::posint47 = Term::Number(47);
Int* asm_Renamed::posint48 = Term::Number(48);
Int* asm_Renamed::posint49 = Term::Number(49);
Int* asm_Renamed::posint50 = Term::Number(50);
Int* asm_Renamed::posint51 = Term::Number(51);
Int* asm_Renamed::posint52 = Term::Number(52);
Int* asm_Renamed::posint53 = Term::Number(53);
Int* asm_Renamed::posint54 = Term::Number(54);
Int* asm_Renamed::posint55 = Term::Number(55);
Int* asm_Renamed::posint56 = Term::Number(56);
Int* asm_Renamed::posint57 = Term::Number(57);
Int* asm_Renamed::posint58 = Term::Number(58);
Int* asm_Renamed::posint59 = Term::Number(59);
Int* asm_Renamed::posint60 = Term::Number(60);
Int* asm_Renamed::posint61 = Term::Number(61);
Int* asm_Renamed::posint62 = Term::Number(62);
Int* asm_Renamed::posint63 = Term::Number(63);
Int* asm_Renamed::posint64 = Term::Number(64);
Int* asm_Renamed::posint65 = Term::Number(65);
Int* asm_Renamed::posint66 = Term::Number(66);
Int* asm_Renamed::posint67 = Term::Number(67);
Int* asm_Renamed::posint68 = Term::Number(68);
Int* asm_Renamed::posint69 = Term::Number(69);
Int* asm_Renamed::posint70 = Term::Number(70);
Int* asm_Renamed::posint71 = Term::Number(71);
Int* asm_Renamed::posint72 = Term::Number(72);
Int* asm_Renamed::posint73 = Term::Number(73);
Int* asm_Renamed::posint74 = Term::Number(74);
Int* asm_Renamed::posint75 = Term::Number(75);
Int* asm_Renamed::posint76 = Term::Number(76);
Int* asm_Renamed::posint77 = Term::Number(77);
Int* asm_Renamed::posint78 = Term::Number(78);
Int* asm_Renamed::posint79 = Term::Number(79);
Int* asm_Renamed::posint80 = Term::Number(80);
Int* asm_Renamed::posint81 = Term::Number(81);
Int* asm_Renamed::posint82 = Term::Number(82);
Int* asm_Renamed::posint83 = Term::Number(83);
Int* asm_Renamed::posint84 = Term::Number(84);
Int* asm_Renamed::posint85 = Term::Number(85);
Int* asm_Renamed::posint86 = Term::Number(86);
Int* asm_Renamed::posint87 = Term::Number(87);
Int* asm_Renamed::posint88 = Term::Number(88);
Int* asm_Renamed::posint89 = Term::Number(89);
Int* asm_Renamed::posint90 = Term::Number(90);
Int* asm_Renamed::posint91 = Term::Number(91);
Int* asm_Renamed::posint92 = Term::Number(92);
Int* asm_Renamed::posint93 = Term::Number(93);
Int* asm_Renamed::posint94 = Term::Number(94);
Int* asm_Renamed::posint95 = Term::Number(95);
Int* asm_Renamed::posint96 = Term::Number(96);
Int* asm_Renamed::posint97 = Term::Number(97);
Int* asm_Renamed::posint98 = Term::Number(98);
Int* asm_Renamed::posint99 = Term::Number(99);
Int* asm_Renamed::posint100 = Term::Number(100);
Int* asm_Renamed::posint101 = Term::Number(101);
Int* asm_Renamed::posint102 = Term::Number(102);
Int* asm_Renamed::posint103 = Term::Number(103);
Int* asm_Renamed::posint104 = Term::Number(104);
Int* asm_Renamed::posint105 = Term::Number(105);
Int* asm_Renamed::posint106 = Term::Number(106);
Int* asm_Renamed::posint107 = Term::Number(107);
Int* asm_Renamed::posint108 = Term::Number(108);
Int* asm_Renamed::posint109 = Term::Number(109);
Int* asm_Renamed::posint110 = Term::Number(110);
Int* asm_Renamed::posint111 = Term::Number(111);
Int* asm_Renamed::posint112 = Term::Number(112);
Int* asm_Renamed::posint113 = Term::Number(113);
Int* asm_Renamed::posint114 = Term::Number(114);
Int* asm_Renamed::posint115 = Term::Number(115);
Int* asm_Renamed::posint116 = Term::Number(116);
Int* asm_Renamed::posint117 = Term::Number(117);
Int* asm_Renamed::posint118 = Term::Number(118);
Int* asm_Renamed::posint119 = Term::Number(119);
Int* asm_Renamed::posint120 = Term::Number(120);
Int* asm_Renamed::posint121 = Term::Number(121);
Int* asm_Renamed::posint122 = Term::Number(122);
Int* asm_Renamed::posint123 = Term::Number(123);
Int* asm_Renamed::posint124 = Term::Number(124);
Int* asm_Renamed::posint125 = Term::Number(125);
Int* asm_Renamed::posint126 = Term::Number(126);
Int* asm_Renamed::posint127 = Term::Number(127);
Int* asm_Renamed::posint128 = Term::Number(128);
Int* asm_Renamed::posint129 = Term::Number(129);
Int* asm_Renamed::posint130 = Term::Number(130);
Int* asm_Renamed::posint131 = Term::Number(131);
Int* asm_Renamed::posint132 = Term::Number(132);
Int* asm_Renamed::posint133 = Term::Number(133);
Int* asm_Renamed::posint134 = Term::Number(134);
Int* asm_Renamed::posint135 = Term::Number(135);
Int* asm_Renamed::posint136 = Term::Number(136);
Int* asm_Renamed::posint137 = Term::Number(137);
Int* asm_Renamed::posint138 = Term::Number(138);
Int* asm_Renamed::posint139 = Term::Number(139);
Int* asm_Renamed::posint140 = Term::Number(140);
Int* asm_Renamed::posint141 = Term::Number(141);
Int* asm_Renamed::posint142 = Term::Number(142);
Int* asm_Renamed::posint143 = Term::Number(143);
Int* asm_Renamed::posint144 = Term::Number(144);
Int* asm_Renamed::posint145 = Term::Number(145);
Int* asm_Renamed::posint146 = Term::Number(146);
Int* asm_Renamed::posint147 = Term::Number(147);
Int* asm_Renamed::posint148 = Term::Number(148);
Int* asm_Renamed::posint149 = Term::Number(149);
Int* asm_Renamed::posint150 = Term::Number(150);
Int* asm_Renamed::posint151 = Term::Number(151);
Int* asm_Renamed::posint152 = Term::Number(152);
Int* asm_Renamed::posint153 = Term::Number(153);
Int* asm_Renamed::posint154 = Term::Number(154);
Int* asm_Renamed::posint155 = Term::Number(155);
Int* asm_Renamed::posint156 = Term::Number(156);
Int* asm_Renamed::posint157 = Term::Number(157);
Int* asm_Renamed::posint158 = Term::Number(158);
Int* asm_Renamed::posint159 = Term::Number(159);
Int* asm_Renamed::posint160 = Term::Number(160);
Int* asm_Renamed::posint161 = Term::Number(161);
Int* asm_Renamed::posint162 = Term::Number(162);
Int* asm_Renamed::posint163 = Term::Number(163);
Int* asm_Renamed::posint164 = Term::Number(164);
Int* asm_Renamed::posint165 = Term::Number(165);
Int* asm_Renamed::posint166 = Term::Number(166);
Int* asm_Renamed::posint167 = Term::Number(167);
Int* asm_Renamed::posint168 = Term::Number(168);
Int* asm_Renamed::posint169 = Term::Number(169);
Int* asm_Renamed::posint170 = Term::Number(170);
Int* asm_Renamed::posint171 = Term::Number(171);
Int* asm_Renamed::posint172 = Term::Number(172);
Int* asm_Renamed::posint173 = Term::Number(173);
Int* asm_Renamed::posint174 = Term::Number(174);
Int* asm_Renamed::posint175 = Term::Number(175);
Int* asm_Renamed::posint176 = Term::Number(176);
Int* asm_Renamed::posint177 = Term::Number(177);
Int* asm_Renamed::posint178 = Term::Number(178);
Int* asm_Renamed::posint179 = Term::Number(179);
Int* asm_Renamed::posint180 = Term::Number(180);
Int* asm_Renamed::posint181 = Term::Number(181);
Int* asm_Renamed::posint182 = Term::Number(182);
Int* asm_Renamed::posint183 = Term::Number(183);
Int* asm_Renamed::posint184 = Term::Number(184);
Int* asm_Renamed::posint185 = Term::Number(185);
Int* asm_Renamed::posint186 = Term::Number(186);
Int* asm_Renamed::posint187 = Term::Number(187);
Int* asm_Renamed::posint188 = Term::Number(188);
Int* asm_Renamed::posint189 = Term::Number(189);
Int* asm_Renamed::posint190 = Term::Number(190);
Int* asm_Renamed::posint191 = Term::Number(191);
Int* asm_Renamed::posint192 = Term::Number(192);
Int* asm_Renamed::posint193 = Term::Number(193);
Int* asm_Renamed::posint194 = Term::Number(194);
Int* asm_Renamed::posint195 = Term::Number(195);
Int* asm_Renamed::posint196 = Term::Number(196);
Int* asm_Renamed::posint197 = Term::Number(197);
Int* asm_Renamed::posint198 = Term::Number(198);
Int* asm_Renamed::posint199 = Term::Number(199);
Int* asm_Renamed::posint200 = Term::Number(200);
Int* asm_Renamed::posint201 = Term::Number(201);
Int* asm_Renamed::posint202 = Term::Number(202);
Int* asm_Renamed::posint203 = Term::Number(203);
Int* asm_Renamed::posint204 = Term::Number(204);
Int* asm_Renamed::posint205 = Term::Number(205);
Int* asm_Renamed::posint206 = Term::Number(206);
Int* asm_Renamed::posint207 = Term::Number(207);
Int* asm_Renamed::posint208 = Term::Number(208);
Int* asm_Renamed::posint209 = Term::Number(209);
Int* asm_Renamed::posint210 = Term::Number(210);
Int* asm_Renamed::posint211 = Term::Number(211);
Int* asm_Renamed::posint212 = Term::Number(212);
Int* asm_Renamed::posint213 = Term::Number(213);
Int* asm_Renamed::posint214 = Term::Number(214);
Int* asm_Renamed::posint215 = Term::Number(215);
Int* asm_Renamed::posint216 = Term::Number(216);
Int* asm_Renamed::posint217 = Term::Number(217);
Int* asm_Renamed::posint218 = Term::Number(218);
Int* asm_Renamed::posint219 = Term::Number(219);
Int* asm_Renamed::posint220 = Term::Number(220);
Int* asm_Renamed::posint221 = Term::Number(221);
Int* asm_Renamed::posint222 = Term::Number(222);
Int* asm_Renamed::posint223 = Term::Number(223);
Int* asm_Renamed::posint224 = Term::Number(224);
Int* asm_Renamed::posint225 = Term::Number(225);
Int* asm_Renamed::posint226 = Term::Number(226);
Int* asm_Renamed::posint227 = Term::Number(227);
Int* asm_Renamed::posint228 = Term::Number(228);
Int* asm_Renamed::posint229 = Term::Number(229);
Int* asm_Renamed::posint230 = Term::Number(230);
Int* asm_Renamed::posint231 = Term::Number(231);
Int* asm_Renamed::posint232 = Term::Number(232);
Int* asm_Renamed::posint233 = Term::Number(233);
Int* asm_Renamed::posint234 = Term::Number(234);
Int* asm_Renamed::posint255 = Term::Number(255);
Int* asm_Renamed::posint300 = Term::Number(300);
Int* asm_Renamed::posint950 = Term::Number(950);

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_load_asm_0__1(mach));
}

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(asm_Renamed::s230, asm_Renamed::posint300, asm_Renamed::s363, asm_Renamed::s18);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(asm_Renamed::s230, asm_Renamed::posint950, asm_Renamed::s363, asm_Renamed::s12);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(asm_Renamed::s93, F(asm_Renamed::s9, F(asm_Renamed::s10, asm_Renamed::s84, asm_Renamed::posint1), F(asm_Renamed::s9, F(asm_Renamed::s10, asm_Renamed::s224, asm_Renamed::posint2), F(asm_Renamed::s9, F(asm_Renamed::s10, asm_Renamed::s194, asm_Renamed::posint2), F(asm_Renamed::s9, F(asm_Renamed::s10, asm_Renamed::s42, asm_Renamed::posint2), Const::Nil)))));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(asm_Renamed::s199, F(asm_Renamed::s55, asm_Renamed::s80, asm_Renamed::s91, asm_Renamed::s105));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_asm_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(asm_Renamed::s199, F(asm_Renamed::s231, asm_Renamed::s80, asm_Renamed::s105));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_asm_bp_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_bp_2__1(mach));
}

static* function < Function*pred_asm_bp_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s133, asm_Renamed::s3, asm_Renamed::posint0, asm_Renamed::posint1);
	local_aregs[2] = F(asm_Renamed::s275, { var1->Deref(), F(asm_Renamed::s40, var3, F(asm_Renamed::s276, F(asm_Renamed::s295, { var2->Deref(), F(asm_Renamed::s38, { var3->Deref(), var4, var5, asm_Renamed::posint0, var6, F(asm_Renamed::s125, var7, asm_Renamed::s87, asm_Renamed::posint255, F(asm_Renamed::s125, var8, asm_Renamed::s197, asm_Renamed::posint255, F(asm_Renamed::s130, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, F(asm_Renamed::s57, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), var9, var10, F(asm_Renamed::s50, asm_Renamed::posint3, F(asm_Renamed::s63, { var10->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var9->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var6->Deref(), asm_Renamed::posint4, F(asm_Renamed::s58, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s51, F(asm_Renamed::s131, asm_Renamed::s3, asm_Renamed::posint0, F(asm_Renamed::s297, { continuation }))) }) }) }) })) })))) }) }))) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_2__1(mach));
}

static* function < Function*pred_asm_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s275, { var1->Deref() });
	local_aregs[2] = F(asm_Renamed::s40, var3, F(asm_Renamed::s276, F(asm_Renamed::s295, { var2->Deref(), F(asm_Renamed::s38, { var3->Deref(), var4, var5, asm_Renamed::posint0, var6, F(asm_Renamed::s125, var7, asm_Renamed::s87, asm_Renamed::posint255, F(asm_Renamed::s125, var8, asm_Renamed::s197, asm_Renamed::posint255, F(asm_Renamed::s130, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, F(asm_Renamed::s53, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), var9, var10, F(asm_Renamed::s50, asm_Renamed::posint3, F(asm_Renamed::s63, { var10->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var9->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var6->Deref(), asm_Renamed::posint4, F(asm_Renamed::s58, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s51, F(asm_Renamed::s297, { continuation })) }) }) }) })) })))) }) })));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_getaslist_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_getaslist_1__1(mach));
}

static* function < Function*pred_asm_getaslist_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s269, var2);
	local_aregs[2] = F(asm_Renamed::s41, { var2->Deref(), var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_getaslist1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_getaslist1_2__1(mach));
}

static* function < Function*pred_asm_getaslist1_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s99))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var1->Deref(), Const::Nil });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_getaslist1_2::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var2->Deref(), F(asm_Renamed::s9, { var1->Deref(), var3 }) });
	local_aregs[2] = F(asm_Renamed::s269, var4, F(asm_Renamed::s41, { var4->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_1__1(mach));
}

static* function < Function*pred_asm_1::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s38, { var1->Deref(), var2, var3, asm_Renamed::posint0, var4 });
	local_aregs[2] = F(asm_Renamed::s125, var5, asm_Renamed::s87, asm_Renamed::posint255, F(asm_Renamed::s125, var6, asm_Renamed::s197, asm_Renamed::posint255, F(asm_Renamed::s130, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, F(asm_Renamed::s53, { var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var7, var8, F(asm_Renamed::s50, asm_Renamed::posint3, F(asm_Renamed::s63, { var8->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var7->Deref(), asm_Renamed::posint4, F(asm_Renamed::s63, { var4->Deref(), asm_Renamed::posint4, F(asm_Renamed::s58, { var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), F(asm_Renamed::s51, { continuation }) }) }) }) })) }))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm0_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm0_5__1(mach));
}

static* function < Function*pred_asm0_5::(PrologMachine*) {
	mach::FillAlternative(pred_asm0_5::exec_pred_asm0_5__2);
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
	if(!((areg0)->Unify(Const::Nil))) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var1->Deref(), Const::Nil });
	local_aregs[2] = F(asm_Renamed::s14, { var2->Deref(), Const::Nil, F(asm_Renamed::s14, { var4->Deref(), var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm0_5::(PrologMachine*) {
	mach::FillAlternative(pred_asm0_5::exec_pred_asm0_5__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
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
	local_aregs[0] = F(asm_Renamed::s44, { var1->Deref(), var7 });
	local_aregs[1] = F(asm_Renamed::s151, var8, F(asm_Renamed::s5, { var5->Deref(), var7->Deref() }));
	local_aregs[2] = F(asm_Renamed::s306, F(asm_Renamed::s9, { var1->Deref(), var9 }), var4->Deref(), F(asm_Renamed::s38, { var2->Deref(), var3->Deref(), var9->Deref(), var8->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm0_5::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), F(asm_Renamed::s9, { var1->Deref(), var7 }) });
	local_aregs[2] = F(asm_Renamed::s38, { var2->Deref(), var7->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass1_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass1_6__1(mach));
}

static* function < Function*pred_asm_pass1_6::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s54, { var1->Deref(), var4->Deref(), var3->Deref(), asm_Renamed::posint0, var5->Deref() });
	local_aregs[2] = F(asm_Renamed::s45, { var2->Deref(), var3->Deref(), F(asm_Renamed::s66, { var4->Deref(), asm_Renamed::posint255, var3->Deref(), F(asm_Renamed::s68, { var3->Deref(), asm_Renamed::posint255, asm_Renamed::posint0, var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass1_bp_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass1_bp_6__1(mach));
}

static* function < Function*pred_asm_pass1_bp_6::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s54, { var1->Deref(), var4->Deref(), var3->Deref(), asm_Renamed::posint0, var5->Deref() });
	local_aregs[2] = F(asm_Renamed::s45, { var2->Deref(), var3->Deref(), F(asm_Renamed::s67, { var4->Deref(), asm_Renamed::posint255, var3->Deref(), F(asm_Renamed::s68, { var3->Deref(), asm_Renamed::posint255, asm_Renamed::posint0, var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass11_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass11_5__1(mach));
}

static* function < Function*pred_asm_pass11_5::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__2);
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
	if(!((areg0)->Unify(Const::Nil))) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var4->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass11_5::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
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
	local_aregs[0] = F(asm_Renamed::s193, var7);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(asm_Renamed::s12, F(asm_Renamed::s192, F(asm_Renamed::s191, { var7->Deref(), var5->Deref() }), var3->Deref()), F(asm_Renamed::s54, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c60_system_equals_2::exec_static);
}

static* function < Function*pred_asm_pass11_5::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
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
	local_aregs[0] = F(asm_Renamed::s18, F(asm_Renamed::s193, var7), var1->Deref());
	local_aregs[1] = F(asm_Renamed::s102, { var7->Deref() });
	local_aregs[2] = F(asm_Renamed::s54, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass11_5::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s55, { var1->Deref(), var4->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s151, var8, F(asm_Renamed::s5, { var5->Deref(), var7->Deref() }), F(asm_Renamed::s54, { var2->Deref(), var3->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_error_double_define_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_error_double_define_1__1(mach));
}

static* function < Function*pred_error_double_define_1::(PrologMachine*) {
	mach::FillAlternative(pred_error_double_define_1::exec_pred_error_double_define_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s6, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_error_double_define_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s6, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s84, F(asm_Renamed::s9, asm_Renamed::s25, F(asm_Renamed::s9, F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), F(asm_Renamed::s9, asm_Renamed::s2, Const::Nil))));
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_index_pass1_2__1(mach));
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__2);
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s263, var1, var2, var3, var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s45, { var5->Deref(), var6->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s36, var1, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s80 });
	local_aregs[1] = F(asm_Renamed::s293, F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var6, var7 }), var5->Deref());
	local_aregs[2] = F(asm_Renamed::s45, { var4->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__5);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s36, var1, F(asm_Renamed::s6, var2, var3), var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s272 });
	local_aregs[1] = F(asm_Renamed::s293, F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var7, var8 }), var6->Deref());
	local_aregs[2] = F(asm_Renamed::s45, { var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_pass1_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s36, var1, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s45, { var4->Deref(), var5->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_fillin_3__1(mach));
}

static* function < Function*pred_asmpass1_fillin_3::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__2);
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
	local_aregs[0] = F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s34, { var2->Deref(), var1->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s66, { var4->Deref(), var3->Deref(), F(asm_Renamed::s151, var5, F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s66, { var1->Deref(), var5->Deref(), var3->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_fillin_2__1(mach));
}

static* function < Function*pred_asmpass1_fillin_2::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var1->Deref() });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_2::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, F(asm_Renamed::s6, var1, F(asm_Renamed::s6, var2, var3)), var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s66, { var5->Deref(), var6->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, F(asm_Renamed::s6, var1, var2), var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s293, F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var3->Deref(), var6 }), var5->Deref());
	local_aregs[2] = F(asm_Renamed::s66, { var4->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_fillin_bp_3__1(mach));
}

static* function < Function*pred_asmpass1_fillin_bp_3::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__2);
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
	local_aregs[0] = F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s34, { var2->Deref(), var1->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s67, { var4->Deref(), var3->Deref(), F(asm_Renamed::s151, var5, F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s67, { var1->Deref(), var5->Deref(), var3->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_fillin_bp_2__1(mach));
}

static* function < Function*pred_asmpass1_fillin_bp_2::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var1->Deref() });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_2::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, F(asm_Renamed::s6, var1, F(asm_Renamed::s6, var2, var3)), var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s67, { var5->Deref(), var6->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_2::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, F(asm_Renamed::s6, var1, var2), var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s264, { var1->Deref(), var2->Deref() });
	local_aregs[1] = F(asm_Renamed::s293, F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var3->Deref(), var6 }), var5->Deref());
	local_aregs[2] = F(asm_Renamed::s67, { var4->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_fillin_bp_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, F(asm_Renamed::s6, var1, var2), var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s67, { var4->Deref(), var5->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_setundef_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_setundef_4__1(mach));
}

static* function < Function*pred_asmpass1_setundef_4::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__2);
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
	local_aregs[0] = F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
	local_aregs[1] = F(asm_Renamed::s19, { var4->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_setundef_4::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s34, { var2->Deref(), var1->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s68, { var5->Deref(), var3->Deref(), var6, F(asm_Renamed::s151, var7, F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s68, { var1->Deref(), var7->Deref(), var6->Deref(), var4->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_setundef_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asmpass1_setundef_3__1(mach));
}

static* function < Function*pred_asmpass1_setundef_3::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var1->Deref() });
	local_aregs[1] = F(asm_Renamed::s19, { var3->Deref(), var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_setundef_3::(PrologMachine*) {
	mach::FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s292, var1, var2, var3, var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s355, { var3->Deref() });
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::negint2 });
	local_aregs[2] = F(asm_Renamed::s73, { var1->Deref(), var8, F(asm_Renamed::s151, var9, F(asm_Renamed::s5, F(asm_Renamed::s5, { var6->Deref(), var8->Deref() }), asm_Renamed::posint6), F(asm_Renamed::s68, { var5->Deref(), var9->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asmpass1_setundef_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s292, var1, var2, var3, var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s73, { var1->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s151, var9, F(asm_Renamed::s5, F(asm_Renamed::s5, { var6->Deref(), var8->Deref() }), asm_Renamed::posint6), F(asm_Renamed::s68, { var5->Deref(), var9->Deref(), var7->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass12_3__1(mach));
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s193, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s155, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s173, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var7, var8 });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__5);
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
	if(!((areg0)->Unify(F(asm_Renamed::s174, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var7, var8 });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__6);
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
	if(!((areg0)->Unify(F(asm_Renamed::s169, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var6, var7 });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__7);
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
	if(!((areg0)->Unify(F(asm_Renamed::s170, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var6, var7 });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s185, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s186, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__10);
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
	if(!((areg0)->Unify(F(asm_Renamed::s286, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__11);
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
	if(!((areg0)->Unify(F(asm_Renamed::s287, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__12);
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
	if(!((areg0)->Unify(F(asm_Renamed::s288, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__13);
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
	if(!((areg0)->Unify(F(asm_Renamed::s289, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__14);
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
	if(!((areg0)->Unify(F(asm_Renamed::s290, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__15);
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
	if(!((areg0)->Unify(F(asm_Renamed::s291, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__16);
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
	if(!((areg0)->Unify(F(asm_Renamed::s171, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__17);
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
	if(!((areg0)->Unify(F(asm_Renamed::s172, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s175, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s156, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s157, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s180, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s181, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s178, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s179, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s182, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s158, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s189, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s190, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__29);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s160, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s161, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s162, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s163, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__33);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s164, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__34);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s165, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__35);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s187, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__36);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s188, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__37);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s183, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__38);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s184, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__39);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s176, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__40);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s177, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__41);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s138, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__42);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s137, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__43);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s136, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__44);
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
	if(!((areg0)->Unify(F(asm_Renamed::s135, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__45);
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
	if(!((areg0)->Unify(F(asm_Renamed::s139, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__46);
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
	if(!((areg0)->Unify(F(asm_Renamed::s140, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__47);
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
	if(!((areg0)->Unify(F(asm_Renamed::s143, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__48);
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
	if(!((areg0)->Unify(F(asm_Renamed::s141, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__49);
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
	if(!((areg0)->Unify(F(asm_Renamed::s142, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__50);
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
	if(!((areg0)->Unify(F(asm_Renamed::s144, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__51);
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
	if(!((areg0)->Unify(F(asm_Renamed::s145, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__52);
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
	if(!((areg0)->Unify(F(asm_Renamed::s349, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__53);
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
	if(!((areg0)->Unify(F(asm_Renamed::s350, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__54);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s345, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__55);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s346, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__56);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s347, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__57);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s348, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__58);
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
	if(!((areg0)->Unify(F(asm_Renamed::s339, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__59);
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
	if(!((areg0)->Unify(F(asm_Renamed::s340, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__60);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s343, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__61);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s344, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__62);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s351, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__63);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s352, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__64);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s353, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__65);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s341, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__66);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s342, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__67);
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
	if(!((areg0)->Unify(F(asm_Renamed::s121, var1, F(asm_Renamed::s6, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var6, var7 });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__68);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s119, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__69);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s120, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__70);
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
	if(!((areg0)->Unify(F(asm_Renamed::s117, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__71);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s118, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__72);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s122, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__73);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s123, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__74);
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
	if(!((areg0)->Unify(F(asm_Renamed::s114, var1, F(asm_Renamed::s6, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var6, var7 });
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__75);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s112, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__76);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s113, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__77);
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
	if(!((areg0)->Unify(F(asm_Renamed::s110, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__78);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s111, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__79);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s115, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__80);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s116, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__81);
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
	if(!((areg0)->Unify(F(asm_Renamed::s311, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__82);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s309, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__83);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s310, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__84);
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
	if(!((areg0)->Unify(F(asm_Renamed::s307, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__85);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s308, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__86);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s312, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__87);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s313, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__88);
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
	if(!((areg0)->Unify(F(asm_Renamed::s304, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__89);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s302, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__90);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s303, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__91);
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
	if(!((areg0)->Unify(F(asm_Renamed::s300, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__92);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s301, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__93);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s305, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__94);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s299))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__95);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s318))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__96);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s314, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), asm_Renamed::posint0, var3, var4 });
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__97);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s316, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__98);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s321, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__99);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s320, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__100);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s323, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__101);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s322, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__102);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s325, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__103);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s324, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__104);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s328, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__105);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s333, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__106);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s317))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__107);
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
	if(!((areg0)->Unify(F(asm_Renamed::s319, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__108);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s327))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__109);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s326, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__110);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s338, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__111);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s331, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__112);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s332, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__113);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s329, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__114);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s330, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__115);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s336, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__116);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s337, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__117);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s334, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__118);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s335, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__119);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s315, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__120);
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
	if(!((areg0)->Unify(F(asm_Renamed::s209, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__121);
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
	if(!((areg0)->Unify(F(asm_Renamed::s210, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__122);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s205, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__123);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s206, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__124);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s207, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__125);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s208, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__126);
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
	if(!((areg0)->Unify(F(asm_Renamed::s201, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__127);
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
	if(!((areg0)->Unify(F(asm_Renamed::s202, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__128);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s203, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__129);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s204, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__130);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s213, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__131);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s214, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__132);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s216, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__133);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s217, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__134);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s211, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__135);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s212, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__136);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s215, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__137);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s218, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__138);
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
	if(!((areg0)->Unify(F(asm_Renamed::s220, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__139);
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
	if(!((areg0)->Unify(F(asm_Renamed::s219, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__140);
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
	if(!((areg0)->Unify(F(asm_Renamed::s221, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__141);
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
	if(!((areg0)->Unify(F(asm_Renamed::s222, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__142);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s33, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__143);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s232, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__144);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s195, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__145);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s196, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__146);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s86, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__147);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s27, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__148);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s28, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__149);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s280, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__150);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s281, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__151);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s223, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__152);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s94, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__153);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s149, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__154);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s198, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__155);
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
	if(!((areg0)->Unify(F(asm_Renamed::s238, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var4, var5 });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__156);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s236))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__157);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s237))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__158);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s234, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), asm_Renamed::posint0, var3, var4 });
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__159);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s235, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__160);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s239, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__161);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s247, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__162);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s258, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__163);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s259, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__164);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s257))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__165);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s256, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__166);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s262, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__167);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s260, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__168);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s261, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__169);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s246, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__170);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s240, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__171);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s243, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__172);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s255, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__173);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s248, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__174);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s251, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__175);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s241, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__176);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s242, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__177);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s244, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__178);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s245, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__179);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s249, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__180);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s250, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__181);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s252, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__182);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s253, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__183);
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
	if(!((areg0)->Unify(F(asm_Renamed::s254, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__184);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s81, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_asm_pass12_call_3::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__185);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s83, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__186);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s103, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_asm_pass12_call_3::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__187);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s104, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__188);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s270))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__189);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s271))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__190);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s166, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__191);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s274, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__192);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s29, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__193);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s31, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__194);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s30, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__195);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s108, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__196);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s106))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__197);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s107))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__198);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s109, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__199);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s85))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__200);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__201);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s89))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__202);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s90))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__203);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s273))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__204);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s127, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__205);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s129, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__206);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s267, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__207);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s146, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__208);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s147, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__209);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s294, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__210);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s34, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__211);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s35, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__212);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s277, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__213);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s278, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__214);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s125, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__215);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s75, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__216);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s76, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__217);
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
	if(!((areg0)->Unify(F(asm_Renamed::s77, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__218);
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
	if(!((areg0)->Unify(F(asm_Renamed::s78, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__219);
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
	if(!((areg0)->Unify(F(asm_Renamed::s79, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__220);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s124, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__221);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s134))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__222);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__223);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s128, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__224);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s268, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__225);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__226);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s126))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__227);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s266, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__228);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s200, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__229);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s167, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__230);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s32, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__231);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s284, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__232);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s285, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__233);
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
	if(!((areg0)->Unify(F(asm_Renamed::s92, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var5, var6 });
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__234);
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
	if(!((areg0)->Unify(F(asm_Renamed::s283, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var7, var8 });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__235);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(asm_Renamed::s98))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__236);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s227, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__237);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s159, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__238);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s168, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__239);
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
	if(!((areg0)->Unify(F(asm_Renamed::s282, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s292, { var2->Deref(), var3->Deref(), var7, var8 });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_member1_2::exec_static);
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__240);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s97, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s96, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_asm_pass12_call_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass12_call_3__1(mach));
}

static* function < Function*pred_asm_pass12_call_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__2);
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
	local_aregs[0] = asm_Renamed::s3;
	local_aregs[1] = asm_Renamed::posint0;
	local_aregs[2] = F(asm_Renamed::s74, { var1->Deref(), var2->Deref(), var4, F(asm_Renamed::s12, F(asm_Renamed::s22, { var4->Deref(), asm_Renamed::posint3 }), asm_Renamed::s298, continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_isglobal_2::exec_static);
}

static* function < Function*pred_asm_pass12_call_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s293, F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var4, var5 }), var3->Deref());
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass2_4__1(mach));
}

static* function < Function*pred_asm_pass2_4::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s64, { var3->Deref(), asm_Renamed::posint255, var5, var6 });
	local_aregs[2] = F(asm_Renamed::s65, { var6->Deref(), F(asm_Renamed::s61, { var1->Deref(), var3->Deref(), var4->Deref(), F(asm_Renamed::s43, { var2->Deref(), var3->Deref(), var4->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_index_3__1(mach));
}

static* function < Function*pred_asm_index_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_3::exec_pred_asm_index_3__2);
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s62, { var1->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[2] = F(asm_Renamed::s43, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_proc_index_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_proc_index_3__1(mach));
}

static* function < Function*pred_asm_proc_index_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__2);
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
	if(!((areg0)->Unify(F(asm_Renamed::s263, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var2->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var1->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s71, { var8->Deref(), var7->Deref(), var3->Deref(), var9->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_proc_index_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s36, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s80 });
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s360, { var1->Deref(), F(asm_Renamed::s69, { var6->Deref(), var7->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_proc_index_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s36, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s272 });
	local_aregs[1] = F(asm_Renamed::s19, { var2->Deref(), F(asm_Renamed::s6, var6, var7) });
	local_aregs[2] = F(asm_Renamed::s46, { var6->Deref(), var7->Deref(), var4->Deref(), var8, F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var9, F(asm_Renamed::s360, { var1->Deref(), F(asm_Renamed::s69, { var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_proc_index_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s36, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s360, { var1->Deref(), F(asm_Renamed::s69, { var2->Deref(), var6->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2a_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass2a_3__1(mach));
}

static* function < Function*pred_asm_pass2a_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2a_3::exec_pred_asm_pass2a_3__2);
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2a_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(asm_Renamed::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s59, { var1->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[2] = F(asm_Renamed::s61, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass2_inst_3__1(mach));
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s193, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__3);
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
	if(!((areg0)->Unify(F(asm_Renamed::s81, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s82, var5);
	local_aregs[2] = F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__4);
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
	if(!((areg0)->Unify(F(asm_Renamed::s81, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s15, F(asm_Renamed::s8, F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var3->Deref(), var5 }), F(asm_Renamed::s6, F(asm_Renamed::s231, asm_Renamed::s81, var6), F(asm_Renamed::s69, { var6->Deref(), var5->Deref() }))), F(asm_Renamed::s358, F(asm_Renamed::s9, F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), F(asm_Renamed::s9, asm_Renamed::s1, Const::Nil))));
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__5);
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
	if(!((areg0)->Unify(F(asm_Renamed::s103, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s95, var5);
	local_aregs[2] = F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__6);
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
	if(!((areg0)->Unify(F(asm_Renamed::s103, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s15, F(asm_Renamed::s8, F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var3->Deref(), var5 }), F(asm_Renamed::s6, F(asm_Renamed::s231, asm_Renamed::s103, var6), F(asm_Renamed::s69, { var6->Deref(), var5->Deref() }))), F(asm_Renamed::s358, F(asm_Renamed::s9, F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), F(asm_Renamed::s9, asm_Renamed::s1, Const::Nil))));
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__7);
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
	if(!((areg0)->Unify(F(asm_Renamed::s155, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s155, var5);
	local_aregs[2] = F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__8);
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
	if(!((areg0)->Unify(F(asm_Renamed::s159, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s159, var5);
	local_aregs[2] = F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s173, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var7->Deref(), var9, F(asm_Renamed::s48, { var5->Deref(), var7->Deref(), var10, F(asm_Renamed::s231, asm_Renamed::s173, var11, F(asm_Renamed::s71, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), F(asm_Renamed::s72, { var10->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s174, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var7->Deref(), var9, F(asm_Renamed::s48, { var5->Deref(), var7->Deref(), var10, F(asm_Renamed::s231, asm_Renamed::s174, var11, F(asm_Renamed::s71, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), F(asm_Renamed::s72, { var10->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s169, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var5->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s169, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s170, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var5->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s170, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__13);
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
	if(!((areg0)->Unify(F(asm_Renamed::s185, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s185, var8, F(asm_Renamed::s71, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__14);
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
	if(!((areg0)->Unify(F(asm_Renamed::s186, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s186, var8, F(asm_Renamed::s71, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s286, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s286, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s287, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s287, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s288, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s288, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s289, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s289, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s290, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s290, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s291, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var8, F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var9, F(asm_Renamed::s231, asm_Renamed::s291, var10, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), F(asm_Renamed::s72, { var9->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__21);
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
	if(!((areg0)->Unify(F(asm_Renamed::s171, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s171, var9, F(asm_Renamed::s71, { var9->Deref(), var1->Deref(), var2->Deref(), var7->Deref(), F(asm_Renamed::s72, { var8->Deref(), continuation }) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__22);
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
	if(!((areg0)->Unify(F(asm_Renamed::s172, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s172, var9, F(asm_Renamed::s71, { var9->Deref(), var1->Deref(), var2->Deref(), var7->Deref(), F(asm_Renamed::s72, { var8->Deref(), continuation }) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__23);
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
	if(!((areg0)->Unify(F(asm_Renamed::s175, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s175, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__24);
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
	if(!((areg0)->Unify(F(asm_Renamed::s156, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s156, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__25);
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
	if(!((areg0)->Unify(F(asm_Renamed::s157, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s157, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__26);
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
	if(!((areg0)->Unify(F(asm_Renamed::s180, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s180, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__27);
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
	if(!((areg0)->Unify(F(asm_Renamed::s181, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s181, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__28);
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
	if(!((areg0)->Unify(F(asm_Renamed::s178, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s178, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__29);
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
	if(!((areg0)->Unify(F(asm_Renamed::s179, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s179, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__30);
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
	if(!((areg0)->Unify(F(asm_Renamed::s182, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s182, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__31);
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
	if(!((areg0)->Unify(F(asm_Renamed::s158, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s158, var9, F(asm_Renamed::s71, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__32);
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
	if(!((areg0)->Unify(F(asm_Renamed::s189, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s189, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__33);
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
	if(!((areg0)->Unify(F(asm_Renamed::s190, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s190, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__34);
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
	if(!((areg0)->Unify(F(asm_Renamed::s160, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s160, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__35);
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
	if(!((areg0)->Unify(F(asm_Renamed::s161, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s161, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__36);
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
	if(!((areg0)->Unify(F(asm_Renamed::s162, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s162, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__37);
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
	if(!((areg0)->Unify(F(asm_Renamed::s163, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s163, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__38);
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
	if(!((areg0)->Unify(F(asm_Renamed::s164, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s164, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__39);
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
	if(!((areg0)->Unify(F(asm_Renamed::s165, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s165, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__40);
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
	if(!((areg0)->Unify(F(asm_Renamed::s187, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s187, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__41);
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
	if(!((areg0)->Unify(F(asm_Renamed::s188, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s188, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__42);
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
	if(!((areg0)->Unify(F(asm_Renamed::s176, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s176, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__43);
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
	if(!((areg0)->Unify(F(asm_Renamed::s177, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s177, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__44);
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
	if(!((areg0)->Unify(F(asm_Renamed::s183, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s183, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__45);
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
	if(!((areg0)->Unify(F(asm_Renamed::s184, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s184, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__46);
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
	if(!((areg0)->Unify(F(asm_Renamed::s138, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s138, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__47);
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
	if(!((areg0)->Unify(F(asm_Renamed::s137, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s137, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__48);
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
	if(!((areg0)->Unify(F(asm_Renamed::s136, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s136, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__49);
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
	if(!((areg0)->Unify(F(asm_Renamed::s135, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var6, F(asm_Renamed::s231, asm_Renamed::s135, var7, F(asm_Renamed::s70, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__50);
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
	if(!((areg0)->Unify(F(asm_Renamed::s139, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s139, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__51);
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
	if(!((areg0)->Unify(F(asm_Renamed::s140, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s140, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__52);
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
	if(!((areg0)->Unify(F(asm_Renamed::s143, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s143, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__53);
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
	if(!((areg0)->Unify(F(asm_Renamed::s141, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s141, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__54);
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
	if(!((areg0)->Unify(F(asm_Renamed::s142, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s142, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__55);
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
	if(!((areg0)->Unify(F(asm_Renamed::s144, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s144, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__56);
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
	if(!((areg0)->Unify(F(asm_Renamed::s145, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s145, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__57);
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
	if(!((areg0)->Unify(F(asm_Renamed::s166, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s166, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__58);
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
	if(!((areg0)->Unify(F(asm_Renamed::s167, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s167, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__59);
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
	if(!((areg0)->Unify(F(asm_Renamed::s274, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var6, F(asm_Renamed::s231, asm_Renamed::s274, var7, F(asm_Renamed::s70, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__60);
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
	if(!((areg0)->Unify(F(asm_Renamed::s349, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s349, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__61);
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
	if(!((areg0)->Unify(F(asm_Renamed::s350, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s350, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__62);
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
	if(!((areg0)->Unify(F(asm_Renamed::s311, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s311, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__63);
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
	if(!((areg0)->Unify(F(asm_Renamed::s304, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s304, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__64);
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
	if(!((areg0)->Unify(F(asm_Renamed::s339, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s339, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__65);
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
	if(!((areg0)->Unify(F(asm_Renamed::s340, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s340, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__66);
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
	if(!((areg0)->Unify(F(asm_Renamed::s307, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s307, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__67);
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
	if(!((areg0)->Unify(F(asm_Renamed::s300, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s300, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__68);
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
	if(!((areg0)->Unify(F(asm_Renamed::s314, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), asm_Renamed::posint0, var2->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s314, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__69);
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
	if(!((areg0)->Unify(F(asm_Renamed::s319, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s319, var6, F(asm_Renamed::s69, { var6->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__70);
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
	if(!((areg0)->Unify(F(asm_Renamed::s209, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s209, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__71);
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
	if(!((areg0)->Unify(F(asm_Renamed::s210, var1, F(asm_Renamed::s6, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s210, var7, F(asm_Renamed::s70, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__72);
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
	if(!((areg0)->Unify(F(asm_Renamed::s201, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s201, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__73);
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
	if(!((areg0)->Unify(F(asm_Renamed::s202, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s202, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__74);
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
	if(!((areg0)->Unify(F(asm_Renamed::s33, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s33, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__75);
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
	if(!((areg0)->Unify(F(asm_Renamed::s232, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s232, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__76);
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
	if(!((areg0)->Unify(F(asm_Renamed::s195, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s195, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__77);
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
	if(!((areg0)->Unify(F(asm_Renamed::s196, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s196, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__78);
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
	if(!((areg0)->Unify(F(asm_Renamed::s86, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var6, F(asm_Renamed::s231, asm_Renamed::s86, var7, F(asm_Renamed::s70, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__79);
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
	if(!((areg0)->Unify(F(asm_Renamed::s27, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s27, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__80);
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
	if(!((areg0)->Unify(F(asm_Renamed::s280, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s280, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__81);
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
	if(!((areg0)->Unify(F(asm_Renamed::s223, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s223, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__82);
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
	if(!((areg0)->Unify(F(asm_Renamed::s94, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s94, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__83);
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
	if(!((areg0)->Unify(F(asm_Renamed::s149, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s149, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__84);
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
	if(!((areg0)->Unify(F(asm_Renamed::s198, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s362, { var1->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s198, var9, F(asm_Renamed::s71, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__85);
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
	if(!((areg0)->Unify(F(asm_Renamed::s238, F(asm_Renamed::s6, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s238, var6, F(asm_Renamed::s69, { var6->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__86);
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
	if(!((areg0)->Unify(F(asm_Renamed::s234, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), asm_Renamed::posint0, var2->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s234, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__87);
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
	if(!((areg0)->Unify(F(asm_Renamed::s109, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var1->Deref(), var3->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s109, var5, F(asm_Renamed::s69, { var5->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__88);
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
	if(!((areg0)->Unify(F(asm_Renamed::s121, var1, F(asm_Renamed::s6, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var5->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s121, var9, F(asm_Renamed::s71, { var9->Deref(), var1->Deref(), var8->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__89);
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
	if(!((areg0)->Unify(F(asm_Renamed::s119, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s119, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__90);
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
	if(!((areg0)->Unify(F(asm_Renamed::s120, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s120, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__91);
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
	if(!((areg0)->Unify(F(asm_Renamed::s117, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s117, var8, F(asm_Renamed::s71, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__92);
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
	if(!((areg0)->Unify(F(asm_Renamed::s118, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s118, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__93);
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
	if(!((areg0)->Unify(F(asm_Renamed::s123, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s123, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__94);
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
	if(!((areg0)->Unify(F(asm_Renamed::s114, var1, F(asm_Renamed::s6, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var4->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var5->Deref(), var8, F(asm_Renamed::s231, asm_Renamed::s114, var9, F(asm_Renamed::s71, { var9->Deref(), var1->Deref(), var8->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__95);
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
	if(!((areg0)->Unify(F(asm_Renamed::s112, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s112, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__96);
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
	if(!((areg0)->Unify(F(asm_Renamed::s113, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s113, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__97);
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
	if(!((areg0)->Unify(F(asm_Renamed::s110, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s110, var8, F(asm_Renamed::s71, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__98);
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
	if(!((areg0)->Unify(F(asm_Renamed::s111, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s111, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__99);
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
	if(!((areg0)->Unify(F(asm_Renamed::s115, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s115, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__100);
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
	if(!((areg0)->Unify(F(asm_Renamed::s116, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s116, var7, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__101);
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
	if(!((areg0)->Unify(F(asm_Renamed::s146, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s146, var5);
	local_aregs[2] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var6, F(asm_Renamed::s71, { var5->Deref(), var1->Deref(), asm_Renamed::posint0, asm_Renamed::posint0, F(asm_Renamed::s72, { var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__102);
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
	if(!((areg0)->Unify(F(asm_Renamed::s147, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s147, var5);
	local_aregs[2] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var6, F(asm_Renamed::s71, { var5->Deref(), var1->Deref(), asm_Renamed::posint0, asm_Renamed::posint0, F(asm_Renamed::s72, { var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__103);
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
	if(!((areg0)->Unify(F(asm_Renamed::s83, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s83, var4);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var5, F(asm_Renamed::s69, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__104);
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
	if(!((areg0)->Unify(F(asm_Renamed::s104, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s104, var4);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var5, F(asm_Renamed::s69, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__105);
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
	if(!((areg0)->Unify(F(asm_Renamed::s125, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s125, var6);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s362, { var3->Deref(), var9, F(asm_Renamed::s71, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__106);
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
	if(!((areg0)->Unify(F(asm_Renamed::s124, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s124, var5);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var6, F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s70, { var5->Deref(), var6->Deref(), var7->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__107);
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
	if(!((areg0)->Unify(F(asm_Renamed::s35, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s150, { var1->Deref() });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s35, var6);
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s71, { var6->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__108);
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
	if(!((areg0)->Unify(F(asm_Renamed::s34, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s34, var6);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s362, { var3->Deref(), var9, F(asm_Renamed::s71, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__109);
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
	if(!((areg0)->Unify(F(asm_Renamed::s278, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s150, { var1->Deref() });
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s278, var6);
	local_aregs[2] = F(asm_Renamed::s362, { var2->Deref(), var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s71, { var6->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__110);
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
	if(!((areg0)->Unify(F(asm_Renamed::s277, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s277, var6);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var7, F(asm_Renamed::s362, { var2->Deref(), var8, F(asm_Renamed::s362, { var3->Deref(), var9, F(asm_Renamed::s71, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__111);
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
	if(!((areg0)->Unify(F(asm_Renamed::s75, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s75, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__112);
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
	if(!((areg0)->Unify(F(asm_Renamed::s76, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var5->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s76, var7, F(asm_Renamed::s362, { var3->Deref(), var8, F(asm_Renamed::s71, { var7->Deref(), var1->Deref(), var6->Deref(), var8->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__113);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s77, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var6->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s77, var8, F(asm_Renamed::s362, { var3->Deref(), var9, F(asm_Renamed::s362, { var4->Deref(), var10, F(asm_Renamed::s71, { var8->Deref(), var1->Deref(), var7->Deref(), var9->Deref(), F(asm_Renamed::s72, { var10->Deref(), continuation }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__114);
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
	if(!((areg0)->Unify(F(asm_Renamed::s78, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var7->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s78, var9, F(asm_Renamed::s362, { var3->Deref(), var10, F(asm_Renamed::s362, { var4->Deref(), var11, F(asm_Renamed::s362, { var5->Deref(), var12, F(asm_Renamed::s71, { var9->Deref(), var1->Deref(), var8->Deref(), var10->Deref(), F(asm_Renamed::s69, { var11->Deref(), var12->Deref(), continuation }) }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__115);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s79, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var8->Deref(), var9 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s79, var10, F(asm_Renamed::s362, { var3->Deref(), var11, F(asm_Renamed::s362, { var4->Deref(), var12, F(asm_Renamed::s362, { var5->Deref(), var13, F(asm_Renamed::s362, { var6->Deref(), var14, F(asm_Renamed::s71, { var10->Deref(), var1->Deref(), var9->Deref(), var11->Deref(), F(asm_Renamed::s70, { var12->Deref(), var13->Deref(), var14->Deref(), continuation }) }) }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__116);
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
	if(!((areg0)->Unify(F(asm_Renamed::s127, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s127, var4);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var5, F(asm_Renamed::s69, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__117);
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
	if(!((areg0)->Unify(F(asm_Renamed::s129, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s129, var4);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var5, F(asm_Renamed::s69, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__118);
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
	if(!((areg0)->Unify(F(asm_Renamed::s267, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s267, var4);
	local_aregs[2] = F(asm_Renamed::s362, { var1->Deref(), var5, F(asm_Renamed::s69, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__119);
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
	if(!((areg0)->Unify(F(asm_Renamed::s128, F(asm_Renamed::s364, var1), F(asm_Renamed::s364, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s128, var5);
	local_aregs[2] = F(asm_Renamed::s70, { var5->Deref(), var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__120);
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
	if(!((areg0)->Unify(F(asm_Renamed::s268, F(asm_Renamed::s364, var1), F(asm_Renamed::s364, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s268, var5);
	local_aregs[2] = F(asm_Renamed::s70, { var5->Deref(), var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__121);
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
	if(!((areg0)->Unify(F(asm_Renamed::s92, F(asm_Renamed::s6, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
	local_aregs[2] = F(asm_Renamed::s48, { var3->Deref(), var5->Deref(), var7, F(asm_Renamed::s231, asm_Renamed::s92, var8, F(asm_Renamed::s70, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__122);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s283, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var7->Deref(), var9, F(asm_Renamed::s48, { var5->Deref(), var7->Deref(), var10, F(asm_Renamed::s231, asm_Renamed::s283, var11, F(asm_Renamed::s71, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), F(asm_Renamed::s72, { var10->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__123);
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
	if(!((areg0)->Unify(F(asm_Renamed::s168, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s48, { var2->Deref(), var4->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s231, asm_Renamed::s168, var6, F(asm_Renamed::s70, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__124);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(asm_Renamed::s282, var1, F(asm_Renamed::s6, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s46, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
	local_aregs[2] = F(asm_Renamed::s48, { var4->Deref(), var7->Deref(), var9, F(asm_Renamed::s48, { var5->Deref(), var7->Deref(), var10, F(asm_Renamed::s231, asm_Renamed::s282, var11, F(asm_Renamed::s71, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), F(asm_Renamed::s72, { var10->Deref(), continuation }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__125);
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
	local_aregs[2] = var5;
	local_aregs[3] = F(asm_Renamed::s12, F(asm_Renamed::s231, { var4->Deref(), var6 }), F(asm_Renamed::s72, { var6->Deref() }), F(asm_Renamed::s60, { var1->Deref(), asm_Renamed::posint0, var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_asm_pass2_inst_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s84, F(asm_Renamed::s9, asm_Renamed::s101, F(asm_Renamed::s9, { var1->Deref(), F(asm_Renamed::s9, asm_Renamed::s152, Const::Nil) })));
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_op_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_pass2_inst_op_3__1(mach));
}

static* function < Function*pred_asm_pass2_inst_op_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__2);
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
	local_aregs[0] = F(asm_Renamed::s20, { var2->Deref(), var3->Deref() });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_pass2_inst_op_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, var4, F(asm_Renamed::s5, { var2->Deref(), asm_Renamed::posint1 }));
	local_aregs[2] = F(asm_Renamed::s34, { var4->Deref(), var1->Deref(), var5, F(asm_Renamed::s72, { var5->Deref(), F(asm_Renamed::s60, { var1->Deref(), var4->Deref(), var3->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_magic_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_magic_1__1(mach));
}

static* function < Function*pred_asm_magic_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s63, asm_Renamed::posint17, asm_Renamed::posint1);
	local_aregs[2] = F(asm_Renamed::s63, asm_Renamed::posint18, asm_Renamed::posint1, F(asm_Renamed::s63, asm_Renamed::posint19, asm_Renamed::posint1, F(asm_Renamed::s63, { var1->Deref(), asm_Renamed::posint1, continuation })));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_inst_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_index_inst_2__1(mach));
}

static* function < Function*pred_asm_index_inst_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s263, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s19, { var5->Deref(), asm_Renamed::posint16 });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_inst_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s36, asm_Renamed::s148, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_inst_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s36, asm_Renamed::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_index_inst_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s36, asm_Renamed::s272, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_symbol_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_symbol_1__1(mach));
}

static* function < Function*pred_asm_symbol_1::(PrologMachine*) {
	mach::FillAlternative(pred_asm_symbol_1::exec_pred_asm_symbol_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s355, { var1->Deref() });
	local_aregs[1] = asm_Renamed::s298;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_symbol_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s292, var1, var2, var3, var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s72, { var3->Deref() });
	local_aregs[2] = F(asm_Renamed::s63, { var2->Deref(), asm_Renamed::posint1, F(asm_Renamed::s73, { var1->Deref(), var6, F(asm_Renamed::s63, { var6->Deref(), asm_Renamed::posint1, F(asm_Renamed::s360, { var1->Deref(), F(asm_Renamed::s65, { var5->Deref(), continuation }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_putnum_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_putnum_2__1(mach));
}

static* function < Function*pred_asm_putnum_2::(PrologMachine*) {
	mach::FillAlternative(pred_asm_putnum_2::exec_pred_asm_putnum_2__2);
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
	local_aregs[0] = F(asm_Renamed::s23, { var2->Deref(), asm_Renamed::posint1 });
	local_aregs[1] = F(asm_Renamed::s151, var3, F(asm_Renamed::s11, { var1->Deref(), asm_Renamed::posint255 }));
	local_aregs[2] = F(asm_Renamed::s151, var4, F(asm_Renamed::s24, { var1->Deref(), asm_Renamed::posint8 }), F(asm_Renamed::s151, var5, F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s63, { var4->Deref(), var5->Deref(), F(asm_Renamed::s265, { var3->Deref(), continuation }) })));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_putnum_2::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s265, { var1->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_mark_eot_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_mark_eot_0__1(mach));
}

static* function < Function*pred_asm_mark_eot_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s231, asm_Renamed::s100, var1);
	local_aregs[2] = F(asm_Renamed::s69, { var1->Deref(), asm_Renamed::posint0, continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_sym_member1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_member1_2__1(mach));
}

static* function < Function*pred_sym_member1_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = F(asm_Renamed::s18, F(asm_Renamed::s292, var3, var4, var5, var6), var1->Deref());
	local_aregs[1] = F(asm_Renamed::s42, { var3->Deref(), var7 });
	local_aregs[2] = F(asm_Renamed::s151, var8, F(asm_Renamed::s5, F(asm_Renamed::s198, F(asm_Renamed::s5, { var7->Deref(), var4->Deref() }), asm_Renamed::posint255), asm_Renamed::posint1), F(asm_Renamed::s34, { var8->Deref(), var2->Deref(), var9, F(asm_Renamed::s293, { var3->Deref(), var4->Deref(), var1->Deref(), var9->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_sym_member1_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_member1_4__1(mach));
}

static* function < Function*pred_sym_member1_4::(PrologMachine*) {
	mach::FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var4->Deref() });
	local_aregs[1] = F(asm_Renamed::s225, var5);
	local_aregs[2] = F(asm_Renamed::s34, asm_Renamed::posint4, var3->Deref(), var5->Deref(), F(asm_Renamed::s14, { var4->Deref(), F(asm_Renamed::s9, { var3->Deref(), var6 }), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_sym_member1_4::(PrologMachine*) {
	mach::FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__3);
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
	if(!((areg3)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var4, var5 }), var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s19, { var3->Deref(), F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var4->Deref(), var5->Deref() }) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_sym_member1_4::(PrologMachine*) {
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
	if(!((areg3)->Unify(F(asm_Renamed::s9, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s293, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_lab_member1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_lab_member1_2__1(mach));
}

static* function < Function*pred_lab_member1_2::(PrologMachine*) {
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
	local_aregs[0] = F(asm_Renamed::s18, F(asm_Renamed::s191, var3, var4), var1->Deref());
	local_aregs[1] = F(asm_Renamed::s42, { var3->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s151, var6, F(asm_Renamed::s5, F(asm_Renamed::s198, { var5->Deref(), asm_Renamed::posint255 }), asm_Renamed::posint1), F(asm_Renamed::s34, { var6->Deref(), var2->Deref(), var7, F(asm_Renamed::s192, { var3->Deref(), var1->Deref(), var7->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_lab_member1_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_lab_member1_3__1(mach));
}

static* function < Function*pred_lab_member1_3::(PrologMachine*) {
	mach::FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var3->Deref() });
	local_aregs[1] = F(asm_Renamed::s14, { var3->Deref(), F(asm_Renamed::s9, { var2->Deref(), var4 }) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_lab_member1_3::(PrologMachine*) {
	mach::FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__3);
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
	if(!((areg2)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, { var1->Deref(), var3 }), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s19, { var2->Deref(), F(asm_Renamed::s191, { var1->Deref(), var3->Deref() }) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_lab_member1_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(asm_Renamed::s9, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s192, { var1->Deref(), var2->Deref(), var4->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ltab_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_lookup_ltab_3__1(mach));
}

static* function < Function*pred_asm_lookup_ltab_3::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s42, { var1->Deref(), var4 });
	local_aregs[2] = F(asm_Renamed::s151, var5, F(asm_Renamed::s5, F(asm_Renamed::s198, { var4->Deref(), asm_Renamed::posint255 }), asm_Renamed::posint1), F(asm_Renamed::s34, { var5->Deref(), var2->Deref(), var6, F(asm_Renamed::s49, { var1->Deref(), var6->Deref(), var3->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ltab1_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_lookup_ltab1_3__1(mach));
}

static* function < Function*pred_asm_lookup_ltab1_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var2->Deref() });
	local_aregs[1] = asm_Renamed::s106;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ltab1_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__3);
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
	if(!((areg1)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s191, { var1->Deref(), var2 }), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s19, { var4->Deref(), var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ltab1_3::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(asm_Renamed::s9, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s49, { var1->Deref(), var3->Deref(), var4->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ctab_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_lookup_ctab_4__1(mach));
}

static* function < Function*pred_asm_lookup_ctab_4::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s42, { var1->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s151, var6, F(asm_Renamed::s5, F(asm_Renamed::s198, F(asm_Renamed::s5, { var5->Deref(), var2->Deref() }), asm_Renamed::posint255), asm_Renamed::posint1), F(asm_Renamed::s34, { var6->Deref(), var3->Deref(), var7, F(asm_Renamed::s47, { var1->Deref(), var2->Deref(), var7->Deref(), var4->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ctab1_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_lookup_ctab1_4__1(mach));
}

static* function < Function*pred_asm_lookup_ctab1_4::(PrologMachine*) {
	mach::FillAlternative(pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__2);
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
	if(!((areg2)->Unify(F(asm_Renamed::s9, F(asm_Renamed::s292, { var1->Deref(), var2->Deref(), var3, var4 }), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s19, { var6->Deref(), var4->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_lookup_ctab1_4::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(asm_Renamed::s9, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s47, { var1->Deref(), var2->Deref(), var4->Deref(), var5->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_rearange_csym_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_rearange_csym_4__1(mach));
}

static* function < Function*pred_asm_rearange_csym_4::(PrologMachine*) {
	mach::FillAlternative(pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__2);
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
	local_aregs[0] = F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
	local_aregs[1] = F(asm_Renamed::s19, { var4->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_rearange_csym_4::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s34, { var2->Deref(), var1->Deref(), var5 });
	local_aregs[2] = F(asm_Renamed::s52, { var5->Deref(), var3->Deref(), var6, F(asm_Renamed::s151, var7, F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s64, { var1->Deref(), var7->Deref(), var6->Deref(), var4->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_merge_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_asm_merge_3__1(mach));
}

static* function < Function*pred_asm_merge_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__2);
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
	local_aregs[0] = F(asm_Renamed::s355, { var1->Deref() });
	local_aregs[1] = F(asm_Renamed::s19, { var3->Deref(), var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_merge_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__3);
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
	local_aregs[0] = F(asm_Renamed::s355, { var2->Deref() });
	local_aregs[1] = F(asm_Renamed::s19, { var3->Deref(), var1->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_asm_merge_3::(PrologMachine*) {
	mach::FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(asm_Renamed::s9, var4, var5);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(asm_Renamed::s18, F(asm_Renamed::s9, var6, var7), var2->Deref(), F(asm_Renamed::s18, F(asm_Renamed::s292, var8, var9, var10, var11), var4->Deref(), F(asm_Renamed::s18, F(asm_Renamed::s292, var12, var13, var14, var15), var6->Deref(), F(asm_Renamed::s12, F(asm_Renamed::s16, { var11->Deref(), var15->Deref() }), F(asm_Renamed::s14, { var3->Deref(), F(asm_Renamed::s9, { var4->Deref(), var16 }) }), F(asm_Renamed::s52, { var5->Deref(), var2->Deref(), var16->Deref(), continuation })))));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c60_system_equals_2::exec_static);
}

static* function < Function*pred_asm_merge_3::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = F(asm_Renamed::s9, var4, var5);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(asm_Renamed::s12, F(asm_Renamed::s18, F(asm_Renamed::s9, var6, var7), var2->Deref()), F(asm_Renamed::s14, { var3->Deref(), F(asm_Renamed::s9, { var6->Deref(), var8 }) }), F(asm_Renamed::s52, { var1->Deref(), var7->Deref(), var8->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c60_system_equals_2::exec_static);
}

static* function < Function*pred_next_sym_no_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_next_sym_no_1__1(mach));
}

static* function < Function*pred_next_sym_no_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s132, asm_Renamed::s4, asm_Renamed::posint0, var1->Deref());
	local_aregs[2] = F(asm_Renamed::s151, var2, F(asm_Renamed::s5, { var1->Deref(), asm_Renamed::posint1 }), F(asm_Renamed::s133, asm_Renamed::s4, asm_Renamed::posint0, var2->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_x_or_y_2__1(mach));
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
	mach::FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s356, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, { var2->Deref(), F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
	mach::FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s361, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, { var2->Deref(), F(asm_Renamed::s5, F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint1) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
	mach::FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s357, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, { var2->Deref(), F(asm_Renamed::s26, F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint3) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
	mach::FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(asm_Renamed::s364, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, { var2->Deref(), F(asm_Renamed::s26, F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint7) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_x_or_y_2::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s151, { var2->Deref(), F(asm_Renamed::s26, F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint2 }), asm_Renamed::posint2) });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_opcode_2__1(mach));
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s228))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s155))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s95))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s173))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s174))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s169))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s170))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s185))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s186))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s286))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s287))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s288))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint11))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s289))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint12))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s290))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s291))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint14))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s171))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint15))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s172))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint16))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s175))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint17))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s156))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint18))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s157))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint19))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s180))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint20))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s181))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint21))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s178))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint22))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s179))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint23))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s182))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s158))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s189))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__29);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s190))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint27))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s160))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint28))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s161))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s162))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint30))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__33);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s163))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint31))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__34);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s164))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint32))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__35);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s165))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint33))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__36);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s187))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint34))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__37);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s188))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint35))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__38);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s176))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint36))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__39);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s177))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint37))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__40);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s183))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint38))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__41);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s184))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint39))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__42);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s138))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__43);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s137))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint41))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__44);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s136))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__45);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s135))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint43))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__46);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s139))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint44))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__47);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s140))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint45))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__48);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s143))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint46))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__49);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s141))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint47))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__50);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s142))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint48))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__51);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s144))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint49))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__52);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s145))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint50))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__53);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s349))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint51))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__54);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s350))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint52))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__55);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s345))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint53))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__56);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s346))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint54))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__57);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s347))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint55))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__58);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s348))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint56))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__59);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s339))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint57))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__60);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s343))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint58))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__61);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s340))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint59))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__62);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s344))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint60))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__63);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s351))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint61))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__64);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s352))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint62))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__65);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s353))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint63))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__66);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s341))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint64))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__67);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s342))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint65))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__68);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s121))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint66))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__69);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s119))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint67))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__70);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s120))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint68))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__71);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s117))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint69))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__72);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s118))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint70))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__73);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s123))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint71))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__74);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s114))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint72))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__75);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s112))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint73))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__76);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s113))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint74))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__77);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s110))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint75))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__78);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s111))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint76))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__79);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s116))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint77))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__80);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s311))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint78))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__81);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s309))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint79))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__82);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s310))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint80))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__83);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s307))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint81))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__84);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s308))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint82))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__85);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s313))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint83))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__86);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s304))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint84))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__87);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s302))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint85))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__88);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s303))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint86))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__89);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s300))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint87))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__90);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s301))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint88))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__91);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s305))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint89))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__92);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s299))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint90))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__93);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s318))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint91))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__94);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s314))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint92))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__95);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s316))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint93))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__96);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s321))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint94))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__97);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s320))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint95))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__98);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s322))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint96))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__99);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s323))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint97))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__100);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s325))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint98))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__101);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s324))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint99))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__102);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s338))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint100))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__103);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s331))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint101))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__104);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s328))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint102))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__105);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s337))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint103))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__106);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s333))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint104))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__107);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s317))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint105))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__108);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s319))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint106))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__109);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s327))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint107))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__110);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s326))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint108))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__111);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s332))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint109))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__112);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s329))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint110))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__113);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s330))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint111))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__114);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s336))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint112))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__115);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s334))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint113))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__116);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s335))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint114))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__117);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s315))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint115))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__118);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s209))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint116))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__119);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s210))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint117))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__120);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s205))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint118))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__121);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s206))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint119))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__122);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s207))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint120))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__123);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s208))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__124);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s201))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint122))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__125);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s203))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint123))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__126);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s202))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint124))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__127);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s204))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint125))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__128);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s213))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint126))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__129);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s214))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint127))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__130);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s216))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint128))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__131);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s222))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint129))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__132);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s221))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint130))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__133);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s217))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint131))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__134);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s211))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint132))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__135);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s212))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint133))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__136);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s215))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint134))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__137);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s220))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint135))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__138);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s218))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint136))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__139);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s219))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint137))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__140);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s33))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint138))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__141);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s232))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint139))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__142);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s195))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint140))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__143);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s196))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint141))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__144);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s86))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint142))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__145);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint143))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__146);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s28))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint144))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__147);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s280))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint145))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__148);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s281))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint146))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__149);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s223))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint147))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__150);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s94))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint148))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__151);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s149))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint149))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__152);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s198))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint150))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__153);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s238))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint151))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__154);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s236))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint152))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__155);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s237))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint153))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__156);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s234))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint154))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__157);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s235))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint155))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__158);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s241))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint156))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__159);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s240))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint157))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__160);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s239))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint158))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__161);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s254))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint159))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__162);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s253))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint160))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__163);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s251))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint161))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__164);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s247))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint162))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__165);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s258))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint163))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__166);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s262))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint164))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__167);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s259))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint165))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__168);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s257))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint166))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__169);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s256))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint167))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__170);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s260))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint168))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__171);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s261))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint169))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__172);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s246))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint170))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__173);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s242))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint171))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__174);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s243))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint172))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__175);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s245))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint173))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__176);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s255))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint174))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__177);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s244))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint175))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__178);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s248))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint176))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__179);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s249))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint177))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__180);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s250))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint178))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__181);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s252))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint179))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__182);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s81))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint180))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__183);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s82))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint181))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__184);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s83))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint182))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__185);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s103))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint183))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__186);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s104))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint184))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__187);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s270))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint185))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__188);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s271))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint186))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__189);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s166))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint187))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__190);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s274))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint188))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__191);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint189))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__192);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s31))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint190))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__193);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s30))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint191))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__194);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s106))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint192))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__195);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s107))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint193))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__196);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s109))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint194))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__197);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s85))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint195))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__198);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint196))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__199);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s89))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint197))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__200);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s90))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint198))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__201);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s273))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint199))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__202);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s127))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint200))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__203);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s267))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint201))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__204);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s129))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint202))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__205);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s146))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint203))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__206);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s147))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint204))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__207);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s34))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint205))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__208);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s35))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint206))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__209);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s277))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint207))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__210);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s278))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint208))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__211);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint209))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__212);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s124))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint210))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__213);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s126))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint211))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__214);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s266))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint212))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__215);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint213))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__216);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s167))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint214))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__217);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s75))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint215))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__218);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s76))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint216))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__219);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s77))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint217))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__220);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s78))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint218))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__221);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s79))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint219))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__222);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s32))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint220))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__223);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s284))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint221))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__224);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s285))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint222))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__225);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s92))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint223))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__226);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s283))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint224))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__227);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s98))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint225))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__228);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s227))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint226))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__229);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s159))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint227))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__230);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s168))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint228))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__231);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s282))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint229))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__232);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s97))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint230))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__233);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s96))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint231))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__234);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s134))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint232))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::FillAlternative(pred_opcode_2::exec_pred_opcode_2__235);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint233))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_opcode_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(asm_Renamed::s294))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(asm_Renamed::posint234))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_output_mess_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_output_mess_1__1(mach));
}

static* function < Function*pred_output_mess_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s296, var2);
	local_aregs[2] = F(asm_Renamed::s295, asm_Renamed::s354, F(asm_Renamed::s359, { var1->Deref(), F(asm_Renamed::s226, F(asm_Renamed::s295, { var2->Deref(), continuation })) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_is_unify_arg_inst_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_unify_arg_inst_1__1(mach));
}

static* function < Function*pred_is_unify_arg_inst_1::(PrologMachine*) {
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
	local_aregs[0] = asm_Renamed::s298;
	local_aregs[1] = F(asm_Renamed::s125, { var1->Deref(), var2, var3 });
	local_aregs[2] = F(asm_Renamed::s231, { var2->Deref(), var4, F(asm_Renamed::s279, asm_Renamed::posint91, var4->Deref(), F(asm_Renamed::s279, { var4->Deref(), asm_Renamed::posint115, continuation })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}
