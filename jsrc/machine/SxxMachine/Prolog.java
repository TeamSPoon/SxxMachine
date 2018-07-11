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

import SxxMachine.sxx_library.pred_toplevel_0;

public class Prolog {
	public static Prolog M = null;

	public static void main(String args[]) {

		// this is the application
		// before it can call a Prolog goal, it must make and initialise a
		// machine

		Prolog.M = new Prolog();
		Prolog.M.InitOnce();

		// any time a new goal is called, the machine has to be "reset"

		Prolog.M.InitAlways();

		if (args.length == 0) {
			while (true) {
				try {
					Prolog.M.run();
				} catch (Throwable t) {
					t.printStackTrace();
				}
				if (Prolog.M.ExceptionRaised == 4)
					return;
			}
		}
		// then you can call the goal

		Term Goal = new Fun("animal", new Var(Prolog.M)); // animal(X)
		Term AnswerList = Prolog.M.SolveGoal(Goal);

		// AnswerList is now a list of instances of the Goal
		// you can iterate through it as follows

		Term NextAnswerList, Answer;

		NextAnswerList = AnswerList.Deref();
		while (NextAnswerList.IsList()) {
			Answer = (((Fun) NextAnswerList).Arg(0)).Deref();
			// do something with the answer - e.g. print it
			String s = Answer.toString();
			System.out.println(s);
			System.out.flush();

			// get the tail of the next answer list
			NextAnswerList = (((Fun) NextAnswerList).Arg(1)).Deref();
		}
	}

	class ChoicePointStackEntry {
		Operation Alternative;
		int Trail;
		Term Arguments[];
		long TimeStamp;

		ChoicePointStackEntry(Term args[]) {
			int l = args.length;
			this.Arguments = new Term[l];
			while (l > 0) {
				l--;
				this.Arguments[l] = args[l];
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
		return Prolog.Predicates;
	}

	public Term Areg[] = new Term[32];
	public ChoicePointStackEntry ChoicePointStack[];
	public Undoable TrailStack[];
	// public Lexer.PrologTokenizer stdin;
	public long TimeStamp;
	public int CUTB;
	public int CurrentChoice;
	int TrailTop;
	Lexer lextoc = null;
	public Term assumptions;
	public Term pendingGoals;
	int ExceptionRaised;
	InputStream currentinput;
	OutputStream currentoutput;
	Operation code;

	public void run() {

		this.InitOnce();
		this.Areg[0] = new Fun("toplevel", new Int(0));
		// 0 is a dummy continuation
		this.InitAlways();
		Operation next = null;
		this.code = Prolog.Call1;
		this.code = pred_toplevel_0::exec_static;// (mach);
		while (true) {
			while (this.ExceptionRaised == 0 && this.code != null) {
				if (this.Areg[0] == null) {
					Prolog.Debug(this.code);
				}
				next = this.code.Exec(this);
				if (next == null || this.Areg[0] == null) {
					Prolog.Debug(this.code);
					break;
				} else {
					this.code = next;
				}
			}
			if (this.ExceptionRaised > 1) {
				if (this.ExceptionRaised != 2)
					System.out.println("Exceptional ending " + this.ExceptionRaised);
				System.exit(0);
			}
			// there are pending goals - deal with them
			this.ExceptionRaised = 0;
			Continuation c = new Continuation(this.Areg, Prolog.GetArity(this.code), this.code);
			this.Areg[0] = new Fun("execpendinggoals", this.pendingGoals, c);
			this.TrailEntry(new PopPendingGoals(this, this.pendingGoals));
			this.pendingGoals = Data.Intern("[]");
			this.code = Prolog.Call1;
		}
	}

	public Term HC(Term continuation) {
		return Data.F("cut", new HeapChoice(this.CUTB), continuation);
	}

	public static int GetArity(Operation code) {
		if (code instanceof Code) {
			return ((Code) code).Arity();
		}
		return -1;
	}

	public static void Debug(Operation code) {
		try {
			if (code != null)
				System.out.println("CodeClass = " + code.getClass());
			System.out.println("Code = " + code);
			System.out.println("AReg[0] = " + Prolog.M.Areg[0]);

			System.in.read();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		// TODO Auto-generated method stub

	}

	Term SolveGoal(Term Goal) {
		this.code = Prolog.Call1;
		Term AnswerList = new Var(this);
		this.ExceptionRaised = 0;

		this.Areg[0] = new Fun("findall", Goal, Goal, AnswerList, new Fun("halt", new Int(0)));
		// pred_findall_3.entry_code;
		while (this.ExceptionRaised == 0) {
			this.code = this.code.Exec(this);
		}
		return AnswerList; // exceptions are ignored here !!!!
	}

	void InitOnce() {
		if (null == Prolog.Predicates)
			Prolog.Predicates = new PredTable();
		if (null == Prolog.Fail0)
			Prolog.Fail0 = new FailProc(this);
		if (null == Prolog.Call1)
			Prolog.Call1 = new Call1Proc(this);
		if (null == Prolog.Call2)
			Prolog.Call2 = new Call2Proc(this);
		if (null == Prolog.Cut2)
			Prolog.Cut2 = new CutProc(this);
		if (null == Prolog.True0)
			Prolog.True0 = new TrueProc(this);
		this.ChoicePointStack = new ChoicePointStackEntry[20000];
		this.TrailStack = new Term[20000];
		try {
			this.lextoc = new Lexer(System.in, this);
		} catch (Exception e) {
			System.err.println("lextoc failure");
		}
		this.currentinput = System.in;
		this.currentoutput = System.out;
		new sxx_library();
		new sxx_meta();
		new sxx_read();
		new sxx_system();
		new Builtins();
		new Metaterm();
		new animal();
	}

	void InitAlways() {
		this.TimeStamp = -1000000000;
		this.CUTB = 0;
		this.CurrentChoice = -1;
		this.TrailTop = 0;
		Term NoArgs[] = {};
		this.CreateChoicePoint(NoArgs);
		this.FillAlternative(null);
		this.assumptions = this.pendingGoals = Data.Intern("[]");
		this.ExceptionRaised = 0;
	}

	Term nexttoken() {
		return this.lextoc.next();
	}

	public Operation GetAlternative() {
		return this.ChoicePointStack[this.CurrentChoice].Alternative;
	}

	public void FillAlternative(Operation Alt) {
		this.ChoicePointStack[this.CurrentChoice].Alternative = Alt;
	}

	public void RemoveChoice() {
		this.ChoicePointStack[this.CurrentChoice--] = null;
	}

	public void RestoreArguments() {
		int i = this.ChoicePointStack[this.CurrentChoice].Arguments.length;
		while (i-- > 0) {
			this.Areg[i] = this.ChoicePointStack[this.CurrentChoice].Arguments[i];
		}
	}

	public void UnTrail() {
		while (this.TrailTop != this.ChoicePointStack[this.CurrentChoice].Trail) {
			this.TrailStack[--this.TrailTop].UnTrailSelf();
			this.TrailStack[this.TrailTop] = null;
		}
	}

	public void push(Undoable undoable) {
		this.TrailEntry(undoable);
	}

	public void TrailEntry(Undoable po) { // System.out.println("trailing") ;
		try {
			this.TrailStack[this.TrailTop] = po;
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("trail expansion");
			int i = this.TrailStack.length;
			Undoable newstack[] = new Term[i + 20000];
			while (i-- > 0) {
				newstack[i] = this.TrailStack[i];
			}
			this.TrailStack = newstack;
			this.TrailStack[this.TrailTop] = po;
		}
		this.TrailTop++;
	}

	public void CreateChoicePoint(Term args[]) {
		this.CurrentChoice++;
		try {
			this.ChoicePointStack[this.CurrentChoice] = new ChoicePointStackEntry(args);
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("choice stack expansion");
			int i = this.ChoicePointStack.length;
			ChoicePointStackEntry newstack[] = new ChoicePointStackEntry[i + 20000];
			while (i-- > 0) {
				newstack[i] = this.ChoicePointStack[i];
			}
			this.ChoicePointStack = newstack;
			this.ChoicePointStack[this.CurrentChoice] = new ChoicePointStackEntry(args);
		}
		this.ChoicePointStack[this.CurrentChoice].Trail = this.TrailTop;
		this.ChoicePointStack[this.CurrentChoice].TimeStamp = ++this.TimeStamp;
	}

	public void DoCut(int CutTo) {
		int ch = this.CurrentChoice;
		while (ch != CutTo) {
			this.ChoicePointStack[ch] = null;
			ch--;
		}
		this.CurrentChoice = CutTo;
	}

	public Operation LoadPred(String name, int arity) {
		return Prolog.Predicates.LoadPred(name, arity);
	}

	public Operation Reg(int i) {
		this.Areg[0] = this.Areg[i]; // install the continuation
		while (i-- > 1) {
			this.Areg[i] = null;
		}
		return Prolog.Call1;
	}

	public Term[] RegPull(int i) {
		int ii = i + 1;
		Term t[] = new Term[ii];
		System.arraycopy(this.Areg, 0, t, 0, ii);
		return t;
	}

}

abstract class PrologObject extends Term {

	@Override
	public int Arity() {
		return Data.OBJ;
	}

	public Term Deref() {
		System.out.println("general deref on objects not available");
		return null;
	}

	@Override
	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("general print on objects not available");
	}

	public boolean Unify(Term that, Prolog mach) {
		System.out.println("general unify on objects not available");
		return false;
	}

	boolean Bind(Term that, Prolog mach) {
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

	public void UnTrailSelf() {
		System.out.println("general untrail on objects not available");
	}

	Term Copy(Prolog m, long t) {
		System.out.println("general copy on objects not available");
		return null;
	}

	long LongValue() {
		return 0;
	}

	@Override
	public boolean isConst() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isFVar() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isInt() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isVar() {
		// TODO Auto-generated method stub
		return false;
	}

}

// the following is used while copying a term

final class VarDict extends PrologObject {
	Var old, newer;

	VarDict(Var changed, Var copy) {
		this.old = changed;
		this.newer = copy;
	}

	public Term Deref() {
		return this;
	}

	public void UnTrailSelf() {
		this.old.Refers = this.old;
	}

	Term Copy(Prolog m, long t) {
		return this.newer;
	}
}

final class SetArgTrail extends PrologObject {
	Term OldValue;
	Var Which;
	Prolog mach;

	SetArgTrail(Term old, Var changed, Prolog m) {
		this.OldValue = old;
		this.Which = changed;
		this.mach = m;
	}

	public void UnTrailSelf() {
		this.Which.Refers = this.OldValue;
		this.Which.timestamp = this.mach.TimeStamp;
	}

}

final class PopPendingGoals extends PrologObject {
	Prolog mach;
	Term old;

	PopPendingGoals(Prolog m, Term o) {
		this.mach = m;
		this.old = o;
	}

	public void UnTrailSelf() {
		this.mach.pendingGoals = this.old;
	}

}

final class PopAssumptions extends PrologObject {
	Prolog mach;
	Term old;

	PopAssumptions(Prolog m, Term o) {
		this.mach = m;
		this.old = o;
	}

	public void UnTrailSelf() {
		this.mach.assumptions = this.old;
	}

}
