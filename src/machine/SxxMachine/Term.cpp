using namespace std;

#include "Term.h"
#include "Prolog.h"
#include "Const.h"
#include "Fun.h"
#include "Operation.h"
#include "Appendable.h"

namespace SxxMachine {

	Term* Term::Arg(const int& i) {
		cout << "general Arg on terms not available" << endl;
		return nullptr;
	}

	Term* Term::ArgDeRef(const int& i) {
		return Arg(i)->Deref();
	}

	Term* Term::ArgNoDeRef(const int& i) {
		return Arg(i);
	}

	bool Term::Bind(Term* that, Prolog* mach) {
		return false;
	}

	Term* Term::Copy(Prolog* m, long long t) {
		cout << "general copy on terms not available" << endl;
		return nullptr;
	}

	Term* Term::Deref() {
		cout << "general deref on terms not available" << endl;
		return static_cast<Term*>(this);
	}

	int Term::hashCode() {
		// TODO Auto-generated method stub
		return Data::hashCode();
	}

	bool Term::equals(any obj) {
		cout << "general equals on terms not available" << endl;
		if(!(dynamic_cast<Term*>(obj) != nullptr)) {
			return false;
		}
		return Equal(any_cast<Term*>(obj));
	}

	bool Term::Equal(Term* that) {
		cout << "general equal on terms not available" << endl;
		return false;
	}

	Term* Term::findOrAttrValue(Prolog* trail, const bool& createIfMissing, Term* name) {
		if(attrs == nullptr || attrs == Const::Nil) {
			if(!createIfMissing) {
				return Const::Nil;
			}
			Term* wasAttrs = attrs;
			Fun* newatts = nullptr;
			attrs = Const::Nil;
			newatts = new Fun("att", name, nullptr, Const::Nil);
			if(trail != nullptr) {
				UndoableAnonymousInnerClass tempVar(this, wasAttrs);
				trail->push(&tempVar);
			}
			return newatts;
		} else {
			Term* next = attrs;
			do {
				if(next->Arg(0)->Equal(name)) {
					return static_cast<Fun*>(next);
				}
				Term* nnext = next->Arg(2);
				if(nnext->GetName() != "att") {
					break;
				}
				next = nnext;
			} while(true);
			if(!createIfMissing) {
				return Const::Nil;
			}
			Fun tempVar2("att", name, nullptr, Const::Nil);
			next->SetArg(trail, 2, &tempVar2);
			return next;
		}
	}

	Term::UndoableAnonymousInnerClass::UndoableAnonymousInnerClass(Term* outerInstance, SxxMachine::Term* wasAttrs) {
		this->outerInstance = outerInstance;
		this->wasAttrs = wasAttrs;
	}

	void Term::UndoableAnonymousInnerClass::UnTrailSelf() {
		outerInstance->attrs = wasAttrs;
	}

	Operation* Term::FindProc(const int& i) {
		return Prolog::Predicates->LoadPred(GetName(), i);
	}

	Term* Term::freeze(Prolog* trail, Term* newval) {
		Term* prev = frozenGoals();
		Term* newgoals = Data::Cons({ newval, prev });
		UndoableAnonymousInnerClass2 tempVar(this, prev);
		trail->push(&tempVar);
		return this->goals = newgoals;
	}

	Term::UndoableAnonymousInnerClass2::UndoableAnonymousInnerClass2(Term* outerInstance, SxxMachine::Term* prev) {
		this->outerInstance = outerInstance;
		this->prev = prev;
	}

	void Term::UndoableAnonymousInnerClass2::UnTrailSelf() {
		outerInstance->goals = prev;
	}

	Term* Term::frozenGoals() {
		return nullIsNil(goals);
	}

	std::vector<Term*> Term::GetArgs() {
		cout << "general GetArgs on terms not available" << endl;
		return nullptr;
	}

	wstring Term::GetName() {
		cout << "general GetName on terms not available" << endl;
		return "";
	}

	bool Term::isAttvar() {
		return attrs != nullptr && attrs != Const::Nil;
	}

	bool Term::isFrozen() {
		return goals != nullptr && goals != Const::Nil;
	}

	bool Term::IsList() {
		return false;
	}

	bool Term::IsNil() {
		return false;
	}

	long long Term::LongValue() {
		Term* deref = Deref();
		if(deref != static_cast<Term*>(this)) {
			return deref->LongValue();
		}
		cout << "general LongValue on terms not available" << endl;
		return -1;
	}

	Term* Term::nullIsNil(Term* attrs2) {
		return attrs2 == nullptr ? Const::Nil : attrs2;
	}

	void Term::putAttrValue(Prolog* trail, Term* name, Term* val) {
		Term* wasAttrs = attrs;
		Term* newatts = nullptr;
		if(attrs == nullptr || attrs == Const::Nil) {
			attrs = Const::Nil;
			newatts = new Fun("att", name, val, Const::Nil);
			if(trail != nullptr) {
				UndoableAnonymousInnerClass3 tempVar(this);
				trail->push(&tempVar);
			}
			attrs = newatts;
			return;
		} else {
			Term* next = wasAttrs;
			do {
				if(wasAttrs->Arg(0)->Equal(name)) {
					wasAttrs->SetArg(trail, 1, val);
					return;
				}
				Term* nnext = next->Arg(2);
				if(nnext->GetName() != "att") {
					break;
				}
				next = nnext;
			} while(true);
			Fun tempVar2("att", name, val, Const::Nil);
			next->SetArg(trail, 2, &tempVar2);
		}
	}

	Term::UndoableAnonymousInnerClass3::UndoableAnonymousInnerClass3(Term* outerInstance) {
		this->outerInstance = outerInstance;
	}

	void Term::UndoableAnonymousInnerClass3::UnTrailSelf() {
		// TODO Auto-generated method stub

	}

	void Term::SetArg(Prolog* trail, const int& i0, Term* value) {
		cout << "general SetArg on terms not available" << endl;
	}

	void Term::setAttrs(Prolog* trail, Term* newval) {
		Term* prev = nullIsNil(attrs);
		UndoableAnonymousInnerClass4 tempVar(this, prev);
		trail->push(&tempVar);
		this->attrs = newval;
	}

	Term::UndoableAnonymousInnerClass4::UndoableAnonymousInnerClass4(Term* outerInstance, SxxMachine::Term* prev) {
		this->outerInstance = outerInstance;
		this->prev = prev;
	}

	void Term::UndoableAnonymousInnerClass4::UnTrailSelf() {
		outerInstance->attrs = prev;
	}

	void Term::setGoals(Prolog* trail, Term* newval) {
		Term* prev = nullIsNil(goals);
		UndoableAnonymousInnerClass5 tempVar(this, prev);
		trail->push(&tempVar);
		this->goals = newval;
	}

	Term::UndoableAnonymousInnerClass5::UndoableAnonymousInnerClass5(Term* outerInstance, SxxMachine::Term* prev) {
		this->outerInstance = outerInstance;
		this->prev = prev;
	}

	void Term::UndoableAnonymousInnerClass5::UnTrailSelf() {
		outerInstance->goals = prev;
	}

	wstring Term::toQuotedString() {
		Appendable* buffer = new StringBuilder();
		try {
			formattedOutput(1, buffer);
		} catch(const exception& e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return buffer->toString();
	}

	wstring Term::toString() {
		return toQuotedString();
	}

	bool Term::Unify(Term* that, Prolog* mach) {
		cout << "general unify on terms not available" << endl;
		return false;
	}

	void Term::UnTrailSelf() {
		cout << "general untrail on terms not available" << endl;
	}

	bool Term::isFVar() {
		return isFrozen() && isVar();
	}

	bool Term::isInt() {
		return false;
	}
}
