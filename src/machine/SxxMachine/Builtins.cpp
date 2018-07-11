using namespace std;

#include "Builtins.h"
#include "Operation.h"
#include "Continuation.h"
#include "Term.h"
#include "Int.h"
#include "Fun.h"
#include "Const.h"
#include "Var.h"

namespace SxxMachine {

	Operation* Builtins::Borked::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::Borked::exec_static(Prolog* mach) {
		return nullptr;
	}

	Operation* Builtins::pred_fail_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_fail_0::exec_static(Prolog* mach) {
		return Prolog::Fail0;
	}

	Operation* Builtins::pred_true_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_true_0::exec_static(Prolog* mach) {
		return Prolog::True0;
	}

	int Builtins::pred_smallerthan_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_smallerthan_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_smallerthan_2::exec_static(Prolog* mach) {
		long long i1, i2;
		Term* dereffed;

		dereffed = (mach->Areg[0])->Deref();
		i1 = dereffed->LongValue();
		dereffed = (mach->Areg[1])->Deref();
		i2 = dereffed->LongValue();
		if(i1 < i2) {
			mach->Areg[0] = mach->Areg[2];
			mach->Areg[1] = mach->Areg[2] = nullptr;
			return Prolog::Call1;
		}
		return Prolog::Fail0;
	}

	int Builtins::pred_smallerorequal_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_smallerorequal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_smallerorequal_2::exec_static(Prolog* mach) {
		long long i1, i2;
		Term* dereffed;

		dereffed = (mach->Areg[0])->Deref();
		i1 = dereffed->LongValue();
		dereffed = (mach->Areg[1])->Deref();
		i2 = dereffed->LongValue();
		if(i1 <= i2) {
			mach->Areg[0] = mach->Areg[2];
			mach->Areg[1] = mach->Areg[2] = nullptr;
			return Prolog::Call1;
		}
		return Prolog::Fail0;
	}

	int Builtins::pred_arithequal_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_arithequal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_arithequal_2::exec_static(Prolog* mach) {
		long long i1, i2;
		Term* dereffed;

		dereffed = (mach->Areg[0])->Deref();
		i1 = dereffed->LongValue();
		dereffed = (mach->Areg[1])->Deref();
		i2 = dereffed->LongValue();
		if(i1 == i2) {
			mach->Areg[0] = mach->Areg[2];
			mach->Areg[1] = mach->Areg[2] = nullptr;
			return Prolog::Call1;
		}
		return Prolog::Fail0;
	}

	int Builtins::pred_arithdifferent_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_arithdifferent_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_arithdifferent_2::exec_static(Prolog* mach) {
		long long i1, i2;
		Term* dereffed;

		dereffed = (mach->Areg[0])->Deref();
		i1 = dereffed->LongValue();
		dereffed = (mach->Areg[1])->Deref();
		i2 = dereffed->LongValue();
		if(i1 != i2) {
			mach->Areg[0] = mach->Areg[2];
			mach->Areg[1] = mach->Areg[2] = nullptr;
			return Prolog::Call1;
		}
		return Prolog::Fail0;
	}

	int Builtins::pred_is_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_is_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_is_2::exec_static(Prolog* mach) {
		long long i1;
		Term* dereffed;

		dereffed = (mach->Areg[1])->Deref();
		i1 = dereffed->LongValue();
		dereffed = (mach->Areg[0])->Deref();
		Int tempVar(i1);
		if(!(dereffed->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_unify_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_unify_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_unify_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();

		if(!(arg1->Unify(arg2, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2];
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_univ_3::Arity() {
		return 3;
	}

	Operation* Builtins::pred_univ_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_univ_3::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();
		Term* arg3 = mach->Areg[2]->Deref();
		Term* tail = arg3;

		int l = 0;
		while(tail->IsList()) {
			tail = ((static_cast<Fun*>(tail))->Arguments[1])->Deref();
			l++;
		}
		if(l == 0) {
			return Prolog::Fail0;
		}
		if(!(tail->IsNil())) {
			return Prolog::Fail0;
		}
		if(!(arg2->isConst())) {
			return Prolog::Fail0;
		}
		std::vector<Term*> args(l);
		tail = arg3;
		int i;
		for(i = 0; i < l; i++) {
			args[i] = (static_cast<Fun*>(tail))->Arguments[0];
			tail = ((static_cast<Fun*>(tail))->Arguments[1])->Deref();
		}

		Fun tempVar((static_cast<Const*>(arg2))->GetName(), args);
		if(!(arg1->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3];
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

Code* const  Builtins::pred_write_1::entry_code = new pred_write_1();

	int Builtins::pred_write_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_write_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_write_1::exec_static(Prolog* mach) {
		try {
			mach->Areg[0]->Deref().formattedOutput(0, System::out);
		} catch(const IOException& e) {
			// TODO Auto-generated catch block
			e->printStackTrace();
		}
		System::out::flush();
		mach->Areg[0] = mach->Areg[1];
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_nl_0::Arity() {
		return 0;
	}

	Operation* Builtins::pred_nl_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_nl_0::exec_static(Prolog* mach) {
		cout << "" << endl;
		return Prolog::Call1;
	}

	int Builtins::pred_functor_3::Arity() {
		return 3;
	}

	bool Builtins::pred_functor_3::DoFunctor3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3) {
		arg1 = arg1->Deref();
		arg2 = arg2->Deref();
		arg3 = arg3->Deref();

		if(arg1->isVar()) {
			if((!(arg2->isConst())) || (!(arg3->isInt()))) {
				return false;
			}
			int i = static_cast<int>((static_cast<Int*>(arg3))->Num);
			wstring Name = arg2->GetName();
			std::vector<Term*> args(i);
			while(i-- > 0) {
				args[i] = new Var(mach);
			}
			Fun tempVar(Name, args);
			if(!(arg1->Unify(&tempVar, mach))) {
				return false;
			}
		} else {
			wstring Name = arg1->GetName();
			int arity = arg1->Arity();
			if(!(arg2->Unify(Const::Intern(Name), mach))) {
				return false;
			}
			Int tempVar2(arity);
			if(!(arg3->Unify(&tempVar2, mach))) {
				return false;
			}
		}
		return true;
	}

	Operation* Builtins::pred_functor_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_functor_3::exec_static(Prolog* mach) {
		if(!DoFunctor3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_arg_3::Arity() {
		return 3;
	}

	bool Builtins::pred_arg_3::DoArg3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3) {
		arg1 = arg1->Deref();
		arg2 = arg2->Deref();
		arg3 = arg3->Deref();

		if(!(arg1->isInt())) {
			return false;
		}
		if(!(arg2->isStruct())) {
			return false;
		}
		int i = static_cast<int>((static_cast<Int*>(arg1))->Num);
		if(i < 1) {
			return false;
		}
		int l = (static_cast<Fun*>(arg2))->Arity();
		if(i > l) {
			return false;
		}
		Term* x = (static_cast<Fun*>(arg2))->Arguments[i - 1];
		x = x->Deref();
		return (arg3->Unify(x, mach));
	}

	Operation* Builtins::pred_arg_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_arg_3::exec_static(Prolog* mach) {
		if(!DoArg3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_nexttoken_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_nexttoken_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_nexttoken_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		if(!(arg1->isVar())) {
			return Prolog::Fail0;
		}
		Term* t = mach->nexttoken();
		if(!(arg1->Unify(t->Deref(), mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_cputime_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_cputime_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_cputime_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		long long t = System::currentTimeMillis();
		Term* o = new Int(t);
		if(!(arg1->Unify(o, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	Builtins::findall_list::findall_list(Prolog* mach) {
		uptonowbegin = uptonowend = new Var(mach);
		time = mach->TimeStamp;
	}

	Term* Builtins::findall_list::Deref() {
		return this;
	}

	bool Builtins::findall_list::Unify(Term* that, Prolog* mach) {
		return that->Bind(this, mach);
	}

	wstring Builtins::findall_list::toString() {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return ("findall = " + (uptonowbegin->Deref())->toString() + " - " + (uptonowend->Deref())->toString());
	}

Code* Builtins::pred_initfindall_1::entry_code = new pred_initfindall_1();

	int Builtins::pred_initfindall_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_initfindall_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_initfindall_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		findall_list tempVar(mach);
		if(!(arg1->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_addfindall_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_addfindall_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_addfindall_2::exec_static(Prolog* mach) {
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
		(arg2->uptonowend)->Refers = new Fun(".", copy, NewTail);
		arg2->uptonowend = NewTail;
		// mach.Areg[0] = mach.Areg[2] ; // install the continuation
		// mach.Areg[1] = mach.Areg[2] = null ;
		return Prolog::Fail0;
	}

Code* Builtins::pred_retrievefindall_2::entry_code = new pred_retrievefindall_2();

	int Builtins::pred_retrievefindall_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_retrievefindall_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_retrievefindall_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		findall_list* arg2 = static_cast<findall_list*>(mach->Areg[1]->Deref());
		(arg2->uptonowend)->Refers = Const::Nil;
		if(!(arg1->Unify((arg2->uptonowbegin)->Deref(), mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_var_equal_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_var_equal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_var_equal_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();
		if(arg1 != arg2) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_trail_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_trail_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_trail_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Int tempVar(static_cast<long long>(mach->TrailTop));
		if(!(arg1->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_choice_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_choice_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_choice_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Int tempVar(static_cast<long long>(mach->CurrentChoice));
		if(!(arg1->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_type_of_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_type_of_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_type_of_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();
		wstring s;
		if(arg1->isVar()) {
			s = "var";
		} else if(arg1->isFVar()) {
			s = "var";
		} else if(arg1->isInt()) {
			s = "integer";
		} else if(arg1->isConst()) {
			s = "atom";
		} else if(arg1->isStruct()) {
			s = "struct";
		} else {
			s = "unknown";
		}

		if(!(arg2->Unify(Const::Intern(s), mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_assume_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_assume_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_assume_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* ass = (mach->assumptions)->Deref();
		PopAssumptions tempVar(mach, ass);
		mach->TrailEntry(&tempVar);
		mach->assumptions = new Fun(".", arg1, ass);
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_allassumed_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_allassumed_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_allassumed_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* ass = (mach->assumptions)->Deref();
		if(!(arg1->Unify(ass, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

Code* const  Builtins::pred_get0_1::entry_code = new pred_get0_1();

	int Builtins::pred_get0_1::Arity() {
		return 1;
	}

	Operation* Builtins::pred_get0_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_get0_1::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		int i;
		try {
			i = readOneChar(mach->currentinput);
		} catch(const exception& e) {
			return Prolog::Fail0;
		}
		Int tempVar(static_cast<long long>(i));
		if(!(arg1->Unify(&tempVar, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_get0_1::readOneChar(InputStream* currentinput) throw(IOException) {
		int i;
		if(currentinput->available() == 1) {
			i = currentinput->read();
			if(i != 10) {
				return i;
			}
		}
		i = currentinput->read();
		return i;
	}

	int Builtins::pred_halt_0::Arity() {
		return 0;
	}

	Operation* Builtins::pred_halt_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_halt_0::exec_static(Prolog* mach) {
		mach->ExceptionRaised = 2;
		return nullptr;
	}

	int Builtins::pred_setarg_3::Arity() {
		return 3;
	}

	bool Builtins::pred_setarg_3::DoSetArg3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3) {
		arg1 = arg1->Deref();
		arg2 = arg2->Deref();
		arg3 = arg3->Deref();

		if(!(arg1->isInt())) {
			return false;
		}
		if(!(arg2->isStruct())) {
			return false;
		}
		int i = static_cast<int>((static_cast<Int*>(arg1))->Num);
		if(i < 1) {
			return false;
		}
		int l = (static_cast<Fun*>(arg2))->Arity();
		if(i > l) {
			return false;
		}
		Term* x = (static_cast<Fun*>(arg2))->Arguments[i - 1];
		Var* v = new Var(mach);
		v->Refers = arg3;
		(static_cast<Fun*>(arg2))->Arguments[i - 1] = v;
		SetArgTrail tempVar(x, v, mach);
		mach->TrailEntry(&tempVar);
		return true;
	}

	Operation* Builtins::pred_setarg_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_setarg_3::exec_static(Prolog* mach) {
		if(!DoSetArg3(mach, mach->Areg[0], mach->Areg[1], mach->Areg[2])) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

pred_compare_3* Builtins::pred_compare_3::entry_code = new pred_compare_3();

	int Builtins::pred_compare_3::Arity() {
		return 3;
	}

	int Builtins::pred_compare_3::Compare(Term* t, Term* s) {
		if(t == s) {
			return 0;
		}
		int ta = t->Arity();
		int sa = s->Arity();
		if(ta < sa) {
			return -1;
		}
		if(ta > sa) {
			return 1;
		}
		if(ta == Term::REAL) {
			long long i1 = t->LongValue();
			long long i2 = s->LongValue();
			if(i1 < i2) {
				return -1;
			}
			if(i1 == i2) {
				return 0;
			}
			return 1;
		}
		if(ta == Term::CONST) {
			wstring s1 = t->GetName();
			wstring s2 = s->GetName();
			return s1.compare(s2);
		}
		if(ta == Term::VAR) {
			return Integer::compare(t->hashCode(), s->hashCode());
		}

		wstring s1 = t->GetName();
		wstring s2 = s->GetName();
		int v = s1.compare(s2);
		if(v != 0) {
			return v;
		}
		;
		for(int i = 0; i < ta; i++) {
			v = Compare(t->Arg(i)->Deref(), s->Arg(i)->Deref());
			if(v != 0) {
				return v;
			}
		}
		return 0;
	}

	Operation* Builtins::pred_compare_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_compare_3::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();
		Term* arg3 = mach->Areg[2]->Deref();
		int val = Compare(arg2, arg3);
		wstring s;
		if(val < 0) {
			s = "<";
		} else if(val == 0) {
			s = "=";
		} else {
			s = ">";
		}

		if(!(arg1->Unify(Const::Intern(s), mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

	int Builtins::pred_freeze_internal_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_freeze_internal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_freeze_internal_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();

		Var* frv = new Var(mach);
		frv->setGoals(mach, arg2);
		if(!(arg1->Unify(frv, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

Code* Builtins::pred_execcontinuation_0::entry_code = new pred_execcontinuation_0();

	int Builtins::pred_execcontinuation_0::Arity() {
		return 0;
	}

	Operation* Builtins::pred_execcontinuation_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_execcontinuation_0::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();

		if(!(dynamic_cast<Continuation*>(arg1) != nullptr)) {
			return Prolog::Fail0;
		}
		Continuation* c = static_cast<Continuation*>(arg1);
		Operation* code = c->code;
		int i = Prolog::GetArity(code) + 1;
		while(i-- > 0) {
			mach->Areg[i] = c->Args[i];
		}
		return code;
	}

	int Builtins::pred_frozen_2::Arity() {
		return 2;
	}

	Operation* Builtins::pred_frozen_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* Builtins::pred_frozen_2::exec_static(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		Term* arg2 = mach->Areg[1]->Deref();
		Term* goal;

		if(!arg1->isFrozen()) {
			if(arg1->isVar()) {
				goal = Const::Intern("true");
			}
			return Prolog::Fail0;
		} else {
			goal = arg1->frozenGoals()->Deref();
		}

		if(!(arg2->Unify(goal, mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}
}
