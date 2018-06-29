package SxxMachine;

import java.io.IOException;

abstract class Term extends Data {

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

	boolean Bind(Term that) {
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
				trail.push1(new Undoable() {
					@Override
					public void Unwind() {
						Term.this.attrs = wasAttrs;
					}
				});
			}
			return newatts;
		} else {
			Term next = attrs;
			do {
				if (next.Arg(0).equals(name)) {
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
		trail.push1(new Undoable() {
			@Override
			public void Unwind() {
				goals = prev;
			}
		});
		return this.goals = newgoals;
	}

	public Term frozenGoals() {
		return nullIsNil(goals);
	}

	public Term[] GetArgs() {
		// TODO Auto-generated method stub
		return null;
	}

	String GetName() {
		System.out.println("general getname on terms not available");
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
				trail.push1(new Undoable() {

					@Override
					public void Unwind() {
						// TODO Auto-generated method stub

					}
				});
			}
			attrs = newatts;
			return;
		} else {
			Term next = wasAttrs;
			do {
				if (wasAttrs.Arg(0).equals(name)) {
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
	}

	public void setAttrs(Prolog trail, Term newval) {
		Term prev = nullIsNil(attrs);
		trail.push1(new Undoable() {
			@Override
			public void Unwind() {
				attrs = prev;
			}
		});
		this.attrs = newval;
	}

	public void setGoals(Prolog trail, Term newval) {
		Term prev = nullIsNil(goals);
		trail.push1(new Undoable() {
			@Override
			public void Unwind() {
				goals = prev;
			}
		});
		this.goals = newval;
	}

	public String toQuotedString() {
		Appendable buffer = new StringBuilder();
		try {
			formattedOutput(1, buffer);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return buffer.toString();
	}

	public String toString() {
		return toQuotedString();
	}

	public boolean Unify(Prolog mach, Term o1) {
		return Unify(o1);
	}

	boolean Unify(Term that) {
		System.out.println("general unify on terms not available");
		return false;
	}

	void UnTrailSelf() {
		System.out.println("general untrail on terms not available");
	}

}
