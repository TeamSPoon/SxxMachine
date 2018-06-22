// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_specialgoal_2 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_specialgoal_2_1() ;
static Code cl2 = new pred_specialgoal_2_2() ;
static Code cl3 = new pred_specialgoal_2_3() ;
static Code cl4 = new pred_specialgoal_2_4() ;
static Code cl5 = new pred_specialgoal_2_5() ;
static Code cl6 = new pred_specialgoal_2_6() ;
static Code cl7 = new pred_specialgoal_2_7() ;
static Code cl8 = new pred_specialgoal_2_8() ;
static Code cl9 = new pred_specialgoal_2_9() ;
static Code cl10 = new pred_specialgoal_2_10() ;
static Code cl11 = new pred_specialgoal_2_11() ;
static Code cl12 = new pred_specialgoal_2_12() ;
static Code cut2cont ;
static String string0 = "cut".intern() ;
static String string1 = ";".intern() ;
static String string2 = "<".intern() ;
static String string3 = "=".intern() ;
static String string4 = "=:=".intern() ;
static String string5 = "=<".intern() ;
static String string6 = "==".intern() ;
static String string7 = ">".intern() ;
static String string8 = ">=".intern() ;
static String string9 = "@<".intern() ;
static String string10 = "@=<".intern() ;
static String string11 = "@>".intern() ;
static String string12 = "@>=".intern() ;
static String string13 = "arithequal".intern() ;
static String string14 = "cut".intern() ;
static String string15 = "or".intern() ;
static String string16 = "smallerorequal".intern() ;
static String string17 = "smallerthan".intern() ;
static String string18 = "specialgoal".intern() ;
static String string19 = "termequal".intern() ;
static String string20 = "termgreaterequal".intern() ;
static String string21 = "termgreaterthan".intern() ;
static String string22 = "termsmallerequal".intern() ;
static String string23 = "termsmallerthan".intern() ;
static String string24 = "unify".intern() ;
static Int posint1 = new Int(1) ;

void init(PrologMachine mach)
{ entry_code = this ;
}
int Arity() { return 2 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_specialgoal_2_1 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string17,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_2 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string16,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_3 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl4) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string7,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string17,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_4 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl5) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string8,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string16,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_5 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl6) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string13,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_6 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl7) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string24,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_7 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl8) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string15,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_8 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl9) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string9,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string23,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_9 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl10) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string21,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_10 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl11) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string22,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_11 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl12) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string12,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string20,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_specialgoal_2_12 extends pred_specialgoal_2
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[2] ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string19,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

