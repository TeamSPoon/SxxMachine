// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_time_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_time_1_1() ;
static Code cputime2cont ;
static String string0 = "cut".intern() ;
static String string1 = "-".intern() ;
static String string2 = "cputime".intern() ;
static String string3 = "exec".intern() ;
static String string4 = "is".intern() ;
static String string5 = "nl".intern() ;
static String string6 = "time".intern() ;
static String string7 = "write".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
cputime2cont = mach.LoadPred("cputime",1) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_time_1_1 extends pred_time_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = new Funct(string3,var1.Deref(),new Funct(string2,var3,new Funct(string4,var4,new Funct(string1,var3.Deref(),var2.Deref()),new Funct(string7,var4.Deref(),new Funct(string5,continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return cputime2cont ;
}
}

