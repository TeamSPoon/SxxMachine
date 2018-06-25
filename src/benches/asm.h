#ifndef ASM
#define ASM

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class asm_Renamed {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
	static Const* s7;
	static Const* s8;
	static Const* s9;
	static Const* s10;
	static Const* s11;
	static Const* s12;
	static Const* s13;
	static Const* s14;
	static Const* s15;
	static Const* s16;
	static Const* s17;
	static Const* s18;
	static Const* s19;
	static Const* s20;
	static Const* s21;
	static Const* s22;
	static Const* s23;
	static Const* s24;
	static Const* s25;
	static Const* s26;
	static Const* s27;
	static Const* s28;
	static Const* s29;
	static Const* s30;
	static Const* s31;
	static Const* s32;
	static Const* s33;
	static Const* s34;
	static Const* s35;
	static Const* s36;
	static Const* s37;
	static Const* s38;
	static Const* s39;
	static Const* s40;
	static Const* s41;
	static Const* s42;
	static Const* s43;
	static Const* s44;
	static Const* s45;
	static Const* s46;
	static Const* s47;
	static Const* s48;
	static Const* s49;
	static Const* s50;
	static Const* s51;
	static Const* s52;
	static Const* s53;
	static Const* s54;
	static Const* s55;
	static Const* s56;
	static Const* s57;
	static Const* s58;
	static Const* s59;
	static Const* s60;
	static Const* s61;
	static Const* s62;
	static Const* s63;
	static Const* s64;
	static Const* s65;
	static Const* s66;
	static Const* s67;
	static Const* s68;
	static Const* s69;
	static Const* s70;
	static Const* s71;
	static Const* s72;
	static Const* s73;
	static Const* s74;
	static Const* s75;
	static Const* s76;
	static Const* s77;
	static Const* s78;
	static Const* s79;
	static Const* s80;
	static Const* s81;
	static Const* s82;
	static Const* s83;
	static Const* s84;
	static Const* s85;
	static Const* s86;
	static Const* s87;
	static Const* s88;
	static Const* s89;
	static Const* s90;
	static Const* s91;
	static Const* s92;
	static Const* s93;
	static Const* s94;
	static Const* s95;
	static Const* s96;
	static Const* s97;
	static Const* s98;
	static Const* s99;
	static Const* s100;
	static Const* s101;
	static Const* s102;
	static Const* s103;
	static Const* s104;
	static Const* s105;
	static Const* s106;
	static Const* s107;
	static Const* s108;
	static Const* s109;
	static Const* s110;
	static Const* s111;
	static Const* s112;
	static Const* s113;
	static Const* s114;
	static Const* s115;
	static Const* s116;
	static Const* s117;
	static Const* s118;
	static Const* s119;
	static Const* s120;
	static Const* s121;
	static Const* s122;
	static Const* s123;
	static Const* s124;
	static Const* s125;
	static Const* s126;
	static Const* s127;
	static Const* s128;
	static Const* s129;
	static Const* s130;
	static Const* s131;
	static Const* s132;
	static Const* s133;
	static Const* s134;
	static Const* s135;
	static Const* s136;
	static Const* s137;
	static Const* s138;
	static Const* s139;
	static Const* s140;
	static Const* s141;
	static Const* s142;
	static Const* s143;
	static Const* s144;
	static Const* s145;
	static Const* s146;
	static Const* s147;
	static Const* s148;
	static Const* s149;
	static Const* s150;
	static Const* s151;
	static Const* s152;
	static Const* s153;
	static Const* s154;
	static Const* s155;
	static Const* s156;
	static Const* s157;
	static Const* s158;
	static Const* s159;
	static Const* s160;
	static Const* s161;
	static Const* s162;
	static Const* s163;
	static Const* s164;
	static Const* s165;
	static Const* s166;
	static Const* s167;
	static Const* s168;
	static Const* s169;
	static Const* s170;
	static Const* s171;
	static Const* s172;
	static Const* s173;
	static Const* s174;
	static Const* s175;
	static Const* s176;
	static Const* s177;
	static Const* s178;
	static Const* s179;
	static Const* s180;
	static Const* s181;
	static Const* s182;
	static Const* s183;
	static Const* s184;
	static Const* s185;
	static Const* s186;
	static Const* s187;
	static Const* s188;
	static Const* s189;
	static Const* s190;
	static Const* s191;
	static Const* s192;
	static Const* s193;
	static Const* s194;
	static Const* s195;
	static Const* s196;
	static Const* s197;
	static Const* s198;
	static Const* s199;
	static Const* s200;
	static Const* s201;
	static Const* s202;
	static Const* s203;
	static Const* s204;
	static Const* s205;
	static Const* s206;
	static Const* s207;
	static Const* s208;
	static Const* s209;
	static Const* s210;
	static Const* s211;
	static Const* s212;
	static Const* s213;
	static Const* s214;
	static Const* s215;
	static Const* s216;
	static Const* s217;
	static Const* s218;
	static Const* s219;
	static Const* s220;
	static Const* s221;
	static Const* s222;
	static Const* s223;
	static Const* s224;
	static Const* s225;
	static Const* s226;
	static Const* s227;
	static Const* s228;
	static Const* s229;
	static Const* s230;
	static Const* s231;
	static Const* s232;
	static Const* s233;
	static Const* s234;
	static Const* s235;
	static Const* s236;
	static Const* s237;
	static Const* s238;
	static Const* s239;
	static Const* s240;
	static Const* s241;
	static Const* s242;
	static Const* s243;
	static Const* s244;
	static Const* s245;
	static Const* s246;
	static Const* s247;
	static Const* s248;
	static Const* s249;
	static Const* s250;
	static Const* s251;
	static Const* s252;
	static Const* s253;
	static Const* s254;
	static Const* s255;
	static Const* s256;
	static Const* s257;
	static Const* s258;
	static Const* s259;
	static Const* s260;
	static Const* s261;
	static Const* s262;
	static Const* s263;
	static Const* s264;
	static Const* s265;
	static Const* s266;
	static Const* s267;
	static Const* s268;
	static Const* s269;
	static Const* s270;
	static Const* s271;
	static Const* s272;
	static Const* s273;
	static Const* s274;
	static Const* s275;
	static Const* s276;
	static Const* s277;
	static Const* s278;
	static Const* s279;
	static Const* s280;
	static Const* s281;
	static Const* s282;
	static Const* s283;
	static Const* s284;
	static Const* s285;
	static Const* s286;
	static Const* s287;
	static Const* s288;
	static Const* s289;
	static Const* s290;
	static Const* s291;
	static Const* s292;
	static Const* s293;
	static Const* s294;
	static Const* s295;
	static Const* s296;
	static Const* s297;
	static Const* s298;
	static Const* s299;
	static Const* s300;
	static Const* s301;
	static Const* s302;
	static Const* s303;
	static Const* s304;
	static Const* s305;
	static Const* s306;
	static Const* s307;
	static Const* s308;
	static Const* s309;
	static Const* s310;
	static Const* s311;
	static Const* s312;
	static Const* s313;
	static Const* s314;
	static Const* s315;
	static Const* s316;
	static Const* s317;
	static Const* s318;
	static Const* s319;
	static Const* s320;
	static Const* s321;
	static Const* s322;
	static Const* s323;
	static Const* s324;
	static Const* s325;
	static Const* s326;
	static Const* s327;
	static Const* s328;
	static Const* s329;
	static Const* s330;
	static Const* s331;
	static Const* s332;
	static Const* s333;
	static Const* s334;
	static Const* s335;
	static Const* s336;
	static Const* s337;
	static Const* s338;
	static Const* s339;
	static Const* s340;
	static Const* s341;
	static Const* s342;
	static Const* s343;
	static Const* s344;
	static Const* s345;
	static Const* s346;
	static Const* s347;
	static Const* s348;
	static Const* s349;
	static Const* s350;
	static Const* s351;
	static Const* s352;
	static Const* s353;
	static Const* s354;
	static Const* s355;
	static Const* s356;
	static Const* s357;
	static Const* s358;
	static Const* s359;
	static Const* s360;
	static Const* s361;
	static Const* s362;
	static Const* s363;
	static Const* s364;
	static Int* negint2;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint9;
	static Int* posint10;
	static Int* posint11;
	static Int* posint12;
	static Int* posint13;
	static Int* posint14;
	static Int* posint15;
	static Int* posint16;
	static Int* posint17;
	static Int* posint18;
	static Int* posint19;
	static Int* posint20;
	static Int* posint21;
	static Int* posint22;
	static Int* posint23;
	static Int* posint24;
	static Int* posint25;
	static Int* posint26;
	static Int* posint27;
	static Int* posint28;
	static Int* posint29;
	static Int* posint30;
	static Int* posint31;
	static Int* posint32;
	static Int* posint33;
	static Int* posint34;
	static Int* posint35;
	static Int* posint36;
	static Int* posint37;
	static Int* posint38;
	static Int* posint39;
	static Int* posint40;
	static Int* posint41;
	static Int* posint42;
	static Int* posint43;
	static Int* posint44;
	static Int* posint45;
	static Int* posint46;
	static Int* posint47;
	static Int* posint48;
	static Int* posint49;
	static Int* posint50;
	static Int* posint51;
	static Int* posint52;
	static Int* posint53;
	static Int* posint54;
	static Int* posint55;
	static Int* posint56;
	static Int* posint57;
	static Int* posint58;
	static Int* posint59;
	static Int* posint60;
	static Int* posint61;
	static Int* posint62;
	static Int* posint63;
	static Int* posint64;
	static Int* posint65;
	static Int* posint66;
	static Int* posint67;
	static Int* posint68;
	static Int* posint69;
	static Int* posint70;
	static Int* posint71;
	static Int* posint72;
	static Int* posint73;
	static Int* posint74;
	static Int* posint75;
	static Int* posint76;
	static Int* posint77;
	static Int* posint78;
	static Int* posint79;
	static Int* posint80;
	static Int* posint81;
	static Int* posint82;
	static Int* posint83;
	static Int* posint84;
	static Int* posint85;
	static Int* posint86;
	static Int* posint87;
	static Int* posint88;
	static Int* posint89;
	static Int* posint90;
	static Int* posint91;
	static Int* posint92;
	static Int* posint93;
	static Int* posint94;
	static Int* posint95;
	static Int* posint96;
	static Int* posint97;
	static Int* posint98;
	static Int* posint99;
	static Int* posint100;
	static Int* posint101;
	static Int* posint102;
	static Int* posint103;
	static Int* posint104;
	static Int* posint105;
	static Int* posint106;
	static Int* posint107;
	static Int* posint108;
	static Int* posint109;
	static Int* posint110;
	static Int* posint111;
	static Int* posint112;
	static Int* posint113;
	static Int* posint114;
	static Int* posint115;
	static Int* posint116;
	static Int* posint117;
	static Int* posint118;
	static Int* posint119;
	static Int* posint120;
	static Int* posint121;
	static Int* posint122;
	static Int* posint123;
	static Int* posint124;
	static Int* posint125;
	static Int* posint126;
	static Int* posint127;
	static Int* posint128;
	static Int* posint129;
	static Int* posint130;
	static Int* posint131;
	static Int* posint132;
	static Int* posint133;
	static Int* posint134;
	static Int* posint135;
	static Int* posint136;
	static Int* posint137;
	static Int* posint138;
	static Int* posint139;
	static Int* posint140;
	static Int* posint141;
	static Int* posint142;
	static Int* posint143;
	static Int* posint144;
	static Int* posint145;
	static Int* posint146;
	static Int* posint147;
	static Int* posint148;
	static Int* posint149;
	static Int* posint150;
	static Int* posint151;
	static Int* posint152;
	static Int* posint153;
	static Int* posint154;
	static Int* posint155;
	static Int* posint156;
	static Int* posint157;
	static Int* posint158;
	static Int* posint159;
	static Int* posint160;
	static Int* posint161;
	static Int* posint162;
	static Int* posint163;
	static Int* posint164;
	static Int* posint165;
	static Int* posint166;
	static Int* posint167;
	static Int* posint168;
	static Int* posint169;
	static Int* posint170;
	static Int* posint171;
	static Int* posint172;
	static Int* posint173;
	static Int* posint174;
	static Int* posint175;
	static Int* posint176;
	static Int* posint177;
	static Int* posint178;
	static Int* posint179;
	static Int* posint180;
	static Int* posint181;
	static Int* posint182;
	static Int* posint183;
	static Int* posint184;
	static Int* posint185;
	static Int* posint186;
	static Int* posint187;
	static Int* posint188;
	static Int* posint189;
	static Int* posint190;
	static Int* posint191;
	static Int* posint192;
	static Int* posint193;
	static Int* posint194;
	static Int* posint195;
	static Int* posint196;
	static Int* posint197;
	static Int* posint198;
	static Int* posint199;
	static Int* posint200;
	static Int* posint201;
	static Int* posint202;
	static Int* posint203;
	static Int* posint204;
	static Int* posint205;
	static Int* posint206;
	static Int* posint207;
	static Int* posint208;
	static Int* posint209;
	static Int* posint210;
	static Int* posint211;
	static Int* posint212;
	static Int* posint213;
	static Int* posint214;
	static Int* posint215;
	static Int* posint216;
	static Int* posint217;
	static Int* posint218;
	static Int* posint219;
	static Int* posint220;
	static Int* posint221;
	static Int* posint222;
	static Int* posint223;
	static Int* posint224;
	static Int* posint225;
	static Int* posint226;
	static Int* posint227;
	static Int* posint228;
	static Int* posint229;
	static Int* posint230;
	static Int* posint231;
	static Int* posint232;
	static Int* posint233;
	static Int* posint234;
	static Int* posint255;
	static Int* posint300;
	static Int* posint950;
};

class pred_on_load_asm_0 : public Code {

	/*
	 * 
	 * on_load_asm(_628):-write(op(300,xfx,<=),_628).
	 * on_load_asm(_660):-write(op(950,xfx,:),_660).
	 * on_load_asm(_736):-write(determinate([cmp_error/1,name/2,length/2,
	 * asm_hash_value/2]),_736). on_load_asm(_3600):-write((mode
	 * asm_pass12(c,d,f)),_3600). on_load_asm(_25904):-write((mode
	 * opcode(c,f)),_25904).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_bp_2 : public Code {

	/*
	 * 
	 * asm_bp(_754,_756,_788):-
	 * :(true,global_set('$asm_bp',0,1),see(_754,asm_getaslist(_766,seen(tell(_756,
	 * asm0(_766,_768,_770,0,_772,functor(_774,csym,255,functor(_776,lsym,255,
	 * global_create('$sym_no',0,0,asm_pass1_bp(_768,_770,_774,_776,_778,_780,
	 * asm_magic(3,asm_putnum(_780,4,asm_putnum(_778,4,asm_putnum(_772,4,asm_pass2(
	 * _768,_770,_774,_776,asm_mark_eot(global_del('$asm_bp',0,told(_788))))))))))))
	 * )))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_2 : public Code {

	/*
	 * 
	 * asm(_952,_954,_982):-
	 * :(true,see(_952),asm_getaslist(_960,seen(tell(_954,asm0(_960,_962,_964,0,_966
	 * ,functor(_968,csym,255,functor(_970,lsym,255,global_create('$sym_no',0,0,
	 * asm_pass1(_962,_964,_968,_970,_972,_974,asm_magic(3,asm_putnum(_974,4,
	 * asm_putnum(_972,4,asm_putnum(_966,4,asm_pass2(_962,_964,_968,_970,
	 * asm_mark_eot(told(_982)))))))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_getaslist_1 : public Code {

	/*
	 * 
	 * asm_getaslist(_1132,_1144):-
	 * :(true,read(_1136),asm_getaslist1(_1136,_1132,_1144)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_getaslist1_2 : public Code {

	/*
	 * 
	 * asm_getaslist1(end_of_file,_1174,_1188):- :(true,_1174:=[],_1188).
	 * asm_getaslist1(_1212,_1214,_1236):-
	 * :(true,_1214:=[_1212|_1220],read(_1228,asm_getaslist1(_1228,_1220,_1236))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_1 : public Code {

	/*
	 * 
	 * asm(_1274,_1302):-
	 * :(true,asm0(_1274,_1280,_1282,0,_1286),functor(_1288,csym,255,functor(_1290,
	 * lsym,255,global_create('$sym_no',0,0,asm_pass1(_1280,_1282,_1288,_1290,_1292,
	 * _1294,asm_magic(3,asm_putnum(_1294,4,asm_putnum(_1292,4,asm_putnum(_1286,4,
	 * asm_pass2(_1280,_1282,_1288,_1290,asm_mark_eot(_1302))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm0_5 : public Code {

	/*
	 * 
	 * asm0([],_1416,_1418,_1420,_1422,_1436):-
	 * :(true,_1416:=[],:=(_1418,[],:=(_1422,_1420,_1436))).
	 * asm0([_1484|_1486],_1488,_1490,_1492,_1494,_1526):-
	 * :(asm_index_inst(_1484,_1500),_1510 is
	 * _1492+_1500,unify([_1484|_1518],_1490,asm0(_1486,_1488,_1518,_1510,_1494,
	 * _1526))). asm0([_1580|_1582],_1584,_1586,_1588,_1590,_1610):-
	 * :(true,_1584:=[_1580|_1596],asm0(_1582,_1596,_1586,_1588,_1590,_1610)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass1_6 : public Code {

	/*
	 * 
	 * asm_pass1(_1654,_1656,_1658,_1660,_1662,_1664,_1684):-
	 * :(true,asm_pass11(_1654,_1660,_1658,0,_1662),asm_index_pass1(_1656,_1658,
	 * asmpass1_fillin(_1660,255,_1658,asmpass1_setundef(_1658,255,0,_1664,_1684))))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass1_bp_6 : public Code {

	/*
	 * 
	 * asm_pass1_bp(_1746,_1748,_1750,_1752,_1754,_1756,_1776):-
	 * :(true,asm_pass11(_1746,_1752,_1750,0,_1754),asm_index_pass1(_1748,_1750,
	 * asmpass1_fillin_bp(_1752,255,_1750,asmpass1_setundef(_1750,255,0,_1756,_1776)
	 * ))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass11_5 : public Code {

	/*
	 * 
	 * asm_pass11([],_1838,_1840,_1842,_1844,_1858):- :(true,_1844:=_1842,_1858).
	 * asm_pass11([_1890|_1892],_1894,_1896,_1898,_1900,_1936):-
	 * <=(label(_1904),_1890,:(lab_member1(lab(_1904,_1898),_1894),asm_pass11(_1892,
	 * _1894,_1896,_1898,_1900),_1936)).
	 * asm_pass11([_1976|_1978],_1980,_1982,_1984,_1986,_2008):-
	 * :(label(_1990)<=_1976,error_double_define(_1990),asm_pass11(_1978,_1980,_1982
	 * ,_1984,_1986,_2008)).
	 * asm_pass11([_2054|_2056],_2058,_2060,_2062,_2064,_2088):-
	 * :(true,asm_pass12(_2054,_2060,_2072),is(_2080,_2062+_2072,asm_pass11(_2056,
	 * _2058,_2060,_2080,_2064,_2088))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_error_double_define_1 : public Code {

	/*
	 * 
	 * error_double_define((_2148,_2142,_2144),_2158):- :(true,true,_2158).
	 * error_double_define((_2182,_2184),_2220):- :(true,cmp_error(['The predicate
	 * ',_2182/_2184,' is doubly defined']),_2220).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_index_pass1_2 : public Code {

	/*
	 * 
	 * asm_index_pass1([],_2242,_2250):- :(true,true,_2250).
	 * asm_index_pass1([pred(_2276,_2278,_2280,_2282)|_2288],_2290,_2304):-
	 * :(true,asm_index_pass1(_2288,_2290),_2304).
	 * asm_index_pass1([arglabel(_2330,_2332,_2334)|_2340],_2342,_2372):-
	 * :(_2330==c,sym_member1(sym(_2332,0,_2356,_2358),_2342),asm_index_pass1(_2340,
	 * _2342,_2372)).
	 * asm_index_pass1([arglabel(_2412,(_2406,_2408),_2416)|_2422],_2424,_2454):-
	 * :(_2412==s,sym_member1(sym(_2406,_2408,_2438,_2440),_2424),asm_index_pass1(
	 * _2422,_2424,_2454)).
	 * asm_index_pass1([arglabel(_2488,_2490,_2492)|_2498],_2500,_2514):-
	 * :(true,asm_index_pass1(_2498,_2500),_2514).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_fillin_3 : public Code {

	/*
	 * 
	 * asmpass1_fillin(_2532,_2534,_2536,_2550):- :(_2534<1,true,_2550).
	 * asmpass1_fillin(_2576,_2578,_2580,_2604):-
	 * :(true,arg(_2578,_2576,_2588),asmpass1_fillin(_2588,_2580,is(_2596,_2578-1,
	 * asmpass1_fillin(_2576,_2596,_2580,_2604)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_fillin_2 : public Code {

	/*
	 * 
	 * asmpass1_fillin(_2656,_2658,_2670):- :(var(_2656),true,_2670).
	 * asmpass1_fillin([lab((_2702,_2696,_2698),_2710)|_2716],_2718,_2732):-
	 * :(true,asmpass1_fillin(_2716,_2718),_2732).
	 * asmpass1_fillin([lab((_2758,_2760),_2766)|_2772],_2774,_2798):-
	 * :(true,sym_member1(sym(_2758,_2760,_2766,_2784),_2774),asmpass1_fillin(_2772,
	 * _2774,_2798)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_fillin_bp_3 : public Code {

	/*
	 * 
	 * asmpass1_fillin_bp(_2830,_2832,_2834,_2848):- :(_2832<1,true,_2848).
	 * asmpass1_fillin_bp(_2874,_2876,_2878,_2902):-
	 * :(true,arg(_2876,_2874,_2886),asmpass1_fillin_bp(_2886,_2878,is(_2894,_2876-1
	 * ,asmpass1_fillin_bp(_2874,_2894,_2878,_2902)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_fillin_bp_2 : public Code {

	/*
	 * 
	 * asmpass1_fillin_bp(_2954,_2956,_2968):- :(var(_2954),true,_2968).
	 * asmpass1_fillin_bp([lab((_3000,_2994,_2996),_3008)|_3014],_3016,_3030):-
	 * :(true,asmpass1_fillin_bp(_3014,_3016),_3030).
	 * asmpass1_fillin_bp([lab((_3056,_3058),_3064)|_3070],_3072,_3102):-
	 * :(predefined(_3056,_3058),sym_member1(sym(_3056,_3058,_3064,_3088),_3072),
	 * asmpass1_fillin_bp(_3070,_3072,_3102)).
	 * asmpass1_fillin_bp([lab((_3136,_3138),_3144)|_3150],_3152,_3166):-
	 * :(true,asmpass1_fillin_bp(_3150,_3152),_3166).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_setundef_4 : public Code {

	/*
	 * 
	 * asmpass1_setundef(_3190,_3192,_3194,_3196,_3216):-
	 * :(_3192<1,_3196=_3194,_3216).
	 * asmpass1_setundef(_3244,_3246,_3248,_3250,_3276):-
	 * :(true,arg(_3246,_3244,_3258),asmpass1_setundef(_3258,_3248,_3260,is(_3268,
	 * _3246-1,asmpass1_setundef(_3244,_3268,_3260,_3250,_3276)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asmpass1_setundef_3 : public Code {

	/*
	 * 
	 * asmpass1_setundef(_3334,_3336,_3338,_3356):- :(var(_3334),_3338=_3336,_3356).
	 * asmpass1_setundef([sym(_3384,_3386,_3388,_3390)|_3396],_3398,_3400,_3434):-
	 * :(var(_3388),_3388:=
	 * -2,b_GET_LENGTH_cf(_3384,_3412,is(_3426,_3398+_3412+6,asmpass1_setundef(_3396
	 * ,_3426,_3400,_3434)))).
	 * asmpass1_setundef([sym(_3488,_3490,_3492,_3494)|_3500],_3502,_3504,_3532):-
	 * :(true,b_GET_LENGTH_cf(_3488,_3510),is(_3524,_3502+_3510+6,asmpass1_setundef(
	 * _3500,_3524,_3504,_3532))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass12_3 : public Code {

	/*
	 * 
	 * asm_pass12(label(_3614),_3616,0,_3626):-call(_3626).
	 * asm_pass12(jmp(_3646),_3648,2,_3658):-call(_3658).
	 * asm_pass12(jmpn_eq_struct_x(_3684,(_3678,_3680),_3688,_3690),_3692,5,_3710):-
	 * sym_member1(sym(_3678,_3680,_3700,_3702),_3692,_3710).
	 * asm_pass12(jmpn_eq_struct_y(_3744,(_3738,_3740),_3748,_3750),_3752,5,_3770):-
	 * sym_member1(sym(_3738,_3740,_3760,_3762),_3752,_3770).
	 * asm_pass12(jmpn_eq_atom_x(_3798,_3800,_3802,_3804),_3806,5,_3824):-
	 * sym_member1(sym(_3800,0,_3814,_3816),_3806,_3824).
	 * asm_pass12(jmpn_eq_atom_y(_3852,_3854,_3856,_3858),_3860,5,_3878):-
	 * sym_member1(sym(_3854,0,_3868,_3870),_3860,_3878).
	 * asm_pass12(jmpn_nil_x(_3906,_3908,_3910),_3912,4,_3922):-call(_3922).
	 * asm_pass12(jmpn_nil_y(_3942,_3944,_3946),_3948,4,_3958):-call(_3958).
	 * asm_pass12(switch_list_x(_3978,_3980,_3982,_3984),_3986,5,_3996):-call(_3996)
	 * .
	 * asm_pass12(switch_list_y(_4016,_4018,_4020,_4022),_4024,5,_4034):-call(_4034)
	 * . asm_pass12(switch_list_yxx(_4054,_4056,_4058,_4060),_4062,5,_4072):-call(
	 * _4072).
	 * asm_pass12(switch_list_yxy(_4092,_4094,_4096,_4098),_4100,5,_4110):-call(
	 * _4110).
	 * asm_pass12(switch_list_yyx(_4130,_4132,_4134,_4136),_4138,5,_4148):-call(
	 * _4148).
	 * asm_pass12(switch_list_yyy(_4168,_4170,_4172,_4174),_4176,5,_4186):-call(
	 * _4186).
	 * asm_pass12(jmpn_eq_int_x(_4206,_4208,_4210,_4212),_4214,5,_4224):-call(_4224)
	 * .
	 * asm_pass12(jmpn_eq_int_y(_4244,_4246,_4248,_4250),_4252,5,_4262):-call(_4262)
	 * . asm_pass12(jmpn_eql(_4282,_4284,_4286),_4288,4,_4298):-call(_4298).
	 * asm_pass12(jmp_eql(_4318,_4320,_4322),_4324,4,_4334):-call(_4334).
	 * asm_pass12(jmp_eql_yy(_4354,_4356,_4358),_4360,4,_4370):-call(_4370).
	 * asm_pass12(jmpn_gt(_4390,_4392,_4394),_4396,4,_4406):-call(_4406).
	 * asm_pass12(jmpn_gt_yy(_4426,_4428,_4430),_4432,4,_4442):-call(_4442).
	 * asm_pass12(jmpn_ge(_4462,_4464,_4466),_4468,4,_4478):-call(_4478).
	 * asm_pass12(jmpn_ge_yy(_4498,_4500,_4502),_4504,4,_4514):-call(_4514).
	 * asm_pass12(jmpn_id(_4534,_4536,_4538),_4540,4,_4550):-call(_4550).
	 * asm_pass12(jmp_id(_4570,_4572,_4574),_4576,4,_4586):-call(_4586).
	 * asm_pass12(jmpn_var_x(_4606,_4608),_4610,3,_4620):-call(_4620).
	 * asm_pass12(jmpn_var_y(_4640,_4642),_4644,3,_4654):-call(_4654).
	 * asm_pass12(jmp_var_x(_4674,_4676),_4678,3,_4688):-call(_4688).
	 * asm_pass12(jmp_var_y(_4708,_4710),_4712,3,_4722):-call(_4722).
	 * asm_pass12(jmpn_atom_x(_4742,_4744),_4746,3,_4756):-call(_4756).
	 * asm_pass12(jmpn_atom_y(_4776,_4778),_4780,3,_4790):-call(_4790).
	 * asm_pass12(jmpn_atomic_x(_4810,_4812),_4814,3,_4824):-call(_4824).
	 * asm_pass12(jmpn_atomic_y(_4844,_4846),_4848,3,_4858):-call(_4858).
	 * asm_pass12(jmpn_num_x(_4878,_4880),_4882,3,_4892):-call(_4892).
	 * asm_pass12(jmpn_num_y(_4912,_4914),_4916,3,_4926):-call(_4926).
	 * asm_pass12(jmpn_int_x(_4946,_4948),_4950,3,_4960):-call(_4960).
	 * asm_pass12(jmpn_int_y(_4980,_4982),_4984,3,_4994):-call(_4994).
	 * asm_pass12(jmpn_float_x(_5014,_5016),_5018,3,_5028):-call(_5028).
	 * asm_pass12(jmpn_float_y(_5048,_5050),_5052,3,_5062):-call(_5062).
	 * asm_pass12(hash_jmpn_nil(_5082),_5084,2,_5094):-call(_5094).
	 * asm_pass12(hash_jmpn_list(_5114),_5116,2,_5126):-call(_5126).
	 * asm_pass12(hash_jmpn_int(_5146,_5148),_5150,3,_5160):-call(_5160).
	 * asm_pass12(hash_jmpn_atom(_5180,_5182),_5184,3,_5202):-sym_member1(sym(_5180,
	 * 0,_5192,_5194),_5184,_5202).
	 * asm_pass12(hash_jmpn_struct((_5230,_5232),_5238),_5240,3,_5258):-sym_member1(
	 * sym(_5230,_5232,_5248,_5250),_5240,_5258).
	 * asm_pass12(hash_jmpn_struct_x((_5286,_5288),_5294),_5296,3,_5314):-
	 * sym_member1(sym(_5286,_5288,_5304,_5306),_5296,_5314).
	 * asm_pass12(hash_jmpn_struct_y((_5342,_5344),_5350),_5352,3,_5370):-
	 * sym_member1(sym(_5342,_5344,_5360,_5362),_5352,_5370).
	 * asm_pass12(hash_jmpn_struct_xx((_5398,_5400),_5406),_5408,3,_5426):-
	 * sym_member1(sym(_5398,_5400,_5416,_5418),_5408,_5426).
	 * asm_pass12(hash_jmpn_struct_xy((_5454,_5456),_5462),_5464,3,_5482):-
	 * sym_member1(sym(_5454,_5456,_5472,_5474),_5464,_5482).
	 * asm_pass12(hash_jmpn_struct_yx((_5510,_5512),_5518),_5520,3,_5538):-
	 * sym_member1(sym(_5510,_5512,_5528,_5530),_5520,_5538).
	 * asm_pass12(hash_jmpn_struct_yy((_5566,_5568),_5574),_5576,3,_5594):-
	 * sym_member1(sym(_5566,_5568,_5584,_5586),_5576,_5594).
	 * asm_pass12(unify_struct_x(_5628,(_5622,_5624)),_5632,3,_5650):-sym_member1(
	 * sym(_5622,_5624,_5640,_5642),_5632,_5650).
	 * asm_pass12(unify_struct_y(_5684,(_5678,_5680)),_5688,3,_5706):-sym_member1(
	 * sym(_5678,_5680,_5696,_5698),_5688,_5706).
	 * asm_pass12(unify_list_x(_5734),_5736,2,_5746):-call(_5746).
	 * asm_pass12(unify_list_y(_5766),_5768,2,_5778):-call(_5778).
	 * asm_pass12(unify_nil_x(_5798),_5800,2,_5810):-call(_5810).
	 * asm_pass12(unify_nil_y(_5830),_5832,2,_5842):-call(_5842).
	 * asm_pass12(unify_atom_x(_5862,_5864),_5866,3,_5884):-sym_member1(sym(_5864,0,
	 * _5874,_5876),_5866,_5884).
	 * asm_pass12(unify_atom_y(_5912,_5914),_5916,3,_5934):-sym_member1(sym(_5914,0,
	 * _5924,_5926),_5916,_5934).
	 * asm_pass12(unify_int_x(_5962,_5964),_5966,3,_5976):-call(_5976).
	 * asm_pass12(unify_int_y(_5996,_5998),_6000,3,_6010):-call(_6010).
	 * asm_pass12(unify_ux_ux(_6030,_6032),_6034,3,_6044):-call(_6044).
	 * asm_pass12(unify_ux_uy(_6064,_6066),_6068,3,_6078):-call(_6078).
	 * asm_pass12(unify_uy_uy(_6098,_6100),_6102,3,_6112):-call(_6112).
	 * asm_pass12(unify_cons_x(_6132,_6134),_6136,3,_6146):-call(_6146).
	 * asm_pass12(unify_cons_y(_6166,_6168),_6170,3,_6180):-call(_6180).
	 * asm_pass12(fork_unify_struct_y(_6206,(_6200,_6202),_6210),_6212,4,_6230):-
	 * sym_member1(sym(_6200,_6202,_6220,_6222),_6212,_6230).
	 * asm_pass12(fork_unify_list_y(_6258,_6260),_6262,3,_6272):-call(_6272).
	 * asm_pass12(fork_unify_nil_y(_6292,_6294),_6296,3,_6306):-call(_6306).
	 * asm_pass12(fork_unify_atom_y(_6326,_6328,_6330),_6332,4,_6350):-sym_member1(
	 * sym(_6328,0,_6340,_6342),_6332,_6350).
	 * asm_pass12(fork_unify_int_y(_6378,_6380,_6382),_6384,4,_6394):-call(_6394).
	 * asm_pass12(fork_unify_ux_uy(_6414,_6416,_6418),_6420,4,_6430):-call(_6430).
	 * asm_pass12(fork_unify_uy_uy(_6450,_6452,_6454),_6456,4,_6466):-call(_6466).
	 * asm_pass12(fork_unicut_struct_y(_6492,(_6486,_6488),_6496),_6498,4,_6516):-
	 * sym_member1(sym(_6486,_6488,_6506,_6508),_6498,_6516).
	 * asm_pass12(fork_unicut_list_y(_6544,_6546),_6548,3,_6558):-call(_6558).
	 * asm_pass12(fork_unicut_nil_y(_6578,_6580),_6582,3,_6592):-call(_6592).
	 * asm_pass12(fork_unicut_atom_y(_6612,_6614,_6616),_6618,4,_6636):-sym_member1(
	 * sym(_6614,0,_6626,_6628),_6618,_6636).
	 * asm_pass12(fork_unicut_int_y(_6664,_6666,_6668),_6670,4,_6680):-call(_6680).
	 * asm_pass12(fork_unicut_ux_uy(_6700,_6702,_6704),_6706,4,_6716):-call(_6716).
	 * asm_pass12(fork_unicut_uy_uy(_6736,_6738,_6740),_6742,4,_6752):-call(_6752).
	 * asm_pass12(unify0_struct_y(_6778,(_6772,_6774)),_6782,3,_6800):-sym_member1(
	 * sym(_6772,_6774,_6790,_6792),_6782,_6800).
	 * asm_pass12(unify0_list_y(_6828),_6830,2,_6840):-call(_6840).
	 * asm_pass12(unify0_nil_y(_6860),_6862,2,_6872):-call(_6872).
	 * asm_pass12(unify0_atom_y(_6892,_6894),_6896,3,_6914):-sym_member1(sym(_6894,0
	 * ,_6904,_6906),_6896,_6914).
	 * asm_pass12(unify0_int_y(_6942,_6944),_6946,3,_6956):-call(_6956).
	 * asm_pass12(unify0_ux_uy(_6976,_6978),_6980,3,_6990):-call(_6990).
	 * asm_pass12(unify0_uy_uy(_7010,_7012),_7014,3,_7024):-call(_7024).
	 * asm_pass12(unicut_struct_y(_7050,(_7044,_7046)),_7054,3,_7072):-sym_member1(
	 * sym(_7044,_7046,_7062,_7064),_7054,_7072).
	 * asm_pass12(unicut_list_y(_7100),_7102,2,_7112):-call(_7112).
	 * asm_pass12(unicut_nil_y(_7132),_7134,2,_7144):-call(_7144).
	 * asm_pass12(unicut_atom_y(_7164,_7166),_7168,3,_7186):-sym_member1(sym(_7166,0
	 * ,_7176,_7178),_7168,_7186).
	 * asm_pass12(unicut_int_y(_7214,_7216),_7218,3,_7228):-call(_7228).
	 * asm_pass12(unicut_uy_uy(_7248,_7250),_7252,3,_7262):-call(_7262).
	 * asm_pass12(unicut,_7280,1,_7290):-call(_7290).
	 * asm_pass12(unify_arg_nil,_7308,1,_7318):-call(_7318).
	 * asm_pass12(unify_arg_atom(_7338),_7340,2,_7358):-sym_member1(sym(_7338,0,
	 * _7348,_7350),_7340,_7358).
	 * asm_pass12(unify_arg_int(_7386),_7388,2,_7398):-call(_7398).
	 * asm_pass12(unify_arg_ux_ux(_7418,_7420),_7422,3,_7432):-call(_7432).
	 * asm_pass12(unify_arg_ux(_7452),_7454,2,_7464):-call(_7464).
	 * asm_pass12(unify_arg_ux_vy(_7484,_7486),_7488,3,_7498):-call(_7498).
	 * asm_pass12(unify_arg_ux_vx(_7518,_7520),_7522,3,_7532):-call(_7532).
	 * asm_pass12(unify_arg_uy_uy(_7552,_7554),_7556,3,_7566):-call(_7566).
	 * asm_pass12(unify_arg_uy(_7586),_7588,2,_7598):-call(_7598).
	 * asm_pass12(unify_arg_vx(_7618),_7620,2,_7630):-call(_7630).
	 * asm_pass12(unify_arg_vy(_7650),_7652,2,_7662):-call(_7662).
	 * asm_pass12(unify_arg_list,_7680,1,_7690):-call(_7690).
	 * asm_pass12(unify_arg_struct((_7710,_7712)),_7718,2,_7736):-sym_member1(sym(
	 * _7710,_7712,_7726,_7728),_7718,_7736).
	 * asm_pass12(unify_arg_void_one,_7762,1,_7772):-call(_7772).
	 * asm_pass12(unify_arg_void(_7792),_7794,2,_7804):-call(_7804).
	 * asm_pass12(unify_arg_wy(_7824),_7826,2,_7836):-call(_7836).
	 * asm_pass12(unify_arg_vx_vx(_7856,_7858),_7860,3,_7870):-call(_7870).
	 * asm_pass12(unify_arg_vx_vy(_7890,_7892),_7894,3,_7904):-call(_7904).
	 * asm_pass12(unify_arg_vx_ux(_7924,_7926),_7928,3,_7938):-call(_7938).
	 * asm_pass12(unify_arg_vx_uy(_7958,_7960),_7962,3,_7972):-call(_7972).
	 * asm_pass12(unify_arg_vy_vx(_7992,_7994),_7996,3,_8006):-call(_8006).
	 * asm_pass12(unify_arg_vy_vy(_8026,_8028),_8030,3,_8040):-call(_8040).
	 * asm_pass12(unify_arg_vy_ux(_8060,_8062),_8064,3,_8074):-call(_8074).
	 * asm_pass12(unify_arg_vy_uy(_8094,_8096),_8098,3,_8108):-call(_8108).
	 * asm_pass12(unify_arg_iii(_8128,_8130,_8132),_8134,4,_8144):-call(_8144).
	 * asm_pass12(move_struct_x(_8170,(_8164,_8166)),_8174,3,_8192):-sym_member1(sym
	 * (_8164,_8166,_8182,_8184),_8174,_8192).
	 * asm_pass12(move_struct_y(_8226,(_8220,_8222)),_8230,3,_8248):-sym_member1(sym
	 * (_8220,_8222,_8238,_8240),_8230,_8248).
	 * asm_pass12(move_list_x(_8276),_8278,2,_8288):-call(_8288).
	 * asm_pass12(move_list_y(_8308),_8310,2,_8320):-call(_8320).
	 * asm_pass12(move_nil_x(_8340),_8342,2,_8352):-call(_8352).
	 * asm_pass12(move_nil_y(_8372),_8374,2,_8384):-call(_8384).
	 * asm_pass12(move_atom_x(_8404,_8406),_8408,3,_8426):-sym_member1(sym(_8406,0,
	 * _8416,_8418),_8408,_8426).
	 * asm_pass12(move_atom_y(_8454,_8456),_8458,3,_8476):-sym_member1(sym(_8456,0,
	 * _8466,_8468),_8458,_8476).
	 * asm_pass12(move_int_x(_8504,_8506),_8508,3,_8518):-call(_8518).
	 * asm_pass12(move_int_y(_8538,_8540),_8542,3,_8552):-call(_8552).
	 * asm_pass12(move_x_ux(_8572,_8574),_8576,3,_8586):-call(_8586).
	 * asm_pass12(move_x_uy(_8606,_8608),_8610,3,_8620):-call(_8620).
	 * asm_pass12(move_y_ux(_8640,_8642),_8644,3,_8654):-call(_8654).
	 * asm_pass12(move_y_uy(_8674,_8676),_8678,3,_8688):-call(_8688).
	 * asm_pass12(move_vx(_8708),_8710,2,_8720):-call(_8720).
	 * asm_pass12(move_vy(_8740),_8742,2,_8752):-call(_8752).
	 * asm_pass12(move_x_wy(_8772,_8774),_8776,3,_8786):-call(_8786).
	 * asm_pass12(move_y_wy(_8806,_8808),_8810,3,_8820):-call(_8820).
	 * asm_pass12(move_yy_yw(_8840,_8842,_8844,_8846),_8848,5,_8858):-call(_8858).
	 * asm_pass12(move_yw_yy(_8878,_8880,_8882,_8884),_8886,5,_8896):-call(_8896).
	 * asm_pass12(move_yy_yy(_8916,_8918,_8920,_8922),_8924,5,_8934):-call(_8934).
	 * asm_pass12(move_yy_yy_yy(_8954,_8956,_8958,_8960,_8962,_8964),_8966,7,_8976):
	 * -call(_8976). asm_pass12(and(_8996,_8998,_9000),_9002,4,_9012):-call(_9012).
	 * asm_pass12(or(_9032,_9034,_9036),_9038,4,_9048):-call(_9048).
	 * asm_pass12(lshiftl(_9068,_9070,_9072),_9074,4,_9084):-call(_9084).
	 * asm_pass12(lshiftr(_9104,_9106,_9108),_9110,4,_9120):-call(_9120).
	 * asm_pass12(complement(_9140,_9142),_9144,3,_9154):-call(_9154).
	 * asm_pass12(add(_9174,_9176,_9178),_9180,4,_9190):-call(_9190).
	 * asm_pass12(add1_y(_9210),_9212,2,_9222):-call(_9222).
	 * asm_pass12(sub(_9242,_9244,_9246),_9248,4,_9258):-call(_9258).
	 * asm_pass12(sub1_y(_9278),_9280,2,_9290):-call(_9290).
	 * asm_pass12(mul(_9310,_9312,_9314),_9316,4,_9326):-call(_9326).
	 * asm_pass12(div(_9346,_9348,_9350),_9352,4,_9362):-call(_9362).
	 * asm_pass12(idiv(_9382,_9384,_9386),_9388,4,_9398):-call(_9398).
	 * asm_pass12(mod(_9418,_9420,_9422),_9424,4,_9434):-call(_9434).
	 * asm_pass12(para_struct((_9454,_9456)),_9462,2,_9480):-sym_member1(sym(_9454,
	 * _9456,_9470,_9472),_9462,_9480).
	 * asm_pass12(para_list,_9506,1,_9516):-call(_9516).
	 * asm_pass12(para_nil,_9534,1,_9544):-call(_9544).
	 * asm_pass12(para_atom(_9564),_9566,2,_9584):-sym_member1(sym(_9564,0,_9574,
	 * _9576),_9566,_9584). asm_pass12(para_int(_9612),_9614,2,_9624):-call(_9624).
	 * asm_pass12(para_ux(_9644),_9646,2,_9656):-call(_9656).
	 * asm_pass12(para_uy(_9676),_9678,2,_9688):-call(_9688).
	 * asm_pass12(para_vx(_9708),_9710,2,_9720):-call(_9720).
	 * asm_pass12(para_vy(_9740),_9742,2,_9752):-call(_9752).
	 * asm_pass12(para_void_one,_9770,1,_9780):-call(_9780).
	 * asm_pass12(para_void(_9800),_9802,2,_9812):-call(_9812).
	 * asm_pass12(para_vy_vy(_9832,_9834),_9836,3,_9846):-call(_9846).
	 * asm_pass12(para_vy_ux(_9866,_9868),_9870,3,_9880):-call(_9880).
	 * asm_pass12(para_vy_uy(_9900,_9902),_9904,3,_9914):-call(_9914).
	 * asm_pass12(para_ux_vy(_9934,_9936),_9938,3,_9948):-call(_9948).
	 * asm_pass12(para_ux_ux(_9968,_9970),_9972,3,_9982):-call(_9982).
	 * asm_pass12(para_ux_uy(_10002,_10004),_10006,3,_10016):-call(_10016).
	 * asm_pass12(para_uy_vy(_10036,_10038),_10040,3,_10050):-call(_10050).
	 * asm_pass12(para_uy_ux(_10070,_10072),_10074,3,_10084):-call(_10084).
	 * asm_pass12(para_uy_uy(_10104,_10106),_10108,3,_10118):-call(_10118).
	 * asm_pass12(para_ux_ux_ux(_10138,_10140,_10142),_10144,4,_10154):-call(_10154)
	 * .
	 * asm_pass12(para_ux_ux_uy(_10174,_10176,_10178),_10180,4,_10190):-call(_10190)
	 * .
	 * asm_pass12(para_ux_uy_ux(_10210,_10212,_10214),_10216,4,_10226):-call(_10226)
	 * .
	 * asm_pass12(para_ux_uy_uy(_10246,_10248,_10250),_10252,4,_10262):-call(_10262)
	 * .
	 * asm_pass12(para_uy_ux_ux(_10282,_10284,_10286),_10288,4,_10298):-call(_10298)
	 * .
	 * asm_pass12(para_uy_ux_uy(_10318,_10320,_10322),_10324,4,_10334):-call(_10334)
	 * .
	 * asm_pass12(para_uy_uy_ux(_10354,_10356,_10358),_10360,4,_10370):-call(_10370)
	 * .
	 * asm_pass12(para_uy_uy_uy(_10390,_10392,_10394),_10396,4,_10406):-call(_10406)
	 * . asm_pass12(para_uy_uy_uy_uy(_10426,_10428,_10430,_10432),_10434,5,_10444):-
	 * call(_10444).
	 * asm_pass12(call((_10464,_10466)),_10472,2,_10480):-asm_pass12_call(_10464,
	 * _10466,_10472,_10480).
	 * asm_pass12(callv(_10510),_10512,2,_10522):-call(_10522).
	 * asm_pass12(execute((_10542,_10544)),_10550,2,_10558):-asm_pass12_call(_10542,
	 * _10544,_10550,_10558).
	 * asm_pass12(executev(_10588),_10590,2,_10600):-call(_10600).
	 * asm_pass12(return_a,_10618,1,_10628):-call(_10628).
	 * asm_pass12(return_b,_10646,1,_10656):-call(_10656).
	 * asm_pass12(jmpn_det(_10676),_10678,2,_10688):-call(_10688).
	 * asm_pass12(save_ht_jmp(_10708,_10710),_10712,3,_10722):-call(_10722).
	 * asm_pass12(allocate_flat(_10742),_10744,2,_10754):-call(_10754).
	 * asm_pass12(allocate_nonflat(_10774),_10776,2,_10786):-call(_10786).
	 * asm_pass12(allocate_nondet(_10806),_10808,2,_10818):-call(_10818).
	 * asm_pass12(flat_to_nondet(_10838),_10840,2,_10850):-call(_10850).
	 * asm_pass12(fail,_10868,1,_10878):-call(_10878).
	 * asm_pass12(fail0,_10896,1,_10906):-call(_10906).
	 * asm_pass12(fork(_10926),_10928,2,_10938):-call(_10938).
	 * asm_pass12(commit,_10956,1,_10966):-call(_10966).
	 * asm_pass12(cut,_10984,1,_10994):-call(_10994).
	 * asm_pass12(cut_fail,_11012,1,_11022):-call(_11022).
	 * asm_pass12(cut_return,_11040,1,_11050):-call(_11050).
	 * asm_pass12(save_b,_11068,1,_11078):-call(_11078).
	 * asm_pass12(getbreg(_11098),_11100,2,_11110):-call(_11110).
	 * asm_pass12(getpbreg(_11130),_11132,2,_11142):-call(_11142).
	 * asm_pass12(putbreg(_11162),_11164,2,_11174):-call(_11174).
	 * asm_pass12(hash_x(_11194,_11196),_11198,5,_11208):-call(_11208).
	 * asm_pass12(hash_y(_11228,_11230),_11232,5,_11242):-call(_11242).
	 * asm_pass12(tabsize(_11262),_11264,2,_11274):-call(_11274).
	 * asm_pass12(arg(_11294,_11296,_11298),_11300,4,_11310):-call(_11310).
	 * asm_pass12(arg0(_11330,_11332,_11334),_11336,4,_11346):-call(_11346).
	 * asm_pass12(setarg(_11366,_11368,_11370),_11372,4,_11382):-call(_11382).
	 * asm_pass12(setarg0(_11402,_11404,_11406),_11408,4,_11418):-call(_11418).
	 * asm_pass12(functor(_11438,_11440,_11442),_11444,4,_11454):-call(_11454).
	 * asm_pass12(builtin0(_11474,_11476),_11478,3,_11488):-call(_11488).
	 * asm_pass12(builtin1(_11508,_11510,_11512),_11514,4,_11524):-call(_11524).
	 * asm_pass12(builtin2(_11544,_11546,_11548,_11550),_11552,5,_11562):-call(
	 * _11562).
	 * asm_pass12(builtin3(_11582,_11584,_11586,_11588,_11590),_11592,6,_11602):-
	 * call(_11602).
	 * asm_pass12(builtin4(_11622,_11624,_11626,_11628,_11630,_11632),_11634,7,
	 * _11644):-call(_11644).
	 * asm_pass12(func_arity(_11664,_11666),_11668,3,_11678):-call(_11678).
	 * asm_pass12(halt,_11696,1,_11706):-call(_11706).
	 * asm_pass12(endfile,_11724,1,_11734):-call(_11734).
	 * asm_pass12(gethtreg(_11754,_11756),_11758,3,_11768):-call(_11768).
	 * asm_pass12(puthtreg(_11788,_11790),_11792,3,_11802):-call(_11802).
	 * asm_pass12(endfile,_11820,1,_11830):-call(_11830).
	 * asm_pass12(get_ar_cps,_11848,1,_11858):-call(_11858).
	 * asm_pass12(put_ar_cps(_11878),_11880,2,_11890):-call(_11890).
	 * asm_pass12(move_ar_cps(_11910),_11912,2,_11922):-call(_11922).
	 * asm_pass12(jmpn_det_get_ar_cps(_11942),_11944,2,_11954):-call(_11954).
	 * asm_pass12(allocate_susp(_11974),_11976,2,_11986):-call(_11986).
	 * asm_pass12(susp_var_x(_12006),_12008,2,_12018):-call(_12018).
	 * asm_pass12(susp_var_y(_12038),_12040,2,_12050):-call(_12050).
	 * asm_pass12(delay((_12070,_12072),_12078),_12080,3,_12098):-sym_member1(sym(
	 * _12070,_12072,_12088,_12090),_12080,_12098).
	 * asm_pass12(susp_var_delay(_12132,(_12126,_12128),_12136,_12138),_12140,5,
	 * _12158):-sym_member1(sym(_12126,_12128,_12148,_12150),_12140,_12158).
	 * asm_pass12(end_delay,_12184,1,_12194):-call(_12194).
	 * asm_pass12(nondet(_12214),_12216,2,_12226):-call(_12226).
	 * asm_pass12(jmp_susp(_12246),_12248,2,_12258):-call(_12258).
	 * asm_pass12(jmpn_dvar_y(_12278,_12280),_12282,3,_12292):-call(_12292).
	 * asm_pass12(susp_var2_delay(_12318,(_12312,_12314),_12322,_12324),_12326,5,
	 * _12344):-sym_member1(sym(_12312,_12314,_12334,_12336),_12326,_12344).
	 * asm_pass12(domain_set_false_yy(_12372,_12374),_12376,3,_12386):-call(_12386).
	 * asm_pass12(domain_set_false_yx(_12406,_12408),_12410,3,_12420):-call(_12420).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass12_call_3 : public Code {

	/*
	 * 
	 * asm_pass12_call(_12438,_12440,_12442,_12458):-isglobal('$asm_bp',0,
	 * b_GET_SYM_TYPE_ccf(_12438,_12440,_12444,:(_12444=\=3,true,_12458))).
	 * asm_pass12_call(_12502,_12504,_12506,_12530):-
	 * :(true,sym_member1(sym(_12502,_12504,_12514,_12516),_12506),_12530).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass2_4 : public Code {

	/*
	 * 
	 * asm_pass2(_12556,_12558,_12560,_12562,_12580):-
	 * :(true,asm_rearange_csym(_12560,255,_12570,_12572),asm_symbol(_12572,
	 * asm_pass2a(_12556,_12560,_12562,asm_index(_12558,_12560,_12562,_12580)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_index_3 : public Code {

	/*
	 * 
	 * asm_index([],_12634,_12636,_12644):- :(true,true,_12644).
	 * asm_index([_12672|_12674],_12676,_12678,_12694):-
	 * :(true,asm_proc_index(_12672,_12676,_12678),asm_index(_12674,_12676,_12678,
	 * _12694)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_proc_index_3 : public Code {

	/*
	 * 
	 * asm_proc_index(pred(_12732,_12734,_12736,_12738),_12740,_12742,_12760):-
	 * :(true,x_or_y(_12734,_12748),asm_lookup_ltab(_12732,_12742,_12750,
	 * asm_lookup_ltab(_12738,_12742,_12752,b_ASPN4_cccc(_12750,_12748,_12736,_12752
	 * ,_12760)))).
	 * asm_proc_index(arglabel(_12820,_12822,_12824),_12826,_12828,_12854):-
	 * :(_12820==c,asm_lookup_ctab(_12822,0,_12826,_12844),asm_lookup_ltab(_12824,
	 * _12828,_12846,writename(_12820,b_ASPN2_cc(_12844,_12846,_12854)))).
	 * asm_proc_index(arglabel(_12906,_12908,_12910),_12912,_12914,_12944):-
	 * :(_12906==s,_12908=(_12924,_12926),asm_lookup_ctab(_12924,_12926,_12912,
	 * _12934,asm_lookup_ltab(_12910,_12914,_12936,writename(_12906,b_ASPN2_cc(
	 * _12934,_12936,_12944))))).
	 * asm_proc_index(arglabel(_13008,_13010,_13012),_13014,_13016,_13032):-
	 * :(true,asm_lookup_ltab(_13012,_13016,_13024),writename(_13008,b_ASPN2_cc(
	 * _13010,_13024,_13032))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass2a_3 : public Code {

	/*
	 * 
	 * asm_pass2a([],_13072,_13074,_13082):- :(true,true,_13082).
	 * asm_pass2a([_13110|_13112],_13114,_13116,_13132):-
	 * :(true,asm_pass2_inst(_13110,_13114,_13116),asm_pass2a(_13112,_13114,_13116,
	 * _13132)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass2_inst_3 : public Code {

	/*
	 * 
	 * asm_pass2_inst(label(_13170),_13172,_13174,_13182):- :(true,true,_13182).
	 * asm_pass2_inst(call(_13210),_13212,_13214,_13236):-
	 * :(asm_lookup_ltab(_13210,_13214,_13222),opcode(call_d,_13228),b_ASPN2_cc(
	 * _13228,_13222,_13236)).
	 * asm_pass2_inst(call((_13272,_13274)),_13280,_13282,_13352):-
	 * :(true,(asm_lookup_ctab(_13272,_13274,_13280,_13292)->opcode(call,_13298),
	 * b_ASPN2_cc(_13298,_13292);warning([_13272/_13274,' is called but not
	 * defined'])),_13352). asm_pass2_inst(execute(_13380),_13382,_13384,_13406):-
	 * :(asm_lookup_ltab(_13380,_13384,_13392),opcode(djmp,_13398),b_ASPN2_cc(_13398
	 * ,_13392,_13406)).
	 * asm_pass2_inst(execute((_13442,_13444)),_13450,_13452,_13522):-
	 * :(true,(asm_lookup_ctab(_13442,_13444,_13450,_13462)->opcode(execute,_13468),
	 * b_ASPN2_cc(_13468,_13462);warning([_13442/_13444,' is called but not
	 * defined'])),_13522). asm_pass2_inst(jmp(_13550),_13552,_13554,_13576):-
	 * :(asm_lookup_ltab(_13550,_13554,_13562),opcode(jmp,_13568),b_ASPN2_cc(_13568,
	 * _13562,_13576)). asm_pass2_inst(jmp_susp(_13612),_13614,_13616,_13638):-
	 * :(asm_lookup_ltab(_13612,_13616,_13624),opcode(jmp_susp,_13630),b_ASPN2_cc(
	 * _13630,_13624,_13638)).
	 * asm_pass2_inst(jmpn_eq_struct_x(_13680,(_13674,_13676),_13684,_13686),_13688,
	 * _13690,_13714):-
	 * :(true,asm_lookup_ctab(_13674,_13676,_13688,_13700),asm_lookup_ltab(_13684,
	 * _13690,_13702,asm_lookup_ltab(_13686,_13690,_13704,opcode(jmpn_eq_struct_x,
	 * _13706,b_ASPN4_cccc(_13706,_13680,_13700,_13702,b_ASPN_c(_13704,_13714)))))).
	 * asm_pass2_inst(jmpn_eq_struct_y(_13794,(_13788,_13790),_13798,_13800),_13802,
	 * _13804,_13828):-
	 * :(true,asm_lookup_ctab(_13788,_13790,_13802,_13814),asm_lookup_ltab(_13798,
	 * _13804,_13816,asm_lookup_ltab(_13800,_13804,_13818,opcode(jmpn_eq_struct_y,
	 * _13820,b_ASPN4_cccc(_13820,_13794,_13814,_13816,b_ASPN_c(_13818,_13828)))))).
	 * asm_pass2_inst(jmpn_eq_atom_x(_13902,_13904,_13906,_13908),_13910,_13912,
	 * _13936):-
	 * :(true,asm_lookup_ctab(_13904,0,_13910,_13922),asm_lookup_ltab(_13906,_13912,
	 * _13924,asm_lookup_ltab(_13908,_13912,_13926,opcode(jmpn_eq_atom_x,_13928,
	 * b_ASPN4_cccc(_13928,_13902,_13922,_13924,b_ASPN_c(_13926,_13936)))))).
	 * asm_pass2_inst(jmpn_eq_atom_y(_14010,_14012,_14014,_14016),_14018,_14020,
	 * _14044):-
	 * :(true,asm_lookup_ctab(_14012,0,_14018,_14030),asm_lookup_ltab(_14014,_14020,
	 * _14032,asm_lookup_ltab(_14016,_14020,_14034,opcode(jmpn_eq_atom_y,_14036,
	 * b_ASPN4_cccc(_14036,_14010,_14030,_14032,b_ASPN_c(_14034,_14044)))))).
	 * asm_pass2_inst(jmpn_nil_x(_14118,_14120,_14122),_14124,_14126,_14146):-
	 * :(true,asm_lookup_ltab(_14120,_14126,_14134),asm_lookup_ltab(_14122,_14126,
	 * _14136,opcode(jmpn_nil_x,_14138,b_ASPN4_cccc(_14138,_14118,_14134,_14136,
	 * _14146)))).
	 * asm_pass2_inst(jmpn_nil_y(_14204,_14206,_14208),_14210,_14212,_14232):-
	 * :(true,asm_lookup_ltab(_14206,_14212,_14220),asm_lookup_ltab(_14208,_14212,
	 * _14222,opcode(jmpn_nil_y,_14224,b_ASPN4_cccc(_14224,_14204,_14220,_14222,
	 * _14232)))).
	 * asm_pass2_inst(switch_list_x(_14290,_14292,_14294,_14296),_14298,_14300,
	 * _14322):-
	 * :(true,asm_lookup_ltab(_14292,_14300,_14308),asm_lookup_ltab(_14294,_14300,
	 * _14310,asm_lookup_ltab(_14296,_14300,_14312,opcode(switch_list_x,_14314,
	 * b_ASPN4_cccc(_14314,_14290,_14308,_14310,b_ASPN_c(_14312,_14322)))))).
	 * asm_pass2_inst(switch_list_y(_14396,_14398,_14400,_14402),_14404,_14406,
	 * _14428):-
	 * :(true,asm_lookup_ltab(_14398,_14406,_14414),asm_lookup_ltab(_14400,_14406,
	 * _14416,asm_lookup_ltab(_14402,_14406,_14418,opcode(switch_list_y,_14420,
	 * b_ASPN4_cccc(_14420,_14396,_14414,_14416,b_ASPN_c(_14418,_14428)))))).
	 * asm_pass2_inst(switch_list_yxx(_14502,_14504,_14506,_14508),_14510,_14512,
	 * _14534):-
	 * :(true,asm_lookup_ltab(_14504,_14512,_14520),asm_lookup_ltab(_14506,_14512,
	 * _14522,asm_lookup_ltab(_14508,_14512,_14524,opcode(switch_list_yxx,_14526,
	 * b_ASPN4_cccc(_14526,_14502,_14520,_14522,b_ASPN_c(_14524,_14534)))))).
	 * asm_pass2_inst(switch_list_yxy(_14608,_14610,_14612,_14614),_14616,_14618,
	 * _14640):-
	 * :(true,asm_lookup_ltab(_14610,_14618,_14626),asm_lookup_ltab(_14612,_14618,
	 * _14628,asm_lookup_ltab(_14614,_14618,_14630,opcode(switch_list_yxy,_14632,
	 * b_ASPN4_cccc(_14632,_14608,_14626,_14628,b_ASPN_c(_14630,_14640)))))).
	 * asm_pass2_inst(switch_list_yyx(_14714,_14716,_14718,_14720),_14722,_14724,
	 * _14746):-
	 * :(true,asm_lookup_ltab(_14716,_14724,_14732),asm_lookup_ltab(_14718,_14724,
	 * _14734,asm_lookup_ltab(_14720,_14724,_14736,opcode(switch_list_yyx,_14738,
	 * b_ASPN4_cccc(_14738,_14714,_14732,_14734,b_ASPN_c(_14736,_14746)))))).
	 * asm_pass2_inst(switch_list_yyy(_14820,_14822,_14824,_14826),_14828,_14830,
	 * _14852):-
	 * :(true,asm_lookup_ltab(_14822,_14830,_14838),asm_lookup_ltab(_14824,_14830,
	 * _14840,asm_lookup_ltab(_14826,_14830,_14842,opcode(switch_list_yyy,_14844,
	 * b_ASPN4_cccc(_14844,_14820,_14838,_14840,b_ASPN_c(_14842,_14852)))))).
	 * asm_pass2_inst(jmpn_eq_int_x(_14926,_14928,_14930,_14932),_14934,_14936,
	 * _14956):-
	 * :(true,asm_lookup_ltab(_14930,_14936,_14944),asm_lookup_ltab(_14932,_14936,
	 * _14946,opcode(jmpn_eq_int_x,_14948,b_ASPN4_cccc(_14948,_14926,_14928,_14944,
	 * b_ASPN_c(_14946,_14956))))).
	 * asm_pass2_inst(jmpn_eq_int_y(_15020,_15022,_15024,_15026),_15028,_15030,
	 * _15050):-
	 * :(true,asm_lookup_ltab(_15024,_15030,_15038),asm_lookup_ltab(_15026,_15030,
	 * _15040,opcode(jmpn_eq_int_y,_15042,b_ASPN4_cccc(_15042,_15020,_15022,_15038,
	 * b_ASPN_c(_15040,_15050))))).
	 * asm_pass2_inst(jmpn_eql(_15114,_15116,_15118),_15120,_15122,_15144):-
	 * :(true,asm_lookup_ltab(_15118,_15122,_15130),x_or_y(_15114,_15132,x_or_y(
	 * _15116,_15134,opcode(jmpn_eql,_15136,b_ASPN4_cccc(_15136,_15132,_15134,_15130
	 * ,_15144))))).
	 * asm_pass2_inst(jmp_eql(_15208,_15210,_15212),_15214,_15216,_15238):-
	 * :(true,asm_lookup_ltab(_15212,_15216,_15224),x_or_y(_15208,_15226,x_or_y(
	 * _15210,_15228,opcode(jmp_eql,_15230,b_ASPN4_cccc(_15230,_15226,_15228,_15224,
	 * _15238))))).
	 * asm_pass2_inst(jmp_eql_yy(_15302,_15304,_15306),_15308,_15310,_15328):-
	 * :(true,asm_lookup_ltab(_15306,_15310,_15318),opcode(jmp_eql_yy,_15320,
	 * b_ASPN4_cccc(_15320,_15302,_15304,_15318,_15328))).
	 * asm_pass2_inst(jmpn_gt(_15376,_15378,_15380),_15382,_15384,_15406):-
	 * :(true,asm_lookup_ltab(_15380,_15384,_15392),x_or_y(_15376,_15394,x_or_y(
	 * _15378,_15396,opcode(jmpn_gt,_15398,b_ASPN4_cccc(_15398,_15394,_15396,_15392,
	 * _15406))))).
	 * asm_pass2_inst(jmpn_gt_yy(_15470,_15472,_15474),_15476,_15478,_15496):-
	 * :(true,asm_lookup_ltab(_15474,_15478,_15486),opcode(jmpn_gt_yy,_15488,
	 * b_ASPN4_cccc(_15488,_15470,_15472,_15486,_15496))).
	 * asm_pass2_inst(jmpn_ge(_15544,_15546,_15548),_15550,_15552,_15574):-
	 * :(true,asm_lookup_ltab(_15548,_15552,_15560),x_or_y(_15544,_15562,x_or_y(
	 * _15546,_15564,opcode(jmpn_ge,_15566,b_ASPN4_cccc(_15566,_15562,_15564,_15560,
	 * _15574))))).
	 * asm_pass2_inst(jmpn_ge_yy(_15638,_15640,_15642),_15644,_15646,_15664):-
	 * :(true,asm_lookup_ltab(_15642,_15646,_15654),opcode(jmpn_ge_yy,_15656,
	 * b_ASPN4_cccc(_15656,_15638,_15640,_15654,_15664))).
	 * asm_pass2_inst(jmpn_id(_15712,_15714,_15716),_15718,_15720,_15742):-
	 * :(true,asm_lookup_ltab(_15716,_15720,_15728),x_or_y(_15712,_15730,x_or_y(
	 * _15714,_15732,opcode(jmpn_id,_15734,b_ASPN4_cccc(_15734,_15730,_15732,_15728,
	 * _15742))))).
	 * asm_pass2_inst(jmp_id(_15806,_15808,_15810),_15812,_15814,_15836):-
	 * :(true,asm_lookup_ltab(_15810,_15814,_15822),x_or_y(_15806,_15824,x_or_y(
	 * _15808,_15826,opcode(jmp_id,_15828,b_ASPN4_cccc(_15828,_15824,_15826,_15822,
	 * _15836))))). asm_pass2_inst(jmpn_var_x(_15900,_15902),_15904,_15906,_15924):-
	 * :(true,asm_lookup_ltab(_15902,_15906,_15914),opcode(jmpn_var_x,_15916,
	 * b_ASPN3_ccc(_15916,_15900,_15914,_15924))).
	 * asm_pass2_inst(jmpn_var_y(_15970,_15972),_15974,_15976,_15994):-
	 * :(true,asm_lookup_ltab(_15972,_15976,_15984),opcode(jmpn_var_y,_15986,
	 * b_ASPN3_ccc(_15986,_15970,_15984,_15994))).
	 * asm_pass2_inst(jmp_var_x(_16040,_16042),_16044,_16046,_16064):-
	 * :(true,asm_lookup_ltab(_16042,_16046,_16054),opcode(jmp_var_x,_16056,
	 * b_ASPN3_ccc(_16056,_16040,_16054,_16064))).
	 * asm_pass2_inst(jmp_var_y(_16110,_16112),_16114,_16116,_16134):-
	 * :(true,asm_lookup_ltab(_16112,_16116,_16124),opcode(jmp_var_y,_16126,
	 * b_ASPN3_ccc(_16126,_16110,_16124,_16134))).
	 * asm_pass2_inst(jmpn_atom_x(_16180,_16182),_16184,_16186,_16204):-
	 * :(true,asm_lookup_ltab(_16182,_16186,_16194),opcode(jmpn_atom_x,_16196,
	 * b_ASPN3_ccc(_16196,_16180,_16194,_16204))).
	 * asm_pass2_inst(jmpn_atom_y(_16250,_16252),_16254,_16256,_16274):-
	 * :(true,asm_lookup_ltab(_16252,_16256,_16264),opcode(jmpn_atom_y,_16266,
	 * b_ASPN3_ccc(_16266,_16250,_16264,_16274))).
	 * asm_pass2_inst(jmpn_atomic_x(_16320,_16322),_16324,_16326,_16344):-
	 * :(true,asm_lookup_ltab(_16322,_16326,_16334),opcode(jmpn_atomic_x,_16336,
	 * b_ASPN3_ccc(_16336,_16320,_16334,_16344))).
	 * asm_pass2_inst(jmpn_atomic_y(_16390,_16392),_16394,_16396,_16414):-
	 * :(true,asm_lookup_ltab(_16392,_16396,_16404),opcode(jmpn_atomic_y,_16406,
	 * b_ASPN3_ccc(_16406,_16390,_16404,_16414))).
	 * asm_pass2_inst(jmpn_num_x(_16460,_16462),_16464,_16466,_16484):-
	 * :(true,asm_lookup_ltab(_16462,_16466,_16474),opcode(jmpn_num_x,_16476,
	 * b_ASPN3_ccc(_16476,_16460,_16474,_16484))).
	 * asm_pass2_inst(jmpn_num_y(_16530,_16532),_16534,_16536,_16554):-
	 * :(true,asm_lookup_ltab(_16532,_16536,_16544),opcode(jmpn_num_y,_16546,
	 * b_ASPN3_ccc(_16546,_16530,_16544,_16554))).
	 * asm_pass2_inst(jmpn_float_x(_16600,_16602),_16604,_16606,_16624):-
	 * :(true,asm_lookup_ltab(_16602,_16606,_16614),opcode(jmpn_float_x,_16616,
	 * b_ASPN3_ccc(_16616,_16600,_16614,_16624))).
	 * asm_pass2_inst(jmpn_float_y(_16670,_16672),_16674,_16676,_16694):-
	 * :(true,asm_lookup_ltab(_16672,_16676,_16684),opcode(jmpn_float_y,_16686,
	 * b_ASPN3_ccc(_16686,_16670,_16684,_16694))).
	 * asm_pass2_inst(jmpn_int_x(_16740,_16742),_16744,_16746,_16764):-
	 * :(true,asm_lookup_ltab(_16742,_16746,_16754),opcode(jmpn_int_x,_16756,
	 * b_ASPN3_ccc(_16756,_16740,_16754,_16764))).
	 * asm_pass2_inst(jmpn_int_y(_16810,_16812),_16814,_16816,_16834):-
	 * :(true,asm_lookup_ltab(_16812,_16816,_16824),opcode(jmpn_int_y,_16826,
	 * b_ASPN3_ccc(_16826,_16810,_16824,_16834))).
	 * asm_pass2_inst(hash_jmpn_nil(_16880),_16882,_16884,_16902):-
	 * :(true,asm_lookup_ltab(_16880,_16884,_16892),opcode(hash_jmpn_nil,_16894,
	 * b_ASPN2_cc(_16894,_16892,_16902))).
	 * asm_pass2_inst(hash_jmpn_list(_16946),_16948,_16950,_16968):-
	 * :(true,asm_lookup_ltab(_16946,_16950,_16958),opcode(hash_jmpn_list,_16960,
	 * b_ASPN2_cc(_16960,_16958,_16968))).
	 * asm_pass2_inst(hash_jmpn_int(_17012,_17014),_17016,_17018,_17036):-
	 * :(true,asm_lookup_ltab(_17014,_17018,_17026),opcode(hash_jmpn_int,_17028,
	 * b_ASPN3_ccc(_17028,_17012,_17026,_17036))).
	 * asm_pass2_inst(hash_jmpn_atom(_17082,_17084),_17086,_17088,_17110):-
	 * :(true,asm_lookup_ctab(_17082,0,_17086,_17098),asm_lookup_ltab(_17084,_17088,
	 * _17100,opcode(hash_jmpn_atom,_17102,b_ASPN3_ccc(_17102,_17098,_17100,_17110))
	 * )).
	 * asm_pass2_inst(hash_jmpn_struct((_17166,_17168),_17174),_17176,_17178,_17200)
	 * :-
	 * :(true,asm_lookup_ctab(_17166,_17168,_17176,_17188),asm_lookup_ltab(_17174,
	 * _17178,_17190,opcode(hash_jmpn_struct,_17192,b_ASPN3_ccc(_17192,_17188,_17190
	 * ,_17200)))).
	 * asm_pass2_inst(hash_jmpn_struct_x((_17256,_17258),_17264),_17266,_17268,
	 * _17290):-
	 * :(true,asm_lookup_ctab(_17256,_17258,_17266,_17278),asm_lookup_ltab(_17264,
	 * _17268,_17280,opcode(hash_jmpn_struct_x,_17282,b_ASPN3_ccc(_17282,_17278,
	 * _17280,_17290)))).
	 * asm_pass2_inst(hash_jmpn_struct_y((_17346,_17348),_17354),_17356,_17358,
	 * _17380):-
	 * :(true,asm_lookup_ctab(_17346,_17348,_17356,_17368),asm_lookup_ltab(_17354,
	 * _17358,_17370,opcode(hash_jmpn_struct_y,_17372,b_ASPN3_ccc(_17372,_17368,
	 * _17370,_17380)))).
	 * asm_pass2_inst(hash_jmpn_struct_xx((_17436,_17438),_17444),_17446,_17448,
	 * _17470):-
	 * :(true,asm_lookup_ctab(_17436,_17438,_17446,_17458),asm_lookup_ltab(_17444,
	 * _17448,_17460,opcode(hash_jmpn_struct_xx,_17462,b_ASPN3_ccc(_17462,_17458,
	 * _17460,_17470)))).
	 * asm_pass2_inst(hash_jmpn_struct_xy((_17526,_17528),_17534),_17536,_17538,
	 * _17560):-
	 * :(true,asm_lookup_ctab(_17526,_17528,_17536,_17548),asm_lookup_ltab(_17534,
	 * _17538,_17550,opcode(hash_jmpn_struct_xy,_17552,b_ASPN3_ccc(_17552,_17548,
	 * _17550,_17560)))).
	 * asm_pass2_inst(hash_jmpn_struct_yx((_17616,_17618),_17624),_17626,_17628,
	 * _17650):-
	 * :(true,asm_lookup_ctab(_17616,_17618,_17626,_17638),asm_lookup_ltab(_17624,
	 * _17628,_17640,opcode(hash_jmpn_struct_yx,_17642,b_ASPN3_ccc(_17642,_17638,
	 * _17640,_17650)))).
	 * asm_pass2_inst(hash_jmpn_struct_yy((_17706,_17708),_17714),_17716,_17718,
	 * _17740):-
	 * :(true,asm_lookup_ctab(_17706,_17708,_17716,_17728),asm_lookup_ltab(_17714,
	 * _17718,_17730,opcode(hash_jmpn_struct_yy,_17732,b_ASPN3_ccc(_17732,_17728,
	 * _17730,_17740)))). asm_pass2_inst(jmpn_det(_17796),_17798,_17800,_17818):-
	 * :(true,asm_lookup_ltab(_17796,_17800,_17808),opcode(jmpn_det,_17810,
	 * b_ASPN2_cc(_17810,_17808,_17818))).
	 * asm_pass2_inst(jmpn_det_get_ar_cps(_17862),_17864,_17866,_17884):-
	 * :(true,asm_lookup_ltab(_17862,_17866,_17874),opcode(jmpn_det_get_ar_cps,
	 * _17876,b_ASPN2_cc(_17876,_17874,_17884))).
	 * asm_pass2_inst(save_ht_jmp(_17928,_17930),_17932,_17934,_17954):-
	 * :(true,asm_lookup_ltab(_17928,_17934,_17942),asm_lookup_ltab(_17930,_17934,
	 * _17944,opcode(save_ht_jmp,_17946,b_ASPN3_ccc(_17946,_17942,_17944,_17954)))).
	 * asm_pass2_inst(unify_struct_x(_18016,(_18010,_18012)),_18020,_18022,_18042):-
	 * :(true,asm_lookup_ctab(_18010,_18012,_18020,_18032),opcode(unify_struct_x,
	 * _18034,b_ASPN3_ccc(_18034,_18016,_18032,_18042))).
	 * asm_pass2_inst(unify_struct_y(_18094,(_18088,_18090)),_18098,_18100,_18120):-
	 * :(true,asm_lookup_ctab(_18088,_18090,_18098,_18110),opcode(unify_struct_y,
	 * _18112,b_ASPN3_ccc(_18112,_18094,_18110,_18120))).
	 * asm_pass2_inst(unify0_struct_y(_18172,(_18166,_18168)),_18176,_18178,_18198):
	 * - :(true,asm_lookup_ctab(_18166,_18168,_18176,_18188),opcode(unify0_struct_y,
	 * _18190,b_ASPN3_ccc(_18190,_18172,_18188,_18198))).
	 * asm_pass2_inst(unicut_struct_y(_18250,(_18244,_18246)),_18254,_18256,_18276):
	 * - :(true,asm_lookup_ctab(_18244,_18246,_18254,_18266),opcode(unicut_struct_y,
	 * _18268,b_ASPN3_ccc(_18268,_18250,_18266,_18276))).
	 * asm_pass2_inst(unify_atom_x(_18322,_18324),_18326,_18328,_18348):-
	 * :(true,asm_lookup_ctab(_18324,0,_18326,_18338),opcode(unify_atom_x,_18340,
	 * b_ASPN3_ccc(_18340,_18322,_18338,_18348))).
	 * asm_pass2_inst(unify_atom_y(_18394,_18396),_18398,_18400,_18420):-
	 * :(true,asm_lookup_ctab(_18396,0,_18398,_18410),opcode(unify_atom_y,_18412,
	 * b_ASPN3_ccc(_18412,_18394,_18410,_18420))).
	 * asm_pass2_inst(unify0_atom_y(_18466,_18468),_18470,_18472,_18492):-
	 * :(true,asm_lookup_ctab(_18468,0,_18470,_18482),opcode(unify0_atom_y,_18484,
	 * b_ASPN3_ccc(_18484,_18466,_18482,_18492))).
	 * asm_pass2_inst(unicut_atom_y(_18538,_18540),_18542,_18544,_18564):-
	 * :(true,asm_lookup_ctab(_18540,0,_18542,_18554),opcode(unicut_atom_y,_18556,
	 * b_ASPN3_ccc(_18556,_18538,_18554,_18564))).
	 * asm_pass2_inst(unify_arg_atom(_18610),_18612,_18614,_18634):-
	 * :(true,asm_lookup_ctab(_18610,0,_18612,_18624),opcode(unify_arg_atom,_18626,
	 * b_ASPN2_cc(_18626,_18624,_18634))).
	 * asm_pass2_inst(unify_arg_struct((_18678,_18680)),_18686,_18688,_18708):-
	 * :(true,asm_lookup_ctab(_18678,_18680,_18686,_18698),opcode(unify_arg_struct,
	 * _18700,b_ASPN2_cc(_18700,_18698,_18708))).
	 * asm_pass2_inst(move_struct_x(_18758,(_18752,_18754)),_18762,_18764,_18784):-
	 * :(true,asm_lookup_ctab(_18752,_18754,_18762,_18774),opcode(move_struct_x,
	 * _18776,b_ASPN3_ccc(_18776,_18758,_18774,_18784))).
	 * asm_pass2_inst(move_struct_y(_18836,(_18830,_18832)),_18840,_18842,_18862):-
	 * :(true,asm_lookup_ctab(_18830,_18832,_18840,_18852),opcode(move_struct_y,
	 * _18854,b_ASPN3_ccc(_18854,_18836,_18852,_18862))).
	 * asm_pass2_inst(move_atom_x(_18908,_18910),_18912,_18914,_18934):-
	 * :(true,asm_lookup_ctab(_18910,0,_18912,_18924),opcode(move_atom_x,_18926,
	 * b_ASPN3_ccc(_18926,_18908,_18924,_18934))).
	 * asm_pass2_inst(move_atom_y(_18980,_18982),_18984,_18986,_19006):-
	 * :(true,asm_lookup_ctab(_18982,0,_18984,_18996),opcode(move_atom_y,_18998,
	 * b_ASPN3_ccc(_18998,_18980,_18996,_19006))).
	 * asm_pass2_inst(and(_19052,_19054,_19056),_19058,_19060,_19080):-
	 * :(true,x_or_y(_19052,_19066),x_or_y(_19054,_19068,x_or_y(_19056,_19070,opcode
	 * (and,_19072,b_ASPN4_cccc(_19072,_19066,_19068,_19070,_19080))))).
	 * asm_pass2_inst(or(_19144,_19146,_19148),_19150,_19152,_19172):-
	 * :(true,x_or_y(_19144,_19158),x_or_y(_19146,_19160,x_or_y(_19148,_19162,opcode
	 * (or,_19164,b_ASPN4_cccc(_19164,_19158,_19160,_19162,_19172))))).
	 * asm_pass2_inst(lshiftl(_19236,_19238,_19240),_19242,_19244,_19264):-
	 * :(true,x_or_y(_19236,_19250),x_or_y(_19238,_19252,x_or_y(_19240,_19254,opcode
	 * (lshiftl,_19256,b_ASPN4_cccc(_19256,_19250,_19252,_19254,_19264))))).
	 * asm_pass2_inst(lshiftr(_19328,_19330,_19332),_19334,_19336,_19356):-
	 * :(true,x_or_y(_19328,_19342),x_or_y(_19330,_19344,x_or_y(_19332,_19346,opcode
	 * (lshiftr,_19348,b_ASPN4_cccc(_19348,_19342,_19344,_19346,_19356))))).
	 * asm_pass2_inst(complement(_19420,_19422),_19424,_19426,_19444):-
	 * :(true,x_or_y(_19420,_19432),x_or_y(_19422,_19434,opcode(complement,_19436,
	 * b_ASPN3_ccc(_19436,_19432,_19434,_19444)))).
	 * asm_pass2_inst(add(_19498,_19500,_19502),_19504,_19506,_19526):-
	 * :(true,x_or_y(_19498,_19512),x_or_y(_19500,_19514,x_or_y(_19502,_19516,opcode
	 * (add,_19518,b_ASPN4_cccc(_19518,_19512,_19514,_19516,_19526))))).
	 * asm_pass2_inst(sub(_19590,_19592,_19594),_19596,_19598,_19618):-
	 * :(true,x_or_y(_19590,_19604),x_or_y(_19592,_19606,x_or_y(_19594,_19608,opcode
	 * (sub,_19610,b_ASPN4_cccc(_19610,_19604,_19606,_19608,_19618))))).
	 * asm_pass2_inst(mul(_19682,_19684,_19686),_19688,_19690,_19710):-
	 * :(true,x_or_y(_19682,_19696),x_or_y(_19684,_19698,x_or_y(_19686,_19700,opcode
	 * (mul,_19702,b_ASPN4_cccc(_19702,_19696,_19698,_19700,_19710))))).
	 * asm_pass2_inst(div(_19774,_19776,_19778),_19780,_19782,_19802):-
	 * :(true,x_or_y(_19774,_19788),x_or_y(_19776,_19790,x_or_y(_19778,_19792,opcode
	 * (div,_19794,b_ASPN4_cccc(_19794,_19788,_19790,_19792,_19802))))).
	 * asm_pass2_inst(idiv(_19866,_19868,_19870),_19872,_19874,_19894):-
	 * :(true,x_or_y(_19866,_19880),x_or_y(_19868,_19882,x_or_y(_19870,_19884,opcode
	 * (idiv,_19886,b_ASPN4_cccc(_19886,_19880,_19882,_19884,_19894))))).
	 * asm_pass2_inst(mod(_19958,_19960,_19962),_19964,_19966,_19986):-
	 * :(true,x_or_y(_19958,_19972),x_or_y(_19960,_19974,x_or_y(_19962,_19976,opcode
	 * (mod,_19978,b_ASPN4_cccc(_19978,_19972,_19974,_19976,_19986))))).
	 * asm_pass2_inst(para_struct((_20050,_20052)),_20058,_20060,_20080):-
	 * :(true,asm_lookup_ctab(_20050,_20052,_20058,_20070),opcode(para_struct,_20072
	 * ,b_ASPN2_cc(_20072,_20070,_20080))).
	 * asm_pass2_inst(para_atom(_20124),_20126,_20128,_20148):-
	 * :(true,asm_lookup_ctab(_20124,0,_20126,_20138),opcode(para_atom,_20140,
	 * b_ASPN2_cc(_20140,_20138,_20148))).
	 * asm_pass2_inst(fork(_20192),_20194,_20196,_20214):-
	 * :(true,asm_lookup_ltab(_20192,_20196,_20204),opcode(fork,_20206,b_ASPN2_cc(
	 * _20206,_20204,_20214))).
	 * asm_pass2_inst(fork_unify_struct_y(_20264,(_20258,_20260),_20268),_20270,
	 * _20272,_20292):-
	 * :(true,asm_lookup_ltab(_20268,_20272,_20280),asm_lookup_ctab(_20258,_20260,
	 * _20270,_20282,opcode(fork_unify_struct_y,_20284,b_ASPN4_cccc(_20284,_20264,
	 * _20282,_20280,_20292)))).
	 * asm_pass2_inst(fork_unify_list_y(_20352,_20354),_20356,_20358,_20376):-
	 * :(true,asm_lookup_ltab(_20354,_20358,_20366),opcode(fork_unify_list_y,_20368,
	 * b_ASPN3_ccc(_20368,_20352,_20366,_20376))).
	 * asm_pass2_inst(fork_unify_nil_y(_20422,_20424),_20426,_20428,_20446):-
	 * :(true,asm_lookup_ltab(_20424,_20428,_20436),opcode(fork_unify_nil_y,_20438,
	 * b_ASPN3_ccc(_20438,_20422,_20436,_20446))).
	 * asm_pass2_inst(fork_unify_atom_y(_20492,_20494,_20496),_20498,_20500,_20522):
	 * -
	 * :(true,asm_lookup_ctab(_20494,0,_20498,_20510),asm_lookup_ltab(_20496,_20500,
	 * _20512,opcode(fork_unify_atom_y,_20514,b_ASPN4_cccc(_20514,_20492,_20510,
	 * _20512,_20522)))).
	 * asm_pass2_inst(fork_unify_int_y(_20580,_20582,_20584),_20586,_20588,_20606):-
	 * :(true,asm_lookup_ltab(_20584,_20588,_20596),opcode(fork_unify_int_y,_20598,
	 * b_ASPN4_cccc(_20598,_20580,_20582,_20596,_20606))).
	 * asm_pass2_inst(fork_unify_uy_uy(_20654,_20656,_20658),_20660,_20662,_20680):-
	 * :(true,asm_lookup_ltab(_20658,_20662,_20670),opcode(fork_unify_uy_uy,_20672,
	 * b_ASPN4_cccc(_20672,_20654,_20656,_20670,_20680))).
	 * asm_pass2_inst(fork_unicut_struct_y(_20734,(_20728,_20730),_20738),_20740,
	 * _20742,_20762):-
	 * :(true,asm_lookup_ltab(_20738,_20742,_20750),asm_lookup_ctab(_20728,_20730,
	 * _20740,_20752,opcode(fork_unicut_struct_y,_20754,b_ASPN4_cccc(_20754,_20734,
	 * _20752,_20750,_20762)))).
	 * asm_pass2_inst(fork_unicut_list_y(_20822,_20824),_20826,_20828,_20846):-
	 * :(true,asm_lookup_ltab(_20824,_20828,_20836),opcode(fork_unicut_list_y,_20838
	 * ,b_ASPN3_ccc(_20838,_20822,_20836,_20846))).
	 * asm_pass2_inst(fork_unicut_nil_y(_20892,_20894),_20896,_20898,_20916):-
	 * :(true,asm_lookup_ltab(_20894,_20898,_20906),opcode(fork_unicut_nil_y,_20908,
	 * b_ASPN3_ccc(_20908,_20892,_20906,_20916))).
	 * asm_pass2_inst(fork_unicut_atom_y(_20962,_20964,_20966),_20968,_20970,_20992)
	 * :-
	 * :(true,asm_lookup_ctab(_20964,0,_20968,_20980),asm_lookup_ltab(_20966,_20970,
	 * _20982,opcode(fork_unicut_atom_y,_20984,b_ASPN4_cccc(_20984,_20962,_20980,
	 * _20982,_20992)))).
	 * asm_pass2_inst(fork_unicut_int_y(_21050,_21052,_21054),_21056,_21058,_21076):
	 * -
	 * :(true,asm_lookup_ltab(_21054,_21058,_21066),opcode(fork_unicut_int_y,_21068,
	 * b_ASPN4_cccc(_21068,_21050,_21052,_21066,_21076))).
	 * asm_pass2_inst(fork_unicut_ux_uy(_21124,_21126,_21128),_21130,_21132,_21150):
	 * -
	 * :(true,asm_lookup_ltab(_21128,_21132,_21140),opcode(fork_unicut_ux_uy,_21142,
	 * b_ASPN4_cccc(_21142,_21124,_21126,_21140,_21150))).
	 * asm_pass2_inst(fork_unicut_uy_uy(_21198,_21200,_21202),_21204,_21206,_21224):
	 * -
	 * :(true,asm_lookup_ltab(_21202,_21206,_21214),opcode(fork_unicut_uy_uy,_21216,
	 * b_ASPN4_cccc(_21216,_21198,_21200,_21214,_21224))).
	 * asm_pass2_inst(hash_x(_21272,_21274),_21276,_21278,_21294):-
	 * :(true,opcode(hash_x,_21284),asm_lookup_ltab(_21274,_21278,_21286,
	 * b_ASPN4_cccc(_21284,_21272,0,0,b_ASPN_c(_21286,_21294)))).
	 * asm_pass2_inst(hash_y(_21350,_21352),_21354,_21356,_21372):-
	 * :(true,opcode(hash_y,_21362),asm_lookup_ltab(_21352,_21356,_21364,
	 * b_ASPN4_cccc(_21362,_21350,0,0,b_ASPN_c(_21364,_21372)))).
	 * asm_pass2_inst(callv(_21428),_21430,_21432,_21448):-
	 * :(true,opcode(callv,_21438),x_or_y(_21428,_21440,b_ASPN2_cc(_21438,_21440,
	 * _21448))). asm_pass2_inst(executev(_21492),_21494,_21496,_21512):-
	 * :(true,opcode(executev,_21502),x_or_y(_21492,_21504,b_ASPN2_cc(_21502,_21504,
	 * _21512))).
	 * asm_pass2_inst(functor(_21556,_21558,_21560),_21562,_21564,_21584):-
	 * :(true,opcode(functor,_21570),x_or_y(_21556,_21572,x_or_y(_21558,_21574,
	 * x_or_y(_21560,_21576,b_ASPN4_cccc(_21570,_21572,_21574,_21576,_21584))))).
	 * asm_pass2_inst(func_arity(_21648,_21650),_21652,_21654,_21672):-
	 * :(true,opcode(func_arity,_21660),x_or_y(_21648,_21662,x_or_y(_21650,_21664,
	 * b_ASPN3_ccc(_21660,_21662,_21664,_21672)))).
	 * asm_pass2_inst(arg0(_21726,_21728,_21730),_21732,_21734,_21756):-
	 * :(integer(_21726),opcode(arg0,_21744),x_or_y(_21728,_21746,x_or_y(_21730,
	 * _21748,b_ASPN4_cccc(_21744,_21726,_21746,_21748,_21756)))).
	 * asm_pass2_inst(arg(_21812,_21814,_21816),_21818,_21820,_21840):-
	 * :(true,opcode(arg,_21826),x_or_y(_21812,_21828,x_or_y(_21814,_21830,x_or_y(
	 * _21816,_21832,b_ASPN4_cccc(_21826,_21828,_21830,_21832,_21840))))).
	 * asm_pass2_inst(setarg0(_21904,_21906,_21908),_21910,_21912,_21934):-
	 * :(integer(_21904),opcode(setarg0,_21922),x_or_y(_21906,_21924,x_or_y(_21908,
	 * _21926,b_ASPN4_cccc(_21922,_21904,_21924,_21926,_21934)))).
	 * asm_pass2_inst(setarg(_21990,_21992,_21994),_21996,_21998,_22018):-
	 * :(true,opcode(setarg,_22004),x_or_y(_21990,_22006,x_or_y(_21992,_22008,x_or_y
	 * (_21994,_22010,b_ASPN4_cccc(_22004,_22006,_22008,_22010,_22018))))).
	 * asm_pass2_inst(builtin0(_22082,_22084),_22086,_22088,_22106):-
	 * :(true,asm_lookup_ltab(_22084,_22088,_22096),opcode(builtin0,_22098,
	 * b_ASPN3_ccc(_22098,_22082,_22096,_22106))).
	 * asm_pass2_inst(builtin1(_22152,_22154,_22156),_22158,_22160,_22180):-
	 * :(true,asm_lookup_ltab(_22154,_22160,_22168),opcode(builtin1,_22170,x_or_y(
	 * _22156,_22172,b_ASPN4_cccc(_22170,_22152,_22168,_22172,_22180)))).
	 * asm_pass2_inst(builtin2(_22236,_22238,_22240,_22242),_22244,_22246,_22268):-
	 * :(true,asm_lookup_ltab(_22238,_22246,_22254),opcode(builtin2,_22256,x_or_y(
	 * _22240,_22258,x_or_y(_22242,_22260,b_ASPN4_cccc(_22256,_22236,_22254,_22258,
	 * b_ASPN_c(_22260,_22268)))))).
	 * asm_pass2_inst(builtin3(_22338,_22340,_22342,_22344,_22346),_22348,_22350,
	 * _22374):-
	 * :(true,asm_lookup_ltab(_22340,_22350,_22358),opcode(builtin3,_22360,x_or_y(
	 * _22342,_22362,x_or_y(_22344,_22364,x_or_y(_22346,_22366,b_ASPN4_cccc(_22360,
	 * _22338,_22358,_22362,b_ASPN2_cc(_22364,_22366,_22374))))))).
	 * asm_pass2_inst(builtin4(_22454,_22456,_22458,_22460,_22462,_22464),_22466,
	 * _22468,_22494):-
	 * :(true,asm_lookup_ltab(_22456,_22468,_22476),opcode(builtin4,_22478,x_or_y(
	 * _22458,_22480,x_or_y(_22460,_22482,x_or_y(_22462,_22484,x_or_y(_22464,_22486,
	 * b_ASPN4_cccc(_22478,_22454,_22476,_22480,b_ASPN3_ccc(_22482,_22484,_22486,
	 * _22494)))))))). asm_pass2_inst(getbreg(_22584),_22586,_22588,_22604):-
	 * :(true,opcode(getbreg,_22594),x_or_y(_22584,_22596,b_ASPN2_cc(_22594,_22596,
	 * _22604))). asm_pass2_inst(getpbreg(_22648),_22650,_22652,_22668):-
	 * :(true,opcode(getpbreg,_22658),x_or_y(_22648,_22660,b_ASPN2_cc(_22658,_22660,
	 * _22668))). asm_pass2_inst(putbreg(_22712),_22714,_22716,_22732):-
	 * :(true,opcode(putbreg,_22722),x_or_y(_22712,_22724,b_ASPN2_cc(_22722,_22724,
	 * _22732))).
	 * asm_pass2_inst(gethtreg(y(_22776),y(_22780)),_22788,_22790,_22804):-
	 * :(true,opcode(gethtreg,_22796),b_ASPN3_ccc(_22796,_22776,_22780,_22804)).
	 * asm_pass2_inst(puthtreg(y(_22842),y(_22846)),_22854,_22856,_22870):-
	 * :(true,opcode(puthtreg,_22862),b_ASPN3_ccc(_22862,_22842,_22846,_22870)).
	 * asm_pass2_inst(delay((_22908,_22910),_22916),_22918,_22920,_22942):-
	 * :(true,asm_lookup_ctab(_22908,_22910,_22918,_22930),asm_lookup_ltab(_22916,
	 * _22920,_22932,opcode(delay,_22934,b_ASPN3_ccc(_22934,_22930,_22932,_22942))))
	 * . asm_pass2_inst(susp_var_delay(_23004,(_22998,_23000),_23008,_23010),_23012,
	 * _23014,_23038):-
	 * :(true,asm_lookup_ctab(_22998,_23000,_23012,_23024),asm_lookup_ltab(_23008,
	 * _23014,_23026,asm_lookup_ltab(_23010,_23014,_23028,opcode(susp_var_delay,
	 * _23030,b_ASPN4_cccc(_23030,_23004,_23024,_23026,b_ASPN_c(_23028,_23038)))))).
	 * asm_pass2_inst(jmpn_dvar_y(_23112,_23114),_23116,_23118,_23136):-
	 * :(true,asm_lookup_ltab(_23114,_23118,_23126),opcode(jmpn_dvar_y,_23128,
	 * b_ASPN3_ccc(_23128,_23112,_23126,_23136))).
	 * asm_pass2_inst(susp_var2_delay(_23188,(_23182,_23184),_23192,_23194),_23196,
	 * _23198,_23222):-
	 * :(true,asm_lookup_ctab(_23182,_23184,_23196,_23208),asm_lookup_ltab(_23192,
	 * _23198,_23210,asm_lookup_ltab(_23194,_23198,_23212,opcode(susp_var2_delay,
	 * _23214,b_ASPN4_cccc(_23214,_23188,_23208,_23210,b_ASPN_c(_23212,_23222)))))).
	 * asm_pass2_inst(_23294,_23296,_23298,_23320):-functor(_23294,_23300,_23302,:(
	 * opcode(_23300,_23308),b_ASPN_c(_23308),asm_pass2_inst_op(_23294,0,_23302,
	 * _23320))). asm_pass2_inst(_23366,_23368,_23370,_23400):-
	 * :(true,cmp_error(['error in asm pass2 :',_23366,'is not defined']),_23400).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_pass2_inst_op_3 : public Code {

	/*
	 * 
	 * asm_pass2_inst_op(_23426,_23428,_23430,_23444):-
	 * :(_23428=:=_23430,true,_23444).
	 * asm_pass2_inst_op(_23470,_23472,_23474,_23496):- :(true,_23484 is
	 * _23472+1,arg(_23484,_23470,_23488,b_ASPN_c(_23488,asm_pass2_inst_op(_23470,
	 * _23484,_23474,_23496)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_magic_1 : public Code {

	/*
	 * 
	 * asm_magic(_23548,_23562):-
	 * :(true,asm_putnum(17,1),asm_putnum(18,1,asm_putnum(19,1,asm_putnum(_23548,1,
	 * _23562)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_index_inst_2 : public Code {

	/*
	 * 
	 * asm_index_inst(pred(_23610,_23612,_23614,_23616),_23618,_23632):-
	 * :(true,_23618=16,_23632).
	 * asm_index_inst(arglabel(i,_23660,_23662),_23664,_23678):-
	 * :(true,_23664:=9,_23678).
	 * asm_index_inst(arglabel(c,_23706,_23708),_23710,_23724):-
	 * :(true,_23710:=9,_23724).
	 * asm_index_inst(arglabel(s,_23752,_23754),_23756,_23770):-
	 * :(true,_23756:=9,_23770).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_symbol_1 : public Code {

	/*
	 * 
	 * asm_symbol(_23794,_23806):- :(var(_23794),true,_23806).
	 * asm_symbol([sym(_23830,_23832,_23834,_23836)|_23842],_23856):-
	 * :(true,b_ASPN_c(_23834),asm_putnum(_23832,1,b_GET_LENGTH_cf(_23830,_23848,
	 * asm_putnum(_23848,1,writename(_23830,asm_symbol(_23842,_23856)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_putnum_2 : public Code {

	/*
	 * 
	 * asm_putnum(_23914,_23916,_23958):- :(_23916>1,_23932 is
	 * _23914/\255,is(_23942,_23914>>8,is(_23950,_23916-1,asm_putnum(_23942,_23950,
	 * put(_23932,_23958))))). asm_putnum(_24012,_24014,_24026):-
	 * :(true,put(_24012),_24026).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_mark_eot_0 : public Code {

	/*
	 * 
	 * asm_mark_eot(_24062):-
	 * :(true,opcode(endfile,_24054),b_ASPN2_cc(_24054,0,_24062)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_member1_2 : public Code {

	/*
	 * 
	 * sym_member1(_24090,_24092,_24144):-
	 * :(sym(_24096,_24098,_24100,_24102)<=_24090,asm_hash_value(_24096,_24114),is(
	 * _24134,(_24114+_24098)mod
	 * 255+1,arg(_24134,_24092,_24136,sym_member1(_24096,_24098,_24090,_24136,_24144
	 * )))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_member1_4 : public Code {

	/*
	 * 
	 * sym_member1(_24198,_24200,_24202,_24204,_24226):-
	 * :(var(_24204),next_sym_no(_24212),arg(4,_24202,_24212,:=(_24204,[_24202|
	 * _24218],_24226))).
	 * sym_member1(_24274,_24276,_24288,[sym(_24274,_24276,_24278,_24280)|_24286],
	 * _24312):- :(true,_24288=sym(_24274,_24276,_24278,_24280),_24312).
	 * sym_member1(_24346,_24348,_24350,[_24342|_24344],_24368):-
	 * :(true,sym_member1(_24346,_24348,_24350,_24344),_24368).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_lab_member1_2 : public Code {

	/*
	 * 
	 * lab_member1(_24396,_24398,_24440):-
	 * :(lab(_24402,_24404)<=_24396,asm_hash_value(_24402,_24416),is(_24430,_24416
	 * mod
	 * 255+1,arg(_24430,_24398,_24432,lab_member1(_24402,_24396,_24432,_24440)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_lab_member1_3 : public Code {

	/*
	 * 
	 * lab_member1(_24492,_24494,_24496,_24520):-
	 * :(var(_24496),_24496:=[_24494|_24506],_24520).
	 * lab_member1(_24548,_24558,[lab(_24548,_24550)|_24556],_24578):-
	 * :(true,_24558=lab(_24548,_24550),_24578).
	 * lab_member1(_24610,_24612,[_24606|_24608],_24628):-
	 * :(true,lab_member1(_24610,_24612,_24608),_24628).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_lookup_ltab_3 : public Code {

	/*
	 * 
	 * asm_lookup_ltab(_24654,_24656,_24658,_24688):-
	 * :(true,asm_hash_value(_24654,_24664),is(_24678,_24664 mod
	 * 255+1,arg(_24678,_24656,_24680,asm_lookup_ltab1(_24654,_24680,_24658,_24688))
	 * )).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_lookup_ltab1_3 : public Code {

	/*
	 * 
	 * asm_lookup_ltab1(_24742,_24744,_24746,_24758):- :(var(_24744),fail,_24758).
	 * asm_lookup_ltab1(_24786,[lab(_24786,_24788)|_24794],_24796,_24810):-
	 * :(true,_24796=_24788,_24810).
	 * asm_lookup_ltab1(_24842,[_24838|_24840],_24844,_24860):-
	 * :(true,asm_lookup_ltab1(_24842,_24840,_24844),_24860).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_lookup_ctab_4 : public Code {

	/*
	 * 
	 * asm_lookup_ctab(_24886,_24888,_24890,_24892,_24928):-
	 * :(true,asm_hash_value(_24886,_24898),is(_24918,(_24898+_24888)mod
	 * 255+1,arg(_24918,_24890,_24920,asm_lookup_ctab1(_24886,_24888,_24920,_24892,
	 * _24928)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_lookup_ctab1_4 : public Code {

	/*
	 * 
	 * asm_lookup_ctab1(_24988,_24990,[sym(_24988,_24990,_24992,_24994)|_25000],
	 * _25002,_25016):- :(true,_25002=_24994,_25016).
	 * asm_lookup_ctab1(_25050,_25052,[_25046|_25048],_25054,_25072):-
	 * :(true,asm_lookup_ctab1(_25050,_25052,_25048,_25054),_25072).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_rearange_csym_4 : public Code {

	/*
	 * 
	 * asm_rearange_csym(_25100,_25102,_25104,_25106,_25126):-
	 * :(_25102<1,_25106=_25104,_25126).
	 * asm_rearange_csym(_25154,_25156,_25158,_25160,_25186):-
	 * :(true,arg(_25156,_25154,_25168),asm_merge(_25168,_25158,_25170,is(_25178,
	 * _25156-1,asm_rearange_csym(_25154,_25178,_25170,_25160,_25186)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asm_merge_3 : public Code {

	/*
	 * 
	 * asm_merge(_25244,_25246,_25248,_25266):- :(var(_25244),_25248=_25246,_25266).
	 * asm_merge(_25292,_25294,_25296,_25314):- :(var(_25294),_25296=_25292,_25314).
	 * asm_merge(_25340,_25342,_25344,_25402):-
	 * <=([_25348|_25350],_25340,<=([_25354|_25356],_25342,<=(sym(_25360,_25362,
	 * _25364,_25366),_25348,<=(sym(_25370,_25372,_25374,_25376),_25354,:(_25366<
	 * _25376,_25344:=[_25348|_25388],asm_merge(_25350,_25342,_25388,_25402)))))).
	 * asm_merge(_25470,_25472,_25474,_25512):-
	 * <=([_25478|_25480],_25470,:([_25484|_25486]<=_25472,_25474:=[_25484|_25498],
	 * asm_merge(_25470,_25486,_25498,_25512))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_next_sym_no_1 : public Code {

	/*
	 * 
	 * next_sym_no(_25556,_25580):-
	 * :(true,global_get('$sym_no',0,_25556),is(_25572,_25556+1,global_set('$sym_no'
	 * ,0,_25572,_25580))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_x_or_y_2 : public Code {

	/*
	 * 
	 * x_or_y(vx(_25622),_25624,_25644):- :(true,_25624 is _25622<<3,_25644).
	 * x_or_y(x(_25670),_25672,_25698):- :(true,_25672 is _25670<<3+1,_25698).
	 * x_or_y(vy(_25724),_25726,_25752):- :(true,_25726 is _25724<<3\/3,_25752).
	 * x_or_y(y(_25778),_25780,_25806):- :(true,_25780 is _25778<<3\/7,_25806).
	 * x_or_y(_25830,_25832,_25858):- :(true,_25832 is _25830<<2\/2,_25858).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_opcode_2 : public Code {

	/*
	 * 
	 * opcode(noop,0,_25924):-call(_25924). opcode(jmp,1,_25948):-call(_25948).
	 * opcode(djmp,2,_25972):-call(_25972).
	 * opcode(jmpn_eq_struct_x,3,_25996):-call(_25996).
	 * opcode(jmpn_eq_struct_y,4,_26020):-call(_26020).
	 * opcode(jmpn_eq_atom_x,5,_26044):-call(_26044).
	 * opcode(jmpn_eq_atom_y,6,_26068):-call(_26068).
	 * opcode(jmpn_nil_x,7,_26092):-call(_26092).
	 * opcode(jmpn_nil_y,8,_26116):-call(_26116).
	 * opcode(switch_list_x,9,_26140):-call(_26140).
	 * opcode(switch_list_y,10,_26164):-call(_26164).
	 * opcode(switch_list_yxx,11,_26188):-call(_26188).
	 * opcode(switch_list_yxy,12,_26212):-call(_26212).
	 * opcode(switch_list_yyx,13,_26236):-call(_26236).
	 * opcode(switch_list_yyy,14,_26260):-call(_26260).
	 * opcode(jmpn_eq_int_x,15,_26284):-call(_26284).
	 * opcode(jmpn_eq_int_y,16,_26308):-call(_26308).
	 * opcode(jmpn_eql,17,_26332):-call(_26332).
	 * opcode(jmp_eql,18,_26356):-call(_26356).
	 * opcode(jmp_eql_yy,19,_26380):-call(_26380).
	 * opcode(jmpn_gt,20,_26404):-call(_26404).
	 * opcode(jmpn_gt_yy,21,_26428):-call(_26428).
	 * opcode(jmpn_ge,22,_26452):-call(_26452).
	 * opcode(jmpn_ge_yy,23,_26476):-call(_26476).
	 * opcode(jmpn_id,24,_26500):-call(_26500).
	 * opcode(jmp_id,25,_26524):-call(_26524).
	 * opcode(jmpn_var_x,26,_26548):-call(_26548).
	 * opcode(jmpn_var_y,27,_26572):-call(_26572).
	 * opcode(jmp_var_x,28,_26596):-call(_26596).
	 * opcode(jmp_var_y,29,_26620):-call(_26620).
	 * opcode(jmpn_atom_x,30,_26644):-call(_26644).
	 * opcode(jmpn_atom_y,31,_26668):-call(_26668).
	 * opcode(jmpn_atomic_x,32,_26692):-call(_26692).
	 * opcode(jmpn_atomic_y,33,_26716):-call(_26716).
	 * opcode(jmpn_num_x,34,_26740):-call(_26740).
	 * opcode(jmpn_num_y,35,_26764):-call(_26764).
	 * opcode(jmpn_float_x,36,_26788):-call(_26788).
	 * opcode(jmpn_float_y,37,_26812):-call(_26812).
	 * opcode(jmpn_int_x,38,_26836):-call(_26836).
	 * opcode(jmpn_int_y,39,_26860):-call(_26860).
	 * opcode(hash_jmpn_nil,40,_26884):-call(_26884).
	 * opcode(hash_jmpn_list,41,_26908):-call(_26908).
	 * opcode(hash_jmpn_int,42,_26932):-call(_26932).
	 * opcode(hash_jmpn_atom,43,_26956):-call(_26956).
	 * opcode(hash_jmpn_struct,44,_26980):-call(_26980).
	 * opcode(hash_jmpn_struct_x,45,_27004):-call(_27004).
	 * opcode(hash_jmpn_struct_y,46,_27028):-call(_27028).
	 * opcode(hash_jmpn_struct_xx,47,_27052):-call(_27052).
	 * opcode(hash_jmpn_struct_xy,48,_27076):-call(_27076).
	 * opcode(hash_jmpn_struct_yx,49,_27100):-call(_27100).
	 * opcode(hash_jmpn_struct_yy,50,_27124):-call(_27124).
	 * opcode(unify_struct_x,51,_27148):-call(_27148).
	 * opcode(unify_struct_y,52,_27172):-call(_27172).
	 * opcode(unify_list_x,53,_27196):-call(_27196).
	 * opcode(unify_list_y,54,_27220):-call(_27220).
	 * opcode(unify_nil_x,55,_27244):-call(_27244).
	 * opcode(unify_nil_y,56,_27268):-call(_27268).
	 * opcode(unify_atom_x,57,_27292):-call(_27292).
	 * opcode(unify_int_x,58,_27316):-call(_27316).
	 * opcode(unify_atom_y,59,_27340):-call(_27340).
	 * opcode(unify_int_y,60,_27364):-call(_27364).
	 * opcode(unify_ux_ux,61,_27388):-call(_27388).
	 * opcode(unify_ux_uy,62,_27412):-call(_27412).
	 * opcode(unify_uy_uy,63,_27436):-call(_27436).
	 * opcode(unify_cons_x,64,_27460):-call(_27460).
	 * opcode(unify_cons_y,65,_27484):-call(_27484).
	 * opcode(fork_unify_struct_y,66,_27508):-call(_27508).
	 * opcode(fork_unify_list_y,67,_27532):-call(_27532).
	 * opcode(fork_unify_nil_y,68,_27556):-call(_27556).
	 * opcode(fork_unify_atom_y,69,_27580):-call(_27580).
	 * opcode(fork_unify_int_y,70,_27604):-call(_27604).
	 * opcode(fork_unify_uy_uy,71,_27628):-call(_27628).
	 * opcode(fork_unicut_struct_y,72,_27652):-call(_27652).
	 * opcode(fork_unicut_list_y,73,_27676):-call(_27676).
	 * opcode(fork_unicut_nil_y,74,_27700):-call(_27700).
	 * opcode(fork_unicut_atom_y,75,_27724):-call(_27724).
	 * opcode(fork_unicut_int_y,76,_27748):-call(_27748).
	 * opcode(fork_unicut_uy_uy,77,_27772):-call(_27772).
	 * opcode(unify0_struct_y,78,_27796):-call(_27796).
	 * opcode(unify0_list_y,79,_27820):-call(_27820).
	 * opcode(unify0_nil_y,80,_27844):-call(_27844).
	 * opcode(unify0_atom_y,81,_27868):-call(_27868).
	 * opcode(unify0_int_y,82,_27892):-call(_27892).
	 * opcode(unify0_uy_uy,83,_27916):-call(_27916).
	 * opcode(unicut_struct_y,84,_27940):-call(_27940).
	 * opcode(unicut_list_y,85,_27964):-call(_27964).
	 * opcode(unicut_nil_y,86,_27988):-call(_27988).
	 * opcode(unicut_atom_y,87,_28012):-call(_28012).
	 * opcode(unicut_int_y,88,_28036):-call(_28036).
	 * opcode(unicut_uy_uy,89,_28060):-call(_28060).
	 * opcode(unicut,90,_28084):-call(_28084).
	 * opcode(unify_arg_nil,91,_28108):-call(_28108).
	 * opcode(unify_arg_atom,92,_28132):-call(_28132).
	 * opcode(unify_arg_int,93,_28156):-call(_28156).
	 * opcode(unify_arg_ux_ux,94,_28180):-call(_28180).
	 * opcode(unify_arg_ux,95,_28204):-call(_28204).
	 * opcode(unify_arg_ux_vx,96,_28228):-call(_28228).
	 * opcode(unify_arg_ux_vy,97,_28252):-call(_28252).
	 * opcode(unify_arg_uy_uy,98,_28276):-call(_28276).
	 * opcode(unify_arg_uy,99,_28300):-call(_28300).
	 * opcode(unify_arg_wy,100,_28324):-call(_28324).
	 * opcode(unify_arg_vx_vx,101,_28348):-call(_28348).
	 * opcode(unify_arg_vx,102,_28372):-call(_28372).
	 * opcode(unify_arg_vy_vy,103,_28396):-call(_28396).
	 * opcode(unify_arg_vy,104,_28420):-call(_28420).
	 * opcode(unify_arg_list,105,_28444):-call(_28444).
	 * opcode(unify_arg_struct,106,_28468):-call(_28468).
	 * opcode(unify_arg_void_one,107,_28492):-call(_28492).
	 * opcode(unify_arg_void,108,_28516):-call(_28516).
	 * opcode(unify_arg_vx_vy,109,_28540):-call(_28540).
	 * opcode(unify_arg_vx_ux,110,_28564):-call(_28564).
	 * opcode(unify_arg_vx_uy,111,_28588):-call(_28588).
	 * opcode(unify_arg_vy_vx,112,_28612):-call(_28612).
	 * opcode(unify_arg_vy_ux,113,_28636):-call(_28636).
	 * opcode(unify_arg_vy_uy,114,_28660):-call(_28660).
	 * opcode(unify_arg_iii,115,_28684):-call(_28684).
	 * opcode(move_struct_x,116,_28708):-call(_28708).
	 * opcode(move_struct_y,117,_28732):-call(_28732).
	 * opcode(move_list_x,118,_28756):-call(_28756).
	 * opcode(move_list_y,119,_28780):-call(_28780).
	 * opcode(move_nil_x,120,_28804):-call(_28804).
	 * opcode(move_nil_y,121,_28828):-call(_28828).
	 * opcode(move_atom_x,122,_28852):-call(_28852).
	 * opcode(move_int_x,123,_28876):-call(_28876).
	 * opcode(move_atom_y,124,_28900):-call(_28900).
	 * opcode(move_int_y,125,_28924):-call(_28924).
	 * opcode(move_x_ux,126,_28948):-call(_28948).
	 * opcode(move_x_uy,127,_28972):-call(_28972).
	 * opcode(move_y_ux,128,_28996):-call(_28996).
	 * opcode(move_yy_yy_yy,129,_29020):-call(_29020).
	 * opcode(move_yy_yy,130,_29044):-call(_29044).
	 * opcode(move_y_uy,131,_29068):-call(_29068).
	 * opcode(move_vx,132,_29092):-call(_29092).
	 * opcode(move_vy,133,_29116):-call(_29116).
	 * opcode(move_x_wy,134,_29140):-call(_29140).
	 * opcode(move_yy_yw,135,_29164):-call(_29164).
	 * opcode(move_y_wy,136,_29188):-call(_29188).
	 * opcode(move_yw_yy,137,_29212):-call(_29212).
	 * opcode(and,138,_29236):-call(_29236). opcode(or,139,_29260):-call(_29260).
	 * opcode(lshiftl,140,_29284):-call(_29284).
	 * opcode(lshiftr,141,_29308):-call(_29308).
	 * opcode(complement,142,_29332):-call(_29332).
	 * opcode(add,143,_29356):-call(_29356).
	 * opcode(add1_y,144,_29380):-call(_29380).
	 * opcode(sub,145,_29404):-call(_29404).
	 * opcode(sub1_y,146,_29428):-call(_29428).
	 * opcode(mul,147,_29452):-call(_29452). opcode(div,148,_29476):-call(_29476).
	 * opcode(idiv,149,_29500):-call(_29500). opcode(mod,150,_29524):-call(_29524).
	 * opcode(para_struct,151,_29548):-call(_29548).
	 * opcode(para_list,152,_29572):-call(_29572).
	 * opcode(para_nil,153,_29596):-call(_29596).
	 * opcode(para_atom,154,_29620):-call(_29620).
	 * opcode(para_int,155,_29644):-call(_29644).
	 * opcode(para_ux_ux_ux,156,_29668):-call(_29668).
	 * opcode(para_ux_ux,157,_29692):-call(_29692).
	 * opcode(para_ux,158,_29716):-call(_29716).
	 * opcode(para_uy_uy_uy_uy,159,_29740):-call(_29740).
	 * opcode(para_uy_uy_uy,160,_29764):-call(_29764).
	 * opcode(para_uy_uy,161,_29788):-call(_29788).
	 * opcode(para_uy,162,_29812):-call(_29812).
	 * opcode(para_vx,163,_29836):-call(_29836).
	 * opcode(para_vy_vy,164,_29860):-call(_29860).
	 * opcode(para_vy,165,_29884):-call(_29884).
	 * opcode(para_void_one,166,_29908):-call(_29908).
	 * opcode(para_void,167,_29932):-call(_29932).
	 * opcode(para_vy_ux,168,_29956):-call(_29956).
	 * opcode(para_vy_uy,169,_29980):-call(_29980).
	 * opcode(para_ux_vy,170,_30004):-call(_30004).
	 * opcode(para_ux_ux_uy,171,_30028):-call(_30028).
	 * opcode(para_ux_uy,172,_30052):-call(_30052).
	 * opcode(para_ux_uy_uy,173,_30076):-call(_30076).
	 * opcode(para_uy_vy,174,_30100):-call(_30100).
	 * opcode(para_ux_uy_ux,175,_30124):-call(_30124).
	 * opcode(para_uy_ux,176,_30148):-call(_30148).
	 * opcode(para_uy_ux_ux,177,_30172):-call(_30172).
	 * opcode(para_uy_ux_uy,178,_30196):-call(_30196).
	 * opcode(para_uy_uy_ux,179,_30220):-call(_30220).
	 * opcode(call,180,_30244):-call(_30244).
	 * opcode(call_d,181,_30268):-call(_30268).
	 * opcode(callv,182,_30292):-call(_30292).
	 * opcode(execute,183,_30316):-call(_30316).
	 * opcode(executev,184,_30340):-call(_30340).
	 * opcode(return_a,185,_30364):-call(_30364).
	 * opcode(return_b,186,_30388):-call(_30388).
	 * opcode(jmpn_det,187,_30412):-call(_30412).
	 * opcode(save_ht_jmp,188,_30436):-call(_30436).
	 * opcode(allocate_flat,189,_30460):-call(_30460).
	 * opcode(allocate_nonflat,190,_30484):-call(_30484).
	 * opcode(allocate_nondet,191,_30508):-call(_30508).
	 * opcode(fail,192,_30532):-call(_30532).
	 * opcode(fail0,193,_30556):-call(_30556).
	 * opcode(fork,194,_30580):-call(_30580).
	 * opcode(commit,195,_30604):-call(_30604).
	 * opcode(cut,196,_30628):-call(_30628).
	 * opcode(cut_fail,197,_30652):-call(_30652).
	 * opcode(cut_return,198,_30676):-call(_30676).
	 * opcode(save_b,199,_30700):-call(_30700).
	 * opcode(getbreg,200,_30724):-call(_30724).
	 * opcode(putbreg,201,_30748):-call(_30748).
	 * opcode(getpbreg,202,_30772):-call(_30772).
	 * opcode(hash_x,203,_30796):-call(_30796).
	 * opcode(hash_y,204,_30820):-call(_30820).
	 * opcode(arg,205,_30844):-call(_30844). opcode(arg0,206,_30868):-call(_30868).
	 * opcode(setarg,207,_30892):-call(_30892).
	 * opcode(setarg0,208,_30916):-call(_30916).
	 * opcode(functor,209,_30940):-call(_30940).
	 * opcode(func_arity,210,_30964):-call(_30964).
	 * opcode(get_ar_cps,211,_30988):-call(_30988).
	 * opcode(put_ar_cps,212,_31012):-call(_31012).
	 * opcode(move_ar_cps,213,_31036):-call(_31036).
	 * opcode(jmpn_det_get_ar_cps,214,_31060):-call(_31060).
	 * opcode(builtin0,215,_31084):-call(_31084).
	 * opcode(builtin1,216,_31108):-call(_31108).
	 * opcode(builtin2,217,_31132):-call(_31132).
	 * opcode(builtin3,218,_31156):-call(_31156).
	 * opcode(builtin4,219,_31180):-call(_31180).
	 * opcode(allocate_susp,220,_31204):-call(_31204).
	 * opcode(susp_var_x,221,_31228):-call(_31228).
	 * opcode(susp_var_y,222,_31252):-call(_31252).
	 * opcode(delay,223,_31276):-call(_31276).
	 * opcode(susp_var_delay,224,_31300):-call(_31300).
	 * opcode(end_delay,225,_31324):-call(_31324).
	 * opcode(nondet,226,_31348):-call(_31348).
	 * opcode(jmp_susp,227,_31372):-call(_31372).
	 * opcode(jmpn_dvar_y,228,_31396):-call(_31396).
	 * opcode(susp_var2_delay,229,_31420):-call(_31420).
	 * opcode(domain_set_false_yy,230,_31444):-call(_31444).
	 * opcode(domain_set_false_yx,231,_31468):-call(_31468).
	 * opcode(halt,232,_31492):-call(_31492).
	 * opcode(endfile,233,_31516):-call(_31516).
	 * opcode(tabsize,234,_31540):-call(_31540).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_output_mess_1 : public Code {

	/*
	 * 
	 * output_mess(_31556,_31568):-
	 * :(true,telling(_31560),tell(user,write(_31556,nl(tell(_31560,_31568))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_is_unify_arg_inst_1 : public Code {

	/*
	 * 
	 * is_unify_arg_inst(_31612,_31630):-
	 * :(true,functor(_31612,_31618,_31620),opcode(_31618,_31622,smallerorequal(91,
	 * _31622,smallerorequal(_31622,115,_31630)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef ASM
