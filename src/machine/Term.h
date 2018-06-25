#ifndef TERM
#define TERM

#include <string>
#include <vector>
#include <iostream>
#include <any>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;
class Funct;
class Const;
class Var;
class Int;
class Appendable;
class Name;

class Term {

public:
	virtual Term* Deref();

	std::string toString() override;

	virtual bool Unify(Term* that);

	virtual bool Bind(Term* that);

	virtual bool Equal(Term* that);

	virtual std::string GetName();

	virtual int Arity();

	virtual void UnTrailSelf();

	virtual Term* Copy(PrologMachine* m, long long t);

	virtual long long LongValue();

	virtual bool IsList();

	virtual bool IsNil();

	static Funct* F(const std::string& string6, std::vector<Term> &terms);

	static Funct* F(Const* string6, std::vector<Term> &terms);

	static Term* Var(PrologMachine* mach);

	virtual Term* findOrAttrValue(PrologMachine* mach, const bool& b, Term* deref);

	virtual void putAttrValue(PrologMachine* mach, Term* deref, Term* deref2);

	virtual void setAttrs(PrologMachine* mach, Term* deref);

	virtual void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException);

	static Int* Number(const int& i);

	virtual void freeze(PrologMachine* mach, Term* deref);

	virtual Term* frozenGoals();

	virtual bool isAttvar();

};

class Var final : public Term {
public:
	std::any Refers;
	long long timestamp = 0;
	PrologMachine* mach;

	virtual ~Var() {
		delete mach;
	}

	Var(PrologMachine* machin);

	Var(PrologMachine* machin, long long t);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	void UnTrailSelf() override;

	std::string toString() override;

	bool Bind(Term* that) override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;
};

class FrozenVar final : public Term {
public:
	Term* Refers;
	long long timestamp = 0;
	PrologMachine* mach;
	Term* goals;

	virtual ~FrozenVar() {
		delete Refers;
		delete mach;
		delete goals;
	}

	FrozenVar(PrologMachine* machin, Term* action);

	FrozenVar(PrologMachine* machin, long long t, Term* action);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	void UnTrailSelf() override;

	std::string toString() override;

	bool Bind(Term* that) override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;
};

class Int final : public Term {
public:
	long long IntValue = 0;

	Int(long long i);

	Term* Copy(PrologMachine* m, long long t) override;

	long long LongValue() override;

	Term* Deref() override;

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;

};

class Const final : public Term {
public:
	static Term* const  Nil;
	std::string Name;

	long long LongValue() override;

	Const(const std::string& N);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	int Arity() override;

	std::string GetName() override;

	bool IsNil() override;

	static std::string IStr(const std::string& string);

	static Const* Intern(const std::string& N);

};

class Continuation final : public Term {
public:
	std::function<Function*(PrologMachine*)> code;
	std::vector<Term*> Args;

	virtual ~Continuation() {
		delete code;
	}

	Continuation(std::vector<Term*>& args, const int& i, std::function<Function*(PrologMachine*)>& c);

	Term* Deref() override;

	bool Unify(Term* that) override;

};

class Funct final : public Term {
public:
	std::vector<Term*> Arguments;
	std::string Name;

	Term* Copy(PrologMachine* m, long long t) override;

	Funct(const std::string& N);

	Funct(const std::string& N, const int& arity);

	Funct(const std::string& N, Term* a1);

	Funct(const std::string& N, Term* a1, Term* a2);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17, Term* a18);

	Funct(const std::string& N, std::vector<Term*>& args);

	long long LongValue() override;

	Term* Deref() override;

	bool islist(const int& i, const std::string& Name);

	bool IsList() override;

	std::string listify(Term* T);

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	int Arity() override;

	std::string GetName() override;
};


#endif	//#ifndef TERM
