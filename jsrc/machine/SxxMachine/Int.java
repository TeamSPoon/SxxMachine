package SxxMachine;

public class Int extends Real {
	// long Num;

	Int(long i) {
		super(i);
	}

	Term Copy(Prolog m, long t) {
		return new Int(Num.longValue());
	}

	public boolean isInt() {
		// TODO Auto-generated method stub
		return true;
	}

}