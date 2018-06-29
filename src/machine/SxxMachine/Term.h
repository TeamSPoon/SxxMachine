#ifndef TERM
#define TERM

#include "Data.h"
#include "Code.h"
#include <string>
#include <vector>
#include <iostream>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Operation; }
class Appendable;

namespace SxxMachine {


	class Term : public Data {

		// private Term val;
	public:
		static constexpr int JAVA = -4;
		static constexpr int REAL = -3;
		static constexpr int INT = -2;
		static constexpr int VAR = -1;
		static constexpr int CONST = 0;

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

		virtual bool Bind(Term* that);

		virtual Term* Copy(Prolog* m, long long t);

		virtual Term* Deref();

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

			void Unwind() override;
		};

		// @TODO
	public:
		virtual Operation FindProc(const int& i);

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

			void Unwind() override;
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


			void Unwind() override;
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

			void Unwind() override;
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

			void Unwind() override;
		};

	public:
		virtual std::string toQuotedString();

		std::string toString() override;

		virtual bool Unify(Prolog* mach, Term* o1);

		virtual bool Unify(Term* that);

		virtual void UnTrailSelf();

	};

}


#endif	//#ifndef TERM
