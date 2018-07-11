#ifndef ASM
#define ASM

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class asm_Renamed {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s7;
	static Const* const  s8;
	static Const* const  s9;
	static Const* const  s10;
	static Const* const  s11;
	static Const* const  s12;
	static Const* const  s13;
	static Const* const  s14;
	static Const* const  s15;
	static Const* const  s16;
	static Const* const  s17;
	static Const* const  s18;
	static Const* const  s19;
	static Const* const  s20;
	static Const* const  s21;
	static Const* const  s22;
	static Const* const  s23;
	static Const* const  s24;
	static Const* const  s25;
	static Const* const  s26;
	static Const* const  s_add;
	static Const* const  s_add1_y;
	static Const* const  s_allocate_flat;
	static Const* const  s_allocate_nondet;
	static Const* const  s_allocate_nonflat;
	static Const* const  s_allocate_susp;
	static Const* const  s_and;
	static Const* const  s_arg;
	static Const* const  s_arg0;
	static Const* const  s_arglabel;
	static Const* const  s_asm;
	static Const* const  s_asm0;
	static Const* const  s_asm_bp;
	static Const* const  s_asm_getaslist;
	static Const* const  s_asm_getaslist1;
	static Const* const  s_asm_hash_value;
	static Const* const  s_asm_index;
	static Const* const  s_asm_index_inst;
	static Const* const  s_asm_index_pass1;
	static Const* const  s_asm_lookup_ctab;
	static Const* const  s_asm_lookup_ctab1;
	static Const* const  s_asm_lookup_ltab;
	static Const* const  s_asm_lookup_ltab1;
	static Const* const  s_asm_magic;
	static Const* const  s_asm_mark_eot;
	static Const* const  s_asm_merge;
	static Const* const  s_asm_pass1;
	static Const* const  s_asm_pass11;
	static Const* const  s_asm_pass12;
	static Const* const  s_asm_pass12_call;
	static Const* const  s_asm_pass1_bp;
	static Const* const  s_asm_pass2;
	static Const* const  s_asm_pass2_inst;
	static Const* const  s_asm_pass2_inst_op;
	static Const* const  s_asm_pass2a;
	static Const* const  s_asm_proc_index;
	static Const* const  s_asm_putnum;
	static Const* const  s_asm_rearange_csym;
	static Const* const  s_asm_symbol;
	static Const* const  s_asmpass1_fillin;
	static Const* const  s_asmpass1_fillin_bp;
	static Const* const  s_asmpass1_setundef;
	static Const* const  s_b_ASPN2_cc;
	static Const* const  s_b_ASPN3_ccc;
	static Const* const  s_b_ASPN4_cccc;
	static Const* const  s_b_ASPN_c;
	static Const* const  s_b_GET_LENGTH_cf;
	static Const* const  s_b_GET_SYM_TYPE_ccf;
	static Const* const  s_builtin0;
	static Const* const  s_builtin1;
	static Const* const  s_builtin2;
	static Const* const  s_builtin3;
	static Const* const  s_builtin4;
	static Const* const  s_c;
	static Const* const  s_call;
	static Const* const  s_call_d;
	static Const* const  s_callv;
	static Const* const  s_cmp_error;
	static Const* const  s_commit;
	static Const* const  s_complement;
	static Const* const  s_csym;
	static Const* const  s_cut_fail;
	static Const* const  s_cut_return;
	static Const* const  s_d;
	static Const* const  s_delay;
	static Const* const  s_determinate;
	static Const* const  s_div;
	static Const* const  s_djmp;
	static Const* const  s_domain_set_false_yx;
	static Const* const  s_domain_set_false_yy;
	static Const* const  s_end_delay;
	static Const* const  s_end_of_file;
	static Const* const  s_endfile;
	static Const* const  s101;
	static Const* const  s_error_double_define;
	static Const* const  s_execute;
	static Const* const  s_executev;
	static Const* const  s_f;
	static Const* const  s_fail;
	static Const* const  s_fail0;
	static Const* const  s_flat_to_nondet;
	static Const* const  s_fork;
	static Const* const  s_fork_unicut_atom_y;
	static Const* const  s_fork_unicut_int_y;
	static Const* const  s_fork_unicut_list_y;
	static Const* const  s_fork_unicut_nil_y;
	static Const* const  s_fork_unicut_struct_y;
	static Const* const  s_fork_unicut_ux_uy;
	static Const* const  s_fork_unicut_uy_uy;
	static Const* const  s_fork_unify_atom_y;
	static Const* const  s_fork_unify_int_y;
	static Const* const  s_fork_unify_list_y;
	static Const* const  s_fork_unify_nil_y;
	static Const* const  s_fork_unify_struct_y;
	static Const* const  s_fork_unify_ux_uy;
	static Const* const  s_fork_unify_uy_uy;
	static Const* const  s_func_arity;
	static Const* const  s_functor;
	static Const* const  s_fx;
	static Const* const  s_get_ar_cps;
	static Const* const  s_getbreg;
	static Const* const  s_gethtreg;
	static Const* const  s_getpbreg;
	static Const* const  s_global_create;
	static Const* const  s_global_del;
	static Const* const  s_global_get;
	static Const* const  s_global_set;
	static Const* const  s_halt;
	static Const* const  s_hash_jmpn_atom;
	static Const* const  s_hash_jmpn_int;
	static Const* const  s_hash_jmpn_list;
	static Const* const  s_hash_jmpn_nil;
	static Const* const  s_hash_jmpn_struct;
	static Const* const  s_hash_jmpn_struct_x;
	static Const* const  s_hash_jmpn_struct_xx;
	static Const* const  s_hash_jmpn_struct_xy;
	static Const* const  s_hash_jmpn_struct_y;
	static Const* const  s_hash_jmpn_struct_yx;
	static Const* const  s_hash_jmpn_struct_yy;
	static Const* const  s_hash_x;
	static Const* const  s_hash_y;
	static Const* const  s_i;
	static Const* const  s_idiv;
	static Const* const  s_integer;
	static Const* const  s_is;
	static Const* const  s153;
	static Const* const  s_is_unify_arg_inst;
	static Const* const  s_isglobal;
	static Const* const  s_jmp;
	static Const* const  s_jmp_eql;
	static Const* const  s_jmp_eql_yy;
	static Const* const  s_jmp_id;
	static Const* const  s_jmp_susp;
	static Const* const  s_jmp_var_x;
	static Const* const  s_jmp_var_y;
	static Const* const  s_jmpn_atom_x;
	static Const* const  s_jmpn_atom_y;
	static Const* const  s_jmpn_atomic_x;
	static Const* const  s_jmpn_atomic_y;
	static Const* const  s_jmpn_det;
	static Const* const  s_jmpn_det_get_ar_cps;
	static Const* const  s_jmpn_dvar_y;
	static Const* const  s_jmpn_eq_atom_x;
	static Const* const  s_jmpn_eq_atom_y;
	static Const* const  s_jmpn_eq_int_x;
	static Const* const  s_jmpn_eq_int_y;
	static Const* const  s_jmpn_eq_struct_x;
	static Const* const  s_jmpn_eq_struct_y;
	static Const* const  s_jmpn_eql;
	static Const* const  s_jmpn_float_x;
	static Const* const  s_jmpn_float_y;
	static Const* const  s_jmpn_ge;
	static Const* const  s_jmpn_ge_yy;
	static Const* const  s_jmpn_gt;
	static Const* const  s_jmpn_gt_yy;
	static Const* const  s_jmpn_id;
	static Const* const  s_jmpn_int_x;
	static Const* const  s_jmpn_int_y;
	static Const* const  s_jmpn_nil_x;
	static Const* const  s_jmpn_nil_y;
	static Const* const  s_jmpn_num_x;
	static Const* const  s_jmpn_num_y;
	static Const* const  s_jmpn_var_x;
	static Const* const  s_jmpn_var_y;
	static Const* const  s_lab;
	static Const* const  s_lab_member1;
	static Const* const  s_label;
	static Const* const  s_length;
	static Const* const  s_lshiftl;
	static Const* const  s_lshiftr;
	static Const* const  s_lsym;
	static Const* const  s_mod;
	static Const* const  s_mode;
	static Const* const  s_move_ar_cps;
	static Const* const  s_move_atom_x;
	static Const* const  s_move_atom_y;
	static Const* const  s_move_int_x;
	static Const* const  s_move_int_y;
	static Const* const  s_move_list_x;
	static Const* const  s_move_list_y;
	static Const* const  s_move_nil_x;
	static Const* const  s_move_nil_y;
	static Const* const  s_move_struct_x;
	static Const* const  s_move_struct_y;
	static Const* const  s_move_vx;
	static Const* const  s_move_vy;
	static Const* const  s_move_x_ux;
	static Const* const  s_move_x_uy;
	static Const* const  s_move_x_wy;
	static Const* const  s_move_y_ux;
	static Const* const  s_move_y_uy;
	static Const* const  s_move_y_wy;
	static Const* const  s_move_yw_yy;
	static Const* const  s_move_yy_yw;
	static Const* const  s_move_yy_yy;
	static Const* const  s_move_yy_yy_yy;
	static Const* const  s_mul;
	static Const* const  s_name;
	static Const* const  s_next_sym_no;
	static Const* const  s_nl;
	static Const* const  s_nondet;
	static Const* const  s_noop;
	static Const* const  s_on_load_asm;
	static Const* const  s_op;
	static Const* const  s_opcode;
	static Const* const  s_or;
	static Const* const  s_output_mess;
	static Const* const  s_para_atom;
	static Const* const  s_para_int;
	static Const* const  s_para_list;
	static Const* const  s_para_nil;
	static Const* const  s_para_struct;
	static Const* const  s_para_ux;
	static Const* const  s_para_ux_ux;
	static Const* const  s_para_ux_ux_ux;
	static Const* const  s_para_ux_ux_uy;
	static Const* const  s_para_ux_uy;
	static Const* const  s_para_ux_uy_ux;
	static Const* const  s_para_ux_uy_uy;
	static Const* const  s_para_ux_vy;
	static Const* const  s_para_uy;
	static Const* const  s_para_uy_ux;
	static Const* const  s_para_uy_ux_ux;
	static Const* const  s_para_uy_ux_uy;
	static Const* const  s_para_uy_uy;
	static Const* const  s_para_uy_uy_ux;
	static Const* const  s_para_uy_uy_uy;
	static Const* const  s_para_uy_uy_uy_uy;
	static Const* const  s_para_uy_vy;
	static Const* const  s_para_void;
	static Const* const  s_para_void_one;
	static Const* const  s_para_vx;
	static Const* const  s_para_vy;
	static Const* const  s_para_vy_ux;
	static Const* const  s_para_vy_uy;
	static Const* const  s_para_vy_vy;
	static Const* const  s_pred;
	static Const* const  s_predefined;
	static Const* const  s_put;
	static Const* const  s_put_ar_cps;
	static Const* const  s_putbreg;
	static Const* const  s_puthtreg;
	static Const* const  s_read;
	static Const* const  s_return_a;
	static Const* const  s_return_b;
	static Const* const  s_s;
	static Const* const  s_save_b;
	static Const* const  s_save_ht_jmp;
	static Const* const  s_see;
	static Const* const  s_seen;
	static Const* const  s_setarg;
	static Const* const  s_setarg0;
	static Const* const  s_smallerorequal;
	static Const* const  s_sub;
	static Const* const  s_sub1_y;
	static Const* const  s_susp_var2_delay;
	static Const* const  s_susp_var_delay;
	static Const* const  s_susp_var_x;
	static Const* const  s_susp_var_y;
	static Const* const  s_switch_list_x;
	static Const* const  s_switch_list_y;
	static Const* const  s_switch_list_yxx;
	static Const* const  s_switch_list_yxy;
	static Const* const  s_switch_list_yyx;
	static Const* const  s_switch_list_yyy;
	static Const* const  s_sym;
	static Const* const  s_sym_member1;
	static Const* const  s_tabsize;
	static Const* const  s_tell;
	static Const* const  s_telling;
	static Const* const  s_told;
	static Const* const  s_true;
	static Const* const  s_unicut;
	static Const* const  s_unicut_atom_y;
	static Const* const  s_unicut_int_y;
	static Const* const  s_unicut_list_y;
	static Const* const  s_unicut_nil_y;
	static Const* const  s_unicut_struct_y;
	static Const* const  s_unicut_uy_uy;
	static Const* const  s_unify;
	static Const* const  s_unify0_atom_y;
	static Const* const  s_unify0_int_y;
	static Const* const  s_unify0_list_y;
	static Const* const  s_unify0_nil_y;
	static Const* const  s_unify0_struct_y;
	static Const* const  s_unify0_ux_uy;
	static Const* const  s_unify0_uy_uy;
	static Const* const  s_unify_arg_atom;
	static Const* const  s_unify_arg_iii;
	static Const* const  s_unify_arg_int;
	static Const* const  s_unify_arg_list;
	static Const* const  s_unify_arg_nil;
	static Const* const  s_unify_arg_struct;
	static Const* const  s_unify_arg_ux;
	static Const* const  s_unify_arg_ux_ux;
	static Const* const  s_unify_arg_ux_vx;
	static Const* const  s_unify_arg_ux_vy;
	static Const* const  s_unify_arg_uy;
	static Const* const  s_unify_arg_uy_uy;
	static Const* const  s_unify_arg_void;
	static Const* const  s_unify_arg_void_one;
	static Const* const  s_unify_arg_vx;
	static Const* const  s_unify_arg_vx_ux;
	static Const* const  s_unify_arg_vx_uy;
	static Const* const  s_unify_arg_vx_vx;
	static Const* const  s_unify_arg_vx_vy;
	static Const* const  s_unify_arg_vy;
	static Const* const  s_unify_arg_vy_ux;
	static Const* const  s_unify_arg_vy_uy;
	static Const* const  s_unify_arg_vy_vx;
	static Const* const  s_unify_arg_vy_vy;
	static Const* const  s_unify_arg_wy;
	static Const* const  s_unify_atom_x;
	static Const* const  s_unify_atom_y;
	static Const* const  s_unify_cons_x;
	static Const* const  s_unify_cons_y;
	static Const* const  s_unify_int_x;
	static Const* const  s_unify_int_y;
	static Const* const  s_unify_list_x;
	static Const* const  s_unify_list_y;
	static Const* const  s_unify_nil_x;
	static Const* const  s_unify_nil_y;
	static Const* const  s_unify_struct_x;
	static Const* const  s_unify_struct_y;
	static Const* const  s_unify_ux_ux;
	static Const* const  s_unify_ux_uy;
	static Const* const  s_unify_uy_uy;
	static Const* const  s_user;
	static Const* const  s_var;
	static Const* const  s_vx;
	static Const* const  s_vy;
	static Const* const  s_warning;
	static Const* const  s_write;
	static Const* const  s_writename;
	static Const* const  s_x;
	static Const* const  s_x_or_y;
	static Const* const  s_xfx;
	static Const* const  s_y;
	static Int* const  negint2;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Int* const  posint5;
	static Int* const  posint6;
	static Int* const  posint7;
	static Int* const  posint8;
	static Int* const  posint9;
	static Int* const  posint10;
	static Int* const  posint11;
	static Int* const  posint12;
	static Int* const  posint13;
	static Int* const  posint14;
	static Int* const  posint15;
	static Int* const  posint16;
	static Int* const  posint17;
	static Int* const  posint18;
	static Int* const  posint19;
	static Int* const  posint20;
	static Int* const  posint21;
	static Int* const  posint22;
	static Int* const  posint23;
	static Int* const  posint24;
	static Int* const  posint25;
	static Int* const  posint26;
	static Int* const  posint27;
	static Int* const  posint28;
	static Int* const  posint29;
	static Int* const  posint30;
	static Int* const  posint31;
	static Int* const  posint32;
	static Int* const  posint33;
	static Int* const  posint34;
	static Int* const  posint35;
	static Int* const  posint36;
	static Int* const  posint37;
	static Int* const  posint38;
	static Int* const  posint39;
	static Int* const  posint40;
	static Int* const  posint41;
	static Int* const  posint42;
	static Int* const  posint43;
	static Int* const  posint44;
	static Int* const  posint45;
	static Int* const  posint46;
	static Int* const  posint47;
	static Int* const  posint48;
	static Int* const  posint49;
	static Int* const  posint50;
	static Int* const  posint51;
	static Int* const  posint52;
	static Int* const  posint53;
	static Int* const  posint54;
	static Int* const  posint55;
	static Int* const  posint56;
	static Int* const  posint57;
	static Int* const  posint58;
	static Int* const  posint59;
	static Int* const  posint60;
	static Int* const  posint61;
	static Int* const  posint62;
	static Int* const  posint63;
	static Int* const  posint64;
	static Int* const  posint65;
	static Int* const  posint66;
	static Int* const  posint67;
	static Int* const  posint68;
	static Int* const  posint69;
	static Int* const  posint70;
	static Int* const  posint71;
	static Int* const  posint72;
	static Int* const  posint73;
	static Int* const  posint74;
	static Int* const  posint75;
	static Int* const  posint76;
	static Int* const  posint77;
	static Int* const  posint78;
	static Int* const  posint79;
	static Int* const  posint80;
	static Int* const  posint81;
	static Int* const  posint82;
	static Int* const  posint83;
	static Int* const  posint84;
	static Int* const  posint85;
	static Int* const  posint86;
	static Int* const  posint87;
	static Int* const  posint88;
	static Int* const  posint89;
	static Int* const  posint90;
	static Int* const  posint91;
	static Int* const  posint92;
	static Int* const  posint93;
	static Int* const  posint94;
	static Int* const  posint95;
	static Int* const  posint96;
	static Int* const  posint97;
	static Int* const  posint98;
	static Int* const  posint99;
	static Int* const  posint100;
	static Int* const  posint101;
	static Int* const  posint102;
	static Int* const  posint103;
	static Int* const  posint104;
	static Int* const  posint105;
	static Int* const  posint106;
	static Int* const  posint107;
	static Int* const  posint108;
	static Int* const  posint109;
	static Int* const  posint110;
	static Int* const  posint111;
	static Int* const  posint112;
	static Int* const  posint113;
	static Int* const  posint114;
	static Int* const  posint115;
	static Int* const  posint116;
	static Int* const  posint117;
	static Int* const  posint118;
	static Int* const  posint119;
	static Int* const  posint120;
	static Int* const  posint121;
	static Int* const  posint122;
	static Int* const  posint123;
	static Int* const  posint124;
	static Int* const  posint125;
	static Int* const  posint126;
	static Int* const  posint127;
	static Int* const  posint128;
	static Int* const  posint129;
	static Int* const  posint130;
	static Int* const  posint131;
	static Int* const  posint132;
	static Int* const  posint133;
	static Int* const  posint134;
	static Int* const  posint135;
	static Int* const  posint136;
	static Int* const  posint137;
	static Int* const  posint138;
	static Int* const  posint139;
	static Int* const  posint140;
	static Int* const  posint141;
	static Int* const  posint142;
	static Int* const  posint143;
	static Int* const  posint144;
	static Int* const  posint145;
	static Int* const  posint146;
	static Int* const  posint147;
	static Int* const  posint148;
	static Int* const  posint149;
	static Int* const  posint150;
	static Int* const  posint151;
	static Int* const  posint152;
	static Int* const  posint153;
	static Int* const  posint154;
	static Int* const  posint155;
	static Int* const  posint156;
	static Int* const  posint157;
	static Int* const  posint158;
	static Int* const  posint159;
	static Int* const  posint160;
	static Int* const  posint161;
	static Int* const  posint162;
	static Int* const  posint163;
	static Int* const  posint164;
	static Int* const  posint165;
	static Int* const  posint166;
	static Int* const  posint167;
	static Int* const  posint168;
	static Int* const  posint169;
	static Int* const  posint170;
	static Int* const  posint171;
	static Int* const  posint172;
	static Int* const  posint173;
	static Int* const  posint174;
	static Int* const  posint175;
	static Int* const  posint176;
	static Int* const  posint177;
	static Int* const  posint178;
	static Int* const  posint179;
	static Int* const  posint180;
	static Int* const  posint181;
	static Int* const  posint182;
	static Int* const  posint183;
	static Int* const  posint184;
	static Int* const  posint185;
	static Int* const  posint186;
	static Int* const  posint187;
	static Int* const  posint188;
	static Int* const  posint189;
	static Int* const  posint190;
	static Int* const  posint191;
	static Int* const  posint192;
	static Int* const  posint193;
	static Int* const  posint194;
	static Int* const  posint195;
	static Int* const  posint196;
	static Int* const  posint197;
	static Int* const  posint198;
	static Int* const  posint199;
	static Int* const  posint200;
	static Int* const  posint201;
	static Int* const  posint202;
	static Int* const  posint203;
	static Int* const  posint204;
	static Int* const  posint205;
	static Int* const  posint206;
	static Int* const  posint207;
	static Int* const  posint208;
	static Int* const  posint209;
	static Int* const  posint210;
	static Int* const  posint211;
	static Int* const  posint212;
	static Int* const  posint213;
	static Int* const  posint214;
	static Int* const  posint215;
	static Int* const  posint216;
	static Int* const  posint217;
	static Int* const  posint218;
	static Int* const  posint219;
	static Int* const  posint220;
	static Int* const  posint221;
	static Int* const  posint222;
	static Int* const  posint223;
	static Int* const  posint224;
	static Int* const  posint225;
	static Int* const  posint226;
	static Int* const  posint227;
	static Int* const  posint228;
	static Int* const  posint229;
	static Int* const  posint230;
	static Int* const  posint231;
	static Int* const  posint232;
	static Int* const  posint233;
	static Int* const  posint234;
	static Int* const  posint255;
	static Int* const  posint300;
	static Int* const  posint950;
	static Int* const  posint1000;
	static Operation* const  reg_on_load_asm_0;
	static Operation* const  reg_asm_bp_2;
	static Operation* const  reg_asm_2;
	static Operation* const  reg_asm_getaslist_1;
	static Operation* const  reg_asm_getaslist1_2;
	static Operation* const  reg_asm_1;
	static Operation* const  reg_asm0_5;
	static Operation* const  reg_asm_pass1_6;
	static Operation* const  reg_asm_pass1_bp_6;
	static Operation* const  reg_asm_pass11_5;
	static Operation* const  reg_error_double_define_1;
	static Operation* const  reg_asm_index_pass1_2;
	static Operation* const  reg_asmpass1_fillin_3;
	static Operation* const  reg_asmpass1_fillin_2;
	static Operation* const  reg_asmpass1_fillin_bp_3;
	static Operation* const  reg_asmpass1_fillin_bp_2;
	static Operation* const  reg_asmpass1_setundef_4;
	static Operation* const  reg_asmpass1_setundef_3;
	static Operation* const  reg_asm_pass12_3;
	static Operation* const  reg_asm_pass12_call_3;
	static Operation* const  reg_asm_pass2_4;
	static Operation* const  reg_asm_index_3;
	static Operation* const  reg_asm_proc_index_3;
	static Operation* const  reg_asm_pass2a_3;
	static Operation* const  reg_asm_pass2_inst_3;
	static Operation* const  reg_asm_pass2_inst_op_3;
	static Operation* const  reg_asm_magic_1;
	static Operation* const  reg_asm_index_inst_2;
	static Operation* const  reg_asm_symbol_1;
	static Operation* const  reg_asm_putnum_2;
	static Operation* const  reg_asm_mark_eot_0;
	static Operation* const  reg_sym_member1_2;
	static Operation* const  reg_sym_member1_4;
	static Operation* const  reg_lab_member1_2;
	static Operation* const  reg_lab_member1_3;
	static Operation* const  reg_asm_lookup_ltab_3;
	static Operation* const  reg_asm_lookup_ltab1_3;
	static Operation* const  reg_asm_lookup_ctab_4;
	static Operation* const  reg_asm_lookup_ctab1_4;
	static Operation* const  reg_asm_rearange_csym_4;
	static Operation* const  reg_asm_merge_3;
	static Operation* const  reg_next_sym_no_1;
	static Operation* const  reg_x_or_y_2;
	static Operation* const  reg_opcode_2;
	static Operation* const  reg_output_mess_1;
	static Operation* const  reg_is_unify_arg_inst_1;
public:
	class pred_on_load_asm_0 : public Code {

	/*
	
	on_load_asm(_634):-write(op(300,xfx,<=),_634).
	on_load_asm(_666):-write(op(1000,fx,mode),_666).
	on_load_asm(_698):-write(op(950,xfx,:),_698).
	on_load_asm(_774):-write(determinate([cmp_error/1,name/2,length/2,asm_hash_value/2]),_774).
	on_load_asm(_3638):-write((mode asm_pass12(c,d,f)),_3638).
	on_load_asm(_25942):-write((mode opcode(c,f)),_25942).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__1(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__2(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__3(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__4(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__5(Prolog* mach);
	static Operation* exec_pred_on_load_asm_0__6(Prolog* mach);
	};


public:
	class pred_asm_bp_2 : public Code {

	/*
	
	asm_bp(_792,_794,_826):- :(true,global_set('$asm_bp',0,1),see(_792,asm_getaslist(_804,seen(tell(_794,asm0(_804,_806,_808,0,_810,functor(_812,csym,255,functor(_814,lsym,255,global_create('$sym_no',0,0,asm_pass1_bp(_806,_808,_812,_814,_816,_818,asm_magic(3,asm_putnum(_818,4,asm_putnum(_816,4,asm_putnum(_810,4,asm_pass2(_806,_808,_812,_814,asm_mark_eot(global_del('$asm_bp',0,told(_826)))))))))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_bp_2__1(Prolog* mach);
	};


public:
	class pred_asm_2 : public Code {

	/*
	
	asm(_990,_992,_1020):- :(true,see(_990),asm_getaslist(_998,seen(tell(_992,asm0(_998,_1000,_1002,0,_1004,functor(_1006,csym,255,functor(_1008,lsym,255,global_create('$sym_no',0,0,asm_pass1(_1000,_1002,_1006,_1008,_1010,_1012,asm_magic(3,asm_putnum(_1012,4,asm_putnum(_1010,4,asm_putnum(_1004,4,asm_pass2(_1000,_1002,_1006,_1008,asm_mark_eot(told(_1020)))))))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_2__1(Prolog* mach);
	};


public:
	class pred_asm_getaslist_1 : public Code {

	/*
	
	asm_getaslist(_1170,_1182):- :(true,read(_1174),asm_getaslist1(_1174,_1170,_1182)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_getaslist_1__1(Prolog* mach);
	};


public:
	class pred_asm_getaslist1_2 : public Code {

	/*
	
	asm_getaslist1(end_of_file,_1212,_1226):- :(true,_1212:=[],_1226).
	asm_getaslist1(_1250,_1252,_1274):- :(true,_1252:=[_1250|_1258],read(_1266,asm_getaslist1(_1266,_1258,_1274))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_getaslist1_2__1(Prolog* mach);
	static Operation* exec_pred_asm_getaslist1_2__2(Prolog* mach);
	};


public:
	class pred_asm_1 : public Code {

	/*
	
	asm(_1312,_1340):- :(true,asm0(_1312,_1318,_1320,0,_1324),functor(_1326,csym,255,functor(_1328,lsym,255,global_create('$sym_no',0,0,asm_pass1(_1318,_1320,_1326,_1328,_1330,_1332,asm_magic(3,asm_putnum(_1332,4,asm_putnum(_1330,4,asm_putnum(_1324,4,asm_pass2(_1318,_1320,_1326,_1328,asm_mark_eot(_1340))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_1__1(Prolog* mach);
	};


public:
	class pred_asm0_5 : public Code {

	/*
	
	asm0([],_1454,_1456,_1458,_1460,_1474):- :(true,_1454:=[],:=(_1456,[],:=(_1460,_1458,_1474))).
	asm0([_1522|_1524],_1526,_1528,_1530,_1532,_1564):- :(asm_index_inst(_1522,_1538),_1548 is _1530+_1538,unify([_1522|_1556],_1528,asm0(_1524,_1526,_1556,_1548,_1532,_1564))).
	asm0([_1618|_1620],_1622,_1624,_1626,_1628,_1648):- :(true,_1622:=[_1618|_1634],asm0(_1620,_1634,_1624,_1626,_1628,_1648)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm0_5__1(Prolog* mach);
	static Operation* exec_pred_asm0_5__2(Prolog* mach);
	static Operation* exec_pred_asm0_5__3(Prolog* mach);
	};


public:
	class pred_asm_pass1_6 : public Code {

	/*
	
	asm_pass1(_1692,_1694,_1696,_1698,_1700,_1702,_1722):- :(true,asm_pass11(_1692,_1698,_1696,0,_1700),asm_index_pass1(_1694,_1696,asmpass1_fillin(_1698,255,_1696,asmpass1_setundef(_1696,255,0,_1702,_1722)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass1_6__1(Prolog* mach);
	};


public:
	class pred_asm_pass1_bp_6 : public Code {

	/*
	
	asm_pass1_bp(_1784,_1786,_1788,_1790,_1792,_1794,_1814):- :(true,asm_pass11(_1784,_1790,_1788,0,_1792),asm_index_pass1(_1786,_1788,asmpass1_fillin_bp(_1790,255,_1788,asmpass1_setundef(_1788,255,0,_1794,_1814)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass1_bp_6__1(Prolog* mach);
	};


public:
	class pred_asm_pass11_5 : public Code {

	/*
	
	asm_pass11([],_1876,_1878,_1880,_1882,_1896):- :(true,_1882:=_1880,_1896).
	asm_pass11([_1928|_1930],_1932,_1934,_1936,_1938,_1974):- <=(label(_1942),_1928,:(lab_member1(lab(_1942,_1936),_1932),asm_pass11(_1930,_1932,_1934,_1936,_1938),_1974)).
	asm_pass11([_2014|_2016],_2018,_2020,_2022,_2024,_2046):- :(label(_2028)<=_2014,error_double_define(_2028),asm_pass11(_2016,_2018,_2020,_2022,_2024,_2046)).
	asm_pass11([_2092|_2094],_2096,_2098,_2100,_2102,_2126):- :(true,asm_pass12(_2092,_2098,_2110),is(_2118,_2100+_2110,asm_pass11(_2094,_2096,_2098,_2118,_2102,_2126))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass11_5__1(Prolog* mach);
	static Operation* exec_pred_asm_pass11_5__2(Prolog* mach);
	static Operation* exec_pred_asm_pass11_5__3(Prolog* mach);
	static Operation* exec_pred_asm_pass11_5__4(Prolog* mach);
	};


public:
	class pred_error_double_define_1 : public Code {

	/*
	
	error_double_define((_2186,_2180,_2182),_2196):- :(true,true,_2196).
	error_double_define((_2220,_2222),_2258):- :(true,cmp_error(['The predicate ',_2220/_2222,' is doubly defined']),_2258).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_error_double_define_1__1(Prolog* mach);
	static Operation* exec_pred_error_double_define_1__2(Prolog* mach);
	};


public:
	class pred_asm_index_pass1_2 : public Code {

	/*
	
	asm_index_pass1([],_2280,_2288):- :(true,true,_2288).
	asm_index_pass1([pred(_2314,_2316,_2318,_2320)|_2326],_2328,_2342):- :(true,asm_index_pass1(_2326,_2328),_2342).
	asm_index_pass1([arglabel(_2368,_2370,_2372)|_2378],_2380,_2410):- :(_2368==c,sym_member1(sym(_2370,0,_2394,_2396),_2380),asm_index_pass1(_2378,_2380,_2410)).
	asm_index_pass1([arglabel(_2450,(_2444,_2446),_2454)|_2460],_2462,_2492):- :(_2450==s,sym_member1(sym(_2444,_2446,_2476,_2478),_2462),asm_index_pass1(_2460,_2462,_2492)).
	asm_index_pass1([arglabel(_2526,_2528,_2530)|_2536],_2538,_2552):- :(true,asm_index_pass1(_2536,_2538),_2552).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_index_pass1_2__1(Prolog* mach);
	static Operation* exec_pred_asm_index_pass1_2__2(Prolog* mach);
	static Operation* exec_pred_asm_index_pass1_2__3(Prolog* mach);
	static Operation* exec_pred_asm_index_pass1_2__4(Prolog* mach);
	static Operation* exec_pred_asm_index_pass1_2__5(Prolog* mach);
	};


public:
	class pred_asmpass1_fillin_3 : public Code {

	/*
	
	asmpass1_fillin(_2576,_2578,_2580,_2594):- :(_2578<1,true,_2594).
	asmpass1_fillin(_2620,_2622,_2624,_2648):- :(true,arg(_2622,_2620,_2632),asmpass1_fillin(_2632,_2624,is(_2640,_2622-1,asmpass1_fillin(_2620,_2640,_2624,_2648)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_3__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_3__2(Prolog* mach);
	};


public:
	class pred_asmpass1_fillin_2 : public Code {

	/*
	
	asmpass1_fillin(_2700,_2702,_2714):- :(var(_2700),true,_2714).
	asmpass1_fillin([lab((_2746,_2740,_2742),_2754)|_2760],_2762,_2776):- :(true,asmpass1_fillin(_2760,_2762),_2776).
	asmpass1_fillin([lab((_2802,_2804),_2810)|_2816],_2818,_2842):- :(true,sym_member1(sym(_2802,_2804,_2810,_2828),_2818),asmpass1_fillin(_2816,_2818,_2842)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_2__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_2__2(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_2__3(Prolog* mach);
	};


public:
	class pred_asmpass1_fillin_bp_3 : public Code {

	/*
	
	asmpass1_fillin_bp(_2874,_2876,_2878,_2892):- :(_2876<1,true,_2892).
	asmpass1_fillin_bp(_2918,_2920,_2922,_2946):- :(true,arg(_2920,_2918,_2930),asmpass1_fillin_bp(_2930,_2922,is(_2938,_2920-1,asmpass1_fillin_bp(_2918,_2938,_2922,_2946)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_3__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_3__2(Prolog* mach);
	};


public:
	class pred_asmpass1_fillin_bp_2 : public Code {

	/*
	
	asmpass1_fillin_bp(_2998,_3000,_3012):- :(var(_2998),true,_3012).
	asmpass1_fillin_bp([lab((_3044,_3038,_3040),_3052)|_3058],_3060,_3074):- :(true,asmpass1_fillin_bp(_3058,_3060),_3074).
	asmpass1_fillin_bp([lab((_3100,_3102),_3108)|_3114],_3116,_3146):- :(predefined(_3100,_3102),sym_member1(sym(_3100,_3102,_3108,_3132),_3116),asmpass1_fillin_bp(_3114,_3116,_3146)).
	asmpass1_fillin_bp([lab((_3180,_3182),_3188)|_3194],_3196,_3210):- :(true,asmpass1_fillin_bp(_3194,_3196),_3210).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_2__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_2__2(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_2__3(Prolog* mach);
	static Operation* exec_pred_asmpass1_fillin_bp_2__4(Prolog* mach);
	};


public:
	class pred_asmpass1_setundef_4 : public Code {

	/*
	
	asmpass1_setundef(_3234,_3236,_3238,_3240,_3260):- :(_3236<1,_3240=_3238,_3260).
	asmpass1_setundef(_3288,_3290,_3292,_3294,_3320):- :(true,arg(_3290,_3288,_3302),asmpass1_setundef(_3302,_3292,_3304,is(_3312,_3290-1,asmpass1_setundef(_3288,_3312,_3304,_3294,_3320)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_setundef_4__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_setundef_4__2(Prolog* mach);
	};


public:
	class pred_asmpass1_setundef_3 : public Code {

	/*
	
	asmpass1_setundef(_3378,_3380,_3382,_3400):- :(var(_3378),_3382=_3380,_3400).
	asmpass1_setundef([sym(_3428,_3430,_3432,_3434)|_3440],_3442,_3444,_3478):- :(var(_3432),_3432:= -2,b_GET_LENGTH_cf(_3428,_3456,is(_3470,_3442+_3456+6,asmpass1_setundef(_3440,_3470,_3444,_3478)))).
	asmpass1_setundef([sym(_3532,_3534,_3536,_3538)|_3544],_3546,_3548,_3576):- :(true,b_GET_LENGTH_cf(_3532,_3554),is(_3568,_3546+_3554+6,asmpass1_setundef(_3544,_3568,_3548,_3576))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asmpass1_setundef_3__1(Prolog* mach);
	static Operation* exec_pred_asmpass1_setundef_3__2(Prolog* mach);
	static Operation* exec_pred_asmpass1_setundef_3__3(Prolog* mach);
	};


public:
	class pred_asm_pass12_3 : public Code {

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

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__1(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__2(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__3(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__4(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__5(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__6(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__7(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__8(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__9(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__10(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__11(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__12(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__13(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__14(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__15(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__16(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__17(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__18(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__19(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__20(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__21(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__22(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__23(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__24(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__25(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__26(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__27(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__28(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__29(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__30(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__31(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__32(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__33(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__34(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__35(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__36(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__37(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__38(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__39(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__40(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__41(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__42(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__43(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__44(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__45(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__46(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__47(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__48(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__49(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__50(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__51(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__52(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__53(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__54(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__55(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__56(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__57(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__58(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__59(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__60(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__61(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__62(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__63(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__64(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__65(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__66(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__67(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__68(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__69(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__70(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__71(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__72(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__73(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__74(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__75(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__76(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__77(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__78(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__79(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__80(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__81(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__82(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__83(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__84(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__85(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__86(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__87(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__88(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__89(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__90(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__91(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__92(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__93(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__94(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__95(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__96(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__97(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__98(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__99(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__100(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__101(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__102(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__103(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__104(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__105(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__106(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__107(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__108(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__109(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__110(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__111(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__112(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__113(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__114(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__115(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__116(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__117(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__118(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__119(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__120(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__121(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__122(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__123(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__124(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__125(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__126(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__127(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__128(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__129(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__130(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__131(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__132(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__133(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__134(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__135(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__136(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__137(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__138(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__139(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__140(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__141(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__142(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__143(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__144(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__145(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__146(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__147(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__148(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__149(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__150(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__151(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__152(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__153(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__154(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__155(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__156(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__157(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__158(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__159(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__160(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__161(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__162(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__163(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__164(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__165(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__166(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__167(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__168(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__169(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__170(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__171(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__172(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__173(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__174(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__175(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__176(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__177(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__178(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__179(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__180(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__181(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__182(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__183(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__184(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__185(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__186(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__187(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__188(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__189(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__190(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__191(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__192(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__193(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__194(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__195(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__196(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__197(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__198(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__199(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__200(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__201(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__202(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__203(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__204(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__205(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__206(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__207(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__208(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__209(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__210(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__211(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__212(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__213(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__214(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__215(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__216(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__217(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__218(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__219(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__220(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__221(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__222(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__223(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__224(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__225(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__226(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__227(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__228(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__229(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__230(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__231(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__232(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__233(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__234(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__235(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__236(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__237(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__238(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__239(Prolog* mach);
	static Operation* exec_pred_asm_pass12_3__240(Prolog* mach);
	};


public:
	class pred_asm_pass12_call_3 : public Code {

	/*
	
	asm_pass12_call(_12482,_12484,_12486,_12502):-isglobal('$asm_bp',0,b_GET_SYM_TYPE_ccf(_12482,_12484,_12488,:(_12488=\=3,true,_12502))).
	asm_pass12_call(_12546,_12548,_12550,_12574):- :(true,sym_member1(sym(_12546,_12548,_12558,_12560),_12550),_12574).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass12_call_3__1(Prolog* mach);
	static Operation* exec_pred_asm_pass12_call_3__2(Prolog* mach);
	};


public:
	class pred_asm_pass2_4 : public Code {

	/*
	
	asm_pass2(_12600,_12602,_12604,_12606,_12624):- :(true,asm_rearange_csym(_12604,255,_12614,_12616),asm_symbol(_12616,asm_pass2a(_12600,_12604,_12606,asm_index(_12602,_12604,_12606,_12624)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass2_4__1(Prolog* mach);
	};


public:
	class pred_asm_index_3 : public Code {

	/*
	
	asm_index([],_12678,_12680,_12688):- :(true,true,_12688).
	asm_index([_12716|_12718],_12720,_12722,_12738):- :(true,asm_proc_index(_12716,_12720,_12722),asm_index(_12718,_12720,_12722,_12738)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_index_3__1(Prolog* mach);
	static Operation* exec_pred_asm_index_3__2(Prolog* mach);
	};


public:
	class pred_asm_proc_index_3 : public Code {

	/*
	
	asm_proc_index(pred(_12776,_12778,_12780,_12782),_12784,_12786,_12804):- :(true,x_or_y(_12778,_12792),asm_lookup_ltab(_12776,_12786,_12794,asm_lookup_ltab(_12782,_12786,_12796,b_ASPN4_cccc(_12794,_12792,_12780,_12796,_12804)))).
	asm_proc_index(arglabel(_12864,_12866,_12868),_12870,_12872,_12898):- :(_12864==c,asm_lookup_ctab(_12866,0,_12870,_12888),asm_lookup_ltab(_12868,_12872,_12890,writename(_12864,b_ASPN2_cc(_12888,_12890,_12898)))).
	asm_proc_index(arglabel(_12950,_12952,_12954),_12956,_12958,_12988):- :(_12950==s,_12952=(_12968,_12970),asm_lookup_ctab(_12968,_12970,_12956,_12978,asm_lookup_ltab(_12954,_12958,_12980,writename(_12950,b_ASPN2_cc(_12978,_12980,_12988))))).
	asm_proc_index(arglabel(_13052,_13054,_13056),_13058,_13060,_13076):- :(true,asm_lookup_ltab(_13056,_13060,_13068),writename(_13052,b_ASPN2_cc(_13054,_13068,_13076))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_proc_index_3__1(Prolog* mach);
	static Operation* exec_pred_asm_proc_index_3__2(Prolog* mach);
	static Operation* exec_pred_asm_proc_index_3__3(Prolog* mach);
	static Operation* exec_pred_asm_proc_index_3__4(Prolog* mach);
	};


public:
	class pred_asm_pass2a_3 : public Code {

	/*
	
	asm_pass2a([],_13116,_13118,_13126):- :(true,true,_13126).
	asm_pass2a([_13154|_13156],_13158,_13160,_13176):- :(true,asm_pass2_inst(_13154,_13158,_13160),asm_pass2a(_13156,_13158,_13160,_13176)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass2a_3__1(Prolog* mach);
	static Operation* exec_pred_asm_pass2a_3__2(Prolog* mach);
	};


public:
	class pred_asm_pass2_inst_3 : public Code {

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

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__1(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__2(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__3(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__4(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__5(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__6(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__7(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__8(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__9(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__10(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__11(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__12(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__13(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__14(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__15(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__16(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__17(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__18(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__19(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__20(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__21(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__22(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__23(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__24(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__25(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__26(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__27(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__28(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__29(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__30(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__31(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__32(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__33(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__34(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__35(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__36(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__37(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__38(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__39(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__40(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__41(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__42(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__43(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__44(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__45(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__46(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__47(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__48(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__49(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__50(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__51(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__52(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__53(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__54(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__55(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__56(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__57(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__58(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__59(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__60(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__61(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__62(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__63(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__64(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__65(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__66(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__67(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__68(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__69(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__70(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__71(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__72(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__73(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__74(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__75(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__76(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__77(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__78(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__79(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__80(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__81(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__82(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__83(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__84(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__85(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__86(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__87(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__88(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__89(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__90(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__91(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__92(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__93(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__94(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__95(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__96(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__97(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__98(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__99(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__100(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__101(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__102(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__103(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__104(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__105(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__106(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__107(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__108(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__109(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__110(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__111(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__112(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__113(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__114(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__115(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__116(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__117(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__118(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__119(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__120(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__121(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__122(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__123(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__124(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_3__125(Prolog* mach);
	};


public:
	class pred_asm_pass2_inst_op_3 : public Code {

	/*
	
	asm_pass2_inst_op(_23470,_23472,_23474,_23488):- :(_23472=:=_23474,true,_23488).
	asm_pass2_inst_op(_23514,_23516,_23518,_23540):- :(true,_23528 is _23516+1,arg(_23528,_23514,_23532,b_ASPN_c(_23532,asm_pass2_inst_op(_23514,_23528,_23518,_23540)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_op_3__1(Prolog* mach);
	static Operation* exec_pred_asm_pass2_inst_op_3__2(Prolog* mach);
	};


public:
	class pred_asm_magic_1 : public Code {

	/*
	
	asm_magic(_23592,_23606):- :(true,asm_putnum(17,1),asm_putnum(18,1,asm_putnum(19,1,asm_putnum(_23592,1,_23606)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_magic_1__1(Prolog* mach);
	};


public:
	class pred_asm_index_inst_2 : public Code {

	/*
	
	asm_index_inst(pred(_23654,_23656,_23658,_23660),_23662,_23676):- :(true,_23662=16,_23676).
	asm_index_inst(arglabel(i,_23704,_23706),_23708,_23722):- :(true,_23708:=9,_23722).
	asm_index_inst(arglabel(c,_23750,_23752),_23754,_23768):- :(true,_23754:=9,_23768).
	asm_index_inst(arglabel(s,_23796,_23798),_23800,_23814):- :(true,_23800:=9,_23814).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_index_inst_2__1(Prolog* mach);
	static Operation* exec_pred_asm_index_inst_2__2(Prolog* mach);
	static Operation* exec_pred_asm_index_inst_2__3(Prolog* mach);
	static Operation* exec_pred_asm_index_inst_2__4(Prolog* mach);
	};


public:
	class pred_asm_symbol_1 : public Code {

	/*
	
	asm_symbol(_23838,_23850):- :(var(_23838),true,_23850).
	asm_symbol([sym(_23874,_23876,_23878,_23880)|_23886],_23900):- :(true,b_ASPN_c(_23878),asm_putnum(_23876,1,b_GET_LENGTH_cf(_23874,_23892,asm_putnum(_23892,1,writename(_23874,asm_symbol(_23886,_23900)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_symbol_1__1(Prolog* mach);
	static Operation* exec_pred_asm_symbol_1__2(Prolog* mach);
	};


public:
	class pred_asm_putnum_2 : public Code {

	/*
	
	asm_putnum(_23958,_23960,_24002):- :(_23960>1,_23976 is _23958/\255,is(_23986,_23958>>8,is(_23994,_23960-1,asm_putnum(_23986,_23994,put(_23976,_24002))))).
	asm_putnum(_24056,_24058,_24070):- :(true,put(_24056),_24070).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_putnum_2__1(Prolog* mach);
	static Operation* exec_pred_asm_putnum_2__2(Prolog* mach);
	};


public:
	class pred_asm_mark_eot_0 : public Code {

	/*
	
	asm_mark_eot(_24106):- :(true,opcode(endfile,_24098),b_ASPN2_cc(_24098,0,_24106)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_mark_eot_0__1(Prolog* mach);
	};


public:
	class pred_sym_member1_2 : public Code {

	/*
	
	sym_member1(_24134,_24136,_24188):- :(sym(_24140,_24142,_24144,_24146)<=_24134,asm_hash_value(_24140,_24158),is(_24178,(_24158+_24142)mod 255+1,arg(_24178,_24136,_24180,sym_member1(_24140,_24142,_24134,_24180,_24188)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sym_member1_2__1(Prolog* mach);
	};


public:
	class pred_sym_member1_4 : public Code {

	/*
	
	sym_member1(_24242,_24244,_24246,_24248,_24270):- :(var(_24248),next_sym_no(_24256),arg(4,_24246,_24256,:=(_24248,[_24246|_24262],_24270))).
	sym_member1(_24318,_24320,_24332,[sym(_24318,_24320,_24322,_24324)|_24330],_24356):- :(true,_24332=sym(_24318,_24320,_24322,_24324),_24356).
	sym_member1(_24390,_24392,_24394,[_24386|_24388],_24412):- :(true,sym_member1(_24390,_24392,_24394,_24388),_24412).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sym_member1_4__1(Prolog* mach);
	static Operation* exec_pred_sym_member1_4__2(Prolog* mach);
	static Operation* exec_pred_sym_member1_4__3(Prolog* mach);
	};


public:
	class pred_lab_member1_2 : public Code {

	/*
	
	lab_member1(_24440,_24442,_24484):- :(lab(_24446,_24448)<=_24440,asm_hash_value(_24446,_24460),is(_24474,_24460 mod 255+1,arg(_24474,_24442,_24476,lab_member1(_24446,_24440,_24476,_24484)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lab_member1_2__1(Prolog* mach);
	};


public:
	class pred_lab_member1_3 : public Code {

	/*
	
	lab_member1(_24536,_24538,_24540,_24564):- :(var(_24540),_24540:=[_24538|_24550],_24564).
	lab_member1(_24592,_24602,[lab(_24592,_24594)|_24600],_24622):- :(true,_24602=lab(_24592,_24594),_24622).
	lab_member1(_24654,_24656,[_24650|_24652],_24672):- :(true,lab_member1(_24654,_24656,_24652),_24672).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lab_member1_3__1(Prolog* mach);
	static Operation* exec_pred_lab_member1_3__2(Prolog* mach);
	static Operation* exec_pred_lab_member1_3__3(Prolog* mach);
	};


public:
	class pred_asm_lookup_ltab_3 : public Code {

	/*
	
	asm_lookup_ltab(_24698,_24700,_24702,_24732):- :(true,asm_hash_value(_24698,_24708),is(_24722,_24708 mod 255+1,arg(_24722,_24700,_24724,asm_lookup_ltab1(_24698,_24724,_24702,_24732)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ltab_3__1(Prolog* mach);
	};


public:
	class pred_asm_lookup_ltab1_3 : public Code {

	/*
	
	asm_lookup_ltab1(_24786,_24788,_24790,_24802):- :(var(_24788),fail,_24802).
	asm_lookup_ltab1(_24830,[lab(_24830,_24832)|_24838],_24840,_24854):- :(true,_24840=_24832,_24854).
	asm_lookup_ltab1(_24886,[_24882|_24884],_24888,_24904):- :(true,asm_lookup_ltab1(_24886,_24884,_24888),_24904).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ltab1_3__1(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ltab1_3__2(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ltab1_3__3(Prolog* mach);
	};


public:
	class pred_asm_lookup_ctab_4 : public Code {

	/*
	
	asm_lookup_ctab(_24930,_24932,_24934,_24936,_24972):- :(true,asm_hash_value(_24930,_24942),is(_24962,(_24942+_24932)mod 255+1,arg(_24962,_24934,_24964,asm_lookup_ctab1(_24930,_24932,_24964,_24936,_24972)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ctab_4__1(Prolog* mach);
	};


public:
	class pred_asm_lookup_ctab1_4 : public Code {

	/*
	
	asm_lookup_ctab1(_25032,_25034,[sym(_25032,_25034,_25036,_25038)|_25044],_25046,_25060):- :(true,_25046=_25038,_25060).
	asm_lookup_ctab1(_25094,_25096,[_25090|_25092],_25098,_25116):- :(true,asm_lookup_ctab1(_25094,_25096,_25092,_25098),_25116).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ctab1_4__1(Prolog* mach);
	static Operation* exec_pred_asm_lookup_ctab1_4__2(Prolog* mach);
	};


public:
	class pred_asm_rearange_csym_4 : public Code {

	/*
	
	asm_rearange_csym(_25144,_25146,_25148,_25150,_25170):- :(_25146<1,_25150=_25148,_25170).
	asm_rearange_csym(_25198,_25200,_25202,_25204,_25230):- :(true,arg(_25200,_25198,_25212),asm_merge(_25212,_25202,_25214,is(_25222,_25200-1,asm_rearange_csym(_25198,_25222,_25214,_25204,_25230)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_rearange_csym_4__1(Prolog* mach);
	static Operation* exec_pred_asm_rearange_csym_4__2(Prolog* mach);
	};


public:
	class pred_asm_merge_3 : public Code {

	/*
	
	asm_merge(_25288,_25290,_25292,_25310):- :(var(_25288),_25292=_25290,_25310).
	asm_merge(_25336,_25338,_25340,_25358):- :(var(_25338),_25340=_25336,_25358).
	asm_merge(_25384,_25386,_25388,_25446):- <=([_25392|_25394],_25384,<=([_25398|_25400],_25386,<=(sym(_25404,_25406,_25408,_25410),_25392,<=(sym(_25414,_25416,_25418,_25420),_25398,:(_25410<_25420,_25388:=[_25392|_25432],asm_merge(_25394,_25386,_25432,_25446)))))).
	asm_merge(_25514,_25516,_25518,_25556):- <=([_25522|_25524],_25514,:([_25528|_25530]<=_25516,_25518:=[_25528|_25542],asm_merge(_25514,_25530,_25542,_25556))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asm_merge_3__1(Prolog* mach);
	static Operation* exec_pred_asm_merge_3__2(Prolog* mach);
	static Operation* exec_pred_asm_merge_3__3(Prolog* mach);
	static Operation* exec_pred_asm_merge_3__4(Prolog* mach);
	};


public:
	class pred_next_sym_no_1 : public Code {

	/*
	
	next_sym_no(_25600,_25624):- :(true,global_get('$sym_no',0,_25600),is(_25616,_25600+1,global_set('$sym_no',0,_25616,_25624))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_next_sym_no_1__1(Prolog* mach);
	};


public:
	class pred_x_or_y_2 : public Code {

	/*
	
	x_or_y(vx(_25666),_25668,_25688):- :(true,_25668 is _25666<<3,_25688).
	x_or_y(x(_25714),_25716,_25742):- :(true,_25716 is _25714<<3+1,_25742).
	x_or_y(vy(_25768),_25770,_25796):- :(true,_25770 is _25768<<3\/3,_25796).
	x_or_y(y(_25822),_25824,_25850):- :(true,_25824 is _25822<<3\/7,_25850).
	x_or_y(_25874,_25876,_25902):- :(true,_25876 is _25874<<2\/2,_25902).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_x_or_y_2__1(Prolog* mach);
	static Operation* exec_pred_x_or_y_2__2(Prolog* mach);
	static Operation* exec_pred_x_or_y_2__3(Prolog* mach);
	static Operation* exec_pred_x_or_y_2__4(Prolog* mach);
	static Operation* exec_pred_x_or_y_2__5(Prolog* mach);
	};


public:
	class pred_opcode_2 : public Code {

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

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_opcode_2__1(Prolog* mach);
	static Operation* exec_pred_opcode_2__2(Prolog* mach);
	static Operation* exec_pred_opcode_2__3(Prolog* mach);
	static Operation* exec_pred_opcode_2__4(Prolog* mach);
	static Operation* exec_pred_opcode_2__5(Prolog* mach);
	static Operation* exec_pred_opcode_2__6(Prolog* mach);
	static Operation* exec_pred_opcode_2__7(Prolog* mach);
	static Operation* exec_pred_opcode_2__8(Prolog* mach);
	static Operation* exec_pred_opcode_2__9(Prolog* mach);
	static Operation* exec_pred_opcode_2__10(Prolog* mach);
	static Operation* exec_pred_opcode_2__11(Prolog* mach);
	static Operation* exec_pred_opcode_2__12(Prolog* mach);
	static Operation* exec_pred_opcode_2__13(Prolog* mach);
	static Operation* exec_pred_opcode_2__14(Prolog* mach);
	static Operation* exec_pred_opcode_2__15(Prolog* mach);
	static Operation* exec_pred_opcode_2__16(Prolog* mach);
	static Operation* exec_pred_opcode_2__17(Prolog* mach);
	static Operation* exec_pred_opcode_2__18(Prolog* mach);
	static Operation* exec_pred_opcode_2__19(Prolog* mach);
	static Operation* exec_pred_opcode_2__20(Prolog* mach);
	static Operation* exec_pred_opcode_2__21(Prolog* mach);
	static Operation* exec_pred_opcode_2__22(Prolog* mach);
	static Operation* exec_pred_opcode_2__23(Prolog* mach);
	static Operation* exec_pred_opcode_2__24(Prolog* mach);
	static Operation* exec_pred_opcode_2__25(Prolog* mach);
	static Operation* exec_pred_opcode_2__26(Prolog* mach);
	static Operation* exec_pred_opcode_2__27(Prolog* mach);
	static Operation* exec_pred_opcode_2__28(Prolog* mach);
	static Operation* exec_pred_opcode_2__29(Prolog* mach);
	static Operation* exec_pred_opcode_2__30(Prolog* mach);
	static Operation* exec_pred_opcode_2__31(Prolog* mach);
	static Operation* exec_pred_opcode_2__32(Prolog* mach);
	static Operation* exec_pred_opcode_2__33(Prolog* mach);
	static Operation* exec_pred_opcode_2__34(Prolog* mach);
	static Operation* exec_pred_opcode_2__35(Prolog* mach);
	static Operation* exec_pred_opcode_2__36(Prolog* mach);
	static Operation* exec_pred_opcode_2__37(Prolog* mach);
	static Operation* exec_pred_opcode_2__38(Prolog* mach);
	static Operation* exec_pred_opcode_2__39(Prolog* mach);
	static Operation* exec_pred_opcode_2__40(Prolog* mach);
	static Operation* exec_pred_opcode_2__41(Prolog* mach);
	static Operation* exec_pred_opcode_2__42(Prolog* mach);
	static Operation* exec_pred_opcode_2__43(Prolog* mach);
	static Operation* exec_pred_opcode_2__44(Prolog* mach);
	static Operation* exec_pred_opcode_2__45(Prolog* mach);
	static Operation* exec_pred_opcode_2__46(Prolog* mach);
	static Operation* exec_pred_opcode_2__47(Prolog* mach);
	static Operation* exec_pred_opcode_2__48(Prolog* mach);
	static Operation* exec_pred_opcode_2__49(Prolog* mach);
	static Operation* exec_pred_opcode_2__50(Prolog* mach);
	static Operation* exec_pred_opcode_2__51(Prolog* mach);
	static Operation* exec_pred_opcode_2__52(Prolog* mach);
	static Operation* exec_pred_opcode_2__53(Prolog* mach);
	static Operation* exec_pred_opcode_2__54(Prolog* mach);
	static Operation* exec_pred_opcode_2__55(Prolog* mach);
	static Operation* exec_pred_opcode_2__56(Prolog* mach);
	static Operation* exec_pred_opcode_2__57(Prolog* mach);
	static Operation* exec_pred_opcode_2__58(Prolog* mach);
	static Operation* exec_pred_opcode_2__59(Prolog* mach);
	static Operation* exec_pred_opcode_2__60(Prolog* mach);
	static Operation* exec_pred_opcode_2__61(Prolog* mach);
	static Operation* exec_pred_opcode_2__62(Prolog* mach);
	static Operation* exec_pred_opcode_2__63(Prolog* mach);
	static Operation* exec_pred_opcode_2__64(Prolog* mach);
	static Operation* exec_pred_opcode_2__65(Prolog* mach);
	static Operation* exec_pred_opcode_2__66(Prolog* mach);
	static Operation* exec_pred_opcode_2__67(Prolog* mach);
	static Operation* exec_pred_opcode_2__68(Prolog* mach);
	static Operation* exec_pred_opcode_2__69(Prolog* mach);
	static Operation* exec_pred_opcode_2__70(Prolog* mach);
	static Operation* exec_pred_opcode_2__71(Prolog* mach);
	static Operation* exec_pred_opcode_2__72(Prolog* mach);
	static Operation* exec_pred_opcode_2__73(Prolog* mach);
	static Operation* exec_pred_opcode_2__74(Prolog* mach);
	static Operation* exec_pred_opcode_2__75(Prolog* mach);
	static Operation* exec_pred_opcode_2__76(Prolog* mach);
	static Operation* exec_pred_opcode_2__77(Prolog* mach);
	static Operation* exec_pred_opcode_2__78(Prolog* mach);
	static Operation* exec_pred_opcode_2__79(Prolog* mach);
	static Operation* exec_pred_opcode_2__80(Prolog* mach);
	static Operation* exec_pred_opcode_2__81(Prolog* mach);
	static Operation* exec_pred_opcode_2__82(Prolog* mach);
	static Operation* exec_pred_opcode_2__83(Prolog* mach);
	static Operation* exec_pred_opcode_2__84(Prolog* mach);
	static Operation* exec_pred_opcode_2__85(Prolog* mach);
	static Operation* exec_pred_opcode_2__86(Prolog* mach);
	static Operation* exec_pred_opcode_2__87(Prolog* mach);
	static Operation* exec_pred_opcode_2__88(Prolog* mach);
	static Operation* exec_pred_opcode_2__89(Prolog* mach);
	static Operation* exec_pred_opcode_2__90(Prolog* mach);
	static Operation* exec_pred_opcode_2__91(Prolog* mach);
	static Operation* exec_pred_opcode_2__92(Prolog* mach);
	static Operation* exec_pred_opcode_2__93(Prolog* mach);
	static Operation* exec_pred_opcode_2__94(Prolog* mach);
	static Operation* exec_pred_opcode_2__95(Prolog* mach);
	static Operation* exec_pred_opcode_2__96(Prolog* mach);
	static Operation* exec_pred_opcode_2__97(Prolog* mach);
	static Operation* exec_pred_opcode_2__98(Prolog* mach);
	static Operation* exec_pred_opcode_2__99(Prolog* mach);
	static Operation* exec_pred_opcode_2__100(Prolog* mach);
	static Operation* exec_pred_opcode_2__101(Prolog* mach);
	static Operation* exec_pred_opcode_2__102(Prolog* mach);
	static Operation* exec_pred_opcode_2__103(Prolog* mach);
	static Operation* exec_pred_opcode_2__104(Prolog* mach);
	static Operation* exec_pred_opcode_2__105(Prolog* mach);
	static Operation* exec_pred_opcode_2__106(Prolog* mach);
	static Operation* exec_pred_opcode_2__107(Prolog* mach);
	static Operation* exec_pred_opcode_2__108(Prolog* mach);
	static Operation* exec_pred_opcode_2__109(Prolog* mach);
	static Operation* exec_pred_opcode_2__110(Prolog* mach);
	static Operation* exec_pred_opcode_2__111(Prolog* mach);
	static Operation* exec_pred_opcode_2__112(Prolog* mach);
	static Operation* exec_pred_opcode_2__113(Prolog* mach);
	static Operation* exec_pred_opcode_2__114(Prolog* mach);
	static Operation* exec_pred_opcode_2__115(Prolog* mach);
	static Operation* exec_pred_opcode_2__116(Prolog* mach);
	static Operation* exec_pred_opcode_2__117(Prolog* mach);
	static Operation* exec_pred_opcode_2__118(Prolog* mach);
	static Operation* exec_pred_opcode_2__119(Prolog* mach);
	static Operation* exec_pred_opcode_2__120(Prolog* mach);
	static Operation* exec_pred_opcode_2__121(Prolog* mach);
	static Operation* exec_pred_opcode_2__122(Prolog* mach);
	static Operation* exec_pred_opcode_2__123(Prolog* mach);
	static Operation* exec_pred_opcode_2__124(Prolog* mach);
	static Operation* exec_pred_opcode_2__125(Prolog* mach);
	static Operation* exec_pred_opcode_2__126(Prolog* mach);
	static Operation* exec_pred_opcode_2__127(Prolog* mach);
	static Operation* exec_pred_opcode_2__128(Prolog* mach);
	static Operation* exec_pred_opcode_2__129(Prolog* mach);
	static Operation* exec_pred_opcode_2__130(Prolog* mach);
	static Operation* exec_pred_opcode_2__131(Prolog* mach);
	static Operation* exec_pred_opcode_2__132(Prolog* mach);
	static Operation* exec_pred_opcode_2__133(Prolog* mach);
	static Operation* exec_pred_opcode_2__134(Prolog* mach);
	static Operation* exec_pred_opcode_2__135(Prolog* mach);
	static Operation* exec_pred_opcode_2__136(Prolog* mach);
	static Operation* exec_pred_opcode_2__137(Prolog* mach);
	static Operation* exec_pred_opcode_2__138(Prolog* mach);
	static Operation* exec_pred_opcode_2__139(Prolog* mach);
	static Operation* exec_pred_opcode_2__140(Prolog* mach);
	static Operation* exec_pred_opcode_2__141(Prolog* mach);
	static Operation* exec_pred_opcode_2__142(Prolog* mach);
	static Operation* exec_pred_opcode_2__143(Prolog* mach);
	static Operation* exec_pred_opcode_2__144(Prolog* mach);
	static Operation* exec_pred_opcode_2__145(Prolog* mach);
	static Operation* exec_pred_opcode_2__146(Prolog* mach);
	static Operation* exec_pred_opcode_2__147(Prolog* mach);
	static Operation* exec_pred_opcode_2__148(Prolog* mach);
	static Operation* exec_pred_opcode_2__149(Prolog* mach);
	static Operation* exec_pred_opcode_2__150(Prolog* mach);
	static Operation* exec_pred_opcode_2__151(Prolog* mach);
	static Operation* exec_pred_opcode_2__152(Prolog* mach);
	static Operation* exec_pred_opcode_2__153(Prolog* mach);
	static Operation* exec_pred_opcode_2__154(Prolog* mach);
	static Operation* exec_pred_opcode_2__155(Prolog* mach);
	static Operation* exec_pred_opcode_2__156(Prolog* mach);
	static Operation* exec_pred_opcode_2__157(Prolog* mach);
	static Operation* exec_pred_opcode_2__158(Prolog* mach);
	static Operation* exec_pred_opcode_2__159(Prolog* mach);
	static Operation* exec_pred_opcode_2__160(Prolog* mach);
	static Operation* exec_pred_opcode_2__161(Prolog* mach);
	static Operation* exec_pred_opcode_2__162(Prolog* mach);
	static Operation* exec_pred_opcode_2__163(Prolog* mach);
	static Operation* exec_pred_opcode_2__164(Prolog* mach);
	static Operation* exec_pred_opcode_2__165(Prolog* mach);
	static Operation* exec_pred_opcode_2__166(Prolog* mach);
	static Operation* exec_pred_opcode_2__167(Prolog* mach);
	static Operation* exec_pred_opcode_2__168(Prolog* mach);
	static Operation* exec_pred_opcode_2__169(Prolog* mach);
	static Operation* exec_pred_opcode_2__170(Prolog* mach);
	static Operation* exec_pred_opcode_2__171(Prolog* mach);
	static Operation* exec_pred_opcode_2__172(Prolog* mach);
	static Operation* exec_pred_opcode_2__173(Prolog* mach);
	static Operation* exec_pred_opcode_2__174(Prolog* mach);
	static Operation* exec_pred_opcode_2__175(Prolog* mach);
	static Operation* exec_pred_opcode_2__176(Prolog* mach);
	static Operation* exec_pred_opcode_2__177(Prolog* mach);
	static Operation* exec_pred_opcode_2__178(Prolog* mach);
	static Operation* exec_pred_opcode_2__179(Prolog* mach);
	static Operation* exec_pred_opcode_2__180(Prolog* mach);
	static Operation* exec_pred_opcode_2__181(Prolog* mach);
	static Operation* exec_pred_opcode_2__182(Prolog* mach);
	static Operation* exec_pred_opcode_2__183(Prolog* mach);
	static Operation* exec_pred_opcode_2__184(Prolog* mach);
	static Operation* exec_pred_opcode_2__185(Prolog* mach);
	static Operation* exec_pred_opcode_2__186(Prolog* mach);
	static Operation* exec_pred_opcode_2__187(Prolog* mach);
	static Operation* exec_pred_opcode_2__188(Prolog* mach);
	static Operation* exec_pred_opcode_2__189(Prolog* mach);
	static Operation* exec_pred_opcode_2__190(Prolog* mach);
	static Operation* exec_pred_opcode_2__191(Prolog* mach);
	static Operation* exec_pred_opcode_2__192(Prolog* mach);
	static Operation* exec_pred_opcode_2__193(Prolog* mach);
	static Operation* exec_pred_opcode_2__194(Prolog* mach);
	static Operation* exec_pred_opcode_2__195(Prolog* mach);
	static Operation* exec_pred_opcode_2__196(Prolog* mach);
	static Operation* exec_pred_opcode_2__197(Prolog* mach);
	static Operation* exec_pred_opcode_2__198(Prolog* mach);
	static Operation* exec_pred_opcode_2__199(Prolog* mach);
	static Operation* exec_pred_opcode_2__200(Prolog* mach);
	static Operation* exec_pred_opcode_2__201(Prolog* mach);
	static Operation* exec_pred_opcode_2__202(Prolog* mach);
	static Operation* exec_pred_opcode_2__203(Prolog* mach);
	static Operation* exec_pred_opcode_2__204(Prolog* mach);
	static Operation* exec_pred_opcode_2__205(Prolog* mach);
	static Operation* exec_pred_opcode_2__206(Prolog* mach);
	static Operation* exec_pred_opcode_2__207(Prolog* mach);
	static Operation* exec_pred_opcode_2__208(Prolog* mach);
	static Operation* exec_pred_opcode_2__209(Prolog* mach);
	static Operation* exec_pred_opcode_2__210(Prolog* mach);
	static Operation* exec_pred_opcode_2__211(Prolog* mach);
	static Operation* exec_pred_opcode_2__212(Prolog* mach);
	static Operation* exec_pred_opcode_2__213(Prolog* mach);
	static Operation* exec_pred_opcode_2__214(Prolog* mach);
	static Operation* exec_pred_opcode_2__215(Prolog* mach);
	static Operation* exec_pred_opcode_2__216(Prolog* mach);
	static Operation* exec_pred_opcode_2__217(Prolog* mach);
	static Operation* exec_pred_opcode_2__218(Prolog* mach);
	static Operation* exec_pred_opcode_2__219(Prolog* mach);
	static Operation* exec_pred_opcode_2__220(Prolog* mach);
	static Operation* exec_pred_opcode_2__221(Prolog* mach);
	static Operation* exec_pred_opcode_2__222(Prolog* mach);
	static Operation* exec_pred_opcode_2__223(Prolog* mach);
	static Operation* exec_pred_opcode_2__224(Prolog* mach);
	static Operation* exec_pred_opcode_2__225(Prolog* mach);
	static Operation* exec_pred_opcode_2__226(Prolog* mach);
	static Operation* exec_pred_opcode_2__227(Prolog* mach);
	static Operation* exec_pred_opcode_2__228(Prolog* mach);
	static Operation* exec_pred_opcode_2__229(Prolog* mach);
	static Operation* exec_pred_opcode_2__230(Prolog* mach);
	static Operation* exec_pred_opcode_2__231(Prolog* mach);
	static Operation* exec_pred_opcode_2__232(Prolog* mach);
	static Operation* exec_pred_opcode_2__233(Prolog* mach);
	static Operation* exec_pred_opcode_2__234(Prolog* mach);
	static Operation* exec_pred_opcode_2__235(Prolog* mach);
	};


public:
	class pred_output_mess_1 : public Code {

	/*
	
	output_mess(_31600,_31612):- :(true,telling(_31604),tell(user,write(_31600,nl(tell(_31604,_31612))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_output_mess_1__1(Prolog* mach);
	};


public:
	class pred_is_unify_arg_inst_1 : public Code {

	/*
	
	is_unify_arg_inst(_31656,_31674):- :(true,functor(_31656,_31662,_31664),opcode(_31662,_31666,smallerorequal(91,_31666,smallerorequal(_31666,115,_31674)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_unify_arg_inst_1__1(Prolog* mach);
	};


	};



}


#endif	//#ifndef ASM
