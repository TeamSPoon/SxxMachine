package SxxMachine;

import java.io.IOException;;

public class Real extends Term {
	public Number IntValue;

	Real(Number i) {
		IntValue = i;
	}

	Term Copy(Prolog m, long t) {
		return new Real(IntValue);
	}

	long LongValue() {
		return IntValue.longValue();
	}

	public Term Deref() {
		return this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("" + IntValue);
	}

	public boolean Unify(Term that) {
		if (that.Arity() != Arity()) {
			return that.Bind(this);
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	boolean Equal(Term that) {
		if (that.Arity() != Arity()) {
			return false;
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	String GetName() {
		return "" + IntValue;
	}

	public final int Arity() {
		return Term.REAL;
	}

	public final double DoubleValue() {
		return IntValue.doubleValue();
	}

}