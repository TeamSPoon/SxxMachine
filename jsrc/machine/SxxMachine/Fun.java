package SxxMachine;

import java.io.IOException;

final class Fun extends Term {
	Term Arguments[];
	String Name;
	private boolean isLixt;

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
		if (arity == 2) {
			isLixt = Name.equals(".");
		}
	}

	Fun(String N, Term... args) {
		Name = N;
		Arguments = args;
		if (Arguments.length == 2) {
			isLixt = Name.equals(".");
		}
	}

	@Override
	public Term Arg(int i) {
		return ArgNoDeRef(i);
	}

	public Term ArgDeRef(int i) {
		return Arg(i).Deref();
	}

	public Term ArgNoDeRef(int i) {
		return Arguments[i];
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

	private static boolean islist(int i, String Name) {
		if (i != 2)
			return false;
		return Name.equals(".".intern());
	}

	boolean IsList() {
		return islist(this.Arguments.length, this.Name);
	}

	static void formattedListOutput(int formatFlags, Appendable buffer, Term T) throws IOException {
		while (true) {
			if (T.IsNil())
				return;
			if (T.IsList()) {
				int arity = T.Arity();
				int carg = 1;
				while (carg < arity) {
					buffer.append(",");
					T.Arg(carg).formattedOutput(formatFlags, buffer);
					carg++;
				}
				T = T.Arg(carg);
				continue;
			} else {
				buffer.append("|");
				T.formattedOutput(formatFlags, buffer);
				return;
			}
		}
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		// int i = Arguments.length;
		if (isLixt) {
			buffer.append("[");
			formattedListOutput(formatFlags, buffer, Arguments[1]);
			buffer.append("]");
			return;
		}
		if (formatFlags != 0) {
			Const.formattedOutputC(formatFlags, buffer, GetName());
		} else {
			buffer.append(GetName());
		}
		buffer.append("(");
		int arity1 = Arity();
		for (int carg = 0; carg < arity1; carg++) {
			if (carg != 0)
				buffer.append(",");
			Term t = Arg(carg);
			if (t == null) {
				buffer.append("@null");
			} else {
				t.formattedOutput(formatFlags, buffer);
			}
		}
		buffer.append(")");
	}

	public boolean Unify(Term that) {
		Fun tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(SameTypes(this, that)))
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

		if (!(SameTypes(this, that))) {
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

	public Term[] GetArgs() {
		return Arguments;
	}

	public int Arity() {
		return Arguments.length;
	}

	String GetName() {
		return Name;
	}
}