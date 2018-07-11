using namespace std;

#include "Metaterm.h"
#include "Operation.h"
#include "Prolog.h"
#include "Term.h"

namespace SxxMachine {

	Operation* Metaterm::pred_freeze_2::Exec(Prolog* mach) {
		mach->Areg[0]->Deref().freeze(mach, mach->Areg[1]->Deref());
		mach->Reg(2);
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_frozen_2::Exec(Prolog* mach) {
		if(!mach->Areg[0]->Deref().frozenGoals().Unify(mach->Areg[1]->Deref(), mach)) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_attvar_1::Exec(Prolog* mach) {
		Term* arg1 = mach->Areg[0]->Deref();
		if(!(arg1->isAttvar())) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[1]; // install the continuation
		mach->Areg[1] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_put_attr_3::Exec(Prolog* mach) {
		mach->Areg[0]->Deref().putAttrValue(mach, mach->Areg[1]->Deref(), mach->Areg[2]->Deref());
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_get_attr_3::Exec(Prolog* mach) {
		Term* t = mach->Areg[0]->Deref().findOrAttrValue(mach, false, mach->Areg[2]->Deref());
		if(!(t->Unify(mach->Areg[0]->Deref(), mach))) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[3]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = mach->Areg[3] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_get_attrs_2::Exec(Prolog* mach) {
		if(mach->Areg[1]->Deref().Unify(mach->Areg[0]->Deref(), mach)) {
			return Prolog::Fail0;
		}
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_put_attrs_2::Exec(Prolog* mach) {
		mach->Areg[0]->Deref().setAttrs(mach, mach->Areg[1]->Deref());
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}

	Operation* Metaterm::pred_undo_1::Exec(Prolog* mach) {
		mach->Areg[0]->Deref();
		mach->Areg[0] = mach->Areg[2]; // install the continuation
		mach->Areg[1] = mach->Areg[2] = nullptr;
		return Prolog::Call1;
	}
}
