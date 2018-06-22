// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_read_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_read_1_1() ;
static Code nexttoken2cont ;
static String string0 = "cut".intern() ;
static String string1 = "cut".intern() ;
static String string2 = "maketerm".intern() ;
static String string3 = "nexttoken".intern() ;
static String string4 = "read".intern() ;
static String string5 = "readall".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
nexttoken2cont = mach.LoadPred("nexttoken",1) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_read_1_1 extends pred_read_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = new Funct(string5,var2.Deref(),var3,new Funct(string2,var3.Deref(),var1.Deref(),new Funct(string0, new HeapChoice(mach.CUTB),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return nexttoken2cont ;
}
}

