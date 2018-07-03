package SxxMachine;

import java.io.IOException;

class FrozenVar extends Term implements Undoable {
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

	public void UnTrailSelf() {
		Refers = null;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append("_" + Integer.toHexString(hashCode()));
	}

	boolean Bind(Term that, Prolog mach) {
		// Var v2;
		if (that.isFVar()) {
			FrozenVar thatv = (FrozenVar) that;
			Fun newgoals = new Fun(",", this.goals, thatv.goals);
			FrozenVar newfrv = new FrozenVar(mach, mach.CurrentChoice, newgoals);
			this.Refers = thatv.Refers = newfrv;
			mach.TrailEntry(this);
			mach.TrailEntry(thatv);
		} else if (that.isVar()) {
			return that.Bind(this, mach);
		} else {
			this.Refers = that;
			mach.TrailEntry(this);
			mach.TrailEntry(new PopPendingGoals(mach, mach.pendinggoals));
			mach.pendingGoals = Data.Cons(goals, mach.pendingGoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	public boolean Unify(Term that, Prolog mach) {
		return Bind(that, mach);
	}

	boolean Equal(Term that) {
		if (!(that.isFVar())) {
			return false;
		}
		;
		return this == that;
	}

	public String GetName() {
		return toQuotedString();
	}

	@Override
	public int Arity() {
		return VAR;
	}

	@Override
	public boolean isVar() {
		// TODO Auto-generated method stub
		return false;
	}

	public boolean isFVar() {
		// TODO Auto-generated method stub
		return true;
	}

	public boolean isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	public boolean isConst() {
		// TODO Auto-generated method stub
		return false;
	}
}