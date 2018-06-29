package SxxMachine;

import java.io.IOException;

public class Term {

	public Term Deref() {
		System.out.println("general deref on objects not available");
		return null;
	}

	public String toString() {
		return "general print on objects not available";
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

	boolean IsList() {
		return false;
	}

	boolean IsNil() {
		return false;
	}

	public static Term Compound(String string6, Term... terms) {
		return new Fun(string6, terms);
	}
	public static Term Compound(Const string6, Term... terms) {
		return new Fun(string6.GetName(), terms);
	}

	public static Term Var(Prolog mach) {
		return new Var(mach);
	}

	public Term findOrAttrValue(Prolog mach, boolean b, Term deref) {
		// TODO Auto-generated method stub
		return null;
	}

	public void putAttrValue(Prolog mach, Term deref, Term deref2) {
		// TODO Auto-generated method stub

	}

	public void setAttrs(Prolog mach, Term deref) {
		// TODO Auto-generated method stub

	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		// TODO Auto-generated method stub

	}


}

final class Var extends Term {
	Object Refers;
	long timestamp;
	Prolog mach;

	Var(Prolog machin) {
		Refers = this;
		timestamp = machin.TimeStamp;
		mach = machin;
	}

	Var(Prolog machin, long t) {
		Refers = this;
		timestamp = t;
		mach = machin;
	}

	Term Copy(Prolog m, long t) {
		Var newv = new Var(m, t);
		VarDict newdict = new VarDict(this, newv);
		Refers = newdict;
		mach.TrailEntry(this);
		return newv;
	}

	public Term Deref() {
		if ((Refers == this) || !(Refers instanceof Term))
			return this;
		return ((Term) Refers).Deref();
	}

	void UnTrailSelf() {
		Refers = this;
	}

	public String toString() {
		return "_" + Integer.toHexString(hashCode());
	}

	boolean Bind(Term that) {
		Var v2;
		if (that instanceof Var) {
			Var v1 = (Var) that;
			if (this.timestamp < v1.timestamp) {
				v1.Refers = this;
				v2 = v1;
			} else {
				this.Refers = that;
				v2 = this;
			}
		} else {
			this.Refers = that;
			v2 = this;
		}
		if (v2.timestamp < mach.ChoicePointStack[mach.CurrentChoice].TimeStamp) {
			mach.TrailEntry(v2);
		}
		return true;
	}

	public boolean Unify(Term that) {
		return Bind(that);
	}

	boolean Equal(Term that) {
		if (!(that instanceof Var)) {
			return false;
		}
		;
		return this == that;
	}

	String GetName() {
		return toString();
	}
}

final class FrozenVar extends Term {
	Term Refers;
	long timestamp;
	Prolog mach;
	Term goals;

	FrozenVar(Prolog machin, Term action) {
		Refers = null;
		timestamp = machin.TimeStamp;
		mach = machin;
		goals = action;
	}

	FrozenVar(Prolog machin, long t, Term action) {
		Refers = null;
		timestamp = t;
		mach = machin;
		goals = action;
	}

	Term Copy(Prolog m, long t) {
		return new Const("[]".intern()); // might decide to copy frozenvars
											// later
	}

	public Term Deref() {
		if (Refers == null)
			return this;
		return ((Term) Refers).Deref();
	}

	void UnTrailSelf() {
		Refers = null;
	}

	public String toString() {
		return "_" + Integer.toHexString(hashCode());
	}

	boolean Bind(Term that) {
		Var v2;
		if (that instanceof FrozenVar) {
			FrozenVar thatv = (FrozenVar) that;
			Fun newgoals = new Fun(",".intern(), this.goals, thatv.goals);
			FrozenVar newfrv = new FrozenVar(mach, mach.CurrentChoice, newgoals);
			this.Refers = thatv.Refers = newfrv;
			mach.TrailEntry(this);
			mach.TrailEntry(thatv);
		} else if (that instanceof Var) {
			return that.Bind(this);
		} else {
			this.Refers = that;
			mach.TrailEntry(this);
			mach.TrailEntry(new PopPendingGoals(mach, mach.pendinggoals));
			mach.pendinggoals = new Fun(".".intern(), goals, mach.pendinggoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	public boolean Unify(Term that) {
		return Bind(that);
	}

	boolean Equal(Term that) {
		if (!(that instanceof FrozenVar)) {
			return false;
		}
		;
		return this == that;
	}

	String GetName() {
		return toString();
	}
}

final class Continuation extends Term {
	Code code;
	Term Args[];

	Continuation(Term args[], Code c) {
		int i = c.Arity() + 1;
		Args = new Term[i];
		while (i-- > 0)
			Args[i] = args[i];
		code = c;
	}

	public Term Deref() {
		return this;
	}

	public boolean Unify(Term that) {
		return that.Bind(this);
	}

}

final class Fun extends Term {
	Term Arguments[];
	String Name;

	Term Copy(Prolog m, long t) {
		int a = Arguments.length;
		Fun f = new Fun(Name, a);
		Term arg;
		while (a-- > 0) {
			arg = Arguments[a].Deref();
			f.Arguments[a] = arg.Copy(m, t);
		}
		return f;
	}

	Fun(String N) {
		Name = N;
	}

	Fun(String N, int arity) {
		Name = N;
		Arguments = new Term[arity];
	}

	Fun(String N, Term... args) {
		Name = N;
		Arguments = args;
		if (Arguments.length == 2) {
			//isLixt = Name.equals(".");
		}
	}

	long LongValue() {
		int arity = Arguments.length;
		// Term a1, a2;
		long i1, i2;
		if (arity == 1) {
			i1 = (Arguments[0].Deref()).LongValue();
			if (Name.equals("-".intern()))
				return -i1;
			if (Name.equals("+".intern()))
				return i1;
			return 0;
		}
		if (arity != 2)
			return 0;
		i1 = (Arguments[0].Deref()).LongValue();
		i2 = (Arguments[1].Deref()).LongValue();
		if (Name.equals("-".intern()))
			return i1 - i2;
		if (Name.equals("+".intern()))
			return i1 + i2;
		if (Name.equals("*".intern()))
			return i1 * i2;
		if (Name.equals("/".intern()))
			return i1 / i2;
		return 0;
	}

	public Term Deref() {
		return this;
	}

	boolean islist(int i, String Name) {
		if (i != 2)
			return false;
		return Name.equals(".".intern());
	}

	boolean IsList() {
		return islist(this.Arguments.length, this.Name);
	}

	String listify(Term T) {
		String s;
		if (T.IsList()) {
			Term A1, A2;
			A1 = ((Fun) T).Arguments[0];
			A2 = ((Fun) T).Arguments[1];
			A1 = A1.Deref();
			A2 = A2.Deref();
			return "," + A1.toString() + listify(A2);
		} else if ((T instanceof Const) && ("[]".equals(T.GetName())))
			return "";
		return " | " + T.toString();
	}

	public String toString() {
		int i = Arguments.length;
		if (islist(i, Name)) {
			return "[" + (Arguments[0].Deref()).toString() + listify(Arguments[1].Deref()) + "]";
		}
		String s = ")";
		Term p;
		while (--i != 0) {
			p = Arguments[i].Deref();
			s = "," + p.toString() + s;
		}
		p = Arguments[0].Deref();
		s = p.toString() + s;
		return Name + "(" + s;
	}

	public boolean Unify(Term that) {
		Fun tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(this.getClass() == that.getClass()))
			return that.Bind(this);
		// if (!((this.Name).equals(that.GetName()))) return false ;
		if ((this.Name) != (that.GetName()))
			return false;

		tmpfunct = (Fun) that; // cast perhaps to be avoided
		i = Arguments.length;
		j = tmpfunct.Arguments.length;
		if (i != j)
			return false;
		arg1 = this.Arguments;
		arg2 = tmpfunct.Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if (!(obj1.Unify(obj2)))
				return false;
		} while (i > 0);
		return true;
	}

	boolean Equal(Term that) {
		Fun tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(this.getClass() == that.getClass())) {
			return false;
		}
		;
		if (!((this.GetName()).equals(that.GetName())))
			return false;

		tmpfunct = (Fun) that; // cast perhaps to be avoided
		i = Arguments.length;
		j = tmpfunct.Arguments.length;
		if (i != j)
			return false;
		arg1 = this.Arguments;
		arg2 = tmpfunct.Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if (!(obj1.Equal(obj2)))
				return false;
		} while (i > 0);
		return true;
	}

	int Arity() {
		return Arguments.length;
	}

	String GetName() {
		return Name;
	}
}
