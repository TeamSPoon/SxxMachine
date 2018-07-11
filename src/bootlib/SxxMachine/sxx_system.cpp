using namespace std;

#include "sxx_system.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  sxx_system::s_cut = Data::Intern("cut");
Const* const  sxx_system::s1 = Data::Intern("!");
Const* const  sxx_system::s2 = Data::Intern("$abs");
Const* const  sxx_system::s3 = Data::Intern("$acos");
Const* const  sxx_system::s4 = Data::Intern("$after");
Const* const  sxx_system::s5 = Data::Intern("$arith_equal");
Const* const  sxx_system::s6 = Data::Intern("$arith_not_equal");
Const* const  sxx_system::s7 = Data::Intern("$asin");
Const* const  sxx_system::s8 = Data::Intern("$atan");
Const* const  sxx_system::s9 = Data::Intern("$before");
Const* const  sxx_system::s10 = Data::Intern("$bitwise_conj");
Const* const  sxx_system::s11 = Data::Intern("$bitwise_disj");
Const* const  sxx_system::s12 = Data::Intern("$bitwise_exclusive_or");
Const* const  sxx_system::s13 = Data::Intern("$bitwise_neg");
Const* const  sxx_system::s14 = Data::Intern("$ceil");
Const* const  sxx_system::s15 = Data::Intern("$cos");
Const* const  sxx_system::s16 = Data::Intern("$cut");
Const* const  sxx_system::s17 = Data::Intern("$degrees");
Const* const  sxx_system::s18 = Data::Intern("$equality_of_term");
Const* const  sxx_system::s19 = Data::Intern("$exp");
Const* const  sxx_system::s20 = Data::Intern("$float");
Const* const  sxx_system::s21 = Data::Intern("$float_fractional_part");
Const* const  sxx_system::s22 = Data::Intern("$float_integer_part");
Const* const  sxx_system::s23 = Data::Intern("$float_quotient");
Const* const  sxx_system::s24 = Data::Intern("$floor");
Const* const  sxx_system::s25 = Data::Intern("$get_hash_manager");
Const* const  sxx_system::s26 = Data::Intern("$get_level");
Const* const  sxx_system::s27 = Data::Intern("$greater_or_equal");
Const* const  sxx_system::s28 = Data::Intern("$greater_than");
Const* const  sxx_system::s29 = Data::Intern("$identical_or_cannot_unify");
Const* const  sxx_system::s30 = Data::Intern("$inequality_of_term");
Const* const  sxx_system::s31 = Data::Intern("$int_quotient");
Const* const  sxx_system::s32 = Data::Intern("$less_or_equal");
Const* const  sxx_system::s33 = Data::Intern("$less_than");
Const* const  sxx_system::s34 = Data::Intern("$log");
Const* const  sxx_system::s35 = Data::Intern("$max");
Const* const  sxx_system::s36 = Data::Intern("$min");
Const* const  sxx_system::s37 = Data::Intern("$minus");
Const* const  sxx_system::s38 = Data::Intern("$mod");
Const* const  sxx_system::s39 = Data::Intern("$multi");
Const* const  sxx_system::s40 = Data::Intern("$neck_cut");
Const* const  sxx_system::s41 = Data::Intern("$new_indexing_hash");
Const* const  sxx_system::s42 = Data::Intern("$not_after");
Const* const  sxx_system::s43 = Data::Intern("$not_before");
Const* const  sxx_system::s44 = Data::Intern("$not_unifiable");
Const* const  sxx_system::s45 = Data::Intern("$plus");
Const* const  sxx_system::s46 = Data::Intern("$pow");
Const* const  sxx_system::s47 = Data::Intern("$radians");
Const* const  sxx_system::s48 = Data::Intern("$rint");
Const* const  sxx_system::s49 = Data::Intern("$round");
Const* const  sxx_system::s50 = Data::Intern("$shift_left");
Const* const  sxx_system::s51 = Data::Intern("$shift_right");
Const* const  sxx_system::s52 = Data::Intern("$sign");
Const* const  sxx_system::s53 = Data::Intern("$sin");
Const* const  sxx_system::s54 = Data::Intern("$sqrt");
Const* const  sxx_system::s55 = Data::Intern("$tan");
Const* const  sxx_system::s56 = Data::Intern("$truncate");
Const* const  sxx_system::s57 = Data::Intern("$unify");
Const* const  sxx_system::s58 = Data::Intern("$univ");
Const* const  sxx_system::s59 = Data::Intern(",");
Const* const  sxx_system::s60 = Data::Intern("->");
Const* const  sxx_system::s61 = Data::Intern(".");
Const* const  sxx_system::s62 = Data::Intern("/");
Const* const  sxx_system::s63 = Data::Intern(":-");
Const* const  sxx_system::s64 = Data::Intern(";");
Const* const  sxx_system::s65 = Data::Intern("<");
Const* const  sxx_system::s66 = Data::Intern("=");
Const* const  sxx_system::s67 = Data::Intern("=..");
Const* const  sxx_system::s68 = Data::Intern("=:=");
Const* const  sxx_system::s69 = Data::Intern("=<");
Const* const  sxx_system::s70 = Data::Intern("==");
Const* const  sxx_system::s71 = Data::Intern("=\\=");
Const* const  sxx_system::s72 = Data::Intern(">");
Const* const  sxx_system::s73 = Data::Intern(">=");
Const* const  sxx_system::s74 = Data::Intern("?=");
Const* const  sxx_system::s75 = Data::Intern("@<");
Const* const  sxx_system::s76 = Data::Intern("@=<");
Const* const  sxx_system::s77 = Data::Intern("@>");
Const* const  sxx_system::s78 = Data::Intern("@>=");
Const* const  sxx_system::s_C = Data::Intern("C");
Const* const  sxx_system::s80 = Data::Intern("\\+");
Const* const  sxx_system::s81 = Data::Intern("\\=");
Const* const  sxx_system::s82 = Data::Intern("\\==");
Const* const  sxx_system::s83 = Data::Intern("^");
Const* const  sxx_system::s_abolish = Data::Intern("abolish");
Const* const  sxx_system::s_abort = Data::Intern("abort");
Const* const  sxx_system::s_arg = Data::Intern("arg");
Const* const  sxx_system::s_assert = Data::Intern("assert");
Const* const  sxx_system::s_asserta = Data::Intern("asserta");
Const* const  sxx_system::s_assertz = Data::Intern("assertz");
Const* const  sxx_system::s_atom = Data::Intern("atom");
Const* const  sxx_system::s_atom_chars = Data::Intern("atom_chars");
Const* const  sxx_system::s_atom_codes = Data::Intern("atom_codes");
Const* const  sxx_system::s_atom_concat = Data::Intern("atom_concat");
Const* const  sxx_system::s_atom_length = Data::Intern("atom_length");
Const* const  sxx_system::s_atomic = Data::Intern("atomic");
Const* const  sxx_system::s_bagof = Data::Intern("bagof");
Const* const  sxx_system::s_cafeteria = Data::Intern("cafeteria");
Const* const  sxx_system::s_call = Data::Intern("call");
Const* const  sxx_system::s_callable = Data::Intern("callable");
Const* const  sxx_system::s_catch = Data::Intern("catch");
Const* const  sxx_system::s_char_code = Data::Intern("char_code");
Const* const  sxx_system::s_clause = Data::Intern("clause");
Const* const  sxx_system::s_close = Data::Intern("close");
Const* const  sxx_system::s_closure = Data::Intern("closure");
Const* const  sxx_system::s105 = Data::Intern("com.googlecode.prolog_cafe.builtin");
Const* const  sxx_system::s_compare = Data::Intern("compare");
Const* const  sxx_system::s_compound = Data::Intern("compound");
Const* const  sxx_system::s_consult = Data::Intern("consult");
Const* const  sxx_system::s_copy_term = Data::Intern("copy_term");
Const* const  sxx_system::s_current_input = Data::Intern("current_input");
Const* const  sxx_system::s_current_op = Data::Intern("current_op");
Const* const  sxx_system::s_current_output = Data::Intern("current_output");
Const* const  sxx_system::s_current_prolog_flag = Data::Intern("current_prolog_flag");
Const* const  sxx_system::s_debug = Data::Intern("debug");
Const* const  sxx_system::s_dynamic = Data::Intern("dynamic");
Const* const  sxx_system::s_expand_term = Data::Intern("expand_term");
Const* const  sxx_system::s_fail = Data::Intern("fail");
Const* const  sxx_system::s_false = Data::Intern("false");
Const* const  sxx_system::s_findall = Data::Intern("findall");
Const* const  sxx_system::s_float = Data::Intern("float");
Const* const  sxx_system::s_flush_output = Data::Intern("flush_output");
Const* const  sxx_system::s_functor = Data::Intern("functor");
Const* const  sxx_system::s_fx = Data::Intern("fx");
Const* const  sxx_system::s_get = Data::Intern("get");
Const* const  sxx_system::s_get0 = Data::Intern("get0");
Const* const  sxx_system::s_get_byte = Data::Intern("get_byte");
Const* const  sxx_system::s_get_char = Data::Intern("get_char");
Const* const  sxx_system::s_get_code = Data::Intern("get_code");
Const* const  sxx_system::s_ground = Data::Intern("ground");
Const* const  sxx_system::s_halt = Data::Intern("halt");
Const* const  sxx_system::s_hash_clear = Data::Intern("hash_clear");
Const* const  sxx_system::s_hash_contains_key = Data::Intern("hash_contains_key");
Const* const  sxx_system::s_hash_get = Data::Intern("hash_get");
Const* const  sxx_system::s_hash_is_empty = Data::Intern("hash_is_empty");
Const* const  sxx_system::s_hash_keys = Data::Intern("hash_keys");
Const* const  sxx_system::s_hash_map = Data::Intern("hash_map");
Const* const  sxx_system::s_hash_put = Data::Intern("hash_put");
Const* const  sxx_system::s_hash_remove = Data::Intern("hash_remove");
Const* const  sxx_system::s_hash_size = Data::Intern("hash_size");
Const* const  sxx_system::s_initialization = Data::Intern("initialization");
Const* const  sxx_system::s_integer = Data::Intern("integer");
Const* const  sxx_system::s_is = Data::Intern("is");
Const* const  sxx_system::s_java = Data::Intern("java");
Const* const  sxx_system::s_java_constructor = Data::Intern("java_constructor");
Const* const  sxx_system::s_java_constructor0 = Data::Intern("java_constructor0");
Const* const  sxx_system::s_java_conversion = Data::Intern("java_conversion");
Const* const  sxx_system::s_java_declared_constructor = Data::Intern("java_declared_constructor");
Const* const  sxx_system::s_java_declared_constructor0 = Data::Intern("java_declared_constructor0");
Const* const  sxx_system::s_java_declared_method = Data::Intern("java_declared_method");
Const* const  sxx_system::s_java_declared_method0 = Data::Intern("java_declared_method0");
Const* const  sxx_system::s_java_get_declared_field = Data::Intern("java_get_declared_field");
Const* const  sxx_system::s_java_get_declared_field0 = Data::Intern("java_get_declared_field0");
Const* const  sxx_system::s_java_get_field = Data::Intern("java_get_field");
Const* const  sxx_system::s_java_get_field0 = Data::Intern("java_get_field0");
Const* const  sxx_system::s_java_method = Data::Intern("java_method");
Const* const  sxx_system::s_java_method0 = Data::Intern("java_method0");
Const* const  sxx_system::s_java_set_declared_field = Data::Intern("java_set_declared_field");
Const* const  sxx_system::s_java_set_declared_field0 = Data::Intern("java_set_declared_field0");
Const* const  sxx_system::s_java_set_field = Data::Intern("java_set_field");
Const* const  sxx_system::s_java_set_field0 = Data::Intern("java_set_field0");
Const* const  sxx_system::s_keysort = Data::Intern("keysort");
Const* const  sxx_system::s_leash = Data::Intern("leash");
Const* const  sxx_system::s_length = Data::Intern("length");
Const* const  sxx_system::s_listing = Data::Intern("listing");
Const* const  sxx_system::s_long = Data::Intern("long");
Const* const  sxx_system::s_multifile = Data::Intern("multifile");
Const* const  sxx_system::s_name = Data::Intern("name");
Const* const  sxx_system::s_nb_setval = Data::Intern("nb_setval");
Const* const  sxx_system::s_new_hash = Data::Intern("new_hash");
Const* const  sxx_system::s_nl = Data::Intern("nl");
Const* const  sxx_system::s_nodebug = Data::Intern("nodebug");
Const* const  sxx_system::s_nonvar = Data::Intern("nonvar");
Const* const  sxx_system::s_nospy = Data::Intern("nospy");
Const* const  sxx_system::s_nospyall = Data::Intern("nospyall");
Const* const  sxx_system::s_notrace = Data::Intern("notrace");
Const* const  sxx_system::s_number = Data::Intern("number");
Const* const  sxx_system::s_number_chars = Data::Intern("number_chars");
Const* const  sxx_system::s_number_codes = Data::Intern("number_codes");
Const* const  sxx_system::s_numbervars = Data::Intern("numbervars");
Const* const  sxx_system::s_on_exception = Data::Intern("on_exception");
Const* const  sxx_system::s_on_load_sxx_system = Data::Intern("on_load_sxx_system");
Const* const  sxx_system::s_once = Data::Intern("once");
Const* const  sxx_system::s_op = Data::Intern("op");
Const* const  sxx_system::s_open = Data::Intern("open");
Const* const  sxx_system::s_package = Data::Intern("package");
Const* const  sxx_system::s_peek_byte = Data::Intern("peek_byte");
Const* const  sxx_system::s_peek_char = Data::Intern("peek_char");
Const* const  sxx_system::s_peek_code = Data::Intern("peek_code");
Const* const  sxx_system::s_public = Data::Intern("public");
Const* const  sxx_system::s_put = Data::Intern("put");
Const* const  sxx_system::s_put_byte = Data::Intern("put_byte");
Const* const  sxx_system::s_put_char = Data::Intern("put_char");
Const* const  sxx_system::s_put_code = Data::Intern("put_code");
Const* const  sxx_system::s_raise_exception = Data::Intern("raise_exception");
Const* const  sxx_system::s_read = Data::Intern("read");
Const* const  sxx_system::s_read_line = Data::Intern("read_line");
Const* const  sxx_system::s_read_with_variables = Data::Intern("read_with_variables");
Const* const  sxx_system::s_repeat = Data::Intern("repeat");
Const* const  sxx_system::s_retract = Data::Intern("retract");
Const* const  sxx_system::s_retractall = Data::Intern("retractall");
Const* const  sxx_system::s_set_input = Data::Intern("set_input");
Const* const  sxx_system::s_set_output = Data::Intern("set_output");
Const* const  sxx_system::s_set_prolog_flag = Data::Intern("set_prolog_flag");
Const* const  sxx_system::s_setof = Data::Intern("setof");
Const* const  sxx_system::s_skip = Data::Intern("skip");
Const* const  sxx_system::s_sort = Data::Intern("sort");
Const* const  sxx_system::s_spy = Data::Intern("spy");
Const* const  sxx_system::s_statistics = Data::Intern("statistics");
Const* const  sxx_system::s_stream_property = Data::Intern("stream_property");
Const* const  sxx_system::s_sub_atom = Data::Intern("sub_atom");
Const* const  sxx_system::s_synchronized = Data::Intern("synchronized");
Const* const  sxx_system::s_system_predicate = Data::Intern("system_predicate");
Const* const  sxx_system::s_tab = Data::Intern("tab");
Const* const  sxx_system::s_therwise = Data::Intern("therwise");
Const* const  sxx_system::s_throw = Data::Intern("throw");
Const* const  sxx_system::s_trace = Data::Intern("trace");
Const* const  sxx_system::s_true = Data::Intern("true");
Const* const  sxx_system::s_var = Data::Intern("var");
Const* const  sxx_system::s_write = Data::Intern("write");
Const* const  sxx_system::s_write_canonical = Data::Intern("write_canonical");
Const* const  sxx_system::s_write_term = Data::Intern("write_term");
Const* const  sxx_system::s_writeq = Data::Intern("writeq");
Int* const  sxx_system::posint1 = Data::Number(1LL);
Int* const  sxx_system::posint1150 = Data::Number(1150LL);
Operation* const  sxx_system::reg_on_load_sxx_system_0 = PredTable::Register("on_load_sxx_system",0, new SxxMachine::sxx_system::pred_on_load_sxx_system_0());
Operation* const  sxx_system::reg_package_1 = PredTable::Register("package",1, new SxxMachine::sxx_system::pred_package_1());
Operation* const  sxx_system::reg_system_predicate_1 = PredTable::Register("system_predicate",1, new SxxMachine::sxx_system::pred_system_predicate_1());

	Operation* sxx_system::pred_on_load_sxx_system_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_on_load_sxx_system_0__1(mach));
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(sxx_system::s_op,sxx_system::posint1150,sxx_system::s_fx,sxx_system::s_package);
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(sxx_system::s_write->FindProc(1));
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(sxx_system::s_package,sxx_system::s105);
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(sxx_system::s_write->FindProc(1));
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(sxx_system::s_public,Data::F(sxx_system::s62,sxx_system::s_system_predicate,sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(sxx_system::s_write->FindProc(1));
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(sxx_system::s_multifile,Data::F(sxx_system::s62,sxx_system::s_system_predicate,sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(sxx_system::s_write->FindProc(1));
	}

	Operation* sxx_system::pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__5(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(sxx_system::s_dynamic,Data::F(sxx_system::s62,sxx_system::s_system_predicate,sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(sxx_system::s_write->FindProc(1));
	}

	Operation* sxx_system::pred_package_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_system::pred_package_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_package_1__1(mach));
	}

	Operation* sxx_system::pred_package_1::exec_pred_package_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = sxx_system::s_package;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_nb_setval_2::exec_static);
	}

	Operation* sxx_system::pred_system_predicate_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_system::pred_system_predicate_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_system_predicate_1__1(mach));
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_system_predicate,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_therwise,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_fail,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_false,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s26,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s40,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s16,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s83,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__11(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s59,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__12(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s64,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__13(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s60,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__14(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_call,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__15(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_catch,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__16(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_throw,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__17(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_on_exception,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__18(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_raise_exception,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__19(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s66,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__20(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s57,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__21(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s81,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__22(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s44,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__23(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_var,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__24(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atom,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__25(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_integer,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__26(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_long,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__27(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_float,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__28(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__29);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atomic,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__29(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__30);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_compound,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__30(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__31);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_nonvar,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__31(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__32);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_number,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__32(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__33);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__33(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__34);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__34(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__35);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_closure,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__35(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__36);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_ground,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__36(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__37);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_callable,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__37(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__38);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s70,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__38(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__39);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s18,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__39(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__40);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s82,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__40(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__41);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s30,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__41(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__42);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s75,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__42(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__43);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s9,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__43(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__44);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s77,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__44(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__45);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s4,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__45(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__46);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s76,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__46(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__47);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s42,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__47(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__48);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s78,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__48(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__49);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s43,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__49(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__50);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s74,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__50(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__51);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s29,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__51(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__52);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_compare,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__52(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__53);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_sort,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__53(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__54);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_keysort,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__54(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__55);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_arg,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__55(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__56);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_functor,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__56(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__57);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s67,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__57(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__58);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s58,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__58(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__59);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_copy_term,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__59(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__60);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_is,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__60(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__61);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__61(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__62);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s7,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__62(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__63);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__63(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__64);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__64(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__65);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s10,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__65(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__66);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s11,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__66(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__67);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s12,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__67(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__68);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s13,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__68(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__69);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s14,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__69(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__70);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s15,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__70(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__71);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s17,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__71(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__72);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s19,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__72(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__73);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s20,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__73(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__74);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s22,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__74(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__75);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s21,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__75(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__76);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s23,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__76(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__77);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s24,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__77(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__78);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s31,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__78(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__79);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s34,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__79(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__80);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s35,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__80(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__81);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s36,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__81(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__82);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s37,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__82(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__83);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s38,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__83(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__84);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s39,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__84(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__85);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s45,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__85(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__86);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s46,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__86(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__87);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s47,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__87(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__88);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s48,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__88(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__89);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s49,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__89(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__90);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s50,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__90(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__91);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s51,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__91(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__92);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s52,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__92(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__93);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s53,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__93(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__94);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s54,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__94(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__95);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s55,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__95(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__96);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s56,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__96(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__97);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s68,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__97(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__98);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__98(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__99);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s71,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__99(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__100);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__100(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__101);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s65,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__101(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__102);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s33,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__102(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__103);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s69,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__103(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__104);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s32,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__104(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__105);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s72,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__105(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__106);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s28,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__106(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__107);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s73,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__107(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__108);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s27,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__108(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__109);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_clause,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__109(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__110);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_initialization,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__110(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__111);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s41,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__111(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__112);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_assert,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__112(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__113);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_assertz,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__113(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__114);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_asserta,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__114(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__115);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_retract,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__115(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__116);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_abolish,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__116(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__117);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_retractall,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__117(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__118);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_findall,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__118(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__119);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_bagof,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__119(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__120);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_setof,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__120(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__121);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_current_input,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__121(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__122);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_current_output,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__122(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__123);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_set_input,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__123(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__124);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_set_output,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__124(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__125);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_open,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__125(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__126);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_open,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__126(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__127);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_close,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__127(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__128);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_close,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__128(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__129);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_flush_output,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__129(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__130);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_flush_output,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__130(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__131);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_stream_property,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__131(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__132);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_char,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__132(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__133);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_char,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__133(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__134);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_code,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__134(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__135);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_code,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__135(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__136);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_char,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__136(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__137);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_char,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__137(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__138);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_code,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__138(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__139);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_code,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__139(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__140);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_char,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__140(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__141);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_char,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__141(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__142);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_code,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__142(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__143);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_code,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__143(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__144);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_nl,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__144(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__145);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_nl,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__145(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__146);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get0,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__146(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__147);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get0,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__147(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__148);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__148(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__149);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__149(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__150);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__150(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__151);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__151(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__152);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_tab,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__152(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__153);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_tab,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__153(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__154);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_skip,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__154(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__155);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_skip,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__155(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__156);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_byte,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__156(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__157);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_get_byte,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__157(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__158);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_byte,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__158(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__159);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_peek_byte,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__159(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__160);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_byte,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__160(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__161);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_put_byte,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__161(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__162);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__162(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__163);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__163(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__164);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read_with_variables,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__164(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__165);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read_with_variables,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__165(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__166);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read_line,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__166(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__167);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_read_line,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__167(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__168);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__168(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__169);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__169(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__170);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_writeq,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__170(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__171);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_writeq,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__171(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__172);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write_canonical,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__172(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__173);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write_canonical,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__173(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__174);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write_term,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__174(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__175);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_write_term,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__175(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__176);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_op,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__176(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__177);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_current_op,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__177(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__178);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s80,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__178(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__179);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_once,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__179(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__180);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_repeat,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__180(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__181);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atom_length,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__181(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__182);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atom_concat,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__182(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__183);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_sub_atom,var1,var2,var3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__183(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__184);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atom_chars,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__184(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__185);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_atom_codes,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__185(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__186);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_char_code,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__186(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__187);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_number_chars,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__187(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__188);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_number_codes,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__188(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__189);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_name,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__189(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__190);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_set_prolog_flag,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__190(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__191);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_current_prolog_flag,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__191(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__192);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_halt,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__192(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__193);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_halt,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__193(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__194);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_abort,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__194(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__195);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_C,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__195(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__196);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_expand_term,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__196(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__197);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_new_hash,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__197(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__198);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_new_hash,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__198(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__199);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_clear,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__199(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__200);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_contains_key,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__200(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__201);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_get,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__201(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__202);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_is_empty,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__202(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__203);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_keys,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__203(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__204);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_map,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__204(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__205);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_put,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__205(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__206);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_remove,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__206(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__207);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_hash_size,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__207(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__208);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s25,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__208(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__209);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_constructor0,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__209(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__210);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_constructor,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__210(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__211);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_declared_constructor0,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__211(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__212);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_declared_constructor,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__212(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__213);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_method0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__213(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__214);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_method,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__214(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__215);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_declared_method0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__215(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__216);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_declared_method,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__216(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__217);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_get_field0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__217(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__218);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_get_field,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__218(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__219);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_get_declared_field0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__219(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__220);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_get_declared_field,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__220(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__221);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_set_field0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__221(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__222);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_set_field,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__222(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__223);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_set_declared_field0,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__223(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__224);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_set_declared_field,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__224(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__225);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_synchronized,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__225(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__226);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_java_conversion,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__226(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__227);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_cafeteria,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__227(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__228);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_consult,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__228(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__229);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_trace,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__229(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__230);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_notrace,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__230(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__231);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_debug,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__231(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__232);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_nodebug,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__232(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__233);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_leash,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__233(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__234);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_spy,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__234(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__235);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_nospy,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__235(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__236);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_nospyall,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__236(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__237);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s_listing,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__237(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__238);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_listing,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__238(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__239);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_length,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__239(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__240);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_numbervars,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* sxx_system::pred_system_predicate_1::exec_pred_system_predicate_1__240(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(sxx_system::s_statistics,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
