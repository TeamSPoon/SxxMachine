package SxxMachine;
// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996

// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new Prolog, start a goal and get answers back
// all at once as with findall

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class Prolog {
	public static void main(String args[]) {

		// this is the application
		// before it can call a Prolog goal, it must make and initialise a
		// machine

		Prolog M = new Prolog();
		M.InitOnce();

		// any time a new goal is called, the machine has to be "reset"

		M.InitAlways();

		if (args.length == 0) {
			while (true) {
				try {
					M.run();
				} catch (Throwable t) {
					t.printStackTrace();
				}
				if (M.ExceptionRaised == 4)
					return;
			}
		}
		// then you can call the goal

		Term Goal = new Fun("animal".intern(), new Var(M)); // animal(X)
		Term AnswerList = M.SolveGoal(Goal);

		// AnswerList is now a list of instances of the Goal
		// you can iterate through it as follows

		Term NextAnswerList, Answer;

		NextAnswerList = AnswerList.Deref();
		while (NextAnswerList.IsList()) {
			Answer = (((Fun) NextAnswerList).Arguments[0]).Deref();
			// do something with the answer - e.g. print it
			String s = Answer.toString();
			System.out.println(s);
			System.out.flush();

			// get the tail of the next answer list
			NextAnswerList = (((Fun) NextAnswerList).Arguments[1]).Deref();
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

	public static PredTable Predicates = null;
	public static FailProc Fail0 = null;
	public static Call1Proc Call1 = null;
	public static Call2Proc Call2 = null;
	public static CutProc Cut2 = null;
	public static TrueProc True0 = null;

	public PredTable getPredicates() {
		return Predicates;
	}

	public Term Areg[] = new Term[32];
	public ChoicePointStackEntry ChoicePointStack[];
	public Term TrailStack[];
	public Lexer.PrologTokenizer stdin;
	public long TimeStamp;
	public int CUTB;
	public int CurrentChoice;
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
		Areg[0] = new Fun("toplevel".intern(), new Int(0));
		// 0 is a dummy continuation
		InitAlways();
		Object next = null;
		code = Call1;
		while (true) {
			while (ExceptionRaised == 0 && code != null) {
				next = code.Exec(this);
				if (next == null) {
					Debug();
				}
				code = (Code) next;
			}
			if (ExceptionRaised > 1) {
				if (ExceptionRaised != 2)
					System.out.println("Exceptional ending " + ExceptionRaised);
				System.exit(0);
			}
			// there are pending goals - deal with them
			ExceptionRaised = 0;
			Continuation c = new Continuation(Areg, code);
			Areg[0] = new Fun("execpendinggoals".intern(), pendinggoals, c);
			TrailEntry(new PopPendingGoals(this, pendinggoals));
			pendinggoals = new Const("[]".intern());
			code = Call1;
		}
	}

	public static void Debug() {
		try {
			System.in.read();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		// TODO Auto-generated method stub

	}

	Term SolveGoal(Term Goal) {
		Code code = Call1;
		Term AnswerList = new Var(this);
		ExceptionRaised = 0;

		Areg[0] = new Fun("findall".intern(), Goal, Goal, AnswerList, new Fun("halt".intern(), new Int(0)));
		//pred_findall_3.entry_code;
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

	public Code LoadPred(String Name, int arity) // arity is source arity before bin
	// in predtable + 1 !
	{
		return Predicates.LoadPred(this, Name, arity);
	}

	Code GetAlternative() {
		return ChoicePointStack[CurrentChoice].Alternative;
	}

	public void FillAlternative(Code Alt) {
		ChoicePointStack[CurrentChoice].Alternative = Alt;
	}

	public void RemoveChoice() {
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

	public void CreateChoicePoint(Term args[]) {
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

	public void DoCut(int CutTo) {
		int ch = CurrentChoice;
		while (ch != CutTo) {
			ChoicePointStack[ch] = null;
			ch--;
		}
		CurrentChoice = CutTo;
	}

	public Code LoadPred1(String name, int arity) {
		return Predicates.LoadPred(this, name, arity);
	}

	public void push1(Undoable undoable) {
		// TODO Auto-generated method stub

	}
}

abstract class PrologObject extends Term {

	public Term Deref() {
		System.out.println("general deref on objects not available");
		return null;
	}

	@Override
	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("general print on objects not available");
	}

	public boolean Unify(Term that) {
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

	Term Copy(Prolog m, long t) {
		System.out.println("general copy on objects not available");
		return null;
	}

	long LongValue() {
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

final class VarDict extends PrologObject {
	Var old, newer;

	VarDict(Var changed, Var copy) {
		old = changed;
		newer = copy;
	}

	public Term Deref() {
		return this;
	}

	void UnTrailSelf() {
		old.Refers = old;
	}

	Term Copy(Prolog m, long t) {
		return newer;
	}
}

final class SetArgTrail extends PrologObject {
	Term OldValue;
	Var Which;
	Prolog mach;

	SetArgTrail(Term old, Var changed, Prolog m) {
		OldValue = old;
		Which = changed;
		mach = m;
	}

	void UnTrailSelf() {
		Which.Refers = OldValue;
		Which.timestamp = mach.TimeStamp;
	}

}

final class PopPendingGoals extends PrologObject {
	Prolog mach;
	Term old;

	PopPendingGoals(Prolog m, Term o) {
		mach = m;
		old = o;
	}

	void UnTrailSelf() {
		mach.pendinggoals = old;
	}

}

final class PopAssumptions extends PrologObject {
	Prolog mach;
	Term old;

	PopAssumptions(Prolog m, Term o) {
		mach = m;
		old = o;
	}

	void UnTrailSelf() {
		mach.assumptions = old;
	}

}
