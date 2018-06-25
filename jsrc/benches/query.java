import java.util.function.Function; class query /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("*") ;
static Const s2 = Const.Intern(".") ;
static Const s3 = Const.Intern("//") ;
static Const s4 = Const.Intern(":-") ;
static Const s5 = Const.Intern("area") ;
static Const s6 = Const.Intern("argentina") ;
static Const s7 = Const.Intern("bangladesh") ;
static Const s8 = Const.Intern("brazil") ;
static Const s9 = Const.Intern("call") ;
static Const s10 = Const.Intern("china") ;
static Const s11 = Const.Intern("density") ;
static Const s12 = Const.Intern("egypt") ;
static Const s13 = Const.Intern("ethiopia") ;
static Const s14 = Const.Intern("fail") ;
static Const s15 = Const.Intern("france") ;
static Const s16 = Const.Intern("india") ;
static Const s17 = Const.Intern("indonesia") ;
static Const s18 = Const.Intern("iran") ;
static Const s19 = Const.Intern("is") ;
static Const s20 = Const.Intern("italy") ;
static Const s21 = Const.Intern("japan") ;
static Const s22 = Const.Intern("mexico") ;
static Const s23 = Const.Intern("nigeria") ;
static Const s24 = Const.Intern("pakistan") ;
static Const s25 = Const.Intern("philippines") ;
static Const s26 = Const.Intern("poland") ;
static Const s27 = Const.Intern("pop") ;
static Const s28 = Const.Intern("query") ;
static Const s29 = Const.Intern("s_korea") ;
static Const s30 = Const.Intern("smallerthan") ;
static Const s31 = Const.Intern("spain") ;
static Const s32 = Const.Intern("thailand") ;
static Const s33 = Const.Intern("top") ;
static Const s34 = Const.Intern("turkey") ;
static Const s35 = Const.Intern("uk") ;
static Const s36 = Const.Intern("usa") ;
static Const s37 = Const.Intern("ussr") ;
static Const s38 = Const.Intern("w_germany") ;
static Int posint20 = Term.Number(20) ;
static Int posint21 = Term.Number(21) ;
static Int posint37 = Term.Number(37) ;
static Int posint55 = Term.Number(55) ;
static Int posint86 = Term.Number(86) ;
static Int posint90 = Term.Number(90) ;
static Int posint96 = Term.Number(96) ;
static Int posint100 = Term.Number(100) ;
static Int posint116 = Term.Number(116) ;
static Int posint121 = Term.Number(121) ;
static Int posint148 = Term.Number(148) ;
static Int posint190 = Term.Number(190) ;
static Int posint200 = Term.Number(200) ;
static Int posint213 = Term.Number(213) ;
static Int posint251 = Term.Number(251) ;
static Int posint272 = Term.Number(272) ;
static Int posint296 = Term.Number(296) ;
static Int posint311 = Term.Number(311) ;
static Int posint320 = Term.Number(320) ;
static Int posint335 = Term.Number(335) ;
static Int posint337 = Term.Number(337) ;
static Int posint350 = Term.Number(350) ;
static Int posint352 = Term.Number(352) ;
static Int posint364 = Term.Number(364) ;
static Int posint373 = Term.Number(373) ;
static Int posint383 = Term.Number(383) ;
static Int posint386 = Term.Number(386) ;
static Int posint410 = Term.Number(410) ;
static Int posint415 = Term.Number(415) ;
static Int posint525 = Term.Number(525) ;
static Int posint554 = Term.Number(554) ;
static Int posint559 = Term.Number(559) ;
static Int posint570 = Term.Number(570) ;
static Int posint581 = Term.Number(581) ;
static Int posint613 = Term.Number(613) ;
static Int posint620 = Term.Number(620) ;
static Int posint628 = Term.Number(628) ;
static Int posint682 = Term.Number(682) ;
static Int posint750 = Term.Number(750) ;
static Int posint764 = Term.Number(764) ;
static Int posint1042 = Term.Number(1042) ;
static Int posint1080 = Term.Number(1080) ;
static Int posint1097 = Term.Number(1097) ;
static Int posint1139 = Term.Number(1139) ;
static Int posint1276 = Term.Number(1276) ;
static Int posint2119 = Term.Number(2119) ;
static Int posint2521 = Term.Number(2521) ;
static Int posint3288 = Term.Number(3288) ;
static Int posint3380 = Term.Number(3380) ;
static Int posint3609 = Term.Number(3609) ;
static Int posint5863 = Term.Number(5863) ;
static Int posint8250 = Term.Number(8250) ;
static Int posint8708 = Term.Number(8708) ;
}


class pred_top_0 extends Code {

/*

top(_33730):-query(_33730).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_query_0::exec_static ;}
}


class pred_query_0 extends Code {

/*

query(_33808):-query(_33780,fail(_33808)).
query(_33918):-call(_33918).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_query_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_query_0__1(PrologMachine mach){ mach.FillAlternative(pred_query_0::exec_pred_query_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = F(query.s14,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_query_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_query_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_query_1 extends Code {

/*

query([_33962,_33968,_33974,_33980],_34092):-density(_33962,_33968,density(_33974,_33980,smallerthan(_33980,_33968,is(_34014,20*_33968,is(_34026,21*_33980,smallerthan(_34014,_34026,_34092)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_query_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_query_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(query.s2,var1,F(query.s2,var2,F(query.s2,var3,F(query.s2,var4,Const.Nil))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(query.s11,var3.Deref(),var4.Deref(),F(query.s30,var4.Deref(),var2.Deref(),F(query.s19,var5,F(query.s1,query.posint20,var2.Deref()),F(query.s19,var6,F(query.s1,query.posint21,var4.Deref()),F(query.s30,var5.Deref(),var6.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_density_2::exec_static ;}
}


class pred_density_2 extends Code {

/*

density(_34452,_34454,_34530):-pop(_34452,_34460,area(_34452,_34466,is(_34454,_34460*100//_34466,_34530))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_density_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_density_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(query.s5,var1.Deref(),var4,F(query.s19,var2.Deref(),F(query.s3,F(query.s1,var3.Deref(),query.posint100),var4.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_pop_2::exec_static ;}
}


class pred_pop_2 extends Code {

/*

pop(china,8250,_34766):-call(_34766).
pop(india,5863,_34880):-call(_34880).
pop(ussr,2521,_34994):-call(_34994).
pop(usa,2119,_35108):-call(_35108).
pop(indonesia,1276,_35222):-call(_35222).
pop(japan,1097,_35336):-call(_35336).
pop(brazil,1042,_35450):-call(_35450).
pop(bangladesh,750,_35564):-call(_35564).
pop(pakistan,682,_35678):-call(_35678).
pop(w_germany,620,_35792):-call(_35792).
pop(nigeria,613,_35906):-call(_35906).
pop(mexico,581,_36020):-call(_36020).
pop(uk,559,_36134):-call(_36134).
pop(italy,554,_36248):-call(_36248).
pop(france,525,_36362):-call(_36362).
pop(philippines,415,_36476):-call(_36476).
pop(thailand,410,_36590):-call(_36590).
pop(turkey,383,_36704):-call(_36704).
pop(egypt,364,_36818):-call(_36818).
pop(spain,352,_36932):-call(_36932).
pop(poland,337,_37046):-call(_37046).
pop(s_korea,335,_37160):-call(_37160).
pop(iran,320,_37274):-call(_37274).
pop(ethiopia,272,_37388):-call(_37388).
pop(argentina,251,_37502):-call(_37502).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_pop_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_pop_2__1(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s10))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint8250))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__2(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s16))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint5863))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__3(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s37))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint2521))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__4(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s36))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint2119))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__5(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s17))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint1276))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__6(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s21))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint1097))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__7(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s8))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint1042))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__8(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s7))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint750))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__9(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s24))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint682))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__10(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s38))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint620))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__11(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s23))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint613))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__12(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s22))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint581))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__13(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s35))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint559))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__14(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s20))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint554))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__15(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint525))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__16(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s25))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint415))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__17(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s32))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint410))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__18(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s34))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint383))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__19(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s12))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint364))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__20(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s31))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint352))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__21(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s26))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint337))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__22(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s29))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint335))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__23(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint320))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__24(PrologMachine mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s13))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint272))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_pop_2__25(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s6))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint251))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_area_2 extends Code {

/*

area(china,3380,_37616):-call(_37616).
area(india,1139,_37736):-call(_37736).
area(ussr,8708,_37856):-call(_37856).
area(usa,3609,_37976):-call(_37976).
area(indonesia,570,_38096):-call(_38096).
area(japan,148,_38216):-call(_38216).
area(brazil,3288,_38336):-call(_38336).
area(bangladesh,55,_38456):-call(_38456).
area(pakistan,311,_38576):-call(_38576).
area(w_germany,96,_38696):-call(_38696).
area(nigeria,373,_38816):-call(_38816).
area(mexico,764,_38936):-call(_38936).
area(uk,86,_39056):-call(_39056).
area(italy,116,_39176):-call(_39176).
area(france,213,_39296):-call(_39296).
area(philippines,90,_39416):-call(_39416).
area(thailand,200,_39536):-call(_39536).
area(turkey,296,_39656):-call(_39656).
area(egypt,386,_39776):-call(_39776).
area(spain,190,_39896):-call(_39896).
area(poland,121,_40016):-call(_40016).
area(s_korea,37,_40136):-call(_40136).
area(iran,628,_40256):-call(_40256).
area(ethiopia,350,_40376):-call(_40376).
area(argentina,1080,_40496):-call(_40496).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_area_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_area_2__1(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s10))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint3380))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__2(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s16))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint1139))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__3(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s37))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint8708))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__4(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s36))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint3609))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__5(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s17))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint570))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__6(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s21))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint148))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__7(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s8))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint3288))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__8(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s7))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint55))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__9(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s24))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint311))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__10(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s38))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint96))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__11(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s23))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint373))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__12(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s22))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint764))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__13(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s35))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint86))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__14(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s20))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint116))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__15(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint213))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__16(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s25))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint90))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__17(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s32))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint200))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__18(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s34))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint296))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__19(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s12))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint386))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__20(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s31))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint190))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__21(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s26))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint121))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__22(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s29))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint37))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__23(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint628))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__24(PrologMachine mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s13))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint350))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_area_2__25(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s6))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(query.posint1080))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


