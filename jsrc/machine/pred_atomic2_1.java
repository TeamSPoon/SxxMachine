// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_atomic2_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_atomic2_1_1() ;
static Code cl2 = new pred_atomic2_1_2() ;
static Code cut2cont ;
static String string0 = "cut".intern() ;
static String string1 = "atom".intern() ;
static String string2 = "atomic2".intern() ;
static String string3 = "call".intern() ;
static String string4 = "cut".intern() ;
static String string5 = "integer".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_atomic2_1_1 extends pred_atomic2_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string1)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;
}
}

class pred_atomic2_1_2 extends pred_atomic2_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

