// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_newprec_3 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_newprec_3_1() ;
static Code cl2 = new pred_newprec_3_2() ;
static Code cut2cont ;
static String string0 = "cut".intern() ;
static String string1 = "-".intern() ;
static String string2 = "call".intern() ;
static String string3 = "cut".intern() ;
static String string4 = "fx".intern() ;
static String string5 = "fy".intern() ;
static String string6 = "is".intern() ;
static String string7 = "newprec".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
}
int Arity() { return 3 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_newprec_3_1 extends pred_newprec_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string6,var2.Deref(),new Funct(string1,var1.Deref(),posint1),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_newprec_3_2 extends pred_newprec_3
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

