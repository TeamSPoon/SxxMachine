package SxxMachine;

public class Int extends Real {
	// long Num;

	Int(long i) {
		super(i);
	}

	Term Copy(Prolog m, long t) {
		return new Int(this.Num.longValue());
	}
	
	public final int Arity() {
		return Data.INT;
	}

	public boolean isInt() {
		return true;
	}

}