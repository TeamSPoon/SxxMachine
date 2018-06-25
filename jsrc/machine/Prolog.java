// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.function.Function;

public class Prolog {
	public static PrologMachine M = null;

	public static void main(String args[]) {

		// this is the application
		// before it can call a Prolog goal, it must make and initialise a
		// machine

		M = new PrologMachine();
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

		Term Goal = new Funct("animal".intern(), new Var(M)); // animal(X)
		Term AnswerList = M.SolveGoal(Goal);

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

class UpperPrologMachine {
	static PredTable Predicates = null;
	static FailProc Fail0 = null;
	static Call1Proc Call1 = null;
	static Call2Proc Call2 = null;
	static CutProc Cut2 = null;
	static TrueProc True0 = null;
}

class PrologMachine extends UpperPrologMachine {
	public PredTable getPredicates() {
		return Predicates;
	}

	Term Areg[] = new Term[32];
	ChoicePointStackEntry ChoicePointStack[];
	Term TrailStack[];
	Lexer.PrologTokenizer stdin;
	long TimeStamp;
	int CUTB;
	int CurrentChoice;
	int TrailTop;
	Lexer lextoc = null;
	Term assumptions;
	Term pendingGoals;
	int ExceptionRaised;
	InputStream currentinput;
	OutputStream currentoutput;

	public void run() {
		java.util.function.Function<PrologMachine, Function> code;

		InitOnce();
		Areg[0] = new Funct("toplevel".intern(), new Int(0));
		// 0 is a dummy continuation
		InitAlways();
		Function next = null;
		code = UpperPrologMachine.Call1;
		code = hand_pred_toplevel_0.entry_code;// (mach);
		while (code != null) {
			while (ExceptionRaised == 0) {
				next = code.apply(this);
				if (next == null) {
					Debug(code);
				} else {
					code = next;
				}
			}
			if (ExceptionRaised > 1) {
				if (ExceptionRaised != 2)
					System.out.println("Exceptional ending " + ExceptionRaised);
				System.exit(0);
			}
			// there are pending goals - deal with them
			ExceptionRaised = 0;
			Continuation c = new Continuation(Areg, GetArity(code), code);
			Areg[0] = new Funct("execpendinggoals".intern(), pendingGoals, c);
			TrailEntry(new PopPendingGoals(this, pendingGoals));
			pendingGoals = new Const("[]".intern());
			code = UpperPrologMachine.Call1;
		}
	}

	public static int GetArity(java.util.function.Function<PrologMachine, Function> code) {
		if (code instanceof Code) {
			return ((Code) code).Arity();
		}
		return -1;
	}

	public static void Debug(Function<PrologMachine, Function> code) {
		try {
			code.apply(Prolog.M);
			System.in.read();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		// TODO Auto-generated method stub

	}

	Term SolveGoal(Term Goal) {
		Function<PrologMachine, Function> code = null;
		Term AnswerList = new Var(this);
		ExceptionRaised = 0;

		Areg[0] = new Funct("findall".intern(), Goal, Goal, AnswerList, new Funct("true".intern(), new Int(0)));
		code = UpperPrologMachine.Call1;
		while (ExceptionRaised == 0) {
			code = code.apply(this);
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
		assumptions = pendingGoals = new Const("[]".intern());
		ExceptionRaised = 0;
	}

	Term nexttoken() {
		return lextoc.next();
	}

	Function LoadPred(String Name, int arity) // arity is source arity before bin
	// in predtable + 1 !
	{
		Code code;
		Class<?> loaded_class;
		int reason = 0;

		code = Predicates.IsInPredTable(Name, arity + 1);
		if (code != null)
			return code;
		try {
			String s1 = "pred_" + Name + "_" + arity;
			// String s2 = s1 + ".class" ;
			// System.out.println("Trying to load " + s2) ;
			loaded_class = java.lang.Class.forName(s1);
			// System.out.println("Loaded " + s2) ;
			code = (Code) (loaded_class.newInstance());
			// System.out.println("and created "+s2) ;
		} catch (ClassNotFoundException e) {
			reason = 1;
		} catch (IllegalAccessException e) {
			reason = 2;
		} catch (InstantiationException e) {
			reason = 3;
		}

		if (reason > 0) {
			System.out.println("Predicate " + Name + "/" + arity + " not found; does its .class file exist ?");
			return UpperPrologMachine.Fail0;
		}

		Predicates.InsertNameArity(Name, arity + 1, code);
		code.Init(this);
		return code;
	}

	Function<PrologMachine, Function> GetAlternative() {
		return ChoicePointStack[CurrentChoice].Alternative;
	}

	void FillAlternative(Function<PrologMachine, Function> Alt) {
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

	public Code LoadPred1(String name, int arity) {
		return Predicates.LoadPred(this, name, arity);
	}

	public void push1(Undoable undoable) {
		// TODO Auto-generated method stub

	}

	public void Reg(int i) {
		Areg[0] = Areg[i]; // install the continuation
		while (i-- > 1) {
			Areg[i] = null;
		}

	}

	public Term[] RegPull(int i) {
		int ii = i + 1;
		Term t[] = new Term[ii];
		System.arraycopy(Areg, 0, t, 0, ii);
		return t;
	}

	class ChoicePointStackEntry {
		Function<PrologMachine, Function> Alternative;
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

}

abstract class PrologObject extends Term {

	Term Deref() {
		System.out.println("general deref on objects not available");
		return null;
	}

	@Override
	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("general print on objects not available");
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

	long LongValue() {
		return 0;
	}

	boolean IsList() {
		return false;
	}

	boolean IsNil() {
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

final class HeapChoice extends PrologObject {
	int CutTo;

	HeapChoice(int c) {
		CutTo = c;
	}
}

final class SetArgTrail extends PrologObject {
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

final class PopPendingGoals extends PrologObject {
	PrologMachine mach;
	Term old;

	PopPendingGoals(PrologMachine m, Term o) {
		mach = m;
		old = o;
	}

	void UnTrailSelf() {
		mach.pendingGoals = old;
	}

}

final class PopAssumptions extends PrologObject {
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
