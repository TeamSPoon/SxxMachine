// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_split_4 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_split_4_1() ;
static Code cl2 = new pred_split_4_2() ;
static Code cl3 = new pred_split_4_3() ;
static Code cut2cont ;
static Code smallerthan3cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "cut".intern() ;
static String string4 = "smallerthan".intern() ;
static String string5 = "split".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
smallerthan3cont = mach.LoadPred("smallerthan",2) ;
}
int Arity() { return 4 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_split_4_1 extends pred_split_4
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[4] ;
PrologObject areg3 = local_aregs[3].Deref() ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_split_4_2 extends pred_split_4
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[4] ;
PrologObject areg3 = local_aregs[3].Deref() ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Funct(string1,var2.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string5,var1.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return smallerthan3cont ;
}
}

class pred_split_4_3 extends pred_split_4
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[4] ;
PrologObject areg3 = local_aregs[3].Deref() ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(new Funct(string1,var2.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

