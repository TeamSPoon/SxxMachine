// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

public class pred_infix_3 extends Code
{ static Code entry_code ;
static Code cl1 = new pred_infix_3_1() ;
static Code cl2 = new pred_infix_3_2() ;
static Code cl3 = new pred_infix_3_3() ;
static Code cl4 = new pred_infix_3_4() ;
static Code cl5 = new pred_infix_3_5() ;
static Code cl6 = new pred_infix_3_6() ;
static Code cl7 = new pred_infix_3_7() ;
static Code cl8 = new pred_infix_3_8() ;
static Code cl9 = new pred_infix_3_9() ;
static Code cl10 = new pred_infix_3_10() ;
static Code cl11 = new pred_infix_3_11() ;
static Code cl12 = new pred_infix_3_12() ;
static Code cl13 = new pred_infix_3_13() ;
static Code cl14 = new pred_infix_3_14() ;
static Code cl15 = new pred_infix_3_15() ;
static Code cl16 = new pred_infix_3_16() ;
static Code cl17 = new pred_infix_3_17() ;
static Code cl18 = new pred_infix_3_18() ;
static Code cl19 = new pred_infix_3_19() ;
static Code cl20 = new pred_infix_3_20() ;
static Code cl21 = new pred_infix_3_21() ;
static Code cl22 = new pred_infix_3_22() ;
static Code cl23 = new pred_infix_3_23() ;
static Code cl24 = new pred_infix_3_24() ;
static Code cl25 = new pred_infix_3_25() ;
static Code cl26 = new pred_infix_3_26() ;
static Code cl27 = new pred_infix_3_27() ;
static Code cl28 = new pred_infix_3_28() ;
static String string0 = "cut".intern() ;
static String string1 = "#".intern() ;
static String string2 = "*".intern() ;
static String string3 = "+".intern() ;
static String string4 = ",".intern() ;
static String string5 = "-".intern() ;
static String string6 = "->".intern() ;
static String string7 = "/".intern() ;
static String string8 = "//".intern() ;
static String string9 = ":".intern() ;
static String string10 = ":-".intern() ;
static String string11 = ";".intern() ;
static String string12 = "<".intern() ;
static String string13 = "<<".intern() ;
static String string14 = "=".intern() ;
static String string15 = "=..".intern() ;
static String string16 = "=:=".intern() ;
static String string17 = "=<".intern() ;
static String string18 = "==".intern() ;
static String string19 = ">".intern() ;
static String string20 = ">=".intern() ;
static String string21 = ">>".intern() ;
static String string22 = "@<".intern() ;
static String string23 = "@=<".intern() ;
static String string24 = "@>".intern() ;
static String string25 = "@>=".intern() ;
static String string26 = "^".intern() ;
static String string27 = "call".intern() ;
static String string28 = "infix".intern() ;
static String string29 = "is".intern() ;
static String string30 = "mod".intern() ;
static String string31 = "xfx".intern() ;
static String string32 = "xfy".intern() ;
static String string33 = "yfx".intern() ;
static Int posint200 = new Int(200) ;
static Int posint300 = new Int(300) ;
static Int posint400 = new Int(400) ;
static Int posint500 = new Int(500) ;
static Int posint550 = new Int(550) ;
static Int posint700 = new Int(700) ;
static Int posint1000 = new Int(1000) ;
static Int posint1050 = new Int(1050) ;
static Int posint1100 = new Int(1100) ;
static Int posint1200 = new Int(1200) ;

void init(PrologMachine mach)
{ entry_code = this ;
}
int Arity() { return 3 ; }
Code Exec(PrologMachine mach)
{ PrologObject aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;
mach.CreateChoicePoint(aregs) ;
return cl1.Exec(mach) ;
}
}

class pred_infix_3_1 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl2) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string10)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_2 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl3) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1000))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string32)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_3 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl4) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1100))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string32)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string11)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_4 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl5) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint1050))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string32)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string6)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_5 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl6) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string14)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_6 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl7) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string29)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_7 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl8) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string15)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_8 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl9) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string18)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_9 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl10) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string22)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_10 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl11) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string24)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_11 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl12) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string23)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_12 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl13) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string25)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_13 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl14) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string16)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_14 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl15) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string12)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_15 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl16) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string17)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_16 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl17) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string19)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_17 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl18) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string20)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_18 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl19) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint550))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string32)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string9)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_19 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl20) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_20 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl21) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_21 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl22) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_22 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl23) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_23 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl24) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_24 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl25) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string8)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_25 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl26) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string13)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_26 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl27) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string33)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string21)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_27 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.FillAlternative(cl28) ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint300))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string31)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string30)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

class pred_infix_3_28 extends pred_infix_3
{
Code Exec(PrologMachine mach)
{ mach.RemoveChoice() ;
PrologObject local_aregs[] = mach.Areg ;
PrologObject continuation = local_aregs[3] ;
PrologObject areg2 = local_aregs[2].Deref() ;
PrologObject areg1 = local_aregs[1].Deref() ;
PrologObject areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(posint200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(new Const(string32)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(new Const(string26)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;
}
}

