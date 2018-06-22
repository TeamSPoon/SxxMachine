// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_getargs_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_getargs_2_1() ;
static Code cl2 = new pred_getargs_2_2() ;
static Code ap4cont ;
static String string0 = "cut".intern() ;
static String string1 = ")".intern() ;
static String string2 = ",".intern() ;
static String string3 = ".".intern() ;
static String string4 = "[]".intern() ;
static String string5 = "ap".intern() ;
static String string6 = "const".intern() ;
static String string7 = "getargs".intern() ;
static String string8 = "maketerm".intern() ;
static String string9 = "unify".intern() ;
static Int posint900 = new Int(900) ;

void init(PrologMachine mach)
{ entry_code = this ;
ap4cont = mach.LoadPred("ap",3) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_getargs_2_1 extends pred_getargs_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = new Funct(string3,new Funct(string6,new Const(string1)),new Const(string4)) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string8,var3.Deref(),var4,posint900,new Funct(string9,new Funct(string3,var4.Deref(),new Const(string4)),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_getargs_2_2 extends pred_getargs_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = new Funct(string3,new Funct(string6,new Const(string2)),var4) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string8,var3.Deref(),var5,posint900,new Funct(string9,new Funct(string3,var5.Deref(),var6),var2.Deref(),new Funct(string7,var4.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

