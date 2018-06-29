package SxxMachine;

public class Int extends Real {
	//long IntValue;

	Int(long i) {
		super(i);
	}

	Term Copy(Prolog m, long t) {
		return new Int(IntValue.longValue());
	}
}