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
#include "Const.h"
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

		M = new Prolog();
		M->InitOnce();

		// any time a new goal is called, the machine has to be "reset"

		M->InitAlways();

		if(args.empty()) {
			while(true) {
				try {
					M->run();
				} catch(const exception& t) {
					t.printStackTrace();
				}
				if(M->ExceptionRaised == 4) {
					return;
				}
			}
		}
		// then you can call the goal

		Var tempVar(M);
		Term* Goal = new Fun("animal", &tempVar); // animal(X)
		Term* AnswerList = M->SolveGoal(Goal);

		// AnswerList is now a list of instances of the Goal
		// you can iterate through it as follows

		Term* NextAnswerList,* Answer;

		NextAnswerList = AnswerList->Deref();
		while(NextAnswerList->IsList()) {
			Answer = ((static_cast<Fun*>(NextAnswerList))->Arguments[0])->Deref();
			// do something with the answer - e.g. print it
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
			wstring s = Answer->toString();
			cout << s << endl;
			System::out::flush();

			// get the tail of the next answer list
			NextAnswerList = ((static_cast<Fun*>(NextAnswerList))->Arguments[1])->Deref();
		}
	}

	Prolog::ChoicePointStackEntry::ChoicePointStackEntry(Prolog* outerInstance, std::vector<Term*>& args) : outerInstance(outerInstance) {
		int l = args.size();
		Arguments = std::vector<Term*>(l);
		while(l > 0) {
			l--;
			Arguments[l] = args[l];
		}

	}

PredTable* Prolog::Predicates = nullptr;
FailProc* Prolog::Fail0 = nullptr;
Call1Proc* Prolog::Call1 = nullptr;
Call2Proc* Prolog::Call2 = nullptr;
CutProc* Prolog::Cut2 = nullptr;
TrueProc* Prolog::True0 = nullptr;

	PredTable* Prolog::getPredicates() {
		return Predicates;
	}

	void Prolog::run() {

		InitOnce();
		Int tempVar(0);
		Areg[0] = new Fun("toplevel", &tempVar);
		// 0 is a dummy continuation
		InitAlways();
		Operation* next = nullptr;
		code = Prolog::Call1;
		code = pred_toplevel_0::exec_static; // (mach);
		while(true) {
			while(ExceptionRaised == 0 && code != nullptr) {
				if(Areg[0] == nullptr) {
					Debug(code);
				}
				next = code->Exec(this);
				if(next == nullptr || Areg[0] == nullptr) {
					Debug(code);
					break;
				} else {
					code = static_cast<Operation*>(next);
				}
			}
			if(ExceptionRaised > 1) {
				if(ExceptionRaised != 2) {
					cout << "Exceptional ending " << ExceptionRaised << endl;
				}
				exit(0);
			}
			// there are pending goals - deal with them
			ExceptionRaised = 0;
			Continuation* c = new Continuation(Areg, GetArity(code), code);
			Areg[0] = new Fun("execpendinggoals", pendingGoals, c);
			PopPendingGoals tempVar2(this, pendingGoals);
			TrailEntry(&tempVar2);
			pendingGoals = Const::Intern("[]");
			code = Prolog::Call1;
		}
	}

	Term* Prolog::HC(Term* continuation) {
		HeapChoice tempVar(CUTB);
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
			cout << "AReg[0] = " << M->Areg[0] << endl;

			getchar();
		} catch(const IOException& e) {
			// TODO Auto-generated catch block
			e->printStackTrace();
		}
		// TODO Auto-generated method stub

	}

	Term* Prolog::SolveGoal(Term* Goal) {
		code = Call1;
		Term* AnswerList = new Var(this);
		ExceptionRaised = 0;

		Fun tempVar("halt", new Int(0));
		Areg[0] = new Fun("findall", Goal, Goal, AnswerList, &tempVar);
		// pred_findall_3.entry_code;
		while(ExceptionRaised == 0) {
			code = code->Exec(this);
		}
		return AnswerList; // exceptions are ignored here !!!!
	}

	void Prolog::InitOnce() {
		if(nullptr == Predicates) {
			Predicates = new PredTable();
		}
		if(nullptr == Fail0) {
			Fail0 = new FailProc(this);
		}
		if(nullptr == Call1) {
			Call1 = new Call1Proc(this);
		}
		if(nullptr == Call2) {
			Call2 = new Call2Proc(this);
		}
		if(nullptr == Cut2) {
			Cut2 = new CutProc(this);
		}
		if(nullptr == True0) {
			True0 = new TrueProc(this);
		}
		ChoicePointStack = std::vector<ChoicePointStackEntry*>(20000);
		TrailStack = std::vector<Term*>(20000);
		try {
			lextoc = new Lexer(System::in, this);
		} catch(const exception& e) {
			System::err::println("lextoc failure");
		}
		currentinput = System::in;
		currentoutput = System::out;
		new sxx_library();
		new sxx_meta();
		new sxx_read();
		new sxx_system();
		new Builtins();
		new Metaterm();
		new animal();
	}

	void Prolog::InitAlways() {
		TimeStamp = -1000000000;
		CUTB = 0;
		CurrentChoice = -1;
		TrailTop = 0;
		std::vector<Term*> NoArgs = {};
		CreateChoicePoint(NoArgs);
		FillAlternative(nullptr);
		assumptions = pendingGoals = Const::Intern("[]");
		ExceptionRaised = 0;
	}

	Term* Prolog::nexttoken() {
		return lextoc->next();
	}

	Operation* Prolog::GetAlternative() {
		return ChoicePointStack[CurrentChoice]->Alternative;
	}

	void Prolog::FillAlternative(Operation* Alt) {
		ChoicePointStack[CurrentChoice]->Alternative = Alt;
	}

	void Prolog::RemoveChoice() {
		ChoicePointStack[CurrentChoice--] = nullptr;
	}

	void Prolog::RestoreArguments() {
		int i = ChoicePointStack[CurrentChoice]->Arguments->size();
		while(i-- > 0) {
			Areg[i] = ChoicePointStack[CurrentChoice]->Arguments[i];
		}
	}

	void Prolog::UnTrail() {
		while(TrailTop != ChoicePointStack[CurrentChoice]->Trail) {
			TrailStack[--TrailTop]->UnTrailSelf();
			TrailStack[TrailTop] = nullptr;
		}
	}

	void Prolog::push(Undoable* undoable) {
		TrailEntry(undoable);
	}

	void Prolog::TrailEntry(Undoable* po)
	{ // System.out.println("trailing") ;
		try {
			TrailStack[TrailTop] = po;
		} catch(const out_of_range& e) {
			cout << "trail expansion" << endl;
			int i = TrailStack.size();
			std::vector<Undoable*> newstack = std::vector<Term*>(i + 20000);
			while(i-- > 0) {
				newstack[i] = TrailStack[i];
			}
			TrailStack = newstack;
			TrailStack[TrailTop] = po;
		}
		TrailTop++;
	}

	void Prolog::CreateChoicePoint(std::vector<Term*>& args) {
		CurrentChoice++;
		try {
			ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(this, args);
		} catch(const out_of_range& e) {
			cout << "choice stack expansion" << endl;
			int i = ChoicePointStack.size();
			std::vector<ChoicePointStackEntry*> newstack(i + 20000);
			while(i-- > 0) {
				newstack[i] = ChoicePointStack[i];
			}
			ChoicePointStack = newstack;
			ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(this, args);
		}
		ChoicePointStack[CurrentChoice]->Trail = TrailTop;
		ChoicePointStack[CurrentChoice]->TimeStamp = ++TimeStamp;
	}

	void Prolog::DoCut(const int& CutTo) {
		int ch = CurrentChoice;
		while(ch != CutTo) {
			ChoicePointStack[ch] = nullptr;
			ch--;
		}
		CurrentChoice = CutTo;
	}

	Operation* Prolog::LoadPred(const wstring& name, const int& arity) {
		return Predicates->LoadPred(name, arity);
	}

	void Prolog::Reg(const int& i) {
		Areg[0] = Areg[i]; // install the continuation
		while(i-- > 1) {
			Areg[i] = nullptr;
		}

	}

	std::vector<Term*> Prolog::RegPull(const int& i) {
		int ii = i + 1;
		std::vector<Term*> t(ii);
		System::arraycopy(Areg, 0, t, 0, ii);
		return t;
	}

	int PrologObject::Arity() {
		return JAVA;
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
		old = changed;
		newer = copy;
	}

	Term* VarDict::Deref() {
		return this;
	}

	void VarDict::UnTrailSelf() {
		old->Refers = old;
	}

	Term* VarDict::Copy(Prolog* m, long long t) {
		return newer;
	}

	SetArgTrail::SetArgTrail(Term* old, Var* changed, Prolog* m) {
		OldValue = old;
		Which = changed;
		mach = m;
	}

	void SetArgTrail::UnTrailSelf() {
		Which->Refers = OldValue;
		Which->timestamp = mach->TimeStamp;
	}

	PopPendingGoals::PopPendingGoals(Prolog* m, Term* o) {
		mach = m;
		old = o;
	}

	void PopPendingGoals::UnTrailSelf() {
		mach->pendingGoals = old;
	}

	PopAssumptions::PopAssumptions(Prolog* m, Term* o) {
		mach = m;
		old = o;
	}

	void PopAssumptions::UnTrailSelf() {
		mach->assumptions = old;
	}
}
