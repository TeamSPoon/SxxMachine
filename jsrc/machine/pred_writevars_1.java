// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_writevars_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_writevars_1_1() ;
static Code cl2 = new pred_writevars_1_2() ;
static Code cl3 = new pred_writevars_1_3() ;
static Code write2cont ;
static String string0 = "cut".intern() ;
static String string1 = " = ".intern() ;
static String string2 = ".".intern() ;
static String string3 = "=".intern() ;
static String string4 = "[]".intern() ;
static String string5 = "call".intern() ;
static String string6 = "fail".intern() ;
static String string7 = "nl".intern() ;
static String string8 = "write".intern() ;
static String string9 = "writevars".intern() ;

void init(PrologMachine mach)
{ entry_code = this ;
write2cont = mach.LoadPred("write",1) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_writevars_1_1 extends pred_writevars_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_writevars_1_2 extends pred_writevars_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string2,new Funct(string3,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = new Funct(string8,new Const(string1),new Funct(string8,var1.Deref(),new Funct(string7,new Funct(string6,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return write2cont ;
}
}

class pred_writevars_1_3 extends pred_writevars_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string2,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

