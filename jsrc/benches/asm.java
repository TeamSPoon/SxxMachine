import java.util.function.Function;

class asm /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern(" is called but not defined");
	static Const s2 = Const.Intern(" is doubly defined");
	static Const s3 = Const.Intern("$asm_bp");
	static Const s4 = Const.Intern("$sym_no");
	static Const s5 = Const.Intern("+");
	static Const s6 = Const.Intern(",");
	static Const s7 = Const.Intern("-");
	static Const s8 = Const.Intern("->");
	static Const s9 = Const.Intern(".");
	static Const s10 = Const.Intern("/");
	static Const s11 = Const.Intern("/\\");
	static Const s12 = Const.Intern(":");
	static Const s13 = Const.Intern(":-");
	static Const s14 = Const.Intern(":=");
	static Const s15 = Const.Intern(";");
	static Const s16 = Const.Intern("<");
	static Const s17 = Const.Intern("<<");
	static Const s18 = Const.Intern("<=");
	static Const s19 = Const.Intern("=");
	static Const s20 = Const.Intern("=:=");
	static Const s21 = Const.Intern("==");
	static Const s22 = Const.Intern("=\\=");
	static Const s23 = Const.Intern(">");
	static Const s24 = Const.Intern(">>");
	static Const s25 = Const.Intern("The predicate ");
	static Const s26 = Const.Intern("\\/");
	static Const s27 = Const.Intern("add");
	static Const s28 = Const.Intern("add1_y");
	static Const s29 = Const.Intern("allocate_flat");
	static Const s30 = Const.Intern("allocate_nondet");
	static Const s31 = Const.Intern("allocate_nonflat");
	static Const s32 = Const.Intern("allocate_susp");
	static Const s33 = Const.Intern("and");
	static Const s34 = Const.Intern("arg");
	static Const s35 = Const.Intern("arg0");
	static Const s36 = Const.Intern("arglabel");
	static Const s37 = Const.Intern("asm");
	static Const s38 = Const.Intern("asm0");
	static Const s39 = Const.Intern("asm_bp");
	static Const s40 = Const.Intern("asm_getaslist");
	static Const s41 = Const.Intern("asm_getaslist1");
	static Const s42 = Const.Intern("asm_hash_value");
	static Const s43 = Const.Intern("asm_index");
	static Const s44 = Const.Intern("asm_index_inst");
	static Const s45 = Const.Intern("asm_index_pass1");
	static Const s46 = Const.Intern("asm_lookup_ctab");
	static Const s47 = Const.Intern("asm_lookup_ctab1");
	static Const s48 = Const.Intern("asm_lookup_ltab");
	static Const s49 = Const.Intern("asm_lookup_ltab1");
	static Const s50 = Const.Intern("asm_magic");
	static Const s51 = Const.Intern("asm_mark_eot");
	static Const s52 = Const.Intern("asm_merge");
	static Const s53 = Const.Intern("asm_pass1");
	static Const s54 = Const.Intern("asm_pass11");
	static Const s55 = Const.Intern("asm_pass12");
	static Const s56 = Const.Intern("asm_pass12_call");
	static Const s57 = Const.Intern("asm_pass1_bp");
	static Const s58 = Const.Intern("asm_pass2");
	static Const s59 = Const.Intern("asm_pass2_inst");
	static Const s60 = Const.Intern("asm_pass2_inst_op");
	static Const s61 = Const.Intern("asm_pass2a");
	static Const s62 = Const.Intern("asm_proc_index");
	static Const s63 = Const.Intern("asm_putnum");
	static Const s64 = Const.Intern("asm_rearange_csym");
	static Const s65 = Const.Intern("asm_symbol");
	static Const s66 = Const.Intern("asmpass1_fillin");
	static Const s67 = Const.Intern("asmpass1_fillin_bp");
	static Const s68 = Const.Intern("asmpass1_setundef");
	static Const s69 = Const.Intern("b_ASPN2_cc");
	static Const s70 = Const.Intern("b_ASPN3_ccc");
	static Const s71 = Const.Intern("b_ASPN4_cccc");
	static Const s72 = Const.Intern("b_ASPN_c");
	static Const s73 = Const.Intern("b_GET_LENGTH_cf");
	static Const s74 = Const.Intern("b_GET_SYM_TYPE_ccf");
	static Const s75 = Const.Intern("builtin0");
	static Const s76 = Const.Intern("builtin1");
	static Const s77 = Const.Intern("builtin2");
	static Const s78 = Const.Intern("builtin3");
	static Const s79 = Const.Intern("builtin4");
	static Const s80 = Const.Intern("c");
	static Const s81 = Const.Intern("call");
	static Const s82 = Const.Intern("call_d");
	static Const s83 = Const.Intern("callv");
	static Const s84 = Const.Intern("cmp_error");
	static Const s85 = Const.Intern("commit");
	static Const s86 = Const.Intern("complement");
	static Const s87 = Const.Intern("csym");
	static Const s88 = Const.Intern("cut");
	static Const s89 = Const.Intern("cut_fail");
	static Const s90 = Const.Intern("cut_return");
	static Const s91 = Const.Intern("d");
	static Const s92 = Const.Intern("delay");
	static Const s93 = Const.Intern("determinate");
	static Const s94 = Const.Intern("div");
	static Const s95 = Const.Intern("djmp");
	static Const s96 = Const.Intern("domain_set_false_yx");
	static Const s97 = Const.Intern("domain_set_false_yy");
	static Const s98 = Const.Intern("end_delay");
	static Const s99 = Const.Intern("end_of_file");
	static Const s100 = Const.Intern("endfile");
	static Const s101 = Const.Intern("error in asm pass2 :");
	static Const s102 = Const.Intern("error_double_define");
	static Const s103 = Const.Intern("execute");
	static Const s104 = Const.Intern("executev");
	static Const s105 = Const.Intern("f");
	static Const s106 = Const.Intern("fail");
	static Const s107 = Const.Intern("fail0");
	static Const s108 = Const.Intern("flat_to_nondet");
	static Const s109 = Const.Intern("fork");
	static Const s110 = Const.Intern("fork_unicut_atom_y");
	static Const s111 = Const.Intern("fork_unicut_int_y");
	static Const s112 = Const.Intern("fork_unicut_list_y");
	static Const s113 = Const.Intern("fork_unicut_nil_y");
	static Const s114 = Const.Intern("fork_unicut_struct_y");
	static Const s115 = Const.Intern("fork_unicut_ux_uy");
	static Const s116 = Const.Intern("fork_unicut_uy_uy");
	static Const s117 = Const.Intern("fork_unify_atom_y");
	static Const s118 = Const.Intern("fork_unify_int_y");
	static Const s119 = Const.Intern("fork_unify_list_y");
	static Const s120 = Const.Intern("fork_unify_nil_y");
	static Const s121 = Const.Intern("fork_unify_struct_y");
	static Const s122 = Const.Intern("fork_unify_ux_uy");
	static Const s123 = Const.Intern("fork_unify_uy_uy");
	static Const s124 = Const.Intern("func_arity");
	static Const s125 = Const.Intern("functor");
	static Const s126 = Const.Intern("get_ar_cps");
	static Const s127 = Const.Intern("getbreg");
	static Const s128 = Const.Intern("gethtreg");
	static Const s129 = Const.Intern("getpbreg");
	static Const s130 = Const.Intern("global_create");
	static Const s131 = Const.Intern("global_del");
	static Const s132 = Const.Intern("global_get");
	static Const s133 = Const.Intern("global_set");
	static Const s134 = Const.Intern("halt");
	static Const s135 = Const.Intern("hash_jmpn_atom");
	static Const s136 = Const.Intern("hash_jmpn_int");
	static Const s137 = Const.Intern("hash_jmpn_list");
	static Const s138 = Const.Intern("hash_jmpn_nil");
	static Const s139 = Const.Intern("hash_jmpn_struct");
	static Const s140 = Const.Intern("hash_jmpn_struct_x");
	static Const s141 = Const.Intern("hash_jmpn_struct_xx");
	static Const s142 = Const.Intern("hash_jmpn_struct_xy");
	static Const s143 = Const.Intern("hash_jmpn_struct_y");
	static Const s144 = Const.Intern("hash_jmpn_struct_yx");
	static Const s145 = Const.Intern("hash_jmpn_struct_yy");
	static Const s146 = Const.Intern("hash_x");
	static Const s147 = Const.Intern("hash_y");
	static Const s148 = Const.Intern("i");
	static Const s149 = Const.Intern("idiv");
	static Const s150 = Const.Intern("integer");
	static Const s151 = Const.Intern("is");
	static Const s152 = Const.Intern("is not defined");
	static Const s153 = Const.Intern("is_unify_arg_inst");
	static Const s154 = Const.Intern("isglobal");
	static Const s155 = Const.Intern("jmp");
	static Const s156 = Const.Intern("jmp_eql");
	static Const s157 = Const.Intern("jmp_eql_yy");
	static Const s158 = Const.Intern("jmp_id");
	static Const s159 = Const.Intern("jmp_susp");
	static Const s160 = Const.Intern("jmp_var_x");
	static Const s161 = Const.Intern("jmp_var_y");
	static Const s162 = Const.Intern("jmpn_atom_x");
	static Const s163 = Const.Intern("jmpn_atom_y");
	static Const s164 = Const.Intern("jmpn_atomic_x");
	static Const s165 = Const.Intern("jmpn_atomic_y");
	static Const s166 = Const.Intern("jmpn_det");
	static Const s167 = Const.Intern("jmpn_det_get_ar_cps");
	static Const s168 = Const.Intern("jmpn_dvar_y");
	static Const s169 = Const.Intern("jmpn_eq_atom_x");
	static Const s170 = Const.Intern("jmpn_eq_atom_y");
	static Const s171 = Const.Intern("jmpn_eq_int_x");
	static Const s172 = Const.Intern("jmpn_eq_int_y");
	static Const s173 = Const.Intern("jmpn_eq_struct_x");
	static Const s174 = Const.Intern("jmpn_eq_struct_y");
	static Const s175 = Const.Intern("jmpn_eql");
	static Const s176 = Const.Intern("jmpn_float_x");
	static Const s177 = Const.Intern("jmpn_float_y");
	static Const s178 = Const.Intern("jmpn_ge");
	static Const s179 = Const.Intern("jmpn_ge_yy");
	static Const s180 = Const.Intern("jmpn_gt");
	static Const s181 = Const.Intern("jmpn_gt_yy");
	static Const s182 = Const.Intern("jmpn_id");
	static Const s183 = Const.Intern("jmpn_int_x");
	static Const s184 = Const.Intern("jmpn_int_y");
	static Const s185 = Const.Intern("jmpn_nil_x");
	static Const s186 = Const.Intern("jmpn_nil_y");
	static Const s187 = Const.Intern("jmpn_num_x");
	static Const s188 = Const.Intern("jmpn_num_y");
	static Const s189 = Const.Intern("jmpn_var_x");
	static Const s190 = Const.Intern("jmpn_var_y");
	static Const s191 = Const.Intern("lab");
	static Const s192 = Const.Intern("lab_member1");
	static Const s193 = Const.Intern("label");
	static Const s194 = Const.Intern("length");
	static Const s195 = Const.Intern("lshiftl");
	static Const s196 = Const.Intern("lshiftr");
	static Const s197 = Const.Intern("lsym");
	static Const s198 = Const.Intern("mod");
	static Const s199 = Const.Intern("mode");
	static Const s200 = Const.Intern("move_ar_cps");
	static Const s201 = Const.Intern("move_atom_x");
	static Const s202 = Const.Intern("move_atom_y");
	static Const s203 = Const.Intern("move_int_x");
	static Const s204 = Const.Intern("move_int_y");
	static Const s205 = Const.Intern("move_list_x");
	static Const s206 = Const.Intern("move_list_y");
	static Const s207 = Const.Intern("move_nil_x");
	static Const s208 = Const.Intern("move_nil_y");
	static Const s209 = Const.Intern("move_struct_x");
	static Const s210 = Const.Intern("move_struct_y");
	static Const s211 = Const.Intern("move_vx");
	static Const s212 = Const.Intern("move_vy");
	static Const s213 = Const.Intern("move_x_ux");
	static Const s214 = Const.Intern("move_x_uy");
	static Const s215 = Const.Intern("move_x_wy");
	static Const s216 = Const.Intern("move_y_ux");
	static Const s217 = Const.Intern("move_y_uy");
	static Const s218 = Const.Intern("move_y_wy");
	static Const s219 = Const.Intern("move_yw_yy");
	static Const s220 = Const.Intern("move_yy_yw");
	static Const s221 = Const.Intern("move_yy_yy");
	static Const s222 = Const.Intern("move_yy_yy_yy");
	static Const s223 = Const.Intern("mul");
	static Const s224 = Const.Intern("name");
	static Const s225 = Const.Intern("next_sym_no");
	static Const s226 = Const.Intern("nl");
	static Const s227 = Const.Intern("nondet");
	static Const s228 = Const.Intern("noop");
	static Const s229 = Const.Intern("on_load_asm");
	static Const s230 = Const.Intern("op");
	static Const s231 = Const.Intern("opcode");
	static Const s232 = Const.Intern("or");
	static Const s233 = Const.Intern("output_mess");
	static Const s234 = Const.Intern("para_atom");
	static Const s235 = Const.Intern("para_int");
	static Const s236 = Const.Intern("para_list");
	static Const s237 = Const.Intern("para_nil");
	static Const s238 = Const.Intern("para_struct");
	static Const s239 = Const.Intern("para_ux");
	static Const s240 = Const.Intern("para_ux_ux");
	static Const s241 = Const.Intern("para_ux_ux_ux");
	static Const s242 = Const.Intern("para_ux_ux_uy");
	static Const s243 = Const.Intern("para_ux_uy");
	static Const s244 = Const.Intern("para_ux_uy_ux");
	static Const s245 = Const.Intern("para_ux_uy_uy");
	static Const s246 = Const.Intern("para_ux_vy");
	static Const s247 = Const.Intern("para_uy");
	static Const s248 = Const.Intern("para_uy_ux");
	static Const s249 = Const.Intern("para_uy_ux_ux");
	static Const s250 = Const.Intern("para_uy_ux_uy");
	static Const s251 = Const.Intern("para_uy_uy");
	static Const s252 = Const.Intern("para_uy_uy_ux");
	static Const s253 = Const.Intern("para_uy_uy_uy");
	static Const s254 = Const.Intern("para_uy_uy_uy_uy");
	static Const s255 = Const.Intern("para_uy_vy");
	static Const s256 = Const.Intern("para_void");
	static Const s257 = Const.Intern("para_void_one");
	static Const s258 = Const.Intern("para_vx");
	static Const s259 = Const.Intern("para_vy");
	static Const s260 = Const.Intern("para_vy_ux");
	static Const s261 = Const.Intern("para_vy_uy");
	static Const s262 = Const.Intern("para_vy_vy");
	static Const s263 = Const.Intern("pred");
	static Const s264 = Const.Intern("predefined");
	static Const s265 = Const.Intern("put");
	static Const s266 = Const.Intern("put_ar_cps");
	static Const s267 = Const.Intern("putbreg");
	static Const s268 = Const.Intern("puthtreg");
	static Const s269 = Const.Intern("read");
	static Const s270 = Const.Intern("return_a");
	static Const s271 = Const.Intern("return_b");
	static Const s272 = Const.Intern("s");
	static Const s273 = Const.Intern("save_b");
	static Const s274 = Const.Intern("save_ht_jmp");
	static Const s275 = Const.Intern("see");
	static Const s276 = Const.Intern("seen");
	static Const s277 = Const.Intern("setarg");
	static Const s278 = Const.Intern("setarg0");
	static Const s279 = Const.Intern("smallerorequal");
	static Const s280 = Const.Intern("sub");
	static Const s281 = Const.Intern("sub1_y");
	static Const s282 = Const.Intern("susp_var2_delay");
	static Const s283 = Const.Intern("susp_var_delay");
	static Const s284 = Const.Intern("susp_var_x");
	static Const s285 = Const.Intern("susp_var_y");
	static Const s286 = Const.Intern("switch_list_x");
	static Const s287 = Const.Intern("switch_list_y");
	static Const s288 = Const.Intern("switch_list_yxx");
	static Const s289 = Const.Intern("switch_list_yxy");
	static Const s290 = Const.Intern("switch_list_yyx");
	static Const s291 = Const.Intern("switch_list_yyy");
	static Const s292 = Const.Intern("sym");
	static Const s293 = Const.Intern("sym_member1");
	static Const s294 = Const.Intern("tabsize");
	static Const s295 = Const.Intern("tell");
	static Const s296 = Const.Intern("telling");
	static Const s297 = Const.Intern("told");
	static Const s298 = Const.Intern("true");
	static Const s299 = Const.Intern("unicut");
	static Const s300 = Const.Intern("unicut_atom_y");
	static Const s301 = Const.Intern("unicut_int_y");
	static Const s302 = Const.Intern("unicut_list_y");
	static Const s303 = Const.Intern("unicut_nil_y");
	static Const s304 = Const.Intern("unicut_struct_y");
	static Const s305 = Const.Intern("unicut_uy_uy");
	static Const s306 = Const.Intern("unify");
	static Const s307 = Const.Intern("unify0_atom_y");
	static Const s308 = Const.Intern("unify0_int_y");
	static Const s309 = Const.Intern("unify0_list_y");
	static Const s310 = Const.Intern("unify0_nil_y");
	static Const s311 = Const.Intern("unify0_struct_y");
	static Const s312 = Const.Intern("unify0_ux_uy");
	static Const s313 = Const.Intern("unify0_uy_uy");
	static Const s314 = Const.Intern("unify_arg_atom");
	static Const s315 = Const.Intern("unify_arg_iii");
	static Const s316 = Const.Intern("unify_arg_int");
	static Const s317 = Const.Intern("unify_arg_list");
	static Const s318 = Const.Intern("unify_arg_nil");
	static Const s319 = Const.Intern("unify_arg_struct");
	static Const s320 = Const.Intern("unify_arg_ux");
	static Const s321 = Const.Intern("unify_arg_ux_ux");
	static Const s322 = Const.Intern("unify_arg_ux_vx");
	static Const s323 = Const.Intern("unify_arg_ux_vy");
	static Const s324 = Const.Intern("unify_arg_uy");
	static Const s325 = Const.Intern("unify_arg_uy_uy");
	static Const s326 = Const.Intern("unify_arg_void");
	static Const s327 = Const.Intern("unify_arg_void_one");
	static Const s328 = Const.Intern("unify_arg_vx");
	static Const s329 = Const.Intern("unify_arg_vx_ux");
	static Const s330 = Const.Intern("unify_arg_vx_uy");
	static Const s331 = Const.Intern("unify_arg_vx_vx");
	static Const s332 = Const.Intern("unify_arg_vx_vy");
	static Const s333 = Const.Intern("unify_arg_vy");
	static Const s334 = Const.Intern("unify_arg_vy_ux");
	static Const s335 = Const.Intern("unify_arg_vy_uy");
	static Const s336 = Const.Intern("unify_arg_vy_vx");
	static Const s337 = Const.Intern("unify_arg_vy_vy");
	static Const s338 = Const.Intern("unify_arg_wy");
	static Const s339 = Const.Intern("unify_atom_x");
	static Const s340 = Const.Intern("unify_atom_y");
	static Const s341 = Const.Intern("unify_cons_x");
	static Const s342 = Const.Intern("unify_cons_y");
	static Const s343 = Const.Intern("unify_int_x");
	static Const s344 = Const.Intern("unify_int_y");
	static Const s345 = Const.Intern("unify_list_x");
	static Const s346 = Const.Intern("unify_list_y");
	static Const s347 = Const.Intern("unify_nil_x");
	static Const s348 = Const.Intern("unify_nil_y");
	static Const s349 = Const.Intern("unify_struct_x");
	static Const s350 = Const.Intern("unify_struct_y");
	static Const s351 = Const.Intern("unify_ux_ux");
	static Const s352 = Const.Intern("unify_ux_uy");
	static Const s353 = Const.Intern("unify_uy_uy");
	static Const s354 = Const.Intern("user");
	static Const s355 = Const.Intern("var");
	static Const s356 = Const.Intern("vx");
	static Const s357 = Const.Intern("vy");
	static Const s358 = Const.Intern("warning");
	static Const s359 = Const.Intern("write");
	static Const s360 = Const.Intern("writename");
	static Const s361 = Const.Intern("x");
	static Const s362 = Const.Intern("x_or_y");
	static Const s363 = Const.Intern("xfx");
	static Const s364 = Const.Intern("y");
	static Int negint2 = Term.Number(-2);
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
	static Int posint4 = Term.Number(4);
	static Int posint5 = Term.Number(5);
	static Int posint6 = Term.Number(6);
	static Int posint7 = Term.Number(7);
	static Int posint8 = Term.Number(8);
	static Int posint9 = Term.Number(9);
	static Int posint10 = Term.Number(10);
	static Int posint11 = Term.Number(11);
	static Int posint12 = Term.Number(12);
	static Int posint13 = Term.Number(13);
	static Int posint14 = Term.Number(14);
	static Int posint15 = Term.Number(15);
	static Int posint16 = Term.Number(16);
	static Int posint17 = Term.Number(17);
	static Int posint18 = Term.Number(18);
	static Int posint19 = Term.Number(19);
	static Int posint20 = Term.Number(20);
	static Int posint21 = Term.Number(21);
	static Int posint22 = Term.Number(22);
	static Int posint23 = Term.Number(23);
	static Int posint24 = Term.Number(24);
	static Int posint25 = Term.Number(25);
	static Int posint26 = Term.Number(26);
	static Int posint27 = Term.Number(27);
	static Int posint28 = Term.Number(28);
	static Int posint29 = Term.Number(29);
	static Int posint30 = Term.Number(30);
	static Int posint31 = Term.Number(31);
	static Int posint32 = Term.Number(32);
	static Int posint33 = Term.Number(33);
	static Int posint34 = Term.Number(34);
	static Int posint35 = Term.Number(35);
	static Int posint36 = Term.Number(36);
	static Int posint37 = Term.Number(37);
	static Int posint38 = Term.Number(38);
	static Int posint39 = Term.Number(39);
	static Int posint40 = Term.Number(40);
	static Int posint41 = Term.Number(41);
	static Int posint42 = Term.Number(42);
	static Int posint43 = Term.Number(43);
	static Int posint44 = Term.Number(44);
	static Int posint45 = Term.Number(45);
	static Int posint46 = Term.Number(46);
	static Int posint47 = Term.Number(47);
	static Int posint48 = Term.Number(48);
	static Int posint49 = Term.Number(49);
	static Int posint50 = Term.Number(50);
	static Int posint51 = Term.Number(51);
	static Int posint52 = Term.Number(52);
	static Int posint53 = Term.Number(53);
	static Int posint54 = Term.Number(54);
	static Int posint55 = Term.Number(55);
	static Int posint56 = Term.Number(56);
	static Int posint57 = Term.Number(57);
	static Int posint58 = Term.Number(58);
	static Int posint59 = Term.Number(59);
	static Int posint60 = Term.Number(60);
	static Int posint61 = Term.Number(61);
	static Int posint62 = Term.Number(62);
	static Int posint63 = Term.Number(63);
	static Int posint64 = Term.Number(64);
	static Int posint65 = Term.Number(65);
	static Int posint66 = Term.Number(66);
	static Int posint67 = Term.Number(67);
	static Int posint68 = Term.Number(68);
	static Int posint69 = Term.Number(69);
	static Int posint70 = Term.Number(70);
	static Int posint71 = Term.Number(71);
	static Int posint72 = Term.Number(72);
	static Int posint73 = Term.Number(73);
	static Int posint74 = Term.Number(74);
	static Int posint75 = Term.Number(75);
	static Int posint76 = Term.Number(76);
	static Int posint77 = Term.Number(77);
	static Int posint78 = Term.Number(78);
	static Int posint79 = Term.Number(79);
	static Int posint80 = Term.Number(80);
	static Int posint81 = Term.Number(81);
	static Int posint82 = Term.Number(82);
	static Int posint83 = Term.Number(83);
	static Int posint84 = Term.Number(84);
	static Int posint85 = Term.Number(85);
	static Int posint86 = Term.Number(86);
	static Int posint87 = Term.Number(87);
	static Int posint88 = Term.Number(88);
	static Int posint89 = Term.Number(89);
	static Int posint90 = Term.Number(90);
	static Int posint91 = Term.Number(91);
	static Int posint92 = Term.Number(92);
	static Int posint93 = Term.Number(93);
	static Int posint94 = Term.Number(94);
	static Int posint95 = Term.Number(95);
	static Int posint96 = Term.Number(96);
	static Int posint97 = Term.Number(97);
	static Int posint98 = Term.Number(98);
	static Int posint99 = Term.Number(99);
	static Int posint100 = Term.Number(100);
	static Int posint101 = Term.Number(101);
	static Int posint102 = Term.Number(102);
	static Int posint103 = Term.Number(103);
	static Int posint104 = Term.Number(104);
	static Int posint105 = Term.Number(105);
	static Int posint106 = Term.Number(106);
	static Int posint107 = Term.Number(107);
	static Int posint108 = Term.Number(108);
	static Int posint109 = Term.Number(109);
	static Int posint110 = Term.Number(110);
	static Int posint111 = Term.Number(111);
	static Int posint112 = Term.Number(112);
	static Int posint113 = Term.Number(113);
	static Int posint114 = Term.Number(114);
	static Int posint115 = Term.Number(115);
	static Int posint116 = Term.Number(116);
	static Int posint117 = Term.Number(117);
	static Int posint118 = Term.Number(118);
	static Int posint119 = Term.Number(119);
	static Int posint120 = Term.Number(120);
	static Int posint121 = Term.Number(121);
	static Int posint122 = Term.Number(122);
	static Int posint123 = Term.Number(123);
	static Int posint124 = Term.Number(124);
	static Int posint125 = Term.Number(125);
	static Int posint126 = Term.Number(126);
	static Int posint127 = Term.Number(127);
	static Int posint128 = Term.Number(128);
	static Int posint129 = Term.Number(129);
	static Int posint130 = Term.Number(130);
	static Int posint131 = Term.Number(131);
	static Int posint132 = Term.Number(132);
	static Int posint133 = Term.Number(133);
	static Int posint134 = Term.Number(134);
	static Int posint135 = Term.Number(135);
	static Int posint136 = Term.Number(136);
	static Int posint137 = Term.Number(137);
	static Int posint138 = Term.Number(138);
	static Int posint139 = Term.Number(139);
	static Int posint140 = Term.Number(140);
	static Int posint141 = Term.Number(141);
	static Int posint142 = Term.Number(142);
	static Int posint143 = Term.Number(143);
	static Int posint144 = Term.Number(144);
	static Int posint145 = Term.Number(145);
	static Int posint146 = Term.Number(146);
	static Int posint147 = Term.Number(147);
	static Int posint148 = Term.Number(148);
	static Int posint149 = Term.Number(149);
	static Int posint150 = Term.Number(150);
	static Int posint151 = Term.Number(151);
	static Int posint152 = Term.Number(152);
	static Int posint153 = Term.Number(153);
	static Int posint154 = Term.Number(154);
	static Int posint155 = Term.Number(155);
	static Int posint156 = Term.Number(156);
	static Int posint157 = Term.Number(157);
	static Int posint158 = Term.Number(158);
	static Int posint159 = Term.Number(159);
	static Int posint160 = Term.Number(160);
	static Int posint161 = Term.Number(161);
	static Int posint162 = Term.Number(162);
	static Int posint163 = Term.Number(163);
	static Int posint164 = Term.Number(164);
	static Int posint165 = Term.Number(165);
	static Int posint166 = Term.Number(166);
	static Int posint167 = Term.Number(167);
	static Int posint168 = Term.Number(168);
	static Int posint169 = Term.Number(169);
	static Int posint170 = Term.Number(170);
	static Int posint171 = Term.Number(171);
	static Int posint172 = Term.Number(172);
	static Int posint173 = Term.Number(173);
	static Int posint174 = Term.Number(174);
	static Int posint175 = Term.Number(175);
	static Int posint176 = Term.Number(176);
	static Int posint177 = Term.Number(177);
	static Int posint178 = Term.Number(178);
	static Int posint179 = Term.Number(179);
	static Int posint180 = Term.Number(180);
	static Int posint181 = Term.Number(181);
	static Int posint182 = Term.Number(182);
	static Int posint183 = Term.Number(183);
	static Int posint184 = Term.Number(184);
	static Int posint185 = Term.Number(185);
	static Int posint186 = Term.Number(186);
	static Int posint187 = Term.Number(187);
	static Int posint188 = Term.Number(188);
	static Int posint189 = Term.Number(189);
	static Int posint190 = Term.Number(190);
	static Int posint191 = Term.Number(191);
	static Int posint192 = Term.Number(192);
	static Int posint193 = Term.Number(193);
	static Int posint194 = Term.Number(194);
	static Int posint195 = Term.Number(195);
	static Int posint196 = Term.Number(196);
	static Int posint197 = Term.Number(197);
	static Int posint198 = Term.Number(198);
	static Int posint199 = Term.Number(199);
	static Int posint200 = Term.Number(200);
	static Int posint201 = Term.Number(201);
	static Int posint202 = Term.Number(202);
	static Int posint203 = Term.Number(203);
	static Int posint204 = Term.Number(204);
	static Int posint205 = Term.Number(205);
	static Int posint206 = Term.Number(206);
	static Int posint207 = Term.Number(207);
	static Int posint208 = Term.Number(208);
	static Int posint209 = Term.Number(209);
	static Int posint210 = Term.Number(210);
	static Int posint211 = Term.Number(211);
	static Int posint212 = Term.Number(212);
	static Int posint213 = Term.Number(213);
	static Int posint214 = Term.Number(214);
	static Int posint215 = Term.Number(215);
	static Int posint216 = Term.Number(216);
	static Int posint217 = Term.Number(217);
	static Int posint218 = Term.Number(218);
	static Int posint219 = Term.Number(219);
	static Int posint220 = Term.Number(220);
	static Int posint221 = Term.Number(221);
	static Int posint222 = Term.Number(222);
	static Int posint223 = Term.Number(223);
	static Int posint224 = Term.Number(224);
	static Int posint225 = Term.Number(225);
	static Int posint226 = Term.Number(226);
	static Int posint227 = Term.Number(227);
	static Int posint228 = Term.Number(228);
	static Int posint229 = Term.Number(229);
	static Int posint230 = Term.Number(230);
	static Int posint231 = Term.Number(231);
	static Int posint232 = Term.Number(232);
	static Int posint233 = Term.Number(233);
	static Int posint234 = Term.Number(234);
	static Int posint255 = Term.Number(255);
	static Int posint300 = Term.Number(300);
	static Int posint950 = Term.Number(950);
}

class pred_on_load_asm_0 extends Code {

	/*
	 * 
	 * on_load_asm(_628):-write(op(300,xfx,<=),_628).
	 * on_load_asm(_660):-write(op(950,xfx,:),_660).
	 * on_load_asm(_736):-write(determinate([cmp_error/1,name/2,length/2,
	 * asm_hash_value/2]),_736). on_load_asm(_3600):-write((mode
	 * asm_pass12(c,d,f)),_3600). on_load_asm(_25904):-write((mode
	 * opcode(c,f)),_25904).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_on_load_asm_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_asm_0__1(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(asm.s230, asm.posint300, asm.s363, asm.s18);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_asm_0__2(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(asm.s230, asm.posint950, asm.s363, asm.s12);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_asm_0__3(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(asm.s93, F(asm.s9, F(asm.s10, asm.s84, asm.posint1), F(asm.s9,
				F(asm.s10, asm.s224, asm.posint2),
				F(asm.s9, F(asm.s10, asm.s194, asm.posint2), F(asm.s9, F(asm.s10, asm.s42, asm.posint2), Const.Nil)))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_asm_0__4(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(asm.s199, F(asm.s55, asm.s80, asm.s91, asm.s105));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_asm_0__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(asm.s199, F(asm.s231, asm.s80, asm.s105));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}
}

class pred_asm_bp_2 extends Code {

	/*
	 * 
	 * asm_bp(_754,_756,_788):-
	 * :(true,global_set('$asm_bp',0,1),see(_754,asm_getaslist(_766,seen(tell(_756,
	 * asm0(_766,_768,_770,0,_772,functor(_774,csym,255,functor(_776,lsym,255,
	 * global_create('$sym_no',0,0,asm_pass1_bp(_768,_770,_774,_776,_778,_780,
	 * asm_magic(3,asm_putnum(_780,4,asm_putnum(_778,4,asm_putnum(_772,4,asm_pass2(
	 * _768,_770,_774,_776,asm_mark_eot(global_del('$asm_bp',0,told(_788))))))))))))
	 * )))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_bp_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_bp_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s133, asm.s3, asm.posint0, asm.posint1);
		local_aregs[2] = F(asm.s275, var1.Deref(), F(asm.s40, var3, F(asm.s276, F(asm.s295, var2.Deref(), F(asm.s38,
				var3.Deref(), var4, var5, asm.posint0, var6,
				F(asm.s125, var7, asm.s87, asm.posint255, F(asm.s125, var8, asm.s197, asm.posint255, F(asm.s130, asm.s4,
						asm.posint0, asm.posint0,
						F(asm.s57, var4.Deref(), var5.Deref(), var7.Deref(), var8.Deref(), var9, var10,
								F(asm.s50, asm.posint3, F(asm.s63, var10.Deref(), asm.posint4,
										F(asm.s63, var9.Deref(), asm.posint4, F(asm.s63, var6.Deref(), asm.posint4,
												F(asm.s58, var4.Deref(), var5.Deref(), var7.Deref(), var8.Deref(),
														F(asm.s51, F(asm.s131, asm.s3, asm.posint0,
																F(asm.s297, continuation)))))))))))))))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_2 extends Code {

	/*
	 * 
	 * asm(_952,_954,_982):-
	 * :(true,see(_952),asm_getaslist(_960,seen(tell(_954,asm0(_960,_962,_964,0,_966
	 * ,functor(_968,csym,255,functor(_970,lsym,255,global_create('$sym_no',0,0,
	 * asm_pass1(_962,_964,_968,_970,_972,_974,asm_magic(3,asm_putnum(_974,4,
	 * asm_putnum(_972,4,asm_putnum(_966,4,asm_pass2(_962,_964,_968,_970,
	 * asm_mark_eot(told(_982)))))))))))))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s275, var1.Deref());
		local_aregs[2] = F(asm.s40, var3, F(asm.s276, F(asm.s295, var2.Deref(),
				F(asm.s38, var3.Deref(), var4, var5, asm.posint0, var6, F(asm.s125, var7, asm.s87, asm.posint255,
						F(asm.s125, var8, asm.s197, asm.posint255, F(asm.s130, asm.s4, asm.posint0, asm.posint0,
								F(asm.s53, var4.Deref(), var5.Deref(), var7.Deref(), var8.Deref(), var9, var10,
										F(asm.s50, asm.posint3, F(asm.s63, var10.Deref(), asm.posint4,
												F(asm.s63, var9.Deref(), asm.posint4,
														F(asm.s63, var6.Deref(), asm.posint4, F(asm.s58, var4.Deref(),
																var5.Deref(), var7.Deref(), var8.Deref(),
																F(asm.s51, F(asm.s297, continuation)))))))))))))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_getaslist_1 extends Code {

	/*
	 * 
	 * asm_getaslist(_1132,_1144):-
	 * :(true,read(_1136),asm_getaslist1(_1136,_1132,_1144)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_getaslist_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_getaslist_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s269, var2);
		local_aregs[2] = F(asm.s41, var2.Deref(), var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_getaslist1_2 extends Code {

	/*
	 * 
	 * asm_getaslist1(end_of_file,_1174,_1188):- :(true,_1174:=[],_1188).
	 * asm_getaslist1(_1212,_1214,_1236):-
	 * :(true,_1214:=[_1212|_1220],read(_1228,asm_getaslist1(_1228,_1220,_1236))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_getaslist1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_getaslist1_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s99)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var1.Deref(), Const.Nil);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_getaslist1_2__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var2.Deref(), F(asm.s9, var1.Deref(), var3));
		local_aregs[2] = F(asm.s269, var4, F(asm.s41, var4.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_1 extends Code {

	/*
	 * 
	 * asm(_1274,_1302):-
	 * :(true,asm0(_1274,_1280,_1282,0,_1286),functor(_1288,csym,255,functor(_1290,
	 * lsym,255,global_create('$sym_no',0,0,asm_pass1(_1280,_1282,_1288,_1290,_1292,
	 * _1294,asm_magic(3,asm_putnum(_1294,4,asm_putnum(_1292,4,asm_putnum(_1286,4,
	 * asm_pass2(_1280,_1282,_1288,_1290,asm_mark_eot(_1302))))))))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s38, var1.Deref(), var2, var3, asm.posint0, var4);
		local_aregs[2] = F(asm.s125, var5, asm.s87, asm.posint255, F(asm.s125, var6, asm.s197, asm.posint255, F(
				asm.s130, asm.s4, asm.posint0, asm.posint0,
				F(asm.s53, var2.Deref(), var3.Deref(), var5.Deref(), var6.Deref(), var7, var8,
						F(asm.s50, asm.posint3, F(asm.s63, var8.Deref(), asm.posint4,
								F(asm.s63, var7.Deref(), asm.posint4,
										F(asm.s63, var4.Deref(), asm.posint4, F(asm.s58, var2.Deref(), var3.Deref(),
												var5.Deref(), var6.Deref(), F(asm.s51, continuation))))))))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm0_5 extends Code {

	/*
	 * 
	 * asm0([],_1416,_1418,_1420,_1422,_1436):-
	 * :(true,_1416:=[],:=(_1418,[],:=(_1422,_1420,_1436))).
	 * asm0([_1484|_1486],_1488,_1490,_1492,_1494,_1526):-
	 * :(asm_index_inst(_1484,_1500),_1510 is
	 * _1492+_1500,unify([_1484|_1518],_1490,asm0(_1486,_1488,_1518,_1510,_1494,
	 * _1526))). asm0([_1580|_1582],_1584,_1586,_1588,_1590,_1610):-
	 * :(true,_1584:=[_1580|_1596],asm0(_1582,_1596,_1586,_1588,_1590,_1610)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ]} ;
		 */
		Term aregs[] = mach.RegPull(5);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm0_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm0_5__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm0_5::exec_pred_asm0_5__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var1.Deref(), Const.Nil);
		local_aregs[2] = F(asm.s14, var2.Deref(), Const.Nil, F(asm.s14, var4.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm0_5__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm0_5::exec_pred_asm0_5__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s44, var1.Deref(), var7);
		local_aregs[1] = F(asm.s151, var8, F(asm.s5, var5.Deref(), var7.Deref()));
		local_aregs[2] = F(asm.s306, F(asm.s9, var1.Deref(), var9), var4.Deref(),
				F(asm.s38, var2.Deref(), var3.Deref(), var9.Deref(), var8.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm0_5__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var3.Deref(), F(asm.s9, var1.Deref(), var7));
		local_aregs[2] = F(asm.s38, var2.Deref(), var7.Deref(), var4.Deref(), var5.Deref(), var6.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass1_6 extends Code {

	/*
	 * 
	 * asm_pass1(_1654,_1656,_1658,_1660,_1662,_1664,_1684):-
	 * :(true,asm_pass11(_1654,_1660,_1658,0,_1662),asm_index_pass1(_1656,_1658,
	 * asmpass1_fillin(_1660,255,_1658,asmpass1_setundef(_1658,255,0,_1664,_1684))))
	 * .
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
		return (Function<PrologMachine, Function>) exec_pred_asm_pass1_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass1_6__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s54, var1.Deref(), var4.Deref(), var3.Deref(), asm.posint0, var5.Deref());
		local_aregs[2] = F(asm.s45, var2.Deref(), var3.Deref(), F(asm.s66, var4.Deref(), asm.posint255, var3.Deref(),
				F(asm.s68, var3.Deref(), asm.posint255, asm.posint0, var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass1_bp_6 extends Code {

	/*
	 * 
	 * asm_pass1_bp(_1746,_1748,_1750,_1752,_1754,_1756,_1776):-
	 * :(true,asm_pass11(_1746,_1752,_1750,0,_1754),asm_index_pass1(_1748,_1750,
	 * asmpass1_fillin_bp(_1752,255,_1750,asmpass1_setundef(_1750,255,0,_1756,_1776)
	 * ))).
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
		return (Function<PrologMachine, Function>) exec_pred_asm_pass1_bp_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass1_bp_6__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s54, var1.Deref(), var4.Deref(), var3.Deref(), asm.posint0, var5.Deref());
		local_aregs[2] = F(asm.s45, var2.Deref(), var3.Deref(), F(asm.s67, var4.Deref(), asm.posint255, var3.Deref(),
				F(asm.s68, var3.Deref(), asm.posint255, asm.posint0, var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass11_5 extends Code {

	/*
	 * 
	 * asm_pass11([],_1838,_1840,_1842,_1844,_1858):- :(true,_1844:=_1842,_1858).
	 * asm_pass11([_1890|_1892],_1894,_1896,_1898,_1900,_1936):-
	 * <=(label(_1904),_1890,:(lab_member1(lab(_1904,_1898),_1894),asm_pass11(_1892,
	 * _1894,_1896,_1898,_1900),_1936)).
	 * asm_pass11([_1976|_1978],_1980,_1982,_1984,_1986,_2008):-
	 * :(label(_1990)<=_1976,error_double_define(_1990),asm_pass11(_1978,_1980,_1982
	 * ,_1984,_1986,_2008)).
	 * asm_pass11([_2054|_2056],_2058,_2060,_2062,_2064,_2088):-
	 * :(true,asm_pass12(_2054,_2060,_2072),is(_2080,_2062+_2072,asm_pass11(_2056,
	 * _2058,_2060,_2080,_2064,_2088))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ]} ;
		 */
		Term aregs[] = mach.RegPull(5);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass11_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass11_5__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var4.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass11_5__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s193, var7);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(asm.s12, F(asm.s192, F(asm.s191, var7.Deref(), var5.Deref()), var3.Deref()),
				F(asm.s54, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref()), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym__c60_system_equals_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass11_5__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s18, F(asm.s193, var7), var1.Deref());
		local_aregs[1] = F(asm.s102, var7.Deref());
		local_aregs[2] = F(asm.s54, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass11_5__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s55, var1.Deref(), var4.Deref(), var7);
		local_aregs[2] = F(asm.s151, var8, F(asm.s5, var5.Deref(), var7.Deref()),
				F(asm.s54, var2.Deref(), var3.Deref(), var4.Deref(), var8.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_error_double_define_1 extends Code {

	/*
	 * 
	 * error_double_define((_2148,_2142,_2144),_2158):- :(true,true,_2158).
	 * error_double_define((_2182,_2184),_2220):- :(true,cmp_error(['The predicate
	 * ',_2182/_2184,' is doubly defined']),_2220).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_error_double_define_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_error_double_define_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_error_double_define_1::exec_pred_error_double_define_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s6, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_error_double_define_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s84,
				F(asm.s9, asm.s25, F(asm.s9, F(asm.s10, var1.Deref(), var2.Deref()), F(asm.s9, asm.s2, Const.Nil))));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_index_pass1_2 extends Code {

	/*
	 * 
	 * asm_index_pass1([],_2242,_2250):- :(true,true,_2250).
	 * asm_index_pass1([pred(_2276,_2278,_2280,_2282)|_2288],_2290,_2304):-
	 * :(true,asm_index_pass1(_2288,_2290),_2304).
	 * asm_index_pass1([arglabel(_2330,_2332,_2334)|_2340],_2342,_2372):-
	 * :(_2330==c,sym_member1(sym(_2332,0,_2356,_2358),_2342),asm_index_pass1(_2340,
	 * _2342,_2372)).
	 * asm_index_pass1([arglabel(_2412,(_2406,_2408),_2416)|_2422],_2424,_2454):-
	 * :(_2412==s,sym_member1(sym(_2406,_2408,_2438,_2440),_2424),asm_index_pass1(
	 * _2422,_2424,_2454)).
	 * asm_index_pass1([arglabel(_2488,_2490,_2492)|_2498],_2500,_2514):-
	 * :(true,asm_index_pass1(_2498,_2500),_2514).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_index_pass1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_pass1_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_pass1_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__3);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s263, var1, var2, var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s45, var5.Deref(), var6.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_pass1_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__4);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s36, var1, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s21, var1.Deref(), asm.s80);
		local_aregs[1] = F(asm.s293, F(asm.s292, var2.Deref(), asm.posint0, var6, var7), var5.Deref());
		local_aregs[2] = F(asm.s45, var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_pass1_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__5);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s36, var1, F(asm.s6, var2, var3), var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s21, var1.Deref(), asm.s272);
		local_aregs[1] = F(asm.s293, F(asm.s292, var2.Deref(), var3.Deref(), var7, var8), var6.Deref());
		local_aregs[2] = F(asm.s45, var5.Deref(), var6.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_pass1_2__5(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s36, var1, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s45, var4.Deref(), var5.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_fillin_3 extends Code {

	/*
	 * 
	 * asmpass1_fillin(_2532,_2534,_2536,_2550):- :(_2534<1,true,_2550).
	 * asmpass1_fillin(_2576,_2578,_2580,_2604):-
	 * :(true,arg(_2578,_2576,_2588),asmpass1_fillin(_2588,_2580,is(_2596,_2578-1,
	 * asmpass1_fillin(_2576,_2596,_2580,_2604)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_fillin_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__2);
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
		local_aregs[0] = F(asm.s16, var2.Deref(), asm.posint1);
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_3__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s34, var2.Deref(), var1.Deref(), var4);
		local_aregs[2] = F(asm.s66, var4.Deref(), var3.Deref(), F(asm.s151, var5, F(asm.s7, var2.Deref(), asm.posint1),
				F(asm.s66, var1.Deref(), var5.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_fillin_2 extends Code {

	/*
	 * 
	 * asmpass1_fillin(_2656,_2658,_2670):- :(var(_2656),true,_2670).
	 * asmpass1_fillin([lab((_2702,_2696,_2698),_2710)|_2716],_2718,_2732):-
	 * :(true,asmpass1_fillin(_2716,_2718),_2732).
	 * asmpass1_fillin([lab((_2758,_2760),_2766)|_2772],_2774,_2798):-
	 * :(true,sym_member1(sym(_2758,_2760,_2766,_2784),_2774),asmpass1_fillin(_2772,
	 * _2774,_2798)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_fillin_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__2);
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
		local_aregs[0] = F(asm.s355, var1.Deref());
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__3);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s191, F(asm.s6, var1, F(asm.s6, var2, var3)), var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s66, var5.Deref(), var6.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_2__3(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s191, F(asm.s6, var1, var2), var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s293, F(asm.s292, var1.Deref(), var2.Deref(), var3.Deref(), var6), var5.Deref());
		local_aregs[2] = F(asm.s66, var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_fillin_bp_3 extends Code {

	/*
	 * 
	 * asmpass1_fillin_bp(_2830,_2832,_2834,_2848):- :(_2832<1,true,_2848).
	 * asmpass1_fillin_bp(_2874,_2876,_2878,_2902):-
	 * :(true,arg(_2876,_2874,_2886),asmpass1_fillin_bp(_2886,_2878,is(_2894,_2876-1
	 * ,asmpass1_fillin_bp(_2874,_2894,_2878,_2902)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_fillin_bp_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__2);
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
		local_aregs[0] = F(asm.s16, var2.Deref(), asm.posint1);
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_3__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s34, var2.Deref(), var1.Deref(), var4);
		local_aregs[2] = F(asm.s67, var4.Deref(), var3.Deref(), F(asm.s151, var5, F(asm.s7, var2.Deref(), asm.posint1),
				F(asm.s67, var1.Deref(), var5.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_fillin_bp_2 extends Code {

	/*
	 * 
	 * asmpass1_fillin_bp(_2954,_2956,_2968):- :(var(_2954),true,_2968).
	 * asmpass1_fillin_bp([lab((_3000,_2994,_2996),_3008)|_3014],_3016,_3030):-
	 * :(true,asmpass1_fillin_bp(_3014,_3016),_3030).
	 * asmpass1_fillin_bp([lab((_3056,_3058),_3064)|_3070],_3072,_3102):-
	 * :(predefined(_3056,_3058),sym_member1(sym(_3056,_3058,_3064,_3088),_3072),
	 * asmpass1_fillin_bp(_3070,_3072,_3102)).
	 * asmpass1_fillin_bp([lab((_3136,_3138),_3144)|_3150],_3152,_3166):-
	 * :(true,asmpass1_fillin_bp(_3150,_3152),_3166).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_fillin_bp_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__2);
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
		local_aregs[0] = F(asm.s355, var1.Deref());
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__3);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s191, F(asm.s6, var1, F(asm.s6, var2, var3)), var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s67, var5.Deref(), var6.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__4);
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s191, F(asm.s6, var1, var2), var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s264, var1.Deref(), var2.Deref());
		local_aregs[1] = F(asm.s293, F(asm.s292, var1.Deref(), var2.Deref(), var3.Deref(), var6), var5.Deref());
		local_aregs[2] = F(asm.s67, var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_fillin_bp_2__4(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s9, F(asm.s191, F(asm.s6, var1, var2), var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s67, var4.Deref(), var5.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_setundef_4 extends Code {

	/*
	 * 
	 * asmpass1_setundef(_3190,_3192,_3194,_3196,_3216):-
	 * :(_3192<1,_3196=_3194,_3216).
	 * asmpass1_setundef(_3244,_3246,_3248,_3250,_3276):-
	 * :(true,arg(_3246,_3244,_3258),asmpass1_setundef(_3258,_3248,_3260,is(_3268,
	 * _3246-1,asmpass1_setundef(_3244,_3268,_3260,_3250,_3276)))).
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
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_setundef_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_setundef_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s16, var2.Deref(), asm.posint1);
		local_aregs[1] = F(asm.s19, var4.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_setundef_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s34, var2.Deref(), var1.Deref(), var5);
		local_aregs[2] = F(asm.s68, var5.Deref(), var3.Deref(), var6,
				F(asm.s151, var7, F(asm.s7, var2.Deref(), asm.posint1),
						F(asm.s68, var1.Deref(), var7.Deref(), var6.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asmpass1_setundef_3 extends Code {

	/*
	 * 
	 * asmpass1_setundef(_3334,_3336,_3338,_3356):- :(var(_3334),_3338=_3336,_3356).
	 * asmpass1_setundef([sym(_3384,_3386,_3388,_3390)|_3396],_3398,_3400,_3434):-
	 * :(var(_3388),_3388:=
	 * -2,b_GET_LENGTH_cf(_3384,_3412,is(_3426,_3398+_3412+6,asmpass1_setundef(_3396
	 * ,_3426,_3400,_3434)))).
	 * asmpass1_setundef([sym(_3488,_3490,_3492,_3494)|_3500],_3502,_3504,_3532):-
	 * :(true,b_GET_LENGTH_cf(_3488,_3510),is(_3524,_3502+_3510+6,asmpass1_setundef(
	 * _3500,_3524,_3504,_3532))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asmpass1_setundef_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_setundef_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__2);
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
		local_aregs[0] = F(asm.s355, var1.Deref());
		local_aregs[1] = F(asm.s19, var3.Deref(), var2.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_setundef_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s9, F(asm.s292, var1, var2, var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s355, var3.Deref());
		local_aregs[1] = F(asm.s14, var3.Deref(), asm.negint2);
		local_aregs[2] = F(asm.s73, var1.Deref(), var8,
				F(asm.s151, var9, F(asm.s5, F(asm.s5, var6.Deref(), var8.Deref()), asm.posint6),
						F(asm.s68, var5.Deref(), var9.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asmpass1_setundef_3__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s9, F(asm.s292, var1, var2, var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s73, var1.Deref(), var8);
		local_aregs[2] = F(asm.s151, var9, F(asm.s5, F(asm.s5, var6.Deref(), var8.Deref()), asm.posint6),
				F(asm.s68, var5.Deref(), var9.Deref(), var7.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass12_3 extends Code {

	/*
	 * 
	 * asm_pass12(label(_3614),_3616,0,_3626):-call(_3626).
	 * asm_pass12(jmp(_3646),_3648,2,_3658):-call(_3658).
	 * asm_pass12(jmpn_eq_struct_x(_3684,(_3678,_3680),_3688,_3690),_3692,5,_3710):-
	 * sym_member1(sym(_3678,_3680,_3700,_3702),_3692,_3710).
	 * asm_pass12(jmpn_eq_struct_y(_3744,(_3738,_3740),_3748,_3750),_3752,5,_3770):-
	 * sym_member1(sym(_3738,_3740,_3760,_3762),_3752,_3770).
	 * asm_pass12(jmpn_eq_atom_x(_3798,_3800,_3802,_3804),_3806,5,_3824):-
	 * sym_member1(sym(_3800,0,_3814,_3816),_3806,_3824).
	 * asm_pass12(jmpn_eq_atom_y(_3852,_3854,_3856,_3858),_3860,5,_3878):-
	 * sym_member1(sym(_3854,0,_3868,_3870),_3860,_3878).
	 * asm_pass12(jmpn_nil_x(_3906,_3908,_3910),_3912,4,_3922):-call(_3922).
	 * asm_pass12(jmpn_nil_y(_3942,_3944,_3946),_3948,4,_3958):-call(_3958).
	 * asm_pass12(switch_list_x(_3978,_3980,_3982,_3984),_3986,5,_3996):-call(_3996)
	 * .
	 * asm_pass12(switch_list_y(_4016,_4018,_4020,_4022),_4024,5,_4034):-call(_4034)
	 * . asm_pass12(switch_list_yxx(_4054,_4056,_4058,_4060),_4062,5,_4072):-call(
	 * _4072).
	 * asm_pass12(switch_list_yxy(_4092,_4094,_4096,_4098),_4100,5,_4110):-call(
	 * _4110).
	 * asm_pass12(switch_list_yyx(_4130,_4132,_4134,_4136),_4138,5,_4148):-call(
	 * _4148).
	 * asm_pass12(switch_list_yyy(_4168,_4170,_4172,_4174),_4176,5,_4186):-call(
	 * _4186).
	 * asm_pass12(jmpn_eq_int_x(_4206,_4208,_4210,_4212),_4214,5,_4224):-call(_4224)
	 * .
	 * asm_pass12(jmpn_eq_int_y(_4244,_4246,_4248,_4250),_4252,5,_4262):-call(_4262)
	 * . asm_pass12(jmpn_eql(_4282,_4284,_4286),_4288,4,_4298):-call(_4298).
	 * asm_pass12(jmp_eql(_4318,_4320,_4322),_4324,4,_4334):-call(_4334).
	 * asm_pass12(jmp_eql_yy(_4354,_4356,_4358),_4360,4,_4370):-call(_4370).
	 * asm_pass12(jmpn_gt(_4390,_4392,_4394),_4396,4,_4406):-call(_4406).
	 * asm_pass12(jmpn_gt_yy(_4426,_4428,_4430),_4432,4,_4442):-call(_4442).
	 * asm_pass12(jmpn_ge(_4462,_4464,_4466),_4468,4,_4478):-call(_4478).
	 * asm_pass12(jmpn_ge_yy(_4498,_4500,_4502),_4504,4,_4514):-call(_4514).
	 * asm_pass12(jmpn_id(_4534,_4536,_4538),_4540,4,_4550):-call(_4550).
	 * asm_pass12(jmp_id(_4570,_4572,_4574),_4576,4,_4586):-call(_4586).
	 * asm_pass12(jmpn_var_x(_4606,_4608),_4610,3,_4620):-call(_4620).
	 * asm_pass12(jmpn_var_y(_4640,_4642),_4644,3,_4654):-call(_4654).
	 * asm_pass12(jmp_var_x(_4674,_4676),_4678,3,_4688):-call(_4688).
	 * asm_pass12(jmp_var_y(_4708,_4710),_4712,3,_4722):-call(_4722).
	 * asm_pass12(jmpn_atom_x(_4742,_4744),_4746,3,_4756):-call(_4756).
	 * asm_pass12(jmpn_atom_y(_4776,_4778),_4780,3,_4790):-call(_4790).
	 * asm_pass12(jmpn_atomic_x(_4810,_4812),_4814,3,_4824):-call(_4824).
	 * asm_pass12(jmpn_atomic_y(_4844,_4846),_4848,3,_4858):-call(_4858).
	 * asm_pass12(jmpn_num_x(_4878,_4880),_4882,3,_4892):-call(_4892).
	 * asm_pass12(jmpn_num_y(_4912,_4914),_4916,3,_4926):-call(_4926).
	 * asm_pass12(jmpn_int_x(_4946,_4948),_4950,3,_4960):-call(_4960).
	 * asm_pass12(jmpn_int_y(_4980,_4982),_4984,3,_4994):-call(_4994).
	 * asm_pass12(jmpn_float_x(_5014,_5016),_5018,3,_5028):-call(_5028).
	 * asm_pass12(jmpn_float_y(_5048,_5050),_5052,3,_5062):-call(_5062).
	 * asm_pass12(hash_jmpn_nil(_5082),_5084,2,_5094):-call(_5094).
	 * asm_pass12(hash_jmpn_list(_5114),_5116,2,_5126):-call(_5126).
	 * asm_pass12(hash_jmpn_int(_5146,_5148),_5150,3,_5160):-call(_5160).
	 * asm_pass12(hash_jmpn_atom(_5180,_5182),_5184,3,_5202):-sym_member1(sym(_5180,
	 * 0,_5192,_5194),_5184,_5202).
	 * asm_pass12(hash_jmpn_struct((_5230,_5232),_5238),_5240,3,_5258):-sym_member1(
	 * sym(_5230,_5232,_5248,_5250),_5240,_5258).
	 * asm_pass12(hash_jmpn_struct_x((_5286,_5288),_5294),_5296,3,_5314):-
	 * sym_member1(sym(_5286,_5288,_5304,_5306),_5296,_5314).
	 * asm_pass12(hash_jmpn_struct_y((_5342,_5344),_5350),_5352,3,_5370):-
	 * sym_member1(sym(_5342,_5344,_5360,_5362),_5352,_5370).
	 * asm_pass12(hash_jmpn_struct_xx((_5398,_5400),_5406),_5408,3,_5426):-
	 * sym_member1(sym(_5398,_5400,_5416,_5418),_5408,_5426).
	 * asm_pass12(hash_jmpn_struct_xy((_5454,_5456),_5462),_5464,3,_5482):-
	 * sym_member1(sym(_5454,_5456,_5472,_5474),_5464,_5482).
	 * asm_pass12(hash_jmpn_struct_yx((_5510,_5512),_5518),_5520,3,_5538):-
	 * sym_member1(sym(_5510,_5512,_5528,_5530),_5520,_5538).
	 * asm_pass12(hash_jmpn_struct_yy((_5566,_5568),_5574),_5576,3,_5594):-
	 * sym_member1(sym(_5566,_5568,_5584,_5586),_5576,_5594).
	 * asm_pass12(unify_struct_x(_5628,(_5622,_5624)),_5632,3,_5650):-sym_member1(
	 * sym(_5622,_5624,_5640,_5642),_5632,_5650).
	 * asm_pass12(unify_struct_y(_5684,(_5678,_5680)),_5688,3,_5706):-sym_member1(
	 * sym(_5678,_5680,_5696,_5698),_5688,_5706).
	 * asm_pass12(unify_list_x(_5734),_5736,2,_5746):-call(_5746).
	 * asm_pass12(unify_list_y(_5766),_5768,2,_5778):-call(_5778).
	 * asm_pass12(unify_nil_x(_5798),_5800,2,_5810):-call(_5810).
	 * asm_pass12(unify_nil_y(_5830),_5832,2,_5842):-call(_5842).
	 * asm_pass12(unify_atom_x(_5862,_5864),_5866,3,_5884):-sym_member1(sym(_5864,0,
	 * _5874,_5876),_5866,_5884).
	 * asm_pass12(unify_atom_y(_5912,_5914),_5916,3,_5934):-sym_member1(sym(_5914,0,
	 * _5924,_5926),_5916,_5934).
	 * asm_pass12(unify_int_x(_5962,_5964),_5966,3,_5976):-call(_5976).
	 * asm_pass12(unify_int_y(_5996,_5998),_6000,3,_6010):-call(_6010).
	 * asm_pass12(unify_ux_ux(_6030,_6032),_6034,3,_6044):-call(_6044).
	 * asm_pass12(unify_ux_uy(_6064,_6066),_6068,3,_6078):-call(_6078).
	 * asm_pass12(unify_uy_uy(_6098,_6100),_6102,3,_6112):-call(_6112).
	 * asm_pass12(unify_cons_x(_6132,_6134),_6136,3,_6146):-call(_6146).
	 * asm_pass12(unify_cons_y(_6166,_6168),_6170,3,_6180):-call(_6180).
	 * asm_pass12(fork_unify_struct_y(_6206,(_6200,_6202),_6210),_6212,4,_6230):-
	 * sym_member1(sym(_6200,_6202,_6220,_6222),_6212,_6230).
	 * asm_pass12(fork_unify_list_y(_6258,_6260),_6262,3,_6272):-call(_6272).
	 * asm_pass12(fork_unify_nil_y(_6292,_6294),_6296,3,_6306):-call(_6306).
	 * asm_pass12(fork_unify_atom_y(_6326,_6328,_6330),_6332,4,_6350):-sym_member1(
	 * sym(_6328,0,_6340,_6342),_6332,_6350).
	 * asm_pass12(fork_unify_int_y(_6378,_6380,_6382),_6384,4,_6394):-call(_6394).
	 * asm_pass12(fork_unify_ux_uy(_6414,_6416,_6418),_6420,4,_6430):-call(_6430).
	 * asm_pass12(fork_unify_uy_uy(_6450,_6452,_6454),_6456,4,_6466):-call(_6466).
	 * asm_pass12(fork_unicut_struct_y(_6492,(_6486,_6488),_6496),_6498,4,_6516):-
	 * sym_member1(sym(_6486,_6488,_6506,_6508),_6498,_6516).
	 * asm_pass12(fork_unicut_list_y(_6544,_6546),_6548,3,_6558):-call(_6558).
	 * asm_pass12(fork_unicut_nil_y(_6578,_6580),_6582,3,_6592):-call(_6592).
	 * asm_pass12(fork_unicut_atom_y(_6612,_6614,_6616),_6618,4,_6636):-sym_member1(
	 * sym(_6614,0,_6626,_6628),_6618,_6636).
	 * asm_pass12(fork_unicut_int_y(_6664,_6666,_6668),_6670,4,_6680):-call(_6680).
	 * asm_pass12(fork_unicut_ux_uy(_6700,_6702,_6704),_6706,4,_6716):-call(_6716).
	 * asm_pass12(fork_unicut_uy_uy(_6736,_6738,_6740),_6742,4,_6752):-call(_6752).
	 * asm_pass12(unify0_struct_y(_6778,(_6772,_6774)),_6782,3,_6800):-sym_member1(
	 * sym(_6772,_6774,_6790,_6792),_6782,_6800).
	 * asm_pass12(unify0_list_y(_6828),_6830,2,_6840):-call(_6840).
	 * asm_pass12(unify0_nil_y(_6860),_6862,2,_6872):-call(_6872).
	 * asm_pass12(unify0_atom_y(_6892,_6894),_6896,3,_6914):-sym_member1(sym(_6894,0
	 * ,_6904,_6906),_6896,_6914).
	 * asm_pass12(unify0_int_y(_6942,_6944),_6946,3,_6956):-call(_6956).
	 * asm_pass12(unify0_ux_uy(_6976,_6978),_6980,3,_6990):-call(_6990).
	 * asm_pass12(unify0_uy_uy(_7010,_7012),_7014,3,_7024):-call(_7024).
	 * asm_pass12(unicut_struct_y(_7050,(_7044,_7046)),_7054,3,_7072):-sym_member1(
	 * sym(_7044,_7046,_7062,_7064),_7054,_7072).
	 * asm_pass12(unicut_list_y(_7100),_7102,2,_7112):-call(_7112).
	 * asm_pass12(unicut_nil_y(_7132),_7134,2,_7144):-call(_7144).
	 * asm_pass12(unicut_atom_y(_7164,_7166),_7168,3,_7186):-sym_member1(sym(_7166,0
	 * ,_7176,_7178),_7168,_7186).
	 * asm_pass12(unicut_int_y(_7214,_7216),_7218,3,_7228):-call(_7228).
	 * asm_pass12(unicut_uy_uy(_7248,_7250),_7252,3,_7262):-call(_7262).
	 * asm_pass12(unicut,_7280,1,_7290):-call(_7290).
	 * asm_pass12(unify_arg_nil,_7308,1,_7318):-call(_7318).
	 * asm_pass12(unify_arg_atom(_7338),_7340,2,_7358):-sym_member1(sym(_7338,0,
	 * _7348,_7350),_7340,_7358).
	 * asm_pass12(unify_arg_int(_7386),_7388,2,_7398):-call(_7398).
	 * asm_pass12(unify_arg_ux_ux(_7418,_7420),_7422,3,_7432):-call(_7432).
	 * asm_pass12(unify_arg_ux(_7452),_7454,2,_7464):-call(_7464).
	 * asm_pass12(unify_arg_ux_vy(_7484,_7486),_7488,3,_7498):-call(_7498).
	 * asm_pass12(unify_arg_ux_vx(_7518,_7520),_7522,3,_7532):-call(_7532).
	 * asm_pass12(unify_arg_uy_uy(_7552,_7554),_7556,3,_7566):-call(_7566).
	 * asm_pass12(unify_arg_uy(_7586),_7588,2,_7598):-call(_7598).
	 * asm_pass12(unify_arg_vx(_7618),_7620,2,_7630):-call(_7630).
	 * asm_pass12(unify_arg_vy(_7650),_7652,2,_7662):-call(_7662).
	 * asm_pass12(unify_arg_list,_7680,1,_7690):-call(_7690).
	 * asm_pass12(unify_arg_struct((_7710,_7712)),_7718,2,_7736):-sym_member1(sym(
	 * _7710,_7712,_7726,_7728),_7718,_7736).
	 * asm_pass12(unify_arg_void_one,_7762,1,_7772):-call(_7772).
	 * asm_pass12(unify_arg_void(_7792),_7794,2,_7804):-call(_7804).
	 * asm_pass12(unify_arg_wy(_7824),_7826,2,_7836):-call(_7836).
	 * asm_pass12(unify_arg_vx_vx(_7856,_7858),_7860,3,_7870):-call(_7870).
	 * asm_pass12(unify_arg_vx_vy(_7890,_7892),_7894,3,_7904):-call(_7904).
	 * asm_pass12(unify_arg_vx_ux(_7924,_7926),_7928,3,_7938):-call(_7938).
	 * asm_pass12(unify_arg_vx_uy(_7958,_7960),_7962,3,_7972):-call(_7972).
	 * asm_pass12(unify_arg_vy_vx(_7992,_7994),_7996,3,_8006):-call(_8006).
	 * asm_pass12(unify_arg_vy_vy(_8026,_8028),_8030,3,_8040):-call(_8040).
	 * asm_pass12(unify_arg_vy_ux(_8060,_8062),_8064,3,_8074):-call(_8074).
	 * asm_pass12(unify_arg_vy_uy(_8094,_8096),_8098,3,_8108):-call(_8108).
	 * asm_pass12(unify_arg_iii(_8128,_8130,_8132),_8134,4,_8144):-call(_8144).
	 * asm_pass12(move_struct_x(_8170,(_8164,_8166)),_8174,3,_8192):-sym_member1(sym
	 * (_8164,_8166,_8182,_8184),_8174,_8192).
	 * asm_pass12(move_struct_y(_8226,(_8220,_8222)),_8230,3,_8248):-sym_member1(sym
	 * (_8220,_8222,_8238,_8240),_8230,_8248).
	 * asm_pass12(move_list_x(_8276),_8278,2,_8288):-call(_8288).
	 * asm_pass12(move_list_y(_8308),_8310,2,_8320):-call(_8320).
	 * asm_pass12(move_nil_x(_8340),_8342,2,_8352):-call(_8352).
	 * asm_pass12(move_nil_y(_8372),_8374,2,_8384):-call(_8384).
	 * asm_pass12(move_atom_x(_8404,_8406),_8408,3,_8426):-sym_member1(sym(_8406,0,
	 * _8416,_8418),_8408,_8426).
	 * asm_pass12(move_atom_y(_8454,_8456),_8458,3,_8476):-sym_member1(sym(_8456,0,
	 * _8466,_8468),_8458,_8476).
	 * asm_pass12(move_int_x(_8504,_8506),_8508,3,_8518):-call(_8518).
	 * asm_pass12(move_int_y(_8538,_8540),_8542,3,_8552):-call(_8552).
	 * asm_pass12(move_x_ux(_8572,_8574),_8576,3,_8586):-call(_8586).
	 * asm_pass12(move_x_uy(_8606,_8608),_8610,3,_8620):-call(_8620).
	 * asm_pass12(move_y_ux(_8640,_8642),_8644,3,_8654):-call(_8654).
	 * asm_pass12(move_y_uy(_8674,_8676),_8678,3,_8688):-call(_8688).
	 * asm_pass12(move_vx(_8708),_8710,2,_8720):-call(_8720).
	 * asm_pass12(move_vy(_8740),_8742,2,_8752):-call(_8752).
	 * asm_pass12(move_x_wy(_8772,_8774),_8776,3,_8786):-call(_8786).
	 * asm_pass12(move_y_wy(_8806,_8808),_8810,3,_8820):-call(_8820).
	 * asm_pass12(move_yy_yw(_8840,_8842,_8844,_8846),_8848,5,_8858):-call(_8858).
	 * asm_pass12(move_yw_yy(_8878,_8880,_8882,_8884),_8886,5,_8896):-call(_8896).
	 * asm_pass12(move_yy_yy(_8916,_8918,_8920,_8922),_8924,5,_8934):-call(_8934).
	 * asm_pass12(move_yy_yy_yy(_8954,_8956,_8958,_8960,_8962,_8964),_8966,7,_8976):
	 * -call(_8976). asm_pass12(and(_8996,_8998,_9000),_9002,4,_9012):-call(_9012).
	 * asm_pass12(or(_9032,_9034,_9036),_9038,4,_9048):-call(_9048).
	 * asm_pass12(lshiftl(_9068,_9070,_9072),_9074,4,_9084):-call(_9084).
	 * asm_pass12(lshiftr(_9104,_9106,_9108),_9110,4,_9120):-call(_9120).
	 * asm_pass12(complement(_9140,_9142),_9144,3,_9154):-call(_9154).
	 * asm_pass12(add(_9174,_9176,_9178),_9180,4,_9190):-call(_9190).
	 * asm_pass12(add1_y(_9210),_9212,2,_9222):-call(_9222).
	 * asm_pass12(sub(_9242,_9244,_9246),_9248,4,_9258):-call(_9258).
	 * asm_pass12(sub1_y(_9278),_9280,2,_9290):-call(_9290).
	 * asm_pass12(mul(_9310,_9312,_9314),_9316,4,_9326):-call(_9326).
	 * asm_pass12(div(_9346,_9348,_9350),_9352,4,_9362):-call(_9362).
	 * asm_pass12(idiv(_9382,_9384,_9386),_9388,4,_9398):-call(_9398).
	 * asm_pass12(mod(_9418,_9420,_9422),_9424,4,_9434):-call(_9434).
	 * asm_pass12(para_struct((_9454,_9456)),_9462,2,_9480):-sym_member1(sym(_9454,
	 * _9456,_9470,_9472),_9462,_9480).
	 * asm_pass12(para_list,_9506,1,_9516):-call(_9516).
	 * asm_pass12(para_nil,_9534,1,_9544):-call(_9544).
	 * asm_pass12(para_atom(_9564),_9566,2,_9584):-sym_member1(sym(_9564,0,_9574,
	 * _9576),_9566,_9584). asm_pass12(para_int(_9612),_9614,2,_9624):-call(_9624).
	 * asm_pass12(para_ux(_9644),_9646,2,_9656):-call(_9656).
	 * asm_pass12(para_uy(_9676),_9678,2,_9688):-call(_9688).
	 * asm_pass12(para_vx(_9708),_9710,2,_9720):-call(_9720).
	 * asm_pass12(para_vy(_9740),_9742,2,_9752):-call(_9752).
	 * asm_pass12(para_void_one,_9770,1,_9780):-call(_9780).
	 * asm_pass12(para_void(_9800),_9802,2,_9812):-call(_9812).
	 * asm_pass12(para_vy_vy(_9832,_9834),_9836,3,_9846):-call(_9846).
	 * asm_pass12(para_vy_ux(_9866,_9868),_9870,3,_9880):-call(_9880).
	 * asm_pass12(para_vy_uy(_9900,_9902),_9904,3,_9914):-call(_9914).
	 * asm_pass12(para_ux_vy(_9934,_9936),_9938,3,_9948):-call(_9948).
	 * asm_pass12(para_ux_ux(_9968,_9970),_9972,3,_9982):-call(_9982).
	 * asm_pass12(para_ux_uy(_10002,_10004),_10006,3,_10016):-call(_10016).
	 * asm_pass12(para_uy_vy(_10036,_10038),_10040,3,_10050):-call(_10050).
	 * asm_pass12(para_uy_ux(_10070,_10072),_10074,3,_10084):-call(_10084).
	 * asm_pass12(para_uy_uy(_10104,_10106),_10108,3,_10118):-call(_10118).
	 * asm_pass12(para_ux_ux_ux(_10138,_10140,_10142),_10144,4,_10154):-call(_10154)
	 * .
	 * asm_pass12(para_ux_ux_uy(_10174,_10176,_10178),_10180,4,_10190):-call(_10190)
	 * .
	 * asm_pass12(para_ux_uy_ux(_10210,_10212,_10214),_10216,4,_10226):-call(_10226)
	 * .
	 * asm_pass12(para_ux_uy_uy(_10246,_10248,_10250),_10252,4,_10262):-call(_10262)
	 * .
	 * asm_pass12(para_uy_ux_ux(_10282,_10284,_10286),_10288,4,_10298):-call(_10298)
	 * .
	 * asm_pass12(para_uy_ux_uy(_10318,_10320,_10322),_10324,4,_10334):-call(_10334)
	 * .
	 * asm_pass12(para_uy_uy_ux(_10354,_10356,_10358),_10360,4,_10370):-call(_10370)
	 * .
	 * asm_pass12(para_uy_uy_uy(_10390,_10392,_10394),_10396,4,_10406):-call(_10406)
	 * . asm_pass12(para_uy_uy_uy_uy(_10426,_10428,_10430,_10432),_10434,5,_10444):-
	 * call(_10444).
	 * asm_pass12(call((_10464,_10466)),_10472,2,_10480):-asm_pass12_call(_10464,
	 * _10466,_10472,_10480).
	 * asm_pass12(callv(_10510),_10512,2,_10522):-call(_10522).
	 * asm_pass12(execute((_10542,_10544)),_10550,2,_10558):-asm_pass12_call(_10542,
	 * _10544,_10550,_10558).
	 * asm_pass12(executev(_10588),_10590,2,_10600):-call(_10600).
	 * asm_pass12(return_a,_10618,1,_10628):-call(_10628).
	 * asm_pass12(return_b,_10646,1,_10656):-call(_10656).
	 * asm_pass12(jmpn_det(_10676),_10678,2,_10688):-call(_10688).
	 * asm_pass12(save_ht_jmp(_10708,_10710),_10712,3,_10722):-call(_10722).
	 * asm_pass12(allocate_flat(_10742),_10744,2,_10754):-call(_10754).
	 * asm_pass12(allocate_nonflat(_10774),_10776,2,_10786):-call(_10786).
	 * asm_pass12(allocate_nondet(_10806),_10808,2,_10818):-call(_10818).
	 * asm_pass12(flat_to_nondet(_10838),_10840,2,_10850):-call(_10850).
	 * asm_pass12(fail,_10868,1,_10878):-call(_10878).
	 * asm_pass12(fail0,_10896,1,_10906):-call(_10906).
	 * asm_pass12(fork(_10926),_10928,2,_10938):-call(_10938).
	 * asm_pass12(commit,_10956,1,_10966):-call(_10966).
	 * asm_pass12(cut,_10984,1,_10994):-call(_10994).
	 * asm_pass12(cut_fail,_11012,1,_11022):-call(_11022).
	 * asm_pass12(cut_return,_11040,1,_11050):-call(_11050).
	 * asm_pass12(save_b,_11068,1,_11078):-call(_11078).
	 * asm_pass12(getbreg(_11098),_11100,2,_11110):-call(_11110).
	 * asm_pass12(getpbreg(_11130),_11132,2,_11142):-call(_11142).
	 * asm_pass12(putbreg(_11162),_11164,2,_11174):-call(_11174).
	 * asm_pass12(hash_x(_11194,_11196),_11198,5,_11208):-call(_11208).
	 * asm_pass12(hash_y(_11228,_11230),_11232,5,_11242):-call(_11242).
	 * asm_pass12(tabsize(_11262),_11264,2,_11274):-call(_11274).
	 * asm_pass12(arg(_11294,_11296,_11298),_11300,4,_11310):-call(_11310).
	 * asm_pass12(arg0(_11330,_11332,_11334),_11336,4,_11346):-call(_11346).
	 * asm_pass12(setarg(_11366,_11368,_11370),_11372,4,_11382):-call(_11382).
	 * asm_pass12(setarg0(_11402,_11404,_11406),_11408,4,_11418):-call(_11418).
	 * asm_pass12(functor(_11438,_11440,_11442),_11444,4,_11454):-call(_11454).
	 * asm_pass12(builtin0(_11474,_11476),_11478,3,_11488):-call(_11488).
	 * asm_pass12(builtin1(_11508,_11510,_11512),_11514,4,_11524):-call(_11524).
	 * asm_pass12(builtin2(_11544,_11546,_11548,_11550),_11552,5,_11562):-call(
	 * _11562).
	 * asm_pass12(builtin3(_11582,_11584,_11586,_11588,_11590),_11592,6,_11602):-
	 * call(_11602).
	 * asm_pass12(builtin4(_11622,_11624,_11626,_11628,_11630,_11632),_11634,7,
	 * _11644):-call(_11644).
	 * asm_pass12(func_arity(_11664,_11666),_11668,3,_11678):-call(_11678).
	 * asm_pass12(halt,_11696,1,_11706):-call(_11706).
	 * asm_pass12(endfile,_11724,1,_11734):-call(_11734).
	 * asm_pass12(gethtreg(_11754,_11756),_11758,3,_11768):-call(_11768).
	 * asm_pass12(puthtreg(_11788,_11790),_11792,3,_11802):-call(_11802).
	 * asm_pass12(endfile,_11820,1,_11830):-call(_11830).
	 * asm_pass12(get_ar_cps,_11848,1,_11858):-call(_11858).
	 * asm_pass12(put_ar_cps(_11878),_11880,2,_11890):-call(_11890).
	 * asm_pass12(move_ar_cps(_11910),_11912,2,_11922):-call(_11922).
	 * asm_pass12(jmpn_det_get_ar_cps(_11942),_11944,2,_11954):-call(_11954).
	 * asm_pass12(allocate_susp(_11974),_11976,2,_11986):-call(_11986).
	 * asm_pass12(susp_var_x(_12006),_12008,2,_12018):-call(_12018).
	 * asm_pass12(susp_var_y(_12038),_12040,2,_12050):-call(_12050).
	 * asm_pass12(delay((_12070,_12072),_12078),_12080,3,_12098):-sym_member1(sym(
	 * _12070,_12072,_12088,_12090),_12080,_12098).
	 * asm_pass12(susp_var_delay(_12132,(_12126,_12128),_12136,_12138),_12140,5,
	 * _12158):-sym_member1(sym(_12126,_12128,_12148,_12150),_12140,_12158).
	 * asm_pass12(end_delay,_12184,1,_12194):-call(_12194).
	 * asm_pass12(nondet(_12214),_12216,2,_12226):-call(_12226).
	 * asm_pass12(jmp_susp(_12246),_12248,2,_12258):-call(_12258).
	 * asm_pass12(jmpn_dvar_y(_12278,_12280),_12282,3,_12292):-call(_12292).
	 * asm_pass12(susp_var2_delay(_12318,(_12312,_12314),_12322,_12324),_12326,5,
	 * _12344):-sym_member1(sym(_12312,_12314,_12334,_12336),_12326,_12344).
	 * asm_pass12(domain_set_false_yy(_12372,_12374),_12376,3,_12386):-call(_12386).
	 * asm_pass12(domain_set_false_yx(_12406,_12408),_12410,3,_12420):-call(_12420).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass12_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s193, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint0)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s155, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__4);
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
		if (!((areg0).Unify(F(asm.s173, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var7, var8);
		local_aregs[1] = var6.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__5);
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
		if (!((areg0).Unify(F(asm.s174, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var7, var8);
		local_aregs[1] = var6.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__6);
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
		if (!((areg0).Unify(F(asm.s169, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var6, var7);
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__7);
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
		if (!((areg0).Unify(F(asm.s170, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var6, var7);
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__7(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s185, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__8(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s186, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__9(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__10);
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
		if (!((areg0).Unify(F(asm.s286, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__10(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__11);
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
		if (!((areg0).Unify(F(asm.s287, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__11(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__12);
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
		if (!((areg0).Unify(F(asm.s288, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__12(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__13);
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
		if (!((areg0).Unify(F(asm.s289, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__13(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__14);
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
		if (!((areg0).Unify(F(asm.s290, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__14(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__15);
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
		if (!((areg0).Unify(F(asm.s291, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__15(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__16);
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
		if (!((areg0).Unify(F(asm.s171, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__16(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__17);
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
		if (!((areg0).Unify(F(asm.s172, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__17(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s175, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__18(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s156, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__19(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s157, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__20(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s180, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__21(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s181, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__22(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s178, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__23(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s179, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__24(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s182, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__25(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s158, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__26(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s189, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__27(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s190, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__28(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__29);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s160, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__29(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__30);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s161, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__30(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__31);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s162, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__31(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__32);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s163, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__32(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__33);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s164, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__33(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__34);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s165, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__34(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__35);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s187, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__35(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__36);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s188, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__36(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__37);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s183, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__37(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__38);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s184, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__38(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__39);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s176, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__39(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__40);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s177, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__40(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__41);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s138, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__41(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__42);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s137, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__42(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__43);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s136, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__43(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__44);
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
		if (!((areg0).Unify(F(asm.s135, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__44(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__45);
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
		if (!((areg0).Unify(F(asm.s139, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__45(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__46);
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
		if (!((areg0).Unify(F(asm.s140, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__46(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__47);
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
		if (!((areg0).Unify(F(asm.s143, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__47(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__48);
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
		if (!((areg0).Unify(F(asm.s141, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__48(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__49);
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
		if (!((areg0).Unify(F(asm.s142, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__49(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__50);
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
		if (!((areg0).Unify(F(asm.s144, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__50(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__51);
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
		if (!((areg0).Unify(F(asm.s145, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__51(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__52);
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
		if (!((areg0).Unify(F(asm.s349, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__52(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__53);
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
		if (!((areg0).Unify(F(asm.s350, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__53(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__54);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s345, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__54(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__55);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s346, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__55(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__56);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s347, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__56(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__57);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s348, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__57(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__58);
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
		if (!((areg0).Unify(F(asm.s339, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__58(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__59);
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
		if (!((areg0).Unify(F(asm.s340, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__59(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__60);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s343, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__60(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__61);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s344, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__61(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__62);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s351, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__62(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__63);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s352, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__63(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__64);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s353, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__64(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__65);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s341, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__65(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__66);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s342, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__66(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__67);
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
		if (!((areg0).Unify(F(asm.s121, var1, F(asm.s6, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var6, var7);
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__67(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__68);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s119, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__68(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__69);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s120, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__69(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__70);
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
		if (!((areg0).Unify(F(asm.s117, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__70(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__71);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s118, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__71(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__72);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s122, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__72(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__73);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s123, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__73(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__74);
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
		if (!((areg0).Unify(F(asm.s114, var1, F(asm.s6, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var6, var7);
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__74(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__75);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s112, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__75(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__76);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s113, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__76(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__77);
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
		if (!((areg0).Unify(F(asm.s110, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__77(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__78);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s111, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__78(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__79);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s115, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__79(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__80);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s116, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__80(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__81);
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
		if (!((areg0).Unify(F(asm.s311, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__81(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__82);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s309, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__82(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__83);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s310, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__83(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__84);
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
		if (!((areg0).Unify(F(asm.s307, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__84(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__85);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s308, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__85(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__86);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s312, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__86(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__87);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s313, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__87(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__88);
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
		if (!((areg0).Unify(F(asm.s304, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__88(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__89);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s302, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__89(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__90);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s303, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__90(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__91);
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
		if (!((areg0).Unify(F(asm.s300, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__91(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__92);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s301, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__92(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__93);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s305, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__93(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__94);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s299)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__94(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__95);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s318)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__95(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__96);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s314, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), asm.posint0, var3, var4);
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__96(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__97);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s316, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__97(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__98);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s321, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__98(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__99);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s320, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__99(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__100);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s323, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__100(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__101);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s322, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__101(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__102);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s325, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__102(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__103);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s324, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__103(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__104);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s328, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__104(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__105);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s333, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__105(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__106);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s317)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__106(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__107);
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
		if (!((areg0).Unify(F(asm.s319, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__107(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__108);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s327)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__108(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__109);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s326, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__109(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__110);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s338, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__110(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__111);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s331, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__111(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__112);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s332, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__112(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__113);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s329, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__113(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__114);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s330, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__114(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__115);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s336, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__115(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__116);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s337, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__116(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__117);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s334, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__117(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__118);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s335, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__118(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__119);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s315, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__119(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__120);
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
		if (!((areg0).Unify(F(asm.s209, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__120(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__121);
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
		if (!((areg0).Unify(F(asm.s210, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__121(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__122);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s205, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__122(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__123);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s206, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__123(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__124);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s207, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__124(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__125);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s208, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__125(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__126);
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
		if (!((areg0).Unify(F(asm.s201, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__126(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__127);
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
		if (!((areg0).Unify(F(asm.s202, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), asm.posint0, var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__127(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__128);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s203, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__128(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__129);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s204, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__129(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__130);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s213, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__130(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__131);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s214, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__131(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__132);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s216, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__132(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__133);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s217, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__133(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__134);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s211, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__134(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__135);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s212, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__135(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__136);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s215, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__136(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__137);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s218, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__137(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__138);
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
		if (!((areg0).Unify(F(asm.s220, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__138(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__139);
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
		if (!((areg0).Unify(F(asm.s219, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__139(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__140);
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
		if (!((areg0).Unify(F(asm.s221, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__140(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__141);
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
		if (!((areg0).Unify(F(asm.s222, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__141(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__142);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s33, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__142(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__143);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s232, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__143(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__144);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s195, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__144(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__145);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s196, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__145(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__146);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s86, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__146(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__147);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s27, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__147(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__148);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s28, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__148(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__149);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s280, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__149(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__150);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s281, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__150(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__151);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s223, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__151(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__152);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s94, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__152(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__153);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s149, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__153(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__154);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s198, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__154(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__155);
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
		if (!((areg0).Unify(F(asm.s238, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var4, var5);
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__155(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__156);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s236)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__156(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__157);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s237)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__157(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__158);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s234, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), asm.posint0, var3, var4);
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__158(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__159);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s235, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__159(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__160);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s239, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__160(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__161);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s247, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__161(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__162);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s258, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__162(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__163);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s259, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__163(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__164);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s257)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__164(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__165);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s256, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__165(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__166);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s262, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__166(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__167);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s260, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__167(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__168);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s261, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__168(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__169);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s246, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__169(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__170);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s240, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__170(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__171);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s243, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__171(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__172);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s255, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__172(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__173);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s248, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__173(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__174);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s251, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__174(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__175);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s241, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__175(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__176);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s242, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__176(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__177);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s244, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__177(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__178);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s245, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__178(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__179);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s249, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__179(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__180);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s250, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__180(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__181);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s252, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__181(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__182);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s253, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__182(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__183);
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
		if (!((areg0).Unify(F(asm.s254, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__183(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__184);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s81, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_asm_pass12_call_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__184(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__185);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s83, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__185(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__186);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s103, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_asm_pass12_call_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__186(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__187);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s104, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__187(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__188);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s270)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__188(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__189);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s271)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__189(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__190);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s166, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__190(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__191);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s274, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__191(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__192);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s29, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__192(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__193);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s31, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__193(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__194);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s30, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__194(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__195);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s108, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__195(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__196);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s106)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__196(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__197);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s107)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__197(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__198);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s109, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__198(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__199);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s85)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__199(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__200);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__200(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__201);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s89)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__201(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__202);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s90)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__202(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__203);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s273)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__203(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__204);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s127, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__204(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__205);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s129, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__205(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__206);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s267, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__206(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__207);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s146, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__207(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__208);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s147, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__208(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__209);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s294, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__209(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__210);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s34, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__210(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__211);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s35, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__211(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__212);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s277, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__212(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__213);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s278, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__213(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__214);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s125, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__214(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__215);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s75, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__215(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__216);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s76, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__216(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__217);
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
		if (!((areg0).Unify(F(asm.s77, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__217(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__218);
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
		if (!((areg0).Unify(F(asm.s78, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__218(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__219);
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
		if (!((areg0).Unify(F(asm.s79, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__219(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__220);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s124, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__220(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__221);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s134)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__221(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__222);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s100)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__222(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__223);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s128, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__223(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__224);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s268, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__224(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__225);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s100)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__225(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__226);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s126)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__226(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__227);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s266, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__227(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__228);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s200, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__228(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__229);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s167, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__229(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__230);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s32, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__230(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__231);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s284, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__231(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__232);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s285, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__232(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__233);
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
		if (!((areg0).Unify(F(asm.s92, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var1.Deref(), var2.Deref(), var5, var6);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__233(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__234);
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
		if (!((areg0).Unify(F(asm.s283, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var7, var8);
		local_aregs[1] = var6.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__234(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__235);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(asm.s98)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__235(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__236);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s227, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__236(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__237);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s159, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__237(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__238);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s168, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__238(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__239);
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
		if (!((areg0).Unify(F(asm.s282, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s292, var2.Deref(), var3.Deref(), var7, var8);
		local_aregs[1] = var6.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_member1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__239(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__240);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s97, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_3__240(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s96, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_asm_pass12_call_3 extends Code {

	/*
	 * 
	 * asm_pass12_call(_12438,_12440,_12442,_12458):-isglobal('$asm_bp',0,
	 * b_GET_SYM_TYPE_ccf(_12438,_12440,_12444,:(_12444=\=3,true,_12458))).
	 * asm_pass12_call(_12502,_12504,_12506,_12530):-
	 * :(true,sym_member1(sym(_12502,_12504,_12514,_12516),_12506),_12530).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass12_call_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_call_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__2);
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
		local_aregs[0] = asm.s3;
		local_aregs[1] = asm.posint0;
		local_aregs[2] = F(asm.s74, var1.Deref(), var2.Deref(), var4,
				F(asm.s12, F(asm.s22, var4.Deref(), asm.posint3), asm.s298, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_isglobal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass12_call_3__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s293, F(asm.s292, var1.Deref(), var2.Deref(), var4, var5), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass2_4 extends Code {

	/*
	 * 
	 * asm_pass2(_12556,_12558,_12560,_12562,_12580):-
	 * :(true,asm_rearange_csym(_12560,255,_12570,_12572),asm_symbol(_12572,
	 * asm_pass2a(_12556,_12560,_12562,asm_index(_12558,_12560,_12562,_12580)))).
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
		return (Function<PrologMachine, Function>) exec_pred_asm_pass2_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_4__1(PrologMachine mach) {
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s64, var3.Deref(), asm.posint255, var5, var6);
		local_aregs[2] = F(asm.s65, var6.Deref(), F(asm.s61, var1.Deref(), var3.Deref(), var4.Deref(),
				F(asm.s43, var2.Deref(), var3.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_index_3 extends Code {

	/*
	 * 
	 * asm_index([],_12634,_12636,_12644):- :(true,true,_12644).
	 * asm_index([_12672|_12674],_12676,_12678,_12694):-
	 * :(true,asm_proc_index(_12672,_12676,_12678),asm_index(_12674,_12676,_12678,
	 * _12694)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_index_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_3::exec_pred_asm_index_3__2);
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s62, var1.Deref(), var3.Deref(), var4.Deref());
		local_aregs[2] = F(asm.s43, var2.Deref(), var3.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_proc_index_3 extends Code {

	/*
	 * 
	 * asm_proc_index(pred(_12732,_12734,_12736,_12738),_12740,_12742,_12760):-
	 * :(true,x_or_y(_12734,_12748),asm_lookup_ltab(_12732,_12742,_12750,
	 * asm_lookup_ltab(_12738,_12742,_12752,b_ASPN4_cccc(_12750,_12748,_12736,_12752
	 * ,_12760)))).
	 * asm_proc_index(arglabel(_12820,_12822,_12824),_12826,_12828,_12854):-
	 * :(_12820==c,asm_lookup_ctab(_12822,0,_12826,_12844),asm_lookup_ltab(_12824,
	 * _12828,_12846,writename(_12820,b_ASPN2_cc(_12844,_12846,_12854)))).
	 * asm_proc_index(arglabel(_12906,_12908,_12910),_12912,_12914,_12944):-
	 * :(_12906==s,_12908=(_12924,_12926),asm_lookup_ctab(_12924,_12926,_12912,
	 * _12934,asm_lookup_ltab(_12910,_12914,_12936,writename(_12906,b_ASPN2_cc(
	 * _12934,_12936,_12944))))).
	 * asm_proc_index(arglabel(_13008,_13010,_13012),_13014,_13016,_13032):-
	 * :(true,asm_lookup_ltab(_13012,_13016,_13024),writename(_13008,b_ASPN2_cc(
	 * _13010,_13024,_13032))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_proc_index_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_proc_index_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s263, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var2.Deref(), var7);
		local_aregs[2] = F(asm.s48, var1.Deref(), var6.Deref(), var8, F(asm.s48, var4.Deref(), var6.Deref(), var9,
				F(asm.s71, var8.Deref(), var7.Deref(), var3.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_proc_index_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__3);
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
		if (!((areg0).Unify(F(asm.s36, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s21, var1.Deref(), asm.s80);
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s360, var1.Deref(), F(asm.s69, var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_proc_index_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s36, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s21, var1.Deref(), asm.s272);
		local_aregs[1] = F(asm.s19, var2.Deref(), F(asm.s6, var6, var7));
		local_aregs[2] = F(asm.s46, var6.Deref(), var7.Deref(), var4.Deref(), var8, F(asm.s48, var3.Deref(),
				var5.Deref(), var9, F(asm.s360, var1.Deref(), F(asm.s69, var8.Deref(), var9.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_proc_index_3__4(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s36, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s360, var1.Deref(), F(asm.s69, var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass2a_3 extends Code {

	/*
	 * 
	 * asm_pass2a([],_13072,_13074,_13082):- :(true,true,_13082).
	 * asm_pass2a([_13110|_13112],_13114,_13116,_13132):-
	 * :(true,asm_pass2_inst(_13110,_13114,_13116),asm_pass2a(_13112,_13114,_13116,
	 * _13132)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass2a_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2a_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2a_3::exec_pred_asm_pass2a_3__2);
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2a_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(asm.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s59, var1.Deref(), var3.Deref(), var4.Deref());
		local_aregs[2] = F(asm.s61, var2.Deref(), var3.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass2_inst_3 extends Code {

	/*
	 * 
	 * asm_pass2_inst(label(_13170),_13172,_13174,_13182):- :(true,true,_13182).
	 * asm_pass2_inst(call(_13210),_13212,_13214,_13236):-
	 * :(asm_lookup_ltab(_13210,_13214,_13222),opcode(call_d,_13228),b_ASPN2_cc(
	 * _13228,_13222,_13236)).
	 * asm_pass2_inst(call((_13272,_13274)),_13280,_13282,_13352):-
	 * :(true,(asm_lookup_ctab(_13272,_13274,_13280,_13292)->opcode(call,_13298),
	 * b_ASPN2_cc(_13298,_13292);warning([_13272/_13274,' is called but not
	 * defined'])),_13352). asm_pass2_inst(execute(_13380),_13382,_13384,_13406):-
	 * :(asm_lookup_ltab(_13380,_13384,_13392),opcode(djmp,_13398),b_ASPN2_cc(_13398
	 * ,_13392,_13406)).
	 * asm_pass2_inst(execute((_13442,_13444)),_13450,_13452,_13522):-
	 * :(true,(asm_lookup_ctab(_13442,_13444,_13450,_13462)->opcode(execute,_13468),
	 * b_ASPN2_cc(_13468,_13462);warning([_13442/_13444,' is called but not
	 * defined'])),_13522). asm_pass2_inst(jmp(_13550),_13552,_13554,_13576):-
	 * :(asm_lookup_ltab(_13550,_13554,_13562),opcode(jmp,_13568),b_ASPN2_cc(_13568,
	 * _13562,_13576)). asm_pass2_inst(jmp_susp(_13612),_13614,_13616,_13638):-
	 * :(asm_lookup_ltab(_13612,_13616,_13624),opcode(jmp_susp,_13630),b_ASPN2_cc(
	 * _13630,_13624,_13638)).
	 * asm_pass2_inst(jmpn_eq_struct_x(_13680,(_13674,_13676),_13684,_13686),_13688,
	 * _13690,_13714):-
	 * :(true,asm_lookup_ctab(_13674,_13676,_13688,_13700),asm_lookup_ltab(_13684,
	 * _13690,_13702,asm_lookup_ltab(_13686,_13690,_13704,opcode(jmpn_eq_struct_x,
	 * _13706,b_ASPN4_cccc(_13706,_13680,_13700,_13702,b_ASPN_c(_13704,_13714)))))).
	 * asm_pass2_inst(jmpn_eq_struct_y(_13794,(_13788,_13790),_13798,_13800),_13802,
	 * _13804,_13828):-
	 * :(true,asm_lookup_ctab(_13788,_13790,_13802,_13814),asm_lookup_ltab(_13798,
	 * _13804,_13816,asm_lookup_ltab(_13800,_13804,_13818,opcode(jmpn_eq_struct_y,
	 * _13820,b_ASPN4_cccc(_13820,_13794,_13814,_13816,b_ASPN_c(_13818,_13828)))))).
	 * asm_pass2_inst(jmpn_eq_atom_x(_13902,_13904,_13906,_13908),_13910,_13912,
	 * _13936):-
	 * :(true,asm_lookup_ctab(_13904,0,_13910,_13922),asm_lookup_ltab(_13906,_13912,
	 * _13924,asm_lookup_ltab(_13908,_13912,_13926,opcode(jmpn_eq_atom_x,_13928,
	 * b_ASPN4_cccc(_13928,_13902,_13922,_13924,b_ASPN_c(_13926,_13936)))))).
	 * asm_pass2_inst(jmpn_eq_atom_y(_14010,_14012,_14014,_14016),_14018,_14020,
	 * _14044):-
	 * :(true,asm_lookup_ctab(_14012,0,_14018,_14030),asm_lookup_ltab(_14014,_14020,
	 * _14032,asm_lookup_ltab(_14016,_14020,_14034,opcode(jmpn_eq_atom_y,_14036,
	 * b_ASPN4_cccc(_14036,_14010,_14030,_14032,b_ASPN_c(_14034,_14044)))))).
	 * asm_pass2_inst(jmpn_nil_x(_14118,_14120,_14122),_14124,_14126,_14146):-
	 * :(true,asm_lookup_ltab(_14120,_14126,_14134),asm_lookup_ltab(_14122,_14126,
	 * _14136,opcode(jmpn_nil_x,_14138,b_ASPN4_cccc(_14138,_14118,_14134,_14136,
	 * _14146)))).
	 * asm_pass2_inst(jmpn_nil_y(_14204,_14206,_14208),_14210,_14212,_14232):-
	 * :(true,asm_lookup_ltab(_14206,_14212,_14220),asm_lookup_ltab(_14208,_14212,
	 * _14222,opcode(jmpn_nil_y,_14224,b_ASPN4_cccc(_14224,_14204,_14220,_14222,
	 * _14232)))).
	 * asm_pass2_inst(switch_list_x(_14290,_14292,_14294,_14296),_14298,_14300,
	 * _14322):-
	 * :(true,asm_lookup_ltab(_14292,_14300,_14308),asm_lookup_ltab(_14294,_14300,
	 * _14310,asm_lookup_ltab(_14296,_14300,_14312,opcode(switch_list_x,_14314,
	 * b_ASPN4_cccc(_14314,_14290,_14308,_14310,b_ASPN_c(_14312,_14322)))))).
	 * asm_pass2_inst(switch_list_y(_14396,_14398,_14400,_14402),_14404,_14406,
	 * _14428):-
	 * :(true,asm_lookup_ltab(_14398,_14406,_14414),asm_lookup_ltab(_14400,_14406,
	 * _14416,asm_lookup_ltab(_14402,_14406,_14418,opcode(switch_list_y,_14420,
	 * b_ASPN4_cccc(_14420,_14396,_14414,_14416,b_ASPN_c(_14418,_14428)))))).
	 * asm_pass2_inst(switch_list_yxx(_14502,_14504,_14506,_14508),_14510,_14512,
	 * _14534):-
	 * :(true,asm_lookup_ltab(_14504,_14512,_14520),asm_lookup_ltab(_14506,_14512,
	 * _14522,asm_lookup_ltab(_14508,_14512,_14524,opcode(switch_list_yxx,_14526,
	 * b_ASPN4_cccc(_14526,_14502,_14520,_14522,b_ASPN_c(_14524,_14534)))))).
	 * asm_pass2_inst(switch_list_yxy(_14608,_14610,_14612,_14614),_14616,_14618,
	 * _14640):-
	 * :(true,asm_lookup_ltab(_14610,_14618,_14626),asm_lookup_ltab(_14612,_14618,
	 * _14628,asm_lookup_ltab(_14614,_14618,_14630,opcode(switch_list_yxy,_14632,
	 * b_ASPN4_cccc(_14632,_14608,_14626,_14628,b_ASPN_c(_14630,_14640)))))).
	 * asm_pass2_inst(switch_list_yyx(_14714,_14716,_14718,_14720),_14722,_14724,
	 * _14746):-
	 * :(true,asm_lookup_ltab(_14716,_14724,_14732),asm_lookup_ltab(_14718,_14724,
	 * _14734,asm_lookup_ltab(_14720,_14724,_14736,opcode(switch_list_yyx,_14738,
	 * b_ASPN4_cccc(_14738,_14714,_14732,_14734,b_ASPN_c(_14736,_14746)))))).
	 * asm_pass2_inst(switch_list_yyy(_14820,_14822,_14824,_14826),_14828,_14830,
	 * _14852):-
	 * :(true,asm_lookup_ltab(_14822,_14830,_14838),asm_lookup_ltab(_14824,_14830,
	 * _14840,asm_lookup_ltab(_14826,_14830,_14842,opcode(switch_list_yyy,_14844,
	 * b_ASPN4_cccc(_14844,_14820,_14838,_14840,b_ASPN_c(_14842,_14852)))))).
	 * asm_pass2_inst(jmpn_eq_int_x(_14926,_14928,_14930,_14932),_14934,_14936,
	 * _14956):-
	 * :(true,asm_lookup_ltab(_14930,_14936,_14944),asm_lookup_ltab(_14932,_14936,
	 * _14946,opcode(jmpn_eq_int_x,_14948,b_ASPN4_cccc(_14948,_14926,_14928,_14944,
	 * b_ASPN_c(_14946,_14956))))).
	 * asm_pass2_inst(jmpn_eq_int_y(_15020,_15022,_15024,_15026),_15028,_15030,
	 * _15050):-
	 * :(true,asm_lookup_ltab(_15024,_15030,_15038),asm_lookup_ltab(_15026,_15030,
	 * _15040,opcode(jmpn_eq_int_y,_15042,b_ASPN4_cccc(_15042,_15020,_15022,_15038,
	 * b_ASPN_c(_15040,_15050))))).
	 * asm_pass2_inst(jmpn_eql(_15114,_15116,_15118),_15120,_15122,_15144):-
	 * :(true,asm_lookup_ltab(_15118,_15122,_15130),x_or_y(_15114,_15132,x_or_y(
	 * _15116,_15134,opcode(jmpn_eql,_15136,b_ASPN4_cccc(_15136,_15132,_15134,_15130
	 * ,_15144))))).
	 * asm_pass2_inst(jmp_eql(_15208,_15210,_15212),_15214,_15216,_15238):-
	 * :(true,asm_lookup_ltab(_15212,_15216,_15224),x_or_y(_15208,_15226,x_or_y(
	 * _15210,_15228,opcode(jmp_eql,_15230,b_ASPN4_cccc(_15230,_15226,_15228,_15224,
	 * _15238))))).
	 * asm_pass2_inst(jmp_eql_yy(_15302,_15304,_15306),_15308,_15310,_15328):-
	 * :(true,asm_lookup_ltab(_15306,_15310,_15318),opcode(jmp_eql_yy,_15320,
	 * b_ASPN4_cccc(_15320,_15302,_15304,_15318,_15328))).
	 * asm_pass2_inst(jmpn_gt(_15376,_15378,_15380),_15382,_15384,_15406):-
	 * :(true,asm_lookup_ltab(_15380,_15384,_15392),x_or_y(_15376,_15394,x_or_y(
	 * _15378,_15396,opcode(jmpn_gt,_15398,b_ASPN4_cccc(_15398,_15394,_15396,_15392,
	 * _15406))))).
	 * asm_pass2_inst(jmpn_gt_yy(_15470,_15472,_15474),_15476,_15478,_15496):-
	 * :(true,asm_lookup_ltab(_15474,_15478,_15486),opcode(jmpn_gt_yy,_15488,
	 * b_ASPN4_cccc(_15488,_15470,_15472,_15486,_15496))).
	 * asm_pass2_inst(jmpn_ge(_15544,_15546,_15548),_15550,_15552,_15574):-
	 * :(true,asm_lookup_ltab(_15548,_15552,_15560),x_or_y(_15544,_15562,x_or_y(
	 * _15546,_15564,opcode(jmpn_ge,_15566,b_ASPN4_cccc(_15566,_15562,_15564,_15560,
	 * _15574))))).
	 * asm_pass2_inst(jmpn_ge_yy(_15638,_15640,_15642),_15644,_15646,_15664):-
	 * :(true,asm_lookup_ltab(_15642,_15646,_15654),opcode(jmpn_ge_yy,_15656,
	 * b_ASPN4_cccc(_15656,_15638,_15640,_15654,_15664))).
	 * asm_pass2_inst(jmpn_id(_15712,_15714,_15716),_15718,_15720,_15742):-
	 * :(true,asm_lookup_ltab(_15716,_15720,_15728),x_or_y(_15712,_15730,x_or_y(
	 * _15714,_15732,opcode(jmpn_id,_15734,b_ASPN4_cccc(_15734,_15730,_15732,_15728,
	 * _15742))))).
	 * asm_pass2_inst(jmp_id(_15806,_15808,_15810),_15812,_15814,_15836):-
	 * :(true,asm_lookup_ltab(_15810,_15814,_15822),x_or_y(_15806,_15824,x_or_y(
	 * _15808,_15826,opcode(jmp_id,_15828,b_ASPN4_cccc(_15828,_15824,_15826,_15822,
	 * _15836))))). asm_pass2_inst(jmpn_var_x(_15900,_15902),_15904,_15906,_15924):-
	 * :(true,asm_lookup_ltab(_15902,_15906,_15914),opcode(jmpn_var_x,_15916,
	 * b_ASPN3_ccc(_15916,_15900,_15914,_15924))).
	 * asm_pass2_inst(jmpn_var_y(_15970,_15972),_15974,_15976,_15994):-
	 * :(true,asm_lookup_ltab(_15972,_15976,_15984),opcode(jmpn_var_y,_15986,
	 * b_ASPN3_ccc(_15986,_15970,_15984,_15994))).
	 * asm_pass2_inst(jmp_var_x(_16040,_16042),_16044,_16046,_16064):-
	 * :(true,asm_lookup_ltab(_16042,_16046,_16054),opcode(jmp_var_x,_16056,
	 * b_ASPN3_ccc(_16056,_16040,_16054,_16064))).
	 * asm_pass2_inst(jmp_var_y(_16110,_16112),_16114,_16116,_16134):-
	 * :(true,asm_lookup_ltab(_16112,_16116,_16124),opcode(jmp_var_y,_16126,
	 * b_ASPN3_ccc(_16126,_16110,_16124,_16134))).
	 * asm_pass2_inst(jmpn_atom_x(_16180,_16182),_16184,_16186,_16204):-
	 * :(true,asm_lookup_ltab(_16182,_16186,_16194),opcode(jmpn_atom_x,_16196,
	 * b_ASPN3_ccc(_16196,_16180,_16194,_16204))).
	 * asm_pass2_inst(jmpn_atom_y(_16250,_16252),_16254,_16256,_16274):-
	 * :(true,asm_lookup_ltab(_16252,_16256,_16264),opcode(jmpn_atom_y,_16266,
	 * b_ASPN3_ccc(_16266,_16250,_16264,_16274))).
	 * asm_pass2_inst(jmpn_atomic_x(_16320,_16322),_16324,_16326,_16344):-
	 * :(true,asm_lookup_ltab(_16322,_16326,_16334),opcode(jmpn_atomic_x,_16336,
	 * b_ASPN3_ccc(_16336,_16320,_16334,_16344))).
	 * asm_pass2_inst(jmpn_atomic_y(_16390,_16392),_16394,_16396,_16414):-
	 * :(true,asm_lookup_ltab(_16392,_16396,_16404),opcode(jmpn_atomic_y,_16406,
	 * b_ASPN3_ccc(_16406,_16390,_16404,_16414))).
	 * asm_pass2_inst(jmpn_num_x(_16460,_16462),_16464,_16466,_16484):-
	 * :(true,asm_lookup_ltab(_16462,_16466,_16474),opcode(jmpn_num_x,_16476,
	 * b_ASPN3_ccc(_16476,_16460,_16474,_16484))).
	 * asm_pass2_inst(jmpn_num_y(_16530,_16532),_16534,_16536,_16554):-
	 * :(true,asm_lookup_ltab(_16532,_16536,_16544),opcode(jmpn_num_y,_16546,
	 * b_ASPN3_ccc(_16546,_16530,_16544,_16554))).
	 * asm_pass2_inst(jmpn_float_x(_16600,_16602),_16604,_16606,_16624):-
	 * :(true,asm_lookup_ltab(_16602,_16606,_16614),opcode(jmpn_float_x,_16616,
	 * b_ASPN3_ccc(_16616,_16600,_16614,_16624))).
	 * asm_pass2_inst(jmpn_float_y(_16670,_16672),_16674,_16676,_16694):-
	 * :(true,asm_lookup_ltab(_16672,_16676,_16684),opcode(jmpn_float_y,_16686,
	 * b_ASPN3_ccc(_16686,_16670,_16684,_16694))).
	 * asm_pass2_inst(jmpn_int_x(_16740,_16742),_16744,_16746,_16764):-
	 * :(true,asm_lookup_ltab(_16742,_16746,_16754),opcode(jmpn_int_x,_16756,
	 * b_ASPN3_ccc(_16756,_16740,_16754,_16764))).
	 * asm_pass2_inst(jmpn_int_y(_16810,_16812),_16814,_16816,_16834):-
	 * :(true,asm_lookup_ltab(_16812,_16816,_16824),opcode(jmpn_int_y,_16826,
	 * b_ASPN3_ccc(_16826,_16810,_16824,_16834))).
	 * asm_pass2_inst(hash_jmpn_nil(_16880),_16882,_16884,_16902):-
	 * :(true,asm_lookup_ltab(_16880,_16884,_16892),opcode(hash_jmpn_nil,_16894,
	 * b_ASPN2_cc(_16894,_16892,_16902))).
	 * asm_pass2_inst(hash_jmpn_list(_16946),_16948,_16950,_16968):-
	 * :(true,asm_lookup_ltab(_16946,_16950,_16958),opcode(hash_jmpn_list,_16960,
	 * b_ASPN2_cc(_16960,_16958,_16968))).
	 * asm_pass2_inst(hash_jmpn_int(_17012,_17014),_17016,_17018,_17036):-
	 * :(true,asm_lookup_ltab(_17014,_17018,_17026),opcode(hash_jmpn_int,_17028,
	 * b_ASPN3_ccc(_17028,_17012,_17026,_17036))).
	 * asm_pass2_inst(hash_jmpn_atom(_17082,_17084),_17086,_17088,_17110):-
	 * :(true,asm_lookup_ctab(_17082,0,_17086,_17098),asm_lookup_ltab(_17084,_17088,
	 * _17100,opcode(hash_jmpn_atom,_17102,b_ASPN3_ccc(_17102,_17098,_17100,_17110))
	 * )).
	 * asm_pass2_inst(hash_jmpn_struct((_17166,_17168),_17174),_17176,_17178,_17200)
	 * :-
	 * :(true,asm_lookup_ctab(_17166,_17168,_17176,_17188),asm_lookup_ltab(_17174,
	 * _17178,_17190,opcode(hash_jmpn_struct,_17192,b_ASPN3_ccc(_17192,_17188,_17190
	 * ,_17200)))).
	 * asm_pass2_inst(hash_jmpn_struct_x((_17256,_17258),_17264),_17266,_17268,
	 * _17290):-
	 * :(true,asm_lookup_ctab(_17256,_17258,_17266,_17278),asm_lookup_ltab(_17264,
	 * _17268,_17280,opcode(hash_jmpn_struct_x,_17282,b_ASPN3_ccc(_17282,_17278,
	 * _17280,_17290)))).
	 * asm_pass2_inst(hash_jmpn_struct_y((_17346,_17348),_17354),_17356,_17358,
	 * _17380):-
	 * :(true,asm_lookup_ctab(_17346,_17348,_17356,_17368),asm_lookup_ltab(_17354,
	 * _17358,_17370,opcode(hash_jmpn_struct_y,_17372,b_ASPN3_ccc(_17372,_17368,
	 * _17370,_17380)))).
	 * asm_pass2_inst(hash_jmpn_struct_xx((_17436,_17438),_17444),_17446,_17448,
	 * _17470):-
	 * :(true,asm_lookup_ctab(_17436,_17438,_17446,_17458),asm_lookup_ltab(_17444,
	 * _17448,_17460,opcode(hash_jmpn_struct_xx,_17462,b_ASPN3_ccc(_17462,_17458,
	 * _17460,_17470)))).
	 * asm_pass2_inst(hash_jmpn_struct_xy((_17526,_17528),_17534),_17536,_17538,
	 * _17560):-
	 * :(true,asm_lookup_ctab(_17526,_17528,_17536,_17548),asm_lookup_ltab(_17534,
	 * _17538,_17550,opcode(hash_jmpn_struct_xy,_17552,b_ASPN3_ccc(_17552,_17548,
	 * _17550,_17560)))).
	 * asm_pass2_inst(hash_jmpn_struct_yx((_17616,_17618),_17624),_17626,_17628,
	 * _17650):-
	 * :(true,asm_lookup_ctab(_17616,_17618,_17626,_17638),asm_lookup_ltab(_17624,
	 * _17628,_17640,opcode(hash_jmpn_struct_yx,_17642,b_ASPN3_ccc(_17642,_17638,
	 * _17640,_17650)))).
	 * asm_pass2_inst(hash_jmpn_struct_yy((_17706,_17708),_17714),_17716,_17718,
	 * _17740):-
	 * :(true,asm_lookup_ctab(_17706,_17708,_17716,_17728),asm_lookup_ltab(_17714,
	 * _17718,_17730,opcode(hash_jmpn_struct_yy,_17732,b_ASPN3_ccc(_17732,_17728,
	 * _17730,_17740)))). asm_pass2_inst(jmpn_det(_17796),_17798,_17800,_17818):-
	 * :(true,asm_lookup_ltab(_17796,_17800,_17808),opcode(jmpn_det,_17810,
	 * b_ASPN2_cc(_17810,_17808,_17818))).
	 * asm_pass2_inst(jmpn_det_get_ar_cps(_17862),_17864,_17866,_17884):-
	 * :(true,asm_lookup_ltab(_17862,_17866,_17874),opcode(jmpn_det_get_ar_cps,
	 * _17876,b_ASPN2_cc(_17876,_17874,_17884))).
	 * asm_pass2_inst(save_ht_jmp(_17928,_17930),_17932,_17934,_17954):-
	 * :(true,asm_lookup_ltab(_17928,_17934,_17942),asm_lookup_ltab(_17930,_17934,
	 * _17944,opcode(save_ht_jmp,_17946,b_ASPN3_ccc(_17946,_17942,_17944,_17954)))).
	 * asm_pass2_inst(unify_struct_x(_18016,(_18010,_18012)),_18020,_18022,_18042):-
	 * :(true,asm_lookup_ctab(_18010,_18012,_18020,_18032),opcode(unify_struct_x,
	 * _18034,b_ASPN3_ccc(_18034,_18016,_18032,_18042))).
	 * asm_pass2_inst(unify_struct_y(_18094,(_18088,_18090)),_18098,_18100,_18120):-
	 * :(true,asm_lookup_ctab(_18088,_18090,_18098,_18110),opcode(unify_struct_y,
	 * _18112,b_ASPN3_ccc(_18112,_18094,_18110,_18120))).
	 * asm_pass2_inst(unify0_struct_y(_18172,(_18166,_18168)),_18176,_18178,_18198):
	 * - :(true,asm_lookup_ctab(_18166,_18168,_18176,_18188),opcode(unify0_struct_y,
	 * _18190,b_ASPN3_ccc(_18190,_18172,_18188,_18198))).
	 * asm_pass2_inst(unicut_struct_y(_18250,(_18244,_18246)),_18254,_18256,_18276):
	 * - :(true,asm_lookup_ctab(_18244,_18246,_18254,_18266),opcode(unicut_struct_y,
	 * _18268,b_ASPN3_ccc(_18268,_18250,_18266,_18276))).
	 * asm_pass2_inst(unify_atom_x(_18322,_18324),_18326,_18328,_18348):-
	 * :(true,asm_lookup_ctab(_18324,0,_18326,_18338),opcode(unify_atom_x,_18340,
	 * b_ASPN3_ccc(_18340,_18322,_18338,_18348))).
	 * asm_pass2_inst(unify_atom_y(_18394,_18396),_18398,_18400,_18420):-
	 * :(true,asm_lookup_ctab(_18396,0,_18398,_18410),opcode(unify_atom_y,_18412,
	 * b_ASPN3_ccc(_18412,_18394,_18410,_18420))).
	 * asm_pass2_inst(unify0_atom_y(_18466,_18468),_18470,_18472,_18492):-
	 * :(true,asm_lookup_ctab(_18468,0,_18470,_18482),opcode(unify0_atom_y,_18484,
	 * b_ASPN3_ccc(_18484,_18466,_18482,_18492))).
	 * asm_pass2_inst(unicut_atom_y(_18538,_18540),_18542,_18544,_18564):-
	 * :(true,asm_lookup_ctab(_18540,0,_18542,_18554),opcode(unicut_atom_y,_18556,
	 * b_ASPN3_ccc(_18556,_18538,_18554,_18564))).
	 * asm_pass2_inst(unify_arg_atom(_18610),_18612,_18614,_18634):-
	 * :(true,asm_lookup_ctab(_18610,0,_18612,_18624),opcode(unify_arg_atom,_18626,
	 * b_ASPN2_cc(_18626,_18624,_18634))).
	 * asm_pass2_inst(unify_arg_struct((_18678,_18680)),_18686,_18688,_18708):-
	 * :(true,asm_lookup_ctab(_18678,_18680,_18686,_18698),opcode(unify_arg_struct,
	 * _18700,b_ASPN2_cc(_18700,_18698,_18708))).
	 * asm_pass2_inst(move_struct_x(_18758,(_18752,_18754)),_18762,_18764,_18784):-
	 * :(true,asm_lookup_ctab(_18752,_18754,_18762,_18774),opcode(move_struct_x,
	 * _18776,b_ASPN3_ccc(_18776,_18758,_18774,_18784))).
	 * asm_pass2_inst(move_struct_y(_18836,(_18830,_18832)),_18840,_18842,_18862):-
	 * :(true,asm_lookup_ctab(_18830,_18832,_18840,_18852),opcode(move_struct_y,
	 * _18854,b_ASPN3_ccc(_18854,_18836,_18852,_18862))).
	 * asm_pass2_inst(move_atom_x(_18908,_18910),_18912,_18914,_18934):-
	 * :(true,asm_lookup_ctab(_18910,0,_18912,_18924),opcode(move_atom_x,_18926,
	 * b_ASPN3_ccc(_18926,_18908,_18924,_18934))).
	 * asm_pass2_inst(move_atom_y(_18980,_18982),_18984,_18986,_19006):-
	 * :(true,asm_lookup_ctab(_18982,0,_18984,_18996),opcode(move_atom_y,_18998,
	 * b_ASPN3_ccc(_18998,_18980,_18996,_19006))).
	 * asm_pass2_inst(and(_19052,_19054,_19056),_19058,_19060,_19080):-
	 * :(true,x_or_y(_19052,_19066),x_or_y(_19054,_19068,x_or_y(_19056,_19070,opcode
	 * (and,_19072,b_ASPN4_cccc(_19072,_19066,_19068,_19070,_19080))))).
	 * asm_pass2_inst(or(_19144,_19146,_19148),_19150,_19152,_19172):-
	 * :(true,x_or_y(_19144,_19158),x_or_y(_19146,_19160,x_or_y(_19148,_19162,opcode
	 * (or,_19164,b_ASPN4_cccc(_19164,_19158,_19160,_19162,_19172))))).
	 * asm_pass2_inst(lshiftl(_19236,_19238,_19240),_19242,_19244,_19264):-
	 * :(true,x_or_y(_19236,_19250),x_or_y(_19238,_19252,x_or_y(_19240,_19254,opcode
	 * (lshiftl,_19256,b_ASPN4_cccc(_19256,_19250,_19252,_19254,_19264))))).
	 * asm_pass2_inst(lshiftr(_19328,_19330,_19332),_19334,_19336,_19356):-
	 * :(true,x_or_y(_19328,_19342),x_or_y(_19330,_19344,x_or_y(_19332,_19346,opcode
	 * (lshiftr,_19348,b_ASPN4_cccc(_19348,_19342,_19344,_19346,_19356))))).
	 * asm_pass2_inst(complement(_19420,_19422),_19424,_19426,_19444):-
	 * :(true,x_or_y(_19420,_19432),x_or_y(_19422,_19434,opcode(complement,_19436,
	 * b_ASPN3_ccc(_19436,_19432,_19434,_19444)))).
	 * asm_pass2_inst(add(_19498,_19500,_19502),_19504,_19506,_19526):-
	 * :(true,x_or_y(_19498,_19512),x_or_y(_19500,_19514,x_or_y(_19502,_19516,opcode
	 * (add,_19518,b_ASPN4_cccc(_19518,_19512,_19514,_19516,_19526))))).
	 * asm_pass2_inst(sub(_19590,_19592,_19594),_19596,_19598,_19618):-
	 * :(true,x_or_y(_19590,_19604),x_or_y(_19592,_19606,x_or_y(_19594,_19608,opcode
	 * (sub,_19610,b_ASPN4_cccc(_19610,_19604,_19606,_19608,_19618))))).
	 * asm_pass2_inst(mul(_19682,_19684,_19686),_19688,_19690,_19710):-
	 * :(true,x_or_y(_19682,_19696),x_or_y(_19684,_19698,x_or_y(_19686,_19700,opcode
	 * (mul,_19702,b_ASPN4_cccc(_19702,_19696,_19698,_19700,_19710))))).
	 * asm_pass2_inst(div(_19774,_19776,_19778),_19780,_19782,_19802):-
	 * :(true,x_or_y(_19774,_19788),x_or_y(_19776,_19790,x_or_y(_19778,_19792,opcode
	 * (div,_19794,b_ASPN4_cccc(_19794,_19788,_19790,_19792,_19802))))).
	 * asm_pass2_inst(idiv(_19866,_19868,_19870),_19872,_19874,_19894):-
	 * :(true,x_or_y(_19866,_19880),x_or_y(_19868,_19882,x_or_y(_19870,_19884,opcode
	 * (idiv,_19886,b_ASPN4_cccc(_19886,_19880,_19882,_19884,_19894))))).
	 * asm_pass2_inst(mod(_19958,_19960,_19962),_19964,_19966,_19986):-
	 * :(true,x_or_y(_19958,_19972),x_or_y(_19960,_19974,x_or_y(_19962,_19976,opcode
	 * (mod,_19978,b_ASPN4_cccc(_19978,_19972,_19974,_19976,_19986))))).
	 * asm_pass2_inst(para_struct((_20050,_20052)),_20058,_20060,_20080):-
	 * :(true,asm_lookup_ctab(_20050,_20052,_20058,_20070),opcode(para_struct,_20072
	 * ,b_ASPN2_cc(_20072,_20070,_20080))).
	 * asm_pass2_inst(para_atom(_20124),_20126,_20128,_20148):-
	 * :(true,asm_lookup_ctab(_20124,0,_20126,_20138),opcode(para_atom,_20140,
	 * b_ASPN2_cc(_20140,_20138,_20148))).
	 * asm_pass2_inst(fork(_20192),_20194,_20196,_20214):-
	 * :(true,asm_lookup_ltab(_20192,_20196,_20204),opcode(fork,_20206,b_ASPN2_cc(
	 * _20206,_20204,_20214))).
	 * asm_pass2_inst(fork_unify_struct_y(_20264,(_20258,_20260),_20268),_20270,
	 * _20272,_20292):-
	 * :(true,asm_lookup_ltab(_20268,_20272,_20280),asm_lookup_ctab(_20258,_20260,
	 * _20270,_20282,opcode(fork_unify_struct_y,_20284,b_ASPN4_cccc(_20284,_20264,
	 * _20282,_20280,_20292)))).
	 * asm_pass2_inst(fork_unify_list_y(_20352,_20354),_20356,_20358,_20376):-
	 * :(true,asm_lookup_ltab(_20354,_20358,_20366),opcode(fork_unify_list_y,_20368,
	 * b_ASPN3_ccc(_20368,_20352,_20366,_20376))).
	 * asm_pass2_inst(fork_unify_nil_y(_20422,_20424),_20426,_20428,_20446):-
	 * :(true,asm_lookup_ltab(_20424,_20428,_20436),opcode(fork_unify_nil_y,_20438,
	 * b_ASPN3_ccc(_20438,_20422,_20436,_20446))).
	 * asm_pass2_inst(fork_unify_atom_y(_20492,_20494,_20496),_20498,_20500,_20522):
	 * -
	 * :(true,asm_lookup_ctab(_20494,0,_20498,_20510),asm_lookup_ltab(_20496,_20500,
	 * _20512,opcode(fork_unify_atom_y,_20514,b_ASPN4_cccc(_20514,_20492,_20510,
	 * _20512,_20522)))).
	 * asm_pass2_inst(fork_unify_int_y(_20580,_20582,_20584),_20586,_20588,_20606):-
	 * :(true,asm_lookup_ltab(_20584,_20588,_20596),opcode(fork_unify_int_y,_20598,
	 * b_ASPN4_cccc(_20598,_20580,_20582,_20596,_20606))).
	 * asm_pass2_inst(fork_unify_uy_uy(_20654,_20656,_20658),_20660,_20662,_20680):-
	 * :(true,asm_lookup_ltab(_20658,_20662,_20670),opcode(fork_unify_uy_uy,_20672,
	 * b_ASPN4_cccc(_20672,_20654,_20656,_20670,_20680))).
	 * asm_pass2_inst(fork_unicut_struct_y(_20734,(_20728,_20730),_20738),_20740,
	 * _20742,_20762):-
	 * :(true,asm_lookup_ltab(_20738,_20742,_20750),asm_lookup_ctab(_20728,_20730,
	 * _20740,_20752,opcode(fork_unicut_struct_y,_20754,b_ASPN4_cccc(_20754,_20734,
	 * _20752,_20750,_20762)))).
	 * asm_pass2_inst(fork_unicut_list_y(_20822,_20824),_20826,_20828,_20846):-
	 * :(true,asm_lookup_ltab(_20824,_20828,_20836),opcode(fork_unicut_list_y,_20838
	 * ,b_ASPN3_ccc(_20838,_20822,_20836,_20846))).
	 * asm_pass2_inst(fork_unicut_nil_y(_20892,_20894),_20896,_20898,_20916):-
	 * :(true,asm_lookup_ltab(_20894,_20898,_20906),opcode(fork_unicut_nil_y,_20908,
	 * b_ASPN3_ccc(_20908,_20892,_20906,_20916))).
	 * asm_pass2_inst(fork_unicut_atom_y(_20962,_20964,_20966),_20968,_20970,_20992)
	 * :-
	 * :(true,asm_lookup_ctab(_20964,0,_20968,_20980),asm_lookup_ltab(_20966,_20970,
	 * _20982,opcode(fork_unicut_atom_y,_20984,b_ASPN4_cccc(_20984,_20962,_20980,
	 * _20982,_20992)))).
	 * asm_pass2_inst(fork_unicut_int_y(_21050,_21052,_21054),_21056,_21058,_21076):
	 * -
	 * :(true,asm_lookup_ltab(_21054,_21058,_21066),opcode(fork_unicut_int_y,_21068,
	 * b_ASPN4_cccc(_21068,_21050,_21052,_21066,_21076))).
	 * asm_pass2_inst(fork_unicut_ux_uy(_21124,_21126,_21128),_21130,_21132,_21150):
	 * -
	 * :(true,asm_lookup_ltab(_21128,_21132,_21140),opcode(fork_unicut_ux_uy,_21142,
	 * b_ASPN4_cccc(_21142,_21124,_21126,_21140,_21150))).
	 * asm_pass2_inst(fork_unicut_uy_uy(_21198,_21200,_21202),_21204,_21206,_21224):
	 * -
	 * :(true,asm_lookup_ltab(_21202,_21206,_21214),opcode(fork_unicut_uy_uy,_21216,
	 * b_ASPN4_cccc(_21216,_21198,_21200,_21214,_21224))).
	 * asm_pass2_inst(hash_x(_21272,_21274),_21276,_21278,_21294):-
	 * :(true,opcode(hash_x,_21284),asm_lookup_ltab(_21274,_21278,_21286,
	 * b_ASPN4_cccc(_21284,_21272,0,0,b_ASPN_c(_21286,_21294)))).
	 * asm_pass2_inst(hash_y(_21350,_21352),_21354,_21356,_21372):-
	 * :(true,opcode(hash_y,_21362),asm_lookup_ltab(_21352,_21356,_21364,
	 * b_ASPN4_cccc(_21362,_21350,0,0,b_ASPN_c(_21364,_21372)))).
	 * asm_pass2_inst(callv(_21428),_21430,_21432,_21448):-
	 * :(true,opcode(callv,_21438),x_or_y(_21428,_21440,b_ASPN2_cc(_21438,_21440,
	 * _21448))). asm_pass2_inst(executev(_21492),_21494,_21496,_21512):-
	 * :(true,opcode(executev,_21502),x_or_y(_21492,_21504,b_ASPN2_cc(_21502,_21504,
	 * _21512))).
	 * asm_pass2_inst(functor(_21556,_21558,_21560),_21562,_21564,_21584):-
	 * :(true,opcode(functor,_21570),x_or_y(_21556,_21572,x_or_y(_21558,_21574,
	 * x_or_y(_21560,_21576,b_ASPN4_cccc(_21570,_21572,_21574,_21576,_21584))))).
	 * asm_pass2_inst(func_arity(_21648,_21650),_21652,_21654,_21672):-
	 * :(true,opcode(func_arity,_21660),x_or_y(_21648,_21662,x_or_y(_21650,_21664,
	 * b_ASPN3_ccc(_21660,_21662,_21664,_21672)))).
	 * asm_pass2_inst(arg0(_21726,_21728,_21730),_21732,_21734,_21756):-
	 * :(integer(_21726),opcode(arg0,_21744),x_or_y(_21728,_21746,x_or_y(_21730,
	 * _21748,b_ASPN4_cccc(_21744,_21726,_21746,_21748,_21756)))).
	 * asm_pass2_inst(arg(_21812,_21814,_21816),_21818,_21820,_21840):-
	 * :(true,opcode(arg,_21826),x_or_y(_21812,_21828,x_or_y(_21814,_21830,x_or_y(
	 * _21816,_21832,b_ASPN4_cccc(_21826,_21828,_21830,_21832,_21840))))).
	 * asm_pass2_inst(setarg0(_21904,_21906,_21908),_21910,_21912,_21934):-
	 * :(integer(_21904),opcode(setarg0,_21922),x_or_y(_21906,_21924,x_or_y(_21908,
	 * _21926,b_ASPN4_cccc(_21922,_21904,_21924,_21926,_21934)))).
	 * asm_pass2_inst(setarg(_21990,_21992,_21994),_21996,_21998,_22018):-
	 * :(true,opcode(setarg,_22004),x_or_y(_21990,_22006,x_or_y(_21992,_22008,x_or_y
	 * (_21994,_22010,b_ASPN4_cccc(_22004,_22006,_22008,_22010,_22018))))).
	 * asm_pass2_inst(builtin0(_22082,_22084),_22086,_22088,_22106):-
	 * :(true,asm_lookup_ltab(_22084,_22088,_22096),opcode(builtin0,_22098,
	 * b_ASPN3_ccc(_22098,_22082,_22096,_22106))).
	 * asm_pass2_inst(builtin1(_22152,_22154,_22156),_22158,_22160,_22180):-
	 * :(true,asm_lookup_ltab(_22154,_22160,_22168),opcode(builtin1,_22170,x_or_y(
	 * _22156,_22172,b_ASPN4_cccc(_22170,_22152,_22168,_22172,_22180)))).
	 * asm_pass2_inst(builtin2(_22236,_22238,_22240,_22242),_22244,_22246,_22268):-
	 * :(true,asm_lookup_ltab(_22238,_22246,_22254),opcode(builtin2,_22256,x_or_y(
	 * _22240,_22258,x_or_y(_22242,_22260,b_ASPN4_cccc(_22256,_22236,_22254,_22258,
	 * b_ASPN_c(_22260,_22268)))))).
	 * asm_pass2_inst(builtin3(_22338,_22340,_22342,_22344,_22346),_22348,_22350,
	 * _22374):-
	 * :(true,asm_lookup_ltab(_22340,_22350,_22358),opcode(builtin3,_22360,x_or_y(
	 * _22342,_22362,x_or_y(_22344,_22364,x_or_y(_22346,_22366,b_ASPN4_cccc(_22360,
	 * _22338,_22358,_22362,b_ASPN2_cc(_22364,_22366,_22374))))))).
	 * asm_pass2_inst(builtin4(_22454,_22456,_22458,_22460,_22462,_22464),_22466,
	 * _22468,_22494):-
	 * :(true,asm_lookup_ltab(_22456,_22468,_22476),opcode(builtin4,_22478,x_or_y(
	 * _22458,_22480,x_or_y(_22460,_22482,x_or_y(_22462,_22484,x_or_y(_22464,_22486,
	 * b_ASPN4_cccc(_22478,_22454,_22476,_22480,b_ASPN3_ccc(_22482,_22484,_22486,
	 * _22494)))))))). asm_pass2_inst(getbreg(_22584),_22586,_22588,_22604):-
	 * :(true,opcode(getbreg,_22594),x_or_y(_22584,_22596,b_ASPN2_cc(_22594,_22596,
	 * _22604))). asm_pass2_inst(getpbreg(_22648),_22650,_22652,_22668):-
	 * :(true,opcode(getpbreg,_22658),x_or_y(_22648,_22660,b_ASPN2_cc(_22658,_22660,
	 * _22668))). asm_pass2_inst(putbreg(_22712),_22714,_22716,_22732):-
	 * :(true,opcode(putbreg,_22722),x_or_y(_22712,_22724,b_ASPN2_cc(_22722,_22724,
	 * _22732))).
	 * asm_pass2_inst(gethtreg(y(_22776),y(_22780)),_22788,_22790,_22804):-
	 * :(true,opcode(gethtreg,_22796),b_ASPN3_ccc(_22796,_22776,_22780,_22804)).
	 * asm_pass2_inst(puthtreg(y(_22842),y(_22846)),_22854,_22856,_22870):-
	 * :(true,opcode(puthtreg,_22862),b_ASPN3_ccc(_22862,_22842,_22846,_22870)).
	 * asm_pass2_inst(delay((_22908,_22910),_22916),_22918,_22920,_22942):-
	 * :(true,asm_lookup_ctab(_22908,_22910,_22918,_22930),asm_lookup_ltab(_22916,
	 * _22920,_22932,opcode(delay,_22934,b_ASPN3_ccc(_22934,_22930,_22932,_22942))))
	 * . asm_pass2_inst(susp_var_delay(_23004,(_22998,_23000),_23008,_23010),_23012,
	 * _23014,_23038):-
	 * :(true,asm_lookup_ctab(_22998,_23000,_23012,_23024),asm_lookup_ltab(_23008,
	 * _23014,_23026,asm_lookup_ltab(_23010,_23014,_23028,opcode(susp_var_delay,
	 * _23030,b_ASPN4_cccc(_23030,_23004,_23024,_23026,b_ASPN_c(_23028,_23038)))))).
	 * asm_pass2_inst(jmpn_dvar_y(_23112,_23114),_23116,_23118,_23136):-
	 * :(true,asm_lookup_ltab(_23114,_23118,_23126),opcode(jmpn_dvar_y,_23128,
	 * b_ASPN3_ccc(_23128,_23112,_23126,_23136))).
	 * asm_pass2_inst(susp_var2_delay(_23188,(_23182,_23184),_23192,_23194),_23196,
	 * _23198,_23222):-
	 * :(true,asm_lookup_ctab(_23182,_23184,_23196,_23208),asm_lookup_ltab(_23192,
	 * _23198,_23210,asm_lookup_ltab(_23194,_23198,_23212,opcode(susp_var2_delay,
	 * _23214,b_ASPN4_cccc(_23214,_23188,_23208,_23210,b_ASPN_c(_23212,_23222)))))).
	 * asm_pass2_inst(_23294,_23296,_23298,_23320):-functor(_23294,_23300,_23302,:(
	 * opcode(_23300,_23308),b_ASPN_c(_23308),asm_pass2_inst_op(_23294,0,_23302,
	 * _23320))). asm_pass2_inst(_23366,_23368,_23370,_23400):-
	 * :(true,cmp_error(['error in asm pass2 :',_23366,'is not defined']),_23400).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass2_inst_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s193, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__3);
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
		if (!((areg0).Unify(F(asm.s81, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[1] = F(asm.s231, asm.s82, var5);
		local_aregs[2] = F(asm.s69, var5.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__4);
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
		if (!((areg0).Unify(F(asm.s81, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s15,
				F(asm.s8, F(asm.s46, var1.Deref(), var2.Deref(), var3.Deref(), var5),
						F(asm.s6, F(asm.s231, asm.s81, var6), F(asm.s69, var6.Deref(), var5.Deref()))),
				F(asm.s358, F(asm.s9, F(asm.s10, var1.Deref(), var2.Deref()), F(asm.s9, asm.s1, Const.Nil))));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__5);
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
		if (!((areg0).Unify(F(asm.s103, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[1] = F(asm.s231, asm.s95, var5);
		local_aregs[2] = F(asm.s69, var5.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__6);
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
		if (!((areg0).Unify(F(asm.s103, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s15,
				F(asm.s8, F(asm.s46, var1.Deref(), var2.Deref(), var3.Deref(), var5),
						F(asm.s6, F(asm.s231, asm.s103, var6), F(asm.s69, var6.Deref(), var5.Deref()))),
				F(asm.s358, F(asm.s9, F(asm.s10, var1.Deref(), var2.Deref()), F(asm.s9, asm.s1, Const.Nil))));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__7);
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
		if (!((areg0).Unify(F(asm.s155, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[1] = F(asm.s231, asm.s155, var5);
		local_aregs[2] = F(asm.s69, var5.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__7(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__8);
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
		if (!((areg0).Unify(F(asm.s159, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[1] = F(asm.s231, asm.s159, var5);
		local_aregs[2] = F(asm.s69, var5.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__8(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(asm.s173, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var6.Deref(), var8);
		local_aregs[2] = F(asm.s48, var4.Deref(), var7.Deref(), var9,
				F(asm.s48, var5.Deref(), var7.Deref(), var10, F(asm.s231, asm.s173, var11, F(asm.s71, var11.Deref(),
						var1.Deref(), var8.Deref(), var9.Deref(), F(asm.s72, var10.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__9(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(asm.s174, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var6.Deref(), var8);
		local_aregs[2] = F(asm.s48, var4.Deref(), var7.Deref(), var9,
				F(asm.s48, var5.Deref(), var7.Deref(), var10, F(asm.s231, asm.s174, var11, F(asm.s71, var11.Deref(),
						var1.Deref(), var8.Deref(), var9.Deref(), F(asm.s72, var10.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__10(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s169, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var5.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s169, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__11(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s170, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var5.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s170, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__12(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__13);
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
		if (!((areg0).Unify(F(asm.s185, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7, F(asm.s231, asm.s185, var8,
				F(asm.s71, var8.Deref(), var1.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__13(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__14);
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
		if (!((areg0).Unify(F(asm.s186, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7, F(asm.s231, asm.s186, var8,
				F(asm.s71, var8.Deref(), var1.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__14(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s286, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s286, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__15(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s287, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s287, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__16(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s288, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s288, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__17(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s289, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s289, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__18(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s290, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s290, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__19(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s291, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var3.Deref(), var6.Deref(), var8,
				F(asm.s48, var4.Deref(), var6.Deref(), var9, F(asm.s231, asm.s291, var10, F(asm.s71, var10.Deref(),
						var1.Deref(), var7.Deref(), var8.Deref(), F(asm.s72, var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__20(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s171, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var4.Deref(), var6.Deref(), var8, F(asm.s231, asm.s171, var9, F(asm.s71,
				var9.Deref(), var1.Deref(), var2.Deref(), var7.Deref(), F(asm.s72, var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__21(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s172, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s48, var4.Deref(), var6.Deref(), var8, F(asm.s231, asm.s172, var9, F(asm.s71,
				var9.Deref(), var1.Deref(), var2.Deref(), var7.Deref(), F(asm.s72, var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__22(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s175, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s175, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__23(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s156, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s156, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__24(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__25);
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
		if (!((areg0).Unify(F(asm.s157, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s157, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__25(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s180, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s180, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__26(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__27);
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
		if (!((areg0).Unify(F(asm.s181, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s181, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__27(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s178, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s178, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__28(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__29);
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
		if (!((areg0).Unify(F(asm.s179, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s179, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__29(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__30);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s182, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s182, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__30(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__31);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s158, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s231, asm.s158, var9,
				F(asm.s71, var9.Deref(), var7.Deref(), var8.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__31(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__32);
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
		if (!((areg0).Unify(F(asm.s189, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s189, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__32(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__33);
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
		if (!((areg0).Unify(F(asm.s190, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s190, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__33(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__34);
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
		if (!((areg0).Unify(F(asm.s160, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s160, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__34(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__35);
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
		if (!((areg0).Unify(F(asm.s161, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s161, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__35(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__36);
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
		if (!((areg0).Unify(F(asm.s162, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s162, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__36(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__37);
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
		if (!((areg0).Unify(F(asm.s163, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s163, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__37(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__38);
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
		if (!((areg0).Unify(F(asm.s164, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s164, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__38(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__39);
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
		if (!((areg0).Unify(F(asm.s165, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s165, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__39(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__40);
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
		if (!((areg0).Unify(F(asm.s187, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s187, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__40(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__41);
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
		if (!((areg0).Unify(F(asm.s188, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s188, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__41(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__42);
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
		if (!((areg0).Unify(F(asm.s176, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s176, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__42(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__43);
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
		if (!((areg0).Unify(F(asm.s177, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s177, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__43(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__44);
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
		if (!((areg0).Unify(F(asm.s183, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s183, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__44(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__45);
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
		if (!((areg0).Unify(F(asm.s184, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s184, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__45(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__46);
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
		if (!((areg0).Unify(F(asm.s138, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s138, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__46(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__47);
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
		if (!((areg0).Unify(F(asm.s137, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s137, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__47(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__48);
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
		if (!((areg0).Unify(F(asm.s136, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s136, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__48(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__49);
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
		if (!((areg0).Unify(F(asm.s135, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s48, var2.Deref(), var4.Deref(), var6,
				F(asm.s231, asm.s135, var7, F(asm.s70, var7.Deref(), var5.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__49(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__50);
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
		if (!((areg0).Unify(F(asm.s139, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s139, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__50(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__51);
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
		if (!((areg0).Unify(F(asm.s140, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s140, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__51(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__52);
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
		if (!((areg0).Unify(F(asm.s143, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s143, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__52(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__53);
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
		if (!((areg0).Unify(F(asm.s141, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s141, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__53(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__54);
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
		if (!((areg0).Unify(F(asm.s142, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s142, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__54(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__55);
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
		if (!((areg0).Unify(F(asm.s144, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s144, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__55(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__56);
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
		if (!((areg0).Unify(F(asm.s145, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s145, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__56(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__57);
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
		if (!((areg0).Unify(F(asm.s166, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s166, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__57(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__58);
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
		if (!((areg0).Unify(F(asm.s167, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s167, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__58(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__59);
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
		if (!((areg0).Unify(F(asm.s274, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s48, var2.Deref(), var4.Deref(), var6,
				F(asm.s231, asm.s274, var7, F(asm.s70, var7.Deref(), var5.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__59(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__60);
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
		if (!((areg0).Unify(F(asm.s349, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s349, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__60(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__61);
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
		if (!((areg0).Unify(F(asm.s350, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s350, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__61(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__62);
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
		if (!((areg0).Unify(F(asm.s311, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s311, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__62(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__63);
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
		if (!((areg0).Unify(F(asm.s304, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s304, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__63(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__64);
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
		if (!((areg0).Unify(F(asm.s339, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s339, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__64(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__65);
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
		if (!((areg0).Unify(F(asm.s340, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s340, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__65(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__66);
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
		if (!((areg0).Unify(F(asm.s307, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s307, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__66(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__67);
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
		if (!((areg0).Unify(F(asm.s300, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s300, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__67(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__68);
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
		if (!((areg0).Unify(F(asm.s314, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), asm.posint0, var2.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s314, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__68(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__69);
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
		if (!((areg0).Unify(F(asm.s319, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s319, var6, F(asm.s69, var6.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__69(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__70);
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
		if (!((areg0).Unify(F(asm.s209, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s209, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__70(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__71);
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
		if (!((areg0).Unify(F(asm.s210, var1, F(asm.s6, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s210, var7,
				F(asm.s70, var7.Deref(), var1.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__71(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__72);
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
		if (!((areg0).Unify(F(asm.s201, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s201, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__72(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__73);
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
		if (!((areg0).Unify(F(asm.s202, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s202, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__73(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__74);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s33, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s33, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__74(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__75);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s232, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s232, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__75(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__76);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s195, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s195, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__76(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__77);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s196, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s196, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__77(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__78);
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
		if (!((areg0).Unify(F(asm.s86, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var5);
		local_aregs[2] = F(asm.s362, var2.Deref(), var6,
				F(asm.s231, asm.s86, var7, F(asm.s70, var7.Deref(), var5.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__78(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__79);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s27, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s27, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__79(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__80);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s280, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s280, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__80(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__81);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s223, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s223, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__81(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__82);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s94, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s94, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__82(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__83);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s149, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s149, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__83(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__84);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s198, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s362, var1.Deref(), var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8, F(asm.s231, asm.s198, var9,
				F(asm.s71, var9.Deref(), var6.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__84(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__85);
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
		if (!((areg0).Unify(F(asm.s238, F(asm.s6, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var3.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s238, var6, F(asm.s69, var6.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__85(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__86);
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
		if (!((areg0).Unify(F(asm.s234, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), asm.posint0, var2.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s234, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__86(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__87);
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
		if (!((areg0).Unify(F(asm.s109, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var1.Deref(), var3.Deref(), var4);
		local_aregs[2] = F(asm.s231, asm.s109, var5, F(asm.s69, var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__87(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__88);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s121, var1, F(asm.s6, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var4.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s46, var2.Deref(), var3.Deref(), var5.Deref(), var8, F(asm.s231, asm.s121, var9,
				F(asm.s71, var9.Deref(), var1.Deref(), var8.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__88(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__89);
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
		if (!((areg0).Unify(F(asm.s119, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s119, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__89(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__90);
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
		if (!((areg0).Unify(F(asm.s120, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s120, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__90(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__91);
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
		if (!((areg0).Unify(F(asm.s117, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7, F(asm.s231, asm.s117, var8,
				F(asm.s71, var8.Deref(), var1.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__91(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__92);
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
		if (!((areg0).Unify(F(asm.s118, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s118, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__92(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__93);
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
		if (!((areg0).Unify(F(asm.s123, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s123, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__93(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__94);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s114, var1, F(asm.s6, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var4.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s46, var2.Deref(), var3.Deref(), var5.Deref(), var8, F(asm.s231, asm.s114, var9,
				F(asm.s71, var9.Deref(), var1.Deref(), var8.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__94(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__95);
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
		if (!((areg0).Unify(F(asm.s112, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s112, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__95(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__96);
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
		if (!((areg0).Unify(F(asm.s113, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s113, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__96(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__97);
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
		if (!((areg0).Unify(F(asm.s110, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), asm.posint0, var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7, F(asm.s231, asm.s110, var8,
				F(asm.s71, var8.Deref(), var1.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__97(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__98);
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
		if (!((areg0).Unify(F(asm.s111, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s111, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__98(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__99);
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
		if (!((areg0).Unify(F(asm.s115, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s115, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__99(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__100);
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
		if (!((areg0).Unify(F(asm.s116, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var3.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s116, var7,
				F(asm.s71, var7.Deref(), var1.Deref(), var2.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__100(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__101);
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
		if (!((areg0).Unify(F(asm.s146, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s146, var5);
		local_aregs[2] = F(asm.s48, var2.Deref(), var4.Deref(), var6, F(asm.s71, var5.Deref(), var1.Deref(),
				asm.posint0, asm.posint0, F(asm.s72, var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__101(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__102);
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
		if (!((areg0).Unify(F(asm.s147, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s147, var5);
		local_aregs[2] = F(asm.s48, var2.Deref(), var4.Deref(), var6, F(asm.s71, var5.Deref(), var1.Deref(),
				asm.posint0, asm.posint0, F(asm.s72, var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__102(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__103);
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
		if (!((areg0).Unify(F(asm.s83, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s83, var4);
		local_aregs[2] = F(asm.s362, var1.Deref(), var5, F(asm.s69, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__103(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__104);
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
		if (!((areg0).Unify(F(asm.s104, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s104, var4);
		local_aregs[2] = F(asm.s362, var1.Deref(), var5, F(asm.s69, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__104(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__105);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s125, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s125, var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s362, var3.Deref(), var9,
				F(asm.s71, var6.Deref(), var7.Deref(), var8.Deref(), var9.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__105(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__106);
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
		if (!((areg0).Unify(F(asm.s124, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s124, var5);
		local_aregs[2] = F(asm.s362, var1.Deref(), var6,
				F(asm.s362, var2.Deref(), var7, F(asm.s70, var5.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__106(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__107);
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
		if (!((areg0).Unify(F(asm.s35, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s150, var1.Deref());
		local_aregs[1] = F(asm.s231, asm.s35, var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8,
				F(asm.s71, var6.Deref(), var1.Deref(), var7.Deref(), var8.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__107(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__108);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s34, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s34, var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s362, var3.Deref(), var9,
				F(asm.s71, var6.Deref(), var7.Deref(), var8.Deref(), var9.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__108(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__109);
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
		if (!((areg0).Unify(F(asm.s278, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s150, var1.Deref());
		local_aregs[1] = F(asm.s231, asm.s278, var6);
		local_aregs[2] = F(asm.s362, var2.Deref(), var7, F(asm.s362, var3.Deref(), var8,
				F(asm.s71, var6.Deref(), var1.Deref(), var7.Deref(), var8.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__109(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__110);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s277, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s277, var6);
		local_aregs[2] = F(asm.s362, var1.Deref(), var7, F(asm.s362, var2.Deref(), var8, F(asm.s362, var3.Deref(), var9,
				F(asm.s71, var6.Deref(), var7.Deref(), var8.Deref(), var9.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__110(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__111);
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
		if (!((areg0).Unify(F(asm.s75, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s75, var6, F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__111(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__112);
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
		if (!((areg0).Unify(F(asm.s76, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var5.Deref(), var6);
		local_aregs[2] = F(asm.s231, asm.s76, var7, F(asm.s362, var3.Deref(), var8,
				F(asm.s71, var7.Deref(), var1.Deref(), var6.Deref(), var8.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__112(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__113);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s77, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var6.Deref(), var7);
		local_aregs[2] = F(asm.s231, asm.s77, var8,
				F(asm.s362, var3.Deref(), var9, F(asm.s362, var4.Deref(), var10, F(asm.s71, var8.Deref(), var1.Deref(),
						var7.Deref(), var9.Deref(), F(asm.s72, var10.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__113(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__114);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		if (!((areg0).Unify(F(asm.s78, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var7.Deref(), var8);
		local_aregs[2] = F(asm.s231, asm.s78, var9,
				F(asm.s362, var3.Deref(), var10,
						F(asm.s362, var4.Deref(), var11,
								F(asm.s362, var5.Deref(), var12, F(asm.s71, var9.Deref(), var1.Deref(), var8.Deref(),
										var10.Deref(), F(asm.s69, var11.Deref(), var12.Deref(), continuation))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__114(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__115);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(asm.s79, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var8.Deref(), var9);
		local_aregs[2] = F(asm.s231, asm.s79, var10,
				F(asm.s362, var3.Deref(), var11,
						F(asm.s362, var4.Deref(), var12,
								F(asm.s362, var5.Deref(), var13, F(asm.s362, var6.Deref(), var14, F(asm.s71,
										var10.Deref(), var1.Deref(), var9.Deref(), var11.Deref(),
										F(asm.s70, var12.Deref(), var13.Deref(), var14.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__115(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__116);
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
		if (!((areg0).Unify(F(asm.s127, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s127, var4);
		local_aregs[2] = F(asm.s362, var1.Deref(), var5, F(asm.s69, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__116(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__117);
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
		if (!((areg0).Unify(F(asm.s129, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s129, var4);
		local_aregs[2] = F(asm.s362, var1.Deref(), var5, F(asm.s69, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__117(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__118);
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
		if (!((areg0).Unify(F(asm.s267, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s267, var4);
		local_aregs[2] = F(asm.s362, var1.Deref(), var5, F(asm.s69, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__118(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__119);
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
		if (!((areg0).Unify(F(asm.s128, F(asm.s364, var1), F(asm.s364, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s128, var5);
		local_aregs[2] = F(asm.s70, var5.Deref(), var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__119(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__120);
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
		if (!((areg0).Unify(F(asm.s268, F(asm.s364, var1), F(asm.s364, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s268, var5);
		local_aregs[2] = F(asm.s70, var5.Deref(), var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__120(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__121);
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
		if (!((areg0).Unify(F(asm.s92, F(asm.s6, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var1.Deref(), var2.Deref(), var4.Deref(), var6);
		local_aregs[2] = F(asm.s48, var3.Deref(), var5.Deref(), var7,
				F(asm.s231, asm.s92, var8, F(asm.s70, var8.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__121(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__122);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(asm.s283, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var6.Deref(), var8);
		local_aregs[2] = F(asm.s48, var4.Deref(), var7.Deref(), var9,
				F(asm.s48, var5.Deref(), var7.Deref(), var10, F(asm.s231, asm.s283, var11, F(asm.s71, var11.Deref(),
						var1.Deref(), var8.Deref(), var9.Deref(), F(asm.s72, var10.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__122(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__123);
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
		if (!((areg0).Unify(F(asm.s168, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s48, var2.Deref(), var4.Deref(), var5);
		local_aregs[2] = F(asm.s231, asm.s168, var6,
				F(asm.s70, var6.Deref(), var1.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__123(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__124);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(asm.s282, var1, F(asm.s6, var2, var3), var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s46, var2.Deref(), var3.Deref(), var6.Deref(), var8);
		local_aregs[2] = F(asm.s48, var4.Deref(), var7.Deref(), var9,
				F(asm.s48, var5.Deref(), var7.Deref(), var10, F(asm.s231, asm.s282, var11, F(asm.s71, var11.Deref(),
						var1.Deref(), var8.Deref(), var9.Deref(), F(asm.s72, var10.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__124(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__125);
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
		local_aregs[1] = var4;
		local_aregs[2] = var5;
		local_aregs[3] = F(asm.s12, F(asm.s231, var4.Deref(), var6), F(asm.s72, var6.Deref()),
				F(asm.s60, var1.Deref(), asm.posint0, var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_3__125(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s84, F(asm.s9, asm.s101, F(asm.s9, var1.Deref(), F(asm.s9, asm.s152, Const.Nil))));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_pass2_inst_op_3 extends Code {

	/*
	 * 
	 * asm_pass2_inst_op(_23426,_23428,_23430,_23444):-
	 * :(_23428=:=_23430,true,_23444).
	 * asm_pass2_inst_op(_23470,_23472,_23474,_23496):- :(true,_23484 is
	 * _23472+1,arg(_23484,_23470,_23488,b_ASPN_c(_23488,asm_pass2_inst_op(_23470,
	 * _23484,_23474,_23496)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_pass2_inst_op_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_op_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__2);
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
		local_aregs[0] = F(asm.s20, var2.Deref(), var3.Deref());
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_pass2_inst_op_3__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var4, F(asm.s5, var2.Deref(), asm.posint1));
		local_aregs[2] = F(asm.s34, var4.Deref(), var1.Deref(), var5,
				F(asm.s72, var5.Deref(), F(asm.s60, var1.Deref(), var4.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_magic_1 extends Code {

	/*
	 * 
	 * asm_magic(_23548,_23562):-
	 * :(true,asm_putnum(17,1),asm_putnum(18,1,asm_putnum(19,1,asm_putnum(_23548,1,
	 * _23562)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_magic_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_magic_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s63, asm.posint17, asm.posint1);
		local_aregs[2] = F(asm.s63, asm.posint18, asm.posint1,
				F(asm.s63, asm.posint19, asm.posint1, F(asm.s63, var1.Deref(), asm.posint1, continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_index_inst_2 extends Code {

	/*
	 * 
	 * asm_index_inst(pred(_23610,_23612,_23614,_23616),_23618,_23632):-
	 * :(true,_23618=16,_23632).
	 * asm_index_inst(arglabel(i,_23660,_23662),_23664,_23678):-
	 * :(true,_23664:=9,_23678).
	 * asm_index_inst(arglabel(c,_23706,_23708),_23710,_23724):-
	 * :(true,_23710:=9,_23724).
	 * asm_index_inst(arglabel(s,_23752,_23754),_23756,_23770):-
	 * :(true,_23756:=9,_23770).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_index_inst_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_inst_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s263, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s19, var5.Deref(), asm.posint16);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_inst_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s36, asm.s148, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var3.Deref(), asm.posint9);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_inst_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s36, asm.s80, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var3.Deref(), asm.posint9);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_index_inst_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s36, asm.s272, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s14, var3.Deref(), asm.posint9);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_symbol_1 extends Code {

	/*
	 * 
	 * asm_symbol(_23794,_23806):- :(var(_23794),true,_23806).
	 * asm_symbol([sym(_23830,_23832,_23834,_23836)|_23842],_23856):-
	 * :(true,b_ASPN_c(_23834),asm_putnum(_23832,1,b_GET_LENGTH_cf(_23830,_23848,
	 * asm_putnum(_23848,1,writename(_23830,asm_symbol(_23842,_23856)))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_symbol_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_symbol_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_symbol_1::exec_pred_asm_symbol_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s355, var1.Deref());
		local_aregs[1] = asm.s298;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_symbol_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s9, F(asm.s292, var1, var2, var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s72, var3.Deref());
		local_aregs[2] = F(asm.s63, var2.Deref(), asm.posint1, F(asm.s73, var1.Deref(), var6, F(asm.s63, var6.Deref(),
				asm.posint1, F(asm.s360, var1.Deref(), F(asm.s65, var5.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_putnum_2 extends Code {

	/*
	 * 
	 * asm_putnum(_23914,_23916,_23958):- :(_23916>1,_23932 is
	 * _23914/\255,is(_23942,_23914>>8,is(_23950,_23916-1,asm_putnum(_23942,_23950,
	 * put(_23932,_23958))))). asm_putnum(_24012,_24014,_24026):-
	 * :(true,put(_24012),_24026).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_putnum_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_putnum_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_putnum_2::exec_pred_asm_putnum_2__2);
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
		local_aregs[0] = F(asm.s23, var2.Deref(), asm.posint1);
		local_aregs[1] = F(asm.s151, var3, F(asm.s11, var1.Deref(), asm.posint255));
		local_aregs[2] = F(asm.s151, var4, F(asm.s24, var1.Deref(), asm.posint8),
				F(asm.s151, var5, F(asm.s7, var2.Deref(), asm.posint1),
						F(asm.s63, var4.Deref(), var5.Deref(), F(asm.s265, var3.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_putnum_2__2(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s265, var1.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_mark_eot_0 extends Code {

	/*
	 * 
	 * asm_mark_eot(_24062):-
	 * :(true,opcode(endfile,_24054),b_ASPN2_cc(_24054,0,_24062)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_mark_eot_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_mark_eot_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s231, asm.s100, var1);
		local_aregs[2] = F(asm.s69, var1.Deref(), asm.posint0, continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_sym_member1_2 extends Code {

	/*
	 * 
	 * sym_member1(_24090,_24092,_24144):-
	 * :(sym(_24096,_24098,_24100,_24102)<=_24090,asm_hash_value(_24096,_24114),is(
	 * _24134,(_24114+_24098)mod
	 * 255+1,arg(_24134,_24092,_24136,sym_member1(_24096,_24098,_24090,_24136,_24144
	 * )))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_sym_member1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_sym_member1_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		local_aregs[0] = F(asm.s18, F(asm.s292, var3, var4, var5, var6), var1.Deref());
		local_aregs[1] = F(asm.s42, var3.Deref(), var7);
		local_aregs[2] = F(asm.s151, var8,
				F(asm.s5, F(asm.s198, F(asm.s5, var7.Deref(), var4.Deref()), asm.posint255), asm.posint1),
				F(asm.s34, var8.Deref(), var2.Deref(), var9,
						F(asm.s293, var3.Deref(), var4.Deref(), var1.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_sym_member1_4 extends Code {

	/*
	 * 
	 * sym_member1(_24198,_24200,_24202,_24204,_24226):-
	 * :(var(_24204),next_sym_no(_24212),arg(4,_24202,_24212,:=(_24204,[_24202|
	 * _24218],_24226))).
	 * sym_member1(_24274,_24276,_24288,[sym(_24274,_24276,_24278,_24280)|_24286],
	 * _24312):- :(true,_24288=sym(_24274,_24276,_24278,_24280),_24312).
	 * sym_member1(_24346,_24348,_24350,[_24342|_24344],_24368):-
	 * :(true,sym_member1(_24346,_24348,_24350,_24344),_24368).
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
		return (Function<PrologMachine, Function>) exec_pred_sym_member1_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_sym_member1_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__2);
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s355, var4.Deref());
		local_aregs[1] = F(asm.s225, var5);
		local_aregs[2] = F(asm.s34, asm.posint4, var3.Deref(), var5.Deref(),
				F(asm.s14, var4.Deref(), F(asm.s9, var3.Deref(), var6), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_member1_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__3);
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(asm.s9, F(asm.s292, var1.Deref(), var2.Deref(), var4, var5), var6))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s19, var3.Deref(), F(asm.s292, var1.Deref(), var2.Deref(), var4.Deref(), var5.Deref()));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_member1_4__3(PrologMachine mach) {
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
		if (!((areg3).Unify(F(asm.s9, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s293, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_lab_member1_2 extends Code {

	/*
	 * 
	 * lab_member1(_24396,_24398,_24440):-
	 * :(lab(_24402,_24404)<=_24396,asm_hash_value(_24402,_24416),is(_24430,_24416
	 * mod
	 * 255+1,arg(_24430,_24398,_24432,lab_member1(_24402,_24396,_24432,_24440)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_lab_member1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_lab_member1_2__1(PrologMachine mach) {
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
		local_aregs[0] = F(asm.s18, F(asm.s191, var3, var4), var1.Deref());
		local_aregs[1] = F(asm.s42, var3.Deref(), var5);
		local_aregs[2] = F(asm.s151, var6, F(asm.s5, F(asm.s198, var5.Deref(), asm.posint255), asm.posint1), F(asm.s34,
				var6.Deref(), var2.Deref(), var7, F(asm.s192, var3.Deref(), var1.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_lab_member1_3 extends Code {

	/*
	 * 
	 * lab_member1(_24492,_24494,_24496,_24520):-
	 * :(var(_24496),_24496:=[_24494|_24506],_24520).
	 * lab_member1(_24548,_24558,[lab(_24548,_24550)|_24556],_24578):-
	 * :(true,_24558=lab(_24548,_24550),_24578).
	 * lab_member1(_24610,_24612,[_24606|_24608],_24628):-
	 * :(true,lab_member1(_24610,_24612,_24608),_24628).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_lab_member1_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_lab_member1_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__2);
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
		local_aregs[0] = F(asm.s355, var3.Deref());
		local_aregs[1] = F(asm.s14, var3.Deref(), F(asm.s9, var2.Deref(), var4));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_lab_member1_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__3);
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
		if (!((areg2).Unify(F(asm.s9, F(asm.s191, var1.Deref(), var3), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s19, var2.Deref(), F(asm.s191, var1.Deref(), var3.Deref()));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_lab_member1_3__3(PrologMachine mach) {
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
		if (!((areg2).Unify(F(asm.s9, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s192, var1.Deref(), var2.Deref(), var4.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_lookup_ltab_3 extends Code {

	/*
	 * 
	 * asm_lookup_ltab(_24654,_24656,_24658,_24688):-
	 * :(true,asm_hash_value(_24654,_24664),is(_24678,_24664 mod
	 * 255+1,arg(_24678,_24656,_24680,asm_lookup_ltab1(_24654,_24680,_24658,_24688))
	 * )).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_lookup_ltab_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ltab_3__1(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s42, var1.Deref(), var4);
		local_aregs[2] = F(asm.s151, var5, F(asm.s5, F(asm.s198, var4.Deref(), asm.posint255), asm.posint1), F(asm.s34,
				var5.Deref(), var2.Deref(), var6, F(asm.s49, var1.Deref(), var6.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_lookup_ltab1_3 extends Code {

	/*
	 * 
	 * asm_lookup_ltab1(_24742,_24744,_24746,_24758):- :(var(_24744),fail,_24758).
	 * asm_lookup_ltab1(_24786,[lab(_24786,_24788)|_24794],_24796,_24810):-
	 * :(true,_24796=_24788,_24810).
	 * asm_lookup_ltab1(_24842,[_24838|_24840],_24844,_24860):-
	 * :(true,asm_lookup_ltab1(_24842,_24840,_24844),_24860).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_lookup_ltab1_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ltab1_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__2);
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
		local_aregs[0] = F(asm.s355, var2.Deref());
		local_aregs[1] = asm.s106;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ltab1_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__3);
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
		if (!((areg1).Unify(F(asm.s9, F(asm.s191, var1.Deref(), var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s19, var4.Deref(), var2.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ltab1_3__3(PrologMachine mach) {
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
		if (!((areg1).Unify(F(asm.s9, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s49, var1.Deref(), var3.Deref(), var4.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_lookup_ctab_4 extends Code {

	/*
	 * 
	 * asm_lookup_ctab(_24886,_24888,_24890,_24892,_24928):-
	 * :(true,asm_hash_value(_24886,_24898),is(_24918,(_24898+_24888)mod
	 * 255+1,arg(_24918,_24890,_24920,asm_lookup_ctab1(_24886,_24888,_24920,_24892,
	 * _24928)))).
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
		return (Function<PrologMachine, Function>) exec_pred_asm_lookup_ctab_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ctab_4__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s42, var1.Deref(), var5);
		local_aregs[2] = F(asm.s151, var6,
				F(asm.s5, F(asm.s198, F(asm.s5, var5.Deref(), var2.Deref()), asm.posint255), asm.posint1),
				F(asm.s34, var6.Deref(), var3.Deref(), var7,
						F(asm.s47, var1.Deref(), var2.Deref(), var7.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_lookup_ctab1_4 extends Code {

	/*
	 * 
	 * asm_lookup_ctab1(_24988,_24990,[sym(_24988,_24990,_24992,_24994)|_25000],
	 * _25002,_25016):- :(true,_25002=_24994,_25016).
	 * asm_lookup_ctab1(_25050,_25052,[_25046|_25048],_25054,_25072):-
	 * :(true,asm_lookup_ctab1(_25050,_25052,_25048,_25054),_25072).
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
		return (Function<PrologMachine, Function>) exec_pred_asm_lookup_ctab1_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ctab1_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__2);
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(asm.s9, F(asm.s292, var1.Deref(), var2.Deref(), var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s19, var6.Deref(), var4.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_lookup_ctab1_4__2(PrologMachine mach) {
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
		if (!((areg2).Unify(F(asm.s9, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s47, var1.Deref(), var2.Deref(), var4.Deref(), var5.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_rearange_csym_4 extends Code {

	/*
	 * 
	 * asm_rearange_csym(_25100,_25102,_25104,_25106,_25126):-
	 * :(_25102<1,_25106=_25104,_25126).
	 * asm_rearange_csym(_25154,_25156,_25158,_25160,_25186):-
	 * :(true,arg(_25156,_25154,_25168),asm_merge(_25168,_25158,_25170,is(_25178,
	 * _25156-1,asm_rearange_csym(_25154,_25178,_25170,_25160,_25186)))).
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
		return (Function<PrologMachine, Function>) exec_pred_asm_rearange_csym_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_rearange_csym_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s16, var2.Deref(), asm.posint1);
		local_aregs[1] = F(asm.s19, var4.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_rearange_csym_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s34, var2.Deref(), var1.Deref(), var5);
		local_aregs[2] = F(asm.s52, var5.Deref(), var3.Deref(), var6,
				F(asm.s151, var7, F(asm.s7, var2.Deref(), asm.posint1),
						F(asm.s64, var1.Deref(), var7.Deref(), var6.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_asm_merge_3 extends Code {

	/*
	 * 
	 * asm_merge(_25244,_25246,_25248,_25266):- :(var(_25244),_25248=_25246,_25266).
	 * asm_merge(_25292,_25294,_25296,_25314):- :(var(_25294),_25296=_25292,_25314).
	 * asm_merge(_25340,_25342,_25344,_25402):-
	 * <=([_25348|_25350],_25340,<=([_25354|_25356],_25342,<=(sym(_25360,_25362,
	 * _25364,_25366),_25348,<=(sym(_25370,_25372,_25374,_25376),_25354,:(_25366<
	 * _25376,_25344:=[_25348|_25388],asm_merge(_25350,_25342,_25388,_25402)))))).
	 * asm_merge(_25470,_25472,_25474,_25512):-
	 * <=([_25478|_25480],_25470,:([_25484|_25486]<=_25472,_25474:=[_25484|_25498],
	 * asm_merge(_25470,_25486,_25498,_25512))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_asm_merge_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_asm_merge_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__2);
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
		local_aregs[0] = F(asm.s355, var1.Deref());
		local_aregs[1] = F(asm.s19, var3.Deref(), var2.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_merge_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__3);
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
		local_aregs[0] = F(asm.s355, var2.Deref());
		local_aregs[1] = F(asm.s19, var3.Deref(), var1.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_merge_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var16 = V(mach);
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
		local_aregs[0] = F(asm.s9, var4, var5);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(asm.s18, F(asm.s9, var6, var7), var2.Deref(),
				F(asm.s18, F(asm.s292, var8, var9, var10, var11), var4.Deref(),
						F(asm.s18, F(asm.s292, var12, var13, var14, var15), var6.Deref(),
								F(asm.s12, F(asm.s16, var11.Deref(), var15.Deref()),
										F(asm.s14, var3.Deref(), F(asm.s9, var4.Deref(), var16)),
										F(asm.s52, var5.Deref(), var2.Deref(), var16.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym__c60_system_equals_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_asm_merge_3__4(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(asm.s9, var4, var5);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(asm.s12, F(asm.s18, F(asm.s9, var6, var7), var2.Deref()),
				F(asm.s14, var3.Deref(), F(asm.s9, var6.Deref(), var8)),
				F(asm.s52, var1.Deref(), var7.Deref(), var8.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym__c60_system_equals_2::exec_static;
	}
}

class pred_next_sym_no_1 extends Code {

	/*
	 * 
	 * next_sym_no(_25556,_25580):-
	 * :(true,global_get('$sym_no',0,_25556),is(_25572,_25556+1,global_set('$sym_no'
	 * ,0,_25572,_25580))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_next_sym_no_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_next_sym_no_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s132, asm.s4, asm.posint0, var1.Deref());
		local_aregs[2] = F(asm.s151, var2, F(asm.s5, var1.Deref(), asm.posint1),
				F(asm.s133, asm.s4, asm.posint0, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_x_or_y_2 extends Code {

	/*
	 * 
	 * x_or_y(vx(_25622),_25624,_25644):- :(true,_25624 is _25622<<3,_25644).
	 * x_or_y(x(_25670),_25672,_25698):- :(true,_25672 is _25670<<3+1,_25698).
	 * x_or_y(vy(_25724),_25726,_25752):- :(true,_25726 is _25724<<3\/3,_25752).
	 * x_or_y(y(_25778),_25780,_25806):- :(true,_25780 is _25778<<3\/7,_25806).
	 * x_or_y(_25830,_25832,_25858):- :(true,_25832 is _25830<<2\/2,_25858).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_x_or_y_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_x_or_y_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s356, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var2.Deref(), F(asm.s17, var1.Deref(), asm.posint3));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_x_or_y_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s361, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var2.Deref(), F(asm.s5, F(asm.s17, var1.Deref(), asm.posint3), asm.posint1));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_x_or_y_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s357, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var2.Deref(), F(asm.s26, F(asm.s17, var1.Deref(), asm.posint3), asm.posint3));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_x_or_y_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(asm.s364, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var2.Deref(), F(asm.s26, F(asm.s17, var1.Deref(), asm.posint3), asm.posint7));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_x_or_y_2__5(PrologMachine mach) {
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
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s151, var2.Deref(), F(asm.s26, F(asm.s17, var1.Deref(), asm.posint2), asm.posint2));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_opcode_2 extends Code {

	/*
	 * 
	 * opcode(noop,0,_25924):-call(_25924). opcode(jmp,1,_25948):-call(_25948).
	 * opcode(djmp,2,_25972):-call(_25972).
	 * opcode(jmpn_eq_struct_x,3,_25996):-call(_25996).
	 * opcode(jmpn_eq_struct_y,4,_26020):-call(_26020).
	 * opcode(jmpn_eq_atom_x,5,_26044):-call(_26044).
	 * opcode(jmpn_eq_atom_y,6,_26068):-call(_26068).
	 * opcode(jmpn_nil_x,7,_26092):-call(_26092).
	 * opcode(jmpn_nil_y,8,_26116):-call(_26116).
	 * opcode(switch_list_x,9,_26140):-call(_26140).
	 * opcode(switch_list_y,10,_26164):-call(_26164).
	 * opcode(switch_list_yxx,11,_26188):-call(_26188).
	 * opcode(switch_list_yxy,12,_26212):-call(_26212).
	 * opcode(switch_list_yyx,13,_26236):-call(_26236).
	 * opcode(switch_list_yyy,14,_26260):-call(_26260).
	 * opcode(jmpn_eq_int_x,15,_26284):-call(_26284).
	 * opcode(jmpn_eq_int_y,16,_26308):-call(_26308).
	 * opcode(jmpn_eql,17,_26332):-call(_26332).
	 * opcode(jmp_eql,18,_26356):-call(_26356).
	 * opcode(jmp_eql_yy,19,_26380):-call(_26380).
	 * opcode(jmpn_gt,20,_26404):-call(_26404).
	 * opcode(jmpn_gt_yy,21,_26428):-call(_26428).
	 * opcode(jmpn_ge,22,_26452):-call(_26452).
	 * opcode(jmpn_ge_yy,23,_26476):-call(_26476).
	 * opcode(jmpn_id,24,_26500):-call(_26500).
	 * opcode(jmp_id,25,_26524):-call(_26524).
	 * opcode(jmpn_var_x,26,_26548):-call(_26548).
	 * opcode(jmpn_var_y,27,_26572):-call(_26572).
	 * opcode(jmp_var_x,28,_26596):-call(_26596).
	 * opcode(jmp_var_y,29,_26620):-call(_26620).
	 * opcode(jmpn_atom_x,30,_26644):-call(_26644).
	 * opcode(jmpn_atom_y,31,_26668):-call(_26668).
	 * opcode(jmpn_atomic_x,32,_26692):-call(_26692).
	 * opcode(jmpn_atomic_y,33,_26716):-call(_26716).
	 * opcode(jmpn_num_x,34,_26740):-call(_26740).
	 * opcode(jmpn_num_y,35,_26764):-call(_26764).
	 * opcode(jmpn_float_x,36,_26788):-call(_26788).
	 * opcode(jmpn_float_y,37,_26812):-call(_26812).
	 * opcode(jmpn_int_x,38,_26836):-call(_26836).
	 * opcode(jmpn_int_y,39,_26860):-call(_26860).
	 * opcode(hash_jmpn_nil,40,_26884):-call(_26884).
	 * opcode(hash_jmpn_list,41,_26908):-call(_26908).
	 * opcode(hash_jmpn_int,42,_26932):-call(_26932).
	 * opcode(hash_jmpn_atom,43,_26956):-call(_26956).
	 * opcode(hash_jmpn_struct,44,_26980):-call(_26980).
	 * opcode(hash_jmpn_struct_x,45,_27004):-call(_27004).
	 * opcode(hash_jmpn_struct_y,46,_27028):-call(_27028).
	 * opcode(hash_jmpn_struct_xx,47,_27052):-call(_27052).
	 * opcode(hash_jmpn_struct_xy,48,_27076):-call(_27076).
	 * opcode(hash_jmpn_struct_yx,49,_27100):-call(_27100).
	 * opcode(hash_jmpn_struct_yy,50,_27124):-call(_27124).
	 * opcode(unify_struct_x,51,_27148):-call(_27148).
	 * opcode(unify_struct_y,52,_27172):-call(_27172).
	 * opcode(unify_list_x,53,_27196):-call(_27196).
	 * opcode(unify_list_y,54,_27220):-call(_27220).
	 * opcode(unify_nil_x,55,_27244):-call(_27244).
	 * opcode(unify_nil_y,56,_27268):-call(_27268).
	 * opcode(unify_atom_x,57,_27292):-call(_27292).
	 * opcode(unify_int_x,58,_27316):-call(_27316).
	 * opcode(unify_atom_y,59,_27340):-call(_27340).
	 * opcode(unify_int_y,60,_27364):-call(_27364).
	 * opcode(unify_ux_ux,61,_27388):-call(_27388).
	 * opcode(unify_ux_uy,62,_27412):-call(_27412).
	 * opcode(unify_uy_uy,63,_27436):-call(_27436).
	 * opcode(unify_cons_x,64,_27460):-call(_27460).
	 * opcode(unify_cons_y,65,_27484):-call(_27484).
	 * opcode(fork_unify_struct_y,66,_27508):-call(_27508).
	 * opcode(fork_unify_list_y,67,_27532):-call(_27532).
	 * opcode(fork_unify_nil_y,68,_27556):-call(_27556).
	 * opcode(fork_unify_atom_y,69,_27580):-call(_27580).
	 * opcode(fork_unify_int_y,70,_27604):-call(_27604).
	 * opcode(fork_unify_uy_uy,71,_27628):-call(_27628).
	 * opcode(fork_unicut_struct_y,72,_27652):-call(_27652).
	 * opcode(fork_unicut_list_y,73,_27676):-call(_27676).
	 * opcode(fork_unicut_nil_y,74,_27700):-call(_27700).
	 * opcode(fork_unicut_atom_y,75,_27724):-call(_27724).
	 * opcode(fork_unicut_int_y,76,_27748):-call(_27748).
	 * opcode(fork_unicut_uy_uy,77,_27772):-call(_27772).
	 * opcode(unify0_struct_y,78,_27796):-call(_27796).
	 * opcode(unify0_list_y,79,_27820):-call(_27820).
	 * opcode(unify0_nil_y,80,_27844):-call(_27844).
	 * opcode(unify0_atom_y,81,_27868):-call(_27868).
	 * opcode(unify0_int_y,82,_27892):-call(_27892).
	 * opcode(unify0_uy_uy,83,_27916):-call(_27916).
	 * opcode(unicut_struct_y,84,_27940):-call(_27940).
	 * opcode(unicut_list_y,85,_27964):-call(_27964).
	 * opcode(unicut_nil_y,86,_27988):-call(_27988).
	 * opcode(unicut_atom_y,87,_28012):-call(_28012).
	 * opcode(unicut_int_y,88,_28036):-call(_28036).
	 * opcode(unicut_uy_uy,89,_28060):-call(_28060).
	 * opcode(unicut,90,_28084):-call(_28084).
	 * opcode(unify_arg_nil,91,_28108):-call(_28108).
	 * opcode(unify_arg_atom,92,_28132):-call(_28132).
	 * opcode(unify_arg_int,93,_28156):-call(_28156).
	 * opcode(unify_arg_ux_ux,94,_28180):-call(_28180).
	 * opcode(unify_arg_ux,95,_28204):-call(_28204).
	 * opcode(unify_arg_ux_vx,96,_28228):-call(_28228).
	 * opcode(unify_arg_ux_vy,97,_28252):-call(_28252).
	 * opcode(unify_arg_uy_uy,98,_28276):-call(_28276).
	 * opcode(unify_arg_uy,99,_28300):-call(_28300).
	 * opcode(unify_arg_wy,100,_28324):-call(_28324).
	 * opcode(unify_arg_vx_vx,101,_28348):-call(_28348).
	 * opcode(unify_arg_vx,102,_28372):-call(_28372).
	 * opcode(unify_arg_vy_vy,103,_28396):-call(_28396).
	 * opcode(unify_arg_vy,104,_28420):-call(_28420).
	 * opcode(unify_arg_list,105,_28444):-call(_28444).
	 * opcode(unify_arg_struct,106,_28468):-call(_28468).
	 * opcode(unify_arg_void_one,107,_28492):-call(_28492).
	 * opcode(unify_arg_void,108,_28516):-call(_28516).
	 * opcode(unify_arg_vx_vy,109,_28540):-call(_28540).
	 * opcode(unify_arg_vx_ux,110,_28564):-call(_28564).
	 * opcode(unify_arg_vx_uy,111,_28588):-call(_28588).
	 * opcode(unify_arg_vy_vx,112,_28612):-call(_28612).
	 * opcode(unify_arg_vy_ux,113,_28636):-call(_28636).
	 * opcode(unify_arg_vy_uy,114,_28660):-call(_28660).
	 * opcode(unify_arg_iii,115,_28684):-call(_28684).
	 * opcode(move_struct_x,116,_28708):-call(_28708).
	 * opcode(move_struct_y,117,_28732):-call(_28732).
	 * opcode(move_list_x,118,_28756):-call(_28756).
	 * opcode(move_list_y,119,_28780):-call(_28780).
	 * opcode(move_nil_x,120,_28804):-call(_28804).
	 * opcode(move_nil_y,121,_28828):-call(_28828).
	 * opcode(move_atom_x,122,_28852):-call(_28852).
	 * opcode(move_int_x,123,_28876):-call(_28876).
	 * opcode(move_atom_y,124,_28900):-call(_28900).
	 * opcode(move_int_y,125,_28924):-call(_28924).
	 * opcode(move_x_ux,126,_28948):-call(_28948).
	 * opcode(move_x_uy,127,_28972):-call(_28972).
	 * opcode(move_y_ux,128,_28996):-call(_28996).
	 * opcode(move_yy_yy_yy,129,_29020):-call(_29020).
	 * opcode(move_yy_yy,130,_29044):-call(_29044).
	 * opcode(move_y_uy,131,_29068):-call(_29068).
	 * opcode(move_vx,132,_29092):-call(_29092).
	 * opcode(move_vy,133,_29116):-call(_29116).
	 * opcode(move_x_wy,134,_29140):-call(_29140).
	 * opcode(move_yy_yw,135,_29164):-call(_29164).
	 * opcode(move_y_wy,136,_29188):-call(_29188).
	 * opcode(move_yw_yy,137,_29212):-call(_29212).
	 * opcode(and,138,_29236):-call(_29236). opcode(or,139,_29260):-call(_29260).
	 * opcode(lshiftl,140,_29284):-call(_29284).
	 * opcode(lshiftr,141,_29308):-call(_29308).
	 * opcode(complement,142,_29332):-call(_29332).
	 * opcode(add,143,_29356):-call(_29356).
	 * opcode(add1_y,144,_29380):-call(_29380).
	 * opcode(sub,145,_29404):-call(_29404).
	 * opcode(sub1_y,146,_29428):-call(_29428).
	 * opcode(mul,147,_29452):-call(_29452). opcode(div,148,_29476):-call(_29476).
	 * opcode(idiv,149,_29500):-call(_29500). opcode(mod,150,_29524):-call(_29524).
	 * opcode(para_struct,151,_29548):-call(_29548).
	 * opcode(para_list,152,_29572):-call(_29572).
	 * opcode(para_nil,153,_29596):-call(_29596).
	 * opcode(para_atom,154,_29620):-call(_29620).
	 * opcode(para_int,155,_29644):-call(_29644).
	 * opcode(para_ux_ux_ux,156,_29668):-call(_29668).
	 * opcode(para_ux_ux,157,_29692):-call(_29692).
	 * opcode(para_ux,158,_29716):-call(_29716).
	 * opcode(para_uy_uy_uy_uy,159,_29740):-call(_29740).
	 * opcode(para_uy_uy_uy,160,_29764):-call(_29764).
	 * opcode(para_uy_uy,161,_29788):-call(_29788).
	 * opcode(para_uy,162,_29812):-call(_29812).
	 * opcode(para_vx,163,_29836):-call(_29836).
	 * opcode(para_vy_vy,164,_29860):-call(_29860).
	 * opcode(para_vy,165,_29884):-call(_29884).
	 * opcode(para_void_one,166,_29908):-call(_29908).
	 * opcode(para_void,167,_29932):-call(_29932).
	 * opcode(para_vy_ux,168,_29956):-call(_29956).
	 * opcode(para_vy_uy,169,_29980):-call(_29980).
	 * opcode(para_ux_vy,170,_30004):-call(_30004).
	 * opcode(para_ux_ux_uy,171,_30028):-call(_30028).
	 * opcode(para_ux_uy,172,_30052):-call(_30052).
	 * opcode(para_ux_uy_uy,173,_30076):-call(_30076).
	 * opcode(para_uy_vy,174,_30100):-call(_30100).
	 * opcode(para_ux_uy_ux,175,_30124):-call(_30124).
	 * opcode(para_uy_ux,176,_30148):-call(_30148).
	 * opcode(para_uy_ux_ux,177,_30172):-call(_30172).
	 * opcode(para_uy_ux_uy,178,_30196):-call(_30196).
	 * opcode(para_uy_uy_ux,179,_30220):-call(_30220).
	 * opcode(call,180,_30244):-call(_30244).
	 * opcode(call_d,181,_30268):-call(_30268).
	 * opcode(callv,182,_30292):-call(_30292).
	 * opcode(execute,183,_30316):-call(_30316).
	 * opcode(executev,184,_30340):-call(_30340).
	 * opcode(return_a,185,_30364):-call(_30364).
	 * opcode(return_b,186,_30388):-call(_30388).
	 * opcode(jmpn_det,187,_30412):-call(_30412).
	 * opcode(save_ht_jmp,188,_30436):-call(_30436).
	 * opcode(allocate_flat,189,_30460):-call(_30460).
	 * opcode(allocate_nonflat,190,_30484):-call(_30484).
	 * opcode(allocate_nondet,191,_30508):-call(_30508).
	 * opcode(fail,192,_30532):-call(_30532).
	 * opcode(fail0,193,_30556):-call(_30556).
	 * opcode(fork,194,_30580):-call(_30580).
	 * opcode(commit,195,_30604):-call(_30604).
	 * opcode(cut,196,_30628):-call(_30628).
	 * opcode(cut_fail,197,_30652):-call(_30652).
	 * opcode(cut_return,198,_30676):-call(_30676).
	 * opcode(save_b,199,_30700):-call(_30700).
	 * opcode(getbreg,200,_30724):-call(_30724).
	 * opcode(putbreg,201,_30748):-call(_30748).
	 * opcode(getpbreg,202,_30772):-call(_30772).
	 * opcode(hash_x,203,_30796):-call(_30796).
	 * opcode(hash_y,204,_30820):-call(_30820).
	 * opcode(arg,205,_30844):-call(_30844). opcode(arg0,206,_30868):-call(_30868).
	 * opcode(setarg,207,_30892):-call(_30892).
	 * opcode(setarg0,208,_30916):-call(_30916).
	 * opcode(functor,209,_30940):-call(_30940).
	 * opcode(func_arity,210,_30964):-call(_30964).
	 * opcode(get_ar_cps,211,_30988):-call(_30988).
	 * opcode(put_ar_cps,212,_31012):-call(_31012).
	 * opcode(move_ar_cps,213,_31036):-call(_31036).
	 * opcode(jmpn_det_get_ar_cps,214,_31060):-call(_31060).
	 * opcode(builtin0,215,_31084):-call(_31084).
	 * opcode(builtin1,216,_31108):-call(_31108).
	 * opcode(builtin2,217,_31132):-call(_31132).
	 * opcode(builtin3,218,_31156):-call(_31156).
	 * opcode(builtin4,219,_31180):-call(_31180).
	 * opcode(allocate_susp,220,_31204):-call(_31204).
	 * opcode(susp_var_x,221,_31228):-call(_31228).
	 * opcode(susp_var_y,222,_31252):-call(_31252).
	 * opcode(delay,223,_31276):-call(_31276).
	 * opcode(susp_var_delay,224,_31300):-call(_31300).
	 * opcode(end_delay,225,_31324):-call(_31324).
	 * opcode(nondet,226,_31348):-call(_31348).
	 * opcode(jmp_susp,227,_31372):-call(_31372).
	 * opcode(jmpn_dvar_y,228,_31396):-call(_31396).
	 * opcode(susp_var2_delay,229,_31420):-call(_31420).
	 * opcode(domain_set_false_yy,230,_31444):-call(_31444).
	 * opcode(domain_set_false_yx,231,_31468):-call(_31468).
	 * opcode(halt,232,_31492):-call(_31492).
	 * opcode(endfile,233,_31516):-call(_31516).
	 * opcode(tabsize,234,_31540):-call(_31540).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_opcode_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s228)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint0)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s155)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s95)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s173)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s174)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s169)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s170)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s185)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s186)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s286)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s287)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint10)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s288)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint11)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__13(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s289)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint12)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__14(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s290)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint13)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__15(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s291)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint14)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__16(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s171)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint15)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__17(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s172)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint16)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__18(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s175)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint17)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__19(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s156)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint18)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__20(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s157)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint19)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__21(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s180)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint20)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__22(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s181)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint21)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__23(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s178)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint22)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__24(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s179)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint23)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__25(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s182)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__26(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s158)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__27(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s189)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint26)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__28(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__29);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s190)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint27)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__29(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__30);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s160)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint28)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__30(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__31);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s161)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint29)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__31(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__32);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s162)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint30)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__32(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__33);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s163)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint31)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__33(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__34);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s164)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint32)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__34(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__35);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s165)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint33)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__35(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__36);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s187)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint34)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__36(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__37);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s188)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint35)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__37(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__38);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s176)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint36)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__38(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__39);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s177)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint37)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__39(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__40);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s183)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint38)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__40(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__41);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s184)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint39)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__41(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__42);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s138)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__42(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__43);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s137)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint41)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__43(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__44);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s136)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__44(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__45);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s135)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint43)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__45(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__46);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s139)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint44)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__46(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__47);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s140)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint45)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__47(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__48);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s143)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint46)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__48(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__49);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s141)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint47)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__49(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__50);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s142)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint48)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__50(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__51);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s144)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint49)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__51(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__52);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s145)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint50)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__52(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__53);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s349)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint51)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__53(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__54);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s350)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint52)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__54(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__55);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s345)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint53)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__55(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__56);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s346)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint54)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__56(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__57);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s347)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint55)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__57(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__58);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s348)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint56)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__58(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__59);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s339)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint57)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__59(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__60);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s343)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint58)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__60(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__61);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s340)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint59)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__61(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__62);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s344)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint60)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__62(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__63);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s351)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint61)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__63(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__64);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s352)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint62)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__64(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__65);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s353)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint63)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__65(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__66);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s341)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint64)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__66(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__67);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s342)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint65)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__67(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__68);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s121)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint66)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__68(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__69);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s119)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint67)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__69(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__70);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s120)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint68)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__70(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__71);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s117)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint69)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__71(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__72);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s118)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint70)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__72(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__73);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s123)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint71)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__73(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__74);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s114)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint72)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__74(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__75);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s112)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint73)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__75(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__76);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s113)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint74)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__76(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__77);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s110)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint75)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__77(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__78);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s111)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint76)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__78(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__79);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s116)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint77)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__79(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__80);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s311)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint78)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__80(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__81);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s309)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint79)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__81(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__82);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s310)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint80)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__82(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__83);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s307)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint81)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__83(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__84);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s308)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint82)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__84(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__85);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s313)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint83)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__85(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__86);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s304)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint84)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__86(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__87);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s302)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint85)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__87(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__88);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s303)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint86)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__88(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__89);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s300)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint87)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__89(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__90);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s301)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint88)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__90(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__91);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s305)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint89)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__91(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__92);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s299)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint90)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__92(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__93);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s318)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint91)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__93(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__94);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s314)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint92)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__94(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__95);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s316)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint93)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__95(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__96);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s321)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint94)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__96(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__97);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s320)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint95)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__97(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__98);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s322)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint96)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__98(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__99);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s323)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint97)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__99(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__100);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s325)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint98)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__100(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__101);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s324)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint99)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__101(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__102);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s338)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint100)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__102(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__103);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s331)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint101)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__103(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__104);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s328)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint102)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__104(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__105);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s337)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint103)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__105(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__106);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s333)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint104)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__106(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__107);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s317)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint105)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__107(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__108);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s319)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint106)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__108(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__109);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s327)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint107)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__109(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__110);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s326)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint108)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__110(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__111);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s332)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint109)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__111(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__112);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s329)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint110)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__112(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__113);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s330)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint111)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__113(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__114);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s336)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint112)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__114(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__115);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s334)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint113)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__115(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__116);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s335)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint114)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__116(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__117);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s315)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint115)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__117(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__118);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s209)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint116)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__118(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__119);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s210)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint117)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__119(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__120);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s205)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint118)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__120(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__121);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s206)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint119)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__121(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__122);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s207)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint120)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__122(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__123);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s208)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint121)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__123(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__124);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s201)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint122)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__124(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__125);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s203)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint123)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__125(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__126);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s202)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint124)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__126(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__127);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s204)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint125)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__127(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__128);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s213)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint126)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__128(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__129);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s214)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint127)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__129(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__130);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s216)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint128)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__130(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__131);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s222)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint129)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__131(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__132);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s221)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint130)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__132(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__133);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s217)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint131)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__133(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__134);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s211)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint132)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__134(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__135);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s212)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint133)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__135(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__136);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s215)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint134)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__136(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__137);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s220)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint135)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__137(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__138);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s218)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint136)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__138(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__139);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s219)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint137)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__139(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__140);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s33)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint138)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__140(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__141);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s232)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint139)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__141(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__142);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s195)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint140)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__142(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__143);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s196)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint141)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__143(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__144);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s86)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint142)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__144(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__145);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s27)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint143)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__145(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__146);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s28)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint144)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__146(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__147);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s280)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint145)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__147(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__148);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s281)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint146)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__148(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__149);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s223)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint147)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__149(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__150);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s94)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint148)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__150(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__151);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s149)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint149)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__151(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__152);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s198)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint150)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__152(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__153);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s238)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint151)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__153(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__154);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s236)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint152)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__154(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__155);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s237)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint153)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__155(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__156);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s234)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint154)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__156(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__157);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s235)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint155)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__157(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__158);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s241)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint156)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__158(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__159);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s240)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint157)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__159(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__160);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s239)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint158)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__160(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__161);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s254)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint159)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__161(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__162);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s253)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint160)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__162(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__163);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s251)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint161)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__163(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__164);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s247)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint162)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__164(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__165);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s258)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint163)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__165(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__166);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s262)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint164)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__166(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__167);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s259)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint165)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__167(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__168);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s257)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint166)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__168(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__169);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s256)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint167)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__169(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__170);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s260)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint168)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__170(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__171);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s261)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint169)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__171(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__172);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s246)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint170)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__172(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__173);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s242)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint171)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__173(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__174);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s243)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint172)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__174(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__175);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s245)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint173)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__175(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__176);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s255)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint174)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__176(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__177);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s244)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint175)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__177(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__178);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s248)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint176)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__178(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__179);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s249)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint177)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__179(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__180);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s250)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint178)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__180(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__181);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s252)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint179)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__181(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__182);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s81)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint180)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__182(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__183);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s82)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint181)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__183(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__184);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s83)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint182)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__184(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__185);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s103)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint183)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__185(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__186);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s104)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint184)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__186(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__187);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s270)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint185)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__187(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__188);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s271)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint186)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__188(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__189);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s166)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint187)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__189(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__190);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s274)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint188)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__190(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__191);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint189)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__191(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__192);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s31)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint190)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__192(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__193);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s30)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint191)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__193(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__194);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s106)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint192)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__194(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__195);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s107)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint193)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__195(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__196);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s109)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint194)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__196(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__197);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s85)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint195)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__197(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__198);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint196)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__198(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__199);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s89)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint197)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__199(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__200);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s90)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint198)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__200(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__201);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s273)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint199)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__201(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__202);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s127)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint200)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__202(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__203);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s267)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint201)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__203(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__204);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s129)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint202)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__204(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__205);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s146)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint203)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__205(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__206);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s147)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint204)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__206(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__207);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s34)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint205)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__207(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__208);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s35)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint206)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__208(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__209);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s277)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint207)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__209(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__210);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s278)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint208)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__210(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__211);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s125)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint209)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__211(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__212);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s124)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint210)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__212(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__213);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s126)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint211)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__213(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__214);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s266)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint212)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__214(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__215);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s200)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint213)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__215(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__216);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s167)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint214)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__216(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__217);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s75)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint215)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__217(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__218);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s76)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint216)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__218(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__219);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s77)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint217)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__219(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__220);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s78)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint218)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__220(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__221);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s79)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint219)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__221(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__222);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s32)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint220)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__222(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__223);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s284)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint221)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__223(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__224);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s285)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint222)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__224(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__225);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s92)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint223)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__225(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__226);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s283)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint224)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__226(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__227);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s98)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint225)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__227(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__228);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s227)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint226)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__228(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__229);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s159)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint227)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__229(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__230);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s168)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint228)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__230(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__231);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s282)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint229)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__231(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__232);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s97)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint230)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__232(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__233);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s96)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint231)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__233(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__234);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s134)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint232)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__234(PrologMachine mach) {
		mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__235);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s100)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint233)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_opcode_2__235(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(asm.s294)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(asm.posint234)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_output_mess_1 extends Code {

	/*
	 * 
	 * output_mess(_31556,_31568):-
	 * :(true,telling(_31560),tell(user,write(_31556,nl(tell(_31560,_31568))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_output_mess_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_output_mess_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s296, var2);
		local_aregs[2] = F(asm.s295, asm.s354,
				F(asm.s359, var1.Deref(), F(asm.s226, F(asm.s295, var2.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}

class pred_is_unify_arg_inst_1 extends Code {

	/*
	 * 
	 * is_unify_arg_inst(_31612,_31630):-
	 * :(true,functor(_31612,_31618,_31620),opcode(_31618,_31622,smallerorequal(91,
	 * _31622,smallerorequal(_31622,115,_31630)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_is_unify_arg_inst_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_is_unify_arg_inst_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = asm.s298;
		local_aregs[1] = F(asm.s125, var1.Deref(), var2, var3);
		local_aregs[2] = F(asm.s231, var2.Deref(), var4,
				F(asm.s279, asm.posint91, var4.Deref(), F(asm.s279, var4.Deref(), asm.posint115, continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_colon_2::exec_static;
	}
}
