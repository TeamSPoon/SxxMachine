using namespace std;

#include "asm.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  asm_Renamed::s_cut = Data::Intern("cut");
Const* const  asm_Renamed::s1 = Data::Intern(" is called but not defined");
Const* const  asm_Renamed::s2 = Data::Intern(" is doubly defined");
Const* const  asm_Renamed::s3 = Data::Intern("$asm_bp");
Const* const  asm_Renamed::s4 = Data::Intern("$sym_no");
Const* const  asm_Renamed::s5 = Data::Intern("+");
Const* const  asm_Renamed::s6 = Data::Intern(",");
Const* const  asm_Renamed::s7 = Data::Intern("-");
Const* const  asm_Renamed::s8 = Data::Intern("->");
Const* const  asm_Renamed::s9 = Data::Intern(".");
Const* const  asm_Renamed::s10 = Data::Intern("/");
Const* const  asm_Renamed::s11 = Data::Intern("/\\");
Const* const  asm_Renamed::s12 = Data::Intern(":");
Const* const  asm_Renamed::s13 = Data::Intern(":-");
Const* const  asm_Renamed::s14 = Data::Intern(":=");
Const* const  asm_Renamed::s15 = Data::Intern(";");
Const* const  asm_Renamed::s16 = Data::Intern("<");
Const* const  asm_Renamed::s17 = Data::Intern("<<");
Const* const  asm_Renamed::s18 = Data::Intern("<=");
Const* const  asm_Renamed::s19 = Data::Intern("=");
Const* const  asm_Renamed::s20 = Data::Intern("=:=");
Const* const  asm_Renamed::s21 = Data::Intern("==");
Const* const  asm_Renamed::s22 = Data::Intern("=\\=");
Const* const  asm_Renamed::s23 = Data::Intern(">");
Const* const  asm_Renamed::s24 = Data::Intern(">>");
Const* const  asm_Renamed::s25 = Data::Intern("The predicate ");
Const* const  asm_Renamed::s26 = Data::Intern("\\/");
Const* const  asm_Renamed::s_add = Data::Intern("add");
Const* const  asm_Renamed::s_add1_y = Data::Intern("add1_y");
Const* const  asm_Renamed::s_allocate_flat = Data::Intern("allocate_flat");
Const* const  asm_Renamed::s_allocate_nondet = Data::Intern("allocate_nondet");
Const* const  asm_Renamed::s_allocate_nonflat = Data::Intern("allocate_nonflat");
Const* const  asm_Renamed::s_allocate_susp = Data::Intern("allocate_susp");
Const* const  asm_Renamed::s_and = Data::Intern("and");
Const* const  asm_Renamed::s_arg = Data::Intern("arg");
Const* const  asm_Renamed::s_arg0 = Data::Intern("arg0");
Const* const  asm_Renamed::s_arglabel = Data::Intern("arglabel");
Const* const  asm_Renamed::s_asm = Data::Intern("asm");
Const* const  asm_Renamed::s_asm0 = Data::Intern("asm0");
Const* const  asm_Renamed::s_asm_bp = Data::Intern("asm_bp");
Const* const  asm_Renamed::s_asm_getaslist = Data::Intern("asm_getaslist");
Const* const  asm_Renamed::s_asm_getaslist1 = Data::Intern("asm_getaslist1");
Const* const  asm_Renamed::s_asm_hash_value = Data::Intern("asm_hash_value");
Const* const  asm_Renamed::s_asm_index = Data::Intern("asm_index");
Const* const  asm_Renamed::s_asm_index_inst = Data::Intern("asm_index_inst");
Const* const  asm_Renamed::s_asm_index_pass1 = Data::Intern("asm_index_pass1");
Const* const  asm_Renamed::s_asm_lookup_ctab = Data::Intern("asm_lookup_ctab");
Const* const  asm_Renamed::s_asm_lookup_ctab1 = Data::Intern("asm_lookup_ctab1");
Const* const  asm_Renamed::s_asm_lookup_ltab = Data::Intern("asm_lookup_ltab");
Const* const  asm_Renamed::s_asm_lookup_ltab1 = Data::Intern("asm_lookup_ltab1");
Const* const  asm_Renamed::s_asm_magic = Data::Intern("asm_magic");
Const* const  asm_Renamed::s_asm_mark_eot = Data::Intern("asm_mark_eot");
Const* const  asm_Renamed::s_asm_merge = Data::Intern("asm_merge");
Const* const  asm_Renamed::s_asm_pass1 = Data::Intern("asm_pass1");
Const* const  asm_Renamed::s_asm_pass11 = Data::Intern("asm_pass11");
Const* const  asm_Renamed::s_asm_pass12 = Data::Intern("asm_pass12");
Const* const  asm_Renamed::s_asm_pass12_call = Data::Intern("asm_pass12_call");
Const* const  asm_Renamed::s_asm_pass1_bp = Data::Intern("asm_pass1_bp");
Const* const  asm_Renamed::s_asm_pass2 = Data::Intern("asm_pass2");
Const* const  asm_Renamed::s_asm_pass2_inst = Data::Intern("asm_pass2_inst");
Const* const  asm_Renamed::s_asm_pass2_inst_op = Data::Intern("asm_pass2_inst_op");
Const* const  asm_Renamed::s_asm_pass2a = Data::Intern("asm_pass2a");
Const* const  asm_Renamed::s_asm_proc_index = Data::Intern("asm_proc_index");
Const* const  asm_Renamed::s_asm_putnum = Data::Intern("asm_putnum");
Const* const  asm_Renamed::s_asm_rearange_csym = Data::Intern("asm_rearange_csym");
Const* const  asm_Renamed::s_asm_symbol = Data::Intern("asm_symbol");
Const* const  asm_Renamed::s_asmpass1_fillin = Data::Intern("asmpass1_fillin");
Const* const  asm_Renamed::s_asmpass1_fillin_bp = Data::Intern("asmpass1_fillin_bp");
Const* const  asm_Renamed::s_asmpass1_setundef = Data::Intern("asmpass1_setundef");
Const* const  asm_Renamed::s_b_ASPN2_cc = Data::Intern("b_ASPN2_cc");
Const* const  asm_Renamed::s_b_ASPN3_ccc = Data::Intern("b_ASPN3_ccc");
Const* const  asm_Renamed::s_b_ASPN4_cccc = Data::Intern("b_ASPN4_cccc");
Const* const  asm_Renamed::s_b_ASPN_c = Data::Intern("b_ASPN_c");
Const* const  asm_Renamed::s_b_GET_LENGTH_cf = Data::Intern("b_GET_LENGTH_cf");
Const* const  asm_Renamed::s_b_GET_SYM_TYPE_ccf = Data::Intern("b_GET_SYM_TYPE_ccf");
Const* const  asm_Renamed::s_builtin0 = Data::Intern("builtin0");
Const* const  asm_Renamed::s_builtin1 = Data::Intern("builtin1");
Const* const  asm_Renamed::s_builtin2 = Data::Intern("builtin2");
Const* const  asm_Renamed::s_builtin3 = Data::Intern("builtin3");
Const* const  asm_Renamed::s_builtin4 = Data::Intern("builtin4");
Const* const  asm_Renamed::s_c = Data::Intern("c");
Const* const  asm_Renamed::s_call = Data::Intern("call");
Const* const  asm_Renamed::s_call_d = Data::Intern("call_d");
Const* const  asm_Renamed::s_callv = Data::Intern("callv");
Const* const  asm_Renamed::s_cmp_error = Data::Intern("cmp_error");
Const* const  asm_Renamed::s_commit = Data::Intern("commit");
Const* const  asm_Renamed::s_complement = Data::Intern("complement");
Const* const  asm_Renamed::s_csym = Data::Intern("csym");
Const* const  asm_Renamed::s_cut_fail = Data::Intern("cut_fail");
Const* const  asm_Renamed::s_cut_return = Data::Intern("cut_return");
Const* const  asm_Renamed::s_d = Data::Intern("d");
Const* const  asm_Renamed::s_delay = Data::Intern("delay");
Const* const  asm_Renamed::s_determinate = Data::Intern("determinate");
Const* const  asm_Renamed::s_div = Data::Intern("div");
Const* const  asm_Renamed::s_djmp = Data::Intern("djmp");
Const* const  asm_Renamed::s_domain_set_false_yx = Data::Intern("domain_set_false_yx");
Const* const  asm_Renamed::s_domain_set_false_yy = Data::Intern("domain_set_false_yy");
Const* const  asm_Renamed::s_end_delay = Data::Intern("end_delay");
Const* const  asm_Renamed::s_end_of_file = Data::Intern("end_of_file");
Const* const  asm_Renamed::s_endfile = Data::Intern("endfile");
Const* const  asm_Renamed::s101 = Data::Intern("error in asm pass2 :");
Const* const  asm_Renamed::s_error_double_define = Data::Intern("error_double_define");
Const* const  asm_Renamed::s_execute = Data::Intern("execute");
Const* const  asm_Renamed::s_executev = Data::Intern("executev");
Const* const  asm_Renamed::s_f = Data::Intern("f");
Const* const  asm_Renamed::s_fail = Data::Intern("fail");
Const* const  asm_Renamed::s_fail0 = Data::Intern("fail0");
Const* const  asm_Renamed::s_flat_to_nondet = Data::Intern("flat_to_nondet");
Const* const  asm_Renamed::s_fork = Data::Intern("fork");
Const* const  asm_Renamed::s_fork_unicut_atom_y = Data::Intern("fork_unicut_atom_y");
Const* const  asm_Renamed::s_fork_unicut_int_y = Data::Intern("fork_unicut_int_y");
Const* const  asm_Renamed::s_fork_unicut_list_y = Data::Intern("fork_unicut_list_y");
Const* const  asm_Renamed::s_fork_unicut_nil_y = Data::Intern("fork_unicut_nil_y");
Const* const  asm_Renamed::s_fork_unicut_struct_y = Data::Intern("fork_unicut_struct_y");
Const* const  asm_Renamed::s_fork_unicut_ux_uy = Data::Intern("fork_unicut_ux_uy");
Const* const  asm_Renamed::s_fork_unicut_uy_uy = Data::Intern("fork_unicut_uy_uy");
Const* const  asm_Renamed::s_fork_unify_atom_y = Data::Intern("fork_unify_atom_y");
Const* const  asm_Renamed::s_fork_unify_int_y = Data::Intern("fork_unify_int_y");
Const* const  asm_Renamed::s_fork_unify_list_y = Data::Intern("fork_unify_list_y");
Const* const  asm_Renamed::s_fork_unify_nil_y = Data::Intern("fork_unify_nil_y");
Const* const  asm_Renamed::s_fork_unify_struct_y = Data::Intern("fork_unify_struct_y");
Const* const  asm_Renamed::s_fork_unify_ux_uy = Data::Intern("fork_unify_ux_uy");
Const* const  asm_Renamed::s_fork_unify_uy_uy = Data::Intern("fork_unify_uy_uy");
Const* const  asm_Renamed::s_func_arity = Data::Intern("func_arity");
Const* const  asm_Renamed::s_functor = Data::Intern("functor");
Const* const  asm_Renamed::s_fx = Data::Intern("fx");
Const* const  asm_Renamed::s_get_ar_cps = Data::Intern("get_ar_cps");
Const* const  asm_Renamed::s_getbreg = Data::Intern("getbreg");
Const* const  asm_Renamed::s_gethtreg = Data::Intern("gethtreg");
Const* const  asm_Renamed::s_getpbreg = Data::Intern("getpbreg");
Const* const  asm_Renamed::s_global_create = Data::Intern("global_create");
Const* const  asm_Renamed::s_global_del = Data::Intern("global_del");
Const* const  asm_Renamed::s_global_get = Data::Intern("global_get");
Const* const  asm_Renamed::s_global_set = Data::Intern("global_set");
Const* const  asm_Renamed::s_halt = Data::Intern("halt");
Const* const  asm_Renamed::s_hash_jmpn_atom = Data::Intern("hash_jmpn_atom");
Const* const  asm_Renamed::s_hash_jmpn_int = Data::Intern("hash_jmpn_int");
Const* const  asm_Renamed::s_hash_jmpn_list = Data::Intern("hash_jmpn_list");
Const* const  asm_Renamed::s_hash_jmpn_nil = Data::Intern("hash_jmpn_nil");
Const* const  asm_Renamed::s_hash_jmpn_struct = Data::Intern("hash_jmpn_struct");
Const* const  asm_Renamed::s_hash_jmpn_struct_x = Data::Intern("hash_jmpn_struct_x");
Const* const  asm_Renamed::s_hash_jmpn_struct_xx = Data::Intern("hash_jmpn_struct_xx");
Const* const  asm_Renamed::s_hash_jmpn_struct_xy = Data::Intern("hash_jmpn_struct_xy");
Const* const  asm_Renamed::s_hash_jmpn_struct_y = Data::Intern("hash_jmpn_struct_y");
Const* const  asm_Renamed::s_hash_jmpn_struct_yx = Data::Intern("hash_jmpn_struct_yx");
Const* const  asm_Renamed::s_hash_jmpn_struct_yy = Data::Intern("hash_jmpn_struct_yy");
Const* const  asm_Renamed::s_hash_x = Data::Intern("hash_x");
Const* const  asm_Renamed::s_hash_y = Data::Intern("hash_y");
Const* const  asm_Renamed::s_i = Data::Intern("i");
Const* const  asm_Renamed::s_idiv = Data::Intern("idiv");
Const* const  asm_Renamed::s_integer = Data::Intern("integer");
Const* const  asm_Renamed::s_is = Data::Intern("is");
Const* const  asm_Renamed::s153 = Data::Intern("is not defined");
Const* const  asm_Renamed::s_is_unify_arg_inst = Data::Intern("is_unify_arg_inst");
Const* const  asm_Renamed::s_isglobal = Data::Intern("isglobal");
Const* const  asm_Renamed::s_jmp = Data::Intern("jmp");
Const* const  asm_Renamed::s_jmp_eql = Data::Intern("jmp_eql");
Const* const  asm_Renamed::s_jmp_eql_yy = Data::Intern("jmp_eql_yy");
Const* const  asm_Renamed::s_jmp_id = Data::Intern("jmp_id");
Const* const  asm_Renamed::s_jmp_susp = Data::Intern("jmp_susp");
Const* const  asm_Renamed::s_jmp_var_x = Data::Intern("jmp_var_x");
Const* const  asm_Renamed::s_jmp_var_y = Data::Intern("jmp_var_y");
Const* const  asm_Renamed::s_jmpn_atom_x = Data::Intern("jmpn_atom_x");
Const* const  asm_Renamed::s_jmpn_atom_y = Data::Intern("jmpn_atom_y");
Const* const  asm_Renamed::s_jmpn_atomic_x = Data::Intern("jmpn_atomic_x");
Const* const  asm_Renamed::s_jmpn_atomic_y = Data::Intern("jmpn_atomic_y");
Const* const  asm_Renamed::s_jmpn_det = Data::Intern("jmpn_det");
Const* const  asm_Renamed::s_jmpn_det_get_ar_cps = Data::Intern("jmpn_det_get_ar_cps");
Const* const  asm_Renamed::s_jmpn_dvar_y = Data::Intern("jmpn_dvar_y");
Const* const  asm_Renamed::s_jmpn_eq_atom_x = Data::Intern("jmpn_eq_atom_x");
Const* const  asm_Renamed::s_jmpn_eq_atom_y = Data::Intern("jmpn_eq_atom_y");
Const* const  asm_Renamed::s_jmpn_eq_int_x = Data::Intern("jmpn_eq_int_x");
Const* const  asm_Renamed::s_jmpn_eq_int_y = Data::Intern("jmpn_eq_int_y");
Const* const  asm_Renamed::s_jmpn_eq_struct_x = Data::Intern("jmpn_eq_struct_x");
Const* const  asm_Renamed::s_jmpn_eq_struct_y = Data::Intern("jmpn_eq_struct_y");
Const* const  asm_Renamed::s_jmpn_eql = Data::Intern("jmpn_eql");
Const* const  asm_Renamed::s_jmpn_float_x = Data::Intern("jmpn_float_x");
Const* const  asm_Renamed::s_jmpn_float_y = Data::Intern("jmpn_float_y");
Const* const  asm_Renamed::s_jmpn_ge = Data::Intern("jmpn_ge");
Const* const  asm_Renamed::s_jmpn_ge_yy = Data::Intern("jmpn_ge_yy");
Const* const  asm_Renamed::s_jmpn_gt = Data::Intern("jmpn_gt");
Const* const  asm_Renamed::s_jmpn_gt_yy = Data::Intern("jmpn_gt_yy");
Const* const  asm_Renamed::s_jmpn_id = Data::Intern("jmpn_id");
Const* const  asm_Renamed::s_jmpn_int_x = Data::Intern("jmpn_int_x");
Const* const  asm_Renamed::s_jmpn_int_y = Data::Intern("jmpn_int_y");
Const* const  asm_Renamed::s_jmpn_nil_x = Data::Intern("jmpn_nil_x");
Const* const  asm_Renamed::s_jmpn_nil_y = Data::Intern("jmpn_nil_y");
Const* const  asm_Renamed::s_jmpn_num_x = Data::Intern("jmpn_num_x");
Const* const  asm_Renamed::s_jmpn_num_y = Data::Intern("jmpn_num_y");
Const* const  asm_Renamed::s_jmpn_var_x = Data::Intern("jmpn_var_x");
Const* const  asm_Renamed::s_jmpn_var_y = Data::Intern("jmpn_var_y");
Const* const  asm_Renamed::s_lab = Data::Intern("lab");
Const* const  asm_Renamed::s_lab_member1 = Data::Intern("lab_member1");
Const* const  asm_Renamed::s_label = Data::Intern("label");
Const* const  asm_Renamed::s_length = Data::Intern("length");
Const* const  asm_Renamed::s_lshiftl = Data::Intern("lshiftl");
Const* const  asm_Renamed::s_lshiftr = Data::Intern("lshiftr");
Const* const  asm_Renamed::s_lsym = Data::Intern("lsym");
Const* const  asm_Renamed::s_mod = Data::Intern("mod");
Const* const  asm_Renamed::s_mode = Data::Intern("mode");
Const* const  asm_Renamed::s_move_ar_cps = Data::Intern("move_ar_cps");
Const* const  asm_Renamed::s_move_atom_x = Data::Intern("move_atom_x");
Const* const  asm_Renamed::s_move_atom_y = Data::Intern("move_atom_y");
Const* const  asm_Renamed::s_move_int_x = Data::Intern("move_int_x");
Const* const  asm_Renamed::s_move_int_y = Data::Intern("move_int_y");
Const* const  asm_Renamed::s_move_list_x = Data::Intern("move_list_x");
Const* const  asm_Renamed::s_move_list_y = Data::Intern("move_list_y");
Const* const  asm_Renamed::s_move_nil_x = Data::Intern("move_nil_x");
Const* const  asm_Renamed::s_move_nil_y = Data::Intern("move_nil_y");
Const* const  asm_Renamed::s_move_struct_x = Data::Intern("move_struct_x");
Const* const  asm_Renamed::s_move_struct_y = Data::Intern("move_struct_y");
Const* const  asm_Renamed::s_move_vx = Data::Intern("move_vx");
Const* const  asm_Renamed::s_move_vy = Data::Intern("move_vy");
Const* const  asm_Renamed::s_move_x_ux = Data::Intern("move_x_ux");
Const* const  asm_Renamed::s_move_x_uy = Data::Intern("move_x_uy");
Const* const  asm_Renamed::s_move_x_wy = Data::Intern("move_x_wy");
Const* const  asm_Renamed::s_move_y_ux = Data::Intern("move_y_ux");
Const* const  asm_Renamed::s_move_y_uy = Data::Intern("move_y_uy");
Const* const  asm_Renamed::s_move_y_wy = Data::Intern("move_y_wy");
Const* const  asm_Renamed::s_move_yw_yy = Data::Intern("move_yw_yy");
Const* const  asm_Renamed::s_move_yy_yw = Data::Intern("move_yy_yw");
Const* const  asm_Renamed::s_move_yy_yy = Data::Intern("move_yy_yy");
Const* const  asm_Renamed::s_move_yy_yy_yy = Data::Intern("move_yy_yy_yy");
Const* const  asm_Renamed::s_mul = Data::Intern("mul");
Const* const  asm_Renamed::s_name = Data::Intern("name");
Const* const  asm_Renamed::s_next_sym_no = Data::Intern("next_sym_no");
Const* const  asm_Renamed::s_nl = Data::Intern("nl");
Const* const  asm_Renamed::s_nondet = Data::Intern("nondet");
Const* const  asm_Renamed::s_noop = Data::Intern("noop");
Const* const  asm_Renamed::s_on_load_asm = Data::Intern("on_load_asm");
Const* const  asm_Renamed::s_op = Data::Intern("op");
Const* const  asm_Renamed::s_opcode = Data::Intern("opcode");
Const* const  asm_Renamed::s_or = Data::Intern("or");
Const* const  asm_Renamed::s_output_mess = Data::Intern("output_mess");
Const* const  asm_Renamed::s_para_atom = Data::Intern("para_atom");
Const* const  asm_Renamed::s_para_int = Data::Intern("para_int");
Const* const  asm_Renamed::s_para_list = Data::Intern("para_list");
Const* const  asm_Renamed::s_para_nil = Data::Intern("para_nil");
Const* const  asm_Renamed::s_para_struct = Data::Intern("para_struct");
Const* const  asm_Renamed::s_para_ux = Data::Intern("para_ux");
Const* const  asm_Renamed::s_para_ux_ux = Data::Intern("para_ux_ux");
Const* const  asm_Renamed::s_para_ux_ux_ux = Data::Intern("para_ux_ux_ux");
Const* const  asm_Renamed::s_para_ux_ux_uy = Data::Intern("para_ux_ux_uy");
Const* const  asm_Renamed::s_para_ux_uy = Data::Intern("para_ux_uy");
Const* const  asm_Renamed::s_para_ux_uy_ux = Data::Intern("para_ux_uy_ux");
Const* const  asm_Renamed::s_para_ux_uy_uy = Data::Intern("para_ux_uy_uy");
Const* const  asm_Renamed::s_para_ux_vy = Data::Intern("para_ux_vy");
Const* const  asm_Renamed::s_para_uy = Data::Intern("para_uy");
Const* const  asm_Renamed::s_para_uy_ux = Data::Intern("para_uy_ux");
Const* const  asm_Renamed::s_para_uy_ux_ux = Data::Intern("para_uy_ux_ux");
Const* const  asm_Renamed::s_para_uy_ux_uy = Data::Intern("para_uy_ux_uy");
Const* const  asm_Renamed::s_para_uy_uy = Data::Intern("para_uy_uy");
Const* const  asm_Renamed::s_para_uy_uy_ux = Data::Intern("para_uy_uy_ux");
Const* const  asm_Renamed::s_para_uy_uy_uy = Data::Intern("para_uy_uy_uy");
Const* const  asm_Renamed::s_para_uy_uy_uy_uy = Data::Intern("para_uy_uy_uy_uy");
Const* const  asm_Renamed::s_para_uy_vy = Data::Intern("para_uy_vy");
Const* const  asm_Renamed::s_para_void = Data::Intern("para_void");
Const* const  asm_Renamed::s_para_void_one = Data::Intern("para_void_one");
Const* const  asm_Renamed::s_para_vx = Data::Intern("para_vx");
Const* const  asm_Renamed::s_para_vy = Data::Intern("para_vy");
Const* const  asm_Renamed::s_para_vy_ux = Data::Intern("para_vy_ux");
Const* const  asm_Renamed::s_para_vy_uy = Data::Intern("para_vy_uy");
Const* const  asm_Renamed::s_para_vy_vy = Data::Intern("para_vy_vy");
Const* const  asm_Renamed::s_pred = Data::Intern("pred");
Const* const  asm_Renamed::s_predefined = Data::Intern("predefined");
Const* const  asm_Renamed::s_put = Data::Intern("put");
Const* const  asm_Renamed::s_put_ar_cps = Data::Intern("put_ar_cps");
Const* const  asm_Renamed::s_putbreg = Data::Intern("putbreg");
Const* const  asm_Renamed::s_puthtreg = Data::Intern("puthtreg");
Const* const  asm_Renamed::s_read = Data::Intern("read");
Const* const  asm_Renamed::s_return_a = Data::Intern("return_a");
Const* const  asm_Renamed::s_return_b = Data::Intern("return_b");
Const* const  asm_Renamed::s_s = Data::Intern("s");
Const* const  asm_Renamed::s_save_b = Data::Intern("save_b");
Const* const  asm_Renamed::s_save_ht_jmp = Data::Intern("save_ht_jmp");
Const* const  asm_Renamed::s_see = Data::Intern("see");
Const* const  asm_Renamed::s_seen = Data::Intern("seen");
Const* const  asm_Renamed::s_setarg = Data::Intern("setarg");
Const* const  asm_Renamed::s_setarg0 = Data::Intern("setarg0");
Const* const  asm_Renamed::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  asm_Renamed::s_sub = Data::Intern("sub");
Const* const  asm_Renamed::s_sub1_y = Data::Intern("sub1_y");
Const* const  asm_Renamed::s_susp_var2_delay = Data::Intern("susp_var2_delay");
Const* const  asm_Renamed::s_susp_var_delay = Data::Intern("susp_var_delay");
Const* const  asm_Renamed::s_susp_var_x = Data::Intern("susp_var_x");
Const* const  asm_Renamed::s_susp_var_y = Data::Intern("susp_var_y");
Const* const  asm_Renamed::s_switch_list_x = Data::Intern("switch_list_x");
Const* const  asm_Renamed::s_switch_list_y = Data::Intern("switch_list_y");
Const* const  asm_Renamed::s_switch_list_yxx = Data::Intern("switch_list_yxx");
Const* const  asm_Renamed::s_switch_list_yxy = Data::Intern("switch_list_yxy");
Const* const  asm_Renamed::s_switch_list_yyx = Data::Intern("switch_list_yyx");
Const* const  asm_Renamed::s_switch_list_yyy = Data::Intern("switch_list_yyy");
Const* const  asm_Renamed::s_sym = Data::Intern("sym");
Const* const  asm_Renamed::s_sym_member1 = Data::Intern("sym_member1");
Const* const  asm_Renamed::s_tabsize = Data::Intern("tabsize");
Const* const  asm_Renamed::s_tell = Data::Intern("tell");
Const* const  asm_Renamed::s_telling = Data::Intern("telling");
Const* const  asm_Renamed::s_told = Data::Intern("told");
Const* const  asm_Renamed::s_true = Data::Intern("true");
Const* const  asm_Renamed::s_unicut = Data::Intern("unicut");
Const* const  asm_Renamed::s_unicut_atom_y = Data::Intern("unicut_atom_y");
Const* const  asm_Renamed::s_unicut_int_y = Data::Intern("unicut_int_y");
Const* const  asm_Renamed::s_unicut_list_y = Data::Intern("unicut_list_y");
Const* const  asm_Renamed::s_unicut_nil_y = Data::Intern("unicut_nil_y");
Const* const  asm_Renamed::s_unicut_struct_y = Data::Intern("unicut_struct_y");
Const* const  asm_Renamed::s_unicut_uy_uy = Data::Intern("unicut_uy_uy");
Const* const  asm_Renamed::s_unify = Data::Intern("unify");
Const* const  asm_Renamed::s_unify0_atom_y = Data::Intern("unify0_atom_y");
Const* const  asm_Renamed::s_unify0_int_y = Data::Intern("unify0_int_y");
Const* const  asm_Renamed::s_unify0_list_y = Data::Intern("unify0_list_y");
Const* const  asm_Renamed::s_unify0_nil_y = Data::Intern("unify0_nil_y");
Const* const  asm_Renamed::s_unify0_struct_y = Data::Intern("unify0_struct_y");
Const* const  asm_Renamed::s_unify0_ux_uy = Data::Intern("unify0_ux_uy");
Const* const  asm_Renamed::s_unify0_uy_uy = Data::Intern("unify0_uy_uy");
Const* const  asm_Renamed::s_unify_arg_atom = Data::Intern("unify_arg_atom");
Const* const  asm_Renamed::s_unify_arg_iii = Data::Intern("unify_arg_iii");
Const* const  asm_Renamed::s_unify_arg_int = Data::Intern("unify_arg_int");
Const* const  asm_Renamed::s_unify_arg_list = Data::Intern("unify_arg_list");
Const* const  asm_Renamed::s_unify_arg_nil = Data::Intern("unify_arg_nil");
Const* const  asm_Renamed::s_unify_arg_struct = Data::Intern("unify_arg_struct");
Const* const  asm_Renamed::s_unify_arg_ux = Data::Intern("unify_arg_ux");
Const* const  asm_Renamed::s_unify_arg_ux_ux = Data::Intern("unify_arg_ux_ux");
Const* const  asm_Renamed::s_unify_arg_ux_vx = Data::Intern("unify_arg_ux_vx");
Const* const  asm_Renamed::s_unify_arg_ux_vy = Data::Intern("unify_arg_ux_vy");
Const* const  asm_Renamed::s_unify_arg_uy = Data::Intern("unify_arg_uy");
Const* const  asm_Renamed::s_unify_arg_uy_uy = Data::Intern("unify_arg_uy_uy");
Const* const  asm_Renamed::s_unify_arg_void = Data::Intern("unify_arg_void");
Const* const  asm_Renamed::s_unify_arg_void_one = Data::Intern("unify_arg_void_one");
Const* const  asm_Renamed::s_unify_arg_vx = Data::Intern("unify_arg_vx");
Const* const  asm_Renamed::s_unify_arg_vx_ux = Data::Intern("unify_arg_vx_ux");
Const* const  asm_Renamed::s_unify_arg_vx_uy = Data::Intern("unify_arg_vx_uy");
Const* const  asm_Renamed::s_unify_arg_vx_vx = Data::Intern("unify_arg_vx_vx");
Const* const  asm_Renamed::s_unify_arg_vx_vy = Data::Intern("unify_arg_vx_vy");
Const* const  asm_Renamed::s_unify_arg_vy = Data::Intern("unify_arg_vy");
Const* const  asm_Renamed::s_unify_arg_vy_ux = Data::Intern("unify_arg_vy_ux");
Const* const  asm_Renamed::s_unify_arg_vy_uy = Data::Intern("unify_arg_vy_uy");
Const* const  asm_Renamed::s_unify_arg_vy_vx = Data::Intern("unify_arg_vy_vx");
Const* const  asm_Renamed::s_unify_arg_vy_vy = Data::Intern("unify_arg_vy_vy");
Const* const  asm_Renamed::s_unify_arg_wy = Data::Intern("unify_arg_wy");
Const* const  asm_Renamed::s_unify_atom_x = Data::Intern("unify_atom_x");
Const* const  asm_Renamed::s_unify_atom_y = Data::Intern("unify_atom_y");
Const* const  asm_Renamed::s_unify_cons_x = Data::Intern("unify_cons_x");
Const* const  asm_Renamed::s_unify_cons_y = Data::Intern("unify_cons_y");
Const* const  asm_Renamed::s_unify_int_x = Data::Intern("unify_int_x");
Const* const  asm_Renamed::s_unify_int_y = Data::Intern("unify_int_y");
Const* const  asm_Renamed::s_unify_list_x = Data::Intern("unify_list_x");
Const* const  asm_Renamed::s_unify_list_y = Data::Intern("unify_list_y");
Const* const  asm_Renamed::s_unify_nil_x = Data::Intern("unify_nil_x");
Const* const  asm_Renamed::s_unify_nil_y = Data::Intern("unify_nil_y");
Const* const  asm_Renamed::s_unify_struct_x = Data::Intern("unify_struct_x");
Const* const  asm_Renamed::s_unify_struct_y = Data::Intern("unify_struct_y");
Const* const  asm_Renamed::s_unify_ux_ux = Data::Intern("unify_ux_ux");
Const* const  asm_Renamed::s_unify_ux_uy = Data::Intern("unify_ux_uy");
Const* const  asm_Renamed::s_unify_uy_uy = Data::Intern("unify_uy_uy");
Const* const  asm_Renamed::s_user = Data::Intern("user");
Const* const  asm_Renamed::s_var = Data::Intern("var");
Const* const  asm_Renamed::s_vx = Data::Intern("vx");
Const* const  asm_Renamed::s_vy = Data::Intern("vy");
Const* const  asm_Renamed::s_warning = Data::Intern("warning");
Const* const  asm_Renamed::s_write = Data::Intern("write");
Const* const  asm_Renamed::s_writename = Data::Intern("writename");
Const* const  asm_Renamed::s_x = Data::Intern("x");
Const* const  asm_Renamed::s_x_or_y = Data::Intern("x_or_y");
Const* const  asm_Renamed::s_xfx = Data::Intern("xfx");
Const* const  asm_Renamed::s_y = Data::Intern("y");
Int* const  asm_Renamed::negint2 = Data::Number(-2LL);
Int* const  asm_Renamed::posint0 = Data::Number(0LL);
Int* const  asm_Renamed::posint1 = Data::Number(1LL);
Int* const  asm_Renamed::posint2 = Data::Number(2LL);
Int* const  asm_Renamed::posint3 = Data::Number(3LL);
Int* const  asm_Renamed::posint4 = Data::Number(4LL);
Int* const  asm_Renamed::posint5 = Data::Number(5LL);
Int* const  asm_Renamed::posint6 = Data::Number(6LL);
Int* const  asm_Renamed::posint7 = Data::Number(7LL);
Int* const  asm_Renamed::posint8 = Data::Number(8LL);
Int* const  asm_Renamed::posint9 = Data::Number(9LL);
Int* const  asm_Renamed::posint10 = Data::Number(10LL);
Int* const  asm_Renamed::posint11 = Data::Number(11LL);
Int* const  asm_Renamed::posint12 = Data::Number(12LL);
Int* const  asm_Renamed::posint13 = Data::Number(13LL);
Int* const  asm_Renamed::posint14 = Data::Number(14LL);
Int* const  asm_Renamed::posint15 = Data::Number(15LL);
Int* const  asm_Renamed::posint16 = Data::Number(16LL);
Int* const  asm_Renamed::posint17 = Data::Number(17LL);
Int* const  asm_Renamed::posint18 = Data::Number(18LL);
Int* const  asm_Renamed::posint19 = Data::Number(19LL);
Int* const  asm_Renamed::posint20 = Data::Number(20LL);
Int* const  asm_Renamed::posint21 = Data::Number(21LL);
Int* const  asm_Renamed::posint22 = Data::Number(22LL);
Int* const  asm_Renamed::posint23 = Data::Number(23LL);
Int* const  asm_Renamed::posint24 = Data::Number(24LL);
Int* const  asm_Renamed::posint25 = Data::Number(25LL);
Int* const  asm_Renamed::posint26 = Data::Number(26LL);
Int* const  asm_Renamed::posint27 = Data::Number(27LL);
Int* const  asm_Renamed::posint28 = Data::Number(28LL);
Int* const  asm_Renamed::posint29 = Data::Number(29LL);
Int* const  asm_Renamed::posint30 = Data::Number(30LL);
Int* const  asm_Renamed::posint31 = Data::Number(31LL);
Int* const  asm_Renamed::posint32 = Data::Number(32LL);
Int* const  asm_Renamed::posint33 = Data::Number(33LL);
Int* const  asm_Renamed::posint34 = Data::Number(34LL);
Int* const  asm_Renamed::posint35 = Data::Number(35LL);
Int* const  asm_Renamed::posint36 = Data::Number(36LL);
Int* const  asm_Renamed::posint37 = Data::Number(37LL);
Int* const  asm_Renamed::posint38 = Data::Number(38LL);
Int* const  asm_Renamed::posint39 = Data::Number(39LL);
Int* const  asm_Renamed::posint40 = Data::Number(40LL);
Int* const  asm_Renamed::posint41 = Data::Number(41LL);
Int* const  asm_Renamed::posint42 = Data::Number(42LL);
Int* const  asm_Renamed::posint43 = Data::Number(43LL);
Int* const  asm_Renamed::posint44 = Data::Number(44LL);
Int* const  asm_Renamed::posint45 = Data::Number(45LL);
Int* const  asm_Renamed::posint46 = Data::Number(46LL);
Int* const  asm_Renamed::posint47 = Data::Number(47LL);
Int* const  asm_Renamed::posint48 = Data::Number(48LL);
Int* const  asm_Renamed::posint49 = Data::Number(49LL);
Int* const  asm_Renamed::posint50 = Data::Number(50LL);
Int* const  asm_Renamed::posint51 = Data::Number(51LL);
Int* const  asm_Renamed::posint52 = Data::Number(52LL);
Int* const  asm_Renamed::posint53 = Data::Number(53LL);
Int* const  asm_Renamed::posint54 = Data::Number(54LL);
Int* const  asm_Renamed::posint55 = Data::Number(55LL);
Int* const  asm_Renamed::posint56 = Data::Number(56LL);
Int* const  asm_Renamed::posint57 = Data::Number(57LL);
Int* const  asm_Renamed::posint58 = Data::Number(58LL);
Int* const  asm_Renamed::posint59 = Data::Number(59LL);
Int* const  asm_Renamed::posint60 = Data::Number(60LL);
Int* const  asm_Renamed::posint61 = Data::Number(61LL);
Int* const  asm_Renamed::posint62 = Data::Number(62LL);
Int* const  asm_Renamed::posint63 = Data::Number(63LL);
Int* const  asm_Renamed::posint64 = Data::Number(64LL);
Int* const  asm_Renamed::posint65 = Data::Number(65LL);
Int* const  asm_Renamed::posint66 = Data::Number(66LL);
Int* const  asm_Renamed::posint67 = Data::Number(67LL);
Int* const  asm_Renamed::posint68 = Data::Number(68LL);
Int* const  asm_Renamed::posint69 = Data::Number(69LL);
Int* const  asm_Renamed::posint70 = Data::Number(70LL);
Int* const  asm_Renamed::posint71 = Data::Number(71LL);
Int* const  asm_Renamed::posint72 = Data::Number(72LL);
Int* const  asm_Renamed::posint73 = Data::Number(73LL);
Int* const  asm_Renamed::posint74 = Data::Number(74LL);
Int* const  asm_Renamed::posint75 = Data::Number(75LL);
Int* const  asm_Renamed::posint76 = Data::Number(76LL);
Int* const  asm_Renamed::posint77 = Data::Number(77LL);
Int* const  asm_Renamed::posint78 = Data::Number(78LL);
Int* const  asm_Renamed::posint79 = Data::Number(79LL);
Int* const  asm_Renamed::posint80 = Data::Number(80LL);
Int* const  asm_Renamed::posint81 = Data::Number(81LL);
Int* const  asm_Renamed::posint82 = Data::Number(82LL);
Int* const  asm_Renamed::posint83 = Data::Number(83LL);
Int* const  asm_Renamed::posint84 = Data::Number(84LL);
Int* const  asm_Renamed::posint85 = Data::Number(85LL);
Int* const  asm_Renamed::posint86 = Data::Number(86LL);
Int* const  asm_Renamed::posint87 = Data::Number(87LL);
Int* const  asm_Renamed::posint88 = Data::Number(88LL);
Int* const  asm_Renamed::posint89 = Data::Number(89LL);
Int* const  asm_Renamed::posint90 = Data::Number(90LL);
Int* const  asm_Renamed::posint91 = Data::Number(91LL);
Int* const  asm_Renamed::posint92 = Data::Number(92LL);
Int* const  asm_Renamed::posint93 = Data::Number(93LL);
Int* const  asm_Renamed::posint94 = Data::Number(94LL);
Int* const  asm_Renamed::posint95 = Data::Number(95LL);
Int* const  asm_Renamed::posint96 = Data::Number(96LL);
Int* const  asm_Renamed::posint97 = Data::Number(97LL);
Int* const  asm_Renamed::posint98 = Data::Number(98LL);
Int* const  asm_Renamed::posint99 = Data::Number(99LL);
Int* const  asm_Renamed::posint100 = Data::Number(100LL);
Int* const  asm_Renamed::posint101 = Data::Number(101LL);
Int* const  asm_Renamed::posint102 = Data::Number(102LL);
Int* const  asm_Renamed::posint103 = Data::Number(103LL);
Int* const  asm_Renamed::posint104 = Data::Number(104LL);
Int* const  asm_Renamed::posint105 = Data::Number(105LL);
Int* const  asm_Renamed::posint106 = Data::Number(106LL);
Int* const  asm_Renamed::posint107 = Data::Number(107LL);
Int* const  asm_Renamed::posint108 = Data::Number(108LL);
Int* const  asm_Renamed::posint109 = Data::Number(109LL);
Int* const  asm_Renamed::posint110 = Data::Number(110LL);
Int* const  asm_Renamed::posint111 = Data::Number(111LL);
Int* const  asm_Renamed::posint112 = Data::Number(112LL);
Int* const  asm_Renamed::posint113 = Data::Number(113LL);
Int* const  asm_Renamed::posint114 = Data::Number(114LL);
Int* const  asm_Renamed::posint115 = Data::Number(115LL);
Int* const  asm_Renamed::posint116 = Data::Number(116LL);
Int* const  asm_Renamed::posint117 = Data::Number(117LL);
Int* const  asm_Renamed::posint118 = Data::Number(118LL);
Int* const  asm_Renamed::posint119 = Data::Number(119LL);
Int* const  asm_Renamed::posint120 = Data::Number(120LL);
Int* const  asm_Renamed::posint121 = Data::Number(121LL);
Int* const  asm_Renamed::posint122 = Data::Number(122LL);
Int* const  asm_Renamed::posint123 = Data::Number(123LL);
Int* const  asm_Renamed::posint124 = Data::Number(124LL);
Int* const  asm_Renamed::posint125 = Data::Number(125LL);
Int* const  asm_Renamed::posint126 = Data::Number(126LL);
Int* const  asm_Renamed::posint127 = Data::Number(127LL);
Int* const  asm_Renamed::posint128 = Data::Number(128LL);
Int* const  asm_Renamed::posint129 = Data::Number(129LL);
Int* const  asm_Renamed::posint130 = Data::Number(130LL);
Int* const  asm_Renamed::posint131 = Data::Number(131LL);
Int* const  asm_Renamed::posint132 = Data::Number(132LL);
Int* const  asm_Renamed::posint133 = Data::Number(133LL);
Int* const  asm_Renamed::posint134 = Data::Number(134LL);
Int* const  asm_Renamed::posint135 = Data::Number(135LL);
Int* const  asm_Renamed::posint136 = Data::Number(136LL);
Int* const  asm_Renamed::posint137 = Data::Number(137LL);
Int* const  asm_Renamed::posint138 = Data::Number(138LL);
Int* const  asm_Renamed::posint139 = Data::Number(139LL);
Int* const  asm_Renamed::posint140 = Data::Number(140LL);
Int* const  asm_Renamed::posint141 = Data::Number(141LL);
Int* const  asm_Renamed::posint142 = Data::Number(142LL);
Int* const  asm_Renamed::posint143 = Data::Number(143LL);
Int* const  asm_Renamed::posint144 = Data::Number(144LL);
Int* const  asm_Renamed::posint145 = Data::Number(145LL);
Int* const  asm_Renamed::posint146 = Data::Number(146LL);
Int* const  asm_Renamed::posint147 = Data::Number(147LL);
Int* const  asm_Renamed::posint148 = Data::Number(148LL);
Int* const  asm_Renamed::posint149 = Data::Number(149LL);
Int* const  asm_Renamed::posint150 = Data::Number(150LL);
Int* const  asm_Renamed::posint151 = Data::Number(151LL);
Int* const  asm_Renamed::posint152 = Data::Number(152LL);
Int* const  asm_Renamed::posint153 = Data::Number(153LL);
Int* const  asm_Renamed::posint154 = Data::Number(154LL);
Int* const  asm_Renamed::posint155 = Data::Number(155LL);
Int* const  asm_Renamed::posint156 = Data::Number(156LL);
Int* const  asm_Renamed::posint157 = Data::Number(157LL);
Int* const  asm_Renamed::posint158 = Data::Number(158LL);
Int* const  asm_Renamed::posint159 = Data::Number(159LL);
Int* const  asm_Renamed::posint160 = Data::Number(160LL);
Int* const  asm_Renamed::posint161 = Data::Number(161LL);
Int* const  asm_Renamed::posint162 = Data::Number(162LL);
Int* const  asm_Renamed::posint163 = Data::Number(163LL);
Int* const  asm_Renamed::posint164 = Data::Number(164LL);
Int* const  asm_Renamed::posint165 = Data::Number(165LL);
Int* const  asm_Renamed::posint166 = Data::Number(166LL);
Int* const  asm_Renamed::posint167 = Data::Number(167LL);
Int* const  asm_Renamed::posint168 = Data::Number(168LL);
Int* const  asm_Renamed::posint169 = Data::Number(169LL);
Int* const  asm_Renamed::posint170 = Data::Number(170LL);
Int* const  asm_Renamed::posint171 = Data::Number(171LL);
Int* const  asm_Renamed::posint172 = Data::Number(172LL);
Int* const  asm_Renamed::posint173 = Data::Number(173LL);
Int* const  asm_Renamed::posint174 = Data::Number(174LL);
Int* const  asm_Renamed::posint175 = Data::Number(175LL);
Int* const  asm_Renamed::posint176 = Data::Number(176LL);
Int* const  asm_Renamed::posint177 = Data::Number(177LL);
Int* const  asm_Renamed::posint178 = Data::Number(178LL);
Int* const  asm_Renamed::posint179 = Data::Number(179LL);
Int* const  asm_Renamed::posint180 = Data::Number(180LL);
Int* const  asm_Renamed::posint181 = Data::Number(181LL);
Int* const  asm_Renamed::posint182 = Data::Number(182LL);
Int* const  asm_Renamed::posint183 = Data::Number(183LL);
Int* const  asm_Renamed::posint184 = Data::Number(184LL);
Int* const  asm_Renamed::posint185 = Data::Number(185LL);
Int* const  asm_Renamed::posint186 = Data::Number(186LL);
Int* const  asm_Renamed::posint187 = Data::Number(187LL);
Int* const  asm_Renamed::posint188 = Data::Number(188LL);
Int* const  asm_Renamed::posint189 = Data::Number(189LL);
Int* const  asm_Renamed::posint190 = Data::Number(190LL);
Int* const  asm_Renamed::posint191 = Data::Number(191LL);
Int* const  asm_Renamed::posint192 = Data::Number(192LL);
Int* const  asm_Renamed::posint193 = Data::Number(193LL);
Int* const  asm_Renamed::posint194 = Data::Number(194LL);
Int* const  asm_Renamed::posint195 = Data::Number(195LL);
Int* const  asm_Renamed::posint196 = Data::Number(196LL);
Int* const  asm_Renamed::posint197 = Data::Number(197LL);
Int* const  asm_Renamed::posint198 = Data::Number(198LL);
Int* const  asm_Renamed::posint199 = Data::Number(199LL);
Int* const  asm_Renamed::posint200 = Data::Number(200LL);
Int* const  asm_Renamed::posint201 = Data::Number(201LL);
Int* const  asm_Renamed::posint202 = Data::Number(202LL);
Int* const  asm_Renamed::posint203 = Data::Number(203LL);
Int* const  asm_Renamed::posint204 = Data::Number(204LL);
Int* const  asm_Renamed::posint205 = Data::Number(205LL);
Int* const  asm_Renamed::posint206 = Data::Number(206LL);
Int* const  asm_Renamed::posint207 = Data::Number(207LL);
Int* const  asm_Renamed::posint208 = Data::Number(208LL);
Int* const  asm_Renamed::posint209 = Data::Number(209LL);
Int* const  asm_Renamed::posint210 = Data::Number(210LL);
Int* const  asm_Renamed::posint211 = Data::Number(211LL);
Int* const  asm_Renamed::posint212 = Data::Number(212LL);
Int* const  asm_Renamed::posint213 = Data::Number(213LL);
Int* const  asm_Renamed::posint214 = Data::Number(214LL);
Int* const  asm_Renamed::posint215 = Data::Number(215LL);
Int* const  asm_Renamed::posint216 = Data::Number(216LL);
Int* const  asm_Renamed::posint217 = Data::Number(217LL);
Int* const  asm_Renamed::posint218 = Data::Number(218LL);
Int* const  asm_Renamed::posint219 = Data::Number(219LL);
Int* const  asm_Renamed::posint220 = Data::Number(220LL);
Int* const  asm_Renamed::posint221 = Data::Number(221LL);
Int* const  asm_Renamed::posint222 = Data::Number(222LL);
Int* const  asm_Renamed::posint223 = Data::Number(223LL);
Int* const  asm_Renamed::posint224 = Data::Number(224LL);
Int* const  asm_Renamed::posint225 = Data::Number(225LL);
Int* const  asm_Renamed::posint226 = Data::Number(226LL);
Int* const  asm_Renamed::posint227 = Data::Number(227LL);
Int* const  asm_Renamed::posint228 = Data::Number(228LL);
Int* const  asm_Renamed::posint229 = Data::Number(229LL);
Int* const  asm_Renamed::posint230 = Data::Number(230LL);
Int* const  asm_Renamed::posint231 = Data::Number(231LL);
Int* const  asm_Renamed::posint232 = Data::Number(232LL);
Int* const  asm_Renamed::posint233 = Data::Number(233LL);
Int* const  asm_Renamed::posint234 = Data::Number(234LL);
Int* const  asm_Renamed::posint255 = Data::Number(255LL);
Int* const  asm_Renamed::posint300 = Data::Number(300LL);
Int* const  asm_Renamed::posint950 = Data::Number(950LL);
Int* const  asm_Renamed::posint1000 = Data::Number(1000LL);
const Operation asm_Renamed::reg_on_load_asm_0 = PredTable::Register("on_load_asm", 0, new pred_on_load_asm_0());
const Operation asm_Renamed::reg_asm_bp_2 = PredTable::Register("asm_bp", 2, new pred_asm_bp_2());
const Operation asm_Renamed::reg_asm_2 = PredTable::Register("asm", 2, new pred_asm_2());
const Operation asm_Renamed::reg_asm_getaslist_1 = PredTable::Register("asm_getaslist", 1, new pred_asm_getaslist_1());
const Operation asm_Renamed::reg_asm_getaslist1_2 = PredTable::Register("asm_getaslist1", 2, new pred_asm_getaslist1_2());
const Operation asm_Renamed::reg_asm_1 = PredTable::Register("asm", 1, new pred_asm_1());
const Operation asm_Renamed::reg_asm0_5 = PredTable::Register("asm0", 5, new pred_asm0_5());
const Operation asm_Renamed::reg_asm_pass1_6 = PredTable::Register("asm_pass1", 6, new pred_asm_pass1_6());
const Operation asm_Renamed::reg_asm_pass1_bp_6 = PredTable::Register("asm_pass1_bp", 6, new pred_asm_pass1_bp_6());
const Operation asm_Renamed::reg_asm_pass11_5 = PredTable::Register("asm_pass11", 5, new pred_asm_pass11_5());
const Operation asm_Renamed::reg_error_double_define_1 = PredTable::Register("error_double_define", 1, new pred_error_double_define_1());
const Operation asm_Renamed::reg_asm_index_pass1_2 = PredTable::Register("asm_index_pass1", 2, new pred_asm_index_pass1_2());
const Operation asm_Renamed::reg_asmpass1_fillin_3 = PredTable::Register("asmpass1_fillin", 3, new pred_asmpass1_fillin_3());
const Operation asm_Renamed::reg_asmpass1_fillin_2 = PredTable::Register("asmpass1_fillin", 2, new pred_asmpass1_fillin_2());
const Operation asm_Renamed::reg_asmpass1_fillin_bp_3 = PredTable::Register("asmpass1_fillin_bp", 3, new pred_asmpass1_fillin_bp_3());
const Operation asm_Renamed::reg_asmpass1_fillin_bp_2 = PredTable::Register("asmpass1_fillin_bp", 2, new pred_asmpass1_fillin_bp_2());
const Operation asm_Renamed::reg_asmpass1_setundef_4 = PredTable::Register("asmpass1_setundef", 4, new pred_asmpass1_setundef_4());
const Operation asm_Renamed::reg_asmpass1_setundef_3 = PredTable::Register("asmpass1_setundef", 3, new pred_asmpass1_setundef_3());
const Operation asm_Renamed::reg_asm_pass12_3 = PredTable::Register("asm_pass12", 3, new pred_asm_pass12_3());
const Operation asm_Renamed::reg_asm_pass12_call_3 = PredTable::Register("asm_pass12_call", 3, new pred_asm_pass12_call_3());
const Operation asm_Renamed::reg_asm_pass2_4 = PredTable::Register("asm_pass2", 4, new pred_asm_pass2_4());
const Operation asm_Renamed::reg_asm_index_3 = PredTable::Register("asm_index", 3, new pred_asm_index_3());
const Operation asm_Renamed::reg_asm_proc_index_3 = PredTable::Register("asm_proc_index", 3, new pred_asm_proc_index_3());
const Operation asm_Renamed::reg_asm_pass2a_3 = PredTable::Register("asm_pass2a", 3, new pred_asm_pass2a_3());
const Operation asm_Renamed::reg_asm_pass2_inst_3 = PredTable::Register("asm_pass2_inst", 3, new pred_asm_pass2_inst_3());
const Operation asm_Renamed::reg_asm_pass2_inst_op_3 = PredTable::Register("asm_pass2_inst_op", 3, new pred_asm_pass2_inst_op_3());
const Operation asm_Renamed::reg_asm_magic_1 = PredTable::Register("asm_magic", 1, new pred_asm_magic_1());
const Operation asm_Renamed::reg_asm_index_inst_2 = PredTable::Register("asm_index_inst", 2, new pred_asm_index_inst_2());
const Operation asm_Renamed::reg_asm_symbol_1 = PredTable::Register("asm_symbol", 1, new pred_asm_symbol_1());
const Operation asm_Renamed::reg_asm_putnum_2 = PredTable::Register("asm_putnum", 2, new pred_asm_putnum_2());
const Operation asm_Renamed::reg_asm_mark_eot_0 = PredTable::Register("asm_mark_eot", 0, new pred_asm_mark_eot_0());
const Operation asm_Renamed::reg_sym_member1_2 = PredTable::Register("sym_member1", 2, new pred_sym_member1_2());
const Operation asm_Renamed::reg_sym_member1_4 = PredTable::Register("sym_member1", 4, new pred_sym_member1_4());
const Operation asm_Renamed::reg_lab_member1_2 = PredTable::Register("lab_member1", 2, new pred_lab_member1_2());
const Operation asm_Renamed::reg_lab_member1_3 = PredTable::Register("lab_member1", 3, new pred_lab_member1_3());
const Operation asm_Renamed::reg_asm_lookup_ltab_3 = PredTable::Register("asm_lookup_ltab", 3, new pred_asm_lookup_ltab_3());
const Operation asm_Renamed::reg_asm_lookup_ltab1_3 = PredTable::Register("asm_lookup_ltab1", 3, new pred_asm_lookup_ltab1_3());
const Operation asm_Renamed::reg_asm_lookup_ctab_4 = PredTable::Register("asm_lookup_ctab", 4, new pred_asm_lookup_ctab_4());
const Operation asm_Renamed::reg_asm_lookup_ctab1_4 = PredTable::Register("asm_lookup_ctab1", 4, new pred_asm_lookup_ctab1_4());
const Operation asm_Renamed::reg_asm_rearange_csym_4 = PredTable::Register("asm_rearange_csym", 4, new pred_asm_rearange_csym_4());
const Operation asm_Renamed::reg_asm_merge_3 = PredTable::Register("asm_merge", 3, new pred_asm_merge_3());
const Operation asm_Renamed::reg_next_sym_no_1 = PredTable::Register("next_sym_no", 1, new pred_next_sym_no_1());
const Operation asm_Renamed::reg_x_or_y_2 = PredTable::Register("x_or_y", 2, new pred_x_or_y_2());
const Operation asm_Renamed::reg_opcode_2 = PredTable::Register("opcode", 2, new pred_opcode_2());
const Operation asm_Renamed::reg_output_mess_1 = PredTable::Register("output_mess", 1, new pred_output_mess_1());
const Operation asm_Renamed::reg_is_unify_arg_inst_1 = PredTable::Register("is_unify_arg_inst", 1, new pred_is_unify_arg_inst_1());

	Operation asm_Renamed::pred_on_load_asm_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_on_load_asm_0__1(mach));
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__1(Prolog* mach) {
		mach->FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_op, asm_Renamed::posint300, asm_Renamed::s_xfx, asm_Renamed::s18);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__2(Prolog* mach) {
		mach->FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_op, asm_Renamed::posint1000, asm_Renamed::s_fx, asm_Renamed::s_mode);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__3(Prolog* mach) {
		mach->FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_op, asm_Renamed::posint950, asm_Renamed::s_xfx, asm_Renamed::s12);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__4(Prolog* mach) {
		mach->FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_determinate, Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, asm_Renamed::s_cmp_error, asm_Renamed::posint1), Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, asm_Renamed::s_name, asm_Renamed::posint2), Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, asm_Renamed::s_length, asm_Renamed::posint2), Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, asm_Renamed::s_asm_hash_value, asm_Renamed::posint2), Const::Nil)))));
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__5(Prolog* mach) {
		mach->FillAlternative(pred_on_load_asm_0::exec_pred_on_load_asm_0__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_mode, Data::F(asm_Renamed::s_asm_pass12, asm_Renamed::s_c, asm_Renamed::s_d, asm_Renamed::s_f));
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_on_load_asm_0::exec_pred_on_load_asm_0__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(asm_Renamed::s_mode, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_c, asm_Renamed::s_f));
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation asm_Renamed::pred_asm_bp_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_bp_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_bp_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_bp_2::exec_pred_asm_bp_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_global_set, asm_Renamed::s3, asm_Renamed::posint0, asm_Renamed::posint1);
		local_aregs[2] = Data::F(asm_Renamed::s_see, { var1->Deref(), Data::F(asm_Renamed::s_asm_getaslist, var3, Data::F(asm_Renamed::s_seen, Data::F(asm_Renamed::s_tell, { var2->Deref(), Data::F(asm_Renamed::s_asm0, { var3->Deref(), var4, var5, asm_Renamed::posint0, var6, Data::F(asm_Renamed::s_functor, var7, asm_Renamed::s_csym, asm_Renamed::posint255, Data::F(asm_Renamed::s_functor, var8, asm_Renamed::s_lsym, asm_Renamed::posint255, Data::F(asm_Renamed::s_global_create, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, Data::F(asm_Renamed::s_asm_pass1_bp, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), var9, var10, Data::F(asm_Renamed::s_asm_magic, asm_Renamed::posint3, Data::F(asm_Renamed::s_asm_putnum, { var10->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var9->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var6->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_pass2, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_asm_mark_eot, Data::F(asm_Renamed::s_global_del, asm_Renamed::s3, asm_Renamed::posint0, Data::F(asm_Renamed::s_told, { continuation }))) }) }) }) })) })))) }) }))) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_2::exec_pred_asm_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_see, { var1->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_getaslist, var3, Data::F(asm_Renamed::s_seen, Data::F(asm_Renamed::s_tell, { var2->Deref(), Data::F(asm_Renamed::s_asm0, { var3->Deref(), var4, var5, asm_Renamed::posint0, var6, Data::F(asm_Renamed::s_functor, var7, asm_Renamed::s_csym, asm_Renamed::posint255, Data::F(asm_Renamed::s_functor, var8, asm_Renamed::s_lsym, asm_Renamed::posint255, Data::F(asm_Renamed::s_global_create, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, Data::F(asm_Renamed::s_asm_pass1, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), var9, var10, Data::F(asm_Renamed::s_asm_magic, asm_Renamed::posint3, Data::F(asm_Renamed::s_asm_putnum, { var10->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var9->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var6->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_pass2, { var4->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_asm_mark_eot, Data::F(asm_Renamed::s_told, { continuation })) }) }) }) })) })))) }) })));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_getaslist_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_getaslist_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_getaslist_1__1(mach));
	}

	Operation asm_Renamed::pred_asm_getaslist_1::exec_pred_asm_getaslist_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_read, var2);
		local_aregs[2] = Data::F(asm_Renamed::s_asm_getaslist1, { var2->Deref(), var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_getaslist1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_getaslist1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_getaslist1_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_end_of_file))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var1->Deref(), Const::Nil });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_getaslist1_2::exec_pred_asm_getaslist1_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var2->Deref(), Data::F(asm_Renamed::s9, { var1->Deref(), var3 }) });
		local_aregs[2] = Data::F(asm_Renamed::s_read, var4, Data::F(asm_Renamed::s_asm_getaslist1, { var4->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_1__1(mach));
	}

	Operation asm_Renamed::pred_asm_1::exec_pred_asm_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm0, { var1->Deref(), var2, var3, asm_Renamed::posint0, var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_functor, var5, asm_Renamed::s_csym, asm_Renamed::posint255, Data::F(asm_Renamed::s_functor, var6, asm_Renamed::s_lsym, asm_Renamed::posint255, Data::F(asm_Renamed::s_global_create, asm_Renamed::s4, asm_Renamed::posint0, asm_Renamed::posint0, Data::F(asm_Renamed::s_asm_pass1, { var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var7, var8, Data::F(asm_Renamed::s_asm_magic, asm_Renamed::posint3, Data::F(asm_Renamed::s_asm_putnum, { var8->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var7->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_putnum, { var4->Deref(), asm_Renamed::posint4, Data::F(asm_Renamed::s_asm_pass2, { var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), Data::F(asm_Renamed::s_asm_mark_eot, { continuation }) }) }) }) })) }))));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm0_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm0_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm0_5__1(mach));
	}

	Operation asm_Renamed::pred_asm0_5::exec_pred_asm0_5__1(Prolog* mach) {
		mach->FillAlternative(pred_asm0_5::exec_pred_asm0_5__2);
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
		if(!((areg0)->Unify(Const::Nil))) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var1->Deref(), Const::Nil });
		local_aregs[2] = Data::F(asm_Renamed::s14, { var2->Deref(), Const::Nil, Data::F(asm_Renamed::s14, { var4->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm0_5::exec_pred_asm0_5__2(Prolog* mach) {
		mach->FillAlternative(pred_asm0_5::exec_pred_asm0_5__3);
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
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
		local_aregs[0] = Data::F(asm_Renamed::s_asm_index_inst, { var1->Deref(), var7 });
		local_aregs[1] = Data::F(asm_Renamed::s_is, var8, Data::F(asm_Renamed::s5, { var5->Deref(), var7->Deref() }));
		local_aregs[2] = Data::F(asm_Renamed::s_unify, Data::F(asm_Renamed::s9, { var1->Deref(), var9 }), var4->Deref(), Data::F(asm_Renamed::s_asm0, { var2->Deref(), var3->Deref(), var9->Deref(), var8->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm0_5::exec_pred_asm0_5__3(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), Data::F(asm_Renamed::s9, { var1->Deref(), var7 }) });
		local_aregs[2] = Data::F(asm_Renamed::s_asm0, { var2->Deref(), var7->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass1_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass1_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass1_6__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass1_6::exec_pred_asm_pass1_6__1(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_pass11, { var1->Deref(), var4->Deref(), var3->Deref(), asm_Renamed::posint0, var5->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_index_pass1, { var2->Deref(), var3->Deref(), Data::F(asm_Renamed::s_asmpass1_fillin, { var4->Deref(), asm_Renamed::posint255, var3->Deref(), Data::F(asm_Renamed::s_asmpass1_setundef, { var3->Deref(), asm_Renamed::posint255, asm_Renamed::posint0, var6->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass1_bp_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass1_bp_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass1_bp_6__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass1_bp_6::exec_pred_asm_pass1_bp_6__1(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_pass11, { var1->Deref(), var4->Deref(), var3->Deref(), asm_Renamed::posint0, var5->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_index_pass1, { var2->Deref(), var3->Deref(), Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var4->Deref(), asm_Renamed::posint255, var3->Deref(), Data::F(asm_Renamed::s_asmpass1_setundef, { var3->Deref(), asm_Renamed::posint255, asm_Renamed::posint0, var6->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass11_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass11_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass11_5__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass11_5::exec_pred_asm_pass11_5__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__2);
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
		if(!((areg0)->Unify(Const::Nil))) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var4->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass11_5::exec_pred_asm_pass11_5__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__3);
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
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
		local_aregs[0] = Data::F(asm_Renamed::s_label, var7);
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(asm_Renamed::s12, Data::F(asm_Renamed::s_lab_member1, Data::F(asm_Renamed::s_lab, { var7->Deref(), var5->Deref() }), var3->Deref()), Data::F(asm_Renamed::s_asm_pass11, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003C$003D_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass11_5::exec_pred_asm_pass11_5__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass11_5::exec_pred_asm_pass11_5__4);
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
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
		local_aregs[0] = Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s_label, var7), var1->Deref());
		local_aregs[1] = Data::F(asm_Renamed::s_error_double_define, { var7->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_pass11, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass11_5::exec_pred_asm_pass11_5__4(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_pass12, { var1->Deref(), var4->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var8, Data::F(asm_Renamed::s5, { var5->Deref(), var7->Deref() }), Data::F(asm_Renamed::s_asm_pass11, { var2->Deref(), var3->Deref(), var4->Deref(), var8->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_error_double_define_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_error_double_define_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_error_double_define_1__1(mach));
	}

	Operation asm_Renamed::pred_error_double_define_1::exec_pred_error_double_define_1__1(Prolog* mach) {
		mach->FillAlternative(pred_error_double_define_1::exec_pred_error_double_define_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s6, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_error_double_define_1::exec_pred_error_double_define_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_cmp_error, Data::F(asm_Renamed::s9, asm_Renamed::s25, Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), Data::F(asm_Renamed::s9, asm_Renamed::s2, Const::Nil))));
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_index_pass1_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_pred, var1, var2, var3, var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_index_pass1, { var5->Deref(), var6->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_arglabel, var1, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s_c });
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var6, var7 }), var5->Deref());
		local_aregs[2] = Data::F(asm_Renamed::s_asm_index_pass1, { var4->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__4(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_arglabel, var1, Data::F(asm_Renamed::s6, var2, var3), var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s_s });
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var7, var8 }), var6->Deref());
		local_aregs[2] = Data::F(asm_Renamed::s_asm_index_pass1, { var5->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_pass1_2::exec_pred_asm_index_pass1_2__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_arglabel, var1, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_index_pass1, { var4->Deref(), var5->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_fillin_3__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_3::exec_pred_asmpass1_fillin_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_arg, { var2->Deref(), var1->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_asmpass1_fillin, { var4->Deref(), var3->Deref(), Data::F(asm_Renamed::s_is, var5, Data::F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_asmpass1_fillin, { var1->Deref(), var5->Deref(), var3->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_fillin_2__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var1->Deref() });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__2(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, Data::F(asm_Renamed::s6, var1, Data::F(asm_Renamed::s6, var2, var3)), var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asmpass1_fillin, { var5->Deref(), var6->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_2::exec_pred_asmpass1_fillin_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, Data::F(asm_Renamed::s6, var1, var2), var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var3->Deref(), var6 }), var5->Deref());
		local_aregs[2] = Data::F(asm_Renamed::s_asmpass1_fillin, { var4->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_fillin_bp_3__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_3::exec_pred_asmpass1_fillin_bp_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_arg, { var2->Deref(), var1->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var4->Deref(), var3->Deref(), Data::F(asm_Renamed::s_is, var5, Data::F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var1->Deref(), var5->Deref(), var3->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_fillin_bp_2__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var1->Deref() });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__2(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, Data::F(asm_Renamed::s6, var1, Data::F(asm_Renamed::s6, var2, var3)), var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var5->Deref(), var6->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__3(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, Data::F(asm_Renamed::s6, var1, var2), var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_predefined, { var1->Deref(), var2->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var3->Deref(), var6 }), var5->Deref());
		local_aregs[2] = Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var4->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_fillin_bp_2::exec_pred_asmpass1_fillin_bp_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, Data::F(asm_Renamed::s6, var1, var2), var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asmpass1_fillin_bp, { var4->Deref(), var5->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_setundef_4__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var4->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_4::exec_pred_asmpass1_setundef_4__2(Prolog* mach) {
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
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_arg, { var2->Deref(), var1->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_asmpass1_setundef, { var5->Deref(), var3->Deref(), var6, Data::F(asm_Renamed::s_is, var7, Data::F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_asmpass1_setundef, { var1->Deref(), var7->Deref(), var6->Deref(), var4->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asmpass1_setundef_3__1(mach));
	}

	Operation asm_Renamed::pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var1->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var3->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_sym, var1, var2, var3, var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var3->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::negint2 });
		local_aregs[2] = Data::F(asm_Renamed::s_b_GET_LENGTH_cf, { var1->Deref(), var8, Data::F(asm_Renamed::s_is, var9, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s5, { var6->Deref(), var8->Deref() }), asm_Renamed::posint6), Data::F(asm_Renamed::s_asmpass1_setundef, { var5->Deref(), var9->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asmpass1_setundef_3::exec_pred_asmpass1_setundef_3__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_sym, var1, var2, var3, var4), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_b_GET_LENGTH_cf, { var1->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var9, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s5, { var6->Deref(), var8->Deref() }), asm_Renamed::posint6), Data::F(asm_Renamed::s_asmpass1_setundef, { var5->Deref(), var9->Deref(), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass12_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_label, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var7, var8 });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__4(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var7, var8 });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__5(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_atom_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var6, var7 });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__6(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_atom_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var6, var7 });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__7(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_nil_x, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__8(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_nil_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__9(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__10(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__11(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yxx, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__12(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yxy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__13(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yyx, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__14(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yyy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__15(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_int_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__16(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_int_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__17(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eql, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__18(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_eql, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__19(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_eql_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__20(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_gt, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__21(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_gt_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__22(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_ge, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__23(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_ge_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__24(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_id, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__25(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_id, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__26(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__27);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_var_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__27(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__28);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_var_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__28(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__29);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_var_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__29(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__30);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_var_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__30(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__31);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__31(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__32);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__32(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__33);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atomic_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__33(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__34);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atomic_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__34(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__35);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_num_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__35(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__36);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_num_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__36(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__37);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_int_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__37(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__38);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__38(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__39);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_float_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__39(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__40);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_float_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__40(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__41);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_nil, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__41(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__42);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_list, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__42(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__43);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_int, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__43(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__44);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_atom, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__44(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__45);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__45(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__46);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_x, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__46(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__47);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_y, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__47(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__48);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_xx, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__48(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__49);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_xy, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__49(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__50);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_yx, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__50(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__51);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_yy, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__51(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__52);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__52(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__53);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__53(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__54);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_list_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__54(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__55);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_list_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__55(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__56);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_nil_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__56(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__57);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_nil_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__57(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__58);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__58(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__59);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__59(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__60);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_int_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__60(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__61);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__61(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__62);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_ux_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__62(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__63);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_ux_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__63(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__64);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_uy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__64(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__65);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_cons_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__65(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__66);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_cons_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__66(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__67);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var6, var7 });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__67(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__68);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_list_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__68(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__69);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_nil_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__69(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__70);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_atom_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__70(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__71);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_int_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__71(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__72);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_ux_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__72(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__73);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__73(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__74);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var6, var7 });
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__74(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__75);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_list_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__75(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__76);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_nil_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__76(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__77);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_atom_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__77(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__78);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_int_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__78(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__79);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_ux_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__79(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__80);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__80(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__81);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__81(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__82);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_list_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__82(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__83);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_nil_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__83(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__84);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__84(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__85);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__85(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__86);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_ux_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__86(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__87);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_uy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__87(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__88);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__88(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__89);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_list_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__89(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__90);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_nil_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__90(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__91);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__91(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__92);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__92(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__93);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_uy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__93(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__94);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_unicut))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__94(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__95);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__95(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__96);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_atom, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), asm_Renamed::posint0, var3, var4 });
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__96(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__97);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_int, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__97(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__98);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_ux_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__98(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__99);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_ux, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__99(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__100);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_ux_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__100(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__101);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_ux_vx, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__101(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__102);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_uy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__102(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__103);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_uy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__103(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__104);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vx, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__104(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__105);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__105(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__106);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_list))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__106(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__107);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_struct, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__107(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__108);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_void_one))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__108(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__109);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_void, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__109(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__110);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_wy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__110(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__111);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vx_vx, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__111(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__112);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vx_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__112(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__113);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vx_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__113(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__114);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vx_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__114(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__115);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vy_vx, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__115(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__116);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vy_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__116(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__117);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vy_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__117(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__118);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_vy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__118(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__119);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_iii, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__119(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__120);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__120(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__121);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__121(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__122);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_list_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__122(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__123);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_list_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__123(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__124);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_nil_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__124(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__125);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_nil_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__125(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__126);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__126(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__127);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), asm_Renamed::posint0, var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__127(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__128);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_int_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__128(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__129);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__129(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__130);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_x_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__130(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__131);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_x_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__131(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__132);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_y_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__132(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__133);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_y_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__133(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__134);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_vx, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__134(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__135);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_vy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__135(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__136);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_x_wy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__136(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__137);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_y_wy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__137(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__138);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_yy_yw, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__138(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__139);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_yw_yy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__139(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__140);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_yy_yy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__140(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__141);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_yy_yy_yy, var1, var2, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__141(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__142);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_and, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__142(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__143);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_or, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__143(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__144);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_lshiftl, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__144(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__145);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_lshiftr, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__145(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__146);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_complement, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__146(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__147);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_add, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__147(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__148);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_add1_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__148(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__149);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_sub, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__149(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__150);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_sub1_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__150(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__151);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_mul, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__151(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__152);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_div, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__152(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__153);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_idiv, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__153(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__154);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_mod, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__154(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__155);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_struct, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var4, var5 });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__155(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__156);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_para_list))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__156(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__157);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_para_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__157(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__158);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_atom, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), asm_Renamed::posint0, var3, var4 });
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__158(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__159);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_int, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__159(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__160);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__160(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__161);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__161(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__162);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_vx, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__162(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__163);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_vy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__163(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__164);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_para_void_one))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__164(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__165);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_void, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__165(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__166);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_vy_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__166(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__167);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_vy_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__167(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__168);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_vy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__168(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__169);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__169(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__170);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__170(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__171);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__171(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__172);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_vy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__172(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__173);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_ux, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__173(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__174);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_uy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__174(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__175);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_ux_ux, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__175(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__176);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_ux_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__176(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__177);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_uy_ux, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__177(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__178);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_ux_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__178(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__179);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_ux_ux, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__179(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__180);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_ux_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__180(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__181);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_uy_ux, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__181(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__182);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__182(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__183);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_uy_uy_uy_uy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__183(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__184);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_call, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_asm_pass12_call_3::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__184(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__185);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_callv, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__185(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__186);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_execute, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_asm_pass12_call_3::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__186(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__187);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_executev, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__187(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__188);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_return_a))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__188(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__189);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_return_b))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__189(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__190);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_det, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__190(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__191);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_save_ht_jmp, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__191(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__192);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_allocate_flat, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__192(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__193);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_allocate_nonflat, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__193(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__194);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_allocate_nondet, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__194(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__195);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_flat_to_nondet, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__195(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__196);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_fail))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__196(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__197);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_fail0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__197(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__198);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__198(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__199);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_commit))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__199(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__200);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_cut))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__200(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__201);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_cut_fail))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__201(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__202);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_cut_return))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__202(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__203);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_save_b))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__203(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__204);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_getbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__204(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__205);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_getpbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__205(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__206);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_putbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__206(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__207);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__207(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__208);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__208(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__209);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_tabsize, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__209(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__210);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arg, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__210(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__211);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arg0, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__211(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__212);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_setarg, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__212(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__213);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_setarg0, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__213(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__214);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_functor, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__214(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__215);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin0, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__215(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__216);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin1, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__216(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__217);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin2, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__217(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__218);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin3, var1, var2, var3, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__218(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__219);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin4, var1, var2, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__219(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__220);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_func_arity, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__220(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__221);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_halt))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__221(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__222);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_endfile))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__222(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__223);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_gethtreg, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__223(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__224);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_puthtreg, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__224(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__225);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_endfile))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__225(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__226);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_get_ar_cps))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__226(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__227);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_put_ar_cps, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__227(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__228);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_ar_cps, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__228(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__229);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_det_get_ar_cps, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__229(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__230);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_allocate_susp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__230(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__231);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__231(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__232);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__232(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__233);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_delay, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var5, var6 });
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__233(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__234);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var_delay, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var7, var8 });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__234(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__235);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(asm_Renamed::s_end_delay))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__235(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__236);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_nondet, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__236(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__237);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_susp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__237(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__238);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_dvar_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__238(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__239);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var2_delay, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_sym, { var2->Deref(), var3->Deref(), var7, var8 });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_sym_member1_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__239(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_3::exec_pred_asm_pass12_3__240);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_domain_set_false_yy, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_3::exec_pred_asm_pass12_3__240(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_domain_set_false_yx, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_asm_pass12_call_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass12_call_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass12_call_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s3;
		local_aregs[1] = asm_Renamed::posint0;
		local_aregs[2] = Data::F(asm_Renamed::s_b_GET_SYM_TYPE_ccf, { var1->Deref(), var2->Deref(), var4, Data::F(asm_Renamed::s12, Data::F(asm_Renamed::s22, { var4->Deref(), asm_Renamed::posint3 }), asm_Renamed::s_true, continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_isglobal_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass12_call_3::exec_pred_asm_pass12_call_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var4, var5 }), var3->Deref());
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass2_4__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass2_4::exec_pred_asm_pass2_4__1(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_rearange_csym, { var3->Deref(), asm_Renamed::posint255, var5, var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_symbol, { var6->Deref(), Data::F(asm_Renamed::s_asm_pass2a, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(asm_Renamed::s_asm_index, { var2->Deref(), var3->Deref(), var4->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_index_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_index_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_index_3::exec_pred_asm_index_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_3::exec_pred_asm_index_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_3::exec_pred_asm_index_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_proc_index, { var1->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_index, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_proc_index_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_proc_index_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_proc_index_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_proc_index_3::exec_pred_asm_proc_index_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_pred, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var7->Deref(), var3->Deref(), var9->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_proc_index_3::exec_pred_asm_proc_index_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s_c });
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_writename, { var1->Deref(), Data::F(asm_Renamed::s_b_ASPN2_cc, { var6->Deref(), var7->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_proc_index_3::exec_pred_asm_proc_index_3__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_proc_index_3::exec_pred_asm_proc_index_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s21, { var1->Deref(), asm_Renamed::s_s });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var2->Deref(), Data::F(asm_Renamed::s6, var6, var7) });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var6->Deref(), var7->Deref(), var4->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var9, Data::F(asm_Renamed::s_writename, { var1->Deref(), Data::F(asm_Renamed::s_b_ASPN2_cc, { var8->Deref(), var9->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_proc_index_3::exec_pred_asm_proc_index_3__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_writename, { var1->Deref(), Data::F(asm_Renamed::s_b_ASPN2_cc, { var2->Deref(), var6->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2a_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass2a_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass2a_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass2a_3::exec_pred_asm_pass2a_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2a_3::exec_pred_asm_pass2a_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2a_3::exec_pred_asm_pass2a_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_pass2_inst, { var1->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_pass2a, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass2_inst_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_label, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_call, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_call_d, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_call, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s15, Data::F(asm_Renamed::s8, Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var3->Deref(), var5 }), Data::F(asm_Renamed::s6, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_call, var6), Data::F(asm_Renamed::s_b_ASPN2_cc, { var6->Deref(), var5->Deref() }))), Data::F(asm_Renamed::s_warning, Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), Data::F(asm_Renamed::s9, asm_Renamed::s1, Const::Nil))));
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__4(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_execute, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_djmp, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__5(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_execute, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s15, Data::F(asm_Renamed::s8, Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var3->Deref(), var5 }), Data::F(asm_Renamed::s6, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_execute, var6), Data::F(asm_Renamed::s_b_ASPN2_cc, { var6->Deref(), var5->Deref() }))), Data::F(asm_Renamed::s_warning, Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s10, { var1->Deref(), var2->Deref() }), Data::F(asm_Renamed::s9, asm_Renamed::s1, Const::Nil))));
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__6(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__7(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_susp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_susp, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__8(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var7->Deref(), var9, Data::F(asm_Renamed::s_asm_lookup_ltab, { var5->Deref(), var7->Deref(), var10, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_struct_x, var11, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var10->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__9(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var7->Deref(), var9, Data::F(asm_Renamed::s_asm_lookup_ltab, { var5->Deref(), var7->Deref(), var10, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_struct_y, var11, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var10->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__10(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_atom_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var5->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_atom_x, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__11(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_atom_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var5->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_atom_y, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__12(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_nil_x, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_nil_x, var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__13(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_nil_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_nil_y, var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__14(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_x, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__15(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_y, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__16(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yxx, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_yxx, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__17(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yxy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_yxy, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__18(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yyx, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_yyx, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__19(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_switch_list_yyy, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var9, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_switch_list_yyy, var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var9->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__20(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_int_x, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_int_x, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var1->Deref(), var2->Deref(), var7->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var8->Deref(), continuation }) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__21(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eq_int_y, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eq_int_y, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var1->Deref(), var2->Deref(), var7->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var8->Deref(), continuation }) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__22(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_eql, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_eql, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__23(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_eql, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_eql, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__24(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_eql_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_eql_yy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__25(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_gt, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_gt, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__26(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__27);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_gt_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_gt_yy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__27(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__28);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_ge, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_ge, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__28(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__29);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_ge_yy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_ge_yy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__29(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__30);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_id, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_id, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__30(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__31);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_id, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_id, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var7->Deref(), var8->Deref(), var6->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__31(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__32);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_var_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_var_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__32(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__33);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_var_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_var_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__33(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__34);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_var_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_var_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__34(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__35);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmp_var_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmp_var_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__35(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__36);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_atom_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__36(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__37);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_atom_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__37(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__38);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atomic_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_atomic_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__38(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__39);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_atomic_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_atomic_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__39(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__40);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_num_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_num_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__40(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__41);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_num_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_num_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__41(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__42);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_float_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_float_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__42(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__43);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_float_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_float_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__43(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__44);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_int_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_int_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__44(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__45);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_int_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_int_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__45(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__46);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_nil, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_nil, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__46(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__47);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_list, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_list, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__47(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__48);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_int, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_int, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__48(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__49);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_atom, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var6, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_atom, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__49(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__50);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__50(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__51);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_x, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_x, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__51(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__52);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_y, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_y, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__52(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__53);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_xx, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_xx, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__53(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__54);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_xy, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_xy, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__54(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__55);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_yx, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_yx, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__55(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__56);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_jmpn_struct_yy, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_jmpn_struct_yy, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__56(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__57);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_det, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_det, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__57(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__58);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_det_get_ar_cps, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_det_get_ar_cps, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__58(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__59);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_save_ht_jmp, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var6, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_save_ht_jmp, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__59(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__60);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_struct_x, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__60(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__61);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_struct_y, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__61(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__62);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify0_struct_y, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__62(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__63);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unicut_struct_y, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__63(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__64);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_atom_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__64(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__65);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_atom_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__65(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__66);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify0_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify0_atom_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__66(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__67);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unicut_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unicut_atom_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__67(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__68);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_atom, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), asm_Renamed::posint0, var2->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_arg_atom, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__68(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__69);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_unify_arg_struct, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_unify_arg_struct, var6, Data::F(asm_Renamed::s_b_ASPN2_cc, { var6->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__69(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__70);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_struct_x, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_move_struct_x, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__70(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__71);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_move_struct_y, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var1->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__71(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__72);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_atom_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_move_atom_x, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__72(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__73);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_move_atom_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_move_atom_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__73(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__74);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_and, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_and, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__74(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__75);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_or, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_or, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__75(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__76);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_lshiftl, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_lshiftl, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__76(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__77);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_lshiftr, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_lshiftr, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__77(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__78);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_complement, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var6, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_complement, var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var7->Deref(), var5->Deref(), var6->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__78(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__79);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_add, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_add, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__79(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__80);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_sub, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_sub, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__80(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__81);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_mul, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_mul, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__81(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__82);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_div, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_div, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__82(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__83);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_idiv, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_idiv, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__83(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__84);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_mod, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_mod, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__84(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__85);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_struct, Data::F(asm_Renamed::s6, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_para_struct, var6, Data::F(asm_Renamed::s_b_ASPN2_cc, { var6->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__85(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__86);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_para_atom, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), asm_Renamed::posint0, var2->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_para_atom, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__86(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__87);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var1->Deref(), var3->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork, var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var5->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__87(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__88);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var5->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_struct_y, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var1->Deref(), var8->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__88(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__89);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_list_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_list_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__89(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__90);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_nil_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_nil_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__90(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__91);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_atom_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_atom_y, var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__91(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__92);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_int_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_int_y, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__92(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__93);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unify_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unify_uy_uy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__93(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__94);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_struct_y, var1, Data::F(asm_Renamed::s6, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var5->Deref(), var8, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_struct_y, var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var1->Deref(), var8->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__94(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__95);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_list_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_list_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__95(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__96);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_nil_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_nil_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__96(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__97);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_atom_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), asm_Renamed::posint0, var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_atom_y, var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var1->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__97(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__98);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_int_y, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_int_y, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__98(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__99);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_ux_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_ux_uy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__99(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__100);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_fork_unicut_uy_uy, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_fork_unicut_uy_uy, var7, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var2->Deref(), var6->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__100(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__101);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_x, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_x, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var6, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var5->Deref(), var1->Deref(), asm_Renamed::posint0, asm_Renamed::posint0, Data::F(asm_Renamed::s_b_ASPN_c, { var6->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__101(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__102);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_hash_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_hash_y, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var6, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var5->Deref(), var1->Deref(), asm_Renamed::posint0, asm_Renamed::posint0, Data::F(asm_Renamed::s_b_ASPN_c, { var6->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__102(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__103);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_callv, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_callv, var4);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__103(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__104);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_executev, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_executev, var4);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__104(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__105);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_functor, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_functor, var6);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__105(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__106);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_func_arity, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_func_arity, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var6, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var5->Deref(), var6->Deref(), var7->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__106(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__107);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arg0, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_integer, { var1->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_arg0, var6);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var6->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__107(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__108);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arg, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_arg, var6);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__108(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__109);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_setarg0, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_integer, { var1->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_setarg0, var6);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var6->Deref(), var1->Deref(), var7->Deref(), var8->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__109(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__110);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_setarg, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_setarg, var6);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var7, Data::F(asm_Renamed::s_x_or_y, { var2->Deref(), var8, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var9, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__110(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__111);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin0, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_builtin0, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__111(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__112);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin1, var1, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var5->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_builtin1, var7, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var8, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var7->Deref(), var1->Deref(), var6->Deref(), var8->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__112(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__113);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin2, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var6->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_builtin2, var8, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var9, Data::F(asm_Renamed::s_x_or_y, { var4->Deref(), var10, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var8->Deref(), var1->Deref(), var7->Deref(), var9->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var10->Deref(), continuation }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__113(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__114);
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin3, var1, var2, var3, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var7->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_builtin3, var9, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var10, Data::F(asm_Renamed::s_x_or_y, { var4->Deref(), var11, Data::F(asm_Renamed::s_x_or_y, { var5->Deref(), var12, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var9->Deref(), var1->Deref(), var8->Deref(), var10->Deref(), Data::F(asm_Renamed::s_b_ASPN2_cc, { var11->Deref(), var12->Deref(), continuation }) }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__114(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__115);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_builtin4, var1, var2, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var8->Deref(), var9 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_builtin4, var10, Data::F(asm_Renamed::s_x_or_y, { var3->Deref(), var11, Data::F(asm_Renamed::s_x_or_y, { var4->Deref(), var12, Data::F(asm_Renamed::s_x_or_y, { var5->Deref(), var13, Data::F(asm_Renamed::s_x_or_y, { var6->Deref(), var14, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var10->Deref(), var1->Deref(), var9->Deref(), var11->Deref(), Data::F(asm_Renamed::s_b_ASPN3_ccc, { var12->Deref(), var13->Deref(), var14->Deref(), continuation }) }) }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__115(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__116);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_getbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_getbreg, var4);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__116(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__117);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_getpbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_getpbreg, var4);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__117(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__118);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_putbreg, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_putbreg, var4);
		local_aregs[2] = Data::F(asm_Renamed::s_x_or_y, { var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN2_cc, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__118(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__119);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_gethtreg, Data::F(asm_Renamed::s_y, var1), Data::F(asm_Renamed::s_y, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_gethtreg, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN3_ccc, { var5->Deref(), var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__119(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__120);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_puthtreg, Data::F(asm_Renamed::s_y, var1), Data::F(asm_Renamed::s_y, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_puthtreg, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN3_ccc, { var5->Deref(), var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__120(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__121);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_delay, Data::F(asm_Renamed::s6, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var1->Deref(), var2->Deref(), var4->Deref(), var6 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var3->Deref(), var5->Deref(), var7, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_delay, var8, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var8->Deref(), var6->Deref(), var7->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__121(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__122);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var_delay, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var7->Deref(), var9, Data::F(asm_Renamed::s_asm_lookup_ltab, { var5->Deref(), var7->Deref(), var10, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_susp_var_delay, var11, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var10->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__122(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__123);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_jmpn_dvar_y, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var2->Deref(), var4->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_jmpn_dvar_y, var6, Data::F(asm_Renamed::s_b_ASPN3_ccc, { var6->Deref(), var1->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__123(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__124);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_susp_var2_delay, var1, Data::F(asm_Renamed::s6, var2, var3), var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab, { var2->Deref(), var3->Deref(), var6->Deref(), var8 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_lookup_ltab, { var4->Deref(), var7->Deref(), var9, Data::F(asm_Renamed::s_asm_lookup_ltab, { var5->Deref(), var7->Deref(), var10, Data::F(asm_Renamed::s_opcode, asm_Renamed::s_susp_var2_delay, var11, Data::F(asm_Renamed::s_b_ASPN4_cccc, { var11->Deref(), var1->Deref(), var8->Deref(), var9->Deref(), Data::F(asm_Renamed::s_b_ASPN_c, { var10->Deref(), continuation }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__124(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__125);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4;
		local_aregs[2] = var5;
		local_aregs[3] = Data::F(asm_Renamed::s12, Data::F(asm_Renamed::s_opcode, { var4->Deref(), var6 }), Data::F(asm_Renamed::s_b_ASPN_c, { var6->Deref() }), Data::F(asm_Renamed::s_asm_pass2_inst_op, { var1->Deref(), asm_Renamed::posint0, var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_functor_3::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_3::exec_pred_asm_pass2_inst_3__125(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_cmp_error, Data::F(asm_Renamed::s9, asm_Renamed::s101, Data::F(asm_Renamed::s9, { var1->Deref(), Data::F(asm_Renamed::s9, asm_Renamed::s153, Const::Nil) })));
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_op_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_op_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_pass2_inst_op_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s20, { var2->Deref(), var3->Deref() });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_pass2_inst_op_3::exec_pred_asm_pass2_inst_op_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, var4, Data::F(asm_Renamed::s5, { var2->Deref(), asm_Renamed::posint1 }));
		local_aregs[2] = Data::F(asm_Renamed::s_arg, { var4->Deref(), var1->Deref(), var5, Data::F(asm_Renamed::s_b_ASPN_c, { var5->Deref(), Data::F(asm_Renamed::s_asm_pass2_inst_op, { var1->Deref(), var4->Deref(), var3->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_magic_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_magic_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_magic_1__1(mach));
	}

	Operation asm_Renamed::pred_asm_magic_1::exec_pred_asm_magic_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_putnum, asm_Renamed::posint17, asm_Renamed::posint1);
		local_aregs[2] = Data::F(asm_Renamed::s_asm_putnum, asm_Renamed::posint18, asm_Renamed::posint1, Data::F(asm_Renamed::s_asm_putnum, asm_Renamed::posint19, asm_Renamed::posint1, Data::F(asm_Renamed::s_asm_putnum, { var1->Deref(), asm_Renamed::posint1, continuation })));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_inst_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_index_inst_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_index_inst_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_index_inst_2::exec_pred_asm_index_inst_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_pred, var1, var2, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s19, { var5->Deref(), asm_Renamed::posint16 });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_inst_2::exec_pred_asm_index_inst_2__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, asm_Renamed::s_i, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_inst_2::exec_pred_asm_index_inst_2__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_index_inst_2::exec_pred_asm_index_inst_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, asm_Renamed::s_c, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_index_inst_2::exec_pred_asm_index_inst_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_arglabel, asm_Renamed::s_s, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), asm_Renamed::posint9 });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_symbol_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_symbol_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_symbol_1__1(mach));
	}

	Operation asm_Renamed::pred_asm_symbol_1::exec_pred_asm_symbol_1__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_symbol_1::exec_pred_asm_symbol_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var1->Deref() });
		local_aregs[1] = asm_Renamed::s_true;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_symbol_1::exec_pred_asm_symbol_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_sym, var1, var2, var3, var4), var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_b_ASPN_c, { var3->Deref() });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_putnum, { var2->Deref(), asm_Renamed::posint1, Data::F(asm_Renamed::s_b_GET_LENGTH_cf, { var1->Deref(), var6, Data::F(asm_Renamed::s_asm_putnum, { var6->Deref(), asm_Renamed::posint1, Data::F(asm_Renamed::s_writename, { var1->Deref(), Data::F(asm_Renamed::s_asm_symbol, { var5->Deref(), continuation }) }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_putnum_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_putnum_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_putnum_2__1(mach));
	}

	Operation asm_Renamed::pred_asm_putnum_2::exec_pred_asm_putnum_2__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_putnum_2::exec_pred_asm_putnum_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = Data::F(asm_Renamed::s23, { var2->Deref(), asm_Renamed::posint1 });
		local_aregs[1] = Data::F(asm_Renamed::s_is, var3, Data::F(asm_Renamed::s11, { var1->Deref(), asm_Renamed::posint255 }));
		local_aregs[2] = Data::F(asm_Renamed::s_is, var4, Data::F(asm_Renamed::s24, { var1->Deref(), asm_Renamed::posint8 }), Data::F(asm_Renamed::s_is, var5, Data::F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_asm_putnum, { var4->Deref(), var5->Deref(), Data::F(asm_Renamed::s_put, { var3->Deref(), continuation }) })));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_putnum_2::exec_pred_asm_putnum_2__2(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_put, { var1->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_mark_eot_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_mark_eot_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_mark_eot_0__1(mach));
	}

	Operation asm_Renamed::pred_asm_mark_eot_0::exec_pred_asm_mark_eot_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_opcode, asm_Renamed::s_endfile, var1);
		local_aregs[2] = Data::F(asm_Renamed::s_b_ASPN2_cc, { var1->Deref(), asm_Renamed::posint0, continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_sym_member1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_sym_member1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sym_member1_2__1(mach));
	}

	Operation asm_Renamed::pred_sym_member1_2::exec_pred_sym_member1_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s_sym, var3, var4, var5, var6), var1->Deref());
		local_aregs[1] = Data::F(asm_Renamed::s_asm_hash_value, { var3->Deref(), var7 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var8, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s_mod, Data::F(asm_Renamed::s5, { var7->Deref(), var4->Deref() }), asm_Renamed::posint255), asm_Renamed::posint1), Data::F(asm_Renamed::s_arg, { var8->Deref(), var2->Deref(), var9, Data::F(asm_Renamed::s_sym_member1, { var3->Deref(), var4->Deref(), var1->Deref(), var9->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_sym_member1_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_sym_member1_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sym_member1_4__1(mach));
	}

	Operation asm_Renamed::pred_sym_member1_4::exec_pred_sym_member1_4__1(Prolog* mach) {
		mach->FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var4->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s_next_sym_no, var5);
		local_aregs[2] = Data::F(asm_Renamed::s_arg, asm_Renamed::posint4, var3->Deref(), var5->Deref(), Data::F(asm_Renamed::s14, { var4->Deref(), Data::F(asm_Renamed::s9, { var3->Deref(), var6 }), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_sym_member1_4::exec_pred_sym_member1_4__2(Prolog* mach) {
		mach->FillAlternative(pred_sym_member1_4::exec_pred_sym_member1_4__3);
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
		if(!((areg3)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var4, var5 }), var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s19, { var3->Deref(), Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var4->Deref(), var5->Deref() }) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_sym_member1_4::exec_pred_sym_member1_4__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		if(!((areg3)->Unify(Data::F(asm_Renamed::s9, var4, var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_sym_member1, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_lab_member1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_lab_member1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_lab_member1_2__1(mach));
	}

	Operation asm_Renamed::pred_lab_member1_2::exec_pred_lab_member1_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s_lab, var3, var4), var1->Deref());
		local_aregs[1] = Data::F(asm_Renamed::s_asm_hash_value, { var3->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var6, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s_mod, { var5->Deref(), asm_Renamed::posint255 }), asm_Renamed::posint1), Data::F(asm_Renamed::s_arg, { var6->Deref(), var2->Deref(), var7, Data::F(asm_Renamed::s_lab_member1, { var3->Deref(), var1->Deref(), var7->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_lab_member1_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_lab_member1_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_lab_member1_3__1(mach));
	}

	Operation asm_Renamed::pred_lab_member1_3::exec_pred_lab_member1_3__1(Prolog* mach) {
		mach->FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var3->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s14, { var3->Deref(), Data::F(asm_Renamed::s9, { var2->Deref(), var4 }) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_lab_member1_3::exec_pred_lab_member1_3__2(Prolog* mach) {
		mach->FillAlternative(pred_lab_member1_3::exec_pred_lab_member1_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg2)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, { var1->Deref(), var3 }), var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s19, { var2->Deref(), Data::F(asm_Renamed::s_lab, { var1->Deref(), var3->Deref() }) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_lab_member1_3::exec_pred_lab_member1_3__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg2)->Unify(Data::F(asm_Renamed::s9, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_lab_member1, { var1->Deref(), var2->Deref(), var4->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_lookup_ltab_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_lookup_ltab_3::exec_pred_asm_lookup_ltab_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_hash_value, { var1->Deref(), var4 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var5, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s_mod, { var4->Deref(), asm_Renamed::posint255 }), asm_Renamed::posint1), Data::F(asm_Renamed::s_arg, { var5->Deref(), var2->Deref(), var6, Data::F(asm_Renamed::s_asm_lookup_ltab1, { var1->Deref(), var6->Deref(), var3->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab1_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab1_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_lookup_ltab1_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var2->Deref() });
		local_aregs[1] = asm_Renamed::s_fail;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg1)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_lab, { var1->Deref(), var2 }), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s19, { var4->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ltab1_3::exec_pred_asm_lookup_ltab1_3__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg1)->Unify(Data::F(asm_Renamed::s9, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ltab1, { var1->Deref(), var3->Deref(), var4->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ctab_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_lookup_ctab_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_lookup_ctab_4__1(mach));
	}

	Operation asm_Renamed::pred_asm_lookup_ctab_4::exec_pred_asm_lookup_ctab_4__1(Prolog* mach) {
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
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_hash_value, { var1->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_is, var6, Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s_mod, Data::F(asm_Renamed::s5, { var5->Deref(), var2->Deref() }), asm_Renamed::posint255), asm_Renamed::posint1), Data::F(asm_Renamed::s_arg, { var6->Deref(), var3->Deref(), var7, Data::F(asm_Renamed::s_asm_lookup_ctab1, { var1->Deref(), var2->Deref(), var7->Deref(), var4->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ctab1_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_lookup_ctab1_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_lookup_ctab1_4__1(mach));
	}

	Operation asm_Renamed::pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__2);
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
		if(!((areg2)->Unify(Data::F(asm_Renamed::s9, Data::F(asm_Renamed::s_sym, { var1->Deref(), var2->Deref(), var3, var4 }), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s19, { var6->Deref(), var4->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_lookup_ctab1_4::exec_pred_asm_lookup_ctab1_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		if(!((areg2)->Unify(Data::F(asm_Renamed::s9, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_asm_lookup_ctab1, { var1->Deref(), var2->Deref(), var4->Deref(), var5->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_rearange_csym_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_rearange_csym_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_rearange_csym_4__1(mach));
	}

	Operation asm_Renamed::pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s16, { var2->Deref(), asm_Renamed::posint1 });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var4->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_rearange_csym_4::exec_pred_asm_rearange_csym_4__2(Prolog* mach) {
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
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_arg, { var2->Deref(), var1->Deref(), var5 });
		local_aregs[2] = Data::F(asm_Renamed::s_asm_merge, { var5->Deref(), var3->Deref(), var6, Data::F(asm_Renamed::s_is, var7, Data::F(asm_Renamed::s7, { var2->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_asm_rearange_csym, { var1->Deref(), var7->Deref(), var6->Deref(), var4->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_merge_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_asm_merge_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_asm_merge_3__1(mach));
	}

	Operation asm_Renamed::pred_asm_merge_3::exec_pred_asm_merge_3__1(Prolog* mach) {
		mach->FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__2);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var1->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var3->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_merge_3::exec_pred_asm_merge_3__2(Prolog* mach) {
		mach->FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__3);
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
		local_aregs[0] = Data::F(asm_Renamed::s_var, { var2->Deref() });
		local_aregs[1] = Data::F(asm_Renamed::s19, { var3->Deref(), var1->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_merge_3::exec_pred_asm_merge_3__3(Prolog* mach) {
		mach->FillAlternative(pred_asm_merge_3::exec_pred_asm_merge_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(asm_Renamed::s9, var4, var5);
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s9, var6, var7), var2->Deref(), Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s_sym, var8, var9, var10, var11), var4->Deref(), Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s_sym, var12, var13, var14, var15), var6->Deref(), Data::F(asm_Renamed::s12, Data::F(asm_Renamed::s16, { var11->Deref(), var15->Deref() }), Data::F(asm_Renamed::s14, { var3->Deref(), Data::F(asm_Renamed::s9, { var4->Deref(), var16 }) }), Data::F(asm_Renamed::s_asm_merge, { var5->Deref(), var2->Deref(), var16->Deref(), continuation })))));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003C$003D_2::exec_static);
	}

	Operation asm_Renamed::pred_asm_merge_3::exec_pred_asm_merge_3__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = Data::F(asm_Renamed::s9, var4, var5);
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(asm_Renamed::s12, Data::F(asm_Renamed::s18, Data::F(asm_Renamed::s9, var6, var7), var2->Deref()), Data::F(asm_Renamed::s14, { var3->Deref(), Data::F(asm_Renamed::s9, { var6->Deref(), var8 }) }), Data::F(asm_Renamed::s_asm_merge, { var1->Deref(), var7->Deref(), var8->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003C$003D_2::exec_static);
	}

	Operation asm_Renamed::pred_next_sym_no_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_next_sym_no_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_next_sym_no_1__1(mach));
	}

	Operation asm_Renamed::pred_next_sym_no_1::exec_pred_next_sym_no_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_global_get, asm_Renamed::s4, asm_Renamed::posint0, var1->Deref());
		local_aregs[2] = Data::F(asm_Renamed::s_is, var2, Data::F(asm_Renamed::s5, { var1->Deref(), asm_Renamed::posint1 }), Data::F(asm_Renamed::s_global_set, asm_Renamed::s4, asm_Renamed::posint0, var2->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_x_or_y_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_x_or_y_2__1(mach));
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_pred_x_or_y_2__1(Prolog* mach) {
		mach->FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_vx, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, { var2->Deref(), Data::F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_pred_x_or_y_2__2(Prolog* mach) {
		mach->FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_x, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, { var2->Deref(), Data::F(asm_Renamed::s5, Data::F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint1) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_pred_x_or_y_2__3(Prolog* mach) {
		mach->FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_vy, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, { var2->Deref(), Data::F(asm_Renamed::s26, Data::F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint3) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_pred_x_or_y_2__4(Prolog* mach) {
		mach->FillAlternative(pred_x_or_y_2::exec_pred_x_or_y_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(asm_Renamed::s_y, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, { var2->Deref(), Data::F(asm_Renamed::s26, Data::F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint3 }), asm_Renamed::posint7) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_x_or_y_2::exec_pred_x_or_y_2__5(Prolog* mach) {
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_is, { var2->Deref(), Data::F(asm_Renamed::s26, Data::F(asm_Renamed::s17, { var1->Deref(), asm_Renamed::posint2 }), asm_Renamed::posint2) });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_opcode_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_opcode_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_opcode_2__1(mach));
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__1(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_noop))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__2(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__3(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_djmp))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__4(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_struct_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__5(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__6(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_atom_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__7(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__8(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_nil_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__9(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__10(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__11(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__12(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_yxx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint11))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__13(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_yxy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint12))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__14(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_yyx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint13))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__15(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_switch_list_yyy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint14))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__16(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_int_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint15))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__17(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eq_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint16))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__18(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_eql))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint17))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__19(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_eql))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint18))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__20(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_eql_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint19))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__21(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_gt))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint20))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__22(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_gt_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint21))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__23(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_ge))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint22))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__24(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_ge_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint23))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__25(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_id))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint24))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__26(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__27);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_id))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint25))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__27(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__28);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_var_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint26))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__28(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__29);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_var_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint27))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__29(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__30);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_var_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint28))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__30(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__31);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_var_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint29))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__31(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__32);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_atom_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint30))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__32(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__33);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint31))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__33(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__34);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_atomic_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint32))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__34(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__35);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_atomic_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint33))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__35(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__36);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_num_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint34))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__36(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__37);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_num_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint35))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__37(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__38);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_float_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint36))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__38(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__39);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_float_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint37))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__39(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__40);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_int_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint38))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__40(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__41);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint39))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__41(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__42);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint40))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__42(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__43);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_list))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint41))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__43(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__44);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_int))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint42))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__44(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__45);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_atom))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint43))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__45(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__46);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint44))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__46(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__47);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint45))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__47(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__48);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint46))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__48(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__49);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_xx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint47))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__49(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__50);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_xy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint48))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__50(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__51);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_yx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint49))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__51(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__52);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_jmpn_struct_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint50))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__52(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__53);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_struct_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint51))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__53(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__54);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint52))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__54(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__55);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_list_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint53))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__55(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__56);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint54))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__56(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__57);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_nil_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint55))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__57(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__58);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint56))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__58(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__59);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_atom_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint57))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__59(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__60);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_int_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint58))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__60(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__61);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint59))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__61(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__62);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint60))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__62(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__63);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_ux_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint61))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__63(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__64);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_ux_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint62))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__64(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__65);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint63))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__65(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__66);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_cons_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint64))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__66(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__67);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_cons_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint65))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__67(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__68);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint66))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__68(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__69);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint67))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__69(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__70);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint68))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__70(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__71);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint69))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__71(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__72);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint70))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__72(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__73);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unify_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint71))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__73(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__74);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint72))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__74(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__75);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint73))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__75(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__76);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint74))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__76(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__77);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint75))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__77(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__78);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint76))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__78(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__79);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork_unicut_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint77))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__79(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__80);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint78))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__80(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__81);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint79))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__81(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__82);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint80))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__82(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__83);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint81))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__83(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__84);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint82))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__84(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__85);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify0_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint83))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__85(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__86);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint84))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__86(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__87);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint85))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__87(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__88);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint86))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__88(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__89);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint87))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__89(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__90);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint88))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__90(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__91);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint89))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__91(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__92);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unicut))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint90))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__92(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__93);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint91))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__93(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__94);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_atom))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint92))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__94(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__95);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_int))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint93))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__95(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__96);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_ux_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint94))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__96(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__97);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint95))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__97(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__98);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_ux_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint96))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__98(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__99);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_ux_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint97))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__99(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__100);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint98))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__100(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__101);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint99))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__101(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__102);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_wy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint100))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__102(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__103);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vx_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint101))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__103(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__104);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint102))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__104(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__105);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vy_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint103))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__105(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__106);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint104))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__106(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__107);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_list))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint105))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__107(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__108);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_struct))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint106))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__108(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__109);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_void_one))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint107))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__109(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__110);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_void))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint108))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__110(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__111);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vx_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint109))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__111(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__112);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vx_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint110))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__112(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__113);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vx_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint111))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__113(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__114);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vy_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint112))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__114(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__115);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vy_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint113))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__115(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__116);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_vy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint114))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__116(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__117);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_unify_arg_iii))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint115))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__117(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__118);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_struct_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint116))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__118(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__119);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_struct_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint117))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__119(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__120);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_list_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint118))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__120(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__121);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_list_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint119))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__121(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__122);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_nil_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint120))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__122(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__123);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_nil_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint121))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__123(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__124);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_atom_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint122))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__124(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__125);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_int_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint123))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__125(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__126);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_atom_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint124))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__126(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__127);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_int_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint125))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__127(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__128);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_x_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint126))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__128(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__129);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_x_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint127))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__129(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__130);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_y_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint128))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__130(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__131);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_yy_yy_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint129))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__131(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__132);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_yy_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint130))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__132(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__133);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_y_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint131))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__133(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__134);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint132))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__134(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__135);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint133))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__135(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__136);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_x_wy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint134))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__136(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__137);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_yy_yw))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint135))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__137(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__138);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_y_wy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint136))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__138(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__139);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_yw_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint137))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__139(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__140);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_and))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint138))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__140(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__141);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_or))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint139))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__141(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__142);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_lshiftl))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint140))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__142(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__143);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_lshiftr))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint141))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__143(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__144);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_complement))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint142))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__144(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__145);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_add))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint143))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__145(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__146);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_add1_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint144))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__146(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__147);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_sub))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint145))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__147(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__148);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_sub1_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint146))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__148(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__149);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_mul))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint147))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__149(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__150);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_div))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint148))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__150(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__151);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_idiv))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint149))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__151(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__152);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_mod))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint150))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__152(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__153);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_struct))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint151))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__153(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__154);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_list))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint152))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__154(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__155);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint153))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__155(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__156);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_atom))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint154))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__156(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__157);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_int))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint155))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__157(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__158);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_ux_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint156))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__158(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__159);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint157))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__159(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__160);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint158))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__160(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__161);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_uy_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint159))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__161(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__162);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint160))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__162(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__163);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint161))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__163(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__164);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint162))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__164(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__165);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_vx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint163))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__165(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__166);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_vy_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint164))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__166(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__167);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint165))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__167(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__168);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_void_one))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint166))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__168(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__169);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_void))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint167))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__169(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__170);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_vy_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint168))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__170(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__171);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_vy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint169))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__171(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__172);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint170))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__172(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__173);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_ux_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint171))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__173(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__174);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint172))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__174(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__175);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_uy_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint173))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__175(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__176);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_vy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint174))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__176(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__177);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_ux_uy_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint175))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__177(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__178);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint176))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__178(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__179);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_ux_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint177))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__179(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__180);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_ux_uy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint178))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__180(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__181);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_para_uy_uy_ux))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint179))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__181(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__182);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_call))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint180))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__182(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__183);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_call_d))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint181))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__183(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__184);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_callv))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint182))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__184(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__185);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_execute))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint183))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__185(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__186);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_executev))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint184))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__186(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__187);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_return_a))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint185))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__187(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__188);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_return_b))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint186))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__188(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__189);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_det))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint187))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__189(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__190);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_save_ht_jmp))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint188))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__190(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__191);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_allocate_flat))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint189))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__191(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__192);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_allocate_nonflat))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint190))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__192(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__193);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_allocate_nondet))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint191))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__193(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__194);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fail))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint192))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__194(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__195);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fail0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint193))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__195(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__196);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_fork))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint194))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__196(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__197);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_commit))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint195))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__197(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__198);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_cut))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint196))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__198(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__199);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_cut_fail))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint197))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__199(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__200);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_cut_return))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint198))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__200(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__201);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_save_b))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint199))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__201(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__202);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_getbreg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint200))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__202(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__203);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_putbreg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint201))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__203(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__204);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_getpbreg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint202))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__204(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__205);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint203))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__205(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__206);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_hash_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint204))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__206(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__207);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_arg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint205))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__207(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__208);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_arg0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint206))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__208(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__209);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_setarg))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint207))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__209(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__210);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_setarg0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint208))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__210(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__211);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_functor))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint209))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__211(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__212);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_func_arity))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint210))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__212(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__213);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_get_ar_cps))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint211))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__213(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__214);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_put_ar_cps))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint212))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__214(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__215);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_move_ar_cps))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint213))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__215(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__216);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_det_get_ar_cps))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint214))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__216(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__217);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_builtin0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint215))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__217(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__218);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_builtin1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint216))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__218(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__219);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_builtin2))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint217))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__219(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__220);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_builtin3))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint218))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__220(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__221);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_builtin4))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint219))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__221(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__222);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_allocate_susp))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint220))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__222(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__223);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_susp_var_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint221))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__223(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__224);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_susp_var_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint222))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__224(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__225);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_delay))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint223))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__225(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__226);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_susp_var_delay))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint224))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__226(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__227);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_end_delay))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint225))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__227(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__228);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_nondet))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint226))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__228(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__229);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmp_susp))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint227))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__229(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__230);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_jmpn_dvar_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint228))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__230(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__231);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_susp_var2_delay))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint229))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__231(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__232);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_domain_set_false_yy))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint230))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__232(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__233);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_domain_set_false_yx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint231))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__233(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__234);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_halt))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint232))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__234(Prolog* mach) {
		mach->FillAlternative(pred_opcode_2::exec_pred_opcode_2__235);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_endfile))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint233))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_opcode_2::exec_pred_opcode_2__235(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(asm_Renamed::s_tabsize))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(asm_Renamed::posint234))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation asm_Renamed::pred_output_mess_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_output_mess_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_output_mess_1__1(mach));
	}

	Operation asm_Renamed::pred_output_mess_1::exec_pred_output_mess_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_telling, var2);
		local_aregs[2] = Data::F(asm_Renamed::s_tell, asm_Renamed::s_user, Data::F(asm_Renamed::s_write, { var1->Deref(), Data::F(asm_Renamed::s_nl, Data::F(asm_Renamed::s_tell, { var2->Deref(), continuation })) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation asm_Renamed::pred_is_unify_arg_inst_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation asm_Renamed::pred_is_unify_arg_inst_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_is_unify_arg_inst_1__1(mach));
	}

	Operation asm_Renamed::pred_is_unify_arg_inst_1::exec_pred_is_unify_arg_inst_1__1(Prolog* mach) {
		mach->RemoveChoice();
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
		local_aregs[0] = asm_Renamed::s_true;
		local_aregs[1] = Data::F(asm_Renamed::s_functor, { var1->Deref(), var2, var3 });
		local_aregs[2] = Data::F(asm_Renamed::s_opcode, { var2->Deref(), var4, Data::F(asm_Renamed::s_smallerorequal, asm_Renamed::posint91, var4->Deref(), Data::F(asm_Renamed::s_smallerorequal, { var4->Deref(), asm_Renamed::posint115, continuation })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}
}
