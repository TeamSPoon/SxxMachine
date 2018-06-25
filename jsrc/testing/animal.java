import java.util.function.Function; class animal /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern(".") ;
static Const s2 = Const.Intern(":-") ;
static Const s3 = Const.Intern("animal") ;
static Const s4 = Const.Intern("call") ;
static Const s5 = Const.Intern("elephant") ;
static Const s6 = Const.Intern("goat") ;
static Const s7 = Const.Intern("please type one more animal name: ") ;
static Const s8 = Const.Intern("read") ;
static Const s9 = Const.Intern("write") ;
}


class pred_animal_1 extends Code {

/*

animal(goat,_5346):-call(_5346).
animal(elephant,_5420):-call(_5420).
animal(_5472,_5514):-write('please type one more animal name: ',read(_5472,_5514)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_animal_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_animal_1__1(PrologMachine mach){ mach.FillAlternative(pred_animal_1::exec_pred_animal_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(animal.s6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_animal_1__2(PrologMachine mach){ mach.FillAlternative(pred_animal_1::exec_pred_animal_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(animal.s5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_animal_1__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = animal.s7 ;
local_aregs[1] = F(animal.s8,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
}


