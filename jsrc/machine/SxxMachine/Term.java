package SxxMachine;

import java.io.IOException;

abstract class Term extends Data implements Undoable {

	// private Term val;
	public final static int JAVA = -4;
	public final static int REAL = -3;
	public final static int INT = -2;
	public final static int VAR = -1;
	public final static int CONST = 0;

	public Term goals;

	public Term attrs;

	public Term Arg(int i) {
		System.out.println("general Arg on terms not available");
		return null;
	}

	public Term ArgDeRef(int i) {
		return Arg(i).Deref();
	}

	public Term ArgNoDeRef(int i) {
		return Arg(i);
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
		return (Term) this;
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
		return Equal((Term) obj);
	}

	boolean Equal(Term that) {
		System.out.println("general equal on terms not available");
		return false;
	}

	public Term findOrAttrValue(Prolog trail, boolean createIfMissing, Term name) {
		if (attrs == null || attrs == Const.Nil) {
			if (!createIfMissing)
				return Const.Nil;
			Term wasAttrs = attrs;
			Fun newatts = null;
			attrs = Const.Nil;
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
			Term next = attrs;
			do {
				if (next.Arg(0).Equal(name)) {
					return (Fun) next;
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
		return Prolog.Predicates.LoadPred(GetName(), i);
	}

	abstract public void formattedOutput(int formatFlags, Appendable buffer) throws IOException;

	public Term freeze(Prolog trail, Term newval) {
		Term prev = frozenGoals();
		Term newgoals = Data.Cons(newval, prev);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				goals = prev;
			}
		});
		return this.goals = newgoals;
	}

	public Term frozenGoals() {
		return nullIsNil(goals);
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
		return attrs != null && attrs != Const.Nil;
	}

	public boolean isFrozen() {
		return goals != null && goals != Const.Nil;
	}

	boolean IsList() {
		return false;
	}

	boolean IsNil() {
		return false;
	}

	long LongValue() {
		Term deref = Deref();
		if (deref != (Term) this)
			return deref.LongValue();
		System.out.println("general LongValue on terms not available");
		return -1;
	}

	private Term nullIsNil(Term attrs2) {
		return attrs2 == null ? Const.Nil : attrs2;
	}

	public void putAttrValue(Prolog trail, Term name, Term val) {
		Term wasAttrs = attrs;
		Term newatts = null;
		if (attrs == null || attrs == Const.Nil) {
			attrs = Const.Nil;
			newatts = new Fun("att", name, val, Const.Nil);
			if (trail != null) {
				trail.push(new Undoable() {

					@Override
					public void UnTrailSelf() {
						// TODO Auto-generated method stub

					}
				});
			}
			attrs = newatts;
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
		Term prev = nullIsNil(attrs);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				attrs = prev;
			}
		});
		this.attrs = newval;
	}

	public void setGoals(Prolog trail, Term newval) {
		Term prev = nullIsNil(goals);
		trail.push(new Undoable() {
			@Override
			public void UnTrailSelf() {
				goals = prev;
			}
		});
		this.goals = newval;
	}

	public String toQuotedString() {
		Appendable buffer = new StringBuilder();
		try {
			formattedOutput(1, buffer);
		} catch (Throwable e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return buffer.toString();
	}

	public String toString() {
		return toQuotedString();
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
		return isFrozen() && isVar();
	}

	abstract public boolean isStruct();

	abstract public boolean isConst();

	public boolean isInt() {
		return false;
	}

}
