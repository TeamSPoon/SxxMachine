#ifndef CODE
#define CODE

#include "Operation.h"
#include <string>
#include <vector>
#include <iostream>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {

	// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
	// Prolog implementation in Java
	// KUL and CUM

	// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
	// allows to make a new Prolog, start a goal and get answers back
	// all at once as with findall

	class Code : public Operation {
	protected:
		virtual int Arity();

	public:
		Operation Exec(Prolog* mach) override;

	protected:
		virtual void Init(Prolog* mach);
	};

	class FailProc : public Code {
	protected:
		int Arity() override;

	public:
		FailProc(Prolog* mach);

		Operation Exec(Prolog* mach) override;

	};

	class CutProc : public Code {
	protected:
		int Arity() override;

	public:
		CutProc(Prolog* mach);

		Operation Exec(Prolog* mach) override;
	};

	class TrueProc : public Code {
	protected:
		int Arity() override;

	public:
		TrueProc(Prolog* mach);

		Operation Exec(Prolog* mach) override;

	};

	class Call1Proc : public Code {
	protected:
		int Arity() override;

	public:
		Call1Proc(Prolog* mach);

		Operation Exec(Prolog* mach) override;
	};

	class Call2Proc : public Code {
	protected:
		int Arity() override;

	public:
		Call2Proc(Prolog* mach);

		Operation Exec(Prolog* mach) override;
	};

	class Undoable {

	public:
		virtual void Unwind() = 0;

	};

}


#endif	//#ifndef CODE
