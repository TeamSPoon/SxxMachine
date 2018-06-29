package SxxMachine;

final class Int extends Term {
	long IntValue;

	Int(long i) {
		IntValue = i;
	}

	Term Copy(Prolog m, long t) {
		return new Int(IntValue);
	}

	long LongValue() {
		return IntValue;
	}

	public Term Deref() {
		return this;
	}

	public String toString() {
		return "" + IntValue;
	}

	public boolean Unify(Term that) {
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