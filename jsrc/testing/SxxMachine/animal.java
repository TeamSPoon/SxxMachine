package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class animal /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern(".") ;
final static Const s2 = Data.Intern(":-") ;
final static Const s_animal = Data.Intern("animal") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_elephant = Data.Intern("elephant") ;
final static Const s_goat = Data.Intern("goat") ;
final static Const s7 = Data.Intern("please type one more animal name: ") ;
final static Const s_read = Data.Intern("read") ;
final static Const s_write = Data.Intern("write") ;
final static Operation reg_animal_1 = PredTable.Register("animal",1, new pred_animal_1());
public static class pred_animal_1 extends Code {

/*

animal(goat,_6012):-call(_6012).
animal(elephant,_6086):-call(_6086).
animal(_6138,_6180):-write('please type one more animal name: ',read(_6138,_6180)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_animal_1__1(mach); }
public static Operation exec_pred_animal_1__1(Prolog mach){ mach.FillAlternative(pred_animal_1::exec_pred_animal_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(animal.s_goat,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_animal_1__2(Prolog mach){ mach.FillAlternative(pred_animal_1::exec_pred_animal_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(animal.s_elephant,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_animal_1__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = animal.s7 ;
local_aregs[1] = Data.F(animal.s_read,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) animal.s_write.FindProc(1) ;}
}


}


