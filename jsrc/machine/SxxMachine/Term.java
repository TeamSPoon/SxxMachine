package SxxMachine;

import java.io.IOException;

abstract class Term implements Undoable {

	public Term goals;

	public Term attrs;

	public Term Arg(int i) {
		System.out.println("general Arg on terms not available");
		return null;
	}

	public Term ArgDeRef(int i) {
		return this.Arg(i).Deref();
	}

	public Term ArgNoDeRef(int i) {
		return this.Arg(i);
	}

	/**
	 * returns or fakes an arity for all subtypes
	 */
	abstract public int Arity();

	boolean Bind(Term that, Prolog mach) {
		return false;
	}

	Term Copy(Prolog m, long t) {
		System.out.println("general copy on terms not available");
		return null;
	}

	public Term Deref() {
		System.out.println("general deref on terms not available");
		return this;
	}

	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return super.hashCode();
	}

	@Override
	public boolean equals(Object obj) {
		System.out.println("general equals on terms not available");
		if (!(obj instanceof Term))
			return false;
		return this.Equal((Term) obj);
	}

	boolean Equal(Term that) {
		System.out.println("general equal on terms not available");
		return false;
	}

	public Term findOrAttrValue(Prolog trail, boolean createIfMissing, Term name) {
		if (this.attrs == null || this.attrs == Const.Nil) {
			if (!createIfMissing)
				return Const.Nil;
			Term wasAttrs = this.attrs;
			Fun newatts = null;
			this.attrs = Const.Nil;
			newatts = new Fun("att", name, null, Const.Nil);
			if (trail != null) {
				trail.push(new Undoable() {
					@Override
					public void UnTrailSelf() {
						Term.this.attrs = wasAttrs;
					}
				});
			}
			return newatts;
		} else {
			Term next = this.attrs;
			do {
				if (next.Arg(0).Equal(name)) {
					return next;
				}
				Term nnext = next.Arg(2);
				if (!nnext.GetName().equals("att")) {
					break;
				}
				next = nnext;
			} while (true);
			if (!createIfMissing)
				return Const.Nil;
			next.SetArg(trail, 2, new Fun("att", name, null, Const.Nil));
			return next;
		}
	}

	// @TODO
	public Operation FindProc(int i) {
		return Prolog.Predicates.LoadPred(this.GetName(), i);
	}

	abstract public void formattedOutput(int formatFlags, Appendable buffer) throws IOException;

	public Term freeze(Prolog trail, Term newval) {
		Term prev = this.frozenGoals();
		Term newgoals = Data.Cons(newval, prev);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				Term.this.goals = prev;
			}
		});
		return this.goals = newgoals;
	}

	public Term frozenGoals() {
		return this.nullIsNil(this.goals);
	}

	public Term[] GetArgs() {
		System.out.println("general GetArgs on terms not available");
		return null;
	}

	String GetName() {
		System.out.println("general GetName on terms not available");
		return "";
	}

	public boolean isAttvar() {
		return this.attrs != null && this.attrs != Const.Nil;
	}

	public boolean isFrozen() {
		return this.goals != null && this.goals != Const.Nil;
	}

	boolean IsList() {
		return false;
	}

	boolean IsNil() {
		return false;
	}

	long LongValue() {
		Term deref = this.Deref();
		if (deref != this)
			return deref.LongValue();
		System.out.println("general LongValue on terms not available");
		return -1;
	}

	private Term nullIsNil(Term attrs2) {
		return attrs2 == null ? Const.Nil : attrs2;
	}

	public void putAttrValue(Prolog trail, Term name, Term val) {
		Term wasAttrs = this.attrs;
		Term newatts = null;
		if (this.attrs == null || this.attrs == Const.Nil) {
			this.attrs = Const.Nil;
			newatts = new Fun("att", name, val, Const.Nil);
			if (trail != null) {
				trail.push(new Undoable() {

					@Override
					public void UnTrailSelf() {
						// TODO Auto-generated method stub

					}
				});
			}
			this.attrs = newatts;
			return;
		} else {
			Term next = wasAttrs;
			do {
				if (wasAttrs.Arg(0).Equal(name)) {
					wasAttrs.SetArg(trail, 1, val);
					return;
				}
				Term nnext = next.Arg(2);
				if (!nnext.GetName().equals("att")) {
					break;
				}
				next = nnext;
			} while (true);
			next.SetArg(trail, 2, new Fun("att", name, val, Const.Nil));
		}
	}

	public void SetArg(Prolog trail, int i0, Term value) {
		System.out.println("general SetArg on terms not available");
	}

	public void setAttrs(Prolog trail, Term newval) {
		Term prev = this.nullIsNil(this.attrs);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				Term.this.attrs = prev;
			}
		});
		this.attrs = newval;
	}

	public void setGoals(Prolog trail, Term newval) {
		Term prev = this.nullIsNil(this.goals);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				Term.this.goals = prev;
			}
		});
		this.goals = newval;
	}

	public String toQuotedString() {
		Appendable buffer = new StringBuilder();
		try {
			this.formattedOutput(1, buffer);
		} catch (Throwable e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return buffer.toString();
	}

	public String toString() {
		return this.toQuotedString();
	}

	boolean Unify(Term that, Prolog mach) {
		System.out.println("general unify on terms not available");
		return false;
	}

	public void UnTrailSelf() {
		System.out.println("general untrail on terms not available");
	}

	abstract public boolean isVar();

	public boolean isFVar() {
		return this.isFrozen() && this.isVar();
	}

	abstract public boolean isStruct();

	abstract public boolean isConst();

	public boolean isInt() {
		return false;
	}

	public double DoubleValue() {
		return this.LongValue();
	}

}
