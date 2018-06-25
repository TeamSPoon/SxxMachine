import java.util.function.Function; class simple_analyzer /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("!") ;
static Const s2 = Const.Intern("$cut_load") ;
static Const s3 = Const.Intern("$cut_part/4_1") ;
static Const s4 = Const.Intern("$cut_shallow") ;
static Const s5 = Const.Intern("$fac_$cut_part/4_1/5_2") ;
static Const s6 = Const.Intern("+") ;
static Const s7 = Const.Intern(",") ;
static Const s8 = Const.Intern("-") ;
static Const s9 = Const.Intern("-->") ;
static Const s10 = Const.Intern(".") ;
static Const s11 = Const.Intern("/") ;
static Const s12 = Const.Intern(":-") ;
static Const s13 = Const.Intern(";") ;
static Const s14 = Const.Intern("<") ;
static Const s15 = Const.Intern("=") ;
static Const s16 = Const.Intern("=<") ;
static Const s17 = Const.Intern("==") ;
static Const s18 = Const.Intern(">") ;
static Const s19 = Const.Intern("\\==") ;
static Const s20 = Const.Intern("add") ;
static Const s21 = Const.Intern("add_set") ;
static Const s22 = Const.Intern("analyze_closure") ;
static Const s23 = Const.Intern("analyze_strees") ;
static Const s24 = Const.Intern("any") ;
static Const s25 = Const.Intern("arg") ;
static Const s26 = Const.Intern("bottom") ;
static Const s27 = Const.Intern("bottom_call") ;
static Const s28 = Const.Intern("call") ;
static Const s29 = Const.Intern("call_p") ;
static Const s30 = Const.Intern("compare") ;
static Const s31 = Const.Intern("create_argument") ;
static Const s32 = Const.Intern("create_new_call") ;
static Const s33 = Const.Intern("cut") ;
static Const s34 = Const.Intern("diffv") ;
static Const s35 = Const.Intern("diffv_2") ;
static Const s36 = Const.Intern("diffv_3") ;
static Const s37 = Const.Intern("dummy") ;
static Const s38 = Const.Intern("fail") ;
static Const s39 = Const.Intern("filter_dups") ;
static Const s40 = Const.Intern("filter_vars") ;
static Const s41 = Const.Intern("filter_vars_arg") ;
static Const s42 = Const.Intern("functor") ;
static Const s43 = Const.Intern("get") ;
static Const s44 = Const.Intern("get_entry_modes") ;
static Const s45 = Const.Intern("goal_dupset") ;
static Const s46 = Const.Intern("goal_dupset_varbag") ;
static Const s47 = Const.Intern("goal_dupset_varset") ;
static Const s48 = Const.Intern("ground") ;
static Const s49 = Const.Intern("ground_flag") ;
static Const s50 = Const.Intern("includev") ;
static Const s51 = Const.Intern("includev_2") ;
static Const s52 = Const.Intern("includev_3") ;
static Const s53 = Const.Intern("init_conj") ;
static Const s54 = Const.Intern("init_disj") ;
static Const s55 = Const.Intern("init_goal") ;
static Const s56 = Const.Intern("init_strees") ;
static Const s57 = Const.Intern("intersectv") ;
static Const s58 = Const.Intern("intersectv_2") ;
static Const s59 = Const.Intern("intersectv_3") ;
static Const s60 = Const.Intern("inv") ;
static Const s61 = Const.Intern("inv_2") ;
static Const s62 = Const.Intern("is") ;
static Const s63 = Const.Intern("keysort") ;
static Const s64 = Const.Intern("lattice_modes_arg") ;
static Const s65 = Const.Intern("lattice_modes_call") ;
static Const s66 = Const.Intern("leaf") ;
static Const s67 = Const.Intern("lub") ;
static Const s68 = Const.Intern("lub_call") ;
static Const s69 = Const.Intern("main") ;
static Const s70 = Const.Intern("make_key") ;
static Const s71 = Const.Intern("membership_flag") ;
static Const s72 = Const.Intern("no") ;
static Const s73 = Const.Intern("node") ;
static Const s74 = Const.Intern("nonvar") ;
static Const s75 = Const.Intern("not") ;
static Const s76 = Const.Intern("part") ;
static Const s77 = Const.Intern("qsort") ;
static Const s78 = Const.Intern("seal") ;
static Const s79 = Const.Intern("set") ;
static Const s80 = Const.Intern("set_2") ;
static Const s81 = Const.Intern("set_command") ;
static Const s82 = Const.Intern("smallerorequal") ;
static Const s83 = Const.Intern("smallerthan") ;
static Const s84 = Const.Intern("sort") ;
static Const s85 = Const.Intern("split_unify") ;
static Const s86 = Const.Intern("stree") ;
static Const s87 = Const.Intern("sub") ;
static Const s88 = Const.Intern("sub_set") ;
static Const s89 = Const.Intern("subsetv") ;
static Const s90 = Const.Intern("subsetv_2") ;
static Const s91 = Const.Intern("table_command") ;
static Const s92 = Const.Intern("top") ;
static Const s93 = Const.Intern("traverse_conj") ;
static Const s94 = Const.Intern("traverse_disj") ;
static Const s95 = Const.Intern("traverse_strees") ;
static Const s96 = Const.Intern("true") ;
static Const s97 = Const.Intern("unify") ;
static Const s98 = Const.Intern("unify_p") ;
static Const s99 = Const.Intern("uninit") ;
static Const s100 = Const.Intern("unionv") ;
static Const s101 = Const.Intern("unionv_2") ;
static Const s102 = Const.Intern("unionv_3") ;
static Const s103 = Const.Intern("unknown") ;
static Const s104 = Const.Intern("update_goal") ;
static Const s105 = Const.Intern("update_table") ;
static Const s106 = Const.Intern("var") ;
static Const s107 = Const.Intern("var_args") ;
static Const s108 = Const.Intern("varbag") ;
static Const s109 = Const.Intern("varset") ;
static Const s110 = Const.Intern("yes") ;
static Const s111 = Const.Intern("{}") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint3 = Term.Number(3) ;
static Int posint4 = Term.Number(4) ;
static Int posint5 = Term.Number(5) ;
static Int posint6 = Term.Number(6) ;
}


class pred_top_0 extends Code {

/*

top(_13362):-main(_13340,_13362).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_main_1::exec_static ;}
}


class pred_main_1 extends Code {

/*

main(_13426,_14086):-analyze_strees([stree(main/0,(main:-qsort([1,2],_13450,[]),true;fail),(main:-true),[],1),stree(qsort/3,(qsort(_13504,_13506,_13508):-_13504=[_13512|_13514],part(_13514,_13512,_13528,_13530),qsort(_13530,_13536,_13508),qsort(_13528,_13506,[_13512|_13536]),true;_13504=[],_13508=_13506,true;fail),(qsort(_13622,_13624,_13626):-true),[],1),stree(part/4,(part(_13660,_13662,_13664,_13666):-'$cut_load'(_13670),'$cut_part/4_1'(_13660,_13662,_13664,_13666,_13670),true;fail),(part(_13710,_13712,_13714,_13716):-true),[stree('$cut_part/4_1'/5,('$cut_part/4_1'(_13732,_13734,_13736,_13738,_13740):-_13732=[_13744|_13746],'$fac_$cut_part/4_1/5_2'(_13746,_13734,_13736,_13738,_13740,_13744),true;_13732=[],_13736=[],_13738=[],true;fail),('$cut_part/4_1'(_13836,_13838,_13840,_13842,_13844):-true),[stree('$fac_$cut_part/4_1/5_2'/6,('$fac_$cut_part/4_1/5_2'(_13860,_13862,_13864,_13866,_13868,_13870):-_13864=[_13870|_13876],_13870=<_13862,'$cut_shallow'(_13868),part(_13860,_13862,_13876,_13866),true;_13866=[_13870|_13932],part(_13860,_13862,_13864,_13932),true;fail),('$fac_$cut_part/4_1/5_2'(_13982,_13984,_13986,_13988,_13990,_13992):-true),[],1)],1)],1)],_13426,_14086).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_main_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_main_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var48 = V(mach) ;
Var var47 = V(mach) ;
Var var46 = V(mach) ;
Var var45 = V(mach) ;
Var var44 = V(mach) ;
Var var43 = V(mach) ;
Var var42 = V(mach) ;
Var var41 = V(mach) ;
Var var40 = V(mach) ;
Var var39 = V(mach) ;
Var var38 = V(mach) ;
Var var37 = V(mach) ;
Var var36 = V(mach) ;
Var var35 = V(mach) ;
Var var34 = V(mach) ;
Var var33 = V(mach) ;
Var var32 = V(mach) ;
Var var31 = V(mach) ;
Var var30 = V(mach) ;
Var var29 = V(mach) ;
Var var28 = V(mach) ;
Var var27 = V(mach) ;
Var var26 = V(mach) ;
Var var25 = V(mach) ;
Var var24 = V(mach) ;
Var var23 = V(mach) ;
Var var22 = V(mach) ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s10,F(simple_analyzer.s86,F(simple_analyzer.s11,simple_analyzer.s69,simple_analyzer.posint0),F(simple_analyzer.s12,simple_analyzer.s69,F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s77,F(simple_analyzer.s10,simple_analyzer.posint1,F(simple_analyzer.s10,simple_analyzer.posint2,Const.Nil)),var2,Const.Nil),simple_analyzer.s96),simple_analyzer.s38)),F(simple_analyzer.s12,simple_analyzer.s69,simple_analyzer.s96),Const.Nil,simple_analyzer.posint1),F(simple_analyzer.s10,F(simple_analyzer.s86,F(simple_analyzer.s11,simple_analyzer.s77,simple_analyzer.posint3),F(simple_analyzer.s12,F(simple_analyzer.s77,var3,var4,var5),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var3.Deref(),F(simple_analyzer.s10,var6,var7)),F(simple_analyzer.s7,F(simple_analyzer.s76,var7.Deref(),var6.Deref(),var8,var9),F(simple_analyzer.s7,F(simple_analyzer.s77,var9.Deref(),var10,var5.Deref()),F(simple_analyzer.s7,F(simple_analyzer.s77,var8.Deref(),var4.Deref(),F(simple_analyzer.s10,var6.Deref(),var10.Deref())),simple_analyzer.s96)))),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var3.Deref(),Const.Nil),F(simple_analyzer.s7,F(simple_analyzer.s15,var5.Deref(),var4.Deref()),simple_analyzer.s96)),simple_analyzer.s38))),F(simple_analyzer.s12,F(simple_analyzer.s77,var11,var12,var13),simple_analyzer.s96),Const.Nil,simple_analyzer.posint1),F(simple_analyzer.s10,F(simple_analyzer.s86,F(simple_analyzer.s11,simple_analyzer.s76,simple_analyzer.posint4),F(simple_analyzer.s12,F(simple_analyzer.s76,var14,var15,var16,var17),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s2,var18),F(simple_analyzer.s7,F(simple_analyzer.s3,var14.Deref(),var15.Deref(),var16.Deref(),var17.Deref(),var18.Deref()),simple_analyzer.s96)),simple_analyzer.s38)),F(simple_analyzer.s12,F(simple_analyzer.s76,var19,var20,var21,var22),simple_analyzer.s96),F(simple_analyzer.s10,F(simple_analyzer.s86,F(simple_analyzer.s11,simple_analyzer.s3,simple_analyzer.posint5),F(simple_analyzer.s12,F(simple_analyzer.s3,var23,var24,var25,var26,var27),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var23.Deref(),F(simple_analyzer.s10,var28,var29)),F(simple_analyzer.s7,F(simple_analyzer.s5,var29.Deref(),var24.Deref(),var25.Deref(),var26.Deref(),var27.Deref(),var28.Deref()),simple_analyzer.s96)),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var23.Deref(),Const.Nil),F(simple_analyzer.s7,F(simple_analyzer.s15,var25.Deref(),Const.Nil),F(simple_analyzer.s7,F(simple_analyzer.s15,var26.Deref(),Const.Nil),simple_analyzer.s96))),simple_analyzer.s38))),F(simple_analyzer.s12,F(simple_analyzer.s3,var30,var31,var32,var33,var34),simple_analyzer.s96),F(simple_analyzer.s10,F(simple_analyzer.s86,F(simple_analyzer.s11,simple_analyzer.s5,simple_analyzer.posint6),F(simple_analyzer.s12,F(simple_analyzer.s5,var35,var36,var37,var38,var39,var40),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var37.Deref(),F(simple_analyzer.s10,var40.Deref(),var41)),F(simple_analyzer.s7,F(simple_analyzer.s16,var40.Deref(),var36.Deref()),F(simple_analyzer.s7,F(simple_analyzer.s4,var39.Deref()),F(simple_analyzer.s7,F(simple_analyzer.s76,var35.Deref(),var36.Deref(),var41.Deref(),var38.Deref()),simple_analyzer.s96)))),F(simple_analyzer.s13,F(simple_analyzer.s7,F(simple_analyzer.s15,var38.Deref(),F(simple_analyzer.s10,var40.Deref(),var42)),F(simple_analyzer.s7,F(simple_analyzer.s76,var35.Deref(),var36.Deref(),var37.Deref(),var42.Deref()),simple_analyzer.s96)),simple_analyzer.s38))),F(simple_analyzer.s12,F(simple_analyzer.s5,var43,var44,var45,var46,var47,var48),simple_analyzer.s96),Const.Nil,simple_analyzer.posint1),Const.Nil),simple_analyzer.posint1),Const.Nil),simple_analyzer.posint1),Const.Nil))) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_analyze_strees_2::exec_static ;}
}


class pred_analyze_strees_2 extends Code {

/*

analyze_strees(_14178,_14180,_14246):-init_strees(_14178,_14186,_14188,seal(_14188,analyze_closure(_14178,_14188,_14180,_14246))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_analyze_strees_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_analyze_strees_2__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[2] = var4 ;
local_aregs[3] = F(simple_analyzer.s78,var4.Deref(),F(simple_analyzer.s22,var1.Deref(),var4.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_init_strees_3::exec_static ;}
}


class pred_analyze_closure_3 extends Code {

/*

analyze_closure(_14466,_14468,_14470,_14538):-traverse_strees(_14466,_14468,_14478,0,_14482,analyze_closure(_14466,_14478,_14470,_14482,_14538)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_analyze_closure_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_analyze_closure_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = simple_analyzer.posint0 ;
local_aregs[4] = var5 ;
local_aregs[5] = F(simple_analyzer.s22,var1.Deref(),var4.Deref(),var3.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_traverse_strees_5::exec_static ;}
}


class pred_analyze_closure_4 extends Code {

/*

analyze_closure(_14778,_14780,_14780,_14784,_14842):-smallerorequal(_14784,0,cut(1,_14842)).
analyze_closure(_14988,_14990,_14992,_14994,_15066):-smallerthan(0,_14994,cut(1,analyze_closure(_14988,_14990,_14992,_15066))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_analyze_closure_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_analyze_closure_4__1(PrologMachine mach){ mach.FillAlternative(pred_analyze_closure_4::exec_pred_analyze_closure_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = simple_analyzer.posint0 ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_analyze_closure_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = simple_analyzer.posint0 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s22,var1.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
}


class pred_init_strees_3 extends Code {

/*

init_strees([],_15278,_15278,_15320):-true(_15320).
init_strees([_15424|_15426],_15432,_15434,_15578):-unify(stree(_15444,(_15438:-_15440),_15448,_15450,_15452),_15424,bottom_call(_15444,_15464,table_command(get(_15444,_15464),_15432,_15478,init_disj(_15440,_15478,_15486,init_strees(_15450,_15486,_15494,init_strees(_15426,_15494,_15434,true(_15578))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_init_strees_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_init_strees_3__1(PrologMachine mach){ mach.FillAlternative(pred_init_strees_3::exec_pred_init_strees_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_init_strees_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s86,var5,F(simple_analyzer.s12,var6,var7),var8,var9,var10) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s27,var5.Deref(),var11,F(simple_analyzer.s91,F(simple_analyzer.s43,var5.Deref(),var11.Deref()),var3.Deref(),var12,F(simple_analyzer.s54,var7.Deref(),var12.Deref(),var13,F(simple_analyzer.s56,var9.Deref(),var13.Deref(),var14,F(simple_analyzer.s56,var2.Deref(),var14.Deref(),var4.Deref(),F(simple_analyzer.s96,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
}


class pred_init_conj_3 extends Code {

/*

init_conj(true,_16046,_16046,_16088):-true(_16088).
init_conj((_16198,_16200),_16206,_16208,_16276):-init_goal(_16198,_16206,_16216,init_conj(_16200,_16216,_16208,true(_16276))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_init_conj_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_init_conj_3__1(PrologMachine mach){ mach.FillAlternative(pred_init_conj_3::exec_pred_init_conj_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s96))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_init_conj_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s7,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = F(simple_analyzer.s53,var2.Deref(),var5.Deref(),var4.Deref(),F(simple_analyzer.s96,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_init_goal_3::exec_static ;}
}


class pred_init_disj_3 extends Code {

/*

init_disj(fail,_16516,_16516,_16558):-true(_16558).
init_disj((_16674;_16676),_16682,_16684,_16752):-init_conj(_16674,_16682,_16692,init_disj(_16676,_16692,_16684,true(_16752))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_init_disj_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_init_disj_3__1(PrologMachine mach){ mach.FillAlternative(pred_init_disj_3::exec_pred_init_disj_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s38))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_init_disj_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s13,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = F(simple_analyzer.s54,var2.Deref(),var5.Deref(),var4.Deref(),F(simple_analyzer.s96,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_init_conj_3::exec_static ;}
}


class pred_init_goal_3 extends Code {

/*

init_goal(_16996,_16998,_17000,_17114):-call_p(_16996,cut(1,functor(_16996,_17010,_17012,bottom_call(_17010/_17012,_17024,table_command(get(_17010/_17012,_17024),_16998,_17000,true(_17114)))))).
init_goal(_17456,_17458,_17458,_17516):-unify_p(_17456,cut(1,true(_17516))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_init_goal_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_init_goal_3__1(PrologMachine mach){ mach.FillAlternative(pred_init_goal_3::exec_pred_init_goal_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s42,var1.Deref(),var4,var5,F(simple_analyzer.s27,F(simple_analyzer.s11,var4.Deref(),var5.Deref()),var6,F(simple_analyzer.s91,F(simple_analyzer.s43,F(simple_analyzer.s11,var4.Deref(),var5.Deref()),var6.Deref()),var2.Deref(),var3.Deref(),F(simple_analyzer.s96,continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_call_p_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_init_goal_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s96,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_unify_p_1::exec_static ;}
}


class pred_traverse_strees_5 extends Code {

/*

traverse_strees([],_17682,_17682,_17686,_17686,_17740):-true(_17740).
traverse_strees([_17884|_17886],_17892,_17894,_17896,_17898,_18036):-unify(stree(_17908,(_17902:-_17904),_17912,_17914,_17916),_17884,traverse_disj(_17902,_17904,_17892,_17932,_17896,_17936,traverse_strees(_17914,_17932,_17944,_17936,_17948,traverse_strees(_17886,_17944,_17894,_17948,_17898,true(_18036))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_traverse_strees_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_traverse_strees_5__1(PrologMachine mach){ mach.FillAlternative(pred_traverse_strees_5::exec_pred_traverse_strees_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_traverse_strees_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s86,var7,F(simple_analyzer.s12,var8,var9),var10,var11,var12) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s94,var8.Deref(),var9.Deref(),var3.Deref(),var13,var5.Deref(),var14,F(simple_analyzer.s95,var11.Deref(),var13.Deref(),var15,var14.Deref(),var16,F(simple_analyzer.s95,var2.Deref(),var15.Deref(),var4.Deref(),var16.Deref(),var6.Deref(),F(simple_analyzer.s96,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
}


class pred_traverse_disj_6 extends Code {

/*

traverse_disj(_18526,fail,_18530,_18530,_18534,_18534,_18594):-true(_18594).
traverse_disj(_18758,(_18752;_18754),_18762,_18764,_18766,_18768,_18866):-traverse_conj(_18758,_18752,_18762,_18778,_18766,_18782,traverse_disj(_18758,_18754,_18778,_18764,_18782,_18768,true(_18866))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_traverse_disj_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_traverse_disj_6__1(PrologMachine mach){ mach.FillAlternative(pred_traverse_disj_6::exec_pred_traverse_disj_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s38))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_traverse_disj_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s13,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var8 ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var9 ;
local_aregs[6] = F(simple_analyzer.s94,var1.Deref(),var3.Deref(),var8.Deref(),var5.Deref(),var9.Deref(),var7.Deref(),F(simple_analyzer.s96,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_traverse_conj_6::exec_static ;}
}


class pred_traverse_conj_6 extends Code {

/*

traverse_conj(_19236,_19238,_19240,_19242,_19244,_19246,_19418):-varset(_19236,_19252,functor(_19236,_19258,_19260,table_command(get(_19258/_19260,_19272),_19240,_19280,get_entry_modes(uninit,_19236,_19272,_19290,get_entry_modes(ground,_19236,_19272,_19300,traverse_conj(_19238,_19280,_19242,_19244,_19246,_19300,_19316,_19290,_19320,_19252,_19324,true(_19418))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_traverse_conj_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_traverse_conj_6__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var7 ;
local_aregs[2] = F(simple_analyzer.s42,var1.Deref(),var8,var9,F(simple_analyzer.s91,F(simple_analyzer.s43,F(simple_analyzer.s11,var8.Deref(),var9.Deref()),var10),var3.Deref(),var11,F(simple_analyzer.s44,simple_analyzer.s99,var1.Deref(),var10.Deref(),var12,F(simple_analyzer.s44,simple_analyzer.s48,var1.Deref(),var10.Deref(),var13,F(simple_analyzer.s93,var2.Deref(),var11.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var13.Deref(),var14,var12.Deref(),var15,var7.Deref(),var16,F(simple_analyzer.s96,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_varset_2::exec_static ;}
}


class pred_traverse_conj_11 extends Code {

/*

traverse_conj(true,_20094,_20094,_20098,_20098,_20102,_20102,_20106,_20106,_20110,_20110,_20200):-true(_20200).
traverse_conj((_20410,_20412),_20418,_20420,_20422,_20424,_20426,_20428,_20430,_20432,_20434,_20436,_20612):-varset(_20410,_20442,update_goal(_20410,_20442,_20418,_20452,_20422,_20456,_20426,_20460,_20430,_20464,_20434,_20468,unionv(_20442,_20468,_20476,traverse_conj(_20412,_20452,_20420,_20456,_20424,_20460,_20428,_20464,_20432,_20476,_20436,true(_20612))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
Term aregs[] = mach.RegPull(11);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_traverse_conj_11__1(mach); }
public static Function<PrologMachine,Function> exec_pred_traverse_conj_11__1(PrologMachine mach){ mach.FillAlternative(pred_traverse_conj_11::exec_pred_traverse_conj_11__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s96))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_traverse_conj_11__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s7,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var11))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var12))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var13 ;
local_aregs[2] = F(simple_analyzer.s104,var1.Deref(),var13.Deref(),var3.Deref(),var14,var5.Deref(),var15,var7.Deref(),var16,var9.Deref(),var17,var11.Deref(),var18,F(simple_analyzer.s100,var13.Deref(),var18.Deref(),var19,F(simple_analyzer.s93,var2.Deref(),var14.Deref(),var4.Deref(),var15.Deref(),var6.Deref(),var16.Deref(),var8.Deref(),var17.Deref(),var10.Deref(),var19.Deref(),var12.Deref(),F(simple_analyzer.s96,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_varset_2::exec_static ;}
}


class pred_update_goal_12 extends Code {

/*

update_goal(_21302,_21304,_21306,_21306,_21310,_21310,_21314,_21316,_21318,_21320,_21322,_21322,_21518):-split_unify(_21302,_21330,_21332,var(_21330,nonvar(_21332,varset(_21332,_21346,subsetv(_21346,_21314,cut(1,set_command(add(_21330),_21314,_21316,set_command(sub(_21330),_21318,_21320,true(_21518))))))))).
update_goal(_22112,_22114,_22116,_22116,_22120,_22120,_22124,_22124,_22128,_22130,_22132,_22132,_22376):-split_unify(_22112,_22140,_22142,var(_22140,nonvar(_22142,inv(_22140,_22128,cut(1,diffv(_22114,_22132,_22164,diffv(_22164,_22124,_22172,set_command(add_set(_22172),_22128,_22184,set_command(sub(_22140),_22184,_22196,intersectv(_22114,_22132,_22204,set_command(sub_set(_22204),_22196,_22130,true(_22376)))))))))))).
update_goal(_23176,_23178,_23180,_23180,_23184,_23184,_23188,_23190,_23192,_23194,_23196,_23196,_23370):-split_unify(_23176,_23204,_23206,var(_23204,inv(_23204,_23188,cut(1,set_command(add_set(_23178),_23188,_23190,set_command(sub_set(_23178),_23192,_23194,true(_23370))))))).
update_goal(_23878,_23880,_23882,_23882,_23886,_23886,_23890,_23890,_23894,_23896,_23898,_23898,_24028):-unify_p(_23878,cut(1,set_command(sub_set(_23880),_23894,_23896,true(_24028)))).
update_goal(_24358,_24360,_24362,_24364,_24366,_24368,_24370,_24370,_24374,_24376,_24378,_24378,_24612):-call_p(_24358,cut(1,goal_dupset(_24358,_24390,var_args(_24358,_24396,functor(_24358,_24402,_24404,functor(_24408,_24402,_24404,create_new_call(1,_24404,_24370,_24396,_24390,_24374,_24378,_24358,_24408,update_table(_24402/_24404,_24408,_24362,_24364,_24366,_24368,set_command(sub_set(_24360),_24374,_24376,true(_24612)))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
Term aregs[] = mach.RegPull(12);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_update_goal_12__1(mach); }
public static Function<PrologMachine,Function> exec_pred_update_goal_12__1(PrologMachine mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var9.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var11 ;
local_aregs[3] = F(simple_analyzer.s106,var10.Deref(),F(simple_analyzer.s74,var11.Deref(),F(simple_analyzer.s109,var11.Deref(),var12,F(simple_analyzer.s89,var12.Deref(),var5.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s81,F(simple_analyzer.s20,var10.Deref()),var5.Deref(),var6.Deref(),F(simple_analyzer.s81,F(simple_analyzer.s87,var10.Deref()),var7.Deref(),var8.Deref(),F(simple_analyzer.s96,continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_split_unify_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_update_goal_12__2(PrologMachine mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var8.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = F(simple_analyzer.s106,var9.Deref(),F(simple_analyzer.s74,var10.Deref(),F(simple_analyzer.s60,var9.Deref(),var6.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s34,var2.Deref(),var8.Deref(),var11,F(simple_analyzer.s34,var11.Deref(),var5.Deref(),var12,F(simple_analyzer.s81,F(simple_analyzer.s21,var12.Deref()),var6.Deref(),var13,F(simple_analyzer.s81,F(simple_analyzer.s87,var9.Deref()),var13.Deref(),var14,F(simple_analyzer.s57,var2.Deref(),var8.Deref(),var15,F(simple_analyzer.s81,F(simple_analyzer.s88,var15.Deref()),var14.Deref(),var7.Deref(),F(simple_analyzer.s96,continuation))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_split_unify_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_update_goal_12__3(PrologMachine mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var9.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var11 ;
local_aregs[3] = F(simple_analyzer.s106,var10.Deref(),F(simple_analyzer.s60,var10.Deref(),var5.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s81,F(simple_analyzer.s21,var2.Deref()),var5.Deref(),var6.Deref(),F(simple_analyzer.s81,F(simple_analyzer.s88,var2.Deref()),var7.Deref(),var8.Deref(),F(simple_analyzer.s96,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_split_unify_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_update_goal_12__4(PrologMachine mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var8.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s81,F(simple_analyzer.s88,var2.Deref()),var6.Deref(),var7.Deref(),F(simple_analyzer.s96,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_unify_p_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_update_goal_12__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg11).Unify(var10.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s45,var1.Deref(),var11,F(simple_analyzer.s107,var1.Deref(),var12,F(simple_analyzer.s42,var1.Deref(),var13,var14,F(simple_analyzer.s42,var15,var13.Deref(),var14.Deref(),F(simple_analyzer.s32,simple_analyzer.posint1,var14.Deref(),var7.Deref(),var12.Deref(),var11.Deref(),var8.Deref(),var10.Deref(),var1.Deref(),var15.Deref(),F(simple_analyzer.s105,F(simple_analyzer.s11,var13.Deref(),var14.Deref()),var15.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),F(simple_analyzer.s81,F(simple_analyzer.s88,var2.Deref()),var8.Deref(),var9.Deref(),F(simple_analyzer.s96,continuation))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_call_p_1::exec_static ;}
}


class pred_update_table_6 extends Code {

/*

update_table(_3200/_3202,_3204,_3206,_3208,_3210,_3212,_3254):-table_command(get(_3200/_3202,_3224),_3206,_3226,lub_call(_3224,_3204,_3228,\==(_3224,_3228,cut(1,table_command(set(_3200/_3202,_3228),_3226,_3208,is(_3212,_3210+1,true(_3254))))))).
update_table(_3336/_3338,_3340,_3342,_3342,_3344,_3344,_3354):-call(_3354).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_update_table_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_update_table_6__1(PrologMachine mach){ mach.FillAlternative(pred_update_table_6::exec_pred_update_table_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s43,F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var8) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var9 ;
local_aregs[3] = F(simple_analyzer.s68,var8.Deref(),var3.Deref(),var10,F(simple_analyzer.s19,var8.Deref(),var10.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s91,F(simple_analyzer.s79,F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var10.Deref()),var9.Deref(),var5.Deref(),F(simple_analyzer.s62,var7.Deref(),F(simple_analyzer.s6,var6.Deref(),simple_analyzer.posint1),F(simple_analyzer.s96,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_table_command_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_update_table_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_create_new_call_9 extends Code {

/*

create_new_call(_3378,_3380,_3382,_3384,_3386,_3388,_3390,_3392,_3394,_3402):-smallerthan(_3380,_3378,cut(1,_3402)).
create_new_call(_3446,_3448,_3450,_3452,_3454,_3456,_3458,_3460,_3462,_3492):-smallerorequal(_3446,_3448,cut(1,arg(_3446,_3460,_3464,arg(_3446,_3462,_3466,ground_flag(_3464,_3450,_3468,membership_flag(_3464,_3452,_3470,membership_flag(_3464,_3454,_3472,membership_flag(_3464,_3456,_3474,membership_flag(_3464,_3458,_3476,create_argument(_3468,_3470,_3472,_3474,_3476,_3466,is(_3484,_3446+1,create_new_call(_3484,_3448,_3450,_3452,_3454,_3456,_3458,_3460,_3462,_3492)))))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_create_new_call_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_create_new_call_9__1(PrologMachine mach){ mach.FillAlternative(pred_create_new_call_9::exec_pred_create_new_call_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_create_new_call_9__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s25,var1.Deref(),var8.Deref(),var10,F(simple_analyzer.s25,var1.Deref(),var9.Deref(),var11,F(simple_analyzer.s49,var10.Deref(),var3.Deref(),var12,F(simple_analyzer.s71,var10.Deref(),var4.Deref(),var13,F(simple_analyzer.s71,var10.Deref(),var5.Deref(),var14,F(simple_analyzer.s71,var10.Deref(),var6.Deref(),var15,F(simple_analyzer.s71,var10.Deref(),var7.Deref(),var16,F(simple_analyzer.s31,var12.Deref(),var13.Deref(),var14.Deref(),var15.Deref(),var16.Deref(),var11.Deref(),F(simple_analyzer.s62,var17,F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),F(simple_analyzer.s32,var17.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_lub_3 extends Code {

/*

lub(unknown,_3652,_3652,_3660):-cut(1,_3660).
lub(_3684,unknown,_3684,_3692):-cut(1,_3692).
lub(any,_3716,any,_3724):-cut(1,_3724).
lub(_3748,any,any,_3756):-cut(1,_3756).
lub(uninit,uninit,uninit,_3786):-cut(1,_3786).
lub(ground,ground,ground,_3816):-cut(1,_3816).
lub(uninit,ground,any,_3846):-cut(1,_3846).
lub(ground,uninit,any,_3876):-cut(1,_3876).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lub_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lub_3__1(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s103))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__2(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s103))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__3(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__4(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__5(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__6(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__7(PrologMachine mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lub_3__8(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
}


class pred_bottom_1 extends Code {

/*

bottom(unknown,_3908):-call(_3908).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_bottom_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_bottom_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s103))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_create_argument_6 extends Code {

/*

create_argument(yes,_3922,_3924,_3926,_3928,ground,_3936):-cut(1,_3936).
create_argument(no,yes,no,yes,_3966,uninit,_3974):-cut(1,_3974).
create_argument(no,yes,no,_4004,no,uninit,_4012):-cut(1,_4012).
create_argument(no,yes,_4042,no,yes,any,_4050):-cut(1,_4050).
create_argument(no,yes,yes,_4080,_4082,any,_4090):-cut(1,_4090).
create_argument(no,no,_4120,_4122,_4124,any,_4132):-cut(1,_4132).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_create_argument_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_create_argument_6__1(PrologMachine mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_create_argument_6__2(PrologMachine mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_create_argument_6__3(PrologMachine mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_create_argument_6__4(PrologMachine mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_create_argument_6__5(PrologMachine mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_create_argument_6__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s24))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
}


class pred_lub_call_3 extends Code {

/*

lub_call(_4162,_4164,_4166,_4178):-functor(_4162,_4168,_4170,functor(_4164,_4168,_4170,functor(_4166,_4168,_4170,lub_call(1,_4170,_4162,_4164,_4166,_4178)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lub_call_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lub_call_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = F(simple_analyzer.s42,var2.Deref(),var4.Deref(),var5.Deref(),F(simple_analyzer.s42,var3.Deref(),var4.Deref(),var5.Deref(),F(simple_analyzer.s68,simple_analyzer.posint1,var5.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_lub_call_5 extends Code {

/*

lub_call(_4240,_4242,_4244,_4246,_4248,_4256):-smallerthan(_4242,_4240,cut(1,_4256)).
lub_call(_4292,_4294,_4296,_4298,_4300,_4322):-smallerorequal(_4292,_4294,cut(1,arg(_4292,_4296,_4302,arg(_4292,_4298,_4304,arg(_4292,_4300,_4306,lub(_4302,_4304,_4306,is(_4314,_4292+1,lub_call(_4314,_4294,_4296,_4298,_4300,_4322)))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lub_call_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lub_call_5__1(PrologMachine mach){ mach.FillAlternative(pred_lub_call_5::exec_pred_lub_call_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_lub_call_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s25,var1.Deref(),var3.Deref(),var6,F(simple_analyzer.s25,var1.Deref(),var4.Deref(),var7,F(simple_analyzer.s25,var1.Deref(),var5.Deref(),var8,F(simple_analyzer.s67,var6.Deref(),var7.Deref(),var8.Deref(),F(simple_analyzer.s62,var9,F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),F(simple_analyzer.s68,var9.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_bottom_call_2 extends Code {

/*

bottom_call(_4422/_4424,_4426,_4434):-functor(_4426,_4422,_4424,bottom_call(1,_4424,_4426,_4434)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_bottom_call_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_bottom_call_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = F(simple_analyzer.s27,simple_analyzer.posint1,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_bottom_call_3 extends Code {

/*

bottom_call(_4470,_4472,_4474,_4482):-smallerthan(_4472,_4470,cut(1,_4482)).
bottom_call(_4514,_4516,_4518,_4536):-smallerorequal(_4514,_4516,cut(1,bottom(_4520,arg(_4514,_4518,_4520,is(_4528,_4514+1,bottom_call(_4528,_4516,_4518,_4536)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_bottom_call_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_bottom_call_3__1(PrologMachine mach){ mach.FillAlternative(pred_bottom_call_3::exec_pred_bottom_call_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_bottom_call_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s26,var4,F(simple_analyzer.s25,var1.Deref(),var3.Deref(),var4.Deref(),F(simple_analyzer.s62,var5,F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),F(simple_analyzer.s27,var5.Deref(),var2.Deref(),var3.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_lattice_modes_call_3 extends Code {

/*

lattice_modes_call(_4604/_4606,_4614,(_4610:-_4612),_4630):-functor(_4610,_4604,_4606,get(_4614,_4604/_4606,_4622,lattice_modes_call(1,_4606,_4622,_4610,_4612,true,_4630))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lattice_modes_call_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lattice_modes_call_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(simple_analyzer.s12,var4,var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = F(simple_analyzer.s43,var3.Deref(),F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var6,F(simple_analyzer.s65,simple_analyzer.posint1,var2.Deref(),var6.Deref(),var4.Deref(),var5.Deref(),simple_analyzer.s96,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_lattice_modes_call_6 extends Code {

/*

lattice_modes_call(_4684,_4686,_4688,_4690,_4692,_4692,_4700):-smallerthan(_4686,_4684,cut(1,_4700)).
lattice_modes_call(_4738,_4740,_4742,_4744,_4746,_4748,_4770):-smallerorequal(_4738,_4740,cut(1,arg(_4738,_4742,_4750,arg(_4738,_4744,_4752,lattice_modes_arg(_4750,_4752,_4746,_4754,is(_4762,_4738+1,lattice_modes_call(_4762,_4740,_4742,_4744,_4754,_4748,_4770))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lattice_modes_call_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lattice_modes_call_6__1(PrologMachine mach){ mach.FillAlternative(pred_lattice_modes_call_6::exec_pred_lattice_modes_call_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_lattice_modes_call_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s25,var1.Deref(),var3.Deref(),var7,F(simple_analyzer.s25,var1.Deref(),var4.Deref(),var8,F(simple_analyzer.s64,var7.Deref(),var8.Deref(),var5.Deref(),var9,F(simple_analyzer.s62,var10,F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),F(simple_analyzer.s65,var10.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var9.Deref(),var6.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_lattice_modes_arg_4 extends Code {

/*

lattice_modes_arg(uninit,_4866,(uninit(_4866),_4872),_4872,_4880):-cut(1,_4880).
lattice_modes_arg(ground,_4908,(ground(_4908),_4914),_4914,_4922):-cut(1,_4922).
lattice_modes_arg(_4948,_4950,_4952,_4952,_4962):-call(_4962).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lattice_modes_arg_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lattice_modes_arg_4__1(PrologMachine mach){ mach.FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s99))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(simple_analyzer.s7,F(simple_analyzer.s99,var1.Deref()),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lattice_modes_arg_4__2(PrologMachine mach){ mach.FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(simple_analyzer.s7,F(simple_analyzer.s48,var1.Deref()),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lattice_modes_arg_4__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_get_3 extends Code {

/*

get(node(_4984,_4986,_4988,_4990),_4992,_4994,_5002):-get(_4984,_4986,_4988,_4990,_4992,_4994,_5002).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_get_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_get_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s73,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_get_6::exec_static ;}
}


class pred_get_6 extends Code {

/*

get(_5036,_5038,_5040,_5042,_5044,_5038,_5052):-unify(_5036,_5044,cut(1,_5052)).
get(_5090,_5092,_5094,_5096,_5098,_5100,_5110):-compare(_5102,_5098,_5090,get(_5102,_5098,_5100,_5094,_5096,_5110)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_get_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_get_6__1(PrologMachine mach){ mach.FillAlternative(pred_get_6::exec_pred_get_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_get_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s43,var7.Deref(),var5.Deref(),var6.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_get_5 extends Code {

/*

get(<,_5158,_5160,_5162,_5164,_5172):-get(_5162,_5158,_5160,_5172).
get(>,_5204,_5206,_5208,_5210,_5218):-get(_5210,_5204,_5206,_5218).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_get_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_get_5__1(PrologMachine mach){ mach.FillAlternative(pred_get_5::exec_pred_get_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_get_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_get_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_get_3::exec_static ;}
}


class pred_set_4 extends Code {

/*

set(leaf,_5252,_5254,node(_5252,_5254,leaf,leaf),_5268):-call(_5268).
set(node(_5290,_5292,_5294,_5296),_5308,_5310,node(_5290,_5302,_5304,_5306),_5320):-compare(_5312,_5308,_5290,set_2(_5312,_5308,_5310,_5292,_5294,_5296,_5302,_5304,_5306,_5320)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_set_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_set_4__1(PrologMachine mach){ mach.FillAlternative(pred_set_4::exec_pred_set_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s66))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(simple_analyzer.s73,var1.Deref(),var2.Deref(),simple_analyzer.s66,simple_analyzer.s66)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_set_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s73,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(simple_analyzer.s73,var1.Deref(),var7,var8,var9)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var10 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s80,var10.Deref(),var5.Deref(),var6.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_set_2_9 extends Code {

/*

set_2(<,_5372,_5374,_5376,_5378,_5380,_5376,_5382,_5380,_5390):-set(_5378,_5372,_5374,_5382,_5390).
set_2(=,_5432,_5434,_5436,_5438,_5440,_5434,_5438,_5440,_5450):-call(_5450).
set_2(>,_5480,_5482,_5484,_5486,_5488,_5484,_5486,_5490,_5498):-set(_5488,_5480,_5482,_5490,_5498).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_set_2_9__1(mach); }
public static Function<PrologMachine,Function> exec_pred_set_2_9__1(PrologMachine mach){ mach.FillAlternative(pred_set_2_9::exec_pred_set_2_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_set_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_set_2_9__2(PrologMachine mach){ mach.FillAlternative(pred_set_2_9::exec_pred_set_2_9__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var5.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_set_2_9__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_set_4::exec_static ;}
}


class pred_seal_1 extends Code {

/*

seal(leaf,_5548):-call(_5548).
seal(node(_5564,_5566,_5568,_5570),_5578):-seal(_5568,seal(_5570,_5578)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_seal_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_seal_1__1(PrologMachine mach){ mach.FillAlternative(pred_seal_1::exec_pred_seal_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s66))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_seal_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s73,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(simple_analyzer.s78,var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_seal_1::exec_static ;}
}


class pred_membership_flag_3 extends Code {

/*

membership_flag(_5604,_5606,yes,_5614):-inv(_5604,_5606,cut(1,_5614)).
membership_flag(_5646,_5648,no,_5658):-call(_5658).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_membership_flag_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_membership_flag_3__1(PrologMachine mach){ mach.FillAlternative(pred_membership_flag_3::exec_pred_membership_flag_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_inv_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_membership_flag_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_ground_flag_3 extends Code {

/*

ground_flag(_5676,_5678,yes,_5688):-varset(_5676,_5680,subsetv(_5680,_5678,cut(1,_5688))).
ground_flag(_5728,_5730,no,_5740):-call(_5740).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ground_flag_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ground_flag_3__1(PrologMachine mach){ mach.FillAlternative(pred_ground_flag_3::exec_pred_ground_flag_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s110))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(simple_analyzer.s89,var3.Deref(),var2.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_varset_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_ground_flag_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s72))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_get_entry_modes_4 extends Code {

/*

get_entry_modes(_5758,_5760,_5762,_5764,_5778):-functor(_5760,_5766,_5768,get_entry_modes(_5758,1,_5768,_5760,_5762,_5770,sort(_5770,_5764,_5778))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_get_entry_modes_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_get_entry_modes_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = var6 ;
local_aregs[3] = F(simple_analyzer.s44,var1.Deref(),simple_analyzer.posint1,var6.Deref(),var2.Deref(),var3.Deref(),var7,F(simple_analyzer.s84,var7.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_get_entry_modes_6 extends Code {

/*

get_entry_modes(_5832,_5834,_5836,_5838,_5840,[],_5848):-smallerthan(_5836,_5834,cut(1,_5848)).
get_entry_modes(_5892,_5894,_5896,_5898,_5900,[_5888|_5890],_5916):-smallerorequal(_5894,_5896,arg(_5894,_5900,_5892,cut(1,arg(_5894,_5898,_5888,is(_5908,_5894+1,get_entry_modes(_5892,_5908,_5896,_5898,_5900,_5890,_5916)))))).
get_entry_modes(_5998,_6000,_6002,_6004,_6006,_6008,_6024):-smallerorequal(_6000,_6002,cut(1,is(_6016,_6000+1,get_entry_modes(_5998,_6016,_6002,_6004,_6006,_6008,_6024)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_get_entry_modes_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_get_entry_modes_6__1(PrologMachine mach){ mach.FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_get_entry_modes_6__2(PrologMachine mach){ mach.FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var6,var7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(simple_analyzer.s25,var2.Deref(),var5.Deref(),var1.Deref(),F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s25,var2.Deref(),var4.Deref(),var6.Deref(),F(simple_analyzer.s62,var8,F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1),F(simple_analyzer.s44,var1.Deref(),var8.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var7.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_get_entry_modes_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(simple_analyzer.s0, new HeapChoice(mach.CUTB),F(simple_analyzer.s62,var7,F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1),F(simple_analyzer.s44,var1.Deref(),var7.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_var_args_2 extends Code {

/*

var_args(_6086,_6088,_6102):-functor(_6086,_6090,_6092,filter_vars(_6092,_6086,_6094,sort(_6094,_6088,_6102))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_var_args_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_var_args_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = var4 ;
local_aregs[3] = F(simple_analyzer.s40,var4.Deref(),var1.Deref(),var5,F(simple_analyzer.s84,var5.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_filter_vars_3 extends Code {

/*

filter_vars(_6146,_6148,_6150,_6158):-filter_vars(_6146,_6148,_6150,[],_6158).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_filter_vars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_filter_vars_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_filter_vars_4::exec_static ;}
}


class pred_sym_dcg_arrow_2 extends Code {

/*

-->(filter_vars(_6190,_6192),({_6190=<0},!),_6218):-call(_6218).
-->(filter_vars(_6236,_6238),({_6236>0},!,{arg(_6236,_6238,_6256)},filter_vars_arg(_6236,_6238,_6256)),_6296):-call(_6296).
-->(filter_vars_arg(_6314,_6316,_6318),({var(_6318)},!,[_6318],{_6342 is _6314-1},filter_vars(_6342,_6316)),_6388):-call(_6388).
-->(filter_vars_arg(_6406,_6408,_6410),({nonvar(_6410)},!,{_6428 is _6406-1},filter_vars(_6428,_6408)),_6468):-call(_6468).
-->(filter_dups([]),!,_6758):-call(_6758).
-->(filter_dups([_6776-_6778,_6788-_6790,_6800-_6802|_6808]),({_6776==_6788,_6788==_6800},!,filter_dups([_6788-_6840,_6800-_6852|_6808])),_6884):-call(_6884).
-->(filter_dups([_6902-_6904,_6914-_6916|_6922]),({_6902==_6914},!,[_6902],filter_dups(_6922)),_6974):-call(_6974).
-->(filter_dups([_6992-_6994|_7000]),(!,filter_dups(_7000)),_7024):-call(_7024).
-->(varbag(_8930),({var(_8930)},!,[_8930]),_8966):-call(_8966).
-->(varbag(_8984),({nonvar(_8984),!,functor(_8984,_8994,_8996)},varbag(_8984,1,_8996)),_9036):-call(_9036).
-->(varbag(_9054,_9056,_9058),({_9056>_9058},!),_9084):-call(_9084).
-->(varbag(_9102,_9104,_9106),({_9104=<_9106},!,{arg(_9104,_9102,_9124)},varbag(_9124),{_9142 is _9104+1},varbag(_9102,_9142,_9106)),_9196):-call(_9196).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sym_dcg_arrow_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__1(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s40,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s16,var1.Deref(),simple_analyzer.posint0)),simple_analyzer.s1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__2(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s40,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s18,var1.Deref(),simple_analyzer.posint0)),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s25,var1.Deref(),var2.Deref(),var3)),F(simple_analyzer.s41,var1.Deref(),var2.Deref(),var3.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__3(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s41,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s106,var3.Deref())),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s7,F(simple_analyzer.s10,var3.Deref(),Const.Nil),F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s62,var4,F(simple_analyzer.s8,var1.Deref(),simple_analyzer.posint1))),F(simple_analyzer.s40,var4.Deref(),var2.Deref())))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__4(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s41,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s74,var3.Deref())),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s62,var4,F(simple_analyzer.s8,var1.Deref(),simple_analyzer.posint1))),F(simple_analyzer.s40,var4.Deref(),var2.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__5(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(simple_analyzer.s39,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__6(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s39,F(simple_analyzer.s10,F(simple_analyzer.s8,var1,var2),F(simple_analyzer.s10,F(simple_analyzer.s8,var3,var4),F(simple_analyzer.s10,F(simple_analyzer.s8,var5,var6),var7))))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s7,F(simple_analyzer.s17,var1.Deref(),var3.Deref()),F(simple_analyzer.s17,var3.Deref(),var5.Deref()))),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s39,F(simple_analyzer.s10,F(simple_analyzer.s8,var3.Deref(),var8),F(simple_analyzer.s10,F(simple_analyzer.s8,var5.Deref(),var9),var7.Deref())))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__7(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s39,F(simple_analyzer.s10,F(simple_analyzer.s8,var1,var2),F(simple_analyzer.s10,F(simple_analyzer.s8,var3,var4),var5)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s17,var1.Deref(),var3.Deref())),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s7,F(simple_analyzer.s10,var1.Deref(),Const.Nil),F(simple_analyzer.s39,var5.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__8(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s39,F(simple_analyzer.s10,F(simple_analyzer.s8,var1,var2),var3))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s39,var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__9(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s108,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s106,var1.Deref())),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s10,var1.Deref(),Const.Nil)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__10(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s108,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s7,F(simple_analyzer.s74,var1.Deref()),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s42,var1.Deref(),var2,var3)))),F(simple_analyzer.s108,var1.Deref(),simple_analyzer.posint1,var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__11(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s108,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s18,var2.Deref(),var3.Deref())),simple_analyzer.s1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__12(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s108,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s16,var2.Deref(),var3.Deref())),F(simple_analyzer.s7,simple_analyzer.s1,F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s25,var2.Deref(),var1.Deref(),var4)),F(simple_analyzer.s7,F(simple_analyzer.s108,var4.Deref()),F(simple_analyzer.s7,F(simple_analyzer.s111,F(simple_analyzer.s62,var5,F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1))),F(simple_analyzer.s108,var1.Deref(),var5.Deref(),var3.Deref()))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_goal_dupset_2 extends Code {

/*

goal_dupset(_6484,_6486,_6496):-goal_dupset_varbag(_6484,_6486,_6488,_6496).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_goal_dupset_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_goal_dupset_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_goal_dupset_varbag_3::exec_static ;}
}


class pred_goal_dupset_varset_3 extends Code {

/*

goal_dupset_varset(_6522,_6524,_6526,_6536):-goal_dupset_varbag(_6522,_6524,_6528,sort(_6528,_6526,_6536)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_goal_dupset_varset_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_goal_dupset_varset_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = F(simple_analyzer.s84,var4.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_goal_dupset_varbag_3::exec_static ;}
}


class pred_goal_dupset_varbag_3 extends Code {

/*

goal_dupset_varbag(_6572,_6574,_6576,_6588):-varbag(_6572,_6576,make_key(_6576,_6578,keysort(_6578,_6580,filter_dups(_6580,_6574,_6588)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_goal_dupset_varbag_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_goal_dupset_varbag_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(simple_analyzer.s70,var3.Deref(),var4,F(simple_analyzer.s63,var4.Deref(),var5,F(simple_analyzer.s39,var5.Deref(),var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_varbag_2::exec_static ;}
}


class pred_make_key_2 extends Code {

/*

make_key([],[],_6646):-call(_6646).
make_key([_6664|_6666],[_6664-dummy|_6678],_6686):-make_key(_6666,_6678,_6686).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_make_key_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_make_key_2__1(PrologMachine mach){ mach.FillAlternative(pred_make_key_2::exec_pred_make_key_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_make_key_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s10,F(simple_analyzer.s8,var1.Deref(),simple_analyzer.s37),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_make_key_2::exec_static ;}
}


class pred_filter_dups_2 extends Code {

/*

filter_dups(_6710,_6712,_6720):-filter_dups(_6710,_6712,[],_6720).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_filter_dups_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_filter_dups_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_filter_dups_3::exec_static ;}
}


class pred_set_command_3 extends Code {

/*

set_command(sub(_7042),_7044,_7046,_7060):-diffv(_7044,[_7042],_7046,_7060).
set_command(add(_7090),_7092,_7094,_7102):-includev(_7090,_7092,_7094,_7102).
set_command(sub_set(_7132),_7134,_7136,_7144):-diffv(_7134,_7132,_7136,_7144).
set_command(add_set(_7174),_7176,_7178,_7186):-unionv(_7174,_7176,_7178,_7186).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_set_command_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_set_command_3__1(PrologMachine mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s87,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = F(simple_analyzer.s10,var1.Deref(),Const.Nil) ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_diffv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_set_command_3__2(PrologMachine mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s20,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_includev_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_set_command_3__3(PrologMachine mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s88,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_diffv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_set_command_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s21,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_unionv_3::exec_static ;}
}


class pred_table_command_3 extends Code {

/*

table_command(get(_7216,_7218),_7220,_7220,_7228):-get(_7220,_7216,_7218,_7228).
table_command(set(_7258,_7260),_7262,_7264,_7272):-set(_7262,_7258,_7260,_7264,_7272).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_table_command_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_table_command_3__1(PrologMachine mach){ mach.FillAlternative(pred_table_command_3::exec_pred_table_command_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s43,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_get_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_table_command_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s79,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_set_4::exec_static ;}
}


class pred_inv_2 extends Code {

/*

inv(_7308,[_7304|_7306],_7318):-compare(_7310,_7308,_7304,inv_2(_7310,_7308,_7306,_7318)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_inv_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_inv_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s10,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = F(simple_analyzer.s61,var4.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_inv_2_3 extends Code {

/*

inv_2(=,_7354,_7356,_7366):-call(_7366).
inv_2(>,_7384,_7386,_7394):-inv(_7384,_7386,_7394).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_inv_2_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_inv_2_3__1(PrologMachine mach){ mach.FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_inv_2_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_inv_2::exec_static ;}
}


class pred_intersectv_3 extends Code {

/*

intersectv([],_7420,[],_7430):-call(_7430).
intersectv([_7450|_7452],_7454,_7456,_7464):-intersectv_2(_7454,_7450,_7452,_7456,_7464).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_intersectv_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_intersectv_3__1(PrologMachine mach){ mach.FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_intersectv_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_intersectv_2_4::exec_static ;}
}


class pred_intersectv_2_4 extends Code {

/*

intersectv_2([],_7494,_7496,[],_7506):-call(_7506).
intersectv_2([_7528|_7530],_7532,_7534,_7536,_7546):-compare(_7538,_7532,_7528,intersectv_3(_7538,_7532,_7534,_7528,_7530,_7536,_7546)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_intersectv_2_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_intersectv_2_4__1(PrologMachine mach){ mach.FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_intersectv_2_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s59,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_intersectv_3_6 extends Code {

/*

intersectv_3(<,_7592,_7594,_7596,_7598,_7600,_7608):-intersectv_2(_7594,_7596,_7598,_7600,_7608).
intersectv_3(=,_7646,_7650,_7652,_7654,[_7646|_7648],_7662):-intersectv(_7650,_7654,_7648,_7662).
intersectv_3(>,_7696,_7698,_7700,_7702,_7704,_7712):-intersectv_2(_7702,_7696,_7698,_7704,_7712).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_intersectv_3_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_intersectv_3_6__1(PrologMachine mach){ mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_intersectv_2_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_intersectv_3_6__2(PrologMachine mach){ mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_intersectv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_intersectv_3_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_intersectv_2_4::exec_static ;}
}


class pred_diffv_3 extends Code {

/*

diffv([],_7748,[],_7758):-call(_7758).
diffv([_7778|_7780],_7782,_7784,_7792):-diffv_2(_7782,_7778,_7780,_7784,_7792).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_diffv_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_diffv_3__1(PrologMachine mach){ mach.FillAlternative(pred_diffv_3::exec_pred_diffv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_diffv_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_diffv_2_4::exec_static ;}
}


class pred_diffv_2_4 extends Code {

/*

diffv_2([],_7824,_7828,[_7824],_7838):-call(_7838).
diffv_2([_7860|_7862],_7864,_7866,_7868,_7878):-compare(_7870,_7864,_7860,diffv_3(_7870,_7864,_7866,_7860,_7862,_7868,_7878)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_diffv_2_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_diffv_2_4__1(PrologMachine mach){ mach.FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(simple_analyzer.s10,var1.Deref(),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_diffv_2_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s36,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_diffv_3_6 extends Code {

/*

diffv_3(<,_7926,_7930,_7932,_7934,[_7926|_7928],_7948):-diffv(_7930,[_7932|_7934],_7928,_7948).
diffv_3(=,_7982,_7984,_7986,_7988,_7990,_7998):-diffv(_7984,_7988,_7990,_7998).
diffv_3(>,_8032,_8034,_8036,_8038,_8040,_8048):-diffv_2(_8038,_8032,_8034,_8040,_8048).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_diffv_3_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_diffv_3_6__1(PrologMachine mach){ mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = F(simple_analyzer.s10,var3.Deref(),var4.Deref()) ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_diffv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_diffv_3_6__2(PrologMachine mach){ mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_diffv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_diffv_3_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_diffv_2_4::exec_static ;}
}


class pred_unionv_3 extends Code {

/*

unionv([],_8084,_8084,_8094):-call(_8094).
unionv([_8114|_8116],_8118,_8120,_8128):-unionv_2(_8118,_8114,_8116,_8120,_8128).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_unionv_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_unionv_3__1(PrologMachine mach){ mach.FillAlternative(pred_unionv_3::exec_pred_unionv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_unionv_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_unionv_2_4::exec_static ;}
}


class pred_unionv_2_4 extends Code {

/*

unionv_2([],_8160,_8162,[_8160|_8162],_8172):-call(_8172).
unionv_2([_8194|_8196],_8198,_8200,_8202,_8212):-compare(_8204,_8198,_8194,unionv_3(_8204,_8198,_8200,_8194,_8196,_8202,_8212)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_unionv_2_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_unionv_2_4__1(PrologMachine mach){ mach.FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(simple_analyzer.s10,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_unionv_2_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s102,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_unionv_3_6 extends Code {

/*

unionv_3(<,_8260,_8264,_8266,_8268,[_8260|_8262],_8276):-unionv_2(_8264,_8266,_8268,_8262,_8276).
unionv_3(=,_8314,_8318,_8320,_8322,[_8314|_8316],_8330):-unionv(_8318,_8322,_8316,_8330).
unionv_3(>,_8370,_8372,_8366,_8374,[_8366|_8368],_8382):-unionv_2(_8374,_8370,_8372,_8368,_8382).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_unionv_3_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_unionv_3_6__1(PrologMachine mach){ mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_unionv_2_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_unionv_3_6__2(PrologMachine mach){ mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_unionv_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_unionv_3_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(F(simple_analyzer.s10,var3.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Function<PrologMachine,Function>)pred_unionv_2_4::exec_static ;}
}


class pred_includev_3 extends Code {

/*

includev(_8418,_8420,_8422,_8430):-includev_2(_8420,_8418,_8422,_8430).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_includev_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_includev_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_includev_2_3::exec_static ;}
}


class pred_includev_2_3 extends Code {

/*

includev_2([],_8460,[_8460],_8472):-call(_8472).
includev_2([_8492|_8494],_8496,_8498,_8508):-compare(_8500,_8496,_8492,includev_3(_8500,_8496,_8492,_8494,_8498,_8508)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_includev_2_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_includev_2_3__1(PrologMachine mach){ mach.FillAlternative(pred_includev_2_3::exec_pred_includev_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(simple_analyzer.s10,var1.Deref(),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_includev_2_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(simple_analyzer.s52,var5.Deref(),var3.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_includev_3_5 extends Code {

/*

includev_3(<,_8552,_8558,_8560,[_8552,_8558|_8560],_8570):-call(_8570).
includev_3(=,_8598,_8594,_8596,[_8594|_8596],_8608):-call(_8608).
includev_3(>,_8636,_8632,_8638,[_8632|_8634],_8646):-includev_2(_8638,_8636,_8634,_8646).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_includev_3_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_includev_3_5__1(PrologMachine mach){ mach.FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(simple_analyzer.s10,var1.Deref(),F(simple_analyzer.s10,var2.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_includev_3_5__2(PrologMachine mach){ mach.FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(simple_analyzer.s10,var2.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_includev_3_5__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(F(simple_analyzer.s10,var2.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_includev_2_3::exec_static ;}
}


class pred_subsetv_2 extends Code {

/*

subsetv([],_8678,_8688):-call(_8688).
subsetv([_8706|_8708],[_8712|_8714],_8724):-compare(_8716,_8706,_8712,subsetv_2(_8716,_8706,_8708,_8714,_8724)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_subsetv_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_subsetv_2__1(PrologMachine mach){ mach.FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_subsetv_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(simple_analyzer.s10,var3,var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = F(simple_analyzer.s90,var5.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_subsetv_2_4 extends Code {

/*

subsetv_2(=,_8762,_8764,_8766,_8774):-subsetv(_8764,_8766,_8774).
subsetv_2(>,_8802,_8804,_8806,_8820):-subsetv([_8802|_8804],_8806,_8820).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_subsetv_2_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_subsetv_2_4__1(PrologMachine mach){ mach.FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_subsetv_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_subsetv_2_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s10,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_subsetv_2::exec_static ;}
}


class pred_varset_2 extends Code {

/*

varset(_8848,_8850,_8860):-varbag(_8848,_8852,sort(_8852,_8850,_8860)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_varset_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_varset_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(simple_analyzer.s84,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varbag_2::exec_static ;}
}


class pred_varbag_2 extends Code {

/*

varbag(_8892,_8894,_8902):-varbag(_8892,_8894,[],_8902).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_varbag_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_varbag_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varbag_3::exec_static ;}
}


class pred_unify_p_1 extends Code {

/*

unify_p(_9214=_9216,_9226):-call(_9226).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_unify_p_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_unify_p_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s15,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_call_p_1 extends Code {

/*

call_p(_9240,_9252):-not(unify_p(_9240),_9252).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_call_p_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_call_p_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(simple_analyzer.s98,var1.Deref()) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_not_1::exec_static ;}
}


class pred_split_unify_3 extends Code {

/*

split_unify(_9274=_9276,_9274,_9276,_9286):-call(_9286).
split_unify(_9306=_9308,_9308,_9306,_9318):-call(_9318).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_split_unify_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_split_unify_3__1(PrologMachine mach){ mach.FillAlternative(pred_split_unify_3::exec_pred_split_unify_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s15,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_split_unify_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(simple_analyzer.s15,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


