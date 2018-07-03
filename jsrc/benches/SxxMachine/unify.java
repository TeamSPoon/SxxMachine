package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class unify /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("!") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern(",") ;
final static Const s4 = Data.Intern("-") ;
final static Const s5 = Data.Intern("-->") ;
final static Const s6 = Data.Intern(".") ;
final static Const s7 = Data.Intern("/") ;
final static Const s8 = Data.Intern(":-") ;
final static Const s9 = Data.Intern("<") ;
final static Const s10 = Data.Intern("=") ;
final static Const s11 = Data.Intern("=<") ;
final static Const s12 = Data.Intern(">") ;
final static Const s13 = Data.Intern("\\+") ;
final static Const s14 = Data.Intern("^") ;
final static Const s_add = Data.Intern("add") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_atomic = Data.Intern("atomic") ;
final static Const s_block = Data.Intern("block") ;
final static Const s_block_args = Data.Intern("block_args") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_compare = Data.Intern("compare") ;
final static Const s_cons = Data.Intern("cons") ;
final static Const s_deref = Data.Intern("deref") ;
final static Const s_equal = Data.Intern("equal") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_h = Data.Intern("h") ;
final static Const s_in_2 = Data.Intern("in_2") ;
final static Const s_incl = Data.Intern("incl") ;
final static Const s_incl_2 = Data.Intern("incl_2") ;
final static Const s_incl_3 = Data.Intern("incl_3") ;
final static Const s_init = Data.Intern("init") ;
final static Const s_init_var = Data.Intern("init_var") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_jump = Data.Intern("jump") ;
final static Const s_label = Data.Intern("label") ;
final static Const s_last = Data.Intern("last") ;
final static Const s_main = Data.Intern("main") ;
final static Const s_make_slots = Data.Intern("make_slots") ;
final static Const s_make_word = Data.Intern("make_word") ;
final static Const s_move = Data.Intern("move") ;
final static Const s_my_compound = Data.Intern("my_compound") ;
final static Const s_myin = Data.Intern("myin") ;
final static Const s_nonlast = Data.Intern("nonlast") ;
final static Const s_nonvar = Data.Intern("nonvar") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_size = Data.Intern("size") ;
final static Const s_size_args = Data.Intern("size_args") ;
final static Const s_structure = Data.Intern("structure") ;
final static Const s_switch = Data.Intern("switch") ;
final static Const s_tatm = Data.Intern("tatm") ;
final static Const s_termtag = Data.Intern("termtag") ;
final static Const s_tlst = Data.Intern("tlst") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_trail = Data.Intern("trail") ;
final static Const s_tstr = Data.Intern("tstr") ;
final static Const s_tvar = Data.Intern("tvar") ;
final static Const s_u = Data.Intern("u") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_unify_arg = Data.Intern("unify_arg") ;
final static Const s_unify_args = Data.Intern("unify_args") ;
final static Const s_unify_block = Data.Intern("unify_block") ;
final static Const s_unify_readmode = Data.Intern("unify_readmode") ;
final static Const s_unify_var = Data.Intern("unify_var") ;
final static Const s_unify_writemode = Data.Intern("unify_writemode") ;
final static Const s_uninit = Data.Intern("uninit") ;
final static Const s_var = Data.Intern("var") ;
final static Const s69 = Data.Intern("{}") ;
final static Int negint1 = Data.Number(-1L) ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_main_1 = PredTable.Register("main",1, new pred_main_1());
final static Operation reg_u_4 = PredTable.Register("u",4, new pred_u_4());
final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->",2, new pred_$002D$002D$003E_2());
final static Operation reg_make_word_3 = PredTable.Register("make_word",3, new pred_make_word_3());
final static Operation reg_add_3 = PredTable.Register("add",3, new pred_add_3());
final static Operation reg_myin_2 = PredTable.Register("myin",2, new pred_myin_2());
final static Operation reg_in_2_3 = PredTable.Register("in_2",3, new pred_in_2_3());
final static Operation reg_incl_3 = PredTable.Register("incl",3, new pred_incl_3());
final static Operation reg_incl_2_3 = PredTable.Register("incl_2",3, new pred_incl_2_3());
final static Operation reg_incl_3_5 = PredTable.Register("incl_3",5, new pred_incl_3_5());
final static Operation reg_my_compound_1 = PredTable.Register("my_compound",1, new pred_my_compound_1());
final static Operation reg_cons_1 = PredTable.Register("cons",1, new pred_cons_1());
final static Operation reg_structure_1 = PredTable.Register("structure",1, new pred_structure_1());
final static Operation reg_termtag_2 = PredTable.Register("termtag",2, new pred_termtag_2());
public static class pred_top_0 extends Code {

/*

top(_14876):-main(_14854,_14876).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_top_0__1(mach); }
public static Operation exec_pred_top_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_main_1::exec_static ;}
}


public static class pred_main_1 extends Code {

/*

main(_14940,_15010):-u(_14956,[1,_14950],[_14956],_14968,size(_14968,0,_14940,_15010)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_main_1__1(mach); }
public static Operation exec_pred_main_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = Data.F(unify.s6,unify.posint1,Data.F(unify.s6,var3,Const.Nil)) ;
local_aregs[2] = Data.F(unify.s6,var2.Deref(),Const.Nil) ;
local_aregs[3] = var4 ;
local_aregs[4] = Data.F(unify.s_size,var4.Deref(),unify.posint0,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_u_4::exec_static ;}
}


public static class pred_u_4 extends Code {

/*

u(_15194,_15196,_15198,_15200,_15260):-unify(_15194,_15196,_15198,_15210,_15200,[],_15260).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_u_4__1(mach); }
public static Operation exec_pred_u_4__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var5 ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = Const.Nil ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_unify_6::exec_static ;}
}


public static class pred_$002D$002D$003E_2 extends Code {

/*

-->(unify(_15438,_15440,_15442,_15444),({\+myin(_15438,_15442)},!,uninit(_15438,_15440,_15442,_15444)),_15508):-call(_15508).
-->(unify(_15592,_15594,_15596,_15598),({myin(_15592,_15596)},!,init(_15592,_15594,_15596,_15598,nonlast,_15622)),_15662):-call(_15662).
-->(uninit(_15746,_15748,_15750,_15752),({my_compound(_15748)},!,[move(_15764^h,_15746)],{termtag(_15748,_15764)},unify_block(nonlast,_15748,_15796,_15750,_15800,_15802),{incl(_15746,_15800,_15752)}),_15872):-call(_15872).
-->(uninit(_15956,_15958,_15960,_15962),({atomic(_15958)},!,[move(tatm^_15958,_15956)],{incl(_15956,_15960,_15962)}),_16046):-call(_16046).
-->(uninit(_16130,_16132,_16134,_16136),({var(_16132)},!,unify_var(_16130,_16132,_16134,_16136)),_16194):-call(_16194).
-->(init(_16278,_16280,_16282,_16284,_16286,_16288),({nonvar(_16280)},!,{termtag(_16280,_16302)},[deref(_16278),switch(_16302,_16278,[trail(_16278)|_16326],_16336,fail)],{unify_writemode(_16278,_16280,_16282,_16286,_16288,_16326,[])},{unify_readmode(_16278,_16280,_16282,_16284,_16288,_16336,[])}),_16442):-call(_16442).
-->(init(_16526,_16528,_16530,_16532,_16534,_16536),({var(_16528)},!,unify_var(_16526,_16528,_16530,_16532)),_16594):-call(_16594).
-->(unify_var(_16678,_16680,_16682,_16682),({myin(_16678,_16682),myin(_16680,_16682)},!,[unify(_16678,_16680,fail)]),_16760):-call(_16760).
-->(unify_var(_16844,_16846,_16848,_16850),({myin(_16844,_16848),\+myin(_16846,_16848)},!,[move(_16844,_16846)],{incl(_16846,_16848,_16850)}),_16946):-call(_16946).
-->(unify_var(_17030,_17032,_17034,_17036),({\+myin(_17030,_17034),myin(_17032,_17034)},!,[move(_17032,_17030)],{incl(_17030,_17034,_17036)}),_17132):-call(_17132).
-->(unify_var(_17216,_17218,_17220,_17222),({\+myin(_17216,_17220),\+myin(_17218,_17220)},!,[move(tvar^h,_17216),move(tvar^h,_17218),add(1,h),move(_17218,[h-1])],{incl(_17216,_17220,_17332),incl(_17218,_17332,_17222)}),_17396):-call(_17396).
-->(unify_readmode(_17480,_17482,_17484,_17486,_17488),({structure(_17482)},!,[equal([_17480],tatm^(_17506/_17508),fail)],{functor(_17482,_17506,_17508)},unify_args(1,_17508,_17482,_17484,_17486,0,_17480,_17488)),_17610):-call(_17610).
-->(unify_readmode(_17694,_17696,_17698,_17700,_17702),({cons(_17696)},!,unify_args(1,2,_17696,_17698,_17700,-1,_17694,_17702)),_17768):-call(_17768).
-->(unify_readmode(_17852,_17854,_17856,_17856,_17860),({atomic(_17854)},!,[equal(_17852,tatm^_17854,fail)]),_17928):-call(_17928).
-->(unify_args(_18012,_18014,_18016,_18018,_18018,_18022,_18024,_18026),({_18012>_18014},!),_18070):-call(_18070).
-->(unify_args(_18160,_18162,_18164,_18166,_18168,_18170,_18172,[_18154|_18156]),({_18160=_18162},!,unify_arg(_18160,_18164,_18166,_18168,_18170,_18172,last,_18156)),_18242):-call(_18242).
-->(unify_args(_18326,_18328,_18330,_18332,_18334,_18336,_18338,_18340),({_18326<_18328},!,unify_arg(_18326,_18330,_18332,_18360,_18336,_18338,nonlast,_18368),{_18378 is _18326+1},unify_args(_18378,_18328,_18330,_18360,_18334,_18336,_18338,_18340)),_18454):-call(_18454).
-->(unify_arg(_18538,_18540,_18542,_18544,_18546,_18548,_18550,_18552),([move([_18548+_18558],_18570)],{_18558 is _18538+_18546,incl(_18570,_18542,_18596),arg(_18538,_18540,_18604)},init(_18570,_18604,_18596,_18544,_18550,_18552)),_18674):-call(_18674).
-->(unify_writemode(_18758,_18760,_18762,_18764,_18766),({my_compound(_18760)},!,[move(_18778^h,[_18758])],{termtag(_18760,_18778)},unify_block(_18764,_18760,_18816,_18762,_18820,_18766)),_18874):-call(_18874).
-->(unify_writemode(_18958,_18960,_18962,_18964,_18966),({atomic(_18960)},!,[move(tatm^_18960,[_18958])]),_19038):-call(_19038).
-->(unify_block(last,_19130,_19132,_19134,_19134,[_19122|_19124]),(!,[add(_19132,h),jump(_19122)],{size(_19130,0,_19132)}),_19212):-call(_19212).
-->(unify_block(nonlast,_19304,_19306,_19308,_19310,[_19296|_19298]),(!,[add(_19306,h)],{size(_19304,0,_19306),_19340 is -_19306},block(_19304,_19340,0,_19308,_19310,_19298)),_19412):-call(_19412).
-->(block(_19496,_19498,_19500,_19502,_19504,_19506),({structure(_19496)},!,[move(tatm^(_19518/_19520),[h+_19498])],{functor(_19496,_19518,_19520),_19574 is _19498+_19520+1,_19586 is _19498+1},make_slots(1,_19520,_19496,_19586,_19616,_19502,_19620),block_args(1,_19520,_19496,_19574,_19500,_19616,_19620,_19504,_19506)),_19698):-call(_19698).
-->(block(_19782,_19784,_19786,_19788,_19790,_19792),({cons(_19782)},!,{_19810 is _19784+2},make_slots(1,2,_19782,_19784,_19828,_19788,_19832),block_args(1,2,_19782,_19810,_19786,_19828,_19832,_19790,_19792)),_19904):-call(_19904).
-->(block(_19988,_19990,_19990,_19994,_19994,[]),({atomic(_19988)},!),_20040):-call(_20040).
-->(block(_20124,_20126,_20126,_20130,_20130,[]),({var(_20124)},!),_20176):-call(_20176).
-->(block_args(_20260,_20262,_20264,_20266,_20266,[],_20272,_20272,[]),({_20260>_20262},!),_20320):-call(_20320).
-->(block_args(_20416,_20418,_20420,_20404,_20424,[_20404],_20428,_20430,[_20410|_20412]),({_20416=_20418},!,[label(_20410)],{arg(_20416,_20420,_20460)},block(_20460,_20404,_20424,_20428,_20430,_20412)),_20530):-call(_20530).
-->(block_args(_20620,_20622,_20624,_20614,_20628,[_20614|_20616],_20632,_20634,_20636),({_20620<_20622},!,{arg(_20620,_20624,_20654)},block(_20654,_20614,_20666,_20632,_20670,_20672),{_20682 is _20620+1},block_args(_20682,_20622,_20624,_20666,_20628,_20616,_20670,_20634,_20636)),_20766):-call(_20766).
-->(make_slots(_20850,_20852,_20854,_20856,[],_20860,_20860),({_20850>_20852},!),_20906):-call(_20906).
-->(make_slots(_20996,_20998,_21000,_21002,[_20990|_20992],_21006,_21008),({_20996=<_20998},!,{arg(_20996,_21000,_21026)},init_var(_21026,_21002,_21006),{incl(_21026,_21006,_21046),make_word(_21026,_20990,_21054)},[move(_21054,[h+_21002])],{_21098 is _21002+1,_21110 is _20996+1},make_slots(_21110,_20998,_21000,_21098,_20992,_21046,_21008)),_21208):-call(_21208).
-->(init_var(_21292,_21294,_21296),({var(_21292),\+myin(_21292,_21296)},!,[move(tvar^(h+_21294),_21292)]),_21384):-call(_21384).
-->(init_var(_21468,_21470,_21472),({var(_21468),myin(_21468,_21472)},!),_21526):-call(_21526).
-->(init_var(_21610,_21612,_21614),({nonvar(_21610)},!),_21656):-call(_21656).
-->(size(_22336),({structure(_22336)},!,{functor(_22336,_22350,_22352)},add(1),add(_22352),size_args(1,_22352,_22336)),_22430):-call(_22430).
-->(size(_22514),({cons(_22514)},!,add(2),size_args(1,2,_22514)),_22580):-call(_22580).
-->(size(_22664),({atomic(_22664)},!),_22706):-call(_22706).
-->(size(_22790),({var(_22790)},!),_22832):-call(_22832).
-->(size_args(_22916,_22918,_22920),({_22916>_22918},!),_22964):-call(_22964).
-->(size_args(_23048,_23050,_23052),({_23048=<_23050},!,{arg(_23048,_23052,_23070)},size(_23070),{_23088 is _23048+1},size_args(_23088,_23050,_23052)),_23160):-call(_23160).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_$002D$002D$003E_2__1(mach); }
public static Operation exec_pred_$002D$002D$003E_2__1(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s13,Data.F(unify.s_myin,var1.Deref(),var3.Deref()))),Data.F(unify.s3,unify.s1,Data.F(unify.s_uninit,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_myin,var1.Deref(),var3.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s_init,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),unify.s_nonlast,var5))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_uninit,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_my_compound,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,var5,unify.s_h),var1.Deref()),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_termtag,var2.Deref(),var5.Deref())),Data.F(unify.s3,Data.F(unify.s_unify_block,unify.s_nonlast,var2.Deref(),var6,var3.Deref(),var7,var8),Data.F(unify.s69,Data.F(unify.s_incl,var1.Deref(),var7.Deref(),var4.Deref()))))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_uninit,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_atomic,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tatm,var2.Deref()),var1.Deref()),Const.Nil),Data.F(unify.s69,Data.F(unify.s_incl,var1.Deref(),var3.Deref(),var4.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__5(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_uninit,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_var,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s_unify_var,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__6(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_init,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_nonvar,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_termtag,var2.Deref(),var7)),Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_deref,var1.Deref()),Data.F(unify.s6,Data.F(unify.s_switch,var7.Deref(),var1.Deref(),Data.F(unify.s6,Data.F(unify.s_trail,var1.Deref()),var8),var9,unify.s_fail),Const.Nil)),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_unify_writemode,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),var8.Deref(),Const.Nil)),Data.F(unify.s69,Data.F(unify.s_unify_readmode,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var6.Deref(),var9.Deref(),Const.Nil))))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__7(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_init,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_var,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s_unify_var,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__8(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_var,var1,var2,var3,var3.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_myin,var1.Deref(),var3.Deref()),Data.F(unify.s_myin,var2.Deref(),var3.Deref()))),Data.F(unify.s3,unify.s1,Data.F(unify.s6,Data.F(unify.s_unify,var1.Deref(),var2.Deref(),unify.s_fail),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__9(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_var,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_myin,var1.Deref(),var3.Deref()),Data.F(unify.s13,Data.F(unify.s_myin,var2.Deref(),var3.Deref())))),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,var1.Deref(),var2.Deref()),Const.Nil),Data.F(unify.s69,Data.F(unify.s_incl,var2.Deref(),var3.Deref(),var4.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__10(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_var,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s13,Data.F(unify.s_myin,var1.Deref(),var3.Deref())),Data.F(unify.s_myin,var2.Deref(),var3.Deref()))),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,var2.Deref(),var1.Deref()),Const.Nil),Data.F(unify.s69,Data.F(unify.s_incl,var1.Deref(),var3.Deref(),var4.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__11(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_var,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s13,Data.F(unify.s_myin,var1.Deref(),var3.Deref())),Data.F(unify.s13,Data.F(unify.s_myin,var2.Deref(),var3.Deref())))),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tvar,unify.s_h),var1.Deref()),Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tvar,unify.s_h),var2.Deref()),Data.F(unify.s6,Data.F(unify.s_add,unify.posint1,unify.s_h),Data.F(unify.s6,Data.F(unify.s_move,var2.Deref(),Data.F(unify.s6,Data.F(unify.s4,unify.s_h,unify.posint1),Const.Nil)),Const.Nil)))),Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_incl,var1.Deref(),var3.Deref(),var5),Data.F(unify.s_incl,var2.Deref(),var5.Deref(),var4.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__12(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_readmode,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_structure,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_equal,Data.F(unify.s6,var1.Deref(),Const.Nil),Data.F(unify.s14,unify.s_tatm,Data.F(unify.s7,var6,var7)),unify.s_fail),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_functor,var2.Deref(),var6.Deref(),var7.Deref())),Data.F(unify.s_unify_args,unify.posint1,var7.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),unify.posint0,var1.Deref(),var5.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__13(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_readmode,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_cons,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s_unify_args,unify.posint1,unify.posint2,var2.Deref(),var3.Deref(),var4.Deref(),unify.negint1,var1.Deref(),var5.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__14(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_readmode,var1,var2,var3,var3.Deref(),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_atomic,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s6,Data.F(unify.s_equal,var1.Deref(),Data.F(unify.s14,unify.s_tatm,var2.Deref()),unify.s_fail),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__15(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_args,var1,var2,var3,var4,var4.Deref(),var5,var6,var7),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s12,var1.Deref(),var2.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__16(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_args,var1,var2,var3,var4,var5,var6,var7,Data.F(unify.s6,var8,var9)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s10,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s_unify_arg,var1.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),unify.s_last,var9.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__17(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_args,var1,var2,var3,var4,var5,var6,var7,var8),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s9,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s_unify_arg,var1.Deref(),var3.Deref(),var4.Deref(),var9,var6.Deref(),var7.Deref(),unify.s_nonlast,var10),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_is,var11,Data.F(unify.s2,var1.Deref(),unify.posint1))),Data.F(unify.s_unify_args,var11.Deref(),var2.Deref(),var3.Deref(),var9.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__18(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_arg,var1,var2,var3,var4,var5,var6,var7,var8),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s6,Data.F(unify.s2,var6.Deref(),var9),Const.Nil),var10),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_is,var9.Deref(),Data.F(unify.s2,var1.Deref(),var5.Deref())),Data.F(unify.s3,Data.F(unify.s_incl,var10.Deref(),var3.Deref(),var11),Data.F(unify.s_arg,var1.Deref(),var2.Deref(),var12)))),Data.F(unify.s_init,var10.Deref(),var12.Deref(),var11.Deref(),var4.Deref(),var7.Deref(),var8.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__19(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_writemode,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_my_compound,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,var6,unify.s_h),Data.F(unify.s6,var1.Deref(),Const.Nil)),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_termtag,var2.Deref(),var6.Deref())),Data.F(unify.s_unify_block,var4.Deref(),var2.Deref(),var7,var3.Deref(),var8,var5.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__20(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_writemode,var1,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_atomic,var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tatm,var2.Deref()),Data.F(unify.s6,var1.Deref(),Const.Nil)),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__21(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_block,unify.s_last,var1,var2,var3,var3.Deref(),Data.F(unify.s6,var4,var5)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_add,var2.Deref(),unify.s_h),Data.F(unify.s6,Data.F(unify.s_jump,var4.Deref()),Const.Nil)),Data.F(unify.s69,Data.F(unify.s_size,var1.Deref(),unify.posint0,var2.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__22(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_unify_block,unify.s_nonlast,var1,var2,var3,var4,Data.F(unify.s6,var5,var6)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_add,var2.Deref(),unify.s_h),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_size,var1.Deref(),unify.posint0,var2.Deref()),Data.F(unify.s_is,var7,Data.F(unify.s4,var2.Deref())))),Data.F(unify.s_block,var1.Deref(),var7.Deref(),unify.posint0,var3.Deref(),var4.Deref(),var6.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__23(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_structure,var1.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tatm,Data.F(unify.s7,var7,var8)),Data.F(unify.s6,Data.F(unify.s2,unify.s_h,var2.Deref()),Const.Nil)),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_functor,var1.Deref(),var7.Deref(),var8.Deref()),Data.F(unify.s3,Data.F(unify.s_is,var9,Data.F(unify.s2,Data.F(unify.s2,var2.Deref(),var8.Deref()),unify.posint1)),Data.F(unify.s_is,var10,Data.F(unify.s2,var2.Deref(),unify.posint1))))),Data.F(unify.s3,Data.F(unify.s_make_slots,unify.posint1,var8.Deref(),var1.Deref(),var10.Deref(),var11,var4.Deref(),var12),Data.F(unify.s_block_args,unify.posint1,var8.Deref(),var1.Deref(),var9.Deref(),var3.Deref(),var11.Deref(),var12.Deref(),var5.Deref(),var6.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__24(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block,var1,var2,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_cons,var1.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_is,var7,Data.F(unify.s2,var2.Deref(),unify.posint2))),Data.F(unify.s3,Data.F(unify.s_make_slots,unify.posint1,unify.posint2,var1.Deref(),var2.Deref(),var8,var4.Deref(),var9),Data.F(unify.s_block_args,unify.posint1,unify.posint2,var1.Deref(),var7.Deref(),var3.Deref(),var8.Deref(),var9.Deref(),var5.Deref(),var6.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__25(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block,var1,var2,var2.Deref(),var3,var3.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_atomic,var1.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__26(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block,var1,var2,var2.Deref(),var3,var3.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_var,var1.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__27(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block_args,var1,var2,var3,var4,var4.Deref(),Const.Nil,var5,var5.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s12,var1.Deref(),var2.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__28(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block_args,var1,var2,var3,var4,var5,Data.F(unify.s6,var4.Deref(),Const.Nil),var6,var7,Data.F(unify.s6,var8,var9)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s10,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_label,var8.Deref()),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_arg,var1.Deref(),var3.Deref(),var10)),Data.F(unify.s_block,var10.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var9.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__29(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_block_args,var1,var2,var3,var4,var5,Data.F(unify.s6,var4.Deref(),var6),var7,var8,var9),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s9,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_arg,var1.Deref(),var3.Deref(),var10)),Data.F(unify.s3,Data.F(unify.s_block,var10.Deref(),var4.Deref(),var11,var7.Deref(),var12,var13),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_is,var14,Data.F(unify.s2,var1.Deref(),unify.posint1))),Data.F(unify.s_block_args,var14.Deref(),var2.Deref(),var3.Deref(),var11.Deref(),var5.Deref(),var6.Deref(),var12.Deref(),var8.Deref(),var9.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__30(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_make_slots,var1,var2,var3,var4,Const.Nil,var5,var5.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s12,var1.Deref(),var2.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__31(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_make_slots,var1,var2,var3,var4,Data.F(unify.s6,var5,var6),var7,var8),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s11,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_arg,var1.Deref(),var3.Deref(),var9)),Data.F(unify.s3,Data.F(unify.s_init_var,var9.Deref(),var4.Deref(),var7.Deref()),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_incl,var9.Deref(),var7.Deref(),var10),Data.F(unify.s_make_word,var9.Deref(),var5.Deref(),var11))),Data.F(unify.s3,Data.F(unify.s6,Data.F(unify.s_move,var11.Deref(),Data.F(unify.s6,Data.F(unify.s2,unify.s_h,var4.Deref()),Const.Nil)),Const.Nil),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_is,var12,Data.F(unify.s2,var4.Deref(),unify.posint1)),Data.F(unify.s_is,var13,Data.F(unify.s2,var1.Deref(),unify.posint1)))),Data.F(unify.s_make_slots,var13.Deref(),var2.Deref(),var3.Deref(),var12.Deref(),var6.Deref(),var10.Deref(),var8.Deref())))))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__32(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_init_var,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_var,var1.Deref()),Data.F(unify.s13,Data.F(unify.s_myin,var1.Deref(),var3.Deref())))),Data.F(unify.s3,unify.s1,Data.F(unify.s6,Data.F(unify.s_move,Data.F(unify.s14,unify.s_tvar,Data.F(unify.s2,unify.s_h,var2.Deref())),var1.Deref()),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__33(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_init_var,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s3,Data.F(unify.s_var,var1.Deref()),Data.F(unify.s_myin,var1.Deref(),var3.Deref()))),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__34(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_init_var,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_nonvar,var1.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__35(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_structure,var1.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_functor,var1.Deref(),var2,var3)),Data.F(unify.s3,Data.F(unify.s_add,unify.posint1),Data.F(unify.s3,Data.F(unify.s_add,var3.Deref()),Data.F(unify.s_size_args,unify.posint1,var3.Deref(),var1.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__36(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_cons,var1.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s_add,unify.posint2),Data.F(unify.s_size_args,unify.posint1,unify.posint2,var1.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__37(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_atomic,var1.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__38(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_var,var1.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__39(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size_args,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s12,var1.Deref(),var2.Deref())),unify.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__40(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s_size_args,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s11,var1.Deref(),var2.Deref())),Data.F(unify.s3,unify.s1,Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_arg,var1.Deref(),var3.Deref(),var4)),Data.F(unify.s3,Data.F(unify.s_size,var4.Deref()),Data.F(unify.s3,Data.F(unify.s69,Data.F(unify.s_is,var5,Data.F(unify.s2,var1.Deref(),unify.posint1))),Data.F(unify.s_size_args,var5.Deref(),var2.Deref(),var3.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_make_word_3 extends Code {

/*

make_word(_4040,_4032,_4036^(h+_4032),_4048):-my_compound(_4040,cut(1,termtag(_4040,_4036,_4048))).
make_word(_4086,_4088,_4086,_4096):-var(_4086,cut(1,_4096)).
make_word(_4130,_4132,tatm^_4130,_4140):-atomic(_4130,cut(1,_4140)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_word_3__1(mach); }
public static Operation exec_pred_make_word_3__1(Prolog mach){ mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(unify.s14,var3,Data.F(unify.s2,unify.s_h,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(unify.s_termtag,var1.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_my_compound_1::exec_static ;}
public static Operation exec_pred_make_word_3__2(Prolog mach){ mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_var_1::exec_static ;}
public static Operation exec_pred_make_word_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(unify.s14,unify.s_tatm,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_atomic_1::exec_static ;}
}


public static class pred_add_3 extends Code {

/*

add(_4574,_4576,_4578,_4592):-is(_4578,_4576+_4574,_4592).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_add_3__1(mach); }
public static Operation exec_pred_add_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(unify.s2,var2.Deref(),var1.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
}


public static class pred_myin_2 extends Code {

/*

myin(_4624,[_4620|_4622],_4634):-compare(_4626,_4624,_4620,in_2(_4626,_4624,_4622,_4634)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_myin_2__1(mach); }
public static Operation exec_pred_myin_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(unify.s6,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = Data.F(unify.s_in_2,var4.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_in_2_3 extends Code {

/*

in_2(=,_4670,_4672,_4682):-call(_4682).
in_2(>,_4700,_4702,_4710):-myin(_4700,_4702,_4710).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_in_2_3__1(mach); }
public static Operation exec_pred_in_2_3__1(Prolog mach){ mach.FillAlternative(pred_in_2_3::exec_pred_in_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(unify.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_in_2_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(unify.s12,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_myin_2::exec_static ;}
}


public static class pred_incl_3 extends Code {

/*

incl(_4736,_4738,_4740,_4748):-incl_2(_4738,_4736,_4740,_4748).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_incl_3__1(mach); }
public static Operation exec_pred_incl_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_incl_2_3::exec_static ;}
}


public static class pred_incl_2_3 extends Code {

/*

incl_2([],_4778,[_4778],_4790):-call(_4790).
incl_2([_4810|_4812],_4814,_4816,_4826):-compare(_4818,_4814,_4810,incl_3(_4818,_4814,_4810,_4812,_4816,_4826)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_incl_2_3__1(mach); }
public static Operation exec_pred_incl_2_3__1(Prolog mach){ mach.FillAlternative(pred_incl_2_3::exec_pred_incl_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(unify.s6,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_incl_2_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(unify.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(unify.s_incl_3,var5.Deref(),var3.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_incl_3_5 extends Code {

/*

incl_3(<,_4870,_4876,_4878,[_4870,_4876|_4878],_4888):-call(_4888).
incl_3(=,_4916,_4912,_4914,[_4912|_4914],_4926):-call(_4926).
incl_3(>,_4954,_4950,_4956,[_4950|_4952],_4964):-incl_2(_4956,_4954,_4952,_4964).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_incl_3_5__1(mach); }
public static Operation exec_pred_incl_3_5__1(Prolog mach){ mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(unify.s9,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(unify.s6,var1.Deref(),Data.F(unify.s6,var2.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_incl_3_5__2(Prolog mach){ mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(unify.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(unify.s6,var2.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_incl_3_5__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(unify.s12,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(unify.s6,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_incl_2_3::exec_static ;}
}


public static class pred_my_compound_1 extends Code {

/*

my_compound(_4996,_5008):-nonvar(_4996,not(atomic(_4996),_5008)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_my_compound_1__1(mach); }
public static Operation exec_pred_my_compound_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(unify.s_not,Data.F(unify.s_atomic,var1.Deref()),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_nonvar_1::exec_static ;}
}


public static class pred_cons_1 extends Code {

/*

cons(_5034,_5048):-nonvar(_5034,unify([_5038|_5040],_5034,_5048)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_cons_1__1(mach); }
public static Operation exec_pred_cons_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(unify.s_unify,Data.F(unify.s6,var2,var3),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_nonvar_1::exec_static ;}
}


public static class pred_structure_1 extends Code {

/*

structure(_5076,_5096):-my_compound(_5076,not(_5076=[_5080|_5082],_5096)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_structure_1__1(mach); }
public static Operation exec_pred_structure_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(unify.s_not,Data.F(unify.s10,var1.Deref(),Data.F(unify.s6,var2,var3)),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_my_compound_1::exec_static ;}
}


public static class pred_termtag_2 extends Code {

/*

termtag(_5122,tstr,_5130):-structure(_5122,_5130).
termtag(_5152,tlst,_5160):-cons(_5152,_5160).
termtag(_5182,tatm,_5190):-atomic(_5182,_5190).
termtag(_5212,tvar,_5220):-var(_5212,_5220).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_termtag_2__1(mach); }
public static Operation exec_pred_termtag_2__1(Prolog mach){ mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(unify.s_tstr,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_structure_1::exec_static ;}
public static Operation exec_pred_termtag_2__2(Prolog mach){ mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(unify.s_tlst,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_cons_1::exec_static ;}
public static Operation exec_pred_termtag_2__3(Prolog mach){ mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(unify.s_tatm,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_atomic_1::exec_static ;}
public static Operation exec_pred_termtag_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(unify.s_tvar,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_var_1::exec_static ;}
}


}


