package SxxMachine;

import java.io.IOException;

final class Fun extends Term {
	private Term Arguments[];
	private String Name;
	private char isLixt;

	Term Copy(Prolog m, long t) {
		int a = this.Arguments.length;
		Fun f = new Fun(this.Name, a);
		Term arg;
		while (a-- > 0) {
			arg = this.Arguments[a].Deref();
			f.Arguments[a] = arg.Copy(m, t);
		}
		return f;
	}

	Fun(String N, int arity) {
		this(N, new Term[arity]);
	}

	Fun(Const N, int arity) {
		this(N.GetName(), new Term[arity]);
	}

	Fun(String N, Term... args) {
		this.Name = N;
		this.Arguments = args;
		if (this.Arguments.length == 2) {
			this.isLixt = this.Name.charAt(0);
		}
	}

	@Override
	public Term Arg(int i) {
		return this.ArgNoDeRef(i);
	}

	public Term ArgDeRef(int i) {
		return this.Arg(i).Deref();
	}

	public Term ArgNoDeRef(int i) {
		return this.Arguments[i];
	}

	long LongValue() {
		int arity = this.Arguments.length;
		// Term a1, a2;
		String Name = this.Name;
		long i1, i2;
		if (arity == 1) {
			i1 = (this.Arguments[0].Deref()).LongValue();
			if (Name.equals("-"))
				return -i1;
			if (Name.equals("+"))
				return i1;
			return 0;
		}
		if (arity != 2)
			return 0;
		i1 = (this.Arguments[0].Deref()).LongValue();
		i2 = (this.Arguments[1].Deref()).LongValue();
		if (Name.equals("-"))
			return i1 - i2;
		if (Name.equals("+"))
			return i1 + i2;
		if (Name.equals("*"))
			return i1 * i2;
		if (Name.equals("/"))
			return i1 / i2;
		return 0;
	}

	public Term Deref() {
		return this;
	}

	boolean IsList() {
		return this.isLixt == '.';
	}

	static void formattedListOutput(int formatFlags, Appendable buffer, Term T) throws IOException {
		while (true) {
			T = T.Deref();
			if (T.IsNil())
				return;
			if (T.IsList()) {
				int arity = T.Arity() - 1;
				int carg = 0;
				while (carg < arity) {
					buffer.append(",");
					T.ArgDeRef(carg).formattedOutput(formatFlags, buffer);
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
		if (this.isLixt == '.') {
			buffer.append("[");
			this.Arguments[0].Deref().formattedOutput(formatFlags, buffer);
			Fun.formattedListOutput(formatFlags, buffer, this.Arguments[1].Deref());
			buffer.append("]");
			return;
		}
		Const.formattedOutputC(formatFlags, buffer, this.GetName());
		buffer.append("(");
		int arity1 = this.Arity();
		for (int carg = 0; carg < arity1; carg++) {
			if (carg != 0)
				buffer.append(",");
			Term t = this.Arg(carg);
			if (t == null) {
				buffer.append("@null");
			} else {
				t.formattedOutput(formatFlags, buffer);
			}
		}
		buffer.append(")");
	}

	public boolean Unify(Term that, Prolog mach) {
		Fun tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(Data.SameTypes(this, that)))
			return that.Bind(this, mach);
		// if (!((this.Name).equals(that.GetName()))) return false ;
		if ((this.Name) != (that.GetName()))
			return false;

		tmpfunct = (Fun) that; // cast perhaps to be avoided
		i = this.Arguments.length;
		j = tmpfunct.Arguments.length;
		if (i != j)
			return false;
		arg1 = this.Arguments;
		arg2 = tmpfunct.Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if (!(obj1.Unify(obj2, mach)))
				return false;
		} while (i > 0);
		return true;
	}

	boolean Equal(Term that) {
		Fun tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if (!(Data.SameTypes(this, that))) {
			return false;
		}
		;
		if (!((this.GetName()).equals(that.GetName())))
			return false;

		tmpfunct = (Fun) that; // cast perhaps to be avoided
		i = this.Arguments.length;
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
		return this.Arguments;
	}

	public int Arity() {
		return this.Arguments.length;
	}

	String GetName() {
		return this.Name;
	}

	public boolean isVar() {
		return false;
	}

	public boolean isFVar() {
		return false;
	}

	public boolean isStruct() {
		return true;
	}

	public boolean isConst() {
		return false;
	}
}