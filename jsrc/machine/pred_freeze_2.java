// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_freeze_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_freeze_2_1() ;
static Code cl2 = new pred_freeze_2_2() ;
static Code exec2cont ;
static Code var2cont ;
static String string0 = "cut".intern() ;
static String string1 = "cut".intern() ;
static String string2 = "exec".intern() ;
static String string3 = "freeze".intern() ;
static String string4 = "freeze_internal".intern() ;
static String string5 = "var".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
exec2cont = mach.LoadPred("exec",1) ;
var2cont = mach.LoadPred("var",1) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_freeze_2_1 extends pred_freeze_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string4,var1.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return var2cont ;
}
}

class pred_freeze_2_2 extends pred_freeze_2
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
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return exec2cont ;
}
}

