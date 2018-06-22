// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_collectvars_3 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_collectvars_3_1() ;
static Code cl2 = new pred_collectvars_3_2() ;
static Code cl3 = new pred_collectvars_3_3() ;
static Code cut2cont ;
static Code noteq3cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "=".intern() ;
static String string3 = "[]".intern() ;
static String string4 = "_".intern() ;
static String string5 = "collectvars".intern() ;
static String string6 = "cut".intern() ;
static String string7 = "noteq".intern() ;
static String string8 = "notvmember".intern() ;
static String string9 = "var".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
noteq3cont = mach.LoadPred("noteq",2) ;
}
int Arity() { return 3 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_collectvars_3_1 extends pred_collectvars_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_collectvars_3_2 extends pred_collectvars_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,new Funct(string9,var1,var2,var3),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = new Const(string4) ;
local_aregs[2] = new Funct(string8,var2.Deref(),var5.Deref(),new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string5,var4.Deref(),new Funct(string1,new Funct(string2,var1.Deref(),var2.Deref()),var5.Deref()),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return noteq3cont ;
}
}

class pred_collectvars_3_3 extends pred_collectvars_3
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

