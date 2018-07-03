package SxxMachine;

import java.io.IOException;;

public class Real extends Term {
	public Number Num;

	Real(Number i) {
		Num = i;
	}

	Term Copy(Prolog m, long t) {
		return new Real(Num);
	}

	long LongValue() {
		return Num.longValue();
	}

	public Term Deref() {
		return this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("" + Num);
	}

	public boolean Unify(Term that, Prolog mach) {
		if (that.Arity() != Arity()) {
			return that.Bind(this, mach);
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	boolean Equal(Term that) {
		if (that.Arity() != Arity()) {
			return false;
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	public String GetName() {
		return "" + Num;
	}

	public final int Arity() {
		return Term.REAL;
	}

	public final double DoubleValue() {
		return Num.doubleValue();
	}

	@Override
	public boolean isVar() {
		return false;
	}

	@Override
	public boolean isFVar() {
		return false;
	}

	@Override
	public boolean isStruct() {
		return false;
	}

	@Override
	public boolean isConst() {
		return false;
	}

	@Override
	public boolean isInt() {
		return Num.hashCode() == Num.intValue();
	}

}