// some builtins written in Java for Prolog
// Bart Demoen, Paul Tarau Aug 1996 Moncton
// there is a mapping from special names (like <) to tokens
// with only letters - the compiler must be aware of that mapping


// smallerthan implements </2

class pred_smallerthan_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ long i1,i2 ;
	  PrologObject dereffed ;

	  dereffed = (mach.Areg[0]).Deref() ;
	  i1 = dereffed.ValueOf() ;
	  dereffed = (mach.Areg[1]).Deref() ;
	  i2 = dereffed.ValueOf() ;
	  if (i1 < i2)	{ mach.Areg[0] = mach.Areg[2] ;
	  		  mach.Areg[1] = mach.Areg[2] = null ;
	  		  return UpperPrologMachine.Call1 ;
	  		}
	  return UpperPrologMachine.Fail0 ;
	}
}

// smallerorequal implements =</2

class pred_smallerorequal_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ long i1,i2 ;
	  PrologObject dereffed ;

	  dereffed = (mach.Areg[0]).Deref() ;
	  i1 = dereffed.ValueOf() ;
	  dereffed = (mach.Areg[1]).Deref() ;
	  i2 = dereffed.ValueOf() ;
	  if (i1 <= i2)	{ mach.Areg[0] = mach.Areg[2] ;
	  		  mach.Areg[1] = mach.Areg[2] = null ;
	  		  return UpperPrologMachine.Call1 ;
	  		}
	  return UpperPrologMachine.Fail0 ;
	}
}

// arithequal implements =:=/2

class pred_arithequal_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ long i1,i2 ;
	  PrologObject dereffed ;

	  dereffed = (mach.Areg[0]).Deref() ;
	  i1 = dereffed.ValueOf() ;
	  dereffed = (mach.Areg[1]).Deref() ;
	  i2 = dereffed.ValueOf() ;
	  if (i1 == i2)	{ mach.Areg[0] = mach.Areg[2] ;
	  		  mach.Areg[1] = mach.Areg[2] = null ;
	  		  return UpperPrologMachine.Call1 ;
	  		}
	  return UpperPrologMachine.Fail0 ;
	}
}

// arithdifferent implements =\= /2

class pred_arithdifferent_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ long i1,i2 ;
	  PrologObject dereffed ;

	  dereffed = (mach.Areg[0]).Deref() ;
	  i1 = dereffed.ValueOf() ;
	  dereffed = (mach.Areg[1]).Deref() ;
	  i2 = dereffed.ValueOf() ;
	  if (i1 != i2)	{ mach.Areg[0] = mach.Areg[2] ;
	  		  mach.Areg[1] = mach.Areg[2] = null ;
	  		  return UpperPrologMachine.Call1 ;
	  		}
	  return UpperPrologMachine.Fail0 ;
	}
}

// is implements is/2

class pred_is_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ long i1 ;
	  PrologObject dereffed ;

	  dereffed = (mach.Areg[1]).Deref() ;
	  i1 = dereffed.ValueOf() ;
	  dereffed = (mach.Areg[0]).Deref() ;
	  if (!(dereffed.Unify(new Int(i1)))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ;
  	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


// unify implements =/2

class pred_unify_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;

	  if (!(arg1.Unify(arg2))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ;
  	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


// univ implements the left direction of =../2

class pred_univ_3 extends Code
{
  int Arity() { return 3 ; }

	// Areg[0] is a free variable
	// Areg[1] is a Const
	// Areg[2] is a list of PrologObjects

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;
	  PrologObject arg3 = mach.Areg[2].Deref() ;
	  PrologObject tail = arg3 ;

	  int l = 0 ;
	  while (tail.islist())
	  	{ tail = (((Funct)tail).Arguments[1]).Deref() ; l++ ; }
	  if (l == 0) return UpperPrologMachine.Fail0 ;
	  if (!(tail.isnil())) return UpperPrologMachine.Fail0 ;
	  if (!(arg2 instanceof Const)) return UpperPrologMachine.Fail0 ;
	  PrologObject args[] = new PrologObject[l] ;
	  tail = arg3 ;
	  int i ;
	  for (i = 0 ; i < l ; i++)
	  	{ args[i] = ((Funct)tail).Arguments[0] ;
	  	  tail = (((Funct)tail).Arguments[1]).Deref() ;
	  	}

	  if (!(arg1.Unify(new Funct(((Const)arg2).GetName(),args))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[3] ;
  	  mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_write_1 extends Code
{ 
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ String s = (mach.Areg[0].Deref()).toString() ;
	  System.out.print(s) ;
	  System.out.flush() ;
	  mach.Areg[0] = mach.Areg[1] ;
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_nl_0 extends Code
{ 
  int Arity() { return 0 ; }

  Code Exec(PrologMachine mach)
	{ System.out.println("") ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_functor_3 extends Code
{ 
  int Arity() { return 3 ; }

  boolean DoFunctor3(PrologMachine mach, PrologObject arg1, PrologObject arg2, PrologObject arg3)
	{ arg1 = arg1.Deref() ;
	  arg2 = arg2.Deref() ;
	  arg3 = arg3.Deref() ;

	  if (arg1 instanceof Var)
		{ if ((!(arg2 instanceof Const)) || (!(arg3 instanceof Int)))
			return false ;
		  int i = (int)(((Int)arg3).IntValue) ;
		  String Name = arg2.GetName() ;
		  PrologObject args[] = new PrologObject[i] ;
		  while (i-- > 0)
		  	{ args[i] = new Var(mach) ; }
		  if (!(arg1.Unify(new Funct(Name,args)))) return false ;
		}
	  else
	  	{ String Name = arg1.GetName() ;
	  	  int arity = arg1.Arity() ;
	  	  if (!(arg2.Unify(new Const(Name)))) return false ;
	  	  if (!(arg3.Unify(new Int(arity)))) return false ;
	  	}
	  return true ;
	}

  Code Exec(PrologMachine mach)
	{ if (! DoFunctor3(mach,mach.Areg[0],mach.Areg[1],mach.Areg[2]))
			return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[3] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_arg_3 extends Code
{ 
  int Arity() { return 3 ; }

  boolean DoArg3(PrologMachine mach, PrologObject arg1, PrologObject arg2, PrologObject arg3)
	{ arg1 = arg1.Deref() ;
	  arg2 = arg2.Deref() ;
	  arg3 = arg3.Deref() ;

	  if (!(arg1 instanceof Int)) return false ;
	  if (!(arg2 instanceof Funct)) return false ;
	  int i = (int)(((Int)arg1).IntValue) ;
	  if (i < 1) return false ;
	  int l = ((Funct)arg2).Arity() ;
	  if (i > l) return false ;
	  PrologObject x = ((Funct)arg2).Arguments[i-1] ;
	  x = x.Deref() ;
	  return (arg3.Unify(x)) ;
	}

  Code Exec(PrologMachine mach)
	{ if (! DoArg3(mach,mach.Areg[0],mach.Areg[1],mach.Areg[2]))
			return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[3] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_nexttoken_1 extends Code
{ 
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  if (!(arg1 instanceof Var)) return UpperPrologMachine.Fail0 ;
	  PrologObject t = mach.nexttoken() ;
	  if (!(arg1.Unify(t.Deref()))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_cputime_1 extends Code
{ 
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  long t = java.lang.System.currentTimeMillis() ;
	  PrologObject o = new Int(t) ;
	  if (!(arg1.Unify(o))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class findall_list extends PrologObject
{ Var uptonowbegin, uptonowend ;
  long time ;

  findall_list(PrologMachine mach)
	{ uptonowbegin = uptonowend = new Var(mach) ;
	  time = mach.TimeStamp ;
	}
  
  PrologObject Deref()
	{ return this ; }

  boolean Unify(PrologObject that)
	{ return that.Bind(this) ;
	}

  public String toString()
	{ return ("findall = " + (uptonowbegin.Deref()).toString() + " - " + (uptonowend.Deref()).toString()) ; }

}

class pred_initfindall_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  if (!(arg1.Unify(new findall_list(mach))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_addfindall_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  findall_list arg2 = (findall_list)(mach.Areg[1].Deref()) ;
	  int oldtrail = mach.TrailTop ;
	  PrologObject copy = arg1.Copy(mach,arg2.time) ;
	  int newtrail = mach.TrailTop ;
	  while (newtrail-- > oldtrail)
	  	{ mach.TrailStack[newtrail].UnTrailSelf() ;
		  mach.TrailStack[newtrail] = null ;
		}
	  mach.TrailTop = oldtrail ;
	  Var NewTail = new Var(mach) ;
	  (arg2.uptonowend).Refers = new Funct(".".intern(),copy,NewTail) ;
	  arg2.uptonowend = NewTail ;
	  // mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  // mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Fail0 ;
	}
}

class pred_retrievefindall_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  findall_list arg2 = (findall_list)(mach.Areg[1].Deref()) ;
	  (arg2.uptonowend).Refers = new Const("[]".intern()) ;
	  if (!(arg1.Unify((arg2.uptonowbegin).Deref()))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_var_equal_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;
	  if (arg1 != arg2) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_trail_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  if (!(arg1.Unify(new Int((long)(mach.TrailTop)))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_choice_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  if (!(arg1.Unify(new Int((long)(mach.CurrentChoice)))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_type_of_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;
	  String s ;
	  if (arg1 instanceof Var) s = "var".intern() ;
	  else
	  if (arg1 instanceof FrozenVar) s = "var".intern() ;
	  else
	  if (arg1 instanceof Int) s = "integer".intern() ;
	  else
	  if (arg1 instanceof Const) s = "atom".intern() ;
	  else
	  if (arg1 instanceof Funct) s = "struct".intern() ;
	  else s = "unknown".intern() ;

	  if (!(arg2.Unify(new Const(s))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_assume_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject ass = (mach.assumptions).Deref() ;
	  mach.TrailEntry(new PopAssumptions(mach,ass)) ;
	  mach.assumptions = new Funct(".".intern(),arg1,ass) ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_allassumed_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject ass = (mach.assumptions).Deref() ;
	  if (!(arg1.Unify(ass)))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_get0_1 extends Code
{
  int Arity() { return 1 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  int i ;
	  try { i = mach.currentinput.read() ; }
	  catch (Exception e) { return UpperPrologMachine.Fail0 ; }
	  if (!(arg1.Unify(new Int((long)i)))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[1] ; // install the continuation
	  mach.Areg[1] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_halt_0 extends Code
{
  int Arity() { return 0 ; }

  Code Exec(PrologMachine mach) { mach.ExceptionRaised = 2 ; return null ; }
}

class pred_setarg_3 extends Code
{
  int Arity() { return 3 ; }

  boolean DoSetArg3(PrologMachine mach, PrologObject arg1, PrologObject arg2, PrologObject arg3)
	{ arg1 = arg1.Deref() ;
	  arg2 = arg2.Deref() ;
	  arg3 = arg3.Deref() ;

	  if (!(arg1 instanceof Int)) return false ;
	  if (!(arg2 instanceof Funct)) return false ;
	  int i = (int)(((Int)arg1).IntValue) ;
	  if (i < 1) return false ;
	  int l = ((Funct)arg2).Arity() ;
	  if (i > l) return false ;
	  PrologObject x = ((Funct)arg2).Arguments[i-1] ;
	  Var v = new Var(mach) ; v.Refers = arg3 ;
	  ((Funct)arg2).Arguments[i-1] = v ;
	  mach.TrailEntry(new SetArgTrail(x,v,mach)) ;
	  return true ;
	}

  Code Exec(PrologMachine mach)
	{ if (! DoSetArg3(mach,mach.Areg[0],mach.Areg[1],mach.Areg[2]))
			return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[3] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_compare_3 extends Code
{
  int Arity() { return 3 ; }

  //	Int < Const < Funct < Var

  int Compare(PrologObject t, PrologObject s)
	{ if (t == s) return 0 ;
	  if (t instanceof Int)
		{ if (!(s instanceof Int)) return -1 ;
		  long i1 = ((Int)t).IntValue ;
		  long i2 = ((Int)s).IntValue ;
		  if (i1 < i2) return -1 ;
		  if (i1 == i2) return 0 ;
		  return 1 ;
		}

	  if (t instanceof Const)
		{ if (s instanceof Int) return 1 ;
		  if (!(s instanceof Const)) return -1 ;
		  String s1 = ((Const)t).Name ;
		  String s2 = ((Const)s).Name ;
		  return s1.compareTo(s2) ;
		}

	  if (t instanceof Funct)
		{ if (s instanceof Var) return -1 ;
		  if (!(s instanceof Funct)) return 1 ;
		  Funct f1 = (Funct)t ;
		  Funct f2 = (Funct)s ;
		  String s1 = f1.Name ;
		  String s2 = f2.Name ;
		  int v = s1.compareTo(s2) ;
		  if (v != 0) return v ;

		  int arity1 = f1.Arity() ;
		  int arity2 = f2.Arity() ;
		  if (arity1 < arity2) return -1 ;
		  if (arity1 > arity2) return 1 ;
		  PrologObject args1[] = f1.Arguments ;
		  PrologObject args2[] = f2.Arguments ;
		  int i ;
		  for (i = 0 ; i < arity1 ; i++)
		  	{ PrologObject ti = (f1.Arguments[i]).Deref() ;
		  	  PrologObject si = (f2.Arguments[i]).Deref() ;
		  	  v = Compare(ti,si) ;
		  	  if (v != 0) return v ;
		  	}
		  return 0 ;
		}

	  if (t instanceof Var)
	  	{ if (! (s instanceof Var)) return 1 ;
		  return (((Var)t).toString()).compareTo(((Var)s).toString()) ;
		}
	  
	  return 1 ; // to keep the compiler happy
	}

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;
	  PrologObject arg3 = mach.Areg[2].Deref() ;
	  int val = Compare(arg2,arg3) ;
  	  String s ;
	  if (val < 0) s = "<".intern() ;
	  else
	  if (val == 0) s = "=".intern() ;
	  else s = ">".intern() ;

	  if (!(arg1.Unify(new Const(s))))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[3] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = mach.Areg[3] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}


class pred_freeze_internal_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;

	  FrozenVar frv = new FrozenVar(mach,arg2) ;
	  if (!(arg1.Unify(frv)))
	  		return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}

class pred_execcontinuation_0 extends Code
{
  int Arity() { return 0 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;

	  if (!(arg1 instanceof Continuation)) return UpperPrologMachine.Fail0 ;
	  Continuation c = (Continuation)arg1 ;
	  Code code = c.code ;
	  int i = code.Arity() + 1 ;
	  while (i-- > 0) {mach.Areg[i] = c.Args[i] ; }
	  return code ;
	}
}

class pred_frozen_2 extends Code
{
  int Arity() { return 2 ; }

  Code Exec(PrologMachine mach)
	{ PrologObject arg1 = mach.Areg[0].Deref() ;
	  PrologObject arg2 = mach.Areg[1].Deref() ;
	  PrologObject goal ;

	  if (arg1 instanceof Var) goal = new Const("true".intern()) ;
	  else
	  if (arg1 instanceof FrozenVar)
	  		goal = (((FrozenVar)arg1).goals).Deref() ;
	  else return UpperPrologMachine.Fail0 ;

	  if (!(arg2.Unify(goal))) return UpperPrologMachine.Fail0 ;
	  mach.Areg[0] = mach.Areg[2] ; // install the continuation
	  mach.Areg[1] = mach.Areg[2] = null ;
	  return UpperPrologMachine.Call1 ;
	}
}
