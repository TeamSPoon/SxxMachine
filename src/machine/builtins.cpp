using namespace std;

#include "builtins.h"
#include "Prolog.h"

int pred_smallerthan_2::Arity() {
	return 2;
}

Code* pred_smallerthan_2::exec_pred_smallerthan_2(PrologMachine* mach) {
	long long i1, i2;
	Term* dereffed;

	dereffed = (mach->Areg[0])->Deref();
	i1 = dereffed->LongValue();
	dereffed = (mach->Areg[1])->Deref();
	i2 = dereffed->LongValue();
	if(i1 < i2) {
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return UpperPrologMachine::Call1;
	}
	return UpperPrologMachine::Fail0;
}

int pred_smallerorequal_2::Arity() {
	return 2;
}

Function* pred_smallerorequal_2::exec_static(PrologMachine* mach) {
	long long i1, i2;
	Term* dereffed;

	dereffed = (mach->Areg[0])->Deref();
	i1 = dereffed->LongValue();
	dereffed = (mach->Areg[1])->Deref();
	i2 = dereffed->LongValue();
	if(i1 <= i2) {
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return UpperPrologMachine::Call1;
	}
	return UpperPrologMachine::Fail0;
}

int pred_arithequal_2::Arity() {
	return 2;
}

Function* pred_arithequal_2::exec_static(PrologMachine* mach) {
	long long i1, i2;
	Term* dereffed;

	dereffed = (mach->Areg[0])->Deref();
	i1 = dereffed->LongValue();
	dereffed = (mach->Areg[1])->Deref();
	i2 = dereffed->LongValue();
	if(i1 == i2) {
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return UpperPrologMachine::Call1;
	}
	return UpperPrologMachine::Fail0;
}

int pred_arithdifferent_2::Arity() {
	return 2;
}

Function* pred_arithdifferent_2::exec_static(PrologMachine* mach) {
	long long i1, i2;
	Term* dereffed;

	dereffed = (mach->Areg[0])->Deref();
	i1 = dereffed->LongValue();
	dereffed = (mach->Areg[1])->Deref();
	i2 = dereffed->LongValue();
	if(i1 != i2) {
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return UpperPrologMachine::Call1;
	}
	return UpperPrologMachine::Fail0;
}

int pred_is_2::Arity() {
	return 2;
}

Code* pred_is_2::exec_pred_is_2(PrologMachine* mach) {
	long long i1;
	Term* dereffed;

	dereffed = (mach->Areg[1])->Deref();
	i1 = dereffed->LongValue();
	dereffed = (mach->Areg[0])->Deref();
	Int tempVar(i1);
	if(!(dereffed->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2];
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_unify_2::Arity() {
	return 2;
}

Code* pred_unify_2::exec_pred_unify_2(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();

	if(!(arg1->Unify(arg2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2];
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_univ_3::Arity() {
	return 3;
}

Function* pred_univ_3::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();
	Term* arg3 = mach->Areg[2]->Deref();
	Term* tail = arg3;

	int l = 0;
	while(tail->IsList()) {
		tail = ((static_cast<Funct*>(tail))->Arguments[1])->Deref();
		l++;
	}
	if(l == 0) {
		return UpperPrologMachine::Fail0;
	}
	if(!(tail->IsNil())) {
		return UpperPrologMachine::Fail0;
	}
	if(!(dynamic_cast<Const*>(arg2) != nullptr)) {
		return UpperPrologMachine::Fail0;
	}
	std::vector<Term*> args(l);
	tail = arg3;
	int i;
	for(i = 0; i < l; i++) {
		args[i] = (static_cast<Funct*>(tail))->Arguments[0];
		tail = ((static_cast<Funct*>(tail))->Arguments[1])->Deref();
	}

	Funct tempVar((static_cast<Const*>(arg2))->GetName(), args);
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[3];
	mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_write_1::Arity() {
	return 1;
}

Code* pred_write_1::exec_pred_write_1(PrologMachine* mach) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	wstring s = (mach->Areg[0]->Deref())->toString();
	cout << s;
	System::out::flush();
	mach->Areg[0] = mach->Areg[1];
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_nl_0::Arity() {
	return 0;
}

Function* pred_nl_0::exec_static(PrologMachine* mach) {
	cout << "" << endl;
	return UpperPrologMachine::Call1;
}

int pred_functor_3::Arity() {
	return 3;
}

bool pred_functor_3::DoFunctor3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3) {
	arg1 = arg1->Deref();
	arg2 = arg2->Deref();
	arg3 = arg3->Deref();

	if(dynamic_cast<Var*>(arg1) != nullptr) {
		if((!(dynamic_cast<Const*>(arg2) != nullptr)) || (!(dynamic_cast<Int*>(arg3) != nullptr))) {
			return false;
		}
		int i = static_cast<int>((static_cast<Int*>(arg3))->IntValue);
		wstring Name = arg2->GetName();
		std::vector<Term*> args(i);
		while(i-- > 0) {
			args[i] = new Var(mach);
		}
		Funct tempVar(Name, args);
		if(!(arg1->Unify(&tempVar))) {
			return false;
		}
	} else {
		wstring Name = arg1->GetName();
		int arity = arg1->Arity();
		Const tempVar2(Name);
		if(!(arg2->Unify(&tempVar2))) {
			return false;
		}
		Int tempVar3(arity);
		if(!(arg3->Unify(&tempVar3))) {
			return false;
		}
	}
	return true;
}

Function* pred_functor_3::exec_static(PrologMachine* mach) {
	if(!DoFunctor3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[3]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_arg_3::Arity() {
	return 3;
}

bool pred_arg_3::DoArg3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3) {
	arg1 = arg1->Deref();
	arg2 = arg2->Deref();
	arg3 = arg3->Deref();

	if(!(dynamic_cast<Int*>(arg1) != nullptr)) {
		return false;
	}
	if(!(dynamic_cast<Funct*>(arg2) != nullptr)) {
		return false;
	}
	int i = static_cast<int>((static_cast<Int*>(arg1))->IntValue);
	if(i < 1) {
		return false;
	}
	int l = (static_cast<Funct*>(arg2))->Arity();
	if(i > l) {
		return false;
	}
	Term* x = (static_cast<Funct*>(arg2))->Arguments[i - 1];
	x = x->Deref();
	return (arg3->Unify(x));
}

Function* pred_arg_3::exec_static(PrologMachine* mach) {
	if(!DoArg3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[3]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_nexttoken_1::Arity() {
	return 1;
}

Code* pred_nexttoken_1::exec_pred_nexttoken_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	if(!(dynamic_cast<Var*>(arg1) != nullptr)) {
		return UpperPrologMachine::Fail0;
	}
	Term* t = mach->nexttoken();
	if(!(arg1->Unify(t->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_cputime_1::Arity() {
	return 1;
}

Code* pred_cputime_1::exec_pred_cputime_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	long long t = System::currentTimeMillis();
	Term* o = new Int(t);
	if(!(arg1->Unify(o))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

findall_list::findall_list(PrologMachine* mach) {
	uptonowbegin = uptonowend = new Var(mach);
	time = mach->TimeStamp;
}

Term* findall_list::Deref() {
	return this;
}

bool findall_list::Unify(Term* that) {
	return that->Bind(this);
}

wstring findall_list::toString() {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	return ("findall = " + (uptonowbegin->Deref())->toString() + " - " + (uptonowend->Deref())->toString());
}

Code* pred_initfindall_1::entry_code = new pred_initfindall_1();

int pred_initfindall_1::Arity() {
	return 1;
}

Code* pred_initfindall_1::exec_pred_initfindall_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	findall_list tempVar(mach);
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_addfindall_2::Arity() {
	return 2;
}

Function* pred_addfindall_2::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	findall_list* arg2 = static_cast<findall_list*>(mach->Areg[1]->Deref());
	int oldtrail = mach->TrailTop;
	Term* copy = arg1->Copy(mach, arg2->time);
	int newtrail = mach->TrailTop;
	while(newtrail-- > oldtrail) {
		mach->TrailStack[newtrail]->UnTrailSelf();
		mach->TrailStack[newtrail] = nullptr;
	}
	mach->TrailTop = oldtrail;
	Var* NewTail = new Var(mach);
	(arg2->uptonowend)->Refers = new Funct((wstring(".")).intern(), copy, NewTail);
	arg2->uptonowend = NewTail;
	// mach.Areg[0] = mach.Areg[2] ; // install the continuation
	// mach.Areg[1] = mach.Areg[2] = null ;
	return UpperPrologMachine::Fail0;
}

int pred_retrievefindall_2::Arity() {
	return 2;
}

Code* pred_retrievefindall_2::exec_pred_retrievefindall_2(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	findall_list* arg2 = static_cast<findall_list*>(mach->Areg[1]->Deref());
	(arg2->uptonowend)->Refers = new Const((wstring("[]")).intern());
	if(!(arg1->Unify((arg2->uptonowbegin)->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_var_equal_2::Arity() {
	return 2;
}

Function* pred_var_equal_2::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();
	if(arg1 != arg2) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_trail_1::Arity() {
	return 1;
}

Function* pred_trail_1::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Int tempVar(static_cast<long long>(mach->TrailTop));
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_choice_1::Arity() {
	return 1;
}

Function* pred_choice_1::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Int tempVar(static_cast<long long>(mach->CurrentChoice));
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_type_of_2::Arity() {
	return 2;
}

Code* pred_type_of_2::exec_pred_type_of_2(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();
	wstring s;
	if(dynamic_cast<Var*>(arg1) != nullptr) {
		s = (wstring("var")).intern();
	} else if(dynamic_cast<FrozenVar*>(arg1) != nullptr) {
		s = (wstring("var")).intern();
	} else if(dynamic_cast<Int*>(arg1) != nullptr) {
		s = (wstring("integer")).intern();
	} else if(dynamic_cast<Const*>(arg1) != nullptr) {
		s = (wstring("atom")).intern();
	} else if(dynamic_cast<Funct*>(arg1) != nullptr) {
		s = (wstring("struct")).intern();
	} else {
		s = (wstring("unknown")).intern();
	}

	Const tempVar(s);
	if(!(arg2->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_assume_1::Arity() {
	return 1;
}

Code* pred_assume_1::exec_pred_assume_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* ass = (mach->assumptions)->Deref();
	PopAssumptions tempVar(mach, ass);
	mach->TrailEntry(&tempVar);
	mach->assumptions = new Funct((wstring(".")).intern(), arg1, ass);
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_allassumed_1::Arity() {
	return 1;
}

Code* pred_allassumed_1::exec_pred_allassumed_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* ass = (mach->assumptions)->Deref();
	if(!(arg1->Unify(ass))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_get0_1::Arity() {
	return 1;
}

Code* pred_get0_1::exec_pred_get0_1(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	int i;
	try {
		i = mach->currentinput->read();
	} catch(const exception& e) {
		return UpperPrologMachine::Fail0;
	}
	Int tempVar(static_cast<long long>(i));
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[1]; // install the continuation
	mach->Areg[1] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_halt_0::Arity() {
	return 0;
}

Function* pred_halt_0::exec_static(PrologMachine* mach) {
	mach->ExceptionRaised = 2;
	return nullptr;
}

int pred_setarg_3::Arity() {
	return 3;
}

bool pred_setarg_3::DoSetArg3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3) {
	arg1 = arg1->Deref();
	arg2 = arg2->Deref();
	arg3 = arg3->Deref();

	if(!(dynamic_cast<Int*>(arg1) != nullptr)) {
		return false;
	}
	if(!(dynamic_cast<Funct*>(arg2) != nullptr)) {
		return false;
	}
	int i = static_cast<int>((static_cast<Int*>(arg1))->IntValue);
	if(i < 1) {
		return false;
	}
	int l = (static_cast<Funct*>(arg2))->Arity();
	if(i > l) {
		return false;
	}
	Term* x = (static_cast<Funct*>(arg2))->Arguments[i - 1];
	Var* v = new Var(mach);
	v->Refers = arg3;
	(static_cast<Funct*>(arg2))->Arguments[i - 1] = v;
	SetArgTrail tempVar(x, v, mach);
	mach->TrailEntry(&tempVar);
	return true;
}

Function* pred_setarg_3::exec_static(PrologMachine* mach) {
	if(!DoSetArg3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[3]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
	return UpperPrologMachine::Call1;
}

pred_compare_3* pred_compare_3::entry_code = new pred_compare_3();

int pred_compare_3::Arity() {
	return 3;
}

int pred_compare_3::Compare(Term* t, Term* s) {
	if(t == s) {
		return 0;
	}
	if(dynamic_cast<Int*>(t) != nullptr) {
		if(!(dynamic_cast<Int*>(s) != nullptr)) {
			return -1;
		}
		long long i1 = (static_cast<Int*>(t))->IntValue;
		long long i2 = (static_cast<Int*>(s))->IntValue;
		if(i1 < i2) {
			return -1;
		}
		if(i1 == i2) {
			return 0;
		}
		return 1;
	}

	if(dynamic_cast<Const*>(t) != nullptr) {
		if(dynamic_cast<Int*>(s) != nullptr) {
			return 1;
		}
		if(!(dynamic_cast<Const*>(s) != nullptr)) {
			return -1;
		}
		wstring s1 = (static_cast<Const*>(t))->Name;
		wstring s2 = (static_cast<Const*>(s))->Name;
		return s1.compare(s2);
	}

	if(dynamic_cast<Funct*>(t) != nullptr) {
		if(dynamic_cast<Var*>(s) != nullptr) {
			return -1;
		}
		if(!(dynamic_cast<Funct*>(s) != nullptr)) {
			return 1;
		}
		Funct* f1 = static_cast<Funct*>(t);
		Funct* f2 = static_cast<Funct*>(s);
		wstring s1 = f1->Name;
		wstring s2 = f2->Name;
		int v = s1.compare(s2);
		if(v != 0) {
			return v;
		}

		int arity1 = f1->Arity();
		int arity2 = f2->Arity();
		if(arity1 < arity2) {
			return -1;
		}
		if(arity1 > arity2) {
			return 1;
		}
		std::vector<Term*> args1 = f1->Arguments;
		std::vector<Term*> args2 = f2->Arguments;
		int i;
		for(i = 0; i < arity1; i++) {
			Term* ti = (f1->Arguments[i])->Deref();
			Term* si = (f2->Arguments[i])->Deref();
			v = Compare(ti, si);
			if(v != 0) {
				return v;
			}
		}
		return 0;
	}

	if(dynamic_cast<Var*>(t) != nullptr) {
		if(!(dynamic_cast<Var*>(s) != nullptr)) {
			return 1;
		}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return ((static_cast<Var*>(t))->toString())->compareTo((static_cast<Var*>(s))->toString());
	}

	return 1; // to keep the compiler happy
}

Code* pred_compare_3::exec_pred_compare_3(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();
	Term* arg3 = mach->Areg[2]->Deref();
	int val = Compare(arg2, arg3);
	wstring s;
	if(val < 0) {
		s = (wstring("<")).intern();
	} else if(val == 0) {
		s = (wstring("=")).intern();
	} else {
		s = (wstring(">")).intern();
	}

	Const tempVar(s);
	if(!(arg1->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[3]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
	return UpperPrologMachine::Call1;
}

int pred_freeze_internal_2::Arity() {
	return 2;
}

Function* pred_freeze_internal_2::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();

	FrozenVar* frv = new FrozenVar(mach, arg2);
	if(!(arg1->Unify(frv))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_execcontinuation_0::entry_code;

int pred_execcontinuation_0::Arity() {
	return 0;
}

static* function < Function*pred_execcontinuation_0::(PrologMachine*) {
	Term* arg1 = mach::Areg[0].Deref();

	if(!(dynamic_cast<Continuation*>(arg1) != nullptr)) {
		return UpperPrologMachine::Fail0;
	}
	Continuation* c = static_cast<Continuation*>(arg1);
	function<Function*(PrologMachine*)> code = c->code;
	int i = (static_cast<Code*>(code))->Arity() + 1;
	while(i-- > 0) {
		mach::Areg[i] = c->Args[i];
	}
	return code;
}

int pred_frozen_2::Arity() {
	return 2;
}

Function* pred_frozen_2::exec_static(PrologMachine* mach) {
	Term* arg1 = mach->Areg[0]->Deref();
	Term* arg2 = mach->Areg[1]->Deref();
	Term* goal;

	if(dynamic_cast<Var*>(arg1) != nullptr) {
		goal = new Const((wstring("true")).intern());
	} else if(dynamic_cast<FrozenVar*>(arg1) != nullptr) {
		goal = ((static_cast<FrozenVar*>(arg1))->goals)->Deref();
	} else {
		return UpperPrologMachine::Fail0;
	}

	if(!(arg2->Unify(goal))) {
		return UpperPrologMachine::Fail0;
	}
	mach->Areg[0] = mach->Areg[2]; // install the continuation
	mach->Areg[1] = mach->Areg[2] = nullptr;
	return UpperPrologMachine::Call1;
}
