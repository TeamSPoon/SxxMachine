// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_sort_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_sort_2_1() ;
static Code cl2 = new pred_sort_2_2() ;
static Code cut2cont ;
static Code split5cont ;
static String string0 = "cut".intern() ;
static String string1 = ".".intern() ;
static String string2 = "[]".intern() ;
static String string3 = "append".intern() ;
static String string4 = "cut".intern() ;
static String string5 = "sort".intern() ;
static String string6 = "split".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
split5cont = mach.LoadPred("split",4) ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_sort_2_1 extends pred_sort_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_sort_2_2 extends pred_sort_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var7 = new Var(mach) ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = var5 ;
local_aregs[4] = new Funct(string5,var4.Deref(),var6,new Funct(string5,var5.Deref(),var7,new Funct(string3,var6.Deref(),new Funct(string1,var1.Deref(),var7.Deref()),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return split5cont ;
}
}

