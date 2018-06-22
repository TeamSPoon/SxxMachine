import java.util.Hashtable;

//there is a choice between 3 predicate table implementations
//we leave them all here, until we decide which is best

//class PredTable extends java.util.Hashtable {
//PredTable() {
//new Hashtable();
//}
//void InsertNameArity(String N, int A, Code Adr) {
//put(A+N,Adr);
//}
//Code IsInPredTable(String N, int A) {
//return (Code)get(A+N);
//}
//}

//class PredTable extends Vector
//{
//PredTable() { new Vector(); }
//
//void InsertNameArity(String N, int A, Code Adr)
//{ //System.err.println("!!!SIZE="+size()+"ADD"+N+"/"+A);
//if (size() <= A) setSize(A+1);
//Hashtable T = (Hashtable)elementAt(A);
//if (T == null)
//{ T = new Hashtable();
//setElementAt(T,A);
//}
//T.put(N,Adr);
//}
//
//Code IsInPredTable(String N, int A)
//{ //System.err.println("!!!FIND"+N+"/"+A);
//if(A>=size()) return null;
//return (Code)((Hashtable)elementAt(A)).get(N);
//}
//}
class PredTable {
	Hashtable<String, Code> tables[];

	PredTable() {
		tables = new Hashtable[33];
	}

	void InsertNameArity(String N, int A, Code Adr) {
		Hashtable<String, Code> T = tables[A];
		if (T == null) {
			tables[A] = T = new Hashtable<String, Code>();
		}
		T.put(N, Adr);
	}

	Code IsInPredTable(String N, int A) {
		if (tables[A] == null)
			return null;
		return (Code) (tables[A].get(N));
	}

	// Java ONLY
	Code LoadPred(PrologMachine thiz, String Name, int arity) // arity is
																// source
	// arity before
	// bin
	// in predtable + 1 !
	{
		Code code;

		code = UpperPrologMachine.Predicates.IsInPredTable(Name, arity + 1);
		if (code != null)
			return code;
		code = Instanciate(Name, arity);
		UpperPrologMachine.Predicates.InsertNameArity(Name, arity + 1, code);
		code.Init(thiz);
		return code;
	}

	private Code Instanciate(String Name, int arity) {
		Class<?> loaded_class;
		int reason = 0;
		Code code = null;
		try {
			Package p = PredTable.class.getPackage();
			String pp = "";
			if (p != null) {
				pp = p.getName() + ".";
			}
			String s1 = pp + "pred_" + Name + "_" + arity;
			// String s2 = s1 + ".class" ;
			// System.out.println("Trying to load " + s2) ;
			loaded_class = java.lang.Class.forName(s1);
			// System.out.println("Loaded " + s2) ;
			code = (Code) (loaded_class.newInstance());
			// System.out.println("and created "+s2) ;
		} catch (ClassNotFoundException e) {
			reason = 1;
		} catch (IllegalAccessException e) {
			reason = 2;
		} catch (InstantiationException e) {
			reason = 3;
		}

		if (reason > 0) {
			System.out.println("Predicate " + Name + "/" + arity + " not found; does its .class file exist ?");
			return UpperPrologMachine.Fail0;
		}
		return code;
	}
}