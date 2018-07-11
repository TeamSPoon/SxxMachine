package SxxMachine;

import java.util.Hashtable;

public final class Data {
	
	public final static int OBJ = -4;
	public final static int REAL = -3;
	public final static int INT = -2;
	public final static int VAR = -1;
	public final static int CONST = 0;


	public static Real Number(Number d) {
		if (d.intValue() == d.hashCode())
			return new Int(d.longValue());
		return new Real(d);
	}

	public static Int Number(long d) {
		return new Int(d);
	}

	public static Real Float(Number d) {
		return new Real(d);
	}

	public static Real BigDec(String s) {
		return new Real(Double.parseDouble(s));
	}

	public static Int BigInt(String s) {
		return Data.Number(Long.parseLong(s));
	}

	public static Fun Cons(Term... deref) {
		return new Fun(".", deref);
	}

	public static Fun F(Const string6, Term... terms) {
		return new Fun(string6.GetName(), terms);
	}

	public static Fun F(String string6, Term... terms) {
		return new Fun(string6, terms);
	}

	public static Hashtable<String, Const> atomTable = new Hashtable<>();

	public static Const Intern(String d) {
		Const c = Data.atomTable.get(d);
		if (c == null) {
			c = new Const(d);
			Data.atomTable.put(d, c);
		}
		return c;
	}

	static boolean SameTypes(Term thiz, Term that) {
		return thiz.Arity() == that.Arity();
	}

	public static Var V(Prolog mach) {
		return new Var(mach);
	}

}
