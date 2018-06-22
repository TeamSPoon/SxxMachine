// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_vread_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_vread_2_1() ;
static Code nexttoken2cont ;
static String string0 = "cut".intern() ;
static String string1 = "[]".intern() ;
static String string2 = "collectvars".intern() ;
static String string3 = "cut".intern() ;
static String string4 = "maketerm".intern() ;
static String string5 = "nexttoken".intern() ;
static String string6 = "readall".intern() ;
static String string7 = "vread".intern() ;
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

class pred_vread_2_1 extends pred_vread_2
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
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = new Funct(string6,var3.Deref(),var4,new Funct(string4,var4.Deref(),var1.Deref(),new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string2,var4.Deref(),new Const(string1),var2.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return nexttoken2cont ;
}
}

