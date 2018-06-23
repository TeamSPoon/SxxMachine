// Generated code file - by dmiles
// Copyright August 16, 1996,2018 LOGICMOO, KUL and CUM
// Authors: Douglas R. Miles, Bart Demoen and Paul Tarau

/*
animal(goat,_12662):-call(_12662).
animal(elephant,_12740):-call(_12740).
animal(_12792,_12838):-write('please type one more animal name: ',read(_12792,_12838)).

*/
class pred_animal_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_animal_1__1();
	static Code cl2 = new pred_animal_1__2();
	static Code cl3 = new pred_animal_1__3();
	static Code write2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("animal");
	static String string2 = Const.IStr("call");
	static String string3 = Const.IStr("elephant");
	static String string4 = Const.IStr("goat");
	static String string5 = Const.IStr("please type one more animal name: ");
	static String string6 = Const.IStr("read");
	static String string7 = Const.IStr("write");

	void Init(PrologMachine mach) {
		entry_code = this;
		write2cont = mach.LoadPred("write", 1);
	}

	int Arity() {
		return 1;
	}

	Code Exec(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

/* */class pred_animal_1__1 extends pred_animal_1 {
	Code Exec(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Intern(string4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

/* */class pred_animal_1__2 extends pred_animal_1 {
	Code Exec(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Intern(string3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

/* */class pred_animal_1__3 extends pred_animal_1 {
	Code Exec(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = Term.Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = Const.Intern(string5);
		local_aregs[1] = Term.Compound(string6, var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return write2cont;
	}
}
