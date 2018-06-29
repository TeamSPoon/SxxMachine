package SxxMachine;

import java.io.IOException;

class Var extends Term {
	Term Refers;
	long timestamp;
	Prolog mach;

	Var(Prolog machin) {
		Refers = this;
		timestamp = machin.TimeStamp;
		mach = machin;
	}

	Var(Prolog machin, long t) {
		Refers = this;
		timestamp = t;
		mach = machin;
	}

	public Var(String sval) {
		Refers = this;
		mach = Prolog.M;
		timestamp = mach.TimeStamp;
	}

	Term Copy(Prolog m, long t) {
		Var newv = new Var(m, t);
		VarDict newdict = new VarDict(this, newv);
		Refers = newdict;
		mach.TrailEntry(this);
		return newv;
	}

	public Term Deref() {
		if ((Refers == this) || !(Refers instanceof Term))
			return this;
		return ((Term) Refers).Deref();
	}

	void UnTrailSelf() {
		Refers = this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("_" + Integer.toHexString(hashCode()));
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

	public boolean Unify(Term that) {
		return Bind(that);
	}

	boolean Equal(Term that) {
		return this == that;
	}

	String GetName() {
		return toQuotedString();
	}

	@Override
	public int Arity() {
		return VAR;
	}
}