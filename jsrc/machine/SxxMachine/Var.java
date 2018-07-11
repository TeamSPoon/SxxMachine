package SxxMachine;

import java.io.IOException;

class Var extends Term {
	Term Refers;
	long timestamp;
	// Prolog mach;
	private String named = null;

	Var(Prolog machin) {
		Refers = this;
		timestamp = machin.TimeStamp;
		// mach = machin;
	}

	Var(Prolog machin, long t) {
		Refers = this;
		timestamp = t;
		// mach = machin;
	}

	public Var(String sval) {
		this(Prolog.M, sval);
	}

	public Var(Prolog prologmachine, String sval) {
		Refers = this;
		named = sval;
		Prolog mach = prologmachine;
		timestamp = mach.TimeStamp;
	}

	public Var(Prolog mach, int currentChoice, Fun newgoals) {
		this(mach, currentChoice);
		goals = newgoals;
	}

	Term Copy(Prolog m, long t) {
		Var newv = new Var(m, t);
		VarDict newdict = new VarDict(this, newv);
		Refers = newdict;
		// mach.TrailEntry(this);
		m.TrailEntry(this);
		return newv;
	}

	public Term Deref() {
		if ((Refers == this) || !(Refers instanceof Term))
			return this;
		return ((Term) Refers).Deref();
	}

	public void UnTrailSelf() {
		Refers = this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append(GetVarName());
	}

	public String GetVarName() {
		// TODO Auto-generated method stub		
		return "_" + Math.abs(timestamp) + "_" + Integer.toHexString(hashCode()) + ((named != null) ? "_" + named : "");
	}

	boolean FBind(Term that, Prolog mach) {
		// Var v2;
		if (that.isFVar()) {
			Var thatv = (Var) that;
			Fun newgoals = new Fun(",", this.goals, thatv.goals);
			Var newfrv = new Var(mach, mach.CurrentChoice, newgoals);
			this.Refers = thatv.Refers = newfrv;
			mach.TrailEntry(this);
			mach.TrailEntry(thatv);
		} else if (that.isVar()) {
			return that.Bind(this, mach);
		} else {
			this.Refers = that;
			mach.TrailEntry(this);
			mach.TrailEntry(new PopPendingGoals(mach, mach.pendingGoals));
			mach.pendingGoals = Data.Cons(goals, mach.pendingGoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	boolean Bind(Term that, Prolog mach) {
		if (isFVar()) {
			return FBind(that, mach);
		} else {
			return VBind(that, mach);
		}
	}

	boolean VBind(Term that, Prolog mach) {
		Var v2;
		if (that.isVar()) {
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

	public boolean Unify(Term that, Prolog mach) {
		return Bind(that, mach);
	}

	boolean Equal(Term that) {
		return this == that;
	}

	public String GetName() {
		return toQuotedString();
	}

	@Override
	public int Arity() {
		return VAR;
	}

	public boolean isVar() {
		return true;
	}

	public boolean isFVar() {
		return isFrozen();
	}

	public boolean isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	public boolean isConst() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isInt() {
		// TODO Auto-generated method stub
		return false;
	}
}