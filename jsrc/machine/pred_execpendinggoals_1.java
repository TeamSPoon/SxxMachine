// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_execpendinggoals_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_execpendinggoals_1_1() ;
static Code cl2 = new pred_execpendinggoals_1_2() ;
static Code exec2cont ;
static Code execcontinuation1cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "exec".intern() ;
static String string4 = "execcontinuation".intern() ;
static String string5 = "execpendinggoals".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
exec2cont = mach.LoadPred("exec",1) ;
execcontinuation1cont = mach.LoadPred("execcontinuation",0) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_execpendinggoals_1_1 extends pred_execpendinggoals_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return execcontinuation1cont ;
}
}

class pred_execpendinggoals_1_2 extends pred_execpendinggoals_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = new Funct(string5,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return exec2cont ;
}
}

