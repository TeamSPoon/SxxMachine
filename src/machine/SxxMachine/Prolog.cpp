using namespace std;

#include "Prolog.h"
#include "Fun.h"
#include "Var.h"
#include "Operation.h"
#include "PredTable.h"
#include "Code.h"
#include "Undoable.h"
#include "Lexer.h"
#include "../../benches/SxxMachine/run.h"
#include "Int.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "Continuation.h"
#include "Data.h"
#include "HeapChoice.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"
#include "../../bootlib/SxxMachine/sxx_read.h"
#include "../../bootlib/SxxMachine/sxx_system.h"
#include "Builtins.h"
#include "Metaterm.h"
#include "../../testing/SxxMachine/animal.h"
#include "Appendable.h"

namespace SxxMachine {
	using pred_toplevel_0 = SxxMachine::sxx_library::pred_toplevel_0;
Prolog* Prolog::M = nullptr;

	void Prolog::main(std::vector<wstring>& args) {

		// this is the application
		// before it can call a Prolog goal, it must make and initialise a
		// machine

		Prolog::M = new Prolog();
		Prolog::M->InitOnce();

		// any time a new goal is called, the machine has to be "reset"

		Prolog::M->InitAlways();

		if(args.empty()) {
			while(true) {
				try {
					Prolog::M->run();
				} catch(const exception& t) {
					t.printStackTrace();
				}
				if(Prolog::M->ExceptionRaised == 4) {
					return;
				}
			}
		}
		// then you can call the goal

		Var tempVar(Prolog::M);
		Term* Goal = new Fun("animal", &tempVar); // animal(X)
		Term* AnswerList = Prolog::M->SolveGoal(Goal);

		// AnswerList is now a list of instances of the Goal
		// you can iterate through it as follows

		Term* NextAnswerList,* Answer;

		NextAnswerList = AnswerList->Deref();
		while(NextAnswerList->IsList()) {
			Answer = ((static_cast<Fun*>(NextAnswerList))->Arg(0))->Deref();
			// do something with the answer - e.g. print it
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
			wstring s = Answer->toString();
			cout << s << endl;
			System::out::flush();

			// get the tail of the next answer list
			NextAnswerList = ((static_cast<Fun*>(NextAnswerList))->Arg(1))->Deref();
		}
	}

	Prolog::ChoicePointStackEntry::ChoicePointStackEntry(Prolog* outerInstance, std::vector<Term*>& args) : outerInstance(outerInstance) {
		int l = args.size();
		this->Arguments = std::vector<Term*>(l);
		while(l > 0) {
			l--;
			this->Arguments[l] = args[l];
		}

	}

PredTable* Prolog::Predicates = nullptr;
FailProc* Prolog::Fail0 = nullptr;
Call1Proc* Prolog::Call1 = nullptr;
Call2Proc* Prolog::Call2 = nullptr;
CutProc* Prolog::Cut2 = nullptr;
TrueProc* Prolog::True0 = nullptr;

	PredTable* Prolog::getPredicates() {
		return Prolog::Predicates;
	}

	void Prolog::run() {

		this->InitOnce();
		Int tempVar(0);
		this->Areg[0] = new Fun("toplevel", &tempVar);
		// 0 is a dummy continuation
		this->InitAlways();
		Operation* next = nullptr;
		this->code = Prolog::Call1;
		this->code = pred_toplevel_0::exec_static; // (mach);
		while(true) {
			while(this->ExceptionRaised == 0 && this->code != nullptr) {
				if(this->Areg[0] == nullptr) {
					Prolog::Debug(this->code);
				}
				next = this->code->Exec(this);
				if(next == nullptr || this->Areg[0] == nullptr) {
					Prolog::Debug(this->code);
					break;
				} else {
					this->code = next;
				}
			}
			if(this->ExceptionRaised > 1) {
				if(this->ExceptionRaised != 2) {
					cout << "Exceptional ending " << this->ExceptionRaised << endl;
				}
				exit(0);
			}
			// there are pending goals - deal with them
			this->ExceptionRaised = 0;
			Continuation* c = new Continuation(this->Areg, Prolog::GetArity(this->code), this->code);
			this->Areg[0] = new Fun("execpendinggoals", this->pendingGoals, c);
			PopPendingGoals tempVar2(this, this->pendingGoals);
			this->TrailEntry(&tempVar2);
			this->pendingGoals = Data::Intern("[]");
			this->code = Prolog::Call1;
		}
	}

	Term* Prolog::HC(Term* continuation) {
		HeapChoice tempVar(this->CUTB);
		return Data::F("cut", &tempVar, continuation);
	}

	int Prolog::GetArity(Operation* code) {
		if(dynamic_cast<Code*>(code) != nullptr) {
			return (static_cast<Code*>(code))->Arity();
		}
		return -1;
	}

	void Prolog::Debug(Operation* code) {
		try {
			if(code != nullptr) {
				cout << "CodeClass = " << code->getClass() << endl;
			}
			cout << "Code = " << code << endl;
			cout << "AReg[0] = " << Prolog::M->Areg[0] << endl;

			getchar();
		} catch(const IOException& e) {
			// TODO Auto-generated catch block
			e->printStackTrace();
		}
		// TODO Auto-generated method stub

	}

	Term* Prolog::SolveGoal(Term* Goal) {
		this->code = Prolog::Call1;
		Term* AnswerList = new Var(this);
		this->ExceptionRaised = 0;

		Fun tempVar("halt", new Int(0));
		this->Areg[0] = new Fun("findall", Goal, Goal, AnswerList, &tempVar);
		// pred_findall_3.entry_code;
		while(this->ExceptionRaised == 0) {
			this->code = this->code->Exec(this);
		}
		return AnswerList; // exceptions are ignored here !!!!
	}

	void Prolog::InitOnce() {
		if(nullptr == Prolog::Predicates) {
			Prolog::Predicates = new PredTable();
		}
		if(nullptr == Prolog::Fail0) {
			Prolog::Fail0 = new FailProc(this);
		}
		if(nullptr == Prolog::Call1) {
			Prolog::Call1 = new Call1Proc(this);
		}
		if(nullptr == Prolog::Call2) {
			Prolog::Call2 = new Call2Proc(this);
		}
		if(nullptr == Prolog::Cut2) {
			Prolog::Cut2 = new CutProc(this);
		}
		if(nullptr == Prolog::True0) {
			Prolog::True0 = new TrueProc(this);
		}
		this->ChoicePointStack = std::vector<ChoicePointStackEntry*>(20000);
		this->TrailStack = std::vector<Term*>(20000);
		try {
			this->lextoc = new Lexer(System::in, this);
		} catch(const exception& e) {
			System::err::println("lextoc failure");
		}
		this->currentinput = System::in;
		this->currentoutput = System::out;
		new sxx_library();
		new sxx_meta();
		new sxx_read();
		new sxx_system();
		new Builtins();
		new Metaterm();
		new animal();
	}

	void Prolog::InitAlways() {
		this->TimeStamp = -1000000000;
		this->CUTB = 0;
		this->CurrentChoice = -1;
		this->TrailTop = 0;
		std::vector<Term*> NoArgs = {};
		this->CreateChoicePoint(NoArgs);
		this->FillAlternative(nullptr);
		this->assumptions = this->pendingGoals = Data::Intern("[]");
		this->ExceptionRaised = 0;
	}

	Term* Prolog::nexttoken() {
		return this->lextoc->next();
	}

	Operation* Prolog::GetAlternative() {
		return this->ChoicePointStack[this->CurrentChoice]->Alternative;
	}

	void Prolog::FillAlternative(Operation* Alt) {
		this->ChoicePointStack[this->CurrentChoice]->Alternative = Alt;
	}

	void Prolog::RemoveChoice() {
		this->ChoicePointStack[this->CurrentChoice--] = nullptr;
	}

	void Prolog::RestoreArguments() {
		int i = this->ChoicePointStack[this->CurrentChoice]->Arguments->size();
		while(i-- > 0) {
			this->Areg[i] = this->ChoicePointStack[this->CurrentChoice]->Arguments[i];
		}
	}

	void Prolog::UnTrail() {
		while(this->TrailTop != this->ChoicePointStack[this->CurrentChoice]->Trail) {
			this->TrailStack[--this->TrailTop]->UnTrailSelf();
			this->TrailStack[this->TrailTop] = nullptr;
		}
	}

	void Prolog::push(Undoable* undoable) {
		this->TrailEntry(undoable);
	}

	void Prolog::TrailEntry(Undoable* po)
	{ // System.out.println("trailing") ;
		try {
			this->TrailStack[this->TrailTop] = po;
		} catch(const out_of_range& e) {
			cout << "trail expansion" << endl;
			int i = this->TrailStack.size();
			std::vector<Undoable*> newstack = std::vector<Term*>(i + 20000);
			while(i-- > 0) {
				newstack[i] = this->TrailStack[i];
			}
			this->TrailStack = newstack;
			this->TrailStack[this->TrailTop] = po;
		}
		this->TrailTop++;
	}

	void Prolog::CreateChoicePoint(std::vector<Term*>& args) {
		this->CurrentChoice++;
		try {
			this->ChoicePointStack[this->CurrentChoice] = new ChoicePointStackEntry(this, args);
		} catch(const out_of_range& e) {
			cout << "choice stack expansion" << endl;
			int i = this->ChoicePointStack.size();
			std::vector<ChoicePointStackEntry*> newstack(i + 20000);
			while(i-- > 0) {
				newstack[i] = this->ChoicePointStack[i];
			}
			this->ChoicePointStack = newstack;
			this->ChoicePointStack[this->CurrentChoice] = new ChoicePointStackEntry(this, args);
		}
		this->ChoicePointStack[this->CurrentChoice]->Trail = this->TrailTop;
		this->ChoicePointStack[this->CurrentChoice]->TimeStamp = ++this->TimeStamp;
	}

	void Prolog::DoCut(const int& CutTo) {
		int ch = this->CurrentChoice;
		while(ch != CutTo) {
			this->ChoicePointStack[ch] = nullptr;
			ch--;
		}
		this->CurrentChoice = CutTo;
	}

	Operation* Prolog::LoadPred(const wstring& name, const int& arity) {
		return Prolog::Predicates->LoadPred(name, arity);
	}

	Operation* Prolog::Reg(const int& i) {
		this->Areg[0] = this->Areg[i]; // install the continuation
		while(i-- > 1) {
			this->Areg[i] = nullptr;
		}
		return Prolog::Call1;
	}

	std::vector<Term*> Prolog::RegPull(const int& i) {
		int ii = i + 1;
		std::vector<Term*> t(ii);
		System::arraycopy(this->Areg, 0, t, 0, ii);
		return t;
	}

	int PrologObject::Arity() {
		return Data::OBJ;
	}

	Term* PrologObject::Deref() {
		cout << "general deref on objects not available" << endl;
		return nullptr;
	}

	void PrologObject::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("general print on objects not available");
	}

	bool PrologObject::Unify(Term* that, Prolog* mach) {
		cout << "general unify on objects not available" << endl;
		return false;
	}

	bool PrologObject::Bind(Term* that, Prolog* mach) {
		return false;
	}

	bool PrologObject::Equal(Term* that) {
		cout << "general equal on objects not available" << endl;
		return false;
	}

	wstring PrologObject::GetName() {
		cout << "general getname on objects not available" << endl;
		return "";
	}

	void PrologObject::UnTrailSelf() {
		cout << "general untrail on objects not available" << endl;
	}

	Term* PrologObject::Copy(Prolog* m, long long t) {
		cout << "general copy on objects not available" << endl;
		return nullptr;
	}

	long long PrologObject::LongValue() {
		return 0;
	}

	bool PrologObject::isConst() {
		// TODO Auto-generated method stub
		return false;
	}

	bool PrologObject::isFVar() {
		// TODO Auto-generated method stub
		return false;
	}

	bool PrologObject::isInt() {
		// TODO Auto-generated method stub
		return false;
	}

	bool PrologObject::isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	bool PrologObject::isVar() {
		// TODO Auto-generated method stub
		return false;
	}

	VarDict::VarDict(Var* changed, Var* copy) {
		this->old = changed;
		this->newer = copy;
	}

	Term* VarDict::Deref() {
		return this;
	}

	void VarDict::UnTrailSelf() {
		this->old->Refers = this->old;
	}

	Term* VarDict::Copy(Prolog* m, long long t) {
		return this->newer;
	}

	SetArgTrail::SetArgTrail(Term* old, Var* changed, Prolog* m) {
		this->OldValue = old;
		this->Which = changed;
		this->mach = m;
	}

	void SetArgTrail::UnTrailSelf() {
		this->Which->Refers = this->OldValue;
		this->Which->timestamp = this->mach->TimeStamp;
	}

	PopPendingGoals::PopPendingGoals(Prolog* m, Term* o) {
		this->mach = m;
		this->old = o;
	}

	void PopPendingGoals::UnTrailSelf() {
		this->mach->pendingGoals = this->old;
	}

	PopAssumptions::PopAssumptions(Prolog* m, Term* o) {
		this->mach = m;
		this->old = o;
	}

	void PopAssumptions::UnTrailSelf() {
		this->mach->assumptions = this->old;
	}
}
