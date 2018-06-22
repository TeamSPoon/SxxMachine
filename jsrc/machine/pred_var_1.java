// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_var_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_var_1_1() ;
static Code type_of3cont ;
static String string0 = "cut".intern() ;
static String string1 = "type_of".intern() ;
static String string2 = "var".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
type_of3cont = mach.LoadPred("type_of",2) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_var_1_1 extends pred_var_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = new Const(string2) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return type_of3cont ;
}
}

