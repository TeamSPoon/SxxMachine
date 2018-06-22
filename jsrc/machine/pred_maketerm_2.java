// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_maketerm_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_maketerm_2_1() ;
static Code maketerm4cont ;
static String string0 = "cut".intern() ;
static String string1 = "maketerm".intern() ;
static Int posint1200 = new Int(1200) ;

void init(PrologMachine mach)
{ entry_code = this ;
maketerm4cont = mach.LoadPred("maketerm",3) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_maketerm_2_1 extends pred_maketerm_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = posint1200 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return maketerm4cont ;
}
}

