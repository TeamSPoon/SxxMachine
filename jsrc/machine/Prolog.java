// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM


// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall

import java.util.*;
import java.io.* ;
import java.lang.Runtime ;

class PrologFromJava
{ 
  public static void main(String args[])
	{ 

// this is the application
// before it can call a Prolog goal, it must make and initialise a machine

	  PrologMachine M = new PrologMachine() ;
	  M.InitOnce() ;

// any time a new goal is called, the machine has to be "reset"

	  M.InitAlways() ;

// then you can call the goal

	  PrologObject Goal = new Funct("animal".intern(),new Var(M)) ; // animal(X)
	  PrologObject AnswerList = M.SolveGoal(Goal) ;

// AnswerList is now a list of instances of the Goal
// you can iterate through it as follows

	  PrologObject NextAnswerList, Answer ;

	  NextAnswerList = AnswerList.Deref() ;
	  while (NextAnswerList.islist())
		{ Answer = (((Funct)NextAnswerList).Arguments[0]).Deref() ;
		  // do something with the answer - e.g. print it
		  String s = Answer.toString() ;
		  System.out.println(s) ; System.out.flush() ;

		  // get the tail of the next answer list
		  NextAnswerList = (((Funct)NextAnswerList).Arguments[1]).Deref() ;
		}
	}
}

public static void main(String args[])
	{ 
	  System.out.println(
	  	"jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996") ;
	  (new Thread((new PrologMachine()))).start() ;
	}
}

class ChoicePointStackEntry
{ Code Alternative ;
  int Trail ;
  PrologObject Arguments[] ;
  long TimeStamp ;

  ChoicePointStackEntry(PrologObject args[])
	{ int l = args.length ;
	  Arguments = new PrologObject[l] ;
	  while (l > 0)
	  { l-- ; Arguments[l] = args[l] ; }
	  
	}
}

class UpperPrologMachine
{
  static PredTable Predicates = null ;
  static FailProc Fail0 = null ;
  static Call1Proc Call1 = null ;
  static Call2Proc Call2 = null ;
  static CutProc Cut2 = null ;
  static TrueProc True0 = null ;
}

class PrologMachine extends UpperPrologMachine implements Runnable
{ PrologObject Areg[] = new PrologObject[32] ;
  ChoicePointStackEntry ChoicePointStack[] ;
  PrologObject TrailStack[] ;
  PrologTokenizer stdin ;
  long TimeStamp ;
  int CUTB ;
  int CurrentChoice ;
  int TrailTop ;
  Lexer lextoc = null ;
  PrologObject assumptions ;
  PrologObject pendinggoals ;
  int ExceptionRaised ;
  InputStream currentinput ;
  OutputStream currentoutput ;



  public void run()
	{ Code code ;

	  InitOnce() ;
	  Areg[0] = new Funct("toplevel".intern(),new Int(0)) ;
	    		// 0 is a dummy continuation
	  InitAlways() ;
	  code = UpperPrologMachine.Call1 ;
	  while (true)
	  { while (ExceptionRaised == 0)
	  	{ code = code.Exec(this) ; }
	    if (ExceptionRaised > 1)
	    	{ if (ExceptionRaised != 2)
			System.out.println(
	    	  		"Exceptional ending "+ExceptionRaised) ;
	    	  System.exit(0) ;
	    	}
	    // there are pending goals - deal with them
	    ExceptionRaised = 0 ;
	    Continuation c = new Continuation(Areg,code) ;
	    Areg[0] = new Funct("execpendinggoals".intern(),pendinggoals,c) ;
	    TrailEntry(new PopPendingGoals(this,pendinggoals)) ;
	    pendinggoals = new Const("[]".intern()) ;
	    code = UpperPrologMachine.Call1 ;
	  }
	}


  PrologObject SolveGoal(PrologObject Goal)
	{ Code code = UpperPrologMachine.Call1 ;
	  PrologObject AnswerList = new Var(this) ;
	  ExceptionRaised = 0 ;

	  Areg[0] = new Funct("findall".intern(),
				Goal,
				Goal,
				AnswerList,
				new Funct("halt".intern(),new Int(0))
			     ) ;

	  while (ExceptionRaised == 0)
	  	{ code = code.Exec(this) ; }
	  return AnswerList ; // exceptions are ignored here !!!!
	}

  void InitOnce()
	{ if (null == Predicates) Predicates = new PredTable() ;
	  if (null == Fail0) Fail0 = new FailProc(this) ;
	  if (null == Call1) Call1 = new Call1Proc(this) ;
	  if (null == Call2) Call2 = new Call2Proc(this) ;
	  if (null == Cut2) Cut2 = new CutProc(this) ;
	  if (null == True0) True0 = new TrueProc(this) ;
	  ChoicePointStack = new ChoicePointStackEntry[20000] ;
	  TrailStack = new PrologObject[20000] ;
	  try { lextoc = new Lexer(System.in,this); }
	  catch (Exception e)
	  	{ System.err.println("lextoc failure");	}
	  currentinput = System.in ;
	  currentoutput = System.out ;
	}

  void InitAlways()
	{
	  TimeStamp = -1000000000 ;
	  CUTB = 0 ;
	  CurrentChoice = -1 ;
	  TrailTop = 0 ;
	  PrologObject NoArgs[] = {} ;
	  CreateChoicePoint(NoArgs) ;
	  FillAlternative(null) ;
	  assumptions = pendinggoals = new Const("[]".intern()) ;
	  ExceptionRaised = 0 ;
	}

  PrologObject nexttoken() { return lextoc.next() ; }

  Code LoadPred(String Name, int arity) // arity is source arity before bin
  					// in predtable + 1 !
	{ Code code ;
	  Class loaded_class ;
	  int reason = 0 ;

	  code = Predicates.IsInPredTable(Name,arity+1) ;
	  if (code != null) return code ;
	  try
		{ String s1 = "pred_"+Name+"_"+arity ;
		  // String s2 = s1 + ".class" ;
		  // System.out.println("Trying to load " + s2) ;
		  loaded_class = java.lang.Class.forName(s1) ;
		  // System.out.println("Loaded " + s2) ;
		  code = (Code)(loaded_class.newInstance()) ;
		  // System.out.println("and created "+s2) ;
		}
	  catch (ClassNotFoundException e) { reason = 1 ; }
	  catch (IllegalAccessException e) { reason = 2 ; }
	  catch (InstantiationException e) { reason = 3 ; }

	  if (reason > 0)
		{ System.out.println("Predicate " + Name + "/" + arity + " not found; does its .class file exist ?") ;
		  return UpperPrologMachine.Fail0 ;
		}

	  Predicates.InsertNameArity(Name,arity+1,code) ;
	  code.init(this) ;
	  return code ;
	}


  Code GetAlternative()  { return ChoicePointStack[CurrentChoice].Alternative ; }

  void FillAlternative(Code Alt) { ChoicePointStack[CurrentChoice].Alternative = Alt ; }

  void RemoveChoice() { ChoicePointStack[CurrentChoice--] = null ; }

  void RestoreArguments()
	{ int i = ChoicePointStack[CurrentChoice].Arguments.length ;
	  while (i-- > 0)
	  { Areg[i] = ChoicePointStack[CurrentChoice].Arguments[i] ; }
	}

  void UnTrail()
	{ while (TrailTop != ChoicePointStack[CurrentChoice].Trail)
		{ TrailStack[--TrailTop].UnTrailSelf() ;
		  TrailStack[TrailTop] = null ;
		}
	}

  void TrailEntry(PrologObject po)
	{ // System.out.println("trailing") ;
	  try { TrailStack[TrailTop] = po ; }
	  catch (ArrayIndexOutOfBoundsException e)
		{ System.out.println("trail expansion") ;
		  int i = TrailStack.length ;
		  PrologObject newstack[] = new PrologObject[i+20000] ;
		  while (i-- > 0) { newstack[i] = TrailStack[i] ; }
		  TrailStack = newstack ;
		  TrailStack[TrailTop] = po ;
		}
	  TrailTop++ ;
	}

  void CreateChoicePoint(PrologObject args[])
	{ CurrentChoice++ ;
	  try {	ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args) ; }
	  catch (ArrayIndexOutOfBoundsException e)
		{ System.out.println("choice stack expansion") ;
		  int i = ChoicePointStack.length ;
		  ChoicePointStackEntry newstack[] = new ChoicePointStackEntry[i+20000] ;
		  while (i-- > 0) { newstack[i] = ChoicePointStack[i] ; }
		  ChoicePointStack = newstack ;
		  ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args) ;
		}
	  ChoicePointStack[CurrentChoice].Trail = TrailTop ;
	  ChoicePointStack[CurrentChoice].TimeStamp = ++TimeStamp ;
	}

  void DoCut(int CutTo)
	{ int ch = CurrentChoice ;
	  while (ch != CutTo)
	  	{
	  	  ChoicePointStack[ch] = null ;
	  	  ch-- ;
	  	}
	  CurrentChoice = CutTo ;
	}
}

class Code
{
  int Arity() { System.out.println("no general code arity !") ; return 0 ; }

  Code Exec(PrologMachine mach) { mach.ExceptionRaised = 3 ; return null ; }

  void init(PrologMachine mach)	{ }
}

class FailProc extends Code
{
  int Arity() { return 1 ; }

  FailProc(PrologMachine mach)
	{ mach.Predicates.InsertNameArity("fail".intern(), 1, this) ;
	}

  Code Exec(PrologMachine mach)
	{ if (mach.CurrentChoice == -1) return(null) ;
	  // unwind the trail
	  mach.UnTrail() ;
	  // restore the arguments
	  mach.RestoreArguments() ;
	  // reset CUTB
	  mach.CUTB = mach.CurrentChoice - 1 ;
	  // return the alternative as continuation
	  return mach.GetAlternative() ;
	}

}

class CutProc extends Code
{
  int Arity() { return 2 ; }

  CutProc(PrologMachine mach)
  	{ mach.Predicates.InsertNameArity("cut".intern(),2,this) ; }
  
  Code Exec(PrologMachine mach)
	{ // Areg[0] contains a PrologObject of type HeapChoice
	  int i = ((HeapChoice)(mach.Areg[0])).CutTo ;
	  mach.DoCut(i) ;
	  mach.Areg[0] = mach.Areg[1] ;
	  mach.CUTB = mach.CurrentChoice ;
	  return mach.Call1.Exec(mach) ;
	}
}

class TrueProc extends Code
{
  int Arity() { return 1 ; }

  TrueProc(PrologMachine mach)
  	{ mach.Predicates.InsertNameArity("true".intern(),1,this) ; }
  
  Code Exec(PrologMachine mach)
	{ return UpperPrologMachine.Call1 ;
	}

}

class Call1Proc extends Code
{
  int Arity() { return 1 ; }

  Call1Proc(PrologMachine mach)
	{ mach.Predicates.InsertNameArity("call".intern(),1,this) ; }

  Code Exec(PrologMachine mach)
	{ // Areg[0] contains a Funct - might have to be dereffed
	  Funct pred = (Funct)((mach.Areg[0]).Deref()) ;
	  int arity ;
	  String FunctName ;
	  Code code ;


	  FunctName = pred.GetName() ;
	  arity = (pred.Arguments).length ;
	  code = mach.LoadPred(FunctName,arity-1) ;
	  PrologObject args[] = pred.Arguments ;
	  while (arity-- > 0)
	  { mach.Areg[arity] = args[arity] ; }
	  return code ;
	}
}

class Call2Proc extends Code
{
  int Arity() { return 2 ; }

  Call2Proc(PrologMachine mach)
	{ mach.Predicates.InsertNameArity("call".intern(),2,this) ; }

  Code Exec(PrologMachine mach)
	{ // Areg[0] contains a Funct or Const - might have to be dereffed
	  PrologObject obj = (mach.Areg[0]).Deref() ;
	  int arity ;
	  String PredName ;
	  Code code ;
	  Funct pred = null ;

	  if (obj instanceof Funct)
	  	{ pred = (Funct)obj ;
		  PredName = pred.GetName() ;
		  arity = (pred.Arguments).length ;
		}
	  else // it is a Const
	  	{ PredName = ((Const)obj).Name ;
		  arity = 0 ;
		}

	  code = mach.LoadPred(PredName,arity) ;
	  mach.Areg[arity] = mach.Areg[1] ;
	  if (pred != null)
	  	{ PrologObject args[] = pred.Arguments ;
		  while (arity-- > 0)
		  { mach.Areg[arity] = args[arity] ; }
		}
	  return code ;
	}
}

// there is a choice between 3 predicate table implementations
// we leave them all here, until we decide which is best

//class PredTable extends java.util.Hashtable {
//  PredTable() {
//    new Hashtable();
//  }
//  void InsertNameArity(String N, int A, Code Adr) {
//    put(A+N,Adr);
//  }
//  Code IsInPredTable(String N, int A) {
//    return (Code)get(A+N);
//  }
//}


//class PredTable extends Vector
//{
//  PredTable() { new Vector(); }
//
//  void InsertNameArity(String N, int A, Code Adr)
//	{ //System.err.println("!!!SIZE="+size()+"ADD"+N+"/"+A);
//	  if (size() <= A) setSize(A+1);
//	  Hashtable T = (Hashtable)elementAt(A);
//	  if (T == null)
//	  	{ T = new Hashtable();
//	  	  setElementAt(T,A);
//	  	}
//	  T.put(N,Adr);
//	}
//
//  Code IsInPredTable(String N, int A)
//	{ //System.err.println("!!!FIND"+N+"/"+A);
//	  if(A>=size()) return null;
//	  return (Code)((Hashtable)elementAt(A)).get(N);
//	}
//}

class PredTable
{ Hashtable tables[] ;

  PredTable() { tables = new Hashtable[33] ; }

  void InsertNameArity(String N, int A, Code Adr)
	{ Hashtable T = tables[A] ;
	  if (T == null)
	  	{ tables[A] = T = new Hashtable(); }
	  T.put(N,Adr);
	}

  Code IsInPredTable(String N, int A)
	{ if (tables[A] == null) return null;
	  return (Code)(tables[A].get(N));
	}
}



class PrologObject
{


  PrologObject Deref()
	{ System.out.println("general deref on objects not available") ;
	  return null ;
	}

  public String toString()
	{ return "general print on objects not available" ; }

  boolean Unify(PrologObject that)
	{ System.out.println("general unify on objects not available") ;
	  return false ;
	}

  boolean Bind(PrologObject that)
	{ return false ; }

  boolean Equal(PrologObject that)
	{ System.out.println("general equal on objects not available") ;
	  return false ;
	}

  String GetName()
	{ System.out.println("general getname on objects not available") ;
	  return "" ;
	}

  int Arity()
	{ System.out.println("general getarity on objects not available") ;
	  return 0 ;
	}

  void UnTrailSelf()
	{ System.out.println("general untrail on objects not available") ; }

  PrologObject Copy(PrologMachine m, long t)
	{ System.out.println("general copy on objects not available") ;
	  return null ;
	}

  long ValueOf() { return 0 ; }

  boolean islist() { return false ; }

  boolean isnil() { return false ; }

}


final class Var extends PrologObject
{ Object Refers ;
  long timestamp ;
  PrologMachine mach ;

  Var(PrologMachine machin)
	{ Refers = this ;
	  timestamp = machin.TimeStamp ;
	  mach = machin ;
	}

  Var(PrologMachine machin, long t)
	{ Refers = this ;
	  timestamp = t ;
	  mach = machin ;
	}

  PrologObject Copy(PrologMachine m, long t)
	{ Var newv = new Var(m,t) ;
	  VarDict newdict = new VarDict(this,newv) ;
	  Refers = newdict ;
	  mach.TrailEntry(this) ;
	  return newv ;
	}

  PrologObject Deref()
	{ if ((Refers == this) || !(Refers instanceof PrologObject)) return this ;
  	  return ((PrologObject)Refers).Deref() ;
  	}

  void UnTrailSelf() { Refers = this ; }

  public String toString()
	{ return "_" + Integer.toHexString(hashCode()) ; }

  boolean Bind(PrologObject that)
	{ Var v2 ;
	  if (that instanceof Var)
		{ Var v1 = (Var)that ;
		  if (this.timestamp < v1.timestamp)
		  	{ v1.Refers = this ;
		  	  v2 = v1 ;
		  	}
		  else { this.Refers = that ; v2 = this ; }
		}
	  else { this.Refers = that ; v2 = this ; }
	  if (v2.timestamp < mach.ChoicePointStack[mach.CurrentChoice].TimeStamp)
	  	{ mach.TrailEntry(v2) ; }
	  return true ;
	}

  boolean Unify(PrologObject that) { return Bind(that) ; }

  boolean Equal(PrologObject that)
	{ if (!(that instanceof Var))
		{ return false ; } ;
	  return this == that ;
	}

  String GetName() { return toString() ; }
}

final class FrozenVar extends PrologObject
{ PrologObject Refers ;
  long timestamp ;
  PrologMachine mach ;
  PrologObject goals ;

  FrozenVar(PrologMachine machin, PrologObject action)
	{ Refers = null ;
	  timestamp = machin.TimeStamp ;
	  mach = machin ;
	  goals = action ;
	}

  FrozenVar(PrologMachine machin, long t, PrologObject action)
	{ Refers = null ;
	  timestamp = t ;
	  mach = machin ;
	  goals = action ;
	}

  PrologObject Copy(PrologMachine m, long t)
	{ 
	  return new Const("[]".intern()) ; // might decide to copy frozenvars later
	}

  PrologObject Deref()
	{ if (Refers == null) return this ;
  	  return ((PrologObject)Refers).Deref() ;
  	}

  void UnTrailSelf() { Refers = null ; }

  public String toString()
	{ return "_" + Integer.toHexString(hashCode()) ; }

  boolean Bind(PrologObject that)
	{ Var v2 ;
	  if (that instanceof FrozenVar)
		{ FrozenVar thatv = (FrozenVar)that ;
		  Funct newgoals = new Funct(",".intern(),this.goals,thatv.goals) ;
		  FrozenVar newfrv =
		  	new FrozenVar(mach,mach.CurrentChoice,newgoals) ;
		  this.Refers = thatv.Refers = newfrv ;
		  mach.TrailEntry(this) ; mach.TrailEntry(thatv) ;
		}
	  else
	  if (that instanceof Var) { return that.Bind(this) ; }
	  else
	  	{ this.Refers = that ;
	  	  mach.TrailEntry(this) ;
	  	  mach.TrailEntry(new PopPendingGoals(mach,mach.pendinggoals)) ;
	  	  mach.pendinggoals = new Funct(".".intern(),goals,mach.pendinggoals) ;
	  	  mach.ExceptionRaised = 1 ;
	  	}
	  return true ;
	}

  boolean Unify(PrologObject that) { return Bind(that) ; }

  boolean Equal(PrologObject that)
	{ if (!(that instanceof FrozenVar))
		{ return false ; } ;
	  return this == that ;
	}

  String GetName() { return toString() ; }
}

final class Int extends PrologObject
{ long IntValue ;

  Int(long i) { IntValue = i ; }

  PrologObject Copy(PrologMachine m, long t) { return new Int(IntValue) ; }

  long ValueOf() { return IntValue ; }

  PrologObject Deref() { return this ; }

  public String toString() { return "" + IntValue ; }

  boolean Unify(PrologObject that)
	{ Int tmpint ;
	  if (!(that instanceof Int)) return that.Bind(this) ;
	  tmpint = (Int)that ; // cast perhaps to be avoided
	  return (tmpint.IntValue == this.IntValue) ;
	}

  boolean Equal(PrologObject that)
	{ if (!(that instanceof Int))
		{ return false ; } ;
	  return this.IntValue == ((Int)that).IntValue ;
	}

  String GetName()
	{ return ""+IntValue ; }

}


final class Const extends PrologObject
{
  String Name ;

  long ValueOf()
	{ return 0 ;
	}

  Const(String N)
	{ Name = N ;
	}

  PrologObject Copy(PrologMachine m, long t)
	{ return new Const(Name) ;
	}

  PrologObject Deref() { return this ; }

  public String toString()
	{ return Name ;
	}

  boolean Unify(PrologObject that)
	{ if (this.getClass() == that.getClass())
//			return (that.GetName()).equals(this.Name) ;
			return (that.GetName() == this.Name) ;
	  return that.Bind(this) ;
	}

  boolean Equal(PrologObject that)
	{ if (this.getClass() == that.getClass())
			return (that.toString()).equals(this.toString()) ;
	  return false ;
	}

  int Arity() { return 0 ; }

  String GetName() { return Name ; }

  boolean isnil()
	{ return this.Name.equals("[]".intern()) ; }

}

final class Continuation extends PrologObject
{
  Code code ;
  PrologObject Args[] ;

  Continuation(PrologObject args[],Code c)
	{ int i = c.Arity() + 1 ;
	  Args = new PrologObject[i] ;
	  while (i-- > 0) Args[i] = args[i] ;
	  code = c ;
	}
	
  PrologObject Deref() { return this ; }

  boolean Unify(PrologObject that) { return that.Bind(this) ; }

}


final class Funct extends PrologObject
{ PrologObject Arguments[] ;
  String Name ;

  PrologObject Copy(PrologMachine m, long t)
	{ int a = Arguments.length ;
	  Funct f = new Funct(Name,a) ;
	  PrologObject arg ;
	  while (a-- > 0)
	  	{ arg = Arguments[a].Deref() ;
	  	  f.Arguments[a] = arg.Copy(m,t) ;
	  	}
	  return f ;
	}

  Funct(String N )
  	{ Name = N ;
  	}

  Funct(String N,int arity )
  	{ Name = N ; Arguments = new PrologObject[arity] ;
  	}

  Funct(String N,PrologObject a1 )
  	{ Name = N ;
  	  Arguments = new PrologObject[1] ;
  	  Arguments[0] = a1 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2)
  	{ Name = N ;
  	  Arguments = new PrologObject[2] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3)
  	{ Name = N ;
  	  Arguments = new PrologObject[3] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4 )
  	{ Name = N ;
  	  Arguments = new PrologObject[4] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5 )
  	{ Name = N ;
  	  Arguments = new PrologObject[5] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6 )
  	{ Name = N ;
  	  Arguments = new PrologObject[6] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7 )
  	{ Name = N ;
  	  Arguments = new PrologObject[7] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8 )
  	{ Name = N ;
  	  Arguments = new PrologObject[8] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9 )
  	{ Name = N ;
  	  Arguments = new PrologObject[9] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10 )
  	{ Name = N ;
  	  Arguments = new PrologObject[10] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11 )
  	{ Name = N ;
  	  Arguments = new PrologObject[11] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12 )
  	{ Name = N ;
  	  Arguments = new PrologObject[12] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[13] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13, PrologObject a14
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[14] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	  Arguments[13] = a14 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13, PrologObject a14, PrologObject a15
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[15] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	  Arguments[13] = a14 ;
  	  Arguments[14] = a15 ;

  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13, PrologObject a14, PrologObject a15,
  		PrologObject a16
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[16] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	  Arguments[13] = a14 ;
  	  Arguments[14] = a15 ;
  	  Arguments[15] = a16 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13, PrologObject a14, PrologObject a15,
  		PrologObject a16, PrologObject a17
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[17] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	  Arguments[13] = a14 ;
  	  Arguments[14] = a15 ;
  	  Arguments[15] = a16 ;
  	  Arguments[16] = a17 ;
  	}

  Funct(String N,PrologObject a1, PrologObject a2, PrologObject a3,
  		PrologObject a4, PrologObject a5, PrologObject a6,
  		PrologObject a7, PrologObject a8, PrologObject a9,
  		PrologObject a10, PrologObject a11, PrologObject a12,
  		PrologObject a13, PrologObject a14, PrologObject a15,
  		PrologObject a16, PrologObject a17, PrologObject a18
		 )
  	{ Name = N ;
  	  Arguments = new PrologObject[18] ;
  	  Arguments[0] = a1 ;
  	  Arguments[1] = a2 ;
  	  Arguments[2] = a3 ;
  	  Arguments[3] = a4 ;
  	  Arguments[4] = a5 ;
  	  Arguments[5] = a6 ;
  	  Arguments[6] = a7 ;
  	  Arguments[7] = a8 ;
  	  Arguments[8] = a9 ;
  	  Arguments[9] = a10 ;
  	  Arguments[10] = a11 ;
  	  Arguments[11] = a12 ;
  	  Arguments[12] = a13 ;
  	  Arguments[13] = a14 ;
  	  Arguments[14] = a15 ;
  	  Arguments[15] = a16 ;
  	  Arguments[16] = a17 ;
  	  Arguments[17] = a18 ;
  	}




  Funct(String N,PrologObject args[] )
  	{ Name = N ;
  	  Arguments = args ;
  	}

  long ValueOf()
	{ int arity = Arguments.length ;
	  PrologObject a1, a2 ;
	  long i1,i2 ;
	  if (arity == 1)
	  	{ i1 = (Arguments[0].Deref()).ValueOf() ;
	  	  if (Name.equals("-".intern())) return -i1 ;
	  	  if (Name.equals("+".intern())) return i1 ;
	  	  return 0 ;
	  	}
	  if (arity != 2) return 0 ;
	  i1 = (Arguments[0].Deref()).ValueOf() ;
	  i2 = (Arguments[1].Deref()).ValueOf() ;
	  if (Name.equals("-".intern())) return i1-i2 ;
	  if (Name.equals("+".intern())) return i1+i2 ;
	  if (Name.equals("*".intern())) return i1*i2 ;
	  if (Name.equals("/".intern())) return i1/i2 ;
	  return 0 ;
	}

  PrologObject Deref() { return this ; }

  boolean islist(int i, String Name)
	{ if (i != 2) return false ;
	  return Name.equals(".".intern()) ;
	}

  boolean islist()
	{ return islist(this.Arguments.length,this.Name) ; }



  String listify(PrologObject T)
	{ String s ;
	  if (T.islist())
		{ PrologObject A1,A2 ;
		  A1 = ((Funct)T).Arguments[0] ;
		  A2 = ((Funct)T).Arguments[1] ;
		  A1 = A1.Deref() ;
		  A2 = A2.Deref() ;
		  return "," + A1.toString() + listify(A2) ;
		}
	  else
	  if ((T instanceof Const) && ("[]".equals(T.GetName())))
	  	return "" ;
	  return " | " + T.toString() ;
	}


  public String toString()
	{ int i = Arguments.length ;
	  if (islist(i,Name))
	  { return
	  	"[" +
	  	(Arguments[0].Deref()).toString() +
	  	listify(Arguments[1].Deref()) +
	  	"]";
	  }
	  String s = ")" ;
	  PrologObject p ;
	  while (--i != 0)
		  { p = Arguments[i].Deref() ;
		    s = "," + p.toString() + s ;
		  }
	  p = Arguments[0].Deref() ;
	  s = p.toString() + s ;
	  return Name + "(" + s ;
	}

  boolean Unify(PrologObject that)
	{ Funct tmpfunct ;
	  int i,j ;
	  PrologObject arg1[], obj1 ;
	  PrologObject arg2[], obj2 ;

	  if (!(this.getClass() == that.getClass())) return that.Bind(this) ;
//	  if (!((this.Name).equals(that.GetName()))) return false ;
	  if ((this.Name) != (that.GetName())) return false ;

	  tmpfunct = (Funct)that ; // cast perhaps to be avoided
	  i = Arguments.length ;
	  j = tmpfunct.Arguments.length ;
	  if (i != j) return false ;
	  arg1 = this.Arguments ; arg2 = tmpfunct.Arguments ;
	  do
	  { obj1 = arg1[--i].Deref() ;
	    obj2 = arg2[i].Deref() ;
	    if (!( obj1.Unify(obj2))) return false ;
	  } while (i > 0) ;
	  return true ;
	}

  boolean Equal(PrologObject that)
	{ Funct tmpfunct ;
	  int i,j ;
	  PrologObject arg1[], obj1 ;
	  PrologObject arg2[], obj2 ;

	  if (!(this.getClass() == that.getClass())) { return false ; } ;
	  if (!((this.GetName()).equals(that.GetName()))) return false ;

	  tmpfunct = (Funct)that ; // cast perhaps to be avoided
	  i = Arguments.length ;
	  j = tmpfunct.Arguments.length ;
	  if (i != j) return false ;
	  arg1 = this.Arguments ; arg2 = tmpfunct.Arguments ;
	  do
	  { obj1 = arg1[--i].Deref() ;
	    obj2 = arg2[i].Deref() ;
	    if (!( obj1.Equal(obj2))) return false ;
	  } while (i > 0) ;
	  return true ;
	}

  int Arity()
	{ return Arguments.length ; }

  String GetName()
	{ return Name ;
	}
}

// the following is used while copying a term

final class VarDict extends PrologObject
{ Var old, newer ;

  VarDict(Var changed, Var copy) { old = changed ; newer = copy ; }

  PrologObject Deref() { return this ; }

  void UnTrailSelf() { old.Refers = old ; }

  PrologObject Copy(PrologMachine m, long t) { return newer ; }
}

final class HeapChoice extends PrologObject
{
  int CutTo ;

  HeapChoice(int c) { CutTo = c ; }
}

final class SetArgTrail extends PrologObject
{
  PrologObject OldValue ;
  Var Which ;
  PrologMachine mach ;
  
  SetArgTrail(PrologObject old, Var changed, PrologMachine m)
	{ OldValue = old ; Which = changed ; mach = m ; }

  void UnTrailSelf()
  { Which.Refers = OldValue ;
    Which.timestamp = mach.TimeStamp ;
  }

}

final class PopPendingGoals extends PrologObject
{ PrologMachine mach ;
  PrologObject old ;

  PopPendingGoals(PrologMachine m, PrologObject o) { mach = m ; old = o ; }

  void UnTrailSelf() { mach.pendinggoals = old ; }

}

final class PopAssumptions extends PrologObject
{ PrologMachine mach ;
  PrologObject old ;

  PopAssumptions(PrologMachine m, PrologObject o) { mach = m ; old = o ; }

  void UnTrailSelf() { mach.assumptions = old ; }

}

////////////// lexer


class PrologTokenizer extends java.io.StreamTokenizer {
  PrologTokenizer(InputStream I)
  	{ super(I);
	  parseNumbers();
	  slashStarComments(true);
	  // add more options here
	}
}


class Lexer extends java.io.StreamTokenizer {

PrologMachine prologmachine ;

  Lexer(InputStream I,PrologMachine p) throws Exception {
    super(I);
    parseNumbers();
    eolIsSignificant(true);
    ordinaryChar('.');
    ordinaryChar('/');
    quoteChar('\'');
    quoteChar('"');
    wordChar('$');
    wordChar('_');
    slashStarComments(true);
    commentChar('%');
    dict=new Hashtable();
    prologmachine = p ;
  }

  Lexer(String s,PrologMachine p) throws Exception {
    this(new FileInputStream(s), p);
   }

  Lexer(PrologMachine p) throws Exception {
    this(System.in, p);
   }

  static String anonymous="_".intern();

  static String char2string(int c) {
    return ""+(char)c;
  }

  boolean inClause=false;

  boolean atEOF() {
    return TT_EOF==ttype;
  }

  boolean atEOC() {
    return !inClause;
  }

  PrologObject make_const() {
    return new Funct ( "const".intern(), new Const(sval.intern())) ;
  }

//  PrologObject make_string() {
//    return new stringToken(sval);
//  }

  PrologObject make_int() {
    return new Funct("int".intern(), new Int((int)nval));
  }

  PrologObject make_real() {
    return Somethingwrong ; // new realToken(nval);
  }

  PrologObject make_var() {
    sval=sval.intern();
    Var X; Int I;
    long occ=0;
    if(sval==anonymous) {
      X=new Var(prologmachine);
      I=new Int(occ);
    }
    else {
      X=(Var)dict.get(sval);
      if(X==null) {
         X=new Var(prologmachine);
         dict.put(sval,X);
      }
      else {
        occ=((Int)dict.get(X)).IntValue;
        occ++;
      }  
     I=new Int(occ);
     dict.put(X,I);
    }
    return new Funct("var".intern(),X,new Const(sval.intern()),I);
  }

  void whitespaceChar(char c) {whitespaceChars(c,c);}

  void wordChar(char c) {wordChars(c,c);}

  Hashtable dict;
  
  PrologObject Somethingwrong = new Funct("exception".intern(),new Int(666)) ;
  
  private PrologObject next0() throws Exception {
    int n=nextToken();
    inClause=true;
    PrologObject T = Somethingwrong ;
    String old_sval = null ;

    switch (n) {
      case TT_WORD: {
         char c=sval.charAt(0);
         if( Character.isUpperCase(c) || '_'==c) 
            T=make_var();
         else {
            T=make_const(); 
         }
      }
      break;
      case TT_NUMBER: 
           if(Math.floor(nval)==nval)
              T=make_int();
           else
              T=make_real(); 
           break;
      case TT_EOF: 
             T=new Const("end_of_file".intern());
             inClause=false; 
           break;
      case TT_EOL: T=next(); break;
      case ':': if('-'==nextToken()) {
                  sval=":-".intern();
                }
                else { 
                  old_sval = sval ; pushBack();sval=":".intern();
                }
                T=new Funct("const".intern(),new Const(sval.intern()));
                sval = old_sval ;
                break;
      case '-': if('>'==nextToken()) {
                  sval="->".intern();
                }
                else { 
                  old_sval = sval ; pushBack();sval="-".intern();
                }
                T=new Funct("const".intern(),new Const(sval.intern()));
                sval = old_sval ;
                break;

      case '.': int c=nextToken();
                if(TT_EOL==c || TT_EOF==c) {
                  inClause=false;
                  dict.clear();
                  T=new Const("end_of_clause".intern());
                }
                else
                  { old_sval = sval ; pushBack();
                    sval=".".intern();
                    T=make_const();
                    sval = old_sval ;
                  }
                break;

      case '\'': T=make_const();
                 break;
//      case '"':  T=make_string();
//                 break;

      case '(': T=new Funct("const".intern(),new Const("(".intern())); break;
      case ')': T=new Funct("const".intern(),new Const(")".intern())); break;
      case '[': T=new Funct("const".intern(),new Const("[".intern())); break;
      case ']': T=new Funct("const".intern(),new Const("]".intern())); break;
      case '|': T=new Funct("const".intern(),new Const("|".intern())); break;

      case ',': T=new Funct("const".intern(),new Const(",".intern())); break;
      case ';': T=new Funct("const".intern(),new Const(";".intern())); break;

      case '=': 
      case '>': 
      case '<': 
                sval=char2string(n);
                T=new Funct("const".intern(),new Const(sval.intern())); 
                break;

      default: sval=char2string(n);
               T=make_const();
    }
    return T;
  }

  PrologObject next() {
    try {
      return next0();
    }
    catch(Exception e) {
     return new Funct("exception".intern(),new Const((e.toString()).intern()));}
  }

}

