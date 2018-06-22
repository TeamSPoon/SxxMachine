// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_notmore_0 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_notmore_0_1() ;
static Code cl2 = new pred_notmore_0_2() ;
static Code get02cont ;
static String string0 = "cut".intern() ;
static String string1 = "call".intern() ;
static String string2 = "cut".intern() ;
static String string3 = "fail".intern() ;
static String string4 = "get0".intern() ;
static String string5 = "noteq".intern() ;
static String string6 = "notmore".intern() ;
static String string7 = "untilend".intern() ;
static Int posint1 = new Int(1) ;
static Int posint10 = new Int(10) ;

void init(PrologMachine mach)
{ entry_code = this ;
get02cont = mach.LoadPred("get0",1) ;
}
int Arity() { return 0 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_notmore_0_1 extends pred_notmore_0
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
PrologObject var1 = new Var(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = new Funct(string5,var1.Deref(),posint10,new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string7,var1.Deref(),new Funct(string3,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return get02cont ;
}
}

class pred_notmore_0_2 extends pred_notmore_0
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;
}
}

