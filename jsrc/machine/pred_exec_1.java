// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_exec_1 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_exec_1_1() ;
static Code cl2 = new pred_exec_1_2() ;
static Code cl3 = new pred_exec_1_3() ;
static Code cl4 = new pred_exec_1_4() ;
static Code cl5 = new pred_exec_1_5() ;
static Code cl6 = new pred_exec_1_6() ;
static Code cut2cont ;
static Code specialgoal3cont ;
static Code var2cont ;
static String string0 = "cut".intern() ;
static String string1 = ",".intern() ;
static String string2 = "->".intern() ;
static String string3 = ";".intern() ;
static String string4 = "call".intern() ;
static String string5 = "cut".intern() ;
static String string6 = "exec".intern() ;
static String string7 = "execdisj".intern() ;
static String string8 = "fail".intern() ;
static String string9 = "specialgoal".intern() ;
static String string10 = "true".intern() ;
static String string11 = "var".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
specialgoal3cont = mach.LoadPred("specialgoal",2) ;
var2cont = mach.LoadPred("var",1) ;
}
int Arity() { return 1 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_exec_1_1 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string8,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return var2cont ;
}
}

class pred_exec_1_2 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string6,var1.Deref(),new Funct(string6,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;
}
}

class pred_exec_1_3 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl4) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string2,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string7,new Funct(string2,var1.Deref(),var2.Deref()),new Const(string10),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;
}
}

class pred_exec_1_4 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl5) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string3,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string7,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;
}
}

class pred_exec_1_5 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl6) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string6,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return specialgoal3cont ;
}
}

class pred_exec_1_6 extends pred_exec_1
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[1] ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call2 ;
}
}

