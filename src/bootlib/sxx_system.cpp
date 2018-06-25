using namespace std;

#include "sxx_system.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* sxx_system::s0 = Const::Intern("cut");
Const* sxx_system::s1 = Const::Intern("!");
Const* sxx_system::s2 = Const::Intern("$abs");
Const* sxx_system::s3 = Const::Intern("$acos");
Const* sxx_system::s4 = Const::Intern("$after");
Const* sxx_system::s5 = Const::Intern("$arith_equal");
Const* sxx_system::s6 = Const::Intern("$arith_not_equal");
Const* sxx_system::s7 = Const::Intern("$asin");
Const* sxx_system::s8 = Const::Intern("$atan");
Const* sxx_system::s9 = Const::Intern("$before");
Const* sxx_system::s10 = Const::Intern("$bitwise_conj");
Const* sxx_system::s11 = Const::Intern("$bitwise_disj");
Const* sxx_system::s12 = Const::Intern("$bitwise_exclusive_or");
Const* sxx_system::s13 = Const::Intern("$bitwise_neg");
Const* sxx_system::s14 = Const::Intern("$ceil");
Const* sxx_system::s15 = Const::Intern("$cos");
Const* sxx_system::s16 = Const::Intern("$cut");
Const* sxx_system::s17 = Const::Intern("$degrees");
Const* sxx_system::s18 = Const::Intern("$equality_of_term");
Const* sxx_system::s19 = Const::Intern("$exp");
Const* sxx_system::s20 = Const::Intern("$float");
Const* sxx_system::s21 = Const::Intern("$float_fractional_part");
Const* sxx_system::s22 = Const::Intern("$float_integer_part");
Const* sxx_system::s23 = Const::Intern("$float_quotient");
Const* sxx_system::s24 = Const::Intern("$floor");
Const* sxx_system::s25 = Const::Intern("$get_hash_manager");
Const* sxx_system::s26 = Const::Intern("$get_level");
Const* sxx_system::s27 = Const::Intern("$greater_or_equal");
Const* sxx_system::s28 = Const::Intern("$greater_than");
Const* sxx_system::s29 = Const::Intern("$identical_or_cannot_unify");
Const* sxx_system::s30 = Const::Intern("$inequality_of_term");
Const* sxx_system::s31 = Const::Intern("$int_quotient");
Const* sxx_system::s32 = Const::Intern("$less_or_equal");
Const* sxx_system::s33 = Const::Intern("$less_than");
Const* sxx_system::s34 = Const::Intern("$log");
Const* sxx_system::s35 = Const::Intern("$max");
Const* sxx_system::s36 = Const::Intern("$min");
Const* sxx_system::s37 = Const::Intern("$minus");
Const* sxx_system::s38 = Const::Intern("$mod");
Const* sxx_system::s39 = Const::Intern("$multi");
Const* sxx_system::s40 = Const::Intern("$neck_cut");
Const* sxx_system::s41 = Const::Intern("$new_indexing_hash");
Const* sxx_system::s42 = Const::Intern("$not_after");
Const* sxx_system::s43 = Const::Intern("$not_before");
Const* sxx_system::s44 = Const::Intern("$not_unifiable");
Const* sxx_system::s45 = Const::Intern("$plus");
Const* sxx_system::s46 = Const::Intern("$pow");
Const* sxx_system::s47 = Const::Intern("$radians");
Const* sxx_system::s48 = Const::Intern("$rint");
Const* sxx_system::s49 = Const::Intern("$round");
Const* sxx_system::s50 = Const::Intern("$shift_left");
Const* sxx_system::s51 = Const::Intern("$shift_right");
Const* sxx_system::s52 = Const::Intern("$sign");
Const* sxx_system::s53 = Const::Intern("$sin");
Const* sxx_system::s54 = Const::Intern("$sqrt");
Const* sxx_system::s55 = Const::Intern("$tan");
Const* sxx_system::s56 = Const::Intern("$truncate");
Const* sxx_system::s57 = Const::Intern("$unify");
Const* sxx_system::s58 = Const::Intern("$univ");
Const* sxx_system::s59 = Const::Intern(",");
Const* sxx_system::s60 = Const::Intern("->");
Const* sxx_system::s61 = Const::Intern(".");
Const* sxx_system::s62 = Const::Intern("/");
Const* sxx_system::s63 = Const::Intern(":-");
Const* sxx_system::s64 = Const::Intern(";");
Const* sxx_system::s65 = Const::Intern("<");
Const* sxx_system::s66 = Const::Intern("=");
Const* sxx_system::s67 = Const::Intern("=..");
Const* sxx_system::s68 = Const::Intern("=:=");
Const* sxx_system::s69 = Const::Intern("=<");
Const* sxx_system::s70 = Const::Intern("==");
Const* sxx_system::s71 = Const::Intern("=\\=");
Const* sxx_system::s72 = Const::Intern(">");
Const* sxx_system::s73 = Const::Intern(">=");
Const* sxx_system::s74 = Const::Intern("?=");
Const* sxx_system::s75 = Const::Intern("@<");
Const* sxx_system::s76 = Const::Intern("@=<");
Const* sxx_system::s77 = Const::Intern("@>");
Const* sxx_system::s78 = Const::Intern("@>=");
Const* sxx_system::s79 = Const::Intern("C");
Const* sxx_system::s80 = Const::Intern("\\+");
Const* sxx_system::s81 = Const::Intern("\\=");
Const* sxx_system::s82 = Const::Intern("\\==");
Const* sxx_system::s83 = Const::Intern("^");
Const* sxx_system::s84 = Const::Intern("abolish");
Const* sxx_system::s85 = Const::Intern("abort");
Const* sxx_system::s86 = Const::Intern("arg");
Const* sxx_system::s87 = Const::Intern("assert");
Const* sxx_system::s88 = Const::Intern("asserta");
Const* sxx_system::s89 = Const::Intern("assertz");
Const* sxx_system::s90 = Const::Intern("atom");
Const* sxx_system::s91 = Const::Intern("atom_chars");
Const* sxx_system::s92 = Const::Intern("atom_codes");
Const* sxx_system::s93 = Const::Intern("atom_concat");
Const* sxx_system::s94 = Const::Intern("atom_length");
Const* sxx_system::s95 = Const::Intern("atomic");
Const* sxx_system::s96 = Const::Intern("bagof");
Const* sxx_system::s97 = Const::Intern("cafeteria");
Const* sxx_system::s98 = Const::Intern("call");
Const* sxx_system::s99 = Const::Intern("callable");
Const* sxx_system::s100 = Const::Intern("catch");
Const* sxx_system::s101 = Const::Intern("char_code");
Const* sxx_system::s102 = Const::Intern("clause");
Const* sxx_system::s103 = Const::Intern("close");
Const* sxx_system::s104 = Const::Intern("closure");
Const* sxx_system::s105 = Const::Intern("com.googlecode.prolog_cafe.builtin");
Const* sxx_system::s106 = Const::Intern("compare");
Const* sxx_system::s107 = Const::Intern("compound");
Const* sxx_system::s108 = Const::Intern("consult");
Const* sxx_system::s109 = Const::Intern("copy_term");
Const* sxx_system::s110 = Const::Intern("current_input");
Const* sxx_system::s111 = Const::Intern("current_op");
Const* sxx_system::s112 = Const::Intern("current_output");
Const* sxx_system::s113 = Const::Intern("current_prolog_flag");
Const* sxx_system::s114 = Const::Intern("debug");
Const* sxx_system::s115 = Const::Intern("dynamic");
Const* sxx_system::s116 = Const::Intern("expand_term");
Const* sxx_system::s117 = Const::Intern("fail");
Const* sxx_system::s118 = Const::Intern("false");
Const* sxx_system::s119 = Const::Intern("findall");
Const* sxx_system::s120 = Const::Intern("float");
Const* sxx_system::s121 = Const::Intern("flush_output");
Const* sxx_system::s122 = Const::Intern("functor");
Const* sxx_system::s123 = Const::Intern("fx");
Const* sxx_system::s124 = Const::Intern("get");
Const* sxx_system::s125 = Const::Intern("get0");
Const* sxx_system::s126 = Const::Intern("get_byte");
Const* sxx_system::s127 = Const::Intern("get_char");
Const* sxx_system::s128 = Const::Intern("get_code");
Const* sxx_system::s129 = Const::Intern("ground");
Const* sxx_system::s130 = Const::Intern("halt");
Const* sxx_system::s131 = Const::Intern("hash_clear");
Const* sxx_system::s132 = Const::Intern("hash_contains_key");
Const* sxx_system::s133 = Const::Intern("hash_get");
Const* sxx_system::s134 = Const::Intern("hash_is_empty");
Const* sxx_system::s135 = Const::Intern("hash_keys");
Const* sxx_system::s136 = Const::Intern("hash_map");
Const* sxx_system::s137 = Const::Intern("hash_put");
Const* sxx_system::s138 = Const::Intern("hash_remove");
Const* sxx_system::s139 = Const::Intern("hash_size");
Const* sxx_system::s140 = Const::Intern("initialization");
Const* sxx_system::s141 = Const::Intern("integer");
Const* sxx_system::s142 = Const::Intern("is");
Const* sxx_system::s143 = Const::Intern("java");
Const* sxx_system::s144 = Const::Intern("java_constructor");
Const* sxx_system::s145 = Const::Intern("java_constructor0");
Const* sxx_system::s146 = Const::Intern("java_conversion");
Const* sxx_system::s147 = Const::Intern("java_declared_constructor");
Const* sxx_system::s148 = Const::Intern("java_declared_constructor0");
Const* sxx_system::s149 = Const::Intern("java_declared_method");
Const* sxx_system::s150 = Const::Intern("java_declared_method0");
Const* sxx_system::s151 = Const::Intern("java_get_declared_field");
Const* sxx_system::s152 = Const::Intern("java_get_declared_field0");
Const* sxx_system::s153 = Const::Intern("java_get_field");
Const* sxx_system::s154 = Const::Intern("java_get_field0");
Const* sxx_system::s155 = Const::Intern("java_method");
Const* sxx_system::s156 = Const::Intern("java_method0");
Const* sxx_system::s157 = Const::Intern("java_set_declared_field");
Const* sxx_system::s158 = Const::Intern("java_set_declared_field0");
Const* sxx_system::s159 = Const::Intern("java_set_field");
Const* sxx_system::s160 = Const::Intern("java_set_field0");
Const* sxx_system::s161 = Const::Intern("keysort");
Const* sxx_system::s162 = Const::Intern("leash");
Const* sxx_system::s163 = Const::Intern("length");
Const* sxx_system::s164 = Const::Intern("listing");
Const* sxx_system::s165 = Const::Intern("long");
Const* sxx_system::s166 = Const::Intern("multifile");
Const* sxx_system::s167 = Const::Intern("name");
Const* sxx_system::s168 = Const::Intern("nb_setval");
Const* sxx_system::s169 = Const::Intern("new_hash");
Const* sxx_system::s170 = Const::Intern("nl");
Const* sxx_system::s171 = Const::Intern("nodebug");
Const* sxx_system::s172 = Const::Intern("nonvar");
Const* sxx_system::s173 = Const::Intern("nospy");
Const* sxx_system::s174 = Const::Intern("nospyall");
Const* sxx_system::s175 = Const::Intern("notrace");
Const* sxx_system::s176 = Const::Intern("number");
Const* sxx_system::s177 = Const::Intern("number_chars");
Const* sxx_system::s178 = Const::Intern("number_codes");
Const* sxx_system::s179 = Const::Intern("numbervars");
Const* sxx_system::s180 = Const::Intern("on_exception");
Const* sxx_system::s181 = Const::Intern("on_load_sxx_system");
Const* sxx_system::s182 = Const::Intern("once");
Const* sxx_system::s183 = Const::Intern("op");
Const* sxx_system::s184 = Const::Intern("open");
Const* sxx_system::s185 = Const::Intern("package");
Const* sxx_system::s186 = Const::Intern("peek_byte");
Const* sxx_system::s187 = Const::Intern("peek_char");
Const* sxx_system::s188 = Const::Intern("peek_code");
Const* sxx_system::s189 = Const::Intern("public");
Const* sxx_system::s190 = Const::Intern("put");
Const* sxx_system::s191 = Const::Intern("put_byte");
Const* sxx_system::s192 = Const::Intern("put_char");
Const* sxx_system::s193 = Const::Intern("put_code");
Const* sxx_system::s194 = Const::Intern("raise_exception");
Const* sxx_system::s195 = Const::Intern("read");
Const* sxx_system::s196 = Const::Intern("read_line");
Const* sxx_system::s197 = Const::Intern("read_with_variables");
Const* sxx_system::s198 = Const::Intern("repeat");
Const* sxx_system::s199 = Const::Intern("retract");
Const* sxx_system::s200 = Const::Intern("retractall");
Const* sxx_system::s201 = Const::Intern("set_input");
Const* sxx_system::s202 = Const::Intern("set_output");
Const* sxx_system::s203 = Const::Intern("set_prolog_flag");
Const* sxx_system::s204 = Const::Intern("setof");
Const* sxx_system::s205 = Const::Intern("skip");
Const* sxx_system::s206 = Const::Intern("sort");
Const* sxx_system::s207 = Const::Intern("spy");
Const* sxx_system::s208 = Const::Intern("statistics");
Const* sxx_system::s209 = Const::Intern("stream_property");
Const* sxx_system::s210 = Const::Intern("sub_atom");
Const* sxx_system::s211 = Const::Intern("synchronized");
Const* sxx_system::s212 = Const::Intern("system_predicate");
Const* sxx_system::s213 = Const::Intern("tab");
Const* sxx_system::s214 = Const::Intern("therwise");
Const* sxx_system::s215 = Const::Intern("throw");
Const* sxx_system::s216 = Const::Intern("trace");
Const* sxx_system::s217 = Const::Intern("true");
Const* sxx_system::s218 = Const::Intern("var");
Const* sxx_system::s219 = Const::Intern("write");
Const* sxx_system::s220 = Const::Intern("write_canonical");
Const* sxx_system::s221 = Const::Intern("write_term");
Const* sxx_system::s222 = Const::Intern("writeq");
Int* sxx_system::posint1 = Term::Number(1);
Int* sxx_system::posint1150 = Term::Number(1150);

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_load_sxx_system_0__1(mach));
}

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_system::s183, sxx_system::posint1150, sxx_system::s123, sxx_system::s185);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_system::s185, sxx_system::s105);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_system::s189, F(sxx_system::s62, sxx_system::s212, sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_system::s166, F(sxx_system::s62, sxx_system::s212, sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_sxx_system_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_system::s115, F(sxx_system::s62, sxx_system::s212, sxx_system::posint1));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_package_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
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
	local_aregs[0] = sxx_system::s185;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nb_setval_2::exec_static);
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_system_predicate_1__1(mach));
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s212, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s217))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s214))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s117))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s118))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s26, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s16, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s83, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s59, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s64, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s60, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s98, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s100, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s215, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s180, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s194, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s66, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s57, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s81, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s44, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s218, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s90, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s141, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s165, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s120, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__29);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s95, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s107, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s172, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s176, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__33);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s143, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__34);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s143, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__35);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s104, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__36);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s129, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__37);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s99, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__38);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s70, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__39);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s18, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__40);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s82, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__41);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s30, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__42);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s75, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__43);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__44);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s77, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__45);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__46);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s76, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__47);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s42, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__48);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s78, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__49);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s43, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__50);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s74, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__51);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s29, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__52);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s106, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__53);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s206, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__54);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s161, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__55);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s86, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__56);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s122, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__57);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s67, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__58);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s58, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__59);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s109, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__60);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s142, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__61);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__62);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__63);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__64);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s8, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__65);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s10, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__66);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s11, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__67);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s12, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__68);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s13, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__69);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s14, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__70);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s15, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__71);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s17, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__72);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s19, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__73);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s20, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__74);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s22, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__75);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s21, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__76);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s23, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__77);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s24, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__78);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s31, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__79);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s34, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__80);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s35, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__81);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s36, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__82);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s37, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__83);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s38, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__84);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s39, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__85);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s45, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__86);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s46, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__87);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s47, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__88);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s48, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__89);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s49, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__90);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s50, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__91);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s51, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__92);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s52, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__93);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s53, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__94);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s54, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__95);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s55, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__96);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s56, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__97);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s68, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__98);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__99);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s71, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__100);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s6, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__101);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s65, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__102);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s33, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__103);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s69, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__104);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s32, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__105);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s72, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__106);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s28, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__107);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s73, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__108);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s27, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__109);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s102, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__110);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s140, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__111);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s41, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__112);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s87, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__113);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s89, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__114);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s88, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__115);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s199, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__116);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s84, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__117);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s200, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__118);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s119, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__119);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s96, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__120);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s204, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__121);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s110, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__122);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s112, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__123);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s201, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__124);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s202, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__125);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s184, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__126);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s184, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__127);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s103, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__128);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s103, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__129);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s121, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__130);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__131);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s209, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__132);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s127, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__133);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s127, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__134);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s128, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__135);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s128, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__136);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s187, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__137);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s187, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__138);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s188, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__139);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s188, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__140);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s192, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__141);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s192, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__142);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s193, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__143);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s193, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__144);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s170))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__145);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s170, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__146);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s125, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__147);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s125, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__148);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s124, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__149);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s124, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__150);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s190, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__151);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s190, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__152);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s213, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__153);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s213, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__154);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s205, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__155);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s205, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__156);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s126, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__157);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s126, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__158);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s186, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__159);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s186, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__160);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s191, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__161);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s191, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__162);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s195, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__163);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s195, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__164);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s197, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__165);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s197, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__166);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s196, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__167);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s196, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__168);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s219, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__169);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s219, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__170);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s222, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__171);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s222, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__172);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s220, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__173);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s220, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__174);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s221, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__175);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s221, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__176);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s183, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__177);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s111, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__178);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s80, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__179);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s182, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__180);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s198))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__181);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s94, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__182);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s93, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__183);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s210, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__184);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s91, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__185);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s92, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__186);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s101, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__187);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s177, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__188);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s178, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__189);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s167, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__190);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s203, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__191);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s113, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__192);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s130))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__193);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s130, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__194);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s85))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__195);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s79, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__196);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s116, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__197);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s169, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__198);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s169, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__199);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s131, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__200);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s132, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__201);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s133, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__202);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s134, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__203);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s135, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__204);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s136, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__205);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s137, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__206);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s138, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__207);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s139, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__208);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s25, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__209);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s145, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__210);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s144, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__211);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s148, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__212);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s147, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__213);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s156, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__214);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s155, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__215);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s150, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__216);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s149, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__217);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s154, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__218);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s153, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__219);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s152, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__220);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s151, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__221);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s160, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__222);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s159, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__223);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s158, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__224);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s157, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__225);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s211, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__226);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s146, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__227);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s97))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__228);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s108, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__229);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s216))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__230);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s175))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__231);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s114))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__232);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s171))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__233);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s162, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__234);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s207, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__235);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s173, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__236);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s174))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__237);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_system::s164))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__238);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s164, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__239);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s163, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__240);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s179, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_system_predicate_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_system::s208, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
