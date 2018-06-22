#include "Term.h"
#include "Prolog.h"
#include "Code.h"
#include "Name.h"

Term* Term::Deref() {
	std::cout << "general deref on terms not available" << std::endl;
	return nullptr;
}

std::string Term::toString() {
	return "general print on terms not available";
}

bool Term::Unify(Term* that) {
	std::cout << "general unify on terms not available" << std::endl;
	return false;
}

bool Term::Bind(Term* that) {
	return false;
}

bool Term::Equal(Term* that) {
	std::cout << "general equal on terms not available" << std::endl;
	return false;
}

std::string Term::GetName() {
	std::cout << "general getname on terms not available" << std::endl;
	return "";
}

int Term::Arity() {
	std::cout << "general getarity on terms not available" << std::endl;
	return 0;
}

void Term::UnTrailSelf() {
	std::cout << "general untrail on terms not available" << std::endl;
}

Term* Term::Copy(PrologMachine* m, long long t) {
	std::cout << "general copy on terms not available" << std::endl;
	return nullptr;
}

long long Term::LongValue() {
	return 0;
}

bool Term::IsList() {
	return false;
}

bool Term::IsNil() {
	return false;
}

Term* Term::Var(PrologMachine* mach) {
	return new Var(mach);
}

Int* Term::Number(long long i) {
	return new Int(i);
}

Funct* Term::Compound(const std::string& funct, std::vector<Term> &deref) {
	return new Funct(funct, deref);
}

Var::Var(PrologMachine* machin) {
	Refers = this;
	timestamp = machin->TimeStamp;
	mach = machin;
}

Var::Var(PrologMachine* machin, long long t) {
	Refers = this;
	timestamp = t;
	mach = machin;
}

Term* Var::Copy(PrologMachine* m, long long t) {
	Var* newv = new Var(m, t);
	VarDict* newdict = new VarDict(this, newv);
	Refers = newdict;
	mach->TrailEntry(this);
	return newv;
}

Term* Var::Deref() {
	if((Refers == this) || !(dynamic_cast<Term*>(Refers) != nullptr)) {
		return this;
	}
	return (std::any_cast<Term*>(Refers)).Deref();
}

void Var::UnTrailSelf() {
	Refers = this;
}

std::string Var::toString() {
	return "_" + Integer::toHexString(hashCode());
}

bool Var::Bind(Term* that) {
	Var* v2;
	if(dynamic_cast<Var*>(that) != nullptr) {
		Var* v1 = static_cast<Var*>(that);
		if(this->timestamp < v1->timestamp) {
			v1->Refers = this;
			v2 = v1;
		} else {
			this->Refers = that;
			v2 = this;
		}
	} else {
		this->Refers = that;
		v2 = this;
	}
	if(v2->timestamp < mach->ChoicePointStack[mach->CurrentChoice]->TimeStamp) {
		mach->TrailEntry(v2);
	}
	return true;
}

bool Var::Unify(Term* that) {
	return Bind(that);
}

bool Var::Equal(Term* that) {
	if(!(dynamic_cast<Var*>(that) != nullptr)) {
		return false;
	}
	;
	return this == that;
}

std::string Var::GetName() {
	return toString();
}

FrozenVar::FrozenVar(PrologMachine* machin, Term* action) {
	Refers = nullptr;
	timestamp = machin->TimeStamp;
	mach = machin;
	goals = action;
}

FrozenVar::FrozenVar(PrologMachine* machin, long long t, Term* action) {
	Refers = nullptr;
	timestamp = t;
	mach = machin;
	goals = action;
}

Term* FrozenVar::Copy(PrologMachine* m, long long t) {
	return new Const((std::string("[]")).intern()); // might decide to copy frozenvars
										// later
}

Term* FrozenVar::Deref() {
	if(Refers == nullptr) {
		return this;
	}
	return (static_cast<Term*>(Refers))->Deref();
}

void FrozenVar::UnTrailSelf() {
	Refers = nullptr;
}

std::string FrozenVar::toString() {
	return "_" + Integer::toHexString(hashCode());
}

bool FrozenVar::Bind(Term* that) {
	Var* v2;
	if(dynamic_cast<FrozenVar*>(that) != nullptr) {
		FrozenVar* thatv = static_cast<FrozenVar*>(that);
		Funct* newgoals = new Funct((std::string(",")).intern(), this->goals, thatv->goals);
		FrozenVar* newfrv = new FrozenVar(mach, mach->CurrentChoice, newgoals);
		this->Refers = thatv->Refers = newfrv;
		mach->TrailEntry(this);
		mach->TrailEntry(thatv);
	} else if(dynamic_cast<Var*>(that) != nullptr) {
		return that->Bind(this);
	} else {
		this->Refers = that;
		mach->TrailEntry(this);
		PopPendingGoals tempVar(mach, mach->pendinggoals);
		mach->TrailEntry(&tempVar);
		mach->pendinggoals = new Funct((std::string(".")).intern(), goals, mach->pendinggoals);
		mach->ExceptionRaised = 1;
	}
	return true;
}

bool FrozenVar::Unify(Term* that) {
	return Bind(that);
}

bool FrozenVar::Equal(Term* that) {
	if(!(dynamic_cast<FrozenVar*>(that) != nullptr)) {
		return false;
	}
	;
	return this == that;
}

std::string FrozenVar::GetName() {
	return toString();
}

Int::Int(long long i) {
	IntValue = i;
}

Term* Int::Copy(PrologMachine* m, long long t) {
	return new Int(IntValue);
}

long long Int::LongValue() {
	return IntValue;
}

Term* Int::Deref() {
	return this;
}

std::string Int::toString() {
	return "" + std::to_string(IntValue);
}

bool Int::Unify(Term* that) {
	Int* tmpint;
	if(!(dynamic_cast<Int*>(that) != nullptr)) {
		return that->Bind(this);
	}
	tmpint = static_cast<Int*>(that); // cast perhaps to be avoided
	return (tmpint->IntValue == this->IntValue);
}

bool Int::Equal(Term* that) {
	if(!(dynamic_cast<Int*>(that) != nullptr)) {
		return false;
	}
	;
	return this->IntValue == (static_cast<Int*>(that))->IntValue;
}

std::string Int::GetName() {
	return "" + std::to_string(IntValue);
}

std::string Const::IStr(const std::string& s) {
	return s.intern();
}

Const* Const::Intern(const std::string& s) {
	return new Const(s);
}

long long Const::LongValue() {
	return 0;
}

Const::Const(const std::string& N) {
	Name = N;
}

Term* Const::Copy(PrologMachine* m, long long t) {
	return new Const(Name);
}

Term* Const::Deref() {
	return this;
}

std::string Const::toString() {
	return Name;
}

bool Const::Unify(Term* that) {
	if(this->getClass() == that->getClass()) {
		// return (that.GetName()).equals(this.Name) ;
		return (that->GetName() == this->Name);
	}
	return that->Bind(this);
}

bool Const::Equal(Term* that) {
	if(this->getClass() == that->getClass()) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return (that->toString())->equals(this->toString());
	}
	return false;
}

int Const::Arity() {
	return 0;
}

std::string Const::GetName() {
	return Name;
}

bool Const::IsNil() {
	return this->Name == (std::string("[]")).intern();
}

Continuation::Continuation(std::vector<Term*>& args, Code* c) {
	int i = c->Arity() + 1;
	Args = std::vector<Term*>(i);
	while(i-- > 0) {
		Args[i] = args[i];
	}
	code = c;
}

Term* Continuation::Deref() {
	return this;
}

bool Continuation::Unify(Term* that) {
	return that->Bind(this);
}

Term* Funct::Copy(PrologMachine* m, long long t) {
	int a = Arguments.size();
	Funct* f = new Funct(Name, a);
	Term* arg;
	while(a-- > 0) {
		arg = Arguments[a]->Deref();
		f->Arguments[a] = arg->Copy(m, t);
	}
	return f;
}

Funct::Funct(const std::string& N) {
	Name = N;
}

Funct::Funct(const std::string& N, int arity) {
	Name = N;
	Arguments = std::vector<Term*>(arity);
}

Funct::Funct(const std::string& N, Term* a1) {
	Name = N;
	Arguments = std::vector<Term*>(1);
	Arguments[0] = a1;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2) {
	Name = N;
	Arguments = std::vector<Term*>(2);
	Arguments[0] = a1;
	Arguments[1] = a2;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3) {
	Name = N;
	Arguments = std::vector<Term*>(3);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4) {
	Name = N;
	Arguments = std::vector<Term*>(4);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5) {
	Name = N;
	Arguments = std::vector<Term*>(5);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6) {
	Name = N;
	Arguments = std::vector<Term*>(6);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7) {
	Name = N;
	Arguments = std::vector<Term*>(7);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8) {
	Name = N;
	Arguments = std::vector<Term*>(8);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9) {
	Name = N;
	Arguments = std::vector<Term*>(9);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10) {
	Name = N;
	Arguments = std::vector<Term*>(10);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11) {
	Name = N;
	Arguments = std::vector<Term*>(11);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12) {
	Name = N;
	Arguments = std::vector<Term*>(12);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13) {
	Name = N;
	Arguments = std::vector<Term*>(13);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14) {
	Name = N;
	Arguments = std::vector<Term*>(14);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15) {
	Name = N;
	Arguments = std::vector<Term*>(15);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;

}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16) {
	Name = N;
	Arguments = std::vector<Term*>(16);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17) {
	Name = N;
	Arguments = std::vector<Term*>(17);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
	Arguments[16] = a17;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17, Term* a18) {
	Name = N;
	Arguments = std::vector<Term*>(18);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
	Arguments[16] = a17;
	Arguments[17] = a18;
}

Funct::Funct(const std::string& N, std::vector<Term*>& args) {
	Name = N;
	Arguments = args;
}

long long Funct::LongValue() {
	int arity = Arguments.size();
	Term* a1,* a2;
	long long i1, i2;
	if(arity == 1) {
		i1 = (Arguments[0]->Deref())->LongValue();
		if(Name == (std::string("-")).intern()) {
			return -i1;
		}
		if(Name == (std::string("+")).intern()) {
			return i1;
		}
		return 0;
	}
	if(arity != 2) {
		return 0;
	}
	i1 = (Arguments[0]->Deref())->LongValue();
	i2 = (Arguments[1]->Deref())->LongValue();
	if(Name == (std::string("-")).intern()) {
		return i1 - i2;
	}
	if(Name == (std::string("+")).intern()) {
		return i1 + i2;
	}
	if(Name == (std::string("*")).intern()) {
		return i1 * i2;
	}
	if(Name == (std::string("/")).intern()) {
		return i1 / i2;
	}
	return 0;
}

Term* Funct::Deref() {
	return this;
}

bool Funct::islist(int i, const std::string& Name) {
	if(i != 2) {
		return false;
	}
	return Name == (std::string(".")).intern();
}

bool Funct::IsList() {
	return islist(this->Arguments.size(), this->Name);
}

std::string Funct::listify(Term* T) {
	std::string s;
	if(T->IsList()) {
		Term* A1,* A2;
		A1 = (static_cast<Funct*>(T))->Arguments[0];
		A2 = (static_cast<Funct*>(T))->Arguments[1];
		A1 = A1->Deref();
		A2 = A2->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "," + A1->toString() + listify(A2);
	} else if((dynamic_cast<Const*>(T) != nullptr) && ("[]" == T->GetName())) {
		return "";
	}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	return " | " + T->toString();
}

std::string Funct::toString() {
	int i = Arguments.size();
	if(islist(i, Name)) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "[" + (Arguments[0]->Deref())->toString() + listify(Arguments[1]->Deref()) + "]";
	}
	std::string s = ")";
	Term* p;
	while(--i != 0) {
		p = Arguments[i]->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		s = "," + p->toString() + s;
	}
	p = Arguments[0]->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	s = p->toString() + s;
	return Name + "(" + s;
}

bool Funct::Unify(Term* that) {
	Funct* tmpfunct;
	int i, j;
	Term arg1[], obj1;
	Term arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return that->Bind(this);
	}
	// if (!((this.Name).equals(that.GetName()))) return false ;
	if(static_cast<this::Name*>(!) = (that->GetName())) {
		return false;
	}

	tmpfunct = static_cast<Funct*>(that); // cast perhaps to be avoided
	i = Arguments.size();
	j = tmpfunct->Arguments.size();
	if(i != j) {
		return false;
	}
	arg1 = this->Arguments;
	arg2 = tmpfunct->Arguments;
	do {
		obj1 = arg1[--i].Deref();
		obj2 = arg2[i].Deref();
		if(!(obj1::Unify(obj2))) {
			return false;
		}
	} while(i > 0);
	return true;
}

bool Funct::Equal(Term* that) {
	Funct* tmpfunct;
	int i, j;
	Term arg1[], obj1;
	Term arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return false;
	}
	;
	if(!((this->GetName()) == that->GetName())) {
		return false;
	}

	tmpfunct = static_cast<Funct*>(that); // cast perhaps to be avoided
	i = Arguments.size();
	j = tmpfunct->Arguments.size();
	if(i != j) {
		return false;
	}
	arg1 = this->Arguments;
	arg2 = tmpfunct->Arguments;
	do {
		obj1 = arg1[--i].Deref();
		obj2 = arg2[i].Deref();
		if(!(obj1::Equal(obj2))) {
			return false;
		}
	} while(i > 0);
	return true;
}

int Funct::Arity() {
	return Arguments.size();
}

std::string Funct::GetName() {
	return Name;
}
