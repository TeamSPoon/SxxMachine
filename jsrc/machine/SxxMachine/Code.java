package SxxMachine;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new Prolog, start a goal and get answers back
// all at once as with findall

public class Code implements Operation {
	protected int Arity() {
		System.out.println("no general code arity !");
		return 0;
	}

	public Operation Exec(Prolog mach) {
		mach.ExceptionRaised = 3;
		return null;
	}

	protected void Init(Prolog mach) {
	}
}

class FailProc extends Code {
	protected int Arity() {
		return 1;
	}

	FailProc(Prolog mach) {
		mach.Predicates.InsertNameArityWithContinuation("fail", 1, this);
	}

	public Operation Exec(Prolog mach) {
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
	protected int Arity() {
		return 2;
	}

	CutProc(Prolog mach) {
		mach.Predicates.InsertNameArityWithContinuation("cut", 2, this);
	}

	public Operation Exec(Prolog mach) {

		// Areg[0] contains a Term of type HeapChoice
		int i = ((HeapChoice) (mach.Areg[0])).CutTo;
		mach.DoCut(i);
		mach.Areg[0] = mach.Areg[1];
		mach.CUTB = mach.CurrentChoice;
		return mach.Call1.Exec(mach);
	}
}

class TrueProc extends Code {
	protected int Arity() {
		return 1;
	}

	TrueProc(Prolog mach) {
		mach.Predicates.InsertNameArityWithContinuation("true", 1, this);
	}

	public Operation Exec(Prolog mach) {
		return Prolog.Call1;
	}

}

class Call1Proc extends Code {
	protected int Arity() {
		return 1;
	}

	Call1Proc(Prolog mach) {
		mach.Predicates.InsertNameArityWithContinuation("call", 1, this);
	}

	public Operation Exec(Prolog mach) { // Areg[0] contains a Fun - might have to
		// be dereffed
		Fun pred = (Fun) ((mach.Areg[0]).Deref());
		int arity;
		String FunctName;
		Operation code;

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
	protected int Arity() {
		return 2;
	}

	Call2Proc(Prolog mach) {
		mach.Predicates.InsertNameArityWithContinuation("call", 2, this);
	}

	public Operation Exec(Prolog mach) { // Areg[0] contains a Fun or Const - might
		// have to be dereffed
		Term obj = (mach.Areg[0]).Deref();
		int arity;
		String PredName;
		Operation code;
		Fun pred = null;

		if (obj instanceof Fun) {
			pred = (Fun) obj;
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
