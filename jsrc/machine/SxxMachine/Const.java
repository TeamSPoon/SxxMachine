package SxxMachine;

public class Const extends Term {
	String Name;

	long LongValue() {
		return 0;
	}

	Const(String N) {
		Name = N;
	}

	Term Copy(Prolog m, long t) {
		return new Const(Name);
	}

	public Term Deref() {
		return this;
	}

	public String toString() {
		return Name;
	}

	public boolean Unify(Term that) {
		if (this.getClass() == that.getClass())
			// return (that.GetName()).equals(this.Name) ;
			return (that.GetName() == this.Name);
		return that.Bind(this);
	}

	boolean Equal(Term that) {
		if (this.getClass() == that.getClass())
			return (that.toString()).equals(this.toString());
		return false;
	}

	int Arity() {
		return 0;
	}

	String GetName() {
		return Name;
	}

	boolean IsNil() {
		return this.Name.equals("[]".intern());
	}

	public static String IStr(String string) {
		// TODO Auto-generated method stub
		return string.intern();
	}

	public static Const Intern(String N) {
		// TODO Auto-generated method stub
		return new Const(N);
	}

	public static Const Intern(Const N) {
		// TODO Auto-generated method stub
		return N;
	}

}