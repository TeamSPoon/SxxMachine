package SxxMachine;

import java.io.IOException;

public class Const extends Term {
	public static final Term Nil = Data.Intern("[]");
	String Name;

	long LongValue() {
		return 0;
	}

	Const(String N) {
		this.Name = N;
	}

	Term Copy(Prolog m, long t) {
		return this; // new Const(Name);
	}

	public Term Deref() {
		return this;
	}

	public static void formattedOutputC(int formattingFlags, Appendable buffer, String str) throws IOException {
		if (formattingFlags == 0) {
			buffer.append(str);
		} else {
			buffer.append("'");
			buffer.append(str);
			buffer.append("'");
		}
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		Const.formattedOutputC(formatFlags, buffer, this.GetName());
	}

	public boolean Unify(Term that, Prolog mach) {
		if (Data.SameTypes(this, that))
			// return (that.GetName()).equals(this.Name) ;
			return (that.GetName() == this.Name);
		return that.Bind(this, mach);
	}

	boolean Equal(Term that) {
		if (Data.SameTypes(this, that))
			return (that.toQuotedString()).equals(this.toQuotedString());
		return false;
	}

	public int Arity() {
		return Data.CONST;
	}

	String GetName() {
		return this.Name;
	}

	boolean IsNil() {
		if (Const.Nil == this)
			return true;
		if (Const.Nil.GetName() == this.Name || this.Name.equals("[]")) {
			// throw
		}
		return false;
	}

	Operation[] byArity = null;

	@Override
	public Operation FindProc(int i) {
		if (i < 33) {
			if (this.byArity != null) {
				Operation was = this.byArity[i];
				if (was != null)
					return was;
				was = this.byArity[i] = Prolog.Predicates.LoadPred(this.Name, i);
				return was;
			} else {
				Operation was = Prolog.Predicates.LoadPred(this.Name, i);
				if (was != null) {
					this.byArity = new Operation[32];
					this.byArity[i] = was;
				}
				return was;
			}
		}
		return Prolog.Predicates.LoadPred(this.Name, i);
	}

	@Override
	public boolean isVar() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isFVar() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isConst() {
		// TODO Auto-generated method stub
		return true;
	}
}
