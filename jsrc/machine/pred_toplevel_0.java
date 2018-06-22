// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_toplevel_0 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_toplevel_0_1() ;
static Code cl2 = new pred_toplevel_0_2() ;
static Code top1cont ;
static String string0 = "cut".intern() ;
static String string1 = "fail".intern() ;
static String string2 = "top".intern() ;
static String string3 = "toplevel".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
top1cont = mach.LoadPred("top",0) ;
}
int Arity() { return 0 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_toplevel_0_1 extends pred_toplevel_0
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
local_aregs[0] = new Funct(string1,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return top1cont ;
}
}

class pred_toplevel_0_2 extends pred_toplevel_0
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

