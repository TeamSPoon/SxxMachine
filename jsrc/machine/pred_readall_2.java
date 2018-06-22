// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_readall_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_readall_2_1() ;
static Code cl2 = new pred_readall_2_2() ;
static Code cl3 = new pred_readall_2_3() ;
static Code cut2cont ;
static Code nexttoken2cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "cut".intern() ;
static String string4 = "end_of_clause".intern() ;
static String string5 = "end_of_file".intern() ;
static String string6 = "halt".intern() ;
static String string7 = "nexttoken".intern() ;
static String string8 = "readall".intern() ;
static String string9 = "unify".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
nexttoken2cont = mach.LoadPred("nexttoken",1) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_readall_2_1 extends pred_readall_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string6,continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_readall_2_2 extends pred_readall_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string9,new Const(string2),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_readall_2_3 extends pred_readall_2
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
if (!( (areg1).Unify(new Funct(string1,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = new Funct(string8,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return nexttoken2cont ;
}
}

