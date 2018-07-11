package SxxMachine;

import java.io.IOException;;

public class Real extends Term {
	public Number Num;

	Real(Number i) {
		this.Num = i;
	}

	Term Copy(Prolog m, long t) {
		return new Real(this.Num);
	}

	long LongValue() {
		return this.Num.longValue();
	}

	public Term Deref() {
		return this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("" + this.Num);
	}

	public boolean Unify(Term that, Prolog mach) {
		if (that.Arity() != this.Arity()) {
			return that.Bind(this, mach);
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	boolean Equal(Term that) {
		if (that.Arity() != this.Arity()) {
			return false;
		}
		return (this.DoubleValue() == (this.DoubleValue()));
	}

	public String GetName() {
		return "" + this.Num;
	}

	public int Arity() {
		return Data.REAL;
	}

	public final double DoubleValue() {
		return this.Num.doubleValue();
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
		return this.Num.hashCode() == this.Num.intValue();
	}

}