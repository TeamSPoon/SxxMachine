import java.io.InputStream;
import java.io.OutputStream;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall

public class Prolog {
	public static void main(String args[]) {

		// this is the application
		// before it can call a Prolog goal, it must make and initialise a
		// machine

		PrologMachine M = new PrologMachine();
		M.InitOnce();

		// any time a new goal is called, the machine has to be "reset"

		M.InitAlways();

		if(args.length==0) {
			M.run();
			return;
		}
		// then you can call the goal

		//Term Goal = new Funct("animal".intern(), new Var(M)); // animal(X)
		Term Goal = new Funct("top".intern(),new Var(M)); // animal(X)
		
		Term AnswerList = M.SolveGoal(Goal);
		// Term Goal = new Funct("animal".intern(), new Var(M)); //
		// animal(X)
		// Term AnswerList = M.SolveGoal(Goal);

		// AnswerList is now a list of instances of the Goal
		// you can iterate through it as follows

		Term NextAnswerList, Answer;

		NextAnswerList = AnswerList.Deref();
		while (NextAnswerList.IsList()) {
			Answer = (((Funct) NextAnswerList).Arguments[0]).Deref();
			// do something with the answer - e.g. print it
			String s = Answer.toString();
			System.out.println(s);
			System.out.flush();

			// get the tail of the next answer list
			NextAnswerList = (((Funct) NextAnswerList).Arguments[1]).Deref();
		}
	}
}

class ChoicePointStackEntry {
	Code Alternative;
	int Trail;
	Term Arguments[];
	long TimeStamp;

	ChoicePointStackEntry(Term args[]) {
		int l = args.length;
		Arguments = new Term[l];
		while (l > 0) {
			l--;
			Arguments[l] = args[l];
		}

	}
}

class UpperPrologMachine {
	static PredTable Predicates = null;
	static FailProc Fail0 = null;
	static Call1Proc Call1 = null;
	static Call2Proc Call2 = null;
	static CutProc Cut2 = null;
	static TrueProc True0 = null;
}

class PrologMachine extends UpperPrologMachine {
	Term Areg[] = new Term[32];
	ChoicePointStackEntry ChoicePointStack[];
	Term TrailStack[];
	// PrologTokenizer stdin ;
	long TimeStamp;
	int CUTB;
	int CurrentChoice;
	int TrailTop;
	Lexer lextoc = null;
	Term assumptions;
	Term pendinggoals;
	int ExceptionRaised;
	InputStream currentinput;
	OutputStream currentoutput;

	public void run() {
		Code code;

		InitOnce();
		Areg[0] = new Funct("toplevel".intern(), new Int(0));
		// 0 is a dummy continuation
		InitAlways();
		code = UpperPrologMachine.Call1;
		while (true) {
			while (ExceptionRaised == 0) {
				code = code.Exec(this);
			}
			if (ExceptionRaised > 1) {
				if (ExceptionRaised != 2)
					System.out.println("Exceptional ending " + ExceptionRaised);
				System.exit(0);
			}
			// there are pending goals - deal with them
			ExceptionRaised = 0;
			Continuation c = new Continuation(Areg, code);
			Areg[0] = new Funct("execpendinggoals".intern(), pendinggoals, c);
			TrailEntry(new PopPendingGoals(this, pendinggoals));
			pendinggoals = new Const("[]".intern());
			code = UpperPrologMachine.Call1;
		}
	}

	Term SolveGoal(Term Goal) {
		Code code = UpperPrologMachine.Call1;
		Term AnswerList = new Var(this);
		ExceptionRaised = 0;

		Areg[0] = new Funct("findall".intern(), Goal, Goal, AnswerList, new Funct("halt".intern(), new Int(0)));

		while (ExceptionRaised == 0) {
			code = code.Exec(this);
		}
		return AnswerList; // exceptions are ignored here !!!!
	}

	void InitOnce() {
		if (null == Predicates)
			Predicates = new PredTable();
		if (null == Fail0)
			Fail0 = new FailProc(this);
		if (null == Call1)
			Call1 = new Call1Proc(this);
		if (null == Call2)
			Call2 = new Call2Proc(this);
		if (null == Cut2)
			Cut2 = new CutProc(this);
		if (null == True0)
			True0 = new TrueProc(this);
		ChoicePointStack = new ChoicePointStackEntry[20000];
		TrailStack = new Term[20000];
		try {
			lextoc = new Lexer(System.in, this);
		} catch (Exception e) {
			System.err.println("lextoc failure");
		}
		currentinput = System.in;
		currentoutput = System.out;
	}

	void InitAlways() {
		TimeStamp = -1000000000;
		CUTB = 0;
		CurrentChoice = -1;
		TrailTop = 0;
		Term NoArgs[] = {};
		CreateChoicePoint(NoArgs);
		FillAlternative(null);
		assumptions = pendinggoals = new Const("[]".intern());
		ExceptionRaised = 0;
	}

	Term nexttoken() {
		return lextoc.next();
	}

	Code GetAlternative() {
		return ChoicePointStack[CurrentChoice].Alternative;
	}

	void FillAlternative(Code Alt) {
		ChoicePointStack[CurrentChoice].Alternative = Alt;
	}

	void RemoveChoice() {
		ChoicePointStack[CurrentChoice--] = null;
	}

	void RestoreArguments() {
		int i = ChoicePointStack[CurrentChoice].Arguments.length;
		while (i-- > 0) {
			Areg[i] = ChoicePointStack[CurrentChoice].Arguments[i];
		}
	}

	void UnTrail() {
		while (TrailTop != ChoicePointStack[CurrentChoice].Trail) {
			TrailStack[--TrailTop].UnTrailSelf();
			TrailStack[TrailTop] = null;
		}
	}

	void TrailEntry(Term po) { // System.out.println("trailing") ;
		try {
			TrailStack[TrailTop] = po;
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("trail expansion");
			int i = TrailStack.length;
			Term newstack[] = new Term[i + 20000];
			while (i-- > 0) {
				newstack[i] = TrailStack[i];
			}
			TrailStack = newstack;
			TrailStack[TrailTop] = po;
		}
		TrailTop++;
	}

	void CreateChoicePoint(Term args[]) {
		CurrentChoice++;
		try {
			ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args);
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("choice stack expansion");
			int i = ChoicePointStack.length;
			ChoicePointStackEntry newstack[] = new ChoicePointStackEntry[i + 20000];
			while (i-- > 0) {
				newstack[i] = ChoicePointStack[i];
			}
			ChoicePointStack = newstack;
			ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args);
		}
		ChoicePointStack[CurrentChoice].Trail = TrailTop;
		ChoicePointStack[CurrentChoice].TimeStamp = ++TimeStamp;
	}

	void DoCut(int CutTo) {
		int ch = CurrentChoice;
		while (ch != CutTo) {
			ChoicePointStack[ch] = null;
			ch--;
		}
		CurrentChoice = CutTo;
	}

	public Code LoadPred(String name, int arity) {
		return Predicates.LoadPred(this, name, arity);
	}
}

abstract class PrologObject extends Term {

	Term Deref() {
		System.out.println("general deref on objects not available");
		return null;
	}

	public String toString() {
		return "general print on objects not available";
	}

	boolean Unify(Term that) {
		System.out.println("general unify on objects not available");
		return false;
	}

	boolean Bind(Term that) {
		return false;
	}

	boolean Equal(Term that) {
		System.out.println("general equal on objects not available");
		return false;
	}

	String GetName() {
		System.out.println("general getname on objects not available");
		return "";
	}

	int Arity() {
		System.out.println("general getarity on objects not available");
		return 0;
	}

	void UnTrailSelf() {
		System.out.println("general untrail on objects not available");
	}

	Term Copy(PrologMachine m, long t) {
		System.out.println("general copy on objects not available");
		return null;
	}

	long ValueOf() {
		return 0;
	}

	boolean islist() {
		return false;
	}

	boolean isnil() {
		return false;
	}

}

// the following is used while copying a term

final class VarDict extends Term {
	Var old, newer;

	VarDict(Var changed, Var copy) {
		old = changed;
		newer = copy;
	}

	Term Deref() {
		return this;
	}

	void UnTrailSelf() {
		old.Refers = old;
	}

	Term Copy(PrologMachine m, long t) {
		return newer;
	}
}

final class HeapChoice extends Term {
	int CutTo;

	HeapChoice(int c) {
		CutTo = c;
	}
}

final class SetArgTrail extends Term {
	Term OldValue;
	Var Which;
	PrologMachine mach;

	SetArgTrail(Term old, Var changed, PrologMachine m) {
		OldValue = old;
		Which = changed;
		mach = m;
	}

	void UnTrailSelf() {
		Which.Refers = OldValue;
		Which.timestamp = mach.TimeStamp;
	}

}

final class PopPendingGoals extends Term {
	PrologMachine mach;
	Term old;

	PopPendingGoals(PrologMachine m, Term o) {
		mach = m;
		old = o;
	}

	void UnTrailSelf() {
		mach.pendinggoals = old;
	}

}

final class PopAssumptions extends Term {
	PrologMachine mach;
	Term old;

	PopAssumptions(PrologMachine m, Term o) {
		mach = m;
		old = o;
	}

	void UnTrailSelf() {
		mach.assumptions = old;
	}

}
