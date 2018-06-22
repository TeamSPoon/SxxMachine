// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_top_0 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_top_0_1() ;
static Code cl2 = new pred_top_0_2() ;
static Code write2cont ;
static String string0 = "cut".intern() ;
static String string1 = "?- ".intern() ;
static String string2 = "Yes".intern() ;
static String string3 = "cut".intern() ;
static String string4 = "exec".intern() ;
static String string5 = "fail".intern() ;
static String string6 = "nl".intern() ;
static String string7 = "notmore".intern() ;
static String string8 = "top".intern() ;
static String string9 = "vread".intern() ;
static String string10 = "write".intern() ;
static String string11 = "writevars".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
write2cont = mach.LoadPred("write",1) ;
}
int Arity() { return 0 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_top_0_1 extends pred_top_0
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
local_aregs[0] = new Const(string1) ;
local_aregs[1] = new Funct(string9,var1,var2,new Funct(string4,var1.Deref(),new Funct(string11,var2.Deref(),new Funct(string10,new Const(string2),new Funct(string6,new Funct(string7,new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string5,continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
return write2cont ;
}
}

class pred_top_0_2 extends pred_top_0
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return entry_code ;
}
}

