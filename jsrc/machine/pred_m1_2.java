// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_m1_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_m1_2_1() ;
static Code cl2 = new pred_m1_2_2() ;
static Code var2cont ;
static String string0 = "cut".intern() ;
static String string1 = "-".intern() ;
static String string2 = ".".intern() ;
static String string3 = "m1".intern() ;
static String string4 = "var".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
var2cont = mach.LoadPred("var",1) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_m1_2_1 extends pred_m1_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string2,new Funct(string1,var1.Deref(),var2),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return var2cont ;
}
}

class pred_m1_2_2 extends pred_m1_2
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
if (!( (areg1).Unify(new Funct(string2,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

