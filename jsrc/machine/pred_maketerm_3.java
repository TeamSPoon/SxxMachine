// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_maketerm_3 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_maketerm_3_1() ;
static Code cl2 = new pred_maketerm_3_2() ;
static Code cl3 = new pred_maketerm_3_3() ;
static Code cl4 = new pred_maketerm_3_4() ;
static Code cl5 = new pred_maketerm_3_5() ;
static Code cl6 = new pred_maketerm_3_6() ;
static Code cl7 = new pred_maketerm_3_7() ;
static Code cl8 = new pred_maketerm_3_8() ;
static Code cl9 = new pred_maketerm_3_9() ;
static Code cl10 = new pred_maketerm_3_10() ;
static Code cl11 = new pred_maketerm_3_11() ;
static Code ap4cont ;
static Code cut2cont ;
static Code getargs3cont ;
static Code prefix4cont ;
static Code unify3cont ;
static String string0 = "cut".intern() ;
static String string1 = "(".intern() ;
static String string2 = ")".intern() ;
static String string3 = ",".intern() ;
static String string4 = ".".intern() ;
static String string5 = "[".intern() ;
static String string6 = "[]".intern() ;
static String string7 = "]".intern() ;
static String string8 = "ap".intern() ;
static String string9 = "call".intern() ;
static String string10 = "const".intern() ;
static String string11 = "cut".intern() ;
static String string12 = "getargs".intern() ;
static String string13 = "infix".intern() ;
static String string14 = "int".intern() ;
static String string15 = "maketerm".intern() ;
static String string16 = "newprec".intern() ;
static String string17 = "prefix".intern() ;
static String string18 = "smallerorequal".intern() ;
static String string19 = "unify".intern() ;
static String string20 = "univ".intern() ;
static String string21 = "var".intern() ;
static String string22 = "|".intern() ;
static Int posint1 = new Int(1) ;
static Int posint900 = new Int(900) ;

void init(PrologMachine mach)
{ entry_code = this ;
ap4cont = mach.LoadPred("ap",3) ;
getargs3cont = mach.LoadPred("getargs",2) ;
prefix4cont = mach.LoadPred("prefix",3) ;
unify3cont = mach.LoadPred("unify",2) ;
}
int Arity() { return 3 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_maketerm_3_1 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string21,var1,var2,var3),new Const(string6))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return unify3cont ;
}
}

class pred_maketerm_3_2 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string14,var1),new Const(string6))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string19,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_maketerm_3_3 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl4) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,var1),new Const(string6))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = new Funct(string19,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_maketerm_3_4 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl5) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,var1),new Funct(string4,new Funct(string10,new Const(string1)),var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = new Funct(string20,var3.Deref(),var1.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return getargs3cont ;
}
}

class pred_maketerm_3_5 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl6) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var12 = new Var(mach) ;
PrologObject var11 = new Var(mach) ;
PrologObject var10 = new Var(mach) ;
PrologObject var9 = new Var(mach) ;
PrologObject var8 = new Var(mach) ;
PrologObject var7 = new Var(mach) ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = new Funct(string4,new Funct(string10,var5),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string13,var7,var8,var5.Deref(),new Funct(string18,var7.Deref(),var3.Deref(),new Funct(string16,var8.Deref(),var7.Deref(),var9,var10,new Funct(string15,var4.Deref(),var11,var9.Deref(),new Funct(string15,var6.Deref(),var12,var10.Deref(),new Funct(string20,var2.Deref(),var5.Deref(),new Funct(string4,var11.Deref(),new Funct(string4,var12.Deref(),new Const(string6))),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_maketerm_3_6 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl7) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var8 = new Var(mach) ;
PrologObject var7 = new Var(mach) ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,var1),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var6 ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string18,var5.Deref(),var4.Deref(),new Funct(string16,var6.Deref(),var5.Deref(),var7,new Funct(string15,var2.Deref(),var8,var7.Deref(),new Funct(string20,var3.Deref(),var1.Deref(),new Funct(string4,var8.Deref(),new Const(string6)),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return prefix4cont ;
}
}

class pred_maketerm_3_7 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl8) ;
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
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,new Const(string5)),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string4,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = new Funct(string4,new Funct(string10,new Const(string3)),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string15,var5.Deref(),var2.Deref(),posint900,new Funct(string15,new Funct(string4,new Funct(string10,new Const(string5)),var6.Deref()),var3.Deref(),posint900,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_maketerm_3_8 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl9) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var7 = new Var(mach) ;
PrologObject var6 = new Var(mach) ;
PrologObject var5 = new Var(mach) ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,new Const(string5)),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string4,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = new Funct(string4,new Funct(string10,new Const(string22)),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string8,var7,new Funct(string4,new Funct(string10,new Const(string7)),new Const(string6)),var6.Deref(),new Funct(string15,var5.Deref(),var2.Deref(),posint900,new Funct(string15,var7.Deref(),var3.Deref(),posint900,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_maketerm_3_9 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl10) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,new Const(string1)),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = new Funct(string4,new Funct(string10,new Const(string2)),new Const(string6)) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string0, new HeapChoice(mach.CUTB),new Funct(string15,var4.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_maketerm_3_10 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl11) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var4 = new Var(mach) ;
PrologObject var3 = new Var(mach) ;
PrologObject var2 = new Var(mach) ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,new Const(string5)),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Funct(string4,var2,new Const(string6))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = new Funct(string4,new Funct(string10,new Const(string7)),new Const(string6)) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = new Funct(string15,var4.Deref(),var2.Deref(),posint900,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return ap4cont ;
}
}

class pred_maketerm_3_11 extends pred_maketerm_3
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
PrologObject var1 = new Var(mach) ;
if (!( (areg0).Unify(new Funct(string4,new Funct(string10,new Const(string5)),new Funct(string4,new Funct(string10,new Const(string7)),new Const(string6)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

