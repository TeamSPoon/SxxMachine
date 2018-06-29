package SxxMachine;

import java.io.IOException;

public class Const extends Term {
	public static final Term Nil = Intern("[]");
	String Name;

	long LongValue() {
		return 0;
	}

	Const(String N) {
		Name = N;
	}

	Term Copy(Prolog m, long t) {
		return this; //new Const(Name);
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
		Const.formattedOutputC(formatFlags, buffer, GetName());
	}

	public boolean Unify(Term that) {
		if (SameTypes(this, that))
			// return (that.GetName()).equals(this.Name) ;
			return (that.GetName() == this.Name);
		return that.Bind(this);
	}

	boolean Equal(Term that) {
		if (SameTypes(this, that))
			return (that.toQuotedString()).equals(this.toQuotedString());
		return false;
	}

	public int Arity() {
		return CONST;
	}

	String GetName() {
		return Name;
	}

	boolean IsNil() {
		if (Nil == this)
			return true;
		if (Nil.GetName() == this.Name || this.Name.equals("[]".intern())) {
			//throw
		}
		return false;
	}

	Operation[] byArity = null;

	@Override
	public Operation FindProc(int i) {
		if (i < 33) {
			if (byArity != null) {
				Operation was = byArity[i];
				if (was != null)
					return was;
				was = byArity[i] = Prolog.Predicates.LoadPred(Name, i);
				return was;
			} else {
				Operation was = Prolog.Predicates.LoadPred(Name, i);
				if (was != null) {
					byArity = new Operation[32];
					byArity[i] = was;
				}
				return was;
			}
		}
		return Prolog.Predicates.LoadPred(Name, i);
	}
}
