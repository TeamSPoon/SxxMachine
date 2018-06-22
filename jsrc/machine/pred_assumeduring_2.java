// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_assumeduring_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_assumeduring_2_1() ;
static Code assume2cont ;
static String string0 = "cut".intern() ;
static String string1 = "-".intern() ;
static String string2 = "assume".intern() ;
static String string3 = "assumeduring".intern() ;
static String string4 = "exec".intern() ;
static String string5 = "unify".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
assume2cont = mach.LoadPred("assume",1) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_assumeduring_2_1 extends pred_assumeduring_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = new Funct(string1,var2.Deref(),var3) ;
local_aregs[1] = new Funct(string4,var1.Deref(),new Funct(string5,posint1,var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return assume2cont ;
}
}

