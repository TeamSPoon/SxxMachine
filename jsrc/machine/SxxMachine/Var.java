package SxxMachine;

import java.io.IOException;

class Var extends Term {
	Term Refers;
	long timestamp;
	// Prolog mach;
	private String named = null;

	Var(Prolog machin) {
		this.Refers = this;
		this.timestamp = machin.TimeStamp;
		// mach = machin;
	}

	Var(Prolog machin, long t) {
		this.Refers = this;
		this.timestamp = t;
		// mach = machin;
	}

	public Var(String sval) {
		this(Prolog.M, sval);
	}

	public Var(Prolog prologmachine, String sval) {
		this.Refers = this;
		this.named = sval;
		Prolog mach = prologmachine;
		this.timestamp = mach.TimeStamp;
	}

	public Var(Prolog mach, int currentChoice, Fun newgoals) {
		this(mach, currentChoice);
		this.goals = newgoals;
	}

	Term Copy(Prolog m, long t) {
		Var newv = new Var(m, t);
		VarDict newdict = new VarDict(this, newv);
		this.Refers = newdict;
		// mach.TrailEntry(this);
		m.TrailEntry(this);
		return newv;
	}

	public Term Deref() {
		if ((this.Refers == this) || !(this.Refers instanceof Term))
			return this;
		return this.Refers.Deref();
	}

	public void UnTrailSelf() {
		this.Refers = this;
	}

	public void formattedOutput(int formatFlags, Appendable buffer) throws IOException {
		buffer.append(this.GetVarName());
	}

	public String GetVarName() {
		// TODO Auto-generated method stub		
		return "_" + Math.abs(this.timestamp) + "_" + Integer.toHexString(this.hashCode()) + ((this.named != null) ? "_" + this.named : "");
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
			mach.pendingGoals = Data.Cons(this.goals, mach.pendingGoals);
			mach.ExceptionRaised = 1;
		}
		return true;
	}

	boolean Bind(Term that, Prolog mach) {
		if (this.isFVar()) {
			return this.FBind(that, mach);
		} else {
			return this.VBind(that, mach);
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
		return this.Bind(that, mach);
	}

	boolean Equal(Term that) {
		return this == that;
	}

	public String GetName() {
		return this.toQuotedString();
	}

	@Override
	public int Arity() {
		return Data.VAR;
	}

	public boolean isVar() {
		return true;
	}

	public boolean isFVar() {
		return this.isFrozen();
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