class Term {

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
		return new Funct(string6, terms);
	}

	public static Term Var(PrologMachine mach) {
		return new Var(mach);
	}

	public Term findOrAttrValue(PrologMachine mach, boolean b, Term deref) {
		// TODO Auto-generated method stub
		return null;
	}

	public void putAttrValue(PrologMachine mach, Term deref, Term deref2) {
		// TODO Auto-generated method stub

	}

	public void setAttrs(PrologMachine mach, Term deref) {
		// TODO Auto-generated method stub

	}

}

final class Var extends Term {
	Object Refers;
	long timestamp;
	PrologMachine mach;

	Var(PrologMachine machin) {
		Refers = this;
		timestamp = machin.TimeStamp;
		mach = machin;
	}

	Var(PrologMachine machin, long t) {
		Refers = this;
		timestamp = t;
		mach = machin;
	}

	Term Copy(PrologMachine m, long t) {
		Var newv = new Var(m, t);
		VarDict newdict = new VarDict(this, newv);
		Refers = newdict;
		mach.TrailEntry(this);
		return newv;
	}

	Term Deref() {
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

	boolean Unify(Term that) {
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
	PrologMachine mach;
	Term goals;

	FrozenVar(PrologMachine machin, Term action) {
		Refers = null;
		timestamp = machin.TimeStamp;
		mach = machin;
		goals = action;
	}

	FrozenVar(PrologMachine machin, long t, Term action) {
		Refers = null;
		timestamp = t;
		mach = machin;
		goals = action;
	}

	Term Copy(PrologMachine m, long t) {
		return new Const("[]".intern()); // might decide to copy frozenvars
											// later
	}

	Term Deref() {
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
			Funct newgoals = new Funct(",".intern(), this.goals, thatv.goals);
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
			mach.pendinggoals = new Funct(".".intern(), goals, mach.pendinggoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	boolean Unify(Term that) {
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

final class Int extends Term {
	long IntValue;

	Int(long i) {
		IntValue = i;
	}

	Term Copy(PrologMachine m, long t) {
		return new Int(IntValue);
	}

	long LongValue() {
		return IntValue;
	}

	Term Deref() {
		return this;
	}

	public String toString() {
		return "" + IntValue;
	}

	boolean Unify(Term that) {
		Int tmpint;
		if (!(that instanceof Int))
			return that.Bind(this);
		tmpint = (Int) that; // cast perhaps to be avoided
		return (tmpint.IntValue == this.IntValue);
	}

	boolean Equal(Term that) {
		if (!(that instanceof Int)) {
			return false;
		}
		;
		return this.IntValue == ((Int) that).IntValue;
	}

	String GetName() {
		return "" + IntValue;
	}

}

final class Const extends Term {
	String Name;

	long LongValue() {
		return 0;
	}

	Const(String N) {
		Name = N;
	}

	Term Copy(PrologMachine m, long t) {
		return new Const(Name);
	}

	Term Deref() {
		return this;
	}

	public String toString() {
		return Name;
	}

	boolean Unify(Term that) {
		if (this.getClass() == that.getClass())
			// return (that.GetName()).equals(this.Name) ;
			return (that.GetName() == this.Name);
		return that.Bind(this);
	}

	boolean Equal(Term that) {
		if (this.getClass() == that.getClass())
			return (that.toString()).equals(this.toString());
		return false;
	}

	int Arity() {
		return 0;
	}

	String GetName() {
		return Name;
	}

	boolean IsNil() {
		return this.Name.equals("[]".intern());
	}

	public static String IStr(String string) {
		// TODO Auto-generated method stub
		return string.intern();
	}

	public static Term Intern(String N) {
		// TODO Auto-generated method stub
		return new Const(N);
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

	Term Deref() {
		return this;
	}

	boolean Unify(Term that) {
		return that.Bind(this);
	}

}

final class Funct extends Term {
	Term Arguments[];
	String Name;

	Term Copy(PrologMachine m, long t) {
		int a = Arguments.length;
		Funct f = new Funct(Name, a);
		Term arg;
		while (a-- > 0) {
			arg = Arguments[a].Deref();
			f.Arguments[a] = arg.Copy(m, t);
		}
		return f;
	}

	Funct(String N) {
		Name = N;
	}

	Funct(String N, int arity) {
		Name = N;
		Arguments = new Term[arity];
	}

	Funct(String N, Term a1) {
		Name = N;
		Arguments = new Term[1];
		Arguments[0] = a1;
	}

	Funct(String N, Term a1, Term a2) {
		Name = N;
		Arguments = new Term[2];
		Arguments[0] = a1;
		Arguments[1] = a2;
	}

	Funct(String N, Term a1, Term a2, Term a3) {
		Name = N;
		Arguments = new Term[3];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4) {
		Name = N;
		Arguments = new Term[4];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5) {
		Name = N;
		Arguments = new Term[5];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6) {
		Name = N;
		Arguments = new Term[6];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7) {
		Name = N;
		Arguments = new Term[7];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8) {
		Name = N;
		Arguments = new Term[8];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9) {
		Name = N;
		Arguments = new Term[9];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10) {
		Name = N;
		Arguments = new Term[10];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10,
			Term a11) {
		Name = N;
		Arguments = new Term[11];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12) {
		Name = N;
		Arguments = new Term[12];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13) {
		Name = N;
		Arguments = new Term[13];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13, Term a14) {
		Name = N;
		Arguments = new Term[14];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
		Arguments[13] = a14;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13, Term a14, Term a15) {
		Name = N;
		Arguments = new Term[15];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
		Arguments[13] = a14;
		Arguments[14] = a15;

	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13, Term a14, Term a15, Term a16) {
		Name = N;
		Arguments = new Term[16];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
		Arguments[13] = a14;
		Arguments[14] = a15;
		Arguments[15] = a16;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13, Term a14, Term a15, Term a16, Term a17) {
		Name = N;
		Arguments = new Term[17];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
		Arguments[13] = a14;
		Arguments[14] = a15;
		Arguments[15] = a16;
		Arguments[16] = a17;
	}

	Funct(String N, Term a1, Term a2, Term a3, Term a4, Term a5, Term a6, Term a7, Term a8, Term a9, Term a10, Term a11,
			Term a12, Term a13, Term a14, Term a15, Term a16, Term a17, Term a18) {
		Name = N;
		Arguments = new Term[18];
		Arguments[0] = a1;
		Arguments[1] = a2;
		Arguments[2] = a3;
		Arguments[3] = a4;
		Arguments[4] = a5;
		Arguments[5] = a6;
		Arguments[6] = a7;
		Arguments[7] = a8;
		Arguments[8] = a9;
		Arguments[9] = a10;
		Arguments[10] = a11;
		Arguments[11] = a12;
		Arguments[12] = a13;
		Arguments[13] = a14;
		Arguments[14] = a15;
		Arguments[15] = a16;
		Arguments[16] = a17;
		Arguments[17] = a18;
	}

	Funct(String N, Term args[]) {
		Name = N;
		Arguments = args;
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

	Term Deref() {
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
			A1 = ((Funct) T).Arguments[0];
			A2 = ((Funct) T).Arguments[1];
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

	boolean Unify(Term that) {
		Funct tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(this.getClass() == that.getClass()))
			return that.Bind(this);
		// if (!((this.Name).equals(that.GetName()))) return false ;
		if ((this.Name) != (that.GetName()))
			return false;

		tmpfunct = (Funct) that; // cast perhaps to be avoided
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
		Funct tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(this.getClass() == that.getClass())) {
			return false;
		}
		;
		if (!((this.GetName()).equals(that.GetName())))
			return false;

		tmpfunct = (Funct) that; // cast perhaps to be avoided
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
