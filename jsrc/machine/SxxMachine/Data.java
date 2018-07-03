package SxxMachine;

import java.util.Hashtable;

public class Data {

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
		return Number(Long.parseLong(s));
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
		Const c = atomTable.get(d);
		if (c == null) {
			c = new Const(d);
			atomTable.put(d, c);
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
