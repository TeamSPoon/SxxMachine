// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_statistics_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_statistics_2_1() ;
static Code cputime2cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "cputime".intern() ;
static String string4 = "runtime".intern() ;
static String string5 = "statistics".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
cputime2cont = mach.LoadPred("cputime",1) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_statistics_2_1 extends pred_statistics_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string1,var1,new Funct(string1,var2,new Const(string2)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return cputime2cont ;
}
}

