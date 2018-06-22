// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_nrev_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_nrev_2_1() ;
static Code cl2 = new pred_nrev_2_2() ;
static Code cut2cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "append".intern() ;
static String string4 = "cut".intern() ;
static String string5 = "nrev".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_nrev_2_1 extends pred_nrev_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_nrev_2_2 extends pred_nrev_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = new Funct(string3,var4.Deref(),new Funct(string1,var1.Deref(),new Const(string2)),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

