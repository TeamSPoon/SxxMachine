package SxxMachine;
// some builtins written in Java for Prolog

// Bart Demoen, Paul Tarau Aug 1996 Moncton
// there is a mapping from special names (like <) to tokens
// with only letters - the compiler must be aware of that mapping

// smallerthan implements </2

class pred_smallerthan_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		long i1, i2;
		Term dereffed;

		dereffed = (mach.Areg[0]).Deref();
		i1 = dereffed.LongValue();
		dereffed = (mach.Areg[1]).Deref();
		i2 = dereffed.LongValue();
		if (i1 < i2) {
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
		return Prolog.Fail0;
	}
}

// smallerorequal implements =</2

class pred_smallerorequal_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		long i1, i2;
		Term dereffed;

		dereffed = (mach.Areg[0]).Deref();
		i1 = dereffed.LongValue();
		dereffed = (mach.Areg[1]).Deref();
		i2 = dereffed.LongValue();
		if (i1 <= i2) {
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
		return Prolog.Fail0;
	}
}

// arithequal implements =:=/2

class pred_arithequal_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		long i1, i2;
		Term dereffed;

		dereffed = (mach.Areg[0]).Deref();
		i1 = dereffed.LongValue();
		dereffed = (mach.Areg[1]).Deref();
		i2 = dereffed.LongValue();
		if (i1 == i2) {
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
		return Prolog.Fail0;
	}
}

// arithdifferent implements =\= /2

class pred_arithdifferent_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		long i1, i2;
		Term dereffed;

		dereffed = (mach.Areg[0]).Deref();
		i1 = dereffed.LongValue();
		dereffed = (mach.Areg[1]).Deref();
		i2 = dereffed.LongValue();
		if (i1 != i2) {
			mach.Areg[0] = mach.Areg[2];
			mach.Areg[1] = mach.Areg[2] = null;
			return Prolog.Call1;
		}
		return Prolog.Fail0;
	}
}

// is implements is/2

class pred_is_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		long i1;
		Term dereffed;

		dereffed = (mach.Areg[1]).Deref();
		i1 = dereffed.LongValue();
		dereffed = (mach.Areg[0]).Deref();
		if (!(dereffed.Unify(new Int(i1))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2];
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

// unify implements =/2

class pred_unify_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();

		if (!(arg1.Unify(arg2)))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2];
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

// univ implements the left direction of =../2

class pred_univ_3 extends Code {
	protected int Arity() {
		return 3;
	}

	// Areg[0] is a free variable
	// Areg[1] is a Const
	// Areg[2] is a list of PrologObjects

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();
		Term arg3 = mach.Areg[2].Deref();
		Term tail = arg3;

		int l = 0;
		while (tail.IsList()) {
			tail = (((Fun) tail).Arguments[1]).Deref();
			l++;
		}
		if (l == 0)
			return Prolog.Fail0;
		if (!(tail.IsNil()))
			return Prolog.Fail0;
		if (!(arg2 instanceof Const))
			return Prolog.Fail0;
		Term args[] = new Term[l];
		tail = arg3;
		int i;
		for (i = 0; i < l; i++) {
			args[i] = ((Fun) tail).Arguments[0];
			tail = (((Fun) tail).Arguments[1]).Deref();
		}

		if (!(arg1.Unify(new Fun(((Const) arg2).GetName(), args))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3];
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}
}

class pred_write_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		String s = (mach.Areg[0].Deref()).toString();
		System.out.print(s);
		System.out.flush();
		mach.Areg[0] = mach.Areg[1];
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_nl_0 extends Code {
	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		System.out.println("");
		return Prolog.Call1;
	}
}

class pred_functor_3 extends Code {
	protected int Arity() {
		return 3;
	}

	boolean DoFunctor3(Prolog mach, Term arg1, Term arg2, Term arg3) {
		arg1 = arg1.Deref();
		arg2 = arg2.Deref();
		arg3 = arg3.Deref();

		if (arg1 instanceof Var) {
			if ((!(arg2 instanceof Const)) || (!(arg3 instanceof Int)))
				return false;
			int i = (int) (((Int) arg3).IntValue);
			String Name = arg2.GetName();
			Term args[] = new Term[i];
			while (i-- > 0) {
				args[i] = new Var(mach);
			}
			if (!(arg1.Unify(new Fun(Name, args))))
				return false;
		} else {
			String Name = arg1.GetName();
			int arity = arg1.Arity();
			if (!(arg2.Unify(new Const(Name))))
				return false;
			if (!(arg3.Unify(new Int(arity))))
				return false;
		}
		return true;
	}

	public Code Exec(Prolog mach) {
		if (!DoFunctor3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}
}

class pred_arg_3 extends Code {
	protected int Arity() {
		return 3;
	}

	boolean DoArg3(Prolog mach, Term arg1, Term arg2, Term arg3) {
		arg1 = arg1.Deref();
		arg2 = arg2.Deref();
		arg3 = arg3.Deref();

		if (!(arg1 instanceof Int))
			return false;
		if (!(arg2 instanceof Fun))
			return false;
		int i = (int) (((Int) arg1).IntValue);
		if (i < 1)
			return false;
		int l = ((Fun) arg2).Arity();
		if (i > l)
			return false;
		Term x = ((Fun) arg2).Arguments[i - 1];
		x = x.Deref();
		return (arg3.Unify(x));
	}

	public Code Exec(Prolog mach) {
		if (!DoArg3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}
}

class pred_nexttoken_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		if (!(arg1 instanceof Var))
			return Prolog.Fail0;
		Term t = mach.nexttoken();
		if (!(arg1.Unify(t.Deref())))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_cputime_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		long t = java.lang.System.currentTimeMillis();
		Term o = new Int(t);
		if (!(arg1.Unify(o)))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class findall_list extends Term {
	Var uptonowbegin, uptonowend;
	long time;

	findall_list(Prolog mach) {
		uptonowbegin = uptonowend = new Var(mach);
		time = mach.TimeStamp;
	}

	public Term Deref() {
		return this;
	}

	public boolean Unify(Term that) {
		return that.Bind(this);
	}

	public String toString() {
		return ("findall = " + (uptonowbegin.Deref()).toString() + " - " + (uptonowend.Deref()).toString());
	}

}

class pred_initfindall_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		if (!(arg1.Unify(new findall_list(mach))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_addfindall_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		findall_list arg2 = (findall_list) (mach.Areg[1].Deref());
		int oldtrail = mach.TrailTop;
		Term copy = arg1.Copy(mach, arg2.time);
		int newtrail = mach.TrailTop;
		while (newtrail-- > oldtrail) {
			mach.TrailStack[newtrail].UnTrailSelf();
			mach.TrailStack[newtrail] = null;
		}
		mach.TrailTop = oldtrail;
		Var NewTail = new Var(mach);
		(arg2.uptonowend).Refers = new Fun(".".intern(), copy, NewTail);
		arg2.uptonowend = NewTail;
		// mach.Areg[0] = mach.Areg[2] ; // install the continuation
		// mach.Areg[1] = mach.Areg[2] = null ;
		return Prolog.Fail0;
	}
}

class pred_retrievefindall_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		findall_list arg2 = (findall_list) (mach.Areg[1].Deref());
		(arg2.uptonowend).Refers = new Const("[]".intern());
		if (!(arg1.Unify((arg2.uptonowbegin).Deref())))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

class pred_var_equal_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();
		if (arg1 != arg2)
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

class pred_trail_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		if (!(arg1.Unify(new Int((long) (mach.TrailTop)))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_choice_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		if (!(arg1.Unify(new Int((long) (mach.CurrentChoice)))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_type_of_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();
		String s;
		if (arg1 instanceof Var)
			s = "var".intern();
		else if (arg1 instanceof FrozenVar)
			s = "var".intern();
		else if (arg1 instanceof Int)
			s = "integer".intern();
		else if (arg1 instanceof Const)
			s = "atom".intern();
		else if (arg1 instanceof Fun)
			s = "struct".intern();
		else
			s = "unknown".intern();

		if (!(arg2.Unify(new Const(s))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

class pred_assume_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term ass = (mach.assumptions).Deref();
		mach.TrailEntry(new PopAssumptions(mach, ass));
		mach.assumptions = new Fun(".".intern(), arg1, ass);
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_allassumed_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term ass = (mach.assumptions).Deref();
		if (!(arg1.Unify(ass)))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_get0_1 extends Code {
	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		int i;
		try {
			i = mach.currentinput.read();
		} catch (Exception e) {
			return Prolog.Fail0;
		}
		if (!(arg1.Unify(new Int((long) i))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[1]; // install the continuation
		mach.Areg[1] = null;
		return Prolog.Call1;
	}
}

class pred_halt_0 extends Code {
	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		mach.ExceptionRaised = 2;
		return null;
	}
}

class pred_setarg_3 extends Code {
	protected int Arity() {
		return 3;
	}

	boolean DoSetArg3(Prolog mach, Term arg1, Term arg2, Term arg3) {
		arg1 = arg1.Deref();
		arg2 = arg2.Deref();
		arg3 = arg3.Deref();

		if (!(arg1 instanceof Int))
			return false;
		if (!(arg2 instanceof Fun))
			return false;
		int i = (int) (((Int) arg1).IntValue);
		if (i < 1)
			return false;
		int l = ((Fun) arg2).Arity();
		if (i > l)
			return false;
		Term x = ((Fun) arg2).Arguments[i - 1];
		Var v = new Var(mach);
		v.Refers = arg3;
		((Fun) arg2).Arguments[i - 1] = v;
		mach.TrailEntry(new SetArgTrail(x, v, mach));
		return true;
	}

	public Code Exec(Prolog mach) {
		if (!DoSetArg3(mach, mach.Areg[0], mach.Areg[1], mach.Areg[2]))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}
}

class pred_compare_3 extends Code {
	protected int Arity() {
		return 3;
	}

	//	Int < Const < Fun < Var

	int Compare(Term t, Term s) {
		if (t == s)
			return 0;
		if (t instanceof Int) {
			if (!(s instanceof Int))
				return -1;
			long i1 = ((Int) t).IntValue;
			long i2 = ((Int) s).IntValue;
			if (i1 < i2)
				return -1;
			if (i1 == i2)
				return 0;
			return 1;
		}

		if (t instanceof Const) {
			if (s instanceof Int)
				return 1;
			if (!(s instanceof Const))
				return -1;
			String s1 = ((Const) t).Name;
			String s2 = ((Const) s).Name;
			return s1.compareTo(s2);
		}

		if (t instanceof Fun) {
			if (s instanceof Var)
				return -1;
			if (!(s instanceof Fun))
				return 1;
			Fun f1 = (Fun) t;
			Fun f2 = (Fun) s;
			String s1 = f1.Name;
			String s2 = f2.Name;
			int v = s1.compareTo(s2);
			if (v != 0)
				return v;

			int arity1 = f1.Arity();
			int arity2 = f2.Arity();
			if (arity1 < arity2)
				return -1;
			if (arity1 > arity2)
				return 1;
			Term args1[] = f1.Arguments;
			Term args2[] = f2.Arguments;
			int i;
			for (i = 0; i < arity1; i++) {
				Term ti = (f1.Arguments[i]).Deref();
				Term si = (f2.Arguments[i]).Deref();
				v = Compare(ti, si);
				if (v != 0)
					return v;
			}
			return 0;
		}

		if (t instanceof Var) {
			if (!(s instanceof Var))
				return 1;
			return (((Var) t).toString()).compareTo(((Var) s).toString());
		}

		return 1; // to keep the compiler happy
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();
		Term arg3 = mach.Areg[2].Deref();
		int val = Compare(arg2, arg3);
		String s;
		if (val < 0)
			s = "<".intern();
		else if (val == 0)
			s = "=".intern();
		else
			s = ">".intern();

		if (!(arg1.Unify(new Const(s))))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[3]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null;
		return Prolog.Call1;
	}
}

class pred_freeze_internal_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();

		FrozenVar frv = new FrozenVar(mach, arg2);
		if (!(arg1.Unify(frv)))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}

class pred_execcontinuation_0 extends Code {
	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();

		if (!(arg1 instanceof Continuation))
			return Prolog.Fail0;
		Continuation c = (Continuation) arg1;
		Code code = c.code;
		int i = code.Arity() + 1;
		while (i-- > 0) {
			mach.Areg[i] = c.Args[i];
		}
		return code;
	}
}

class pred_frozen_2 extends Code {
	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term arg1 = mach.Areg[0].Deref();
		Term arg2 = mach.Areg[1].Deref();
		Term goal;

		if (arg1 instanceof Var)
			goal = new Const("true".intern());
		else if (arg1 instanceof FrozenVar)
			goal = (((FrozenVar) arg1).goals).Deref();
		else
			return Prolog.Fail0;

		if (!(arg2.Unify(goal)))
			return Prolog.Fail0;
		mach.Areg[0] = mach.Areg[2]; // install the continuation
		mach.Areg[1] = mach.Areg[2] = null;
		return Prolog.Call1;
	}
}
