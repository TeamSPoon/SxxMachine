import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.function.Function;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall
class Code implements java.util.function.Function<PrologMachine, Function> {

	public static Var V(PrologMachine mach) {
		return new Var(mach);
	}

	public static Funct F(Const name, Term... args) {
		return Term.F(name, args);
	}

	public static Funct F(String name, Term... args) {
		return Term.F(name, args);
	}

	static private Method findMethod(Class c, String methodName) {
		try {
			return c.getDeclaredMethod(methodName, PrologMachine.class);
		} catch (NoSuchMethodException e1) {
			return null;
		} catch (SecurityException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
			return null;
		}
	}

	public static Method GetMethod(Class c, Object o) {
		Method m = null;
		if (c == null)
			c = o.getClass();
		m = findMethod(c, "exec_static");
		if (m == null) {
			m = findMethod(c, "exec");
		}
		if (m == null) {
			String named = c.getName();
			int last_index = named.lastIndexOf('.');
			named = "exec_" + named.substring(last_index + 1);
			m = findMethod(c, named);
		}
		return m;
	}

	public java.util.function.Function<PrologMachine, Function> apply(PrologMachine mach) {

		// for predicates using static method
		java.util.function.Function<PrologMachine, Function> o = this;
		Class c = o.getClass();
		Method m = GetMethod(c, o);
		if (m == null) {
			Debug(this);
		}
		if (Modifier.isStatic(m.getModifiers()))
			o = null;
		try {
			java.util.function.Function<PrologMachine, Function> ret = //
					(java.util.function.Function<PrologMachine, Function>) // asdf
					m.invoke(o, mach);
			if (ret == null) {
				Debug(this);
			}
			return ret;
		} catch (IllegalAccessException | IllegalArgumentException | InvocationTargetException | SecurityException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			mach.ExceptionRaised = 3;
			Debug(this);
			return this;
		}
	}

	int Arity() {
		System.out.println("no general code arity !");
		return 0;
	}

	public void Debug(Code code) {
		PrologMachine.Debug(this);

	}

	void Init(PrologMachine mach) {

	}

	public static Term Float(double d) {
		// TODO Auto-generated method stub
		return null;
	}

}

class FailProc extends Code {
	int Arity() {
		return 1;
	}

	FailProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("fail".intern(), 1, this);
	}

	public java.util.function.Function<PrologMachine, Function> apply(PrologMachine mach) {
		if (mach.CurrentChoice == -1)
			return (null);
		// unwind the trail
		mach.UnTrail();
		// restore the arguments
		mach.RestoreArguments();
		// reset CUTB
		mach.CUTB = mach.CurrentChoice - 1;
		// return the alternative as continuation
		return mach.GetAlternative();
	}

}

class CutProc extends Code {
	int Arity() {
		return 2;
	}

	CutProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("cut".intern(), 2, this);
	}

	static java.util.function.Function<PrologMachine, Function> exec_static(PrologMachine mach) { // Areg[0] contains a
																									// Term of
		// type
		// HeapChoice
		int i = ((HeapChoice) (mach.Areg[0])).CutTo;
		mach.DoCut(i);
		mach.Areg[0] = mach.Areg[1];
		mach.CUTB = mach.CurrentChoice;
		return mach.Call1.exec_static(mach);
	}
}

class TrueProc extends Code {
	int Arity() {
		return 1;
	}

	TrueProc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("true".intern(), 1, this);
	}

	static java.util.function.Function<PrologMachine, Function> Exec(PrologMachine mach) {
		return UpperPrologMachine.Call1;
	}

}

class Call1Proc extends Code {
	int Arity() {
		return 1;
	}

	Call1Proc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("call".intern(), 1, this);
	}

	static java.util.function.Function<PrologMachine, Function> exec_static(PrologMachine mach) { // Areg[0] contains a
																									// Funct -
		// might have to
		// be dereffed
		Funct pred = (Funct) ((mach.Areg[0]).Deref());
		int arity;
		String FunctName;
		java.util.function.Function<PrologMachine, Function> code;

		FunctName = pred.GetName();
		arity = (pred.Arguments).length;
		code = mach.LoadPred(FunctName, arity - 1);
		Term args[] = pred.Arguments;
		while (arity-- > 0) {
			mach.Areg[arity] = args[arity];
		}
		return code;
	}
}

class Call2Proc extends Code {
	int Arity() {
		return 2;
	}

	Call2Proc(PrologMachine mach) {
		mach.Predicates.InsertNameArity("call".intern(), 2, this);
	}

	static java.util.function.Function<PrologMachine, Function> exec_static(PrologMachine mach) {

		// Areg[0] contains a
		// Funct or Const -
		// might
		// have to be dereffed
		Term obj = (mach.Areg[0]).Deref();
		int arity;
		String PredName;
		java.util.function.Function<PrologMachine, Function> code;
		Funct pred = null;

		if (obj instanceof Funct) {
			pred = (Funct) obj;
			PredName = pred.GetName();
			arity = (pred.Arguments).length;
		} else // it is a Const
		{
			PredName = ((Const) obj).Name;
			arity = 0;
		}

		code = mach.LoadPred(PredName, arity);
		mach.Areg[arity] = mach.Areg[1];
		if (pred != null) {
			Term args[] = pred.Arguments;
			while (arity-- > 0) {
				mach.Areg[arity] = args[arity];
			}
		}
		return code;
	}
}

interface Undoable {

	public void Unwind();

}
