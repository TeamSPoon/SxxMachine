// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall
/*
abstract public class Code {
	int Arity() {
		System.out.println("no general code arity !");
		return 0;
	}

	Code Exec(PrologMachine mach) {
		mach.ExceptionRaised = 3;
		return null;
	}

	void Init(PrologMachine mach) {

	}

}

class FailProc extends Code {
	int Arity() {
		return 1;
	}

	FailProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("fail".intern(), 1, this);
	}

	Code Exec(PrologMachine mach) {
		if (mach.CurrentChoice == -1)
			return (null);
		// unwind the trail
		mach.UnTrail();
		// restore the arguments
		mach.RestoreArguments();
		// reset CUTB
		mach.CUTB = mach.CurrentChoice - 1;
		// return the alternative as continuation
		return mach.GetAlternative();
	}

}

class CutProc extends Code {
	int Arity() {
		return 2;
	}

	CutProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("cut".intern(), 2, this);
	}

	Code Exec(PrologMachine mach) { // Areg[0] contains a Term of type
									// HeapChoice
		int i = ((HeapChoice) (mach.Areg[0])).CutTo;
		mach.DoCut(i);
		mach.Areg[0] = mach.Areg[1];
		mach.CUTB = mach.CurrentChoice;
		return mach.Call1.Exec(mach);
	}
}

class TrueProc extends Code {
	int Arity() {
		return 1;
	}

	TrueProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("true".intern(), 1, this);
	}

	Code Exec(PrologMachine mach) {
		return UpperPrologMachine.Call1;
	}

}

class Call1Proc extends Code {
	int Arity() {
		return 1;
	}

	Call1Proc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("call".intern(), 1, this);
	}

	Code Exec(PrologMachine mach) { // Areg[0] contains a Funct - might have to
									// be dereffed
		Funct pred = (Funct) ((mach.Areg[0]).Deref());
		int arity;
		String FunctName;
		Code code;

		FunctName = pred.GetName();
		arity = (pred.Arguments).length;
		code = mach.LoadPred(FunctName, arity - 1);
		Term args[] = pred.Arguments;
		while (arity-- > 0) {
			mach.Areg[arity] = args[arity];
		}
		return code;
	}
}

class Call2Proc extends Code {
	int Arity() {
		return 2;
	}

	Call2Proc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("call".intern(), 2, this);
	}

	Code Exec(PrologMachine mach) { // Areg[0] contains a Funct or Const - might
									// have to be dereffed
		Term obj = (mach.Areg[0]).Deref();
		int arity;
		String PredName;
		Code code;
		Funct pred = null;

		if (obj instanceof Funct) {
			pred = (Funct) obj;
			PredName = pred.GetName();
			arity = (pred.Arguments).length;
		} else // it is a Const
		{
			PredName = ((Const) obj).Name;
			arity = 0;
		}

		code = mach.LoadPred(PredName, arity);
		mach.Areg[arity] = mach.Areg[1];
		if (pred != null) {
			Term args[] = pred.Arguments;
			while (arity-- > 0) {
				mach.Areg[arity] = args[arity];
			}
		}
		return code;
	}
}
*/