#ifndef PROLOG
#define PROLOG

#include "Term.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Term; }
namespace SxxMachine { class PredTable; }
namespace SxxMachine { class FailProc; }
namespace SxxMachine { class Call1Proc; }
namespace SxxMachine { class Call2Proc; }
namespace SxxMachine { class CutProc; }
namespace SxxMachine { class TrueProc; }
namespace SxxMachine { class Undoable; }
namespace SxxMachine { class Lexer; }
namespace SxxMachine { class run; }
namespace SxxMachine { class Var; }
class Appendable;

namespace SxxMachine {
	// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996

	// Prolog implementation in Java
	// KUL and CUM

	// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
	// allows to make a new Prolog, start a goal and get answers back
	// all at once as with findall



	class Prolog {
	public:
		static Prolog* M;

		virtual ~Prolog() {
			delete lextoc;
			delete assumptions;
			delete pendingGoals;
			delete currentinput;
			delete currentoutput;
			delete code;
		}

		static void main(std::vector<std::string>& args);

	public:
		class ChoicePointStackEntry {
		private:
			Prolog* outerInstance;

		public:
			Operation* Alternative;
			int Trail = 0;
			std::vector<Term*> Arguments;
			long long TimeStamp = 0;

			virtual ~ChoicePointStackEntry() {
				delete Alternative;
				delete outerInstance;
			}

			ChoicePointStackEntry(Prolog* outerInstance, std::vector<Term*>& args);

		};

	public:
		static PredTable* Predicates;
		static FailProc* Fail0;
		static Call1Proc* Call1;
		static Call2Proc* Call2;
		static CutProc* Cut2;
		static TrueProc* True0;

		virtual PredTable* getPredicates();

		std::vector<Term*> Areg(32);
		std::vector<ChoicePointStackEntry*> ChoicePointStack;
		std::vector<Undoable*> TrailStack;
		// public Lexer.PrologTokenizer stdin;
		long long TimeStamp = 0;
		int CUTB = 0;
		int CurrentChoice = 0;
		int TrailTop = 0;
		Lexer* lextoc = nullptr;
		Term* assumptions;
		Term* pendingGoals;
		int ExceptionRaised = 0;
		InputStream* currentinput;
		OutputStream* currentoutput;
		Operation* code;

		virtual void run();

		virtual Term* HC(Term* continuation);

		static int GetArity(Operation* code);

		static void Debug(Operation* code);

		virtual Term* SolveGoal(Term* Goal);

		virtual void InitOnce();

		virtual void InitAlways();

		virtual Term* nexttoken();

		virtual Operation* GetAlternative();

		virtual void FillAlternative(Operation* Alt);

		virtual void RemoveChoice();

		virtual void RestoreArguments();

		virtual void UnTrail();

		virtual void push(Undoable* undoable);

		virtual void TrailEntry(Undoable* po);

		virtual void CreateChoicePoint(std::vector<Term*>& args);

		virtual void DoCut(const int& CutTo);

		virtual Operation* LoadPred(const std::string& name, const int& arity);

		virtual Operation* Reg(const int& i);

		virtual std::vector<Term*> RegPull(const int& i);

	};

	class PrologObject : public Term {

	public:
		int Arity() override;

		Term* Deref() override;

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		bool Unify(Term* that, Prolog* mach) override;

		bool Bind(Term* that, Prolog* mach) override;

		bool Equal(Term* that) override;

		std::string GetName() override;

		void UnTrailSelf() override;

		Term* Copy(Prolog* m, long long t) override;

		long long LongValue() override;

		bool isConst() override;

		bool isFVar() override;

		bool isInt() override;

		bool isStruct() override;

		bool isVar() override;

	};

	// the following is used while copying a term

	class VarDict final : public PrologObject {
	public:
		Var* old,* newer;

		virtual ~VarDict() {
			delete old;
			delete newer;
		}

		VarDict(Var* changed, Var* copy);

		Term* Deref() override;

		void UnTrailSelf() override;

		Term* Copy(Prolog* m, long long t) override;
	};

	class SetArgTrail final : public PrologObject {
	public:
		Term* OldValue;
		Var* Which;
		Prolog* mach;

		virtual ~SetArgTrail() {
			delete OldValue;
			delete Which;
			delete mach;
		}

		SetArgTrail(Term* old, Var* changed, Prolog* m);

		void UnTrailSelf() override;

	};

	class PopPendingGoals final : public PrologObject {
	public:
		Prolog* mach;
		Term* old;

		virtual ~PopPendingGoals() {
			delete mach;
			delete old;
		}

		PopPendingGoals(Prolog* m, Term* o);

		void UnTrailSelf() override;

	};

	class PopAssumptions final : public PrologObject {
	public:
		Prolog* mach;
		Term* old;

		virtual ~PopAssumptions() {
			delete mach;
			delete old;
		}

		PopAssumptions(Prolog* m, Term* o);

		void UnTrailSelf() override;

	};

}


#endif	//#ifndef PROLOG
