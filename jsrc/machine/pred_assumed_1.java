// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_assumed_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_assumed_1_1() ;
static Code allassumed2cont ;
static String string0 = "cut".intern() ;
static String string1 = "allassumed".intern() ;
static String string2 = "assumed".intern() ;
static String string3 = "m1".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
allassumed2cont = mach.LoadPred("allassumed",1) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_assumed_1_1 extends pred_assumed_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = new Funct(string3,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return allassumed2cont ;
}
}

