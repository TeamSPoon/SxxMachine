// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_prefix_3 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_prefix_3_1() ;
static Code cl2 = new pred_prefix_3_2() ;
static Code cl3 = new pred_prefix_3_3() ;
static Code cl4 = new pred_prefix_3_4() ;
static String string0 = "cut".intern() ;
static String string1 = "+".intern() ;
static String string2 = "-".intern() ;
static String string3 = ":-".intern() ;
static String string4 = "?-".intern() ;
static String string5 = "call".intern() ;
static String string6 = "fx".intern() ;
static String string7 = "prefix".intern() ;
static Int posint500 = new Int(500) ;
static Int posint1200 = new Int(1200) ;

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

class pred_prefix_3_1 extends pred_prefix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_prefix_3_2 extends pred_prefix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_prefix_3_3 extends pred_prefix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl4) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_prefix_3_4 extends pred_prefix_3
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

