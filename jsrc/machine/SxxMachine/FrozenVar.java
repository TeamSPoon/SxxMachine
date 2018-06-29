package SxxMachine;

import java.io.IOException;

class FrozenVar extends Term {
	Term Refers;
	long timestamp;
	Prolog mach;
	Term goals;

	FrozenVar(Prolog machin, Term action) {
		Refers = null;
		timestamp = machin.TimeStamp;
		mach = machin;
		goals = action;
	}

	FrozenVar(Prolog machin, long t, Term action) {
		Refers = null;
		timestamp = t;
		mach = machin;
		goals = action;
	}

	Term Copy(Prolog m, long t) {
		return Const.Intern("[]"); // might decide to copy frozenvars
									// later
	}

	public Term Deref() {
		if (Refers == null)
			return this;
		return ((Term) Refers).Deref();
	}

	void UnTrailSelf() {
		Refers = null;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("_" + Integer.toHexString(hashCode()));
	}

	boolean Bind(Term that) {
		// Var v2;
		if (that instanceof FrozenVar) {
			FrozenVar thatv = (FrozenVar) that;
			Fun newgoals = new Fun(",".intern(), this.goals, thatv.goals);
			FrozenVar newfrv = new FrozenVar(mach, mach.CurrentChoice, newgoals);
			this.Refers = thatv.Refers = newfrv;
			mach.TrailEntry(this);
			mach.TrailEntry(thatv);
		} else if (that instanceof Var) {
			return that.Bind(this);
		} else {
			this.Refers = that;
			mach.TrailEntry(this);
			mach.TrailEntry(new PopPendingGoals(mach, mach.pendinggoals));
			mach.pendinggoals = new Fun(".".intern(), goals, mach.pendinggoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	public boolean Unify(Term that) {
		return Bind(that);
	}

	boolean Equal(Term that) {
		if (!(that instanceof FrozenVar)) {
			return false;
		}
		;
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