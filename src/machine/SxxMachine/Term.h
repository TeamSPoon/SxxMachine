#ifndef TERM
#define TERM

#include "Undoable.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <any>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Operation; }
class Appendable;

namespace SxxMachine {


	class Term : public Undoable {

	public:
		Term* goals;

		Term* attrs;

		virtual ~Term() {
			delete goals;
			delete attrs;
		}

		virtual Term* Arg(const int& i);

		virtual Term* ArgDeRef(const int& i);

		virtual Term* ArgNoDeRef(const int& i);

		/// <summary>
		/// returns or fakes an arity for all subtypes
		/// </summary>
		virtual int Arity() = 0;

		virtual bool Bind(Term* that, Prolog* mach);

		virtual Term* Copy(Prolog* m, long long t);

		virtual Term* Deref();

		int hashCode() override;

		bool equals(std::any obj) override;

		virtual bool Equal(Term* that);

		virtual Term* findOrAttrValue(Prolog* trail, const bool& createIfMissing, Term* name);

	private:
		class UndoableAnonymousInnerClass : public Undoable {
		private:
			Term* outerInstance;

			SxxMachine::Term* wasAttrs;

		public:
			virtual ~UndoableAnonymousInnerClass() {
				delete wasAttrs;
			}

			UndoableAnonymousInnerClass(Term* outerInstance, SxxMachine::Term* wasAttrs);

			void UnTrailSelf() override;
		};

		// @TODO
	public:
		virtual Operation* FindProc(const int& i);

		virtual void formattedOutput(const int& formatFlags, Appendable* buffer) = 0;

		virtual Term* freeze(Prolog* trail, Term* newval);

	private:
		class UndoableAnonymousInnerClass2 : public Undoable {
		private:
			Term* outerInstance;

			SxxMachine::Term* prev;

		public:
			virtual ~UndoableAnonymousInnerClass2() {
				delete prev;
			}

			UndoableAnonymousInnerClass2(Term* outerInstance, SxxMachine::Term* prev);

			void UnTrailSelf() override;
		};

	public:
		virtual Term* frozenGoals();

		virtual std::vector<Term*> GetArgs();

		virtual std::string GetName();

		virtual bool isAttvar();

		virtual bool isFrozen();

		virtual bool IsList();

		virtual bool IsNil();

		virtual long long LongValue();

	private:
		Term* nullIsNil(Term* attrs2);

	public:
		virtual void putAttrValue(Prolog* trail, Term* name, Term* val);

	private:
		class UndoableAnonymousInnerClass3 : public Undoable {
		private:
			Term* outerInstance;

		public:
			UndoableAnonymousInnerClass3(Term* outerInstance);


			void UnTrailSelf() override;
		};

	public:
		virtual void SetArg(Prolog* trail, const int& i0, Term* value);

		virtual void setAttrs(Prolog* trail, Term* newval);

	private:
		class UndoableAnonymousInnerClass4 : public Undoable {
		private:
			Term* outerInstance;

			SxxMachine::Term* prev;

		public:
			virtual ~UndoableAnonymousInnerClass4() {
				delete prev;
			}

			UndoableAnonymousInnerClass4(Term* outerInstance, SxxMachine::Term* prev);

			void UnTrailSelf() override;
		};

	public:
		virtual void setGoals(Prolog* trail, Term* newval);

	private:
		class UndoableAnonymousInnerClass5 : public Undoable {
		private:
			Term* outerInstance;

			SxxMachine::Term* prev;

		public:
			virtual ~UndoableAnonymousInnerClass5() {
				delete prev;
			}

			UndoableAnonymousInnerClass5(Term* outerInstance, SxxMachine::Term* prev);

			void UnTrailSelf() override;
		};

	public:
		virtual std::string toQuotedString();

		std::string toString() override;

		virtual bool Unify(Term* that, Prolog* mach);

		void UnTrailSelf() override;

		virtual bool isVar() = 0;

		virtual bool isFVar();

		virtual bool isStruct() = 0;

		virtual bool isConst() = 0;

		virtual bool isInt();

		virtual double DoubleValue();

	};

}


#endif	//#ifndef TERM
