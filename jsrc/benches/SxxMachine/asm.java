package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class asm /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern(" is called but not defined") ;
final static Const s2 = Data.Intern(" is doubly defined") ;
final static Const s3 = Data.Intern("$asm_bp") ;
final static Const s4 = Data.Intern("$sym_no") ;
final static Const s5 = Data.Intern("+") ;
final static Const s6 = Data.Intern(",") ;
final static Const s7 = Data.Intern("-") ;
final static Const s8 = Data.Intern("->") ;
final static Const s9 = Data.Intern(".") ;
final static Const s10 = Data.Intern("/") ;
final static Const s11 = Data.Intern("/\\") ;
final static Const s12 = Data.Intern(":") ;
final static Const s13 = Data.Intern(":-") ;
final static Const s14 = Data.Intern(":=") ;
final static Const s15 = Data.Intern(";") ;
final static Const s16 = Data.Intern("<") ;
final static Const s17 = Data.Intern("<<") ;
final static Const s18 = Data.Intern("<=") ;
final static Const s19 = Data.Intern("=") ;
final static Const s20 = Data.Intern("=:=") ;
final static Const s21 = Data.Intern("==") ;
final static Const s22 = Data.Intern("=\\=") ;
final static Const s23 = Data.Intern(">") ;
final static Const s24 = Data.Intern(">>") ;
final static Const s25 = Data.Intern("The predicate ") ;
final static Const s26 = Data.Intern("\\/") ;
final static Const s_add = Data.Intern("add") ;
final static Const s_add1_y = Data.Intern("add1_y") ;
final static Const s_allocate_flat = Data.Intern("allocate_flat") ;
final static Const s_allocate_nondet = Data.Intern("allocate_nondet") ;
final static Const s_allocate_nonflat = Data.Intern("allocate_nonflat") ;
final static Const s_allocate_susp = Data.Intern("allocate_susp") ;
final static Const s_and = Data.Intern("and") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_arg0 = Data.Intern("arg0") ;
final static Const s_arglabel = Data.Intern("arglabel") ;
final static Const s_asm = Data.Intern("asm") ;
final static Const s_asm0 = Data.Intern("asm0") ;
final static Const s_asm_bp = Data.Intern("asm_bp") ;
final static Const s_asm_getaslist = Data.Intern("asm_getaslist") ;
final static Const s_asm_getaslist1 = Data.Intern("asm_getaslist1") ;
final static Const s_asm_hash_value = Data.Intern("asm_hash_value") ;
final static Const s_asm_index = Data.Intern("asm_index") ;
final static Const s_asm_index_inst = Data.Intern("asm_index_inst") ;
final static Const s_asm_index_pass1 = Data.Intern("asm_index_pass1") ;
final static Const s_asm_lookup_ctab = Data.Intern("asm_lookup_ctab") ;
final static Const s_asm_lookup_ctab1 = Data.Intern("asm_lookup_ctab1") ;
final static Const s_asm_lookup_ltab = Data.Intern("asm_lookup_ltab") ;
final static Const s_asm_lookup_ltab1 = Data.Intern("asm_lookup_ltab1") ;
final static Const s_asm_magic = Data.Intern("asm_magic") ;
final static Const s_asm_mark_eot = Data.Intern("asm_mark_eot") ;
final static Const s_asm_merge = Data.Intern("asm_merge") ;
final static Const s_asm_pass1 = Data.Intern("asm_pass1") ;
final static Const s_asm_pass11 = Data.Intern("asm_pass11") ;
final static Const s_asm_pass12 = Data.Intern("asm_pass12") ;
final static Const s_asm_pass12_call = Data.Intern("asm_pass12_call") ;
final static Const s_asm_pass1_bp = Data.Intern("asm_pass1_bp") ;
final static Const s_asm_pass2 = Data.Intern("asm_pass2") ;
final static Const s_asm_pass2_inst = Data.Intern("asm_pass2_inst") ;
final static Const s_asm_pass2_inst_op = Data.Intern("asm_pass2_inst_op") ;
final static Const s_asm_pass2a = Data.Intern("asm_pass2a") ;
final static Const s_asm_proc_index = Data.Intern("asm_proc_index") ;
final static Const s_asm_putnum = Data.Intern("asm_putnum") ;
final static Const s_asm_rearange_csym = Data.Intern("asm_rearange_csym") ;
final static Const s_asm_symbol = Data.Intern("asm_symbol") ;
final static Const s_asmpass1_fillin = Data.Intern("asmpass1_fillin") ;
final static Const s_asmpass1_fillin_bp = Data.Intern("asmpass1_fillin_bp") ;
final static Const s_asmpass1_setundef = Data.Intern("asmpass1_setundef") ;
final static Const s_b_ASPN2_cc = Data.Intern("b_ASPN2_cc") ;
final static Const s_b_ASPN3_ccc = Data.Intern("b_ASPN3_ccc") ;
final static Const s_b_ASPN4_cccc = Data.Intern("b_ASPN4_cccc") ;
final static Const s_b_ASPN_c = Data.Intern("b_ASPN_c") ;
final static Const s_b_GET_LENGTH_cf = Data.Intern("b_GET_LENGTH_cf") ;
final static Const s_b_GET_SYM_TYPE_ccf = Data.Intern("b_GET_SYM_TYPE_ccf") ;
final static Const s_builtin0 = Data.Intern("builtin0") ;
final static Const s_builtin1 = Data.Intern("builtin1") ;
final static Const s_builtin2 = Data.Intern("builtin2") ;
final static Const s_builtin3 = Data.Intern("builtin3") ;
final static Const s_builtin4 = Data.Intern("builtin4") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_call_d = Data.Intern("call_d") ;
final static Const s_callv = Data.Intern("callv") ;
final static Const s_cmp_error = Data.Intern("cmp_error") ;
final static Const s_commit = Data.Intern("commit") ;
final static Const s_complement = Data.Intern("complement") ;
final static Const s_csym = Data.Intern("csym") ;
final static Const s_cut_fail = Data.Intern("cut_fail") ;
final static Const s_cut_return = Data.Intern("cut_return") ;
final static Const s_d = Data.Intern("d") ;
final static Const s_delay = Data.Intern("delay") ;
final static Const s_determinate = Data.Intern("determinate") ;
final static Const s_div = Data.Intern("div") ;
final static Const s_djmp = Data.Intern("djmp") ;
final static Const s_domain_set_false_yx = Data.Intern("domain_set_false_yx") ;
final static Const s_domain_set_false_yy = Data.Intern("domain_set_false_yy") ;
final static Const s_end_delay = Data.Intern("end_delay") ;
final static Const s_end_of_file = Data.Intern("end_of_file") ;
final static Const s_endfile = Data.Intern("endfile") ;
final static Const s101 = Data.Intern("error in asm pass2 :") ;
final static Const s_error_double_define = Data.Intern("error_double_define") ;
final static Const s_execute = Data.Intern("execute") ;
final static Const s_executev = Data.Intern("executev") ;
final static Const s_f = Data.Intern("f") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_fail0 = Data.Intern("fail0") ;
final static Const s_flat_to_nondet = Data.Intern("flat_to_nondet") ;
final static Const s_fork = Data.Intern("fork") ;
final static Const s_fork_unicut_atom_y = Data.Intern("fork_unicut_atom_y") ;
final static Const s_fork_unicut_int_y = Data.Intern("fork_unicut_int_y") ;
final static Const s_fork_unicut_list_y = Data.Intern("fork_unicut_list_y") ;
final static Const s_fork_unicut_nil_y = Data.Intern("fork_unicut_nil_y") ;
final static Const s_fork_unicut_struct_y = Data.Intern("fork_unicut_struct_y") ;
final static Const s_fork_unicut_ux_uy = Data.Intern("fork_unicut_ux_uy") ;
final static Const s_fork_unicut_uy_uy = Data.Intern("fork_unicut_uy_uy") ;
final static Const s_fork_unify_atom_y = Data.Intern("fork_unify_atom_y") ;
final static Const s_fork_unify_int_y = Data.Intern("fork_unify_int_y") ;
final static Const s_fork_unify_list_y = Data.Intern("fork_unify_list_y") ;
final static Const s_fork_unify_nil_y = Data.Intern("fork_unify_nil_y") ;
final static Const s_fork_unify_struct_y = Data.Intern("fork_unify_struct_y") ;
final static Const s_fork_unify_ux_uy = Data.Intern("fork_unify_ux_uy") ;
final static Const s_fork_unify_uy_uy = Data.Intern("fork_unify_uy_uy") ;
final static Const s_func_arity = Data.Intern("func_arity") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_fx = Data.Intern("fx") ;
final static Const s_get_ar_cps = Data.Intern("get_ar_cps") ;
final static Const s_getbreg = Data.Intern("getbreg") ;
final static Const s_gethtreg = Data.Intern("gethtreg") ;
final static Const s_getpbreg = Data.Intern("getpbreg") ;
final static Const s_global_create = Data.Intern("global_create") ;
final static Const s_global_del = Data.Intern("global_del") ;
final static Const s_global_get = Data.Intern("global_get") ;
final static Const s_global_set = Data.Intern("global_set") ;
final static Const s_halt = Data.Intern("halt") ;
final static Const s_hash_jmpn_atom = Data.Intern("hash_jmpn_atom") ;
final static Const s_hash_jmpn_int = Data.Intern("hash_jmpn_int") ;
final static Const s_hash_jmpn_list = Data.Intern("hash_jmpn_list") ;
final static Const s_hash_jmpn_nil = Data.Intern("hash_jmpn_nil") ;
final static Const s_hash_jmpn_struct = Data.Intern("hash_jmpn_struct") ;
final static Const s_hash_jmpn_struct_x = Data.Intern("hash_jmpn_struct_x") ;
final static Const s_hash_jmpn_struct_xx = Data.Intern("hash_jmpn_struct_xx") ;
final static Const s_hash_jmpn_struct_xy = Data.Intern("hash_jmpn_struct_xy") ;
final static Const s_hash_jmpn_struct_y = Data.Intern("hash_jmpn_struct_y") ;
final static Const s_hash_jmpn_struct_yx = Data.Intern("hash_jmpn_struct_yx") ;
final static Const s_hash_jmpn_struct_yy = Data.Intern("hash_jmpn_struct_yy") ;
final static Const s_hash_x = Data.Intern("hash_x") ;
final static Const s_hash_y = Data.Intern("hash_y") ;
final static Const s_i = Data.Intern("i") ;
final static Const s_idiv = Data.Intern("idiv") ;
final static Const s_integer = Data.Intern("integer") ;
final static Const s_is = Data.Intern("is") ;
final static Const s153 = Data.Intern("is not defined") ;
final static Const s_is_unify_arg_inst = Data.Intern("is_unify_arg_inst") ;
final static Const s_isglobal = Data.Intern("isglobal") ;
final static Const s_jmp = Data.Intern("jmp") ;
final static Const s_jmp_eql = Data.Intern("jmp_eql") ;
final static Const s_jmp_eql_yy = Data.Intern("jmp_eql_yy") ;
final static Const s_jmp_id = Data.Intern("jmp_id") ;
final static Const s_jmp_susp = Data.Intern("jmp_susp") ;
final static Const s_jmp_var_x = Data.Intern("jmp_var_x") ;
final static Const s_jmp_var_y = Data.Intern("jmp_var_y") ;
final static Const s_jmpn_atom_x = Data.Intern("jmpn_atom_x") ;
final static Const s_jmpn_atom_y = Data.Intern("jmpn_atom_y") ;
final static Const s_jmpn_atomic_x = Data.Intern("jmpn_atomic_x") ;
final static Const s_jmpn_atomic_y = Data.Intern("jmpn_atomic_y") ;
final static Const s_jmpn_det = Data.Intern("jmpn_det") ;
final static Const s_jmpn_det_get_ar_cps = Data.Intern("jmpn_det_get_ar_cps") ;
final static Const s_jmpn_dvar_y = Data.Intern("jmpn_dvar_y") ;
final static Const s_jmpn_eq_atom_x = Data.Intern("jmpn_eq_atom_x") ;
final static Const s_jmpn_eq_atom_y = Data.Intern("jmpn_eq_atom_y") ;
final static Const s_jmpn_eq_int_x = Data.Intern("jmpn_eq_int_x") ;
final static Const s_jmpn_eq_int_y = Data.Intern("jmpn_eq_int_y") ;
final static Const s_jmpn_eq_struct_x = Data.Intern("jmpn_eq_struct_x") ;
final static Const s_jmpn_eq_struct_y = Data.Intern("jmpn_eq_struct_y") ;
final static Const s_jmpn_eql = Data.Intern("jmpn_eql") ;
final static Const s_jmpn_float_x = Data.Intern("jmpn_float_x") ;
final static Const s_jmpn_float_y = Data.Intern("jmpn_float_y") ;
final static Const s_jmpn_ge = Data.Intern("jmpn_ge") ;
final static Const s_jmpn_ge_yy = Data.Intern("jmpn_ge_yy") ;
final static Const s_jmpn_gt = Data.Intern("jmpn_gt") ;
final static Const s_jmpn_gt_yy = Data.Intern("jmpn_gt_yy") ;
final static Const s_jmpn_id = Data.Intern("jmpn_id") ;
final static Const s_jmpn_int_x = Data.Intern("jmpn_int_x") ;
final static Const s_jmpn_int_y = Data.Intern("jmpn_int_y") ;
final static Const s_jmpn_nil_x = Data.Intern("jmpn_nil_x") ;
final static Const s_jmpn_nil_y = Data.Intern("jmpn_nil_y") ;
final static Const s_jmpn_num_x = Data.Intern("jmpn_num_x") ;
final static Const s_jmpn_num_y = Data.Intern("jmpn_num_y") ;
final static Const s_jmpn_var_x = Data.Intern("jmpn_var_x") ;
final static Const s_jmpn_var_y = Data.Intern("jmpn_var_y") ;
final static Const s_lab = Data.Intern("lab") ;
final static Const s_lab_member1 = Data.Intern("lab_member1") ;
final static Const s_label = Data.Intern("label") ;
final static Const s_length = Data.Intern("length") ;
final static Const s_lshiftl = Data.Intern("lshiftl") ;
final static Const s_lshiftr = Data.Intern("lshiftr") ;
final static Const s_lsym = Data.Intern("lsym") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_mode = Data.Intern("mode") ;
final static Const s_move_ar_cps = Data.Intern("move_ar_cps") ;
final static Const s_move_atom_x = Data.Intern("move_atom_x") ;
final static Const s_move_atom_y = Data.Intern("move_atom_y") ;
final static Const s_move_int_x = Data.Intern("move_int_x") ;
final static Const s_move_int_y = Data.Intern("move_int_y") ;
final static Const s_move_list_x = Data.Intern("move_list_x") ;
final static Const s_move_list_y = Data.Intern("move_list_y") ;
final static Const s_move_nil_x = Data.Intern("move_nil_x") ;
final static Const s_move_nil_y = Data.Intern("move_nil_y") ;
final static Const s_move_struct_x = Data.Intern("move_struct_x") ;
final static Const s_move_struct_y = Data.Intern("move_struct_y") ;
final static Const s_move_vx = Data.Intern("move_vx") ;
final static Const s_move_vy = Data.Intern("move_vy") ;
final static Const s_move_x_ux = Data.Intern("move_x_ux") ;
final static Const s_move_x_uy = Data.Intern("move_x_uy") ;
final static Const s_move_x_wy = Data.Intern("move_x_wy") ;
final static Const s_move_y_ux = Data.Intern("move_y_ux") ;
final static Const s_move_y_uy = Data.Intern("move_y_uy") ;
final static Const s_move_y_wy = Data.Intern("move_y_wy") ;
final static Const s_move_yw_yy = Data.Intern("move_yw_yy") ;
final static Const s_move_yy_yw = Data.Intern("move_yy_yw") ;
final static Const s_move_yy_yy = Data.Intern("move_yy_yy") ;
final static Const s_move_yy_yy_yy = Data.Intern("move_yy_yy_yy") ;
final static Const s_mul = Data.Intern("mul") ;
final static Const s_name = Data.Intern("name") ;
final static Const s_next_sym_no = Data.Intern("next_sym_no") ;
final static Const s_nl = Data.Intern("nl") ;
final static Const s_nondet = Data.Intern("nondet") ;
final static Const s_noop = Data.Intern("noop") ;
final static Const s_on_load_asm = Data.Intern("on_load_asm") ;
final static Const s_op = Data.Intern("op") ;
final static Const s_opcode = Data.Intern("opcode") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_output_mess = Data.Intern("output_mess") ;
final static Const s_para_atom = Data.Intern("para_atom") ;
final static Const s_para_int = Data.Intern("para_int") ;
final static Const s_para_list = Data.Intern("para_list") ;
final static Const s_para_nil = Data.Intern("para_nil") ;
final static Const s_para_struct = Data.Intern("para_struct") ;
final static Const s_para_ux = Data.Intern("para_ux") ;
final static Const s_para_ux_ux = Data.Intern("para_ux_ux") ;
final static Const s_para_ux_ux_ux = Data.Intern("para_ux_ux_ux") ;
final static Const s_para_ux_ux_uy = Data.Intern("para_ux_ux_uy") ;
final static Const s_para_ux_uy = Data.Intern("para_ux_uy") ;
final static Const s_para_ux_uy_ux = Data.Intern("para_ux_uy_ux") ;
final static Const s_para_ux_uy_uy = Data.Intern("para_ux_uy_uy") ;
final static Const s_para_ux_vy = Data.Intern("para_ux_vy") ;
final static Const s_para_uy = Data.Intern("para_uy") ;
final static Const s_para_uy_ux = Data.Intern("para_uy_ux") ;
final static Const s_para_uy_ux_ux = Data.Intern("para_uy_ux_ux") ;
final static Const s_para_uy_ux_uy = Data.Intern("para_uy_ux_uy") ;
final static Const s_para_uy_uy = Data.Intern("para_uy_uy") ;
final static Const s_para_uy_uy_ux = Data.Intern("para_uy_uy_ux") ;
final static Const s_para_uy_uy_uy = Data.Intern("para_uy_uy_uy") ;
final static Const s_para_uy_uy_uy_uy = Data.Intern("para_uy_uy_uy_uy") ;
final static Const s_para_uy_vy = Data.Intern("para_uy_vy") ;
final static Const s_para_void = Data.Intern("para_void") ;
final static Const s_para_void_one = Data.Intern("para_void_one") ;
final static Const s_para_vx = Data.Intern("para_vx") ;
final static Const s_para_vy = Data.Intern("para_vy") ;
final static Const s_para_vy_ux = Data.Intern("para_vy_ux") ;
final static Const s_para_vy_uy = Data.Intern("para_vy_uy") ;
final static Const s_para_vy_vy = Data.Intern("para_vy_vy") ;
final static Const s_pred = Data.Intern("pred") ;
final static Const s_predefined = Data.Intern("predefined") ;
final static Const s_put = Data.Intern("put") ;
final static Const s_put_ar_cps = Data.Intern("put_ar_cps") ;
final static Const s_putbreg = Data.Intern("putbreg") ;
final static Const s_puthtreg = Data.Intern("puthtreg") ;
final static Const s_read = Data.Intern("read") ;
final static Const s_return_a = Data.Intern("return_a") ;
final static Const s_return_b = Data.Intern("return_b") ;
final static Const s_s = Data.Intern("s") ;
final static Const s_save_b = Data.Intern("save_b") ;
final static Const s_save_ht_jmp = Data.Intern("save_ht_jmp") ;
final static Const s_see = Data.Intern("see") ;
final static Const s_seen = Data.Intern("seen") ;
final static Const s_setarg = Data.Intern("setarg") ;
final static Const s_setarg0 = Data.Intern("setarg0") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_sub = Data.Intern("sub") ;
final static Const s_sub1_y = Data.Intern("sub1_y") ;
final static Const s_susp_var2_delay = Data.Intern("susp_var2_delay") ;
final static Const s_susp_var_delay = Data.Intern("susp_var_delay") ;
final static Const s_susp_var_x = Data.Intern("susp_var_x") ;
final static Const s_susp_var_y = Data.Intern("susp_var_y") ;
final static Const s_switch_list_x = Data.Intern("switch_list_x") ;
final static Const s_switch_list_y = Data.Intern("switch_list_y") ;
final static Const s_switch_list_yxx = Data.Intern("switch_list_yxx") ;
final static Const s_switch_list_yxy = Data.Intern("switch_list_yxy") ;
final static Const s_switch_list_yyx = Data.Intern("switch_list_yyx") ;
final static Const s_switch_list_yyy = Data.Intern("switch_list_yyy") ;
final static Const s_sym = Data.Intern("sym") ;
final static Const s_sym_member1 = Data.Intern("sym_member1") ;
final static Const s_tabsize = Data.Intern("tabsize") ;
final static Const s_tell = Data.Intern("tell") ;
final static Const s_telling = Data.Intern("telling") ;
final static Const s_told = Data.Intern("told") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_unicut = Data.Intern("unicut") ;
final static Const s_unicut_atom_y = Data.Intern("unicut_atom_y") ;
final static Const s_unicut_int_y = Data.Intern("unicut_int_y") ;
final static Const s_unicut_list_y = Data.Intern("unicut_list_y") ;
final static Const s_unicut_nil_y = Data.Intern("unicut_nil_y") ;
final static Const s_unicut_struct_y = Data.Intern("unicut_struct_y") ;
final static Const s_unicut_uy_uy = Data.Intern("unicut_uy_uy") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_unify0_atom_y = Data.Intern("unify0_atom_y") ;
final static Const s_unify0_int_y = Data.Intern("unify0_int_y") ;
final static Const s_unify0_list_y = Data.Intern("unify0_list_y") ;
final static Const s_unify0_nil_y = Data.Intern("unify0_nil_y") ;
final static Const s_unify0_struct_y = Data.Intern("unify0_struct_y") ;
final static Const s_unify0_ux_uy = Data.Intern("unify0_ux_uy") ;
final static Const s_unify0_uy_uy = Data.Intern("unify0_uy_uy") ;
final static Const s_unify_arg_atom = Data.Intern("unify_arg_atom") ;
final static Const s_unify_arg_iii = Data.Intern("unify_arg_iii") ;
final static Const s_unify_arg_int = Data.Intern("unify_arg_int") ;
final static Const s_unify_arg_list = Data.Intern("unify_arg_list") ;
final static Const s_unify_arg_nil = Data.Intern("unify_arg_nil") ;
final static Const s_unify_arg_struct = Data.Intern("unify_arg_struct") ;
final static Const s_unify_arg_ux = Data.Intern("unify_arg_ux") ;
final static Const s_unify_arg_ux_ux = Data.Intern("unify_arg_ux_ux") ;
final static Const s_unify_arg_ux_vx = Data.Intern("unify_arg_ux_vx") ;
final static Const s_unify_arg_ux_vy = Data.Intern("unify_arg_ux_vy") ;
final static Const s_unify_arg_uy = Data.Intern("unify_arg_uy") ;
final static Const s_unify_arg_uy_uy = Data.Intern("unify_arg_uy_uy") ;
final static Const s_unify_arg_void = Data.Intern("unify_arg_void") ;
final static Const s_unify_arg_void_one = Data.Intern("unify_arg_void_one") ;
final static Const s_unify_arg_vx = Data.Intern("unify_arg_vx") ;
final static Const s_unify_arg_vx_ux = Data.Intern("unify_arg_vx_ux") ;
final static Const s_unify_arg_vx_uy = Data.Intern("unify_arg_vx_uy") ;
final static Const s_unify_arg_vx_vx = Data.Intern("unify_arg_vx_vx") ;
final static Const s_unify_arg_vx_vy = Data.Intern("unify_arg_vx_vy") ;
final static Const s_unify_arg_vy = Data.Intern("unify_arg_vy") ;
final static Const s_unify_arg_vy_ux = Data.Intern("unify_arg_vy_ux") ;
final static Const s_unify_arg_vy_uy = Data.Intern("unify_arg_vy_uy") ;
final static Const s_unify_arg_vy_vx = Data.Intern("unify_arg_vy_vx") ;
final static Const s_unify_arg_vy_vy = Data.Intern("unify_arg_vy_vy") ;
final static Const s_unify_arg_wy = Data.Intern("unify_arg_wy") ;
final static Const s_unify_atom_x = Data.Intern("unify_atom_x") ;
final static Const s_unify_atom_y = Data.Intern("unify_atom_y") ;
final static Const s_unify_cons_x = Data.Intern("unify_cons_x") ;
final static Const s_unify_cons_y = Data.Intern("unify_cons_y") ;
final static Const s_unify_int_x = Data.Intern("unify_int_x") ;
final static Const s_unify_int_y = Data.Intern("unify_int_y") ;
final static Const s_unify_list_x = Data.Intern("unify_list_x") ;
final static Const s_unify_list_y = Data.Intern("unify_list_y") ;
final static Const s_unify_nil_x = Data.Intern("unify_nil_x") ;
final static Const s_unify_nil_y = Data.Intern("unify_nil_y") ;
final static Const s_unify_struct_x = Data.Intern("unify_struct_x") ;
final static Const s_unify_struct_y = Data.Intern("unify_struct_y") ;
final static Const s_unify_ux_ux = Data.Intern("unify_ux_ux") ;
final static Const s_unify_ux_uy = Data.Intern("unify_ux_uy") ;
final static Const s_unify_uy_uy = Data.Intern("unify_uy_uy") ;
final static Const s_user = Data.Intern("user") ;
final static Const s_var = Data.Intern("var") ;
final static Const s_vx = Data.Intern("vx") ;
final static Const s_vy = Data.Intern("vy") ;
final static Const s_warning = Data.Intern("warning") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_writename = Data.Intern("writename") ;
final static Const s_x = Data.Intern("x") ;
final static Const s_x_or_y = Data.Intern("x_or_y") ;
final static Const s_xfx = Data.Intern("xfx") ;
final static Const s_y = Data.Intern("y") ;
final static Int negint2 = Data.Number(-2L) ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint4 = Data.Number(4L) ;
final static Int posint5 = Data.Number(5L) ;
final static Int posint6 = Data.Number(6L) ;
final static Int posint7 = Data.Number(7L) ;
final static Int posint8 = Data.Number(8L) ;
final static Int posint9 = Data.Number(9L) ;
final static Int posint10 = Data.Number(10L) ;
final static Int posint11 = Data.Number(11L) ;
final static Int posint12 = Data.Number(12L) ;
final static Int posint13 = Data.Number(13L) ;
final static Int posint14 = Data.Number(14L) ;
final static Int posint15 = Data.Number(15L) ;
final static Int posint16 = Data.Number(16L) ;
final static Int posint17 = Data.Number(17L) ;
final static Int posint18 = Data.Number(18L) ;
final static Int posint19 = Data.Number(19L) ;
final static Int posint20 = Data.Number(20L) ;
final static Int posint21 = Data.Number(21L) ;
final static Int posint22 = Data.Number(22L) ;
final static Int posint23 = Data.Number(23L) ;
final static Int posint24 = Data.Number(24L) ;
final static Int posint25 = Data.Number(25L) ;
final static Int posint26 = Data.Number(26L) ;
final static Int posint27 = Data.Number(27L) ;
final static Int posint28 = Data.Number(28L) ;
final static Int posint29 = Data.Number(29L) ;
final static Int posint30 = Data.Number(30L) ;
final static Int posint31 = Data.Number(31L) ;
final static Int posint32 = Data.Number(32L) ;
final static Int posint33 = Data.Number(33L) ;
final static Int posint34 = Data.Number(34L) ;
final static Int posint35 = Data.Number(35L) ;
final static Int posint36 = Data.Number(36L) ;
final static Int posint37 = Data.Number(37L) ;
final static Int posint38 = Data.Number(38L) ;
final static Int posint39 = Data.Number(39L) ;
final static Int posint40 = Data.Number(40L) ;
final static Int posint41 = Data.Number(41L) ;
final static Int posint42 = Data.Number(42L) ;
final static Int posint43 = Data.Number(43L) ;
final static Int posint44 = Data.Number(44L) ;
final static Int posint45 = Data.Number(45L) ;
final static Int posint46 = Data.Number(46L) ;
final static Int posint47 = Data.Number(47L) ;
final static Int posint48 = Data.Number(48L) ;
final static Int posint49 = Data.Number(49L) ;
final static Int posint50 = Data.Number(50L) ;
final static Int posint51 = Data.Number(51L) ;
final static Int posint52 = Data.Number(52L) ;
final static Int posint53 = Data.Number(53L) ;
final static Int posint54 = Data.Number(54L) ;
final static Int posint55 = Data.Number(55L) ;
final static Int posint56 = Data.Number(56L) ;
final static Int posint57 = Data.Number(57L) ;
final static Int posint58 = Data.Number(58L) ;
final static Int posint59 = Data.Number(59L) ;
final static Int posint60 = Data.Number(60L) ;
final static Int posint61 = Data.Number(61L) ;
final static Int posint62 = Data.Number(62L) ;
final static Int posint63 = Data.Number(63L) ;
final static Int posint64 = Data.Number(64L) ;
final static Int posint65 = Data.Number(65L) ;
final static Int posint66 = Data.Number(66L) ;
final static Int posint67 = Data.Number(67L) ;
final static Int posint68 = Data.Number(68L) ;
final static Int posint69 = Data.Number(69L) ;
final static Int posint70 = Data.Number(70L) ;
final static Int posint71 = Data.Number(71L) ;
final static Int posint72 = Data.Number(72L) ;
final static Int posint73 = Data.Number(73L) ;
final static Int posint74 = Data.Number(74L) ;
final static Int posint75 = Data.Number(75L) ;
final static Int posint76 = Data.Number(76L) ;
final static Int posint77 = Data.Number(77L) ;
final static Int posint78 = Data.Number(78L) ;
final static Int posint79 = Data.Number(79L) ;
final static Int posint80 = Data.Number(80L) ;
final static Int posint81 = Data.Number(81L) ;
final static Int posint82 = Data.Number(82L) ;
final static Int posint83 = Data.Number(83L) ;
final static Int posint84 = Data.Number(84L) ;
final static Int posint85 = Data.Number(85L) ;
final static Int posint86 = Data.Number(86L) ;
final static Int posint87 = Data.Number(87L) ;
final static Int posint88 = Data.Number(88L) ;
final static Int posint89 = Data.Number(89L) ;
final static Int posint90 = Data.Number(90L) ;
final static Int posint91 = Data.Number(91L) ;
final static Int posint92 = Data.Number(92L) ;
final static Int posint93 = Data.Number(93L) ;
final static Int posint94 = Data.Number(94L) ;
final static Int posint95 = Data.Number(95L) ;
final static Int posint96 = Data.Number(96L) ;
final static Int posint97 = Data.Number(97L) ;
final static Int posint98 = Data.Number(98L) ;
final static Int posint99 = Data.Number(99L) ;
final static Int posint100 = Data.Number(100L) ;
final static Int posint101 = Data.Number(101L) ;
final static Int posint102 = Data.Number(102L) ;
final static Int posint103 = Data.Number(103L) ;
final static Int posint104 = Data.Number(104L) ;
final static Int posint105 = Data.Number(105L) ;
final static Int posint106 = Data.Number(106L) ;
final static Int posint107 = Data.Number(107L) ;
final static Int posint108 = Data.Number(108L) ;
final static Int posint109 = Data.Number(109L) ;
final static Int posint110 = Data.Number(110L) ;
final static Int posint111 = Data.Number(111L) ;
final static Int posint112 = Data.Number(112L) ;
final static Int posint113 = Data.Number(113L) ;
final static Int posint114 = Data.Number(114L) ;
final static Int posint115 = Data.Number(115L) ;
final static Int posint116 = Data.Number(116L) ;
final static Int posint117 = Data.Number(117L) ;
final static Int posint118 = Data.Number(118L) ;
final static Int posint119 = Data.Number(119L) ;
final static Int posint120 = Data.Number(120L) ;
final static Int posint121 = Data.Number(121L) ;
final static Int posint122 = Data.Number(122L) ;
final static Int posint123 = Data.Number(123L) ;
final static Int posint124 = Data.Number(124L) ;
final static Int posint125 = Data.Number(125L) ;
final static Int posint126 = Data.Number(126L) ;
final static Int posint127 = Data.Number(127L) ;
final static Int posint128 = Data.Number(128L) ;
final static Int posint129 = Data.Number(129L) ;
final static Int posint130 = Data.Number(130L) ;
final static Int posint131 = Data.Number(131L) ;
final static Int posint132 = Data.Number(132L) ;
final static Int posint133 = Data.Number(133L) ;
final static Int posint134 = Data.Number(134L) ;
final static Int posint135 = Data.Number(135L) ;
final static Int posint136 = Data.Number(136L) ;
final static Int posint137 = Data.Number(137L) ;
final static Int posint138 = Data.Number(138L) ;
final static Int posint139 = Data.Number(139L) ;
final static Int posint140 = Data.Number(140L) ;
final static Int posint141 = Data.Number(141L) ;
final static Int posint142 = Data.Number(142L) ;
final static Int posint143 = Data.Number(143L) ;
final static Int posint144 = Data.Number(144L) ;
final static Int posint145 = Data.Number(145L) ;
final static Int posint146 = Data.Number(146L) ;
final static Int posint147 = Data.Number(147L) ;
final static Int posint148 = Data.Number(148L) ;
final static Int posint149 = Data.Number(149L) ;
final static Int posint150 = Data.Number(150L) ;
final static Int posint151 = Data.Number(151L) ;
final static Int posint152 = Data.Number(152L) ;
final static Int posint153 = Data.Number(153L) ;
final static Int posint154 = Data.Number(154L) ;
final static Int posint155 = Data.Number(155L) ;
final static Int posint156 = Data.Number(156L) ;
final static Int posint157 = Data.Number(157L) ;
final static Int posint158 = Data.Number(158L) ;
final static Int posint159 = Data.Number(159L) ;
final static Int posint160 = Data.Number(160L) ;
final static Int posint161 = Data.Number(161L) ;
final static Int posint162 = Data.Number(162L) ;
final static Int posint163 = Data.Number(163L) ;
final static Int posint164 = Data.Number(164L) ;
final static Int posint165 = Data.Number(165L) ;
final static Int posint166 = Data.Number(166L) ;
final static Int posint167 = Data.Number(167L) ;
final static Int posint168 = Data.Number(168L) ;
final static Int posint169 = Data.Number(169L) ;
final static Int posint170 = Data.Number(170L) ;
final static Int posint171 = Data.Number(171L) ;
final static Int posint172 = Data.Number(172L) ;
final static Int posint173 = Data.Number(173L) ;
final static Int posint174 = Data.Number(174L) ;
final static Int posint175 = Data.Number(175L) ;
final static Int posint176 = Data.Number(176L) ;
final static Int posint177 = Data.Number(177L) ;
final static Int posint178 = Data.Number(178L) ;
final static Int posint179 = Data.Number(179L) ;
final static Int posint180 = Data.Number(180L) ;
final static Int posint181 = Data.Number(181L) ;
final static Int posint182 = Data.Number(182L) ;
final static Int posint183 = Data.Number(183L) ;
final static Int posint184 = Data.Number(184L) ;
final static Int posint185 = Data.Number(185L) ;
final static Int posint186 = Data.Number(186L) ;
final static Int posint187 = Data.Number(187L) ;
final static Int posint188 = Data.Number(188L) ;
final static Int posint189 = Data.Number(189L) ;
final static Int posint190 = Data.Number(190L) ;
final static Int posint191 = Data.Number(191L) ;
final static Int posint192 = Data.Number(192L) ;
final static Int posint193 = Data.Number(193L) ;
final static Int posint194 = Data.Number(194L) ;
final static Int posint195 = Data.Number(195L) ;
final static Int posint196 = Data.Number(196L) ;
final static Int posint197 = Data.Number(197L) ;
final static Int posint198 = Data.Number(198L) ;
final static Int posint199 = Data.Number(199L) ;
final static Int posint200 = Data.Number(200L) ;
final static Int posint201 = Data.Number(201L) ;
final static Int posint202 = Data.Number(202L) ;
final static Int posint203 = Data.Number(203L) ;
final static Int posint204 = Data.Number(204L) ;
final static Int posint205 = Data.Number(205L) ;
final static Int posint206 = Data.Number(206L) ;
final static Int posint207 = Data.Number(207L) ;
final static Int posint208 = Data.Number(208L) ;
final static Int posint209 = Data.Number(209L) ;
final static Int posint210 = Data.Number(210L) ;
final static Int posint211 = Data.Number(211L) ;
final static Int posint212 = Data.Number(212L) ;
final static Int posint213 = Data.Number(213L) ;
final static Int posint214 = Data.Number(214L) ;
final static Int posint215 = Data.Number(215L) ;
final static Int posint216 = Data.Number(216L) ;
final static Int posint217 = Data.Number(217L) ;
final static Int posint218 = Data.Number(218L) ;
final static Int posint219 = Data.Number(219L) ;
final static Int posint220 = Data.Number(220L) ;
final static Int posint221 = Data.Number(221L) ;
final static Int posint222 = Data.Number(222L) ;
final static Int posint223 = Data.Number(223L) ;
final static Int posint224 = Data.Number(224L) ;
final static Int posint225 = Data.Number(225L) ;
final static Int posint226 = Data.Number(226L) ;
final static Int posint227 = Data.Number(227L) ;
final static Int posint228 = Data.Number(228L) ;
final static Int posint229 = Data.Number(229L) ;
final static Int posint230 = Data.Number(230L) ;
final static Int posint231 = Data.Number(231L) ;
final static Int posint232 = Data.Number(232L) ;
final static Int posint233 = Data.Number(233L) ;
final static Int posint234 = Data.Number(234L) ;
final static Int posint255 = Data.Number(255L) ;
final static Int posint300 = Data.Number(300L) ;
final static Int posint950 = Data.Number(950L) ;
final static Int posint1000 = Data.Number(1000L) ;
final static Operation reg_on_load_asm_0 = PredTable.Register("on_load_asm",0, new pred_on_load_asm_0());
final static Operation reg_asm_bp_2 = PredTable.Register("asm_bp",2, new pred_asm_bp_2());
final static Operation reg_asm_2 = PredTable.Register("asm",2, new pred_asm_2());
final static Operation reg_asm_getaslist_1 = PredTable.Register("asm_getaslist",1, new pred_asm_getaslist_1());
final static Operation reg_asm_getaslist1_2 = PredTable.Register("asm_getaslist1",2, new pred_asm_getaslist1_2());
final static Operation reg_asm_1 = PredTable.Register("asm",1, new pred_asm_1());
final static Operation reg_asm0_5 = PredTable.Register("asm0",5, new pred_asm0_5());
final static Operation reg_asm_pass1_6 = PredTable.Register("asm_pass1",6, new pred_asm_pass1_6());
final static Operation reg_asm_pass1_bp_6 = PredTable.Register("asm_pass1_bp",6, new pred_asm_pass1_bp_6());
final static Operation reg_asm_pass11_5 = PredTable.Register("asm_pass11",5, new pred_asm_pass11_5());
final static Operation reg_error_double_define_1 = PredTable.Register("error_double_define",1, new pred_error_double_define_1());
final static Operation reg_asm_index_pass1_2 = PredTable.Register("asm_index_pass1",2, new pred_asm_index_pass1_2());
final static Operation reg_asmpass1_fillin_3 = PredTable.Register("asmpass1_fillin",3, new pred_asmpass1_fillin_3());
final static Operation reg_asmpass1_fillin_2 = PredTable.Register("asmpass1_fillin",2, new pred_asmpass1_fillin_2());
final static Operation reg_asmpass1_fillin_bp_3 = PredTable.Register("asmpass1_fillin_bp",3, new pred_asmpass1_fillin_bp_3());
final static Operation reg_asmpass1_fillin_bp_2 = PredTable.Register("asmpass1_fillin_bp",2, new pred_asmpass1_fillin_bp_2());
final static Operation reg_asmpass1_setundef_4 = PredTable.Register("asmpass1_setundef",4, new pred_asmpass1_setundef_4());
final static Operation reg_asmpass1_setundef_3 = PredTable.Register("asmpass1_setundef",3, new pred_asmpass1_setundef_3());
final static Operation reg_asm_pass12_3 = PredTable.Register("asm_pass12",3, new pred_asm_pass12_3());
final static Operation reg_asm_pass12_call_3 = PredTable.Register("asm_pass12_call",3, new pred_asm_pass12_call_3());
final static Operation reg_asm_pass2_4 = PredTable.Register("asm_pass2",4, new pred_asm_pass2_4());
final static Operation reg_asm_index_3 = PredTable.Register("asm_index",3, new pred_asm_index_3());
final static Operation reg_asm_proc_index_3 = PredTable.Register("asm_proc_index",3, new pred_asm_proc_index_3());
final static Operation reg_asm_pass2a_3 = PredTable.Register("asm_pass2a",3, new pred_asm_pass2a_3());
final static Operation reg_asm_pass2_inst_3 = PredTable.Register("asm_pass2_inst",3, new pred_asm_pass2_inst_3());
final static Operation reg_asm_pass2_inst_op_3 = PredTable.Register("asm_pass2_inst_op",3, new pred_asm_pass2_inst_op_3());
final static Operation reg_asm_magic_1 = PredTable.Register("asm_magic",1, new pred_asm_magic_1());
final static Operation reg_asm_index_inst_2 = PredTable.Register("asm_index_inst",2, new pred_asm_index_inst_2());
final static Operation reg_asm_symbol_1 = PredTable.Register("asm_symbol",1, new pred_asm_symbol_1());
final static Operation reg_asm_putnum_2 = PredTable.Register("asm_putnum",2, new pred_asm_putnum_2());
final static Operation reg_asm_mark_eot_0 = PredTable.Register("asm_mark_eot",0, new pred_asm_mark_eot_0());
final static Operation reg_sym_member1_2 = PredTable.Register("sym_member1",2, new pred_sym_member1_2());
final static Operation reg_sym_member1_4 = PredTable.Register("sym_member1",4, new pred_sym_member1_4());
final static Operation reg_lab_member1_2 = PredTable.Register("lab_member1",2, new pred_lab_member1_2());
final static Operation reg_lab_member1_3 = PredTable.Register("lab_member1",3, new pred_lab_member1_3());
final static Operation reg_asm_lookup_ltab_3 = PredTable.Register("asm_lookup_ltab",3, new pred_asm_lookup_ltab_3());
final static Operation reg_asm_lookup_ltab1_3 = PredTable.Register("asm_lookup_ltab1",3, new pred_asm_lookup_ltab1_3());
final static Operation reg_asm_lookup_ctab_4 = PredTable.Register("asm_lookup_ctab",4, new pred_asm_lookup_ctab_4());
final static Operation reg_asm_lookup_ctab1_4 = PredTable.Register("asm_lookup_ctab1",4, new pred_asm_lookup_ctab1_4());
final static Operation reg_asm_rearange_csym_4 = PredTable.Register("asm_rearange_csym",4, new pred_asm_rearange_csym_4());
final static Operation reg_asm_merge_3 = PredTable.Register("asm_merge",3, new pred_asm_merge_3());
final static Operation reg_next_sym_no_1 = PredTable.Register("next_sym_no",1, new pred_next_sym_no_1());
final static Operation reg_x_or_y_2 = PredTable.Register("x_or_y",2, new pred_x_or_y_2());
final static Operation reg_opcode_2 = PredTable.Register("opcode",2, new pred_opcode_2());
final static Operation reg_output_mess_1 = PredTable.Register("output_mess",1, new pred_output_mess_1());
final static Operation reg_is_unify_arg_inst_1 = PredTable.Register("is_unify_arg_inst",1, new pred_is_unify_arg_inst_1());
public static class pred_on_load_asm_0 extends Code {

/*

on_load_asm(_634):-write(op(300,xfx,<=),_634).
on_load_asm(_666):-write(op(1000,fx,mode),_666).
on_load_asm(_698):-write(op(950,xfx,:),_698).
on_load_asm(_774):-write(determinate([cmp_error/1,name/2,length/2,asm_hash_value/2]),_774).
on_load_asm(_3638):-write((mode asm_pass12(c,d,f)),_3638).
on_load_asm(_25942):-write((mode opcode(c,f)),_25942).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_on_load_asm_0__1(mach); }
public static Operation exec_pred_on_load_asm_0__1(Prolog mach){ mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_op,asm.posint300,asm.s_xfx,asm.s18) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_asm_0__2(Prolog mach){ mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_op,asm.posint1000,asm.s_fx,asm.s_mode) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_asm_0__3(Prolog mach){ mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_op,asm.posint950,asm.s_xfx,asm.s12) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_asm_0__4(Prolog mach){ mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_determinate,Data.F(asm.s9,Data.F(asm.s10,asm.s_cmp_error,asm.posint1),Data.F(asm.s9,Data.F(asm.s10,asm.s_name,asm.posint2),Data.F(asm.s9,Data.F(asm.s10,asm.s_length,asm.posint2),Data.F(asm.s9,Data.F(asm.s10,asm.s_asm_hash_value,asm.posint2),Const.Nil))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_asm_0__5(Prolog mach){ mach.FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_mode,Data.F(asm.s_asm_pass12,asm.s_c,asm.s_d,asm.s_f)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_asm_0__6(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(asm.s_mode,Data.F(asm.s_opcode,asm.s_c,asm.s_f)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_write.FindProc(1) ;}
}


public static class pred_asm_bp_2 extends Code {

/*

asm_bp(_792,_794,_826):- :(true,global_set('$asm_bp',0,1),see(_792,asm_getaslist(_804,seen(tell(_794,asm0(_804,_806,_808,0,_810,functor(_812,csym,255,functor(_814,lsym,255,global_create('$sym_no',0,0,asm_pass1_bp(_806,_808,_812,_814,_816,_818,asm_magic(3,asm_putnum(_818,4,asm_putnum(_816,4,asm_putnum(_810,4,asm_pass2(_806,_808,_812,_814,asm_mark_eot(global_del('$asm_bp',0,told(_826)))))))))))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_bp_2__1(mach); }
public static Operation exec_pred_asm_bp_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_global_set,asm.s3,asm.posint0,asm.posint1) ;
local_aregs[2] = Data.F(asm.s_see,var1.Deref(),Data.F(asm.s_asm_getaslist,var3,Data.F(asm.s_seen,Data.F(asm.s_tell,var2.Deref(),Data.F(asm.s_asm0,var3.Deref(),var4,var5,asm.posint0,var6,Data.F(asm.s_functor,var7,asm.s_csym,asm.posint255,Data.F(asm.s_functor,var8,asm.s_lsym,asm.posint255,Data.F(asm.s_global_create,asm.s4,asm.posint0,asm.posint0,Data.F(asm.s_asm_pass1_bp,var4.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),var9,var10,Data.F(asm.s_asm_magic,asm.posint3,Data.F(asm.s_asm_putnum,var10.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var9.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var6.Deref(),asm.posint4,Data.F(asm.s_asm_pass2,var4.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_asm_mark_eot,Data.F(asm.s_global_del,asm.s3,asm.posint0,Data.F(asm.s_told,continuation))))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_2 extends Code {

/*

asm(_990,_992,_1020):- :(true,see(_990),asm_getaslist(_998,seen(tell(_992,asm0(_998,_1000,_1002,0,_1004,functor(_1006,csym,255,functor(_1008,lsym,255,global_create('$sym_no',0,0,asm_pass1(_1000,_1002,_1006,_1008,_1010,_1012,asm_magic(3,asm_putnum(_1012,4,asm_putnum(_1010,4,asm_putnum(_1004,4,asm_pass2(_1000,_1002,_1006,_1008,asm_mark_eot(told(_1020)))))))))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_2__1(mach); }
public static Operation exec_pred_asm_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_see,var1.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_getaslist,var3,Data.F(asm.s_seen,Data.F(asm.s_tell,var2.Deref(),Data.F(asm.s_asm0,var3.Deref(),var4,var5,asm.posint0,var6,Data.F(asm.s_functor,var7,asm.s_csym,asm.posint255,Data.F(asm.s_functor,var8,asm.s_lsym,asm.posint255,Data.F(asm.s_global_create,asm.s4,asm.posint0,asm.posint0,Data.F(asm.s_asm_pass1,var4.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),var9,var10,Data.F(asm.s_asm_magic,asm.posint3,Data.F(asm.s_asm_putnum,var10.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var9.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var6.Deref(),asm.posint4,Data.F(asm.s_asm_pass2,var4.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_asm_mark_eot,Data.F(asm.s_told,continuation))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_getaslist_1 extends Code {

/*

asm_getaslist(_1170,_1182):- :(true,read(_1174),asm_getaslist1(_1174,_1170,_1182)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_getaslist_1__1(mach); }
public static Operation exec_pred_asm_getaslist_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_read,var2) ;
local_aregs[2] = Data.F(asm.s_asm_getaslist1,var2.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_getaslist1_2 extends Code {

/*

asm_getaslist1(end_of_file,_1212,_1226):- :(true,_1212:=[],_1226).
asm_getaslist1(_1250,_1252,_1274):- :(true,_1252:=[_1250|_1258],read(_1266,asm_getaslist1(_1266,_1258,_1274))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_getaslist1_2__1(mach); }
public static Operation exec_pred_asm_getaslist1_2__1(Prolog mach){ mach.FillAlternative(pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_end_of_file,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var1.Deref(),Const.Nil) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_getaslist1_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var2.Deref(),Data.F(asm.s9,var1.Deref(),var3)) ;
local_aregs[2] = Data.F(asm.s_read,var4,Data.F(asm.s_asm_getaslist1,var4.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_1 extends Code {

/*

asm(_1312,_1340):- :(true,asm0(_1312,_1318,_1320,0,_1324),functor(_1326,csym,255,functor(_1328,lsym,255,global_create('$sym_no',0,0,asm_pass1(_1318,_1320,_1326,_1328,_1330,_1332,asm_magic(3,asm_putnum(_1332,4,asm_putnum(_1330,4,asm_putnum(_1324,4,asm_pass2(_1318,_1320,_1326,_1328,asm_mark_eot(_1340))))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_1__1(mach); }
public static Operation exec_pred_asm_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm0,var1.Deref(),var2,var3,asm.posint0,var4) ;
local_aregs[2] = Data.F(asm.s_functor,var5,asm.s_csym,asm.posint255,Data.F(asm.s_functor,var6,asm.s_lsym,asm.posint255,Data.F(asm.s_global_create,asm.s4,asm.posint0,asm.posint0,Data.F(asm.s_asm_pass1,var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),var7,var8,Data.F(asm.s_asm_magic,asm.posint3,Data.F(asm.s_asm_putnum,var8.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var7.Deref(),asm.posint4,Data.F(asm.s_asm_putnum,var4.Deref(),asm.posint4,Data.F(asm.s_asm_pass2,var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),Data.F(asm.s_asm_mark_eot,continuation)))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm0_5 extends Code {

/*

asm0([],_1454,_1456,_1458,_1460,_1474):- :(true,_1454:=[],:=(_1456,[],:=(_1460,_1458,_1474))).
asm0([_1522|_1524],_1526,_1528,_1530,_1532,_1564):- :(asm_index_inst(_1522,_1538),_1548 is _1530+_1538,unify([_1522|_1556],_1528,asm0(_1524,_1526,_1556,_1548,_1532,_1564))).
asm0([_1618|_1620],_1622,_1624,_1626,_1628,_1648):- :(true,_1622:=[_1618|_1634],asm0(_1620,_1634,_1624,_1626,_1628,_1648)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm0_5__1(mach); }
public static Operation exec_pred_asm0_5__1(Prolog mach){ mach.FillAlternative(pred_asm0_5::exec_pred_asm0_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var1.Deref(),Const.Nil) ;
local_aregs[2] = Data.F(asm.s14,var2.Deref(),Const.Nil,Data.F(asm.s14,var4.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm0_5__2(Prolog mach){ mach.FillAlternative(pred_asm0_5::exec_pred_asm0_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_asm_index_inst,var1.Deref(),var7) ;
local_aregs[1] = Data.F(asm.s_is,var8,Data.F(asm.s5,var5.Deref(),var7.Deref())) ;
local_aregs[2] = Data.F(asm.s_unify,Data.F(asm.s9,var1.Deref(),var9),var4.Deref(),Data.F(asm.s_asm0,var2.Deref(),var3.Deref(),var9.Deref(),var8.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm0_5__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),Data.F(asm.s9,var1.Deref(),var7)) ;
local_aregs[2] = Data.F(asm.s_asm0,var2.Deref(),var7.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass1_6 extends Code {

/*

asm_pass1(_1692,_1694,_1696,_1698,_1700,_1702,_1722):- :(true,asm_pass11(_1692,_1698,_1696,0,_1700),asm_index_pass1(_1694,_1696,asmpass1_fillin(_1698,255,_1696,asmpass1_setundef(_1696,255,0,_1702,_1722)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass1_6__1(mach); }
public static Operation exec_pred_asm_pass1_6__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_pass11,var1.Deref(),var4.Deref(),var3.Deref(),asm.posint0,var5.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_index_pass1,var2.Deref(),var3.Deref(),Data.F(asm.s_asmpass1_fillin,var4.Deref(),asm.posint255,var3.Deref(),Data.F(asm.s_asmpass1_setundef,var3.Deref(),asm.posint255,asm.posint0,var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass1_bp_6 extends Code {

/*

asm_pass1_bp(_1784,_1786,_1788,_1790,_1792,_1794,_1814):- :(true,asm_pass11(_1784,_1790,_1788,0,_1792),asm_index_pass1(_1786,_1788,asmpass1_fillin_bp(_1790,255,_1788,asmpass1_setundef(_1788,255,0,_1794,_1814)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass1_bp_6__1(mach); }
public static Operation exec_pred_asm_pass1_bp_6__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_pass11,var1.Deref(),var4.Deref(),var3.Deref(),asm.posint0,var5.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_index_pass1,var2.Deref(),var3.Deref(),Data.F(asm.s_asmpass1_fillin_bp,var4.Deref(),asm.posint255,var3.Deref(),Data.F(asm.s_asmpass1_setundef,var3.Deref(),asm.posint255,asm.posint0,var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass11_5 extends Code {

/*

asm_pass11([],_1876,_1878,_1880,_1882,_1896):- :(true,_1882:=_1880,_1896).
asm_pass11([_1928|_1930],_1932,_1934,_1936,_1938,_1974):- <=(label(_1942),_1928,:(lab_member1(lab(_1942,_1936),_1932),asm_pass11(_1930,_1932,_1934,_1936,_1938),_1974)).
asm_pass11([_2014|_2016],_2018,_2020,_2022,_2024,_2046):- :(label(_2028)<=_2014,error_double_define(_2028),asm_pass11(_2016,_2018,_2020,_2022,_2024,_2046)).
asm_pass11([_2092|_2094],_2096,_2098,_2100,_2102,_2126):- :(true,asm_pass12(_2092,_2098,_2110),is(_2118,_2100+_2110,asm_pass11(_2094,_2096,_2098,_2118,_2102,_2126))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass11_5__1(mach); }
public static Operation exec_pred_asm_pass11_5__1(Prolog mach){ mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var4.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass11_5__2(Prolog mach){ mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_label,var7) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(asm.s12,Data.F(asm.s_lab_member1,Data.F(asm.s_lab,var7.Deref(),var5.Deref()),var3.Deref()),Data.F(asm.s_asm_pass11,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_$003C$003D_2::exec_static ;}
public static Operation exec_pred_asm_pass11_5__3(Prolog mach){ mach.FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s18,Data.F(asm.s_label,var7),var1.Deref()) ;
local_aregs[1] = Data.F(asm.s_error_double_define,var7.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_pass11,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass11_5__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_pass12,var1.Deref(),var4.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_is,var8,Data.F(asm.s5,var5.Deref(),var7.Deref()),Data.F(asm.s_asm_pass11,var2.Deref(),var3.Deref(),var4.Deref(),var8.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_error_double_define_1 extends Code {

/*

error_double_define((_2186,_2180,_2182),_2196):- :(true,true,_2196).
error_double_define((_2220,_2222),_2258):- :(true,cmp_error(['The predicate ',_2220/_2222,' is doubly defined']),_2258).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_error_double_define_1__1(mach); }
public static Operation exec_pred_error_double_define_1__1(Prolog mach){ mach.FillAlternative(pred_error_double_define_1::exec_pred_error_double_define_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s6,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_error_double_define_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s6,var1,var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_cmp_error,Data.F(asm.s9,asm.s25,Data.F(asm.s9,Data.F(asm.s10,var1.Deref(),var2.Deref()),Data.F(asm.s9,asm.s2,Const.Nil)))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_index_pass1_2 extends Code {

/*

asm_index_pass1([],_2280,_2288):- :(true,true,_2288).
asm_index_pass1([pred(_2314,_2316,_2318,_2320)|_2326],_2328,_2342):- :(true,asm_index_pass1(_2326,_2328),_2342).
asm_index_pass1([arglabel(_2368,_2370,_2372)|_2378],_2380,_2410):- :(_2368==c,sym_member1(sym(_2370,0,_2394,_2396),_2380),asm_index_pass1(_2378,_2380,_2410)).
asm_index_pass1([arglabel(_2450,(_2444,_2446),_2454)|_2460],_2462,_2492):- :(_2450==s,sym_member1(sym(_2444,_2446,_2476,_2478),_2462),asm_index_pass1(_2460,_2462,_2492)).
asm_index_pass1([arglabel(_2526,_2528,_2530)|_2536],_2538,_2552):- :(true,asm_index_pass1(_2536,_2538),_2552).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_index_pass1_2__1(mach); }
public static Operation exec_pred_asm_index_pass1_2__1(Prolog mach){ mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_pass1_2__2(Prolog mach){ mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_pred,var1,var2,var3,var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_index_pass1,var5.Deref(),var6.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_pass1_2__3(Prolog mach){ mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_arglabel,var1,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s21,var1.Deref(),asm.s_c) ;
local_aregs[1] = Data.F(asm.s_sym_member1,Data.F(asm.s_sym,var2.Deref(),asm.posint0,var6,var7),var5.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_index_pass1,var4.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_pass1_2__4(Prolog mach){ mach.FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_arglabel,var1,Data.F(asm.s6,var2,var3),var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s21,var1.Deref(),asm.s_s) ;
local_aregs[1] = Data.F(asm.s_sym_member1,Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var7,var8),var6.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_index_pass1,var5.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_pass1_2__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_arglabel,var1,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_index_pass1,var4.Deref(),var5.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_fillin_3 extends Code {

/*

asmpass1_fillin(_2576,_2578,_2580,_2594):- :(_2578<1,true,_2594).
asmpass1_fillin(_2620,_2622,_2624,_2648):- :(true,arg(_2622,_2620,_2632),asmpass1_fillin(_2632,_2624,is(_2640,_2622-1,asmpass1_fillin(_2620,_2640,_2624,_2648)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_fillin_3__1(mach); }
public static Operation exec_pred_asmpass1_fillin_3__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s16,var2.Deref(),asm.posint1) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_arg,var2.Deref(),var1.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_asmpass1_fillin,var4.Deref(),var3.Deref(),Data.F(asm.s_is,var5,Data.F(asm.s7,var2.Deref(),asm.posint1),Data.F(asm.s_asmpass1_fillin,var1.Deref(),var5.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_fillin_2 extends Code {

/*

asmpass1_fillin(_2700,_2702,_2714):- :(var(_2700),true,_2714).
asmpass1_fillin([lab((_2746,_2740,_2742),_2754)|_2760],_2762,_2776):- :(true,asmpass1_fillin(_2760,_2762),_2776).
asmpass1_fillin([lab((_2802,_2804),_2810)|_2816],_2818,_2842):- :(true,sym_member1(sym(_2802,_2804,_2810,_2828),_2818),asmpass1_fillin(_2816,_2818,_2842)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_fillin_2__1(mach); }
public static Operation exec_pred_asmpass1_fillin_2__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var1.Deref()) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_2__2(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_lab,Data.F(asm.s6,var1,Data.F(asm.s6,var2,var3)),var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asmpass1_fillin,var5.Deref(),var6.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_lab,Data.F(asm.s6,var1,var2),var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_sym_member1,Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var3.Deref(),var6),var5.Deref()) ;
local_aregs[2] = Data.F(asm.s_asmpass1_fillin,var4.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_fillin_bp_3 extends Code {

/*

asmpass1_fillin_bp(_2874,_2876,_2878,_2892):- :(_2876<1,true,_2892).
asmpass1_fillin_bp(_2918,_2920,_2922,_2946):- :(true,arg(_2920,_2918,_2930),asmpass1_fillin_bp(_2930,_2922,is(_2938,_2920-1,asmpass1_fillin_bp(_2918,_2938,_2922,_2946)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_fillin_bp_3__1(mach); }
public static Operation exec_pred_asmpass1_fillin_bp_3__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s16,var2.Deref(),asm.posint1) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_bp_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_arg,var2.Deref(),var1.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_asmpass1_fillin_bp,var4.Deref(),var3.Deref(),Data.F(asm.s_is,var5,Data.F(asm.s7,var2.Deref(),asm.posint1),Data.F(asm.s_asmpass1_fillin_bp,var1.Deref(),var5.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_fillin_bp_2 extends Code {

/*

asmpass1_fillin_bp(_2998,_3000,_3012):- :(var(_2998),true,_3012).
asmpass1_fillin_bp([lab((_3044,_3038,_3040),_3052)|_3058],_3060,_3074):- :(true,asmpass1_fillin_bp(_3058,_3060),_3074).
asmpass1_fillin_bp([lab((_3100,_3102),_3108)|_3114],_3116,_3146):- :(predefined(_3100,_3102),sym_member1(sym(_3100,_3102,_3108,_3132),_3116),asmpass1_fillin_bp(_3114,_3116,_3146)).
asmpass1_fillin_bp([lab((_3180,_3182),_3188)|_3194],_3196,_3210):- :(true,asmpass1_fillin_bp(_3194,_3196),_3210).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_fillin_bp_2__1(mach); }
public static Operation exec_pred_asmpass1_fillin_bp_2__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var1.Deref()) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_bp_2__2(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_lab,Data.F(asm.s6,var1,Data.F(asm.s6,var2,var3)),var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asmpass1_fillin_bp,var5.Deref(),var6.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_bp_2__3(Prolog mach){ mach.FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_lab,Data.F(asm.s6,var1,var2),var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_predefined,var1.Deref(),var2.Deref()) ;
local_aregs[1] = Data.F(asm.s_sym_member1,Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var3.Deref(),var6),var5.Deref()) ;
local_aregs[2] = Data.F(asm.s_asmpass1_fillin_bp,var4.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_fillin_bp_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_lab,Data.F(asm.s6,var1,var2),var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asmpass1_fillin_bp,var4.Deref(),var5.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_setundef_4 extends Code {

/*

asmpass1_setundef(_3234,_3236,_3238,_3240,_3260):- :(_3236<1,_3240=_3238,_3260).
asmpass1_setundef(_3288,_3290,_3292,_3294,_3320):- :(true,arg(_3290,_3288,_3302),asmpass1_setundef(_3302,_3292,_3304,is(_3312,_3290-1,asmpass1_setundef(_3288,_3312,_3304,_3294,_3320)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_setundef_4__1(mach); }
public static Operation exec_pred_asmpass1_setundef_4__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s16,var2.Deref(),asm.posint1) ;
local_aregs[1] = Data.F(asm.s19,var4.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_setundef_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_arg,var2.Deref(),var1.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_asmpass1_setundef,var5.Deref(),var3.Deref(),var6,Data.F(asm.s_is,var7,Data.F(asm.s7,var2.Deref(),asm.posint1),Data.F(asm.s_asmpass1_setundef,var1.Deref(),var7.Deref(),var6.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asmpass1_setundef_3 extends Code {

/*

asmpass1_setundef(_3378,_3380,_3382,_3400):- :(var(_3378),_3382=_3380,_3400).
asmpass1_setundef([sym(_3428,_3430,_3432,_3434)|_3440],_3442,_3444,_3478):- :(var(_3432),_3432:= -2,b_GET_LENGTH_cf(_3428,_3456,is(_3470,_3442+_3456+6,asmpass1_setundef(_3440,_3470,_3444,_3478)))).
asmpass1_setundef([sym(_3532,_3534,_3536,_3538)|_3544],_3546,_3548,_3576):- :(true,b_GET_LENGTH_cf(_3532,_3554),is(_3568,_3546+_3554+6,asmpass1_setundef(_3544,_3568,_3548,_3576))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asmpass1_setundef_3__1(mach); }
public static Operation exec_pred_asmpass1_setundef_3__1(Prolog mach){ mach.FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var1.Deref()) ;
local_aregs[1] = Data.F(asm.s19,var3.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_setundef_3__2(Prolog mach){ mach.FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_sym,var1,var2,var3,var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var3.Deref()) ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),asm.negint2) ;
local_aregs[2] = Data.F(asm.s_b_GET_LENGTH_cf,var1.Deref(),var8,Data.F(asm.s_is,var9,Data.F(asm.s5,Data.F(asm.s5,var6.Deref(),var8.Deref()),asm.posint6),Data.F(asm.s_asmpass1_setundef,var5.Deref(),var9.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asmpass1_setundef_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_sym,var1,var2,var3,var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_b_GET_LENGTH_cf,var1.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_is,var9,Data.F(asm.s5,Data.F(asm.s5,var6.Deref(),var8.Deref()),asm.posint6),Data.F(asm.s_asmpass1_setundef,var5.Deref(),var9.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass12_3 extends Code {

/*

asm_pass12(label(_3658),_3660,0,_3670):-call(_3670).
asm_pass12(jmp(_3690),_3692,2,_3702):-call(_3702).
asm_pass12(jmpn_eq_struct_x(_3728,(_3722,_3724),_3732,_3734),_3736,5,_3754):-sym_member1(sym(_3722,_3724,_3744,_3746),_3736,_3754).
asm_pass12(jmpn_eq_struct_y(_3788,(_3782,_3784),_3792,_3794),_3796,5,_3814):-sym_member1(sym(_3782,_3784,_3804,_3806),_3796,_3814).
asm_pass12(jmpn_eq_atom_x(_3842,_3844,_3846,_3848),_3850,5,_3868):-sym_member1(sym(_3844,0,_3858,_3860),_3850,_3868).
asm_pass12(jmpn_eq_atom_y(_3896,_3898,_3900,_3902),_3904,5,_3922):-sym_member1(sym(_3898,0,_3912,_3914),_3904,_3922).
asm_pass12(jmpn_nil_x(_3950,_3952,_3954),_3956,4,_3966):-call(_3966).
asm_pass12(jmpn_nil_y(_3986,_3988,_3990),_3992,4,_4002):-call(_4002).
asm_pass12(switch_list_x(_4022,_4024,_4026,_4028),_4030,5,_4040):-call(_4040).
asm_pass12(switch_list_y(_4060,_4062,_4064,_4066),_4068,5,_4078):-call(_4078).
asm_pass12(switch_list_yxx(_4098,_4100,_4102,_4104),_4106,5,_4116):-call(_4116).
asm_pass12(switch_list_yxy(_4136,_4138,_4140,_4142),_4144,5,_4154):-call(_4154).
asm_pass12(switch_list_yyx(_4174,_4176,_4178,_4180),_4182,5,_4192):-call(_4192).
asm_pass12(switch_list_yyy(_4212,_4214,_4216,_4218),_4220,5,_4230):-call(_4230).
asm_pass12(jmpn_eq_int_x(_4250,_4252,_4254,_4256),_4258,5,_4268):-call(_4268).
asm_pass12(jmpn_eq_int_y(_4288,_4290,_4292,_4294),_4296,5,_4306):-call(_4306).
asm_pass12(jmpn_eql(_4326,_4328,_4330),_4332,4,_4342):-call(_4342).
asm_pass12(jmp_eql(_4362,_4364,_4366),_4368,4,_4378):-call(_4378).
asm_pass12(jmp_eql_yy(_4398,_4400,_4402),_4404,4,_4414):-call(_4414).
asm_pass12(jmpn_gt(_4434,_4436,_4438),_4440,4,_4450):-call(_4450).
asm_pass12(jmpn_gt_yy(_4470,_4472,_4474),_4476,4,_4486):-call(_4486).
asm_pass12(jmpn_ge(_4506,_4508,_4510),_4512,4,_4522):-call(_4522).
asm_pass12(jmpn_ge_yy(_4542,_4544,_4546),_4548,4,_4558):-call(_4558).
asm_pass12(jmpn_id(_4578,_4580,_4582),_4584,4,_4594):-call(_4594).
asm_pass12(jmp_id(_4614,_4616,_4618),_4620,4,_4630):-call(_4630).
asm_pass12(jmpn_var_x(_4650,_4652),_4654,3,_4664):-call(_4664).
asm_pass12(jmpn_var_y(_4684,_4686),_4688,3,_4698):-call(_4698).
asm_pass12(jmp_var_x(_4718,_4720),_4722,3,_4732):-call(_4732).
asm_pass12(jmp_var_y(_4752,_4754),_4756,3,_4766):-call(_4766).
asm_pass12(jmpn_atom_x(_4786,_4788),_4790,3,_4800):-call(_4800).
asm_pass12(jmpn_atom_y(_4820,_4822),_4824,3,_4834):-call(_4834).
asm_pass12(jmpn_atomic_x(_4854,_4856),_4858,3,_4868):-call(_4868).
asm_pass12(jmpn_atomic_y(_4888,_4890),_4892,3,_4902):-call(_4902).
asm_pass12(jmpn_num_x(_4922,_4924),_4926,3,_4936):-call(_4936).
asm_pass12(jmpn_num_y(_4956,_4958),_4960,3,_4970):-call(_4970).
asm_pass12(jmpn_int_x(_4990,_4992),_4994,3,_5004):-call(_5004).
asm_pass12(jmpn_int_y(_5024,_5026),_5028,3,_5038):-call(_5038).
asm_pass12(jmpn_float_x(_5058,_5060),_5062,3,_5072):-call(_5072).
asm_pass12(jmpn_float_y(_5092,_5094),_5096,3,_5106):-call(_5106).
asm_pass12(hash_jmpn_nil(_5126),_5128,2,_5138):-call(_5138).
asm_pass12(hash_jmpn_list(_5158),_5160,2,_5170):-call(_5170).
asm_pass12(hash_jmpn_int(_5190,_5192),_5194,3,_5204):-call(_5204).
asm_pass12(hash_jmpn_atom(_5224,_5226),_5228,3,_5246):-sym_member1(sym(_5224,0,_5236,_5238),_5228,_5246).
asm_pass12(hash_jmpn_struct((_5274,_5276),_5282),_5284,3,_5302):-sym_member1(sym(_5274,_5276,_5292,_5294),_5284,_5302).
asm_pass12(hash_jmpn_struct_x((_5330,_5332),_5338),_5340,3,_5358):-sym_member1(sym(_5330,_5332,_5348,_5350),_5340,_5358).
asm_pass12(hash_jmpn_struct_y((_5386,_5388),_5394),_5396,3,_5414):-sym_member1(sym(_5386,_5388,_5404,_5406),_5396,_5414).
asm_pass12(hash_jmpn_struct_xx((_5442,_5444),_5450),_5452,3,_5470):-sym_member1(sym(_5442,_5444,_5460,_5462),_5452,_5470).
asm_pass12(hash_jmpn_struct_xy((_5498,_5500),_5506),_5508,3,_5526):-sym_member1(sym(_5498,_5500,_5516,_5518),_5508,_5526).
asm_pass12(hash_jmpn_struct_yx((_5554,_5556),_5562),_5564,3,_5582):-sym_member1(sym(_5554,_5556,_5572,_5574),_5564,_5582).
asm_pass12(hash_jmpn_struct_yy((_5610,_5612),_5618),_5620,3,_5638):-sym_member1(sym(_5610,_5612,_5628,_5630),_5620,_5638).
asm_pass12(unify_struct_x(_5672,(_5666,_5668)),_5676,3,_5694):-sym_member1(sym(_5666,_5668,_5684,_5686),_5676,_5694).
asm_pass12(unify_struct_y(_5728,(_5722,_5724)),_5732,3,_5750):-sym_member1(sym(_5722,_5724,_5740,_5742),_5732,_5750).
asm_pass12(unify_list_x(_5778),_5780,2,_5790):-call(_5790).
asm_pass12(unify_list_y(_5810),_5812,2,_5822):-call(_5822).
asm_pass12(unify_nil_x(_5842),_5844,2,_5854):-call(_5854).
asm_pass12(unify_nil_y(_5874),_5876,2,_5886):-call(_5886).
asm_pass12(unify_atom_x(_5906,_5908),_5910,3,_5928):-sym_member1(sym(_5908,0,_5918,_5920),_5910,_5928).
asm_pass12(unify_atom_y(_5956,_5958),_5960,3,_5978):-sym_member1(sym(_5958,0,_5968,_5970),_5960,_5978).
asm_pass12(unify_int_x(_6006,_6008),_6010,3,_6020):-call(_6020).
asm_pass12(unify_int_y(_6040,_6042),_6044,3,_6054):-call(_6054).
asm_pass12(unify_ux_ux(_6074,_6076),_6078,3,_6088):-call(_6088).
asm_pass12(unify_ux_uy(_6108,_6110),_6112,3,_6122):-call(_6122).
asm_pass12(unify_uy_uy(_6142,_6144),_6146,3,_6156):-call(_6156).
asm_pass12(unify_cons_x(_6176,_6178),_6180,3,_6190):-call(_6190).
asm_pass12(unify_cons_y(_6210,_6212),_6214,3,_6224):-call(_6224).
asm_pass12(fork_unify_struct_y(_6250,(_6244,_6246),_6254),_6256,4,_6274):-sym_member1(sym(_6244,_6246,_6264,_6266),_6256,_6274).
asm_pass12(fork_unify_list_y(_6302,_6304),_6306,3,_6316):-call(_6316).
asm_pass12(fork_unify_nil_y(_6336,_6338),_6340,3,_6350):-call(_6350).
asm_pass12(fork_unify_atom_y(_6370,_6372,_6374),_6376,4,_6394):-sym_member1(sym(_6372,0,_6384,_6386),_6376,_6394).
asm_pass12(fork_unify_int_y(_6422,_6424,_6426),_6428,4,_6438):-call(_6438).
asm_pass12(fork_unify_ux_uy(_6458,_6460,_6462),_6464,4,_6474):-call(_6474).
asm_pass12(fork_unify_uy_uy(_6494,_6496,_6498),_6500,4,_6510):-call(_6510).
asm_pass12(fork_unicut_struct_y(_6536,(_6530,_6532),_6540),_6542,4,_6560):-sym_member1(sym(_6530,_6532,_6550,_6552),_6542,_6560).
asm_pass12(fork_unicut_list_y(_6588,_6590),_6592,3,_6602):-call(_6602).
asm_pass12(fork_unicut_nil_y(_6622,_6624),_6626,3,_6636):-call(_6636).
asm_pass12(fork_unicut_atom_y(_6656,_6658,_6660),_6662,4,_6680):-sym_member1(sym(_6658,0,_6670,_6672),_6662,_6680).
asm_pass12(fork_unicut_int_y(_6708,_6710,_6712),_6714,4,_6724):-call(_6724).
asm_pass12(fork_unicut_ux_uy(_6744,_6746,_6748),_6750,4,_6760):-call(_6760).
asm_pass12(fork_unicut_uy_uy(_6780,_6782,_6784),_6786,4,_6796):-call(_6796).
asm_pass12(unify0_struct_y(_6822,(_6816,_6818)),_6826,3,_6844):-sym_member1(sym(_6816,_6818,_6834,_6836),_6826,_6844).
asm_pass12(unify0_list_y(_6872),_6874,2,_6884):-call(_6884).
asm_pass12(unify0_nil_y(_6904),_6906,2,_6916):-call(_6916).
asm_pass12(unify0_atom_y(_6936,_6938),_6940,3,_6958):-sym_member1(sym(_6938,0,_6948,_6950),_6940,_6958).
asm_pass12(unify0_int_y(_6986,_6988),_6990,3,_7000):-call(_7000).
asm_pass12(unify0_ux_uy(_7020,_7022),_7024,3,_7034):-call(_7034).
asm_pass12(unify0_uy_uy(_7054,_7056),_7058,3,_7068):-call(_7068).
asm_pass12(unicut_struct_y(_7094,(_7088,_7090)),_7098,3,_7116):-sym_member1(sym(_7088,_7090,_7106,_7108),_7098,_7116).
asm_pass12(unicut_list_y(_7144),_7146,2,_7156):-call(_7156).
asm_pass12(unicut_nil_y(_7176),_7178,2,_7188):-call(_7188).
asm_pass12(unicut_atom_y(_7208,_7210),_7212,3,_7230):-sym_member1(sym(_7210,0,_7220,_7222),_7212,_7230).
asm_pass12(unicut_int_y(_7258,_7260),_7262,3,_7272):-call(_7272).
asm_pass12(unicut_uy_uy(_7292,_7294),_7296,3,_7306):-call(_7306).
asm_pass12(unicut,_7324,1,_7334):-call(_7334).
asm_pass12(unify_arg_nil,_7352,1,_7362):-call(_7362).
asm_pass12(unify_arg_atom(_7382),_7384,2,_7402):-sym_member1(sym(_7382,0,_7392,_7394),_7384,_7402).
asm_pass12(unify_arg_int(_7430),_7432,2,_7442):-call(_7442).
asm_pass12(unify_arg_ux_ux(_7462,_7464),_7466,3,_7476):-call(_7476).
asm_pass12(unify_arg_ux(_7496),_7498,2,_7508):-call(_7508).
asm_pass12(unify_arg_ux_vy(_7528,_7530),_7532,3,_7542):-call(_7542).
asm_pass12(unify_arg_ux_vx(_7562,_7564),_7566,3,_7576):-call(_7576).
asm_pass12(unify_arg_uy_uy(_7596,_7598),_7600,3,_7610):-call(_7610).
asm_pass12(unify_arg_uy(_7630),_7632,2,_7642):-call(_7642).
asm_pass12(unify_arg_vx(_7662),_7664,2,_7674):-call(_7674).
asm_pass12(unify_arg_vy(_7694),_7696,2,_7706):-call(_7706).
asm_pass12(unify_arg_list,_7724,1,_7734):-call(_7734).
asm_pass12(unify_arg_struct((_7754,_7756)),_7762,2,_7780):-sym_member1(sym(_7754,_7756,_7770,_7772),_7762,_7780).
asm_pass12(unify_arg_void_one,_7806,1,_7816):-call(_7816).
asm_pass12(unify_arg_void(_7836),_7838,2,_7848):-call(_7848).
asm_pass12(unify_arg_wy(_7868),_7870,2,_7880):-call(_7880).
asm_pass12(unify_arg_vx_vx(_7900,_7902),_7904,3,_7914):-call(_7914).
asm_pass12(unify_arg_vx_vy(_7934,_7936),_7938,3,_7948):-call(_7948).
asm_pass12(unify_arg_vx_ux(_7968,_7970),_7972,3,_7982):-call(_7982).
asm_pass12(unify_arg_vx_uy(_8002,_8004),_8006,3,_8016):-call(_8016).
asm_pass12(unify_arg_vy_vx(_8036,_8038),_8040,3,_8050):-call(_8050).
asm_pass12(unify_arg_vy_vy(_8070,_8072),_8074,3,_8084):-call(_8084).
asm_pass12(unify_arg_vy_ux(_8104,_8106),_8108,3,_8118):-call(_8118).
asm_pass12(unify_arg_vy_uy(_8138,_8140),_8142,3,_8152):-call(_8152).
asm_pass12(unify_arg_iii(_8172,_8174,_8176),_8178,4,_8188):-call(_8188).
asm_pass12(move_struct_x(_8214,(_8208,_8210)),_8218,3,_8236):-sym_member1(sym(_8208,_8210,_8226,_8228),_8218,_8236).
asm_pass12(move_struct_y(_8270,(_8264,_8266)),_8274,3,_8292):-sym_member1(sym(_8264,_8266,_8282,_8284),_8274,_8292).
asm_pass12(move_list_x(_8320),_8322,2,_8332):-call(_8332).
asm_pass12(move_list_y(_8352),_8354,2,_8364):-call(_8364).
asm_pass12(move_nil_x(_8384),_8386,2,_8396):-call(_8396).
asm_pass12(move_nil_y(_8416),_8418,2,_8428):-call(_8428).
asm_pass12(move_atom_x(_8448,_8450),_8452,3,_8470):-sym_member1(sym(_8450,0,_8460,_8462),_8452,_8470).
asm_pass12(move_atom_y(_8498,_8500),_8502,3,_8520):-sym_member1(sym(_8500,0,_8510,_8512),_8502,_8520).
asm_pass12(move_int_x(_8548,_8550),_8552,3,_8562):-call(_8562).
asm_pass12(move_int_y(_8582,_8584),_8586,3,_8596):-call(_8596).
asm_pass12(move_x_ux(_8616,_8618),_8620,3,_8630):-call(_8630).
asm_pass12(move_x_uy(_8650,_8652),_8654,3,_8664):-call(_8664).
asm_pass12(move_y_ux(_8684,_8686),_8688,3,_8698):-call(_8698).
asm_pass12(move_y_uy(_8718,_8720),_8722,3,_8732):-call(_8732).
asm_pass12(move_vx(_8752),_8754,2,_8764):-call(_8764).
asm_pass12(move_vy(_8784),_8786,2,_8796):-call(_8796).
asm_pass12(move_x_wy(_8816,_8818),_8820,3,_8830):-call(_8830).
asm_pass12(move_y_wy(_8850,_8852),_8854,3,_8864):-call(_8864).
asm_pass12(move_yy_yw(_8884,_8886,_8888,_8890),_8892,5,_8902):-call(_8902).
asm_pass12(move_yw_yy(_8922,_8924,_8926,_8928),_8930,5,_8940):-call(_8940).
asm_pass12(move_yy_yy(_8960,_8962,_8964,_8966),_8968,5,_8978):-call(_8978).
asm_pass12(move_yy_yy_yy(_8998,_9000,_9002,_9004,_9006,_9008),_9010,7,_9020):-call(_9020).
asm_pass12(and(_9040,_9042,_9044),_9046,4,_9056):-call(_9056).
asm_pass12(or(_9076,_9078,_9080),_9082,4,_9092):-call(_9092).
asm_pass12(lshiftl(_9112,_9114,_9116),_9118,4,_9128):-call(_9128).
asm_pass12(lshiftr(_9148,_9150,_9152),_9154,4,_9164):-call(_9164).
asm_pass12(complement(_9184,_9186),_9188,3,_9198):-call(_9198).
asm_pass12(add(_9218,_9220,_9222),_9224,4,_9234):-call(_9234).
asm_pass12(add1_y(_9254),_9256,2,_9266):-call(_9266).
asm_pass12(sub(_9286,_9288,_9290),_9292,4,_9302):-call(_9302).
asm_pass12(sub1_y(_9322),_9324,2,_9334):-call(_9334).
asm_pass12(mul(_9354,_9356,_9358),_9360,4,_9370):-call(_9370).
asm_pass12(div(_9390,_9392,_9394),_9396,4,_9406):-call(_9406).
asm_pass12(idiv(_9426,_9428,_9430),_9432,4,_9442):-call(_9442).
asm_pass12(mod(_9462,_9464,_9466),_9468,4,_9478):-call(_9478).
asm_pass12(para_struct((_9498,_9500)),_9506,2,_9524):-sym_member1(sym(_9498,_9500,_9514,_9516),_9506,_9524).
asm_pass12(para_list,_9550,1,_9560):-call(_9560).
asm_pass12(para_nil,_9578,1,_9588):-call(_9588).
asm_pass12(para_atom(_9608),_9610,2,_9628):-sym_member1(sym(_9608,0,_9618,_9620),_9610,_9628).
asm_pass12(para_int(_9656),_9658,2,_9668):-call(_9668).
asm_pass12(para_ux(_9688),_9690,2,_9700):-call(_9700).
asm_pass12(para_uy(_9720),_9722,2,_9732):-call(_9732).
asm_pass12(para_vx(_9752),_9754,2,_9764):-call(_9764).
asm_pass12(para_vy(_9784),_9786,2,_9796):-call(_9796).
asm_pass12(para_void_one,_9814,1,_9824):-call(_9824).
asm_pass12(para_void(_9844),_9846,2,_9856):-call(_9856).
asm_pass12(para_vy_vy(_9876,_9878),_9880,3,_9890):-call(_9890).
asm_pass12(para_vy_ux(_9910,_9912),_9914,3,_9924):-call(_9924).
asm_pass12(para_vy_uy(_9944,_9946),_9948,3,_9958):-call(_9958).
asm_pass12(para_ux_vy(_9978,_9980),_9982,3,_9992):-call(_9992).
asm_pass12(para_ux_ux(_10012,_10014),_10016,3,_10026):-call(_10026).
asm_pass12(para_ux_uy(_10046,_10048),_10050,3,_10060):-call(_10060).
asm_pass12(para_uy_vy(_10080,_10082),_10084,3,_10094):-call(_10094).
asm_pass12(para_uy_ux(_10114,_10116),_10118,3,_10128):-call(_10128).
asm_pass12(para_uy_uy(_10148,_10150),_10152,3,_10162):-call(_10162).
asm_pass12(para_ux_ux_ux(_10182,_10184,_10186),_10188,4,_10198):-call(_10198).
asm_pass12(para_ux_ux_uy(_10218,_10220,_10222),_10224,4,_10234):-call(_10234).
asm_pass12(para_ux_uy_ux(_10254,_10256,_10258),_10260,4,_10270):-call(_10270).
asm_pass12(para_ux_uy_uy(_10290,_10292,_10294),_10296,4,_10306):-call(_10306).
asm_pass12(para_uy_ux_ux(_10326,_10328,_10330),_10332,4,_10342):-call(_10342).
asm_pass12(para_uy_ux_uy(_10362,_10364,_10366),_10368,4,_10378):-call(_10378).
asm_pass12(para_uy_uy_ux(_10398,_10400,_10402),_10404,4,_10414):-call(_10414).
asm_pass12(para_uy_uy_uy(_10434,_10436,_10438),_10440,4,_10450):-call(_10450).
asm_pass12(para_uy_uy_uy_uy(_10470,_10472,_10474,_10476),_10478,5,_10488):-call(_10488).
asm_pass12(call((_10508,_10510)),_10516,2,_10524):-asm_pass12_call(_10508,_10510,_10516,_10524).
asm_pass12(callv(_10554),_10556,2,_10566):-call(_10566).
asm_pass12(execute((_10586,_10588)),_10594,2,_10602):-asm_pass12_call(_10586,_10588,_10594,_10602).
asm_pass12(executev(_10632),_10634,2,_10644):-call(_10644).
asm_pass12(return_a,_10662,1,_10672):-call(_10672).
asm_pass12(return_b,_10690,1,_10700):-call(_10700).
asm_pass12(jmpn_det(_10720),_10722,2,_10732):-call(_10732).
asm_pass12(save_ht_jmp(_10752,_10754),_10756,3,_10766):-call(_10766).
asm_pass12(allocate_flat(_10786),_10788,2,_10798):-call(_10798).
asm_pass12(allocate_nonflat(_10818),_10820,2,_10830):-call(_10830).
asm_pass12(allocate_nondet(_10850),_10852,2,_10862):-call(_10862).
asm_pass12(flat_to_nondet(_10882),_10884,2,_10894):-call(_10894).
asm_pass12(fail,_10912,1,_10922):-call(_10922).
asm_pass12(fail0,_10940,1,_10950):-call(_10950).
asm_pass12(fork(_10970),_10972,2,_10982):-call(_10982).
asm_pass12(commit,_11000,1,_11010):-call(_11010).
asm_pass12(cut,_11028,1,_11038):-call(_11038).
asm_pass12(cut_fail,_11056,1,_11066):-call(_11066).
asm_pass12(cut_return,_11084,1,_11094):-call(_11094).
asm_pass12(save_b,_11112,1,_11122):-call(_11122).
asm_pass12(getbreg(_11142),_11144,2,_11154):-call(_11154).
asm_pass12(getpbreg(_11174),_11176,2,_11186):-call(_11186).
asm_pass12(putbreg(_11206),_11208,2,_11218):-call(_11218).
asm_pass12(hash_x(_11238,_11240),_11242,5,_11252):-call(_11252).
asm_pass12(hash_y(_11272,_11274),_11276,5,_11286):-call(_11286).
asm_pass12(tabsize(_11306),_11308,2,_11318):-call(_11318).
asm_pass12(arg(_11338,_11340,_11342),_11344,4,_11354):-call(_11354).
asm_pass12(arg0(_11374,_11376,_11378),_11380,4,_11390):-call(_11390).
asm_pass12(setarg(_11410,_11412,_11414),_11416,4,_11426):-call(_11426).
asm_pass12(setarg0(_11446,_11448,_11450),_11452,4,_11462):-call(_11462).
asm_pass12(functor(_11482,_11484,_11486),_11488,4,_11498):-call(_11498).
asm_pass12(builtin0(_11518,_11520),_11522,3,_11532):-call(_11532).
asm_pass12(builtin1(_11552,_11554,_11556),_11558,4,_11568):-call(_11568).
asm_pass12(builtin2(_11588,_11590,_11592,_11594),_11596,5,_11606):-call(_11606).
asm_pass12(builtin3(_11626,_11628,_11630,_11632,_11634),_11636,6,_11646):-call(_11646).
asm_pass12(builtin4(_11666,_11668,_11670,_11672,_11674,_11676),_11678,7,_11688):-call(_11688).
asm_pass12(func_arity(_11708,_11710),_11712,3,_11722):-call(_11722).
asm_pass12(halt,_11740,1,_11750):-call(_11750).
asm_pass12(endfile,_11768,1,_11778):-call(_11778).
asm_pass12(gethtreg(_11798,_11800),_11802,3,_11812):-call(_11812).
asm_pass12(puthtreg(_11832,_11834),_11836,3,_11846):-call(_11846).
asm_pass12(endfile,_11864,1,_11874):-call(_11874).
asm_pass12(get_ar_cps,_11892,1,_11902):-call(_11902).
asm_pass12(put_ar_cps(_11922),_11924,2,_11934):-call(_11934).
asm_pass12(move_ar_cps(_11954),_11956,2,_11966):-call(_11966).
asm_pass12(jmpn_det_get_ar_cps(_11986),_11988,2,_11998):-call(_11998).
asm_pass12(allocate_susp(_12018),_12020,2,_12030):-call(_12030).
asm_pass12(susp_var_x(_12050),_12052,2,_12062):-call(_12062).
asm_pass12(susp_var_y(_12082),_12084,2,_12094):-call(_12094).
asm_pass12(delay((_12114,_12116),_12122),_12124,3,_12142):-sym_member1(sym(_12114,_12116,_12132,_12134),_12124,_12142).
asm_pass12(susp_var_delay(_12176,(_12170,_12172),_12180,_12182),_12184,5,_12202):-sym_member1(sym(_12170,_12172,_12192,_12194),_12184,_12202).
asm_pass12(end_delay,_12228,1,_12238):-call(_12238).
asm_pass12(nondet(_12258),_12260,2,_12270):-call(_12270).
asm_pass12(jmp_susp(_12290),_12292,2,_12302):-call(_12302).
asm_pass12(jmpn_dvar_y(_12322,_12324),_12326,3,_12336):-call(_12336).
asm_pass12(susp_var2_delay(_12362,(_12356,_12358),_12366,_12368),_12370,5,_12388):-sym_member1(sym(_12356,_12358,_12378,_12380),_12370,_12388).
asm_pass12(domain_set_false_yy(_12416,_12418),_12420,3,_12430):-call(_12430).
asm_pass12(domain_set_false_yx(_12450,_12452),_12454,3,_12464):-call(_12464).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass12_3__1(mach); }
public static Operation exec_pred_asm_pass12_3__1(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_label,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__2(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__3(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_struct_x,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var7,var8) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__4(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_struct_y,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var7,var8) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__5(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_atom_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var6,var7) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__6(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_atom_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var6,var7) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__7(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_nil_x,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__8(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_nil_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__9(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__10(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__11(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yxx,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__12(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yxy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__13(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yyx,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__14(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yyy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__15(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_int_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__16(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_int_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__17(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eql,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__18(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_eql,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__19(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_eql_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__20(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_gt,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__21(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_gt_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__22(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_ge,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__23(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_ge_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__24(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_id,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__25(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_id,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__26(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_var_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__27(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_var_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__28(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_var_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__29(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_var_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__30(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__31(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__32(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atomic_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__33(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atomic_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__34(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_num_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__35(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_num_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__36(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_int_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__37(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__38(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_float_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__39(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_float_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__40(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__41) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_nil,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__41(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__42) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_list,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__42(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__43) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_int,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__43(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__44) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_atom,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__44(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__45) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__45(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__46) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_x,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__46(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__47) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_y,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__47(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__48) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_xx,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__48(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__49) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_xy,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__49(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__50) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_yx,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__50(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__51) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_yy,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__51(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__52) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_struct_x,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__52(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__53) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__53(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__54) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_list_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__54(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__55) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_list_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__55(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__56) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_nil_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__56(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__57) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_nil_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__57(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__58) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__58(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__59) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__59(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__60) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_int_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__60(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__61) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__61(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__62) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_ux_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__62(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__63) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_ux_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__63(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__64) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_uy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__64(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__65) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_cons_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__65(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__66) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_cons_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__66(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__67) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_struct_y,var1,Data.F(asm.s6,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var6,var7) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__67(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__68) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_list_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__68(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__69) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_nil_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__69(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__70) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_atom_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__70(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__71) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_int_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__71(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__72) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_ux_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__72(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__73) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__73(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__74) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_struct_y,var1,Data.F(asm.s6,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var6,var7) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__74(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__75) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_list_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__75(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__76) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_nil_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__76(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__77) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_atom_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__77(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__78) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_int_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__78(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__79) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_ux_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__79(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__80) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__80(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__81) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__81(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__82) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_list_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__82(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__83) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_nil_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__83(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__84) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__84(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__85) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__85(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__86) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_ux_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__86(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__87) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_uy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__87(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__88) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__88(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__89) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_list_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__89(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__90) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_nil_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__90(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__91) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__91(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__92) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__92(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__93) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_uy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__93(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__94) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_unicut,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__94(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__95) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_unify_arg_nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__95(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__96) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_atom,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),asm.posint0,var3,var4) ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__96(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__97) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_int,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__97(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__98) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_ux_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__98(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__99) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_ux,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__99(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__100) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_ux_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__100(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__101) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_ux_vx,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__101(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__102) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_uy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__102(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__103) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_uy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__103(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__104) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vx,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__104(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__105) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__105(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__106) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_unify_arg_list,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__106(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__107) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_struct,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__107(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__108) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_unify_arg_void_one,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__108(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__109) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_void,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__109(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__110) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_wy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__110(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__111) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vx_vx,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__111(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__112) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vx_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__112(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__113) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vx_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__113(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__114) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vx_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__114(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__115) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vy_vx,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__115(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__116) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vy_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__116(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__117) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vy_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__117(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__118) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_vy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__118(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__119) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_iii,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__119(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__120) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_struct_x,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__120(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__121) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__121(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__122) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_list_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__122(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__123) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_list_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__123(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__124) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_nil_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__124(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__125) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_nil_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__125(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__126) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__126(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__127) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),asm.posint0,var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__127(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__128) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_int_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__128(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__129) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__129(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__130) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_x_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__130(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__131) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_x_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__131(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__132) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_y_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__132(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__133) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_y_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__133(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__134) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_vx,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__134(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__135) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_vy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__135(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__136) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_x_wy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__136(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__137) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_y_wy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__137(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__138) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_yy_yw,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__138(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__139) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_yw_yy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__139(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__140) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_yy_yy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__140(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__141) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_yy_yy_yy,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint7,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__141(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__142) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_and,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__142(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__143) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_or,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__143(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__144) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_lshiftl,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__144(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__145) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_lshiftr,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__145(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__146) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_complement,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__146(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__147) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_add,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__147(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__148) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_add1_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__148(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__149) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_sub,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__149(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__150) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_sub1_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__150(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__151) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_mul,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__151(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__152) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_div,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__152(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__153) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_idiv,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__153(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__154) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_mod,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__154(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__155) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_struct,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var4,var5) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__155(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__156) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_para_list,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__156(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__157) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_para_nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__157(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__158) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_atom,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),asm.posint0,var3,var4) ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__158(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__159) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_int,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__159(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__160) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__160(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__161) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__161(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__162) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_vx,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__162(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__163) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_vy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__163(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__164) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_para_void_one,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__164(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__165) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_void,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__165(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__166) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_vy_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__166(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__167) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_vy_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__167(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__168) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_vy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__168(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__169) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__169(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__170) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__170(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__171) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__171(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__172) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_vy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__172(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__173) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_ux,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__173(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__174) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_uy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__174(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__175) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_ux_ux,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__175(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__176) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_ux_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__176(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__177) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_uy_ux,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__177(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__178) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_ux_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__178(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__179) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_ux_ux,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__179(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__180) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_ux_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__180(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__181) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_uy_ux,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__181(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__182) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__182(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__183) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_uy_uy_uy_uy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__183(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__184) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_call,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_asm_pass12_call_3::exec_static ;}
public static Operation exec_pred_asm_pass12_3__184(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__185) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_callv,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__185(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__186) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_execute,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_asm_pass12_call_3::exec_static ;}
public static Operation exec_pred_asm_pass12_3__186(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__187) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_executev,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__187(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__188) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_return_a,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__188(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__189) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_return_b,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__189(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__190) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_det,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__190(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__191) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_save_ht_jmp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__191(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__192) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_allocate_flat,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__192(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__193) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_allocate_nonflat,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__193(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__194) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_allocate_nondet,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__194(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__195) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_flat_to_nondet,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__195(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__196) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_fail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__196(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__197) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_fail0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__197(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__198) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__198(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__199) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_commit,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__199(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__200) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_cut,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__200(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__201) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_cut_fail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__201(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__202) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_cut_return,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__202(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__203) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_save_b,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__203(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__204) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_getbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__204(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__205) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_getpbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__205(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__206) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_putbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__206(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__207) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__207(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__208) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__208(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__209) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_tabsize,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__209(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__210) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__210(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__211) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arg0,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__211(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__212) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_setarg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__212(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__213) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_setarg0,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__213(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__214) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_functor,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__214(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__215) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin0,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__215(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__216) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin1,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__216(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__217) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin2,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__217(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__218) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin3,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint6,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__218(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__219) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin4,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint7,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__219(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__220) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_func_arity,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__220(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__221) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_halt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__221(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__222) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_endfile,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__222(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__223) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_gethtreg,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__223(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__224) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_puthtreg,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__224(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__225) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_endfile,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__225(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__226) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_get_ar_cps,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__226(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__227) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_put_ar_cps,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__227(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__228) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_ar_cps,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__228(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__229) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_det_get_ar_cps,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__229(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__230) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_allocate_susp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__230(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__231) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__231(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__232) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__232(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__233) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_delay,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var5,var6) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__233(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__234) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var_delay,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var7,var8) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__234(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__235) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(asm.s_end_delay,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__235(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__236) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_nondet,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__236(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__237) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_susp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__237(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__238) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_dvar_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__238(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__239) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var2_delay,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_sym,var2.Deref(),var3.Deref(),var7,var8) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sym_member1_2::exec_static ;}
public static Operation exec_pred_asm_pass12_3__239(Prolog mach){ mach.FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__240) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_domain_set_false_yy,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_asm_pass12_3__240(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_domain_set_false_yx,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_asm_pass12_call_3 extends Code {

/*

asm_pass12_call(_12482,_12484,_12486,_12502):-isglobal('$asm_bp',0,b_GET_SYM_TYPE_ccf(_12482,_12484,_12488,:(_12488=\=3,true,_12502))).
asm_pass12_call(_12546,_12548,_12550,_12574):- :(true,sym_member1(sym(_12546,_12548,_12558,_12560),_12550),_12574).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass12_call_3__1(mach); }
public static Operation exec_pred_asm_pass12_call_3__1(Prolog mach){ mach.FillAlternative(pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s3 ;
local_aregs[1] = asm.posint0 ;
local_aregs[2] = Data.F(asm.s_b_GET_SYM_TYPE_ccf,var1.Deref(),var2.Deref(),var4,Data.F(asm.s12,Data.F(asm.s22,var4.Deref(),asm.posint3),asm.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_isglobal_2::exec_static ;}
public static Operation exec_pred_asm_pass12_call_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_sym_member1,Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var4,var5),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass2_4 extends Code {

/*

asm_pass2(_12600,_12602,_12604,_12606,_12624):- :(true,asm_rearange_csym(_12604,255,_12614,_12616),asm_symbol(_12616,asm_pass2a(_12600,_12604,_12606,asm_index(_12602,_12604,_12606,_12624)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass2_4__1(mach); }
public static Operation exec_pred_asm_pass2_4__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_rearange_csym,var3.Deref(),asm.posint255,var5,var6) ;
local_aregs[2] = Data.F(asm.s_asm_symbol,var6.Deref(),Data.F(asm.s_asm_pass2a,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(asm.s_asm_index,var2.Deref(),var3.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_index_3 extends Code {

/*

asm_index([],_12678,_12680,_12688):- :(true,true,_12688).
asm_index([_12716|_12718],_12720,_12722,_12738):- :(true,asm_proc_index(_12716,_12720,_12722),asm_index(_12718,_12720,_12722,_12738)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_index_3__1(mach); }
public static Operation exec_pred_asm_index_3__1(Prolog mach){ mach.FillAlternative(pred_asm_index_3::exec_pred_asm_index_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_proc_index,var1.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_index,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_proc_index_3 extends Code {

/*

asm_proc_index(pred(_12776,_12778,_12780,_12782),_12784,_12786,_12804):- :(true,x_or_y(_12778,_12792),asm_lookup_ltab(_12776,_12786,_12794,asm_lookup_ltab(_12782,_12786,_12796,b_ASPN4_cccc(_12794,_12792,_12780,_12796,_12804)))).
asm_proc_index(arglabel(_12864,_12866,_12868),_12870,_12872,_12898):- :(_12864==c,asm_lookup_ctab(_12866,0,_12870,_12888),asm_lookup_ltab(_12868,_12872,_12890,writename(_12864,b_ASPN2_cc(_12888,_12890,_12898)))).
asm_proc_index(arglabel(_12950,_12952,_12954),_12956,_12958,_12988):- :(_12950==s,_12952=(_12968,_12970),asm_lookup_ctab(_12968,_12970,_12956,_12978,asm_lookup_ltab(_12954,_12958,_12980,writename(_12950,b_ASPN2_cc(_12978,_12980,_12988))))).
asm_proc_index(arglabel(_13052,_13054,_13056),_13058,_13060,_13076):- :(true,asm_lookup_ltab(_13056,_13060,_13068),writename(_13052,b_ASPN2_cc(_13054,_13068,_13076))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_proc_index_3__1(mach); }
public static Operation exec_pred_asm_proc_index_3__1(Prolog mach){ mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_pred,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var2.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var7.Deref(),var3.Deref(),var9.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_proc_index_3__2(Prolog mach){ mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s21,var1.Deref(),asm.s_c) ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_writename,var1.Deref(),Data.F(asm.s_b_ASPN2_cc,var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_proc_index_3__3(Prolog mach){ mach.FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s21,var1.Deref(),asm.s_s) ;
local_aregs[1] = Data.F(asm.s19,var2.Deref(),Data.F(asm.s6,var6,var7)) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ctab,var6.Deref(),var7.Deref(),var4.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var9,Data.F(asm.s_writename,var1.Deref(),Data.F(asm.s_b_ASPN2_cc,var8.Deref(),var9.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_proc_index_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_writename,var1.Deref(),Data.F(asm.s_b_ASPN2_cc,var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass2a_3 extends Code {

/*

asm_pass2a([],_13116,_13118,_13126):- :(true,true,_13126).
asm_pass2a([_13154|_13156],_13158,_13160,_13176):- :(true,asm_pass2_inst(_13154,_13158,_13160),asm_pass2a(_13156,_13158,_13160,_13176)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass2a_3__1(mach); }
public static Operation exec_pred_asm_pass2a_3__1(Prolog mach){ mach.FillAlternative(pred_asm_pass2a_3::exec_pred_asm_pass2a_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2a_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_pass2_inst,var1.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_pass2a,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass2_inst_3 extends Code {

/*

asm_pass2_inst(label(_13214),_13216,_13218,_13226):- :(true,true,_13226).
asm_pass2_inst(call(_13254),_13256,_13258,_13280):- :(asm_lookup_ltab(_13254,_13258,_13266),opcode(call_d,_13272),b_ASPN2_cc(_13272,_13266,_13280)).
asm_pass2_inst(call((_13316,_13318)),_13324,_13326,_13396):- :(true,(asm_lookup_ctab(_13316,_13318,_13324,_13336)->opcode(call,_13342),b_ASPN2_cc(_13342,_13336);warning([_13316/_13318,' is called but not defined'])),_13396).
asm_pass2_inst(execute(_13424),_13426,_13428,_13450):- :(asm_lookup_ltab(_13424,_13428,_13436),opcode(djmp,_13442),b_ASPN2_cc(_13442,_13436,_13450)).
asm_pass2_inst(execute((_13486,_13488)),_13494,_13496,_13566):- :(true,(asm_lookup_ctab(_13486,_13488,_13494,_13506)->opcode(execute,_13512),b_ASPN2_cc(_13512,_13506);warning([_13486/_13488,' is called but not defined'])),_13566).
asm_pass2_inst(jmp(_13594),_13596,_13598,_13620):- :(asm_lookup_ltab(_13594,_13598,_13606),opcode(jmp,_13612),b_ASPN2_cc(_13612,_13606,_13620)).
asm_pass2_inst(jmp_susp(_13656),_13658,_13660,_13682):- :(asm_lookup_ltab(_13656,_13660,_13668),opcode(jmp_susp,_13674),b_ASPN2_cc(_13674,_13668,_13682)).
asm_pass2_inst(jmpn_eq_struct_x(_13724,(_13718,_13720),_13728,_13730),_13732,_13734,_13758):- :(true,asm_lookup_ctab(_13718,_13720,_13732,_13744),asm_lookup_ltab(_13728,_13734,_13746,asm_lookup_ltab(_13730,_13734,_13748,opcode(jmpn_eq_struct_x,_13750,b_ASPN4_cccc(_13750,_13724,_13744,_13746,b_ASPN_c(_13748,_13758)))))).
asm_pass2_inst(jmpn_eq_struct_y(_13838,(_13832,_13834),_13842,_13844),_13846,_13848,_13872):- :(true,asm_lookup_ctab(_13832,_13834,_13846,_13858),asm_lookup_ltab(_13842,_13848,_13860,asm_lookup_ltab(_13844,_13848,_13862,opcode(jmpn_eq_struct_y,_13864,b_ASPN4_cccc(_13864,_13838,_13858,_13860,b_ASPN_c(_13862,_13872)))))).
asm_pass2_inst(jmpn_eq_atom_x(_13946,_13948,_13950,_13952),_13954,_13956,_13980):- :(true,asm_lookup_ctab(_13948,0,_13954,_13966),asm_lookup_ltab(_13950,_13956,_13968,asm_lookup_ltab(_13952,_13956,_13970,opcode(jmpn_eq_atom_x,_13972,b_ASPN4_cccc(_13972,_13946,_13966,_13968,b_ASPN_c(_13970,_13980)))))).
asm_pass2_inst(jmpn_eq_atom_y(_14054,_14056,_14058,_14060),_14062,_14064,_14088):- :(true,asm_lookup_ctab(_14056,0,_14062,_14074),asm_lookup_ltab(_14058,_14064,_14076,asm_lookup_ltab(_14060,_14064,_14078,opcode(jmpn_eq_atom_y,_14080,b_ASPN4_cccc(_14080,_14054,_14074,_14076,b_ASPN_c(_14078,_14088)))))).
asm_pass2_inst(jmpn_nil_x(_14162,_14164,_14166),_14168,_14170,_14190):- :(true,asm_lookup_ltab(_14164,_14170,_14178),asm_lookup_ltab(_14166,_14170,_14180,opcode(jmpn_nil_x,_14182,b_ASPN4_cccc(_14182,_14162,_14178,_14180,_14190)))).
asm_pass2_inst(jmpn_nil_y(_14248,_14250,_14252),_14254,_14256,_14276):- :(true,asm_lookup_ltab(_14250,_14256,_14264),asm_lookup_ltab(_14252,_14256,_14266,opcode(jmpn_nil_y,_14268,b_ASPN4_cccc(_14268,_14248,_14264,_14266,_14276)))).
asm_pass2_inst(switch_list_x(_14334,_14336,_14338,_14340),_14342,_14344,_14366):- :(true,asm_lookup_ltab(_14336,_14344,_14352),asm_lookup_ltab(_14338,_14344,_14354,asm_lookup_ltab(_14340,_14344,_14356,opcode(switch_list_x,_14358,b_ASPN4_cccc(_14358,_14334,_14352,_14354,b_ASPN_c(_14356,_14366)))))).
asm_pass2_inst(switch_list_y(_14440,_14442,_14444,_14446),_14448,_14450,_14472):- :(true,asm_lookup_ltab(_14442,_14450,_14458),asm_lookup_ltab(_14444,_14450,_14460,asm_lookup_ltab(_14446,_14450,_14462,opcode(switch_list_y,_14464,b_ASPN4_cccc(_14464,_14440,_14458,_14460,b_ASPN_c(_14462,_14472)))))).
asm_pass2_inst(switch_list_yxx(_14546,_14548,_14550,_14552),_14554,_14556,_14578):- :(true,asm_lookup_ltab(_14548,_14556,_14564),asm_lookup_ltab(_14550,_14556,_14566,asm_lookup_ltab(_14552,_14556,_14568,opcode(switch_list_yxx,_14570,b_ASPN4_cccc(_14570,_14546,_14564,_14566,b_ASPN_c(_14568,_14578)))))).
asm_pass2_inst(switch_list_yxy(_14652,_14654,_14656,_14658),_14660,_14662,_14684):- :(true,asm_lookup_ltab(_14654,_14662,_14670),asm_lookup_ltab(_14656,_14662,_14672,asm_lookup_ltab(_14658,_14662,_14674,opcode(switch_list_yxy,_14676,b_ASPN4_cccc(_14676,_14652,_14670,_14672,b_ASPN_c(_14674,_14684)))))).
asm_pass2_inst(switch_list_yyx(_14758,_14760,_14762,_14764),_14766,_14768,_14790):- :(true,asm_lookup_ltab(_14760,_14768,_14776),asm_lookup_ltab(_14762,_14768,_14778,asm_lookup_ltab(_14764,_14768,_14780,opcode(switch_list_yyx,_14782,b_ASPN4_cccc(_14782,_14758,_14776,_14778,b_ASPN_c(_14780,_14790)))))).
asm_pass2_inst(switch_list_yyy(_14864,_14866,_14868,_14870),_14872,_14874,_14896):- :(true,asm_lookup_ltab(_14866,_14874,_14882),asm_lookup_ltab(_14868,_14874,_14884,asm_lookup_ltab(_14870,_14874,_14886,opcode(switch_list_yyy,_14888,b_ASPN4_cccc(_14888,_14864,_14882,_14884,b_ASPN_c(_14886,_14896)))))).
asm_pass2_inst(jmpn_eq_int_x(_14970,_14972,_14974,_14976),_14978,_14980,_15000):- :(true,asm_lookup_ltab(_14974,_14980,_14988),asm_lookup_ltab(_14976,_14980,_14990,opcode(jmpn_eq_int_x,_14992,b_ASPN4_cccc(_14992,_14970,_14972,_14988,b_ASPN_c(_14990,_15000))))).
asm_pass2_inst(jmpn_eq_int_y(_15064,_15066,_15068,_15070),_15072,_15074,_15094):- :(true,asm_lookup_ltab(_15068,_15074,_15082),asm_lookup_ltab(_15070,_15074,_15084,opcode(jmpn_eq_int_y,_15086,b_ASPN4_cccc(_15086,_15064,_15066,_15082,b_ASPN_c(_15084,_15094))))).
asm_pass2_inst(jmpn_eql(_15158,_15160,_15162),_15164,_15166,_15188):- :(true,asm_lookup_ltab(_15162,_15166,_15174),x_or_y(_15158,_15176,x_or_y(_15160,_15178,opcode(jmpn_eql,_15180,b_ASPN4_cccc(_15180,_15176,_15178,_15174,_15188))))).
asm_pass2_inst(jmp_eql(_15252,_15254,_15256),_15258,_15260,_15282):- :(true,asm_lookup_ltab(_15256,_15260,_15268),x_or_y(_15252,_15270,x_or_y(_15254,_15272,opcode(jmp_eql,_15274,b_ASPN4_cccc(_15274,_15270,_15272,_15268,_15282))))).
asm_pass2_inst(jmp_eql_yy(_15346,_15348,_15350),_15352,_15354,_15372):- :(true,asm_lookup_ltab(_15350,_15354,_15362),opcode(jmp_eql_yy,_15364,b_ASPN4_cccc(_15364,_15346,_15348,_15362,_15372))).
asm_pass2_inst(jmpn_gt(_15420,_15422,_15424),_15426,_15428,_15450):- :(true,asm_lookup_ltab(_15424,_15428,_15436),x_or_y(_15420,_15438,x_or_y(_15422,_15440,opcode(jmpn_gt,_15442,b_ASPN4_cccc(_15442,_15438,_15440,_15436,_15450))))).
asm_pass2_inst(jmpn_gt_yy(_15514,_15516,_15518),_15520,_15522,_15540):- :(true,asm_lookup_ltab(_15518,_15522,_15530),opcode(jmpn_gt_yy,_15532,b_ASPN4_cccc(_15532,_15514,_15516,_15530,_15540))).
asm_pass2_inst(jmpn_ge(_15588,_15590,_15592),_15594,_15596,_15618):- :(true,asm_lookup_ltab(_15592,_15596,_15604),x_or_y(_15588,_15606,x_or_y(_15590,_15608,opcode(jmpn_ge,_15610,b_ASPN4_cccc(_15610,_15606,_15608,_15604,_15618))))).
asm_pass2_inst(jmpn_ge_yy(_15682,_15684,_15686),_15688,_15690,_15708):- :(true,asm_lookup_ltab(_15686,_15690,_15698),opcode(jmpn_ge_yy,_15700,b_ASPN4_cccc(_15700,_15682,_15684,_15698,_15708))).
asm_pass2_inst(jmpn_id(_15756,_15758,_15760),_15762,_15764,_15786):- :(true,asm_lookup_ltab(_15760,_15764,_15772),x_or_y(_15756,_15774,x_or_y(_15758,_15776,opcode(jmpn_id,_15778,b_ASPN4_cccc(_15778,_15774,_15776,_15772,_15786))))).
asm_pass2_inst(jmp_id(_15850,_15852,_15854),_15856,_15858,_15880):- :(true,asm_lookup_ltab(_15854,_15858,_15866),x_or_y(_15850,_15868,x_or_y(_15852,_15870,opcode(jmp_id,_15872,b_ASPN4_cccc(_15872,_15868,_15870,_15866,_15880))))).
asm_pass2_inst(jmpn_var_x(_15944,_15946),_15948,_15950,_15968):- :(true,asm_lookup_ltab(_15946,_15950,_15958),opcode(jmpn_var_x,_15960,b_ASPN3_ccc(_15960,_15944,_15958,_15968))).
asm_pass2_inst(jmpn_var_y(_16014,_16016),_16018,_16020,_16038):- :(true,asm_lookup_ltab(_16016,_16020,_16028),opcode(jmpn_var_y,_16030,b_ASPN3_ccc(_16030,_16014,_16028,_16038))).
asm_pass2_inst(jmp_var_x(_16084,_16086),_16088,_16090,_16108):- :(true,asm_lookup_ltab(_16086,_16090,_16098),opcode(jmp_var_x,_16100,b_ASPN3_ccc(_16100,_16084,_16098,_16108))).
asm_pass2_inst(jmp_var_y(_16154,_16156),_16158,_16160,_16178):- :(true,asm_lookup_ltab(_16156,_16160,_16168),opcode(jmp_var_y,_16170,b_ASPN3_ccc(_16170,_16154,_16168,_16178))).
asm_pass2_inst(jmpn_atom_x(_16224,_16226),_16228,_16230,_16248):- :(true,asm_lookup_ltab(_16226,_16230,_16238),opcode(jmpn_atom_x,_16240,b_ASPN3_ccc(_16240,_16224,_16238,_16248))).
asm_pass2_inst(jmpn_atom_y(_16294,_16296),_16298,_16300,_16318):- :(true,asm_lookup_ltab(_16296,_16300,_16308),opcode(jmpn_atom_y,_16310,b_ASPN3_ccc(_16310,_16294,_16308,_16318))).
asm_pass2_inst(jmpn_atomic_x(_16364,_16366),_16368,_16370,_16388):- :(true,asm_lookup_ltab(_16366,_16370,_16378),opcode(jmpn_atomic_x,_16380,b_ASPN3_ccc(_16380,_16364,_16378,_16388))).
asm_pass2_inst(jmpn_atomic_y(_16434,_16436),_16438,_16440,_16458):- :(true,asm_lookup_ltab(_16436,_16440,_16448),opcode(jmpn_atomic_y,_16450,b_ASPN3_ccc(_16450,_16434,_16448,_16458))).
asm_pass2_inst(jmpn_num_x(_16504,_16506),_16508,_16510,_16528):- :(true,asm_lookup_ltab(_16506,_16510,_16518),opcode(jmpn_num_x,_16520,b_ASPN3_ccc(_16520,_16504,_16518,_16528))).
asm_pass2_inst(jmpn_num_y(_16574,_16576),_16578,_16580,_16598):- :(true,asm_lookup_ltab(_16576,_16580,_16588),opcode(jmpn_num_y,_16590,b_ASPN3_ccc(_16590,_16574,_16588,_16598))).
asm_pass2_inst(jmpn_float_x(_16644,_16646),_16648,_16650,_16668):- :(true,asm_lookup_ltab(_16646,_16650,_16658),opcode(jmpn_float_x,_16660,b_ASPN3_ccc(_16660,_16644,_16658,_16668))).
asm_pass2_inst(jmpn_float_y(_16714,_16716),_16718,_16720,_16738):- :(true,asm_lookup_ltab(_16716,_16720,_16728),opcode(jmpn_float_y,_16730,b_ASPN3_ccc(_16730,_16714,_16728,_16738))).
asm_pass2_inst(jmpn_int_x(_16784,_16786),_16788,_16790,_16808):- :(true,asm_lookup_ltab(_16786,_16790,_16798),opcode(jmpn_int_x,_16800,b_ASPN3_ccc(_16800,_16784,_16798,_16808))).
asm_pass2_inst(jmpn_int_y(_16854,_16856),_16858,_16860,_16878):- :(true,asm_lookup_ltab(_16856,_16860,_16868),opcode(jmpn_int_y,_16870,b_ASPN3_ccc(_16870,_16854,_16868,_16878))).
asm_pass2_inst(hash_jmpn_nil(_16924),_16926,_16928,_16946):- :(true,asm_lookup_ltab(_16924,_16928,_16936),opcode(hash_jmpn_nil,_16938,b_ASPN2_cc(_16938,_16936,_16946))).
asm_pass2_inst(hash_jmpn_list(_16990),_16992,_16994,_17012):- :(true,asm_lookup_ltab(_16990,_16994,_17002),opcode(hash_jmpn_list,_17004,b_ASPN2_cc(_17004,_17002,_17012))).
asm_pass2_inst(hash_jmpn_int(_17056,_17058),_17060,_17062,_17080):- :(true,asm_lookup_ltab(_17058,_17062,_17070),opcode(hash_jmpn_int,_17072,b_ASPN3_ccc(_17072,_17056,_17070,_17080))).
asm_pass2_inst(hash_jmpn_atom(_17126,_17128),_17130,_17132,_17154):- :(true,asm_lookup_ctab(_17126,0,_17130,_17142),asm_lookup_ltab(_17128,_17132,_17144,opcode(hash_jmpn_atom,_17146,b_ASPN3_ccc(_17146,_17142,_17144,_17154)))).
asm_pass2_inst(hash_jmpn_struct((_17210,_17212),_17218),_17220,_17222,_17244):- :(true,asm_lookup_ctab(_17210,_17212,_17220,_17232),asm_lookup_ltab(_17218,_17222,_17234,opcode(hash_jmpn_struct,_17236,b_ASPN3_ccc(_17236,_17232,_17234,_17244)))).
asm_pass2_inst(hash_jmpn_struct_x((_17300,_17302),_17308),_17310,_17312,_17334):- :(true,asm_lookup_ctab(_17300,_17302,_17310,_17322),asm_lookup_ltab(_17308,_17312,_17324,opcode(hash_jmpn_struct_x,_17326,b_ASPN3_ccc(_17326,_17322,_17324,_17334)))).
asm_pass2_inst(hash_jmpn_struct_y((_17390,_17392),_17398),_17400,_17402,_17424):- :(true,asm_lookup_ctab(_17390,_17392,_17400,_17412),asm_lookup_ltab(_17398,_17402,_17414,opcode(hash_jmpn_struct_y,_17416,b_ASPN3_ccc(_17416,_17412,_17414,_17424)))).
asm_pass2_inst(hash_jmpn_struct_xx((_17480,_17482),_17488),_17490,_17492,_17514):- :(true,asm_lookup_ctab(_17480,_17482,_17490,_17502),asm_lookup_ltab(_17488,_17492,_17504,opcode(hash_jmpn_struct_xx,_17506,b_ASPN3_ccc(_17506,_17502,_17504,_17514)))).
asm_pass2_inst(hash_jmpn_struct_xy((_17570,_17572),_17578),_17580,_17582,_17604):- :(true,asm_lookup_ctab(_17570,_17572,_17580,_17592),asm_lookup_ltab(_17578,_17582,_17594,opcode(hash_jmpn_struct_xy,_17596,b_ASPN3_ccc(_17596,_17592,_17594,_17604)))).
asm_pass2_inst(hash_jmpn_struct_yx((_17660,_17662),_17668),_17670,_17672,_17694):- :(true,asm_lookup_ctab(_17660,_17662,_17670,_17682),asm_lookup_ltab(_17668,_17672,_17684,opcode(hash_jmpn_struct_yx,_17686,b_ASPN3_ccc(_17686,_17682,_17684,_17694)))).
asm_pass2_inst(hash_jmpn_struct_yy((_17750,_17752),_17758),_17760,_17762,_17784):- :(true,asm_lookup_ctab(_17750,_17752,_17760,_17772),asm_lookup_ltab(_17758,_17762,_17774,opcode(hash_jmpn_struct_yy,_17776,b_ASPN3_ccc(_17776,_17772,_17774,_17784)))).
asm_pass2_inst(jmpn_det(_17840),_17842,_17844,_17862):- :(true,asm_lookup_ltab(_17840,_17844,_17852),opcode(jmpn_det,_17854,b_ASPN2_cc(_17854,_17852,_17862))).
asm_pass2_inst(jmpn_det_get_ar_cps(_17906),_17908,_17910,_17928):- :(true,asm_lookup_ltab(_17906,_17910,_17918),opcode(jmpn_det_get_ar_cps,_17920,b_ASPN2_cc(_17920,_17918,_17928))).
asm_pass2_inst(save_ht_jmp(_17972,_17974),_17976,_17978,_17998):- :(true,asm_lookup_ltab(_17972,_17978,_17986),asm_lookup_ltab(_17974,_17978,_17988,opcode(save_ht_jmp,_17990,b_ASPN3_ccc(_17990,_17986,_17988,_17998)))).
asm_pass2_inst(unify_struct_x(_18060,(_18054,_18056)),_18064,_18066,_18086):- :(true,asm_lookup_ctab(_18054,_18056,_18064,_18076),opcode(unify_struct_x,_18078,b_ASPN3_ccc(_18078,_18060,_18076,_18086))).
asm_pass2_inst(unify_struct_y(_18138,(_18132,_18134)),_18142,_18144,_18164):- :(true,asm_lookup_ctab(_18132,_18134,_18142,_18154),opcode(unify_struct_y,_18156,b_ASPN3_ccc(_18156,_18138,_18154,_18164))).
asm_pass2_inst(unify0_struct_y(_18216,(_18210,_18212)),_18220,_18222,_18242):- :(true,asm_lookup_ctab(_18210,_18212,_18220,_18232),opcode(unify0_struct_y,_18234,b_ASPN3_ccc(_18234,_18216,_18232,_18242))).
asm_pass2_inst(unicut_struct_y(_18294,(_18288,_18290)),_18298,_18300,_18320):- :(true,asm_lookup_ctab(_18288,_18290,_18298,_18310),opcode(unicut_struct_y,_18312,b_ASPN3_ccc(_18312,_18294,_18310,_18320))).
asm_pass2_inst(unify_atom_x(_18366,_18368),_18370,_18372,_18392):- :(true,asm_lookup_ctab(_18368,0,_18370,_18382),opcode(unify_atom_x,_18384,b_ASPN3_ccc(_18384,_18366,_18382,_18392))).
asm_pass2_inst(unify_atom_y(_18438,_18440),_18442,_18444,_18464):- :(true,asm_lookup_ctab(_18440,0,_18442,_18454),opcode(unify_atom_y,_18456,b_ASPN3_ccc(_18456,_18438,_18454,_18464))).
asm_pass2_inst(unify0_atom_y(_18510,_18512),_18514,_18516,_18536):- :(true,asm_lookup_ctab(_18512,0,_18514,_18526),opcode(unify0_atom_y,_18528,b_ASPN3_ccc(_18528,_18510,_18526,_18536))).
asm_pass2_inst(unicut_atom_y(_18582,_18584),_18586,_18588,_18608):- :(true,asm_lookup_ctab(_18584,0,_18586,_18598),opcode(unicut_atom_y,_18600,b_ASPN3_ccc(_18600,_18582,_18598,_18608))).
asm_pass2_inst(unify_arg_atom(_18654),_18656,_18658,_18678):- :(true,asm_lookup_ctab(_18654,0,_18656,_18668),opcode(unify_arg_atom,_18670,b_ASPN2_cc(_18670,_18668,_18678))).
asm_pass2_inst(unify_arg_struct((_18722,_18724)),_18730,_18732,_18752):- :(true,asm_lookup_ctab(_18722,_18724,_18730,_18742),opcode(unify_arg_struct,_18744,b_ASPN2_cc(_18744,_18742,_18752))).
asm_pass2_inst(move_struct_x(_18802,(_18796,_18798)),_18806,_18808,_18828):- :(true,asm_lookup_ctab(_18796,_18798,_18806,_18818),opcode(move_struct_x,_18820,b_ASPN3_ccc(_18820,_18802,_18818,_18828))).
asm_pass2_inst(move_struct_y(_18880,(_18874,_18876)),_18884,_18886,_18906):- :(true,asm_lookup_ctab(_18874,_18876,_18884,_18896),opcode(move_struct_y,_18898,b_ASPN3_ccc(_18898,_18880,_18896,_18906))).
asm_pass2_inst(move_atom_x(_18952,_18954),_18956,_18958,_18978):- :(true,asm_lookup_ctab(_18954,0,_18956,_18968),opcode(move_atom_x,_18970,b_ASPN3_ccc(_18970,_18952,_18968,_18978))).
asm_pass2_inst(move_atom_y(_19024,_19026),_19028,_19030,_19050):- :(true,asm_lookup_ctab(_19026,0,_19028,_19040),opcode(move_atom_y,_19042,b_ASPN3_ccc(_19042,_19024,_19040,_19050))).
asm_pass2_inst(and(_19096,_19098,_19100),_19102,_19104,_19124):- :(true,x_or_y(_19096,_19110),x_or_y(_19098,_19112,x_or_y(_19100,_19114,opcode(and,_19116,b_ASPN4_cccc(_19116,_19110,_19112,_19114,_19124))))).
asm_pass2_inst(or(_19188,_19190,_19192),_19194,_19196,_19216):- :(true,x_or_y(_19188,_19202),x_or_y(_19190,_19204,x_or_y(_19192,_19206,opcode(or,_19208,b_ASPN4_cccc(_19208,_19202,_19204,_19206,_19216))))).
asm_pass2_inst(lshiftl(_19280,_19282,_19284),_19286,_19288,_19308):- :(true,x_or_y(_19280,_19294),x_or_y(_19282,_19296,x_or_y(_19284,_19298,opcode(lshiftl,_19300,b_ASPN4_cccc(_19300,_19294,_19296,_19298,_19308))))).
asm_pass2_inst(lshiftr(_19372,_19374,_19376),_19378,_19380,_19400):- :(true,x_or_y(_19372,_19386),x_or_y(_19374,_19388,x_or_y(_19376,_19390,opcode(lshiftr,_19392,b_ASPN4_cccc(_19392,_19386,_19388,_19390,_19400))))).
asm_pass2_inst(complement(_19464,_19466),_19468,_19470,_19488):- :(true,x_or_y(_19464,_19476),x_or_y(_19466,_19478,opcode(complement,_19480,b_ASPN3_ccc(_19480,_19476,_19478,_19488)))).
asm_pass2_inst(add(_19542,_19544,_19546),_19548,_19550,_19570):- :(true,x_or_y(_19542,_19556),x_or_y(_19544,_19558,x_or_y(_19546,_19560,opcode(add,_19562,b_ASPN4_cccc(_19562,_19556,_19558,_19560,_19570))))).
asm_pass2_inst(sub(_19634,_19636,_19638),_19640,_19642,_19662):- :(true,x_or_y(_19634,_19648),x_or_y(_19636,_19650,x_or_y(_19638,_19652,opcode(sub,_19654,b_ASPN4_cccc(_19654,_19648,_19650,_19652,_19662))))).
asm_pass2_inst(mul(_19726,_19728,_19730),_19732,_19734,_19754):- :(true,x_or_y(_19726,_19740),x_or_y(_19728,_19742,x_or_y(_19730,_19744,opcode(mul,_19746,b_ASPN4_cccc(_19746,_19740,_19742,_19744,_19754))))).
asm_pass2_inst(div(_19818,_19820,_19822),_19824,_19826,_19846):- :(true,x_or_y(_19818,_19832),x_or_y(_19820,_19834,x_or_y(_19822,_19836,opcode(div,_19838,b_ASPN4_cccc(_19838,_19832,_19834,_19836,_19846))))).
asm_pass2_inst(idiv(_19910,_19912,_19914),_19916,_19918,_19938):- :(true,x_or_y(_19910,_19924),x_or_y(_19912,_19926,x_or_y(_19914,_19928,opcode(idiv,_19930,b_ASPN4_cccc(_19930,_19924,_19926,_19928,_19938))))).
asm_pass2_inst(mod(_20002,_20004,_20006),_20008,_20010,_20030):- :(true,x_or_y(_20002,_20016),x_or_y(_20004,_20018,x_or_y(_20006,_20020,opcode(mod,_20022,b_ASPN4_cccc(_20022,_20016,_20018,_20020,_20030))))).
asm_pass2_inst(para_struct((_20094,_20096)),_20102,_20104,_20124):- :(true,asm_lookup_ctab(_20094,_20096,_20102,_20114),opcode(para_struct,_20116,b_ASPN2_cc(_20116,_20114,_20124))).
asm_pass2_inst(para_atom(_20168),_20170,_20172,_20192):- :(true,asm_lookup_ctab(_20168,0,_20170,_20182),opcode(para_atom,_20184,b_ASPN2_cc(_20184,_20182,_20192))).
asm_pass2_inst(fork(_20236),_20238,_20240,_20258):- :(true,asm_lookup_ltab(_20236,_20240,_20248),opcode(fork,_20250,b_ASPN2_cc(_20250,_20248,_20258))).
asm_pass2_inst(fork_unify_struct_y(_20308,(_20302,_20304),_20312),_20314,_20316,_20336):- :(true,asm_lookup_ltab(_20312,_20316,_20324),asm_lookup_ctab(_20302,_20304,_20314,_20326,opcode(fork_unify_struct_y,_20328,b_ASPN4_cccc(_20328,_20308,_20326,_20324,_20336)))).
asm_pass2_inst(fork_unify_list_y(_20396,_20398),_20400,_20402,_20420):- :(true,asm_lookup_ltab(_20398,_20402,_20410),opcode(fork_unify_list_y,_20412,b_ASPN3_ccc(_20412,_20396,_20410,_20420))).
asm_pass2_inst(fork_unify_nil_y(_20466,_20468),_20470,_20472,_20490):- :(true,asm_lookup_ltab(_20468,_20472,_20480),opcode(fork_unify_nil_y,_20482,b_ASPN3_ccc(_20482,_20466,_20480,_20490))).
asm_pass2_inst(fork_unify_atom_y(_20536,_20538,_20540),_20542,_20544,_20566):- :(true,asm_lookup_ctab(_20538,0,_20542,_20554),asm_lookup_ltab(_20540,_20544,_20556,opcode(fork_unify_atom_y,_20558,b_ASPN4_cccc(_20558,_20536,_20554,_20556,_20566)))).
asm_pass2_inst(fork_unify_int_y(_20624,_20626,_20628),_20630,_20632,_20650):- :(true,asm_lookup_ltab(_20628,_20632,_20640),opcode(fork_unify_int_y,_20642,b_ASPN4_cccc(_20642,_20624,_20626,_20640,_20650))).
asm_pass2_inst(fork_unify_uy_uy(_20698,_20700,_20702),_20704,_20706,_20724):- :(true,asm_lookup_ltab(_20702,_20706,_20714),opcode(fork_unify_uy_uy,_20716,b_ASPN4_cccc(_20716,_20698,_20700,_20714,_20724))).
asm_pass2_inst(fork_unicut_struct_y(_20778,(_20772,_20774),_20782),_20784,_20786,_20806):- :(true,asm_lookup_ltab(_20782,_20786,_20794),asm_lookup_ctab(_20772,_20774,_20784,_20796,opcode(fork_unicut_struct_y,_20798,b_ASPN4_cccc(_20798,_20778,_20796,_20794,_20806)))).
asm_pass2_inst(fork_unicut_list_y(_20866,_20868),_20870,_20872,_20890):- :(true,asm_lookup_ltab(_20868,_20872,_20880),opcode(fork_unicut_list_y,_20882,b_ASPN3_ccc(_20882,_20866,_20880,_20890))).
asm_pass2_inst(fork_unicut_nil_y(_20936,_20938),_20940,_20942,_20960):- :(true,asm_lookup_ltab(_20938,_20942,_20950),opcode(fork_unicut_nil_y,_20952,b_ASPN3_ccc(_20952,_20936,_20950,_20960))).
asm_pass2_inst(fork_unicut_atom_y(_21006,_21008,_21010),_21012,_21014,_21036):- :(true,asm_lookup_ctab(_21008,0,_21012,_21024),asm_lookup_ltab(_21010,_21014,_21026,opcode(fork_unicut_atom_y,_21028,b_ASPN4_cccc(_21028,_21006,_21024,_21026,_21036)))).
asm_pass2_inst(fork_unicut_int_y(_21094,_21096,_21098),_21100,_21102,_21120):- :(true,asm_lookup_ltab(_21098,_21102,_21110),opcode(fork_unicut_int_y,_21112,b_ASPN4_cccc(_21112,_21094,_21096,_21110,_21120))).
asm_pass2_inst(fork_unicut_ux_uy(_21168,_21170,_21172),_21174,_21176,_21194):- :(true,asm_lookup_ltab(_21172,_21176,_21184),opcode(fork_unicut_ux_uy,_21186,b_ASPN4_cccc(_21186,_21168,_21170,_21184,_21194))).
asm_pass2_inst(fork_unicut_uy_uy(_21242,_21244,_21246),_21248,_21250,_21268):- :(true,asm_lookup_ltab(_21246,_21250,_21258),opcode(fork_unicut_uy_uy,_21260,b_ASPN4_cccc(_21260,_21242,_21244,_21258,_21268))).
asm_pass2_inst(hash_x(_21316,_21318),_21320,_21322,_21338):- :(true,opcode(hash_x,_21328),asm_lookup_ltab(_21318,_21322,_21330,b_ASPN4_cccc(_21328,_21316,0,0,b_ASPN_c(_21330,_21338)))).
asm_pass2_inst(hash_y(_21394,_21396),_21398,_21400,_21416):- :(true,opcode(hash_y,_21406),asm_lookup_ltab(_21396,_21400,_21408,b_ASPN4_cccc(_21406,_21394,0,0,b_ASPN_c(_21408,_21416)))).
asm_pass2_inst(callv(_21472),_21474,_21476,_21492):- :(true,opcode(callv,_21482),x_or_y(_21472,_21484,b_ASPN2_cc(_21482,_21484,_21492))).
asm_pass2_inst(executev(_21536),_21538,_21540,_21556):- :(true,opcode(executev,_21546),x_or_y(_21536,_21548,b_ASPN2_cc(_21546,_21548,_21556))).
asm_pass2_inst(functor(_21600,_21602,_21604),_21606,_21608,_21628):- :(true,opcode(functor,_21614),x_or_y(_21600,_21616,x_or_y(_21602,_21618,x_or_y(_21604,_21620,b_ASPN4_cccc(_21614,_21616,_21618,_21620,_21628))))).
asm_pass2_inst(func_arity(_21692,_21694),_21696,_21698,_21716):- :(true,opcode(func_arity,_21704),x_or_y(_21692,_21706,x_or_y(_21694,_21708,b_ASPN3_ccc(_21704,_21706,_21708,_21716)))).
asm_pass2_inst(arg0(_21770,_21772,_21774),_21776,_21778,_21800):- :(integer(_21770),opcode(arg0,_21788),x_or_y(_21772,_21790,x_or_y(_21774,_21792,b_ASPN4_cccc(_21788,_21770,_21790,_21792,_21800)))).
asm_pass2_inst(arg(_21856,_21858,_21860),_21862,_21864,_21884):- :(true,opcode(arg,_21870),x_or_y(_21856,_21872,x_or_y(_21858,_21874,x_or_y(_21860,_21876,b_ASPN4_cccc(_21870,_21872,_21874,_21876,_21884))))).
asm_pass2_inst(setarg0(_21948,_21950,_21952),_21954,_21956,_21978):- :(integer(_21948),opcode(setarg0,_21966),x_or_y(_21950,_21968,x_or_y(_21952,_21970,b_ASPN4_cccc(_21966,_21948,_21968,_21970,_21978)))).
asm_pass2_inst(setarg(_22034,_22036,_22038),_22040,_22042,_22062):- :(true,opcode(setarg,_22048),x_or_y(_22034,_22050,x_or_y(_22036,_22052,x_or_y(_22038,_22054,b_ASPN4_cccc(_22048,_22050,_22052,_22054,_22062))))).
asm_pass2_inst(builtin0(_22126,_22128),_22130,_22132,_22150):- :(true,asm_lookup_ltab(_22128,_22132,_22140),opcode(builtin0,_22142,b_ASPN3_ccc(_22142,_22126,_22140,_22150))).
asm_pass2_inst(builtin1(_22196,_22198,_22200),_22202,_22204,_22224):- :(true,asm_lookup_ltab(_22198,_22204,_22212),opcode(builtin1,_22214,x_or_y(_22200,_22216,b_ASPN4_cccc(_22214,_22196,_22212,_22216,_22224)))).
asm_pass2_inst(builtin2(_22280,_22282,_22284,_22286),_22288,_22290,_22312):- :(true,asm_lookup_ltab(_22282,_22290,_22298),opcode(builtin2,_22300,x_or_y(_22284,_22302,x_or_y(_22286,_22304,b_ASPN4_cccc(_22300,_22280,_22298,_22302,b_ASPN_c(_22304,_22312)))))).
asm_pass2_inst(builtin3(_22382,_22384,_22386,_22388,_22390),_22392,_22394,_22418):- :(true,asm_lookup_ltab(_22384,_22394,_22402),opcode(builtin3,_22404,x_or_y(_22386,_22406,x_or_y(_22388,_22408,x_or_y(_22390,_22410,b_ASPN4_cccc(_22404,_22382,_22402,_22406,b_ASPN2_cc(_22408,_22410,_22418))))))).
asm_pass2_inst(builtin4(_22498,_22500,_22502,_22504,_22506,_22508),_22510,_22512,_22538):- :(true,asm_lookup_ltab(_22500,_22512,_22520),opcode(builtin4,_22522,x_or_y(_22502,_22524,x_or_y(_22504,_22526,x_or_y(_22506,_22528,x_or_y(_22508,_22530,b_ASPN4_cccc(_22522,_22498,_22520,_22524,b_ASPN3_ccc(_22526,_22528,_22530,_22538)))))))).
asm_pass2_inst(getbreg(_22628),_22630,_22632,_22648):- :(true,opcode(getbreg,_22638),x_or_y(_22628,_22640,b_ASPN2_cc(_22638,_22640,_22648))).
asm_pass2_inst(getpbreg(_22692),_22694,_22696,_22712):- :(true,opcode(getpbreg,_22702),x_or_y(_22692,_22704,b_ASPN2_cc(_22702,_22704,_22712))).
asm_pass2_inst(putbreg(_22756),_22758,_22760,_22776):- :(true,opcode(putbreg,_22766),x_or_y(_22756,_22768,b_ASPN2_cc(_22766,_22768,_22776))).
asm_pass2_inst(gethtreg(y(_22820),y(_22824)),_22832,_22834,_22848):- :(true,opcode(gethtreg,_22840),b_ASPN3_ccc(_22840,_22820,_22824,_22848)).
asm_pass2_inst(puthtreg(y(_22886),y(_22890)),_22898,_22900,_22914):- :(true,opcode(puthtreg,_22906),b_ASPN3_ccc(_22906,_22886,_22890,_22914)).
asm_pass2_inst(delay((_22952,_22954),_22960),_22962,_22964,_22986):- :(true,asm_lookup_ctab(_22952,_22954,_22962,_22974),asm_lookup_ltab(_22960,_22964,_22976,opcode(delay,_22978,b_ASPN3_ccc(_22978,_22974,_22976,_22986)))).
asm_pass2_inst(susp_var_delay(_23048,(_23042,_23044),_23052,_23054),_23056,_23058,_23082):- :(true,asm_lookup_ctab(_23042,_23044,_23056,_23068),asm_lookup_ltab(_23052,_23058,_23070,asm_lookup_ltab(_23054,_23058,_23072,opcode(susp_var_delay,_23074,b_ASPN4_cccc(_23074,_23048,_23068,_23070,b_ASPN_c(_23072,_23082)))))).
asm_pass2_inst(jmpn_dvar_y(_23156,_23158),_23160,_23162,_23180):- :(true,asm_lookup_ltab(_23158,_23162,_23170),opcode(jmpn_dvar_y,_23172,b_ASPN3_ccc(_23172,_23156,_23170,_23180))).
asm_pass2_inst(susp_var2_delay(_23232,(_23226,_23228),_23236,_23238),_23240,_23242,_23266):- :(true,asm_lookup_ctab(_23226,_23228,_23240,_23252),asm_lookup_ltab(_23236,_23242,_23254,asm_lookup_ltab(_23238,_23242,_23256,opcode(susp_var2_delay,_23258,b_ASPN4_cccc(_23258,_23232,_23252,_23254,b_ASPN_c(_23256,_23266)))))).
asm_pass2_inst(_23338,_23340,_23342,_23364):-functor(_23338,_23344,_23346,:(opcode(_23344,_23352),b_ASPN_c(_23352),asm_pass2_inst_op(_23338,0,_23346,_23364))).
asm_pass2_inst(_23410,_23412,_23414,_23444):- :(true,cmp_error(['error in asm pass2 :',_23410,'is not defined']),_23444).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass2_inst_3__1(mach); }
public static Operation exec_pred_asm_pass2_inst_3__1(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_label,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__2(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_call,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_call_d,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__3(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_call,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s15,Data.F(asm.s8,Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var3.Deref(),var5),Data.F(asm.s6,Data.F(asm.s_opcode,asm.s_call,var6),Data.F(asm.s_b_ASPN2_cc,var6.Deref(),var5.Deref()))),Data.F(asm.s_warning,Data.F(asm.s9,Data.F(asm.s10,var1.Deref(),var2.Deref()),Data.F(asm.s9,asm.s1,Const.Nil)))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__4(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_execute,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_djmp,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__5(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_execute,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s15,Data.F(asm.s8,Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var3.Deref(),var5),Data.F(asm.s6,Data.F(asm.s_opcode,asm.s_execute,var6),Data.F(asm.s_b_ASPN2_cc,var6.Deref(),var5.Deref()))),Data.F(asm.s_warning,Data.F(asm.s9,Data.F(asm.s10,var1.Deref(),var2.Deref()),Data.F(asm.s9,asm.s1,Const.Nil)))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__6(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_jmp,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__7(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_susp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_jmp_susp,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__8(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_struct_x,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var6.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var7.Deref(),var9,Data.F(asm.s_asm_lookup_ltab,var5.Deref(),var7.Deref(),var10,Data.F(asm.s_opcode,asm.s_jmpn_eq_struct_x,var11,Data.F(asm.s_b_ASPN4_cccc,var11.Deref(),var1.Deref(),var8.Deref(),var9.Deref(),Data.F(asm.s_b_ASPN_c,var10.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__9(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_struct_y,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var6.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var7.Deref(),var9,Data.F(asm.s_asm_lookup_ltab,var5.Deref(),var7.Deref(),var10,Data.F(asm.s_opcode,asm.s_jmpn_eq_struct_y,var11,Data.F(asm.s_b_ASPN4_cccc,var11.Deref(),var1.Deref(),var8.Deref(),var9.Deref(),Data.F(asm.s_b_ASPN_c,var10.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__10(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_atom_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var5.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_jmpn_eq_atom_x,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__11(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_atom_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var5.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_jmpn_eq_atom_y,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__12(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_nil_x,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_jmpn_nil_x,var8,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var1.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__13(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_nil_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_jmpn_nil_y,var8,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var1.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__14(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_x,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__15(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_y,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__16(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yxx,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_yxx,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__17(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yxy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_yxy,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__18(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yyx,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_yyx,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__19(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_switch_list_yyy,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var8,Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var9,Data.F(asm.s_opcode,asm.s_switch_list_yyy,var10,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),Data.F(asm.s_b_ASPN_c,var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__20(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_int_x,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_eq_int_x,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var1.Deref(),var2.Deref(),var7.Deref(),Data.F(asm.s_b_ASPN_c,var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__21(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eq_int_y,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_eq_int_y,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var1.Deref(),var2.Deref(),var7.Deref(),Data.F(asm.s_b_ASPN_c,var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__22(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_eql,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_eql,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__23(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_eql,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmp_eql,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__24(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_eql_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmp_eql_yy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__25(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_gt,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_gt,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__26(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_gt_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_gt_yy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__27(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_ge,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_ge,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__28(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_ge_yy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_ge_yy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__29(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_id,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmpn_id,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__30(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_id,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_opcode,asm.s_jmp_id,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var7.Deref(),var8.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__31(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_var_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_var_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__32(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_var_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_var_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__33(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_var_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmp_var_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__34(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmp_var_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmp_var_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__35(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_atom_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__36(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_atom_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__37(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atomic_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_atomic_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__38(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_atomic_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_atomic_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__39(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_num_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_num_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__40(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__41) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_num_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_num_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__41(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__42) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_float_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_float_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__42(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__43) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_float_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_float_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__43(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__44) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_int_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_int_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__44(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__45) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_int_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_int_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__45(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__46) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_nil,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_hash_jmpn_nil,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__46(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__47) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_list,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_hash_jmpn_list,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__47(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__48) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_int,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_hash_jmpn_int,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__48(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__49) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_atom,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var6,Data.F(asm.s_opcode,asm.s_hash_jmpn_atom,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var5.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__49(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__50) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__50(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__51) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_x,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_x,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__51(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__52) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_y,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_y,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__52(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__53) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_xx,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_xx,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__53(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__54) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_xy,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_xy,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__54(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__55) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_yx,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_yx,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__55(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__56) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_jmpn_struct_yy,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_hash_jmpn_struct_yy,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__56(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__57) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_det,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_det,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__57(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__58) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_det_get_ar_cps,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_det_get_ar_cps,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__58(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__59) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_save_ht_jmp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var6,Data.F(asm.s_opcode,asm.s_save_ht_jmp,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var5.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__59(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__60) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_struct_x,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_struct_x,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__60(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__61) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_struct_y,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__61(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__62) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify0_struct_y,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__62(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__63) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unicut_struct_y,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__63(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__64) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_atom_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__64(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__65) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_atom_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__65(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__66) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify0_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify0_atom_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__66(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__67) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unicut_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unicut_atom_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__67(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__68) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_atom,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),asm.posint0,var2.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_arg_atom,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__68(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__69) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_unify_arg_struct,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_unify_arg_struct,var6,Data.F(asm.s_b_ASPN2_cc,var6.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__69(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__70) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_struct_x,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_move_struct_x,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__70(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__71) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_struct_y,var1,Data.F(asm.s6,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_move_struct_y,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var1.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__71(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__72) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_atom_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_move_atom_x,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__72(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__73) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_move_atom_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_move_atom_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__73(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__74) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_and,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_and,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__74(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__75) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_or,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_or,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__75(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__76) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_lshiftl,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_lshiftl,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__76(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__77) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_lshiftr,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_lshiftr,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__77(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__78) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_complement,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var6,Data.F(asm.s_opcode,asm.s_complement,var7,Data.F(asm.s_b_ASPN3_ccc,var7.Deref(),var5.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__78(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__79) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_add,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_add,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__79(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__80) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_sub,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_sub,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__80(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__81) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_mul,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_mul,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__81(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__82) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_div,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_div,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__82(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__83) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_idiv,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_idiv,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__83(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__84) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_mod,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_x_or_y,var1.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_opcode,asm.s_mod,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__84(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__85) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_struct,Data.F(asm.s6,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_para_struct,var6,Data.F(asm.s_b_ASPN2_cc,var6.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__85(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__86) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_para_atom,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),asm.posint0,var2.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_para_atom,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__86(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__87) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var1.Deref(),var3.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork,var5,Data.F(asm.s_b_ASPN2_cc,var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__87(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__88) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_struct_y,var1,Data.F(asm.s6,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var5.Deref(),var8,Data.F(asm.s_opcode,asm.s_fork_unify_struct_y,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var1.Deref(),var8.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__88(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__89) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_list_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unify_list_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__89(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__90) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_nil_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unify_nil_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__90(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__91) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_atom_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_fork_unify_atom_y,var8,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var1.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__91(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__92) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_int_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unify_int_y,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__92(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__93) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unify_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unify_uy_uy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__93(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__94) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_struct_y,var1,Data.F(asm.s6,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var5.Deref(),var8,Data.F(asm.s_opcode,asm.s_fork_unicut_struct_y,var9,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var1.Deref(),var8.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__94(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__95) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_list_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unicut_list_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__95(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__96) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_nil_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unicut_nil_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__96(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__97) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_atom_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),asm.posint0,var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_fork_unicut_atom_y,var8,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var1.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__97(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__98) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_int_y,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unicut_int_y,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__98(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__99) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_ux_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unicut_ux_uy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__99(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__100) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_fork_unicut_uy_uy,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_fork_unicut_uy_uy,var7,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var2.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__100(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__101) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_x,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_hash_x,var5) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var6,Data.F(asm.s_b_ASPN4_cccc,var5.Deref(),var1.Deref(),asm.posint0,asm.posint0,Data.F(asm.s_b_ASPN_c,var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__101(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__102) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_hash_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_hash_y,var5) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var6,Data.F(asm.s_b_ASPN4_cccc,var5.Deref(),var1.Deref(),asm.posint0,asm.posint0,Data.F(asm.s_b_ASPN_c,var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__102(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__103) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_callv,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_callv,var4) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var5,Data.F(asm.s_b_ASPN2_cc,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__103(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__104) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_executev,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_executev,var4) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var5,Data.F(asm.s_b_ASPN2_cc,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__104(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__105) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_functor,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_functor,var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_x_or_y,var3.Deref(),var9,Data.F(asm.s_b_ASPN4_cccc,var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__105(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__106) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_func_arity,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_func_arity,var5) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var6,Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_b_ASPN3_ccc,var5.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__106(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__107) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arg0,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_integer,var1.Deref()) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_arg0,var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_b_ASPN4_cccc,var6.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__107(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__108) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_arg,var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_x_or_y,var3.Deref(),var9,Data.F(asm.s_b_ASPN4_cccc,var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__108(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__109) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_setarg0,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_integer,var1.Deref()) ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_setarg0,var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var2.Deref(),var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_b_ASPN4_cccc,var6.Deref(),var1.Deref(),var7.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__109(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__110) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_setarg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_setarg,var6) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var7,Data.F(asm.s_x_or_y,var2.Deref(),var8,Data.F(asm.s_x_or_y,var3.Deref(),var9,Data.F(asm.s_b_ASPN4_cccc,var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__110(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__111) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin0,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_builtin0,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__111(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__112) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin1,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var5.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_builtin1,var7,Data.F(asm.s_x_or_y,var3.Deref(),var8,Data.F(asm.s_b_ASPN4_cccc,var7.Deref(),var1.Deref(),var6.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__112(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__113) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin2,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var6.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_builtin2,var8,Data.F(asm.s_x_or_y,var3.Deref(),var9,Data.F(asm.s_x_or_y,var4.Deref(),var10,Data.F(asm.s_b_ASPN4_cccc,var8.Deref(),var1.Deref(),var7.Deref(),var9.Deref(),Data.F(asm.s_b_ASPN_c,var10.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__113(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__114) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin3,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var7.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_builtin3,var9,Data.F(asm.s_x_or_y,var3.Deref(),var10,Data.F(asm.s_x_or_y,var4.Deref(),var11,Data.F(asm.s_x_or_y,var5.Deref(),var12,Data.F(asm.s_b_ASPN4_cccc,var9.Deref(),var1.Deref(),var8.Deref(),var10.Deref(),Data.F(asm.s_b_ASPN2_cc,var11.Deref(),var12.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__114(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__115) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_builtin4,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var8,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var8.Deref(),var9) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_builtin4,var10,Data.F(asm.s_x_or_y,var3.Deref(),var11,Data.F(asm.s_x_or_y,var4.Deref(),var12,Data.F(asm.s_x_or_y,var5.Deref(),var13,Data.F(asm.s_x_or_y,var6.Deref(),var14,Data.F(asm.s_b_ASPN4_cccc,var10.Deref(),var1.Deref(),var9.Deref(),var11.Deref(),Data.F(asm.s_b_ASPN3_ccc,var12.Deref(),var13.Deref(),var14.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__115(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__116) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_getbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_getbreg,var4) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var5,Data.F(asm.s_b_ASPN2_cc,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__116(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__117) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_getpbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_getpbreg,var4) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var5,Data.F(asm.s_b_ASPN2_cc,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__117(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__118) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_putbreg,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_putbreg,var4) ;
local_aregs[2] = Data.F(asm.s_x_or_y,var1.Deref(),var5,Data.F(asm.s_b_ASPN2_cc,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__118(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__119) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_gethtreg,Data.F(asm.s_y,var1),Data.F(asm.s_y,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_gethtreg,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN3_ccc,var5.Deref(),var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__119(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__120) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_puthtreg,Data.F(asm.s_y,var1),Data.F(asm.s_y,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_puthtreg,var5) ;
local_aregs[2] = Data.F(asm.s_b_ASPN3_ccc,var5.Deref(),var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__120(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__121) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_delay,Data.F(asm.s6,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var1.Deref(),var2.Deref(),var4.Deref(),var6) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var3.Deref(),var5.Deref(),var7,Data.F(asm.s_opcode,asm.s_delay,var8,Data.F(asm.s_b_ASPN3_ccc,var8.Deref(),var6.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__121(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__122) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var_delay,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var6.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var7.Deref(),var9,Data.F(asm.s_asm_lookup_ltab,var5.Deref(),var7.Deref(),var10,Data.F(asm.s_opcode,asm.s_susp_var_delay,var11,Data.F(asm.s_b_ASPN4_cccc,var11.Deref(),var1.Deref(),var8.Deref(),var9.Deref(),Data.F(asm.s_b_ASPN_c,var10.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__122(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__123) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_jmpn_dvar_y,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab,var2.Deref(),var4.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_opcode,asm.s_jmpn_dvar_y,var6,Data.F(asm.s_b_ASPN3_ccc,var6.Deref(),var1.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__123(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__124) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_susp_var2_delay,var1,Data.F(asm.s6,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab,var2.Deref(),var3.Deref(),var6.Deref(),var8) ;
local_aregs[2] = Data.F(asm.s_asm_lookup_ltab,var4.Deref(),var7.Deref(),var9,Data.F(asm.s_asm_lookup_ltab,var5.Deref(),var7.Deref(),var10,Data.F(asm.s_opcode,asm.s_susp_var2_delay,var11,Data.F(asm.s_b_ASPN4_cccc,var11.Deref(),var1.Deref(),var8.Deref(),var9.Deref(),Data.F(asm.s_b_ASPN_c,var10.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_3__124(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__125) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(asm.s12,Data.F(asm.s_opcode,var4.Deref(),var6),Data.F(asm.s_b_ASPN_c,var6.Deref()),Data.F(asm.s_asm_pass2_inst_op,var1.Deref(),asm.posint0,var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) asm.s_functor.FindProc(3) ;}
public static Operation exec_pred_asm_pass2_inst_3__125(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_cmp_error,Data.F(asm.s9,asm.s101,Data.F(asm.s9,var1.Deref(),Data.F(asm.s9,asm.s153,Const.Nil)))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_pass2_inst_op_3 extends Code {

/*

asm_pass2_inst_op(_23470,_23472,_23474,_23488):- :(_23472=:=_23474,true,_23488).
asm_pass2_inst_op(_23514,_23516,_23518,_23540):- :(true,_23528 is _23516+1,arg(_23528,_23514,_23532,b_ASPN_c(_23532,asm_pass2_inst_op(_23514,_23528,_23518,_23540)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_pass2_inst_op_3__1(mach); }
public static Operation exec_pred_asm_pass2_inst_op_3__1(Prolog mach){ mach.FillAlternative(pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s20,var2.Deref(),var3.Deref()) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_pass2_inst_op_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var4,Data.F(asm.s5,var2.Deref(),asm.posint1)) ;
local_aregs[2] = Data.F(asm.s_arg,var4.Deref(),var1.Deref(),var5,Data.F(asm.s_b_ASPN_c,var5.Deref(),Data.F(asm.s_asm_pass2_inst_op,var1.Deref(),var4.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_magic_1 extends Code {

/*

asm_magic(_23592,_23606):- :(true,asm_putnum(17,1),asm_putnum(18,1,asm_putnum(19,1,asm_putnum(_23592,1,_23606)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_magic_1__1(mach); }
public static Operation exec_pred_asm_magic_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_putnum,asm.posint17,asm.posint1) ;
local_aregs[2] = Data.F(asm.s_asm_putnum,asm.posint18,asm.posint1,Data.F(asm.s_asm_putnum,asm.posint19,asm.posint1,Data.F(asm.s_asm_putnum,var1.Deref(),asm.posint1,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_index_inst_2 extends Code {

/*

asm_index_inst(pred(_23654,_23656,_23658,_23660),_23662,_23676):- :(true,_23662=16,_23676).
asm_index_inst(arglabel(i,_23704,_23706),_23708,_23722):- :(true,_23708:=9,_23722).
asm_index_inst(arglabel(c,_23750,_23752),_23754,_23768):- :(true,_23754:=9,_23768).
asm_index_inst(arglabel(s,_23796,_23798),_23800,_23814):- :(true,_23800:=9,_23814).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_index_inst_2__1(mach); }
public static Operation exec_pred_asm_index_inst_2__1(Prolog mach){ mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_pred,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s19,var5.Deref(),asm.posint16) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_inst_2__2(Prolog mach){ mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,asm.s_i,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),asm.posint9) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_inst_2__3(Prolog mach){ mach.FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,asm.s_c,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),asm.posint9) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_index_inst_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_arglabel,asm.s_s,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),asm.posint9) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_symbol_1 extends Code {

/*

asm_symbol(_23838,_23850):- :(var(_23838),true,_23850).
asm_symbol([sym(_23874,_23876,_23878,_23880)|_23886],_23900):- :(true,b_ASPN_c(_23878),asm_putnum(_23876,1,b_GET_LENGTH_cf(_23874,_23892,asm_putnum(_23892,1,writename(_23874,asm_symbol(_23886,_23900)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_symbol_1__1(mach); }
public static Operation exec_pred_asm_symbol_1__1(Prolog mach){ mach.FillAlternative(pred_asm_symbol_1::exec_pred_asm_symbol_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var1.Deref()) ;
local_aregs[1] = asm.s_true ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_symbol_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s9,Data.F(asm.s_sym,var1,var2,var3,var4),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_b_ASPN_c,var3.Deref()) ;
local_aregs[2] = Data.F(asm.s_asm_putnum,var2.Deref(),asm.posint1,Data.F(asm.s_b_GET_LENGTH_cf,var1.Deref(),var6,Data.F(asm.s_asm_putnum,var6.Deref(),asm.posint1,Data.F(asm.s_writename,var1.Deref(),Data.F(asm.s_asm_symbol,var5.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_putnum_2 extends Code {

/*

asm_putnum(_23958,_23960,_24002):- :(_23960>1,_23976 is _23958/\255,is(_23986,_23958>>8,is(_23994,_23960-1,asm_putnum(_23986,_23994,put(_23976,_24002))))).
asm_putnum(_24056,_24058,_24070):- :(true,put(_24056),_24070).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_putnum_2__1(mach); }
public static Operation exec_pred_asm_putnum_2__1(Prolog mach){ mach.FillAlternative(pred_asm_putnum_2::exec_pred_asm_putnum_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s23,var2.Deref(),asm.posint1) ;
local_aregs[1] = Data.F(asm.s_is,var3,Data.F(asm.s11,var1.Deref(),asm.posint255)) ;
local_aregs[2] = Data.F(asm.s_is,var4,Data.F(asm.s24,var1.Deref(),asm.posint8),Data.F(asm.s_is,var5,Data.F(asm.s7,var2.Deref(),asm.posint1),Data.F(asm.s_asm_putnum,var4.Deref(),var5.Deref(),Data.F(asm.s_put,var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_putnum_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_put,var1.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_mark_eot_0 extends Code {

/*

asm_mark_eot(_24106):- :(true,opcode(endfile,_24098),b_ASPN2_cc(_24098,0,_24106)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_mark_eot_0__1(mach); }
public static Operation exec_pred_asm_mark_eot_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_opcode,asm.s_endfile,var1) ;
local_aregs[2] = Data.F(asm.s_b_ASPN2_cc,var1.Deref(),asm.posint0,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_sym_member1_2 extends Code {

/*

sym_member1(_24134,_24136,_24188):- :(sym(_24140,_24142,_24144,_24146)<=_24134,asm_hash_value(_24140,_24158),is(_24178,(_24158+_24142)mod 255+1,arg(_24178,_24136,_24180,sym_member1(_24140,_24142,_24134,_24180,_24188)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sym_member1_2__1(mach); }
public static Operation exec_pred_sym_member1_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s18,Data.F(asm.s_sym,var3,var4,var5,var6),var1.Deref()) ;
local_aregs[1] = Data.F(asm.s_asm_hash_value,var3.Deref(),var7) ;
local_aregs[2] = Data.F(asm.s_is,var8,Data.F(asm.s5,Data.F(asm.s_mod,Data.F(asm.s5,var7.Deref(),var4.Deref()),asm.posint255),asm.posint1),Data.F(asm.s_arg,var8.Deref(),var2.Deref(),var9,Data.F(asm.s_sym_member1,var3.Deref(),var4.Deref(),var1.Deref(),var9.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_sym_member1_4 extends Code {

/*

sym_member1(_24242,_24244,_24246,_24248,_24270):- :(var(_24248),next_sym_no(_24256),arg(4,_24246,_24256,:=(_24248,[_24246|_24262],_24270))).
sym_member1(_24318,_24320,_24332,[sym(_24318,_24320,_24322,_24324)|_24330],_24356):- :(true,_24332=sym(_24318,_24320,_24322,_24324),_24356).
sym_member1(_24390,_24392,_24394,[_24386|_24388],_24412):- :(true,sym_member1(_24390,_24392,_24394,_24388),_24412).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sym_member1_4__1(mach); }
public static Operation exec_pred_sym_member1_4__1(Prolog mach){ mach.FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var4.Deref()) ;
local_aregs[1] = Data.F(asm.s_next_sym_no,var5) ;
local_aregs[2] = Data.F(asm.s_arg,asm.posint4,var3.Deref(),var5.Deref(),Data.F(asm.s14,var4.Deref(),Data.F(asm.s9,var3.Deref(),var6),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_sym_member1_4__2(Prolog mach){ mach.FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(asm.s9,Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var4,var5),var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s19,var3.Deref(),Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var4.Deref(),var5.Deref())) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_sym_member1_4__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(asm.s9,var4,var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_sym_member1,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_lab_member1_2 extends Code {

/*

lab_member1(_24440,_24442,_24484):- :(lab(_24446,_24448)<=_24440,asm_hash_value(_24446,_24460),is(_24474,_24460 mod 255+1,arg(_24474,_24442,_24476,lab_member1(_24446,_24440,_24476,_24484)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lab_member1_2__1(mach); }
public static Operation exec_pred_lab_member1_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s18,Data.F(asm.s_lab,var3,var4),var1.Deref()) ;
local_aregs[1] = Data.F(asm.s_asm_hash_value,var3.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_is,var6,Data.F(asm.s5,Data.F(asm.s_mod,var5.Deref(),asm.posint255),asm.posint1),Data.F(asm.s_arg,var6.Deref(),var2.Deref(),var7,Data.F(asm.s_lab_member1,var3.Deref(),var1.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_lab_member1_3 extends Code {

/*

lab_member1(_24536,_24538,_24540,_24564):- :(var(_24540),_24540:=[_24538|_24550],_24564).
lab_member1(_24592,_24602,[lab(_24592,_24594)|_24600],_24622):- :(true,_24602=lab(_24592,_24594),_24622).
lab_member1(_24654,_24656,[_24650|_24652],_24672):- :(true,lab_member1(_24654,_24656,_24652),_24672).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lab_member1_3__1(mach); }
public static Operation exec_pred_lab_member1_3__1(Prolog mach){ mach.FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var3.Deref()) ;
local_aregs[1] = Data.F(asm.s14,var3.Deref(),Data.F(asm.s9,var2.Deref(),var4)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_lab_member1_3__2(Prolog mach){ mach.FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(asm.s9,Data.F(asm.s_lab,var1.Deref(),var3),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s19,var2.Deref(),Data.F(asm.s_lab,var1.Deref(),var3.Deref())) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_lab_member1_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(asm.s9,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_lab_member1,var1.Deref(),var2.Deref(),var4.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_lookup_ltab_3 extends Code {

/*

asm_lookup_ltab(_24698,_24700,_24702,_24732):- :(true,asm_hash_value(_24698,_24708),is(_24722,_24708 mod 255+1,arg(_24722,_24700,_24724,asm_lookup_ltab1(_24698,_24724,_24702,_24732)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_lookup_ltab_3__1(mach); }
public static Operation exec_pred_asm_lookup_ltab_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_hash_value,var1.Deref(),var4) ;
local_aregs[2] = Data.F(asm.s_is,var5,Data.F(asm.s5,Data.F(asm.s_mod,var4.Deref(),asm.posint255),asm.posint1),Data.F(asm.s_arg,var5.Deref(),var2.Deref(),var6,Data.F(asm.s_asm_lookup_ltab1,var1.Deref(),var6.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_lookup_ltab1_3 extends Code {

/*

asm_lookup_ltab1(_24786,_24788,_24790,_24802):- :(var(_24788),fail,_24802).
asm_lookup_ltab1(_24830,[lab(_24830,_24832)|_24838],_24840,_24854):- :(true,_24840=_24832,_24854).
asm_lookup_ltab1(_24886,[_24882|_24884],_24888,_24904):- :(true,asm_lookup_ltab1(_24886,_24884,_24888),_24904).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_lookup_ltab1_3__1(mach); }
public static Operation exec_pred_asm_lookup_ltab1_3__1(Prolog mach){ mach.FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var2.Deref()) ;
local_aregs[1] = asm.s_fail ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_lookup_ltab1_3__2(Prolog mach){ mach.FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(asm.s9,Data.F(asm.s_lab,var1.Deref(),var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s19,var4.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_lookup_ltab1_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(asm.s9,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ltab1,var1.Deref(),var3.Deref(),var4.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_lookup_ctab_4 extends Code {

/*

asm_lookup_ctab(_24930,_24932,_24934,_24936,_24972):- :(true,asm_hash_value(_24930,_24942),is(_24962,(_24942+_24932)mod 255+1,arg(_24962,_24934,_24964,asm_lookup_ctab1(_24930,_24932,_24964,_24936,_24972)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_lookup_ctab_4__1(mach); }
public static Operation exec_pred_asm_lookup_ctab_4__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_hash_value,var1.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_is,var6,Data.F(asm.s5,Data.F(asm.s_mod,Data.F(asm.s5,var5.Deref(),var2.Deref()),asm.posint255),asm.posint1),Data.F(asm.s_arg,var6.Deref(),var3.Deref(),var7,Data.F(asm.s_asm_lookup_ctab1,var1.Deref(),var2.Deref(),var7.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_lookup_ctab1_4 extends Code {

/*

asm_lookup_ctab1(_25032,_25034,[sym(_25032,_25034,_25036,_25038)|_25044],_25046,_25060):- :(true,_25046=_25038,_25060).
asm_lookup_ctab1(_25094,_25096,[_25090|_25092],_25098,_25116):- :(true,asm_lookup_ctab1(_25094,_25096,_25092,_25098),_25116).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_lookup_ctab1_4__1(mach); }
public static Operation exec_pred_asm_lookup_ctab1_4__1(Prolog mach){ mach.FillAlternative(pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(asm.s9,Data.F(asm.s_sym,var1.Deref(),var2.Deref(),var3,var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s19,var6.Deref(),var4.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_lookup_ctab1_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(asm.s9,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_asm_lookup_ctab1,var1.Deref(),var2.Deref(),var4.Deref(),var5.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_rearange_csym_4 extends Code {

/*

asm_rearange_csym(_25144,_25146,_25148,_25150,_25170):- :(_25146<1,_25150=_25148,_25170).
asm_rearange_csym(_25198,_25200,_25202,_25204,_25230):- :(true,arg(_25200,_25198,_25212),asm_merge(_25212,_25202,_25214,is(_25222,_25200-1,asm_rearange_csym(_25198,_25222,_25214,_25204,_25230)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_rearange_csym_4__1(mach); }
public static Operation exec_pred_asm_rearange_csym_4__1(Prolog mach){ mach.FillAlternative(pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s16,var2.Deref(),asm.posint1) ;
local_aregs[1] = Data.F(asm.s19,var4.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_rearange_csym_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_arg,var2.Deref(),var1.Deref(),var5) ;
local_aregs[2] = Data.F(asm.s_asm_merge,var5.Deref(),var3.Deref(),var6,Data.F(asm.s_is,var7,Data.F(asm.s7,var2.Deref(),asm.posint1),Data.F(asm.s_asm_rearange_csym,var1.Deref(),var7.Deref(),var6.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_asm_merge_3 extends Code {

/*

asm_merge(_25288,_25290,_25292,_25310):- :(var(_25288),_25292=_25290,_25310).
asm_merge(_25336,_25338,_25340,_25358):- :(var(_25338),_25340=_25336,_25358).
asm_merge(_25384,_25386,_25388,_25446):- <=([_25392|_25394],_25384,<=([_25398|_25400],_25386,<=(sym(_25404,_25406,_25408,_25410),_25392,<=(sym(_25414,_25416,_25418,_25420),_25398,:(_25410<_25420,_25388:=[_25392|_25432],asm_merge(_25394,_25386,_25432,_25446)))))).
asm_merge(_25514,_25516,_25518,_25556):- <=([_25522|_25524],_25514,:([_25528|_25530]<=_25516,_25518:=[_25528|_25542],asm_merge(_25514,_25530,_25542,_25556))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_asm_merge_3__1(mach); }
public static Operation exec_pred_asm_merge_3__1(Prolog mach){ mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var1.Deref()) ;
local_aregs[1] = Data.F(asm.s19,var3.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_merge_3__2(Prolog mach){ mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s_var,var2.Deref()) ;
local_aregs[1] = Data.F(asm.s19,var3.Deref(),var1.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_asm_merge_3__3(Prolog mach){ mach.FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s9,var4,var5) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(asm.s18,Data.F(asm.s9,var6,var7),var2.Deref(),Data.F(asm.s18,Data.F(asm.s_sym,var8,var9,var10,var11),var4.Deref(),Data.F(asm.s18,Data.F(asm.s_sym,var12,var13,var14,var15),var6.Deref(),Data.F(asm.s12,Data.F(asm.s16,var11.Deref(),var15.Deref()),Data.F(asm.s14,var3.Deref(),Data.F(asm.s9,var4.Deref(),var16)),Data.F(asm.s_asm_merge,var5.Deref(),var2.Deref(),var16.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_$003C$003D_2::exec_static ;}
public static Operation exec_pred_asm_merge_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(asm.s9,var4,var5) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(asm.s12,Data.F(asm.s18,Data.F(asm.s9,var6,var7),var2.Deref()),Data.F(asm.s14,var3.Deref(),Data.F(asm.s9,var6.Deref(),var8)),Data.F(asm.s_asm_merge,var1.Deref(),var7.Deref(),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_$003C$003D_2::exec_static ;}
}


public static class pred_next_sym_no_1 extends Code {

/*

next_sym_no(_25600,_25624):- :(true,global_get('$sym_no',0,_25600),is(_25616,_25600+1,global_set('$sym_no',0,_25616,_25624))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_next_sym_no_1__1(mach); }
public static Operation exec_pred_next_sym_no_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_global_get,asm.s4,asm.posint0,var1.Deref()) ;
local_aregs[2] = Data.F(asm.s_is,var2,Data.F(asm.s5,var1.Deref(),asm.posint1),Data.F(asm.s_global_set,asm.s4,asm.posint0,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_x_or_y_2 extends Code {

/*

x_or_y(vx(_25666),_25668,_25688):- :(true,_25668 is _25666<<3,_25688).
x_or_y(x(_25714),_25716,_25742):- :(true,_25716 is _25714<<3+1,_25742).
x_or_y(vy(_25768),_25770,_25796):- :(true,_25770 is _25768<<3\/3,_25796).
x_or_y(y(_25822),_25824,_25850):- :(true,_25824 is _25822<<3\/7,_25850).
x_or_y(_25874,_25876,_25902):- :(true,_25876 is _25874<<2\/2,_25902).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_x_or_y_2__1(mach); }
public static Operation exec_pred_x_or_y_2__1(Prolog mach){ mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_vx,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var2.Deref(),Data.F(asm.s17,var1.Deref(),asm.posint3)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_x_or_y_2__2(Prolog mach){ mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_x,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var2.Deref(),Data.F(asm.s5,Data.F(asm.s17,var1.Deref(),asm.posint3),asm.posint1)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_x_or_y_2__3(Prolog mach){ mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_vy,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var2.Deref(),Data.F(asm.s26,Data.F(asm.s17,var1.Deref(),asm.posint3),asm.posint3)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_x_or_y_2__4(Prolog mach){ mach.FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(asm.s_y,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var2.Deref(),Data.F(asm.s26,Data.F(asm.s17,var1.Deref(),asm.posint3),asm.posint7)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_x_or_y_2__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_is,var2.Deref(),Data.F(asm.s26,Data.F(asm.s17,var1.Deref(),asm.posint2),asm.posint2)) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_opcode_2 extends Code {

/*

opcode(noop,0,_25968):-call(_25968).
opcode(jmp,1,_25992):-call(_25992).
opcode(djmp,2,_26016):-call(_26016).
opcode(jmpn_eq_struct_x,3,_26040):-call(_26040).
opcode(jmpn_eq_struct_y,4,_26064):-call(_26064).
opcode(jmpn_eq_atom_x,5,_26088):-call(_26088).
opcode(jmpn_eq_atom_y,6,_26112):-call(_26112).
opcode(jmpn_nil_x,7,_26136):-call(_26136).
opcode(jmpn_nil_y,8,_26160):-call(_26160).
opcode(switch_list_x,9,_26184):-call(_26184).
opcode(switch_list_y,10,_26208):-call(_26208).
opcode(switch_list_yxx,11,_26232):-call(_26232).
opcode(switch_list_yxy,12,_26256):-call(_26256).
opcode(switch_list_yyx,13,_26280):-call(_26280).
opcode(switch_list_yyy,14,_26304):-call(_26304).
opcode(jmpn_eq_int_x,15,_26328):-call(_26328).
opcode(jmpn_eq_int_y,16,_26352):-call(_26352).
opcode(jmpn_eql,17,_26376):-call(_26376).
opcode(jmp_eql,18,_26400):-call(_26400).
opcode(jmp_eql_yy,19,_26424):-call(_26424).
opcode(jmpn_gt,20,_26448):-call(_26448).
opcode(jmpn_gt_yy,21,_26472):-call(_26472).
opcode(jmpn_ge,22,_26496):-call(_26496).
opcode(jmpn_ge_yy,23,_26520):-call(_26520).
opcode(jmpn_id,24,_26544):-call(_26544).
opcode(jmp_id,25,_26568):-call(_26568).
opcode(jmpn_var_x,26,_26592):-call(_26592).
opcode(jmpn_var_y,27,_26616):-call(_26616).
opcode(jmp_var_x,28,_26640):-call(_26640).
opcode(jmp_var_y,29,_26664):-call(_26664).
opcode(jmpn_atom_x,30,_26688):-call(_26688).
opcode(jmpn_atom_y,31,_26712):-call(_26712).
opcode(jmpn_atomic_x,32,_26736):-call(_26736).
opcode(jmpn_atomic_y,33,_26760):-call(_26760).
opcode(jmpn_num_x,34,_26784):-call(_26784).
opcode(jmpn_num_y,35,_26808):-call(_26808).
opcode(jmpn_float_x,36,_26832):-call(_26832).
opcode(jmpn_float_y,37,_26856):-call(_26856).
opcode(jmpn_int_x,38,_26880):-call(_26880).
opcode(jmpn_int_y,39,_26904):-call(_26904).
opcode(hash_jmpn_nil,40,_26928):-call(_26928).
opcode(hash_jmpn_list,41,_26952):-call(_26952).
opcode(hash_jmpn_int,42,_26976):-call(_26976).
opcode(hash_jmpn_atom,43,_27000):-call(_27000).
opcode(hash_jmpn_struct,44,_27024):-call(_27024).
opcode(hash_jmpn_struct_x,45,_27048):-call(_27048).
opcode(hash_jmpn_struct_y,46,_27072):-call(_27072).
opcode(hash_jmpn_struct_xx,47,_27096):-call(_27096).
opcode(hash_jmpn_struct_xy,48,_27120):-call(_27120).
opcode(hash_jmpn_struct_yx,49,_27144):-call(_27144).
opcode(hash_jmpn_struct_yy,50,_27168):-call(_27168).
opcode(unify_struct_x,51,_27192):-call(_27192).
opcode(unify_struct_y,52,_27216):-call(_27216).
opcode(unify_list_x,53,_27240):-call(_27240).
opcode(unify_list_y,54,_27264):-call(_27264).
opcode(unify_nil_x,55,_27288):-call(_27288).
opcode(unify_nil_y,56,_27312):-call(_27312).
opcode(unify_atom_x,57,_27336):-call(_27336).
opcode(unify_int_x,58,_27360):-call(_27360).
opcode(unify_atom_y,59,_27384):-call(_27384).
opcode(unify_int_y,60,_27408):-call(_27408).
opcode(unify_ux_ux,61,_27432):-call(_27432).
opcode(unify_ux_uy,62,_27456):-call(_27456).
opcode(unify_uy_uy,63,_27480):-call(_27480).
opcode(unify_cons_x,64,_27504):-call(_27504).
opcode(unify_cons_y,65,_27528):-call(_27528).
opcode(fork_unify_struct_y,66,_27552):-call(_27552).
opcode(fork_unify_list_y,67,_27576):-call(_27576).
opcode(fork_unify_nil_y,68,_27600):-call(_27600).
opcode(fork_unify_atom_y,69,_27624):-call(_27624).
opcode(fork_unify_int_y,70,_27648):-call(_27648).
opcode(fork_unify_uy_uy,71,_27672):-call(_27672).
opcode(fork_unicut_struct_y,72,_27696):-call(_27696).
opcode(fork_unicut_list_y,73,_27720):-call(_27720).
opcode(fork_unicut_nil_y,74,_27744):-call(_27744).
opcode(fork_unicut_atom_y,75,_27768):-call(_27768).
opcode(fork_unicut_int_y,76,_27792):-call(_27792).
opcode(fork_unicut_uy_uy,77,_27816):-call(_27816).
opcode(unify0_struct_y,78,_27840):-call(_27840).
opcode(unify0_list_y,79,_27864):-call(_27864).
opcode(unify0_nil_y,80,_27888):-call(_27888).
opcode(unify0_atom_y,81,_27912):-call(_27912).
opcode(unify0_int_y,82,_27936):-call(_27936).
opcode(unify0_uy_uy,83,_27960):-call(_27960).
opcode(unicut_struct_y,84,_27984):-call(_27984).
opcode(unicut_list_y,85,_28008):-call(_28008).
opcode(unicut_nil_y,86,_28032):-call(_28032).
opcode(unicut_atom_y,87,_28056):-call(_28056).
opcode(unicut_int_y,88,_28080):-call(_28080).
opcode(unicut_uy_uy,89,_28104):-call(_28104).
opcode(unicut,90,_28128):-call(_28128).
opcode(unify_arg_nil,91,_28152):-call(_28152).
opcode(unify_arg_atom,92,_28176):-call(_28176).
opcode(unify_arg_int,93,_28200):-call(_28200).
opcode(unify_arg_ux_ux,94,_28224):-call(_28224).
opcode(unify_arg_ux,95,_28248):-call(_28248).
opcode(unify_arg_ux_vx,96,_28272):-call(_28272).
opcode(unify_arg_ux_vy,97,_28296):-call(_28296).
opcode(unify_arg_uy_uy,98,_28320):-call(_28320).
opcode(unify_arg_uy,99,_28344):-call(_28344).
opcode(unify_arg_wy,100,_28368):-call(_28368).
opcode(unify_arg_vx_vx,101,_28392):-call(_28392).
opcode(unify_arg_vx,102,_28416):-call(_28416).
opcode(unify_arg_vy_vy,103,_28440):-call(_28440).
opcode(unify_arg_vy,104,_28464):-call(_28464).
opcode(unify_arg_list,105,_28488):-call(_28488).
opcode(unify_arg_struct,106,_28512):-call(_28512).
opcode(unify_arg_void_one,107,_28536):-call(_28536).
opcode(unify_arg_void,108,_28560):-call(_28560).
opcode(unify_arg_vx_vy,109,_28584):-call(_28584).
opcode(unify_arg_vx_ux,110,_28608):-call(_28608).
opcode(unify_arg_vx_uy,111,_28632):-call(_28632).
opcode(unify_arg_vy_vx,112,_28656):-call(_28656).
opcode(unify_arg_vy_ux,113,_28680):-call(_28680).
opcode(unify_arg_vy_uy,114,_28704):-call(_28704).
opcode(unify_arg_iii,115,_28728):-call(_28728).
opcode(move_struct_x,116,_28752):-call(_28752).
opcode(move_struct_y,117,_28776):-call(_28776).
opcode(move_list_x,118,_28800):-call(_28800).
opcode(move_list_y,119,_28824):-call(_28824).
opcode(move_nil_x,120,_28848):-call(_28848).
opcode(move_nil_y,121,_28872):-call(_28872).
opcode(move_atom_x,122,_28896):-call(_28896).
opcode(move_int_x,123,_28920):-call(_28920).
opcode(move_atom_y,124,_28944):-call(_28944).
opcode(move_int_y,125,_28968):-call(_28968).
opcode(move_x_ux,126,_28992):-call(_28992).
opcode(move_x_uy,127,_29016):-call(_29016).
opcode(move_y_ux,128,_29040):-call(_29040).
opcode(move_yy_yy_yy,129,_29064):-call(_29064).
opcode(move_yy_yy,130,_29088):-call(_29088).
opcode(move_y_uy,131,_29112):-call(_29112).
opcode(move_vx,132,_29136):-call(_29136).
opcode(move_vy,133,_29160):-call(_29160).
opcode(move_x_wy,134,_29184):-call(_29184).
opcode(move_yy_yw,135,_29208):-call(_29208).
opcode(move_y_wy,136,_29232):-call(_29232).
opcode(move_yw_yy,137,_29256):-call(_29256).
opcode(and,138,_29280):-call(_29280).
opcode(or,139,_29304):-call(_29304).
opcode(lshiftl,140,_29328):-call(_29328).
opcode(lshiftr,141,_29352):-call(_29352).
opcode(complement,142,_29376):-call(_29376).
opcode(add,143,_29400):-call(_29400).
opcode(add1_y,144,_29424):-call(_29424).
opcode(sub,145,_29448):-call(_29448).
opcode(sub1_y,146,_29472):-call(_29472).
opcode(mul,147,_29496):-call(_29496).
opcode(div,148,_29520):-call(_29520).
opcode(idiv,149,_29544):-call(_29544).
opcode(mod,150,_29568):-call(_29568).
opcode(para_struct,151,_29592):-call(_29592).
opcode(para_list,152,_29616):-call(_29616).
opcode(para_nil,153,_29640):-call(_29640).
opcode(para_atom,154,_29664):-call(_29664).
opcode(para_int,155,_29688):-call(_29688).
opcode(para_ux_ux_ux,156,_29712):-call(_29712).
opcode(para_ux_ux,157,_29736):-call(_29736).
opcode(para_ux,158,_29760):-call(_29760).
opcode(para_uy_uy_uy_uy,159,_29784):-call(_29784).
opcode(para_uy_uy_uy,160,_29808):-call(_29808).
opcode(para_uy_uy,161,_29832):-call(_29832).
opcode(para_uy,162,_29856):-call(_29856).
opcode(para_vx,163,_29880):-call(_29880).
opcode(para_vy_vy,164,_29904):-call(_29904).
opcode(para_vy,165,_29928):-call(_29928).
opcode(para_void_one,166,_29952):-call(_29952).
opcode(para_void,167,_29976):-call(_29976).
opcode(para_vy_ux,168,_30000):-call(_30000).
opcode(para_vy_uy,169,_30024):-call(_30024).
opcode(para_ux_vy,170,_30048):-call(_30048).
opcode(para_ux_ux_uy,171,_30072):-call(_30072).
opcode(para_ux_uy,172,_30096):-call(_30096).
opcode(para_ux_uy_uy,173,_30120):-call(_30120).
opcode(para_uy_vy,174,_30144):-call(_30144).
opcode(para_ux_uy_ux,175,_30168):-call(_30168).
opcode(para_uy_ux,176,_30192):-call(_30192).
opcode(para_uy_ux_ux,177,_30216):-call(_30216).
opcode(para_uy_ux_uy,178,_30240):-call(_30240).
opcode(para_uy_uy_ux,179,_30264):-call(_30264).
opcode(call,180,_30288):-call(_30288).
opcode(call_d,181,_30312):-call(_30312).
opcode(callv,182,_30336):-call(_30336).
opcode(execute,183,_30360):-call(_30360).
opcode(executev,184,_30384):-call(_30384).
opcode(return_a,185,_30408):-call(_30408).
opcode(return_b,186,_30432):-call(_30432).
opcode(jmpn_det,187,_30456):-call(_30456).
opcode(save_ht_jmp,188,_30480):-call(_30480).
opcode(allocate_flat,189,_30504):-call(_30504).
opcode(allocate_nonflat,190,_30528):-call(_30528).
opcode(allocate_nondet,191,_30552):-call(_30552).
opcode(fail,192,_30576):-call(_30576).
opcode(fail0,193,_30600):-call(_30600).
opcode(fork,194,_30624):-call(_30624).
opcode(commit,195,_30648):-call(_30648).
opcode(cut,196,_30672):-call(_30672).
opcode(cut_fail,197,_30696):-call(_30696).
opcode(cut_return,198,_30720):-call(_30720).
opcode(save_b,199,_30744):-call(_30744).
opcode(getbreg,200,_30768):-call(_30768).
opcode(putbreg,201,_30792):-call(_30792).
opcode(getpbreg,202,_30816):-call(_30816).
opcode(hash_x,203,_30840):-call(_30840).
opcode(hash_y,204,_30864):-call(_30864).
opcode(arg,205,_30888):-call(_30888).
opcode(arg0,206,_30912):-call(_30912).
opcode(setarg,207,_30936):-call(_30936).
opcode(setarg0,208,_30960):-call(_30960).
opcode(functor,209,_30984):-call(_30984).
opcode(func_arity,210,_31008):-call(_31008).
opcode(get_ar_cps,211,_31032):-call(_31032).
opcode(put_ar_cps,212,_31056):-call(_31056).
opcode(move_ar_cps,213,_31080):-call(_31080).
opcode(jmpn_det_get_ar_cps,214,_31104):-call(_31104).
opcode(builtin0,215,_31128):-call(_31128).
opcode(builtin1,216,_31152):-call(_31152).
opcode(builtin2,217,_31176):-call(_31176).
opcode(builtin3,218,_31200):-call(_31200).
opcode(builtin4,219,_31224):-call(_31224).
opcode(allocate_susp,220,_31248):-call(_31248).
opcode(susp_var_x,221,_31272):-call(_31272).
opcode(susp_var_y,222,_31296):-call(_31296).
opcode(delay,223,_31320):-call(_31320).
opcode(susp_var_delay,224,_31344):-call(_31344).
opcode(end_delay,225,_31368):-call(_31368).
opcode(nondet,226,_31392):-call(_31392).
opcode(jmp_susp,227,_31416):-call(_31416).
opcode(jmpn_dvar_y,228,_31440):-call(_31440).
opcode(susp_var2_delay,229,_31464):-call(_31464).
opcode(domain_set_false_yy,230,_31488):-call(_31488).
opcode(domain_set_false_yx,231,_31512):-call(_31512).
opcode(halt,232,_31536):-call(_31536).
opcode(endfile,233,_31560):-call(_31560).
opcode(tabsize,234,_31584):-call(_31584).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_opcode_2__1(mach); }
public static Operation exec_pred_opcode_2__1(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_noop,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__2(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__3(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_djmp,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__4(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_struct_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__5(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__6(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_atom_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__7(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint6,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__8(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_nil_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint7,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__9(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint8,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__10(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint9,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__11(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint10,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__12(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_yxx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint11,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__13(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_yxy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint12,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__14(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_yyx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint13,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__15(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_switch_list_yyy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint14,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__16(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_int_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint15,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__17(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eq_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint16,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__18(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_eql,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint17,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__19(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_eql,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint18,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__20(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_eql_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint19,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__21(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_gt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint20,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__22(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_gt_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint21,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__23(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_ge,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint22,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__24(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_ge_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint23,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__25(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_id,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint24,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__26(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_id,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint25,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__27(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_var_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint26,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__28(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_var_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint27,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__29(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_var_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint28,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__30(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_var_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint29,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__31(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_atom_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint30,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__32(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint31,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__33(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_atomic_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint32,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__34(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_atomic_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint33,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__35(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_num_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint34,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__36(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_num_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint35,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__37(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_float_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint36,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__38(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_float_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint37,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__39(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_int_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint38,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__40(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__41) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint39,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__41(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__42) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint40,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__42(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__43) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_list,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint41,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__43(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__44) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_int,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint42,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__44(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__45) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_atom,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint43,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__45(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__46) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint44,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__46(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__47) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint45,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__47(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__48) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint46,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__48(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__49) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_xx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint47,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__49(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__50) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_xy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint48,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__50(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__51) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_yx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint49,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__51(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__52) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_jmpn_struct_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint50,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__52(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__53) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_struct_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint51,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__53(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__54) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint52,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__54(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__55) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_list_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint53,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__55(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__56) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint54,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__56(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__57) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_nil_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint55,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__57(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__58) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint56,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__58(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__59) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_atom_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint57,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__59(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__60) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_int_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint58,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__60(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__61) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint59,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__61(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__62) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint60,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__62(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__63) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_ux_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint61,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__63(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__64) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_ux_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint62,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__64(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__65) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint63,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__65(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__66) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_cons_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint64,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__66(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__67) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_cons_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint65,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__67(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__68) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint66,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__68(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__69) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint67,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__69(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__70) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint68,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__70(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__71) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint69,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__71(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__72) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint70,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__72(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__73) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unify_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint71,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__73(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__74) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint72,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__74(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__75) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint73,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__75(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__76) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint74,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__76(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__77) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint75,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__77(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__78) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint76,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__78(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__79) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork_unicut_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint77,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__79(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__80) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint78,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__80(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__81) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint79,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__81(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__82) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint80,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__82(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__83) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint81,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__83(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__84) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint82,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__84(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__85) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify0_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint83,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__85(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__86) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint84,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__86(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__87) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint85,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__87(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__88) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint86,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__88(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__89) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint87,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__89(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__90) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint88,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__90(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__91) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint89,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__91(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__92) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unicut,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint90,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__92(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__93) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint91,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__93(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__94) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_atom,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint92,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__94(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__95) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_int,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint93,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__95(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__96) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_ux_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint94,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__96(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__97) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint95,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__97(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__98) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_ux_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint96,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__98(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__99) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_ux_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint97,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__99(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__100) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint98,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__100(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__101) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint99,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__101(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__102) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_wy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint100,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__102(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__103) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vx_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint101,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__103(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__104) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint102,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__104(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__105) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vy_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint103,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__105(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__106) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint104,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__106(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__107) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_list,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint105,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__107(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__108) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_struct,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint106,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__108(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__109) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_void_one,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint107,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__109(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__110) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_void,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint108,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__110(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__111) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vx_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint109,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__111(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__112) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vx_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint110,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__112(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__113) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vx_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint111,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__113(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__114) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vy_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint112,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__114(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__115) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vy_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint113,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__115(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__116) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_vy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint114,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__116(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__117) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_unify_arg_iii,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint115,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__117(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__118) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_struct_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint116,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__118(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__119) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_struct_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint117,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__119(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__120) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_list_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint118,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__120(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__121) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_list_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint119,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__121(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__122) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_nil_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint120,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__122(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__123) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_nil_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint121,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__123(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__124) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_atom_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint122,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__124(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__125) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_int_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint123,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__125(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__126) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_atom_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint124,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__126(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__127) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_int_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint125,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__127(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__128) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_x_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint126,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__128(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__129) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_x_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint127,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__129(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__130) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_y_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint128,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__130(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__131) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_yy_yy_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint129,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__131(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__132) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_yy_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint130,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__132(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__133) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_y_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint131,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__133(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__134) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint132,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__134(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__135) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint133,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__135(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__136) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_x_wy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint134,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__136(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__137) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_yy_yw,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint135,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__137(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__138) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_y_wy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint136,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__138(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__139) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_yw_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint137,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__139(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__140) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_and,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint138,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__140(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__141) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_or,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint139,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__141(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__142) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_lshiftl,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint140,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__142(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__143) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_lshiftr,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint141,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__143(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__144) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_complement,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint142,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__144(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__145) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_add,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint143,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__145(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__146) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_add1_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint144,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__146(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__147) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_sub,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint145,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__147(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__148) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_sub1_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint146,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__148(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__149) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_mul,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint147,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__149(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__150) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_div,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint148,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__150(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__151) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_idiv,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint149,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__151(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__152) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_mod,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint150,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__152(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__153) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_struct,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint151,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__153(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__154) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_list,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint152,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__154(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__155) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint153,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__155(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__156) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_atom,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint154,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__156(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__157) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_int,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint155,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__157(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__158) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_ux_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint156,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__158(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__159) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint157,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__159(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__160) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint158,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__160(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__161) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_uy_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint159,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__161(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__162) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint160,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__162(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__163) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint161,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__163(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__164) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint162,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__164(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__165) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_vx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint163,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__165(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__166) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_vy_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint164,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__166(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__167) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint165,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__167(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__168) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_void_one,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint166,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__168(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__169) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_void,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint167,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__169(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__170) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_vy_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint168,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__170(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__171) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_vy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint169,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__171(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__172) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint170,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__172(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__173) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_ux_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint171,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__173(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__174) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint172,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__174(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__175) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_uy_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint173,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__175(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__176) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_vy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint174,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__176(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__177) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_ux_uy_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint175,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__177(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__178) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint176,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__178(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__179) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_ux_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint177,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__179(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__180) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_ux_uy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint178,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__180(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__181) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_para_uy_uy_ux,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint179,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__181(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__182) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_call,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint180,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__182(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__183) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_call_d,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint181,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__183(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__184) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_callv,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint182,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__184(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__185) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_execute,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint183,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__185(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__186) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_executev,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint184,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__186(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__187) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_return_a,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint185,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__187(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__188) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_return_b,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint186,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__188(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__189) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_det,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint187,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__189(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__190) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_save_ht_jmp,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint188,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__190(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__191) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_allocate_flat,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint189,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__191(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__192) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_allocate_nonflat,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint190,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__192(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__193) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_allocate_nondet,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint191,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__193(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__194) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint192,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__194(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__195) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fail0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint193,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__195(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__196) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_fork,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint194,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__196(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__197) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_commit,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint195,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__197(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__198) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_cut,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint196,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__198(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__199) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_cut_fail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint197,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__199(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__200) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_cut_return,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint198,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__200(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__201) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_save_b,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint199,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__201(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__202) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_getbreg,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint200,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__202(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__203) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_putbreg,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint201,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__203(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__204) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_getpbreg,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint202,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__204(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__205) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint203,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__205(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__206) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_hash_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint204,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__206(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__207) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_arg,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint205,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__207(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__208) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_arg0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint206,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__208(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__209) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_setarg,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint207,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__209(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__210) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_setarg0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint208,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__210(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__211) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_functor,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint209,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__211(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__212) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_func_arity,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint210,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__212(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__213) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_get_ar_cps,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint211,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__213(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__214) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_put_ar_cps,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint212,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__214(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__215) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_move_ar_cps,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint213,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__215(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__216) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_det_get_ar_cps,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint214,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__216(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__217) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_builtin0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint215,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__217(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__218) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_builtin1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint216,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__218(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__219) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_builtin2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint217,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__219(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__220) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_builtin3,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint218,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__220(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__221) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_builtin4,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint219,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__221(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__222) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_allocate_susp,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint220,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__222(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__223) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_susp_var_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint221,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__223(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__224) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_susp_var_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint222,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__224(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__225) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_delay,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint223,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__225(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__226) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_susp_var_delay,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint224,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__226(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__227) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_end_delay,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint225,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__227(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__228) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_nondet,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint226,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__228(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__229) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmp_susp,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint227,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__229(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__230) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_jmpn_dvar_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint228,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__230(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__231) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_susp_var2_delay,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint229,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__231(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__232) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_domain_set_false_yy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint230,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__232(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__233) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_domain_set_false_yx,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint231,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__233(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__234) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_halt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint232,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__234(Prolog mach){ mach.FillAlternative(pred_opcode_2::exec_pred_opcode_2__235) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_endfile,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint233,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opcode_2__235(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(asm.s_tabsize,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(asm.posint234,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_output_mess_1 extends Code {

/*

output_mess(_31600,_31612):- :(true,telling(_31604),tell(user,write(_31600,nl(tell(_31604,_31612))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_output_mess_1__1(mach); }
public static Operation exec_pred_output_mess_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_telling,var2) ;
local_aregs[2] = Data.F(asm.s_tell,asm.s_user,Data.F(asm.s_write,var1.Deref(),Data.F(asm.s_nl,Data.F(asm.s_tell,var2.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


public static class pred_is_unify_arg_inst_1 extends Code {

/*

is_unify_arg_inst(_31656,_31674):- :(true,functor(_31656,_31662,_31664),opcode(_31662,_31666,smallerorequal(91,_31666,smallerorequal(_31666,115,_31674)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_is_unify_arg_inst_1__1(mach); }
public static Operation exec_pred_is_unify_arg_inst_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = asm.s_true ;
local_aregs[1] = Data.F(asm.s_functor,var1.Deref(),var2,var3) ;
local_aregs[2] = Data.F(asm.s_opcode,var2.Deref(),var4,Data.F(asm.s_smallerorequal,asm.posint91,var4.Deref(),Data.F(asm.s_smallerorequal,var4.Deref(),asm.posint115,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
}


}


