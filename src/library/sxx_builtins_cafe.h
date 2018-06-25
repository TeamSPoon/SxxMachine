#ifndef SXX_BUILTINS_CAFE
#define SXX_BUILTINS_CAFE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sxx_builtins_cafe {
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
	static Const* s365;
	static Const* s366;
	static Const* s367;
	static Const* s368;
	static Const* s369;
	static Const* s370;
	static Const* s371;
	static Const* s372;
	static Const* s373;
	static Const* s374;
	static Const* s375;
	static Const* s376;
	static Const* s377;
	static Const* s378;
	static Const* s379;
	static Const* s380;
	static Const* s381;
	static Const* s382;
	static Const* s383;
	static Const* s384;
	static Const* s385;
	static Const* s386;
	static Const* s387;
	static Const* s388;
	static Const* s389;
	static Const* s390;
	static Const* s391;
	static Const* s392;
	static Const* s393;
	static Const* s394;
	static Const* s395;
	static Const* s396;
	static Const* s397;
	static Const* s398;
	static Const* s399;
	static Const* s400;
	static Const* s401;
	static Const* s402;
	static Const* s403;
	static Const* s404;
	static Const* s405;
	static Const* s406;
	static Const* s407;
	static Const* s408;
	static Const* s409;
	static Const* s410;
	static Const* s411;
	static Const* s412;
	static Const* s413;
	static Const* s414;
	static Const* s415;
	static Const* s416;
	static Const* s417;
	static Const* s418;
	static Const* s419;
	static Const* s420;
	static Const* s421;
	static Const* s422;
	static Const* s423;
	static Const* s424;
	static Const* s425;
	static Const* s426;
	static Const* s427;
	static Const* s428;
	static Const* s429;
	static Const* s430;
	static Const* s431;
	static Const* s432;
	static Const* s433;
	static Const* s434;
	static Const* s435;
	static Const* s436;
	static Const* s437;
	static Const* s438;
	static Const* s439;
	static Const* s440;
	static Const* s441;
	static Const* s442;
	static Const* s443;
	static Const* s444;
	static Const* s445;
	static Const* s446;
	static Const* s447;
	static Const* s448;
	static Const* s449;
	static Const* s450;
	static Const* s451;
	static Const* s452;
	static Const* s453;
	static Const* s454;
	static Const* s455;
	static Const* s456;
	static Const* s457;
	static Const* s458;
	static Const* s459;
	static Const* s460;
	static Const* s461;
	static Const* s462;
	static Const* s463;
	static Const* s464;
	static Const* s465;
	static Const* s466;
	static Const* s467;
	static Const* s468;
	static Const* s469;
	static Const* s470;
	static Const* s471;
	static Const* s472;
	static Const* s473;
	static Const* s474;
	static Const* s475;
	static Const* s476;
	static Const* s477;
	static Const* s478;
	static Const* s479;
	static Const* s480;
	static Const* s481;
	static Const* s482;
	static Const* s483;
	static Const* s484;
	static Const* s485;
	static Const* s486;
	static Const* s487;
	static Const* s488;
	static Const* s489;
	static Const* s490;
	static Const* s491;
	static Const* s492;
	static Const* s493;
	static Const* s494;
	static Const* s495;
	static Const* s496;
	static Const* s497;
	static Const* s498;
	static Const* s499;
	static Const* s500;
	static Const* s501;
	static Const* s502;
	static Const* s503;
	static Const* s504;
	static Const* s505;
	static Const* s506;
	static Const* s507;
	static Const* s508;
	static Const* s509;
	static Const* s510;
	static Const* s511;
	static Const* s512;
	static Const* s513;
	static Const* s514;
	static Const* s515;
	static Const* s516;
	static Const* s517;
	static Const* s518;
	static Const* s519;
	static Const* s520;
	static Const* s521;
	static Const* s522;
	static Const* s523;
	static Const* s524;
	static Const* s525;
	static Const* s526;
	static Const* s527;
	static Const* s528;
	static Const* s529;
	static Const* s530;
	static Const* s531;
	static Const* s532;
	static Const* s533;
	static Const* s534;
	static Const* s535;
	static Const* s536;
	static Const* s537;
	static Const* s538;
	static Const* s539;
	static Const* s540;
	static Const* s541;
	static Const* s542;
	static Const* s543;
	static Const* s544;
	static Const* s545;
	static Const* s546;
	static Const* s547;
	static Const* s548;
	static Const* s549;
	static Const* s550;
	static Const* s551;
	static Const* s552;
	static Const* s553;
	static Const* s554;
	static Const* s555;
	static Const* s556;
	static Const* s557;
	static Const* s558;
	static Const* s559;
	static Const* s560;
	static Const* s561;
	static Const* s562;
	static Const* s563;
	static Const* s564;
	static Const* s565;
	static Const* s566;
	static Const* s567;
	static Const* s568;
	static Const* s569;
	static Const* s570;
	static Const* s571;
	static Const* s572;
	static Const* s573;
	static Const* s574;
	static Const* s575;
	static Const* s576;
	static Const* s577;
	static Const* s578;
	static Const* s579;
	static Const* s580;
	static Const* s581;
	static Const* s582;
	static Const* s583;
	static Const* s584;
	static Const* s585;
	static Const* s586;
	static Const* s587;
	static Const* s588;
	static Const* s589;
	static Const* s590;
	static Const* s591;
	static Const* s592;
	static Const* s593;
	static Const* s594;
	static Const* s595;
	static Const* s596;
	static Const* s597;
	static Const* s598;
	static Const* s599;
	static Const* s600;
	static Const* s601;
	static Const* s602;
	static Const* s603;
	static Const* s604;
	static Const* s605;
	static Const* s606;
	static Const* s607;
	static Const* s608;
	static Const* s609;
	static Const* s610;
	static Const* s611;
	static Const* s612;
	static Const* s613;
	static Const* s614;
	static Const* s615;
	static Const* s616;
	static Const* s617;
	static Const* s618;
	static Const* s619;
	static Const* s620;
	static Const* s621;
	static Const* s622;
	static Const* s623;
	static Const* s624;
	static Const* s625;
	static Const* s626;
	static Const* s627;
	static Const* s628;
	static Const* s629;
	static Const* s630;
	static Const* s631;
	static Const* s632;
	static Int* negint2;
	static Int* negint1;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
	static Int* posint8;
	static Int* posint26;
	static Int* posint43;
	static Int* posint45;
	static Int* posint63;
	static Int* posint97;
	static Int* posint99;
	static Int* posint104;
	static Int* posint108;
	static Int* posint200;
	static Int* posint255;
	static Int* posint300;
	static Int* posint400;
	static Int* posint500;
	static Int* posint550;
	static Int* posint700;
	static Int* posint900;
	static Int* posint999;
	static Int* posint1000;
	static Int* posint1050;
	static Int* posint1100;
	static Int* posint1150;
	static Int* posint1170;
	static Int* posint1200;
	static Int* posint1201;
};

class pred_on_load_sxx_builtins_cafe_0 : public Code {

	/*
	 * 
	 * on_load_sxx_builtins_cafe(_396):-write(op(1150,fx,package),_396).
	 * on_load_sxx_builtins_cafe(_448):-write((package'TauMachine.builtin'),_448).
	 * on_load_sxx_builtins_cafe(_494):-write((public true/0,otherwise/0),_494).
	 * on_load_sxx_builtins_cafe(_540):-write((public fail/0,false/0),_540).
	 * on_load_sxx_builtins_cafe(_574):-write((public!/0),_574).
	 * on_load_sxx_builtins_cafe(_608):-write((public (^)/2),_608).
	 * on_load_sxx_builtins_cafe(_642):-write((public (',')/2),_642).
	 * on_load_sxx_builtins_cafe(_676):-write((public (;)/2),_676).
	 * on_load_sxx_builtins_cafe(_710):-write((public (->)/2),_710).
	 * on_load_sxx_builtins_cafe(_744):-write((public call/1),_744).
	 * on_load_sxx_builtins_cafe(_3820):-write((public catch/3,throw/1),_3820).
	 * on_load_sxx_builtins_cafe(_3854):-write((public on_exception/3),_3854).
	 * on_load_sxx_builtins_cafe(_4266):-write((public (=)/2,'$unify'/2),_4266).
	 * on_load_sxx_builtins_cafe(_4312):-write((public
	 * (\=)/2,'$not_unifiable'/2),_4312).
	 * on_load_sxx_builtins_cafe(_4578):-write((public
	 * var/1,atom/1,integer/1,long/1,float/1,atomic/1,compound/1,nonvar/1,number/1),
	 * _4578). on_load_sxx_builtins_cafe(_4636):-write((public
	 * java/1,java/2,closure/1),_4636).
	 * on_load_sxx_builtins_cafe(_4682):-write((public ground/1,callable/1),_4682).
	 * on_load_sxx_builtins_cafe(_5216):-write((public
	 * (==)/2,'$equality_of_term'/2),_5216).
	 * on_load_sxx_builtins_cafe(_5262):-write((public
	 * (\==)/2,'$inequality_of_term'/2),_5262).
	 * on_load_sxx_builtins_cafe(_5308):-write((public (@<)/2,'$before'/2),_5308).
	 * on_load_sxx_builtins_cafe(_5354):-write((public (@>)/2,'$after'/2),_5354).
	 * on_load_sxx_builtins_cafe(_5400):-write((public
	 * (@=<)/2,'$not_after'/2),_5400).
	 * on_load_sxx_builtins_cafe(_5446):-write((public
	 * (@>=)/2,'$not_before'/2),_5446).
	 * on_load_sxx_builtins_cafe(_5492):-write((public?= /
	 * 2,'$identical_or_cannot_unify'/2),_5492).
	 * on_load_sxx_builtins_cafe(_5526):-write((public compare/3),_5526).
	 * on_load_sxx_builtins_cafe(_6230):-write((public (=..)/2),_6230).
	 * on_load_sxx_builtins_cafe(_6264):-write((public copy_term/2),_6264).
	 * on_load_sxx_builtins_cafe(_6366):-write((public (is)/2),_6366).
	 * on_load_sxx_builtins_cafe(_6436):-write((public'$abs'/2,'$asin'/2,'$acos'/2,'
	 * $atan'/2),_6436).
	 * on_load_sxx_builtins_cafe(_6506):-write((public'$bitwise_conj'/3,'
	 * $bitwise_disj'/3,'$bitwise_exclusive_or'/3,'$bitwise_neg'/2),_6506).
	 * on_load_sxx_builtins_cafe(_6552):-write((public'$ceil'/2,'$cos'/2),_6552).
	 * on_load_sxx_builtins_cafe(_6586):-write((public'$degrees'/2),_6586).
	 * on_load_sxx_builtins_cafe(_6620):-write((public'$exp'/2),_6620).
	 * on_load_sxx_builtins_cafe(_6702):-write((public'$float'/2,'
	 * $float_integer_part'/2,'$float_fractional_part'/2,'$float_quotient'/3,'$floor
	 * '/2),_6702).
	 * on_load_sxx_builtins_cafe(_6736):-write((public'$int_quotient'/3),_6736).
	 * on_load_sxx_builtins_cafe(_6770):-write((public'$log'/2),_6770).
	 * on_load_sxx_builtins_cafe(_6852):-write((public'$max'/3,'$min'/3,'$minus'/3,'
	 * $mod'/3,'$multi'/3),_6852).
	 * on_load_sxx_builtins_cafe(_6898):-write((public'$plus'/3,'$pow'/3),_6898).
	 * on_load_sxx_builtins_cafe(_6956):-write((public'$radians'/2,'$rint'/2,'$round
	 * '/2),_6956).
	 * on_load_sxx_builtins_cafe(_7038):-write((public'$shift_left'/3,'$shift_right'
	 * /3,'$sign'/2,'$sin'/2,'$sqrt'/2),_7038).
	 * on_load_sxx_builtins_cafe(_7084):-write((public'$tan'/2,'$truncate'/2),_7084)
	 * . on_load_sxx_builtins_cafe(_8472):-write((public
	 * (=:=)/2,'$arith_equal'/2),_8472).
	 * on_load_sxx_builtins_cafe(_8518):-write((public
	 * (=\=)/2,'$arith_not_equal'/2),_8518).
	 * on_load_sxx_builtins_cafe(_8564):-write((public (<)/2,'$less_than'/2),_8564).
	 * on_load_sxx_builtins_cafe(_8610):-write((public
	 * (=<)/2,'$less_or_equal'/2),_8610).
	 * on_load_sxx_builtins_cafe(_8656):-write((public
	 * (>)/2,'$greater_than'/2),_8656).
	 * on_load_sxx_builtins_cafe(_8702):-write((public
	 * (>=)/2,'$greater_or_equal'/2),_8702).
	 * on_load_sxx_builtins_cafe(_9144):-write((public clause/2),_9144).
	 * on_load_sxx_builtins_cafe(_9178):-write((public (initialization)/2),_9178).
	 * on_load_sxx_builtins_cafe(_9212):-write((public'$new_indexing_hash'/3),_9212)
	 * . on_load_sxx_builtins_cafe(_10910):-write((public assert/1),_10910).
	 * on_load_sxx_builtins_cafe(_10944):-write((public assertz/1),_10944).
	 * on_load_sxx_builtins_cafe(_10978):-write((public asserta/1),_10978).
	 * on_load_sxx_builtins_cafe(_11012):-write((public retract/1),_11012).
	 * on_load_sxx_builtins_cafe(_11046):-write((public abolish/1),_11046).
	 * on_load_sxx_builtins_cafe(_11080):-write((public retractall/1),_11080).
	 * on_load_sxx_builtins_cafe(_15548):-write((public findall/3),_15548).
	 * on_load_sxx_builtins_cafe(_15582):-write((public bagof/3),_15582).
	 * on_load_sxx_builtins_cafe(_15616):-write((public setof/3),_15616).
	 * on_load_sxx_builtins_cafe(_18180):-write((public open/3),_18180).
	 * on_load_sxx_builtins_cafe(_18214):-write((public close/1),_18214).
	 * on_load_sxx_builtins_cafe(_18248):-write((public flush_output/0),_18248).
	 * on_load_sxx_builtins_cafe(_18282):-write((public stream_property/2),_18282).
	 * on_load_sxx_builtins_cafe(_18918):-write((public
	 * get_char/1,get_code/1),_18918).
	 * on_load_sxx_builtins_cafe(_18964):-write((public
	 * peek_char/1,peek_code/1),_18964).
	 * on_load_sxx_builtins_cafe(_19010):-write((public
	 * put_char/1,put_code/1),_19010).
	 * on_load_sxx_builtins_cafe(_19044):-write((public nl/1),_19044).
	 * on_load_sxx_builtins_cafe(_19348):-write((public get0/1,get0/2),_19348).
	 * on_load_sxx_builtins_cafe(_19382):-write((public get/1),_19382).
	 * on_load_sxx_builtins_cafe(_19428):-write((public put/1,put/2),_19428).
	 * on_load_sxx_builtins_cafe(_19462):-write((public tab/1),_19462).
	 * on_load_sxx_builtins_cafe(_19496):-write((public skip/1),_19496).
	 * on_load_sxx_builtins_cafe(_19822):-write((public
	 * get_byte/1,peek_byte/1,put_byte/1),_19822).
	 * on_load_sxx_builtins_cafe(_19982):-write((public read/1,read/2),_19982).
	 * on_load_sxx_builtins_cafe(_20028):-write((public
	 * read_with_variables/2,read_with_variables/3),_20028).
	 * on_load_sxx_builtins_cafe(_20062):-write((public read_line/1),_20062).
	 * on_load_sxx_builtins_cafe(_20096):-write((dynamic'$tokens'/1),_20096).
	 * on_load_sxx_builtins_cafe(_26148):-write((public write/1,write/2),_26148).
	 * on_load_sxx_builtins_cafe(_26194):-write((public writeq/1,writeq/2),_26194).
	 * on_load_sxx_builtins_cafe(_26240):-write((public
	 * write_canonical/1,write_canonical/2),_26240).
	 * on_load_sxx_builtins_cafe(_26286):-write((public
	 * write_term/2,write_term/3),_26286).
	 * on_load_sxx_builtins_cafe(_30228):-write((public op/3),_30228).
	 * on_load_sxx_builtins_cafe(_30262):-write((public current_op/3),_30262).
	 * on_load_sxx_builtins_cafe(_30296):-write((dynamic'$current_operator'/3),
	 * _30296). on_load_sxx_builtins_cafe(_32932):-write((public (\+)/1),_32932).
	 * on_load_sxx_builtins_cafe(_32966):-write((public once/1),_32966).
	 * on_load_sxx_builtins_cafe(_33000):-write((public repeat/0),_33000).
	 * on_load_sxx_builtins_cafe(_33172):-write((public sub_atom/5),_33172).
	 * on_load_sxx_builtins_cafe(_33206):-write((public name/2),_33206).
	 * on_load_sxx_builtins_cafe(_33240):-write((public regex_matches/3),_33240).
	 * on_load_sxx_builtins_cafe(_33274):-write((public regex_matches/2),_33274).
	 * on_load_sxx_builtins_cafe(_33878):-write((public set_prolog_flag/2),_33878).
	 * on_load_sxx_builtins_cafe(_33912):-write((public
	 * current_prolog_flag/2),_33912).
	 * on_load_sxx_builtins_cafe(_34900):-write((public halt/0),_34900).
	 * on_load_sxx_builtins_cafe(_34934):-write((public abort/0),_34934).
	 * on_load_sxx_builtins_cafe(_35028):-write((public'C'/3,expand_term/2),_35028).
	 * on_load_sxx_builtins_cafe(_36690):-write((public new_hash/1),_36690).
	 * on_load_sxx_builtins_cafe(_36724):-write((public hash_map/2),_36724).
	 * on_load_sxx_builtins_cafe(_36758):-write((public hash_exists/1),_36758).
	 * on_load_sxx_builtins_cafe(_37018):-write((public java_constructor/2),_37018).
	 * on_load_sxx_builtins_cafe(_37052):-write((public
	 * java_declared_constructor/2),_37052).
	 * on_load_sxx_builtins_cafe(_37086):-write((public java_method/3),_37086).
	 * on_load_sxx_builtins_cafe(_37120):-write((public
	 * java_declared_method/3),_37120).
	 * on_load_sxx_builtins_cafe(_37154):-write((public java_get_field/3),_37154).
	 * on_load_sxx_builtins_cafe(_37188):-write((public
	 * java_get_declared_field/3),_37188).
	 * on_load_sxx_builtins_cafe(_37222):-write((public java_set_field/3),_37222).
	 * on_load_sxx_builtins_cafe(_37256):-write((public
	 * java_set_declared_field/3),_37256).
	 * on_load_sxx_builtins_cafe(_37290):-write((public synchronized/2),_37290).
	 * on_load_sxx_builtins_cafe(_38036):-write(op(1170,xfx,:-),_38036).
	 * on_load_sxx_builtins_cafe(_38068):-write(op(1170,xfx,-->),_38068).
	 * on_load_sxx_builtins_cafe(_38100):-write(op(1170,fx,:-),_38100).
	 * on_load_sxx_builtins_cafe(_38132):-write(op(1170,fx,?-),_38132).
	 * on_load_sxx_builtins_cafe(_38164):-write(op(1150,fx,package),_38164).
	 * on_load_sxx_builtins_cafe(_38196):-write(op(1150,fx,import),_38196).
	 * on_load_sxx_builtins_cafe(_38228):-write(op(1150,fx,public),_38228).
	 * on_load_sxx_builtins_cafe(_38260):-write(op(1150,fx,dynamic),_38260).
	 * on_load_sxx_builtins_cafe(_38292):-write(op(1150,fx,meta_predicate),_38292).
	 * on_load_sxx_builtins_cafe(_38324):-write(op(1150,fx,mode),_38324).
	 * on_load_sxx_builtins_cafe(_38356):-write(op(1150,fx,multifile),_38356).
	 * on_load_sxx_builtins_cafe(_38388):-write(op(1150,fx,block),_38388).
	 * on_load_sxx_builtins_cafe(_38422):-write((public cafeteria/0),_38422).
	 * on_load_sxx_builtins_cafe(_38456):-write((public consult/1),_38456).
	 * on_load_sxx_builtins_cafe(_38490):-write((public consult_stream/1),_38490).
	 * on_load_sxx_builtins_cafe(_38536):-write((public trace/0,notrace/0),_38536).
	 * on_load_sxx_builtins_cafe(_38582):-write((public debug/0,nodebug/0),_38582).
	 * on_load_sxx_builtins_cafe(_38616):-write((public leash/1),_38616).
	 * on_load_sxx_builtins_cafe(_38674):-write((public
	 * spy/1,nospy/1,nospyall/0),_38674).
	 * on_load_sxx_builtins_cafe(_38708):-write((public listing/0),_38708).
	 * on_load_sxx_builtins_cafe(_38742):-write((public listing/1),_38742).
	 * on_load_sxx_builtins_cafe(_38776):-write((dynamic'$current_leash'/1),_38776).
	 * on_load_sxx_builtins_cafe(_38810):-write((dynamic'$current_spypoint'/3),
	 * _38810).
	 * on_load_sxx_builtins_cafe(_38844):-write((dynamic'$leap_flag'/1),_38844).
	 * on_load_sxx_builtins_cafe(_38878):-write((dynamic'$consulted_file'/1),_38878)
	 * . on_load_sxx_builtins_cafe(_38912):-write((dynamic'$consulted_import'/2),
	 * _38912).
	 * on_load_sxx_builtins_cafe(_38946):-write((dynamic'$consulted_package'/1),
	 * _38946).
	 * on_load_sxx_builtins_cafe(_38980):-write((dynamic'$consulted_predicate'/3),
	 * _38980). on_load_sxx_builtins_cafe(_45126):-write((public reverse/2),_45126).
	 * on_load_sxx_builtins_cafe(_45160):-write((public length/2),_45160).
	 * on_load_sxx_builtins_cafe(_45194):-write((public numbervars/3),_45194).
	 * on_load_sxx_builtins_cafe(_45228):-write((public statistics/2),_45228).
	 * on_load_sxx_builtins_cafe(_49328):-write((public with_mutex/2),_49328).
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
};

class pred_package_1 : public Code {

	/*
	 * 
	 * package(_414,_424):-call(_424).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_true_0 : public Code {

	/*
	 * 
	 * true(_770):-call(_770).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_otherwise_0 : public Code {

	/*
	 * 
	 * otherwise(_790):-call(_790).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_fail_0 : public Code {

	/*
	 * 
	 * fail(_808):-fail(_808).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_false_0 : public Code {

	/*
	 * 
	 * false(_830):-fail(_830).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cut_1 : public Code {

	/*
	 * 
	 * cut(1,_854):-call(_854).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_system_carrot_2 : public Code {

	/*
	 * 
	 * ^(_868,_870,_878):-call(_870,_878).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_system_comma_2 : public Code {

	/*
	 * 
	 * ','(_900,_902,_910):-call(_900,call(_902,_910)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_or_2 : public Code {

	/*
	 * 
	 * or(_938,_940,_954):- \=(_938,(_944->_946),call(_938,_954)).
	 * or(_984,_986,_1000):- \=(_986,(_990->_992),call(_986,_1000)).
	 * or((_1076->_1078),_1080,_1088):-call(_1076,cut(1,call(_1078,_1088))).
	 * or((_1124->_1126),_1128,_1136):-call(_1128,_1136).
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

class pred_sym_if_then_arrow_2 : public Code {

	/*
	 * 
	 * ->(_1030,_1032,_1040):-call(_1030,cut(1,call(_1032,_1040))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_call_1 : public Code {

	/*
	 * 
	 * call(_1158,_1168):-'$get_current_B'(_1160,'$meta_call'(_1158,user,_1160,0,
	 * interpret,_1168)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$meta_call_5 : public Code {

	/*
	 * 
	 * '$meta_call'(_1202,_1204,_1206,_1208,_1210,_1222):-var(_1202,cut(1,illarg(var
	 * ,call(_1202),1,_1222))).
	 * '$meta_call'(_1266,_1268,_1270,_1272,_1274,_1282):-closure(_1266,cut(1,'
	 * $call_closure'(_1266,_1282))).
	 * '$meta_call'(true,_1322,_1324,_1326,_1328,_1336):-cut(1,_1336).
	 * '$meta_call'(trace,_1364,_1366,_1368,_1370,_1378):-cut(1,trace(_1378)).
	 * '$meta_call'(debug,_1410,_1412,_1414,_1416,_1424):-cut(1,debug(_1424)).
	 * '$meta_call'(notrace,_1456,_1458,_1460,_1462,_1470):-cut(1,notrace(_1470)).
	 * '$meta_call'(nodebug,_1502,_1504,_1506,_1508,_1516):-cut(1,nodebug(_1516)).
	 * '$meta_call'(spy(_1550),_1552,_1554,_1556,_1558,_1566):-cut(1,spy(_1550,_1566
	 * )).
	 * '$meta_call'(nospy(_1602),_1604,_1606,_1608,_1610,_1618):-cut(1,nospy(_1602,
	 * _1618)).
	 * '$meta_call'(nospyall,_1652,_1654,_1656,_1658,_1666):-cut(1,nospyall(_1666)).
	 * '$meta_call'(leash(_1700),_1702,_1704,_1706,_1708,_1716):-cut(1,leash(_1700,
	 * _1716)).
	 * '$meta_call'([_1752|_1754],_1756,_1758,_1760,_1762,_1776):-cut(1,consult([
	 * _1752|_1754],_1776)).
	 * '$meta_call'(_1812^_1814,_1816,_1818,_1820,_1822,_1830):-cut(1,'$meta_call'(
	 * _1814,_1816,_1818,_1820,_1822,_1830)).
	 * '$meta_call'(_1874:_1876,_1878,_1880,_1882,_1884,_1892):-cut(1,'$meta_call'(
	 * _1876,_1874,_1880,_1882,_1884,_1892)).
	 * '$meta_call'(!,_1934,no,_1936,_1938,_1952):-cut(1,illarg(context(if,cut),!,0,
	 * _1952)).
	 * '$meta_call'(!,_1990,_1992,_1994,_1996,_2004):-cut(1,'$cut'(_1992,_2004)).
	 * '$meta_call'((_2040,_2042),_2044,_2046,_2048,_2050,_2058):-cut(1,'$meta_call'
	 * (_2040,_2044,_2046,_2048,_2050,'$meta_call'(_2042,_2044,_2046,_2048,_2050,
	 * _2058))).
	 * '$meta_call'((_2116->_2118;_2124),_2126,_2128,_2130,_2132,_2182):-cut(1,or(('
	 * $meta_call'(_2116,_2126,no,_2130,_2132)->'$meta_call'(_2118,_2126,_2128,_2130
	 * ,_2132)),'$meta_call'(_2124,_2126,_2128,_2130,_2132),_2182)).
	 * '$meta_call'((_2220->_2222),_2224,_2226,_2228,_2230,_2262):-cut(1,->('
	 * $meta_call'(_2220,_2224,no,_2228,_2230),'$meta_call'(_2222,_2224,_2226,_2228,
	 * _2230),_2262)).
	 * '$meta_call'((_2300;_2302),_2304,_2306,_2308,_2310,_2342):-cut(1,or('
	 * $meta_call'(_2300,_2304,_2306,_2308,_2310),'$meta_call'(_2302,_2304,_2306,
	 * _2308,_2310),_2342)).
	 * '$meta_call'(\+_2380,_2382,_2384,_2386,_2388,_2408):-cut(1,not('$meta_call'(
	 * _2380,_2382,no,_2386,_2388),_2408)).
	 * '$meta_call'(findall(_2444,_2446,_2448),_2450,_2452,_2454,_2456,_2476):-cut(1
	 * ,findall(_2444,'$meta_call'(_2446,_2450,_2452,_2454,_2456),_2448,_2476)).
	 * '$meta_call'(bagof(_2516,_2518,_2520),_2522,_2524,_2526,_2528,_2548):-cut(1,
	 * bagof(_2516,'$meta_call'(_2518,_2522,_2524,_2526,_2528),_2520,_2548)).
	 * '$meta_call'(setof(_2588,_2590,_2592),_2594,_2596,_2598,_2600,_2620):-cut(1,
	 * setof(_2588,'$meta_call'(_2590,_2594,_2596,_2598,_2600),_2592,_2620)).
	 * '$meta_call'(once(_2660),_2662,_2664,_2666,_2668,_2688):-cut(1,once('
	 * $meta_call'(_2660,_2662,_2664,_2666,_2668),_2688)).
	 * '$meta_call'(on_exception(_2724,_2726,_2728),_2730,_2732,_2734,_2736,_2768):-
	 * cut(1,on_exception(_2724,'$meta_call'(_2726,_2730,_2732,_2734,_2736),'
	 * $meta_call'(_2728,_2730,_2732,_2734,_2736),_2768)).
	 * '$meta_call'(catch(_2808,_2810,_2812),_2814,_2816,_2818,_2820,_2852):-cut(1,
	 * catch('$meta_call'(_2808,_2814,_2816,_2818,_2820),_2810,'$meta_call'(_2812,
	 * _2814,_2816,_2818,_2820),_2852)).
	 * '$meta_call'(synchronized(_2892,_2894),_2896,_2898,_2900,_2902,_2922):-cut(1,
	 * synchronized(_2892,'$meta_call'(_2894,_2896,_2898,_2900,_2902),_2922)).
	 * '$meta_call'(clause(_2960,_2962),_2964,_2966,_2968,_2970,_2984):-cut(1,clause
	 * (_2964:_2960,_2962,_2984)).
	 * '$meta_call'(assert(_3022),_3024,_3026,_3028,_3030,_3044):-cut(1,assertz(
	 * _3024:_3022,_3044)).
	 * '$meta_call'(assertz(_3080),_3082,_3084,_3086,_3088,_3102):-cut(1,assertz(
	 * _3082:_3080,_3102)).
	 * '$meta_call'(asserta(_3138),_3140,_3142,_3144,_3146,_3160):-cut(1,asserta(
	 * _3140:_3138,_3160)).
	 * '$meta_call'(retract(_3196),_3198,_3200,_3202,_3204,_3218):-cut(1,retract(
	 * _3198:_3196,_3218)).
	 * '$meta_call'(abolish(_3254),_3256,_3258,_3260,_3262,_3276):-cut(1,abolish(
	 * _3256:_3254,_3276)).
	 * '$meta_call'(retractall(_3312),_3314,_3316,_3318,_3320,_3334):-cut(1,
	 * retractall(_3314:_3312,_3334)).
	 * '$meta_call'(_3368,_3370,_3372,_3374,_3376,_3384):-atom(_3370,callable(_3368,
	 * cut(1,'$meta_call'(_3376,_3374,_3370,_3368,_3384)))).
	 * '$meta_call'(_3436,_3438,_3440,_3442,_3444,_3466):-illarg(type(callable),call
	 * (_3438:_3436),1,_3466).
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
};

class pred_$meta_call_4 : public Code {

	/*
	 * 
	 * '$meta_call'(trace,_3498,_3500,_3502,_3520):-cut(1,functor(_3502,_3504,_3506,
	 * '$trace_goal'(_3502,_3500,_3504/_3506,_3498,_3520))).
	 * '$meta_call'(interpret,_3568,_3570,_3572,_3590):-functor(_3572,_3574,_3576,'
	 * $call_internal'(_3572,_3570,_3574/_3576,_3568,interpret,_3590)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$call_internal_5 : public Code {

	/*
	 * 
	 * '$call_internal'(_3634,_3636,_3638,_3640,_3642,_3668):-'
	 * $new_internal_database'(_3636,hash_contains_key(_3636,_3638,cut(1,'
	 * $get_current_B'(_3644,is(_3652,_3640+1,clause(_3636:_3634,_3660,'$meta_call'(
	 * _3660,_3636,_3644,_3652,_3642,_3668))))))).
	 * '$call_internal'(_3746,_3748,_3750,_3752,_3754,_3762):-'$call'(_3748,_3746,
	 * _3762).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_catch_3 : public Code {

	/*
	 * 
	 * catch(_3872,_3874,_3876,_3884):-on_exception(_3874,_3872,_3876,_3884).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_throw_1 : public Code {

	/*
	 * 
	 * throw(_3912,_3920):-raise_exception(_3912,_3920).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_on_exception_3 : public Code {

	/*
	 * 
	 * on_exception(_3940,_3942,_3944,_3952):-callable(_3942,cut(1,'$on_exception'(
	 * _3940,_3942,_3944,_3952))).
	 * on_exception(_3992,_3994,_3996,_4016):-illarg(type(callable),on_exception(
	 * _3992,_3994,_3996),2,_4016).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$on_exception_3 : public Code {

	/*
	 * 
	 * '$on_exception'(_4044,_4046,_4048,_4058):-'$set_exception'('$none','
	 * $begin_exception'(_4050,call(_4046,'$end_exception'(_4050,_4058)))).
	 * '$on_exception'(_4100,_4102,_4104,_4114):-'$get_exception'(_4106,\==(_4106,'
	 * $none','$catch_and_throw'(_4106,_4100,_4104,_4114))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$catch_and_throw_3 : public Code {

	/*
	 * 
	 * '$catch_and_throw'(_4156,_4156,_4158,_4166):-cut(1,'$set_exception'('$none',
	 * call(_4158,_4166))).
	 * '$catch_and_throw'(_4202,_4204,_4206,_4214):-raise_exception(_4202,_4214).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_unify_2 : public Code {

	/*
	 * 
	 * unify(_4332,_4330,_4340):-unify(_4332,_4330,_4340).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$unify_2 : public Code {

	/*
	 * 
	 * '$unify'(_4364,_4366,_4374):-'$unify'(_4364,_4366,_4374).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_system_notequals_2 : public Code {

	/*
	 * 
	 * \=(_4398,_4400,_4408):- \=(_4398,_4400,_4408).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$not_unifiable_2 : public Code {

	/*
	 * 
	 * '$not_unifiable'(_4432,_4434,_4442):-'$not_unifiable'(_4432,_4434,_4442).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_var_1 : public Code {

	/*
	 * 
	 * var(_4700,_4708):-var(_4700,_4708).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_atom_1 : public Code {

	/*
	 * 
	 * atom(_4728,_4736):-atom(_4728,_4736).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_integer_1 : public Code {

	/*
	 * 
	 * integer(_4756,_4764):-integer(_4756,_4764).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_long_1 : public Code {

	/*
	 * 
	 * long(_4784,_4792):-long(_4784,_4792).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_float_1 : public Code {

	/*
	 * 
	 * float(_4812,_4820):-float(_4812,_4820).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_atomic_1 : public Code {

	/*
	 * 
	 * atomic(_4840,_4848):-atomic(_4840,_4848).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nonvar_1 : public Code {

	/*
	 * 
	 * nonvar(_4868,_4876):-nonvar(_4868,_4876).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_number_1 : public Code {

	/*
	 * 
	 * number(_4896,_4904):-number(_4896,_4904).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_1 : public Code {

	/*
	 * 
	 * java(_4924,_4932):-java(_4924,_4932).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_2 : public Code {

	/*
	 * 
	 * java(_4952,_4954,_4962):-java(_4952,_4954,_4962).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_closure_1 : public Code {

	/*
	 * 
	 * closure(_4986,_4994):-closure(_4986,_4994).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ground_1 : public Code {

	/*
	 * 
	 * ground(_5014,_5022):-ground(_5014,_5022).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_compound_1 : public Code {

	/*
	 * 
	 * compound(_5042,_5054):-nonvar(_5042,functor(_5042,_5044,_5046,smallerthan(0,
	 * _5046,_5054))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_callable_1 : public Code {

	/*
	 * 
	 * callable(_5092,_5100):-atom(_5092,cut(1,_5100)).
	 * callable(_5126,_5134):-compound(_5126,cut(1,_5134)).
	 * callable(_5160,_5168):-closure(_5160,_5168).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termequal_2 : public Code {

	/*
	 * 
	 * termequal(_5544,_5546,_5554):-termequal(_5544,_5546,_5554).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$equality_of_term_2 : public Code {

	/*
	 * 
	 * '$equality_of_term'(_5578,_5580,_5588):-'$equality_of_term'(_5578,_5580,_5588
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_strict_noteq_2 : public Code {

	/*
	 * 
	 * \==(_5612,_5614,_5622):- \==(_5612,_5614,_5622).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$inequality_of_term_2 : public Code {

	/*
	 * 
	 * '$inequality_of_term'(_5646,_5648,_5656):-'$inequality_of_term'(_5646,_5648,
	 * _5656).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termsmallerthan_2 : public Code {

	/*
	 * 
	 * termsmallerthan(_5680,_5682,_5690):-termsmallerthan(_5680,_5682,_5690).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$before_2 : public Code {

	/*
	 * 
	 * '$before'(_5714,_5716,_5724):-'$before'(_5714,_5716,_5724).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termgreaterthan_2 : public Code {

	/*
	 * 
	 * termgreaterthan(_5748,_5750,_5758):-termgreaterthan(_5748,_5750,_5758).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$after_2 : public Code {

	/*
	 * 
	 * '$after'(_5782,_5784,_5792):-'$after'(_5782,_5784,_5792).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termsmallerequal_2 : public Code {

	/*
	 * 
	 * termsmallerequal(_5816,_5818,_5826):-termsmallerequal(_5816,_5818,_5826).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$not_after_2 : public Code {

	/*
	 * 
	 * '$not_after'(_5850,_5852,_5860):-'$not_after'(_5850,_5852,_5860).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termgreaterequal_2 : public Code {

	/*
	 * 
	 * termgreaterequal(_5884,_5886,_5894):-termgreaterequal(_5884,_5886,_5894).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$not_before_2 : public Code {

	/*
	 * 
	 * '$not_before'(_5918,_5920,_5928):-'$not_before'(_5918,_5920,_5928).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym__c63_system_equals_2 : public Code {

	/*
	 * 
	 * ?=(_5952,_5954,_5962):- ?=(_5952,_5954,_5962).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$identical_or_cannot_unify_2 : public Code {

	/*
	 * 
	 * '$identical_or_cannot_unify'(_5986,_5988,_5996):-'$identical_or_cannot_unify'
	 * (_5986,_5988,_5996).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_compare_3 : public Code {

	/*
	 * 
	 * compare(_6020,_6022,_6024,_6034):-'$compare0'(_6026,_6022,_6024,'
	 * $map_compare_op'(_6026,_6020,_6034)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$map_compare_op_2 : public Code {

	/*
	 * 
	 * '$map_compare_op'(_6070,_6072,_6080):-arithequal(0,_6070,cut(1,unify(=,_6072,
	 * _6080))).
	 * '$map_compare_op'(_6118,_6120,_6128):-smallerthan(_6118,0,cut(1,unify(<,_6120
	 * ,_6128))).
	 * '$map_compare_op'(_6166,_6168,_6176):-smallerthan(0,_6166,cut(1,unify(>,_6168
	 * ,_6176))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_system_univ_2 : public Code {

	/*
	 * 
	 * =..(_6282,_6284,_6292):- =..(_6282,_6284,_6292).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_copy_term_2 : public Code {

	/*
	 * 
	 * copy_term(_6316,_6318,_6326):-copy_term(_6316,_6318,_6326).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_is_2 : public Code {

	/*
	 * 
	 * is(_7102,_7104,_7112):-is(_7102,_7104,_7112).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$abs_2 : public Code {

	/*
	 * 
	 * '$abs'(_7136,_7138,_7146):-'$abs'(_7136,_7138,_7146).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$asin_2 : public Code {

	/*
	 * 
	 * '$asin'(_7170,_7172,_7180):-'$asin'(_7170,_7172,_7180).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$acos_2 : public Code {

	/*
	 * 
	 * '$acos'(_7204,_7206,_7214):-'$acos'(_7204,_7206,_7214).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$atan_2 : public Code {

	/*
	 * 
	 * '$atan'(_7238,_7240,_7248):-'$atan'(_7238,_7240,_7248).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bitwise_conj_3 : public Code {

	/*
	 * 
	 * '$bitwise_conj'(_7272,_7274,_7276,_7284):-'$bitwise_conj'(_7272,_7274,_7276,
	 * _7284).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bitwise_disj_3 : public Code {

	/*
	 * 
	 * '$bitwise_disj'(_7312,_7314,_7316,_7324):-'$bitwise_disj'(_7312,_7314,_7316,
	 * _7324).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bitwise_exclusive_or_3 : public Code {

	/*
	 * 
	 * '$bitwise_exclusive_or'(_7352,_7354,_7356,_7364):-'$bitwise_exclusive_or'(
	 * _7352,_7354,_7356,_7364).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bitwise_neg_2 : public Code {

	/*
	 * 
	 * '$bitwise_neg'(_7392,_7394,_7402):-'$bitwise_neg'(_7392,_7394,_7402).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$ceil_2 : public Code {

	/*
	 * 
	 * '$ceil'(_7426,_7428,_7436):-'$ceil'(_7426,_7428,_7436).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$cos_2 : public Code {

	/*
	 * 
	 * '$cos'(_7460,_7462,_7470):-'$cos'(_7460,_7462,_7470).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$degrees_2 : public Code {

	/*
	 * 
	 * '$degrees'(_7494,_7496,_7504):-'$degrees'(_7494,_7496,_7504).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$exp_2 : public Code {

	/*
	 * 
	 * '$exp'(_7528,_7530,_7538):-'$exp'(_7528,_7530,_7538).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$float_2 : public Code {

	/*
	 * 
	 * '$float'(_7562,_7564,_7572):-'$float'(_7562,_7564,_7572).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$float_integer_part_2 : public Code {

	/*
	 * 
	 * '$float_integer_part'(_7596,_7598,_7606):-'$float_integer_part'(_7596,_7598,
	 * _7606).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$float_fractional_part_2 : public Code {

	/*
	 * 
	 * '$float_fractional_part'(_7630,_7632,_7640):-'$float_fractional_part'(_7630,
	 * _7632,_7640).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$float_quotient_3 : public Code {

	/*
	 * 
	 * '$float_quotient'(_7664,_7666,_7668,_7676):-'$float_quotient'(_7664,_7666,
	 * _7668,_7676).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$floor_2 : public Code {

	/*
	 * 
	 * '$floor'(_7704,_7706,_7714):-'$floor'(_7704,_7706,_7714).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$int_quotient_3 : public Code {

	/*
	 * 
	 * '$int_quotient'(_7738,_7740,_7742,_7750):-'$int_quotient'(_7738,_7740,_7742,
	 * _7750).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$log_2 : public Code {

	/*
	 * 
	 * '$log'(_7778,_7780,_7788):-'$log'(_7778,_7780,_7788).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$max_3 : public Code {

	/*
	 * 
	 * '$max'(_7812,_7814,_7816,_7824):-'$max'(_7812,_7814,_7816,_7824).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$min_3 : public Code {

	/*
	 * 
	 * '$min'(_7852,_7854,_7856,_7864):-'$min'(_7852,_7854,_7856,_7864).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$minus_3 : public Code {

	/*
	 * 
	 * '$minus'(_7892,_7894,_7896,_7904):-'$minus'(_7892,_7894,_7896,_7904).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$mod_3 : public Code {

	/*
	 * 
	 * '$mod'(_7932,_7934,_7936,_7944):-'$mod'(_7932,_7934,_7936,_7944).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$multi_3 : public Code {

	/*
	 * 
	 * '$multi'(_7972,_7974,_7976,_7984):-'$multi'(_7972,_7974,_7976,_7984).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$plus_3 : public Code {

	/*
	 * 
	 * '$plus'(_8012,_8014,_8016,_8024):-'$plus'(_8012,_8014,_8016,_8024).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$pow_3 : public Code {

	/*
	 * 
	 * '$pow'(_8052,_8054,_8056,_8064):-'$pow'(_8052,_8054,_8056,_8064).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$radians_2 : public Code {

	/*
	 * 
	 * '$radians'(_8092,_8094,_8102):-'$radians'(_8092,_8094,_8102).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$rint_2 : public Code {

	/*
	 * 
	 * '$rint'(_8126,_8128,_8136):-'$rint'(_8126,_8128,_8136).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$round_2 : public Code {

	/*
	 * 
	 * '$round'(_8160,_8162,_8170):-'$round'(_8160,_8162,_8170).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$shift_left_3 : public Code {

	/*
	 * 
	 * '$shift_left'(_8194,_8196,_8198,_8206):-'$shift_left'(_8194,_8196,_8198,_8206
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$shift_right_3 : public Code {

	/*
	 * 
	 * '$shift_right'(_8234,_8236,_8238,_8246):-'$shift_right'(_8234,_8236,_8238,
	 * _8246).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$sign_2 : public Code {

	/*
	 * 
	 * '$sign'(_8274,_8276,_8284):-'$sign'(_8274,_8276,_8284).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$sin_2 : public Code {

	/*
	 * 
	 * '$sin'(_8308,_8310,_8318):-'$sin'(_8308,_8310,_8318).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$sqrt_2 : public Code {

	/*
	 * 
	 * '$sqrt'(_8342,_8344,_8352):-'$sqrt'(_8342,_8344,_8352).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$tan_2 : public Code {

	/*
	 * 
	 * '$tan'(_8376,_8378,_8386):-'$tan'(_8376,_8378,_8386).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$truncate_2 : public Code {

	/*
	 * 
	 * '$truncate'(_8410,_8412,_8420):-'$truncate'(_8410,_8412,_8420).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_arithequal_2 : public Code {

	/*
	 * 
	 * arithequal(_8722,_8720,_8730):-arithequal(_8722,_8720,_8730).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$arith_equal_2 : public Code {

	/*
	 * 
	 * '$arith_equal'(_8754,_8756,_8764):-'$arith_equal'(_8754,_8756,_8764).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym__c61_system_notequals_2 : public Code {

	/*
	 * 
	 * =\=(_8788,_8790,_8798):- =\=(_8788,_8790,_8798).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$arith_not_equal_2 : public Code {

	/*
	 * 
	 * '$arith_not_equal'(_8822,_8824,_8832):-'$arith_not_equal'(_8822,_8824,_8832).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_smallerthan_2 : public Code {

	/*
	 * 
	 * smallerthan(_8856,_8858,_8866):-smallerthan(_8856,_8858,_8866).
	 * smallerthan(_8994,_8992,_9002):-smallerthan(_8994,_8992,_9002).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$less_than_2 : public Code {

	/*
	 * 
	 * '$less_than'(_8890,_8892,_8900):-'$less_than'(_8890,_8892,_8900).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_smallerorequal_2 : public Code {

	/*
	 * 
	 * smallerorequal(_8924,_8926,_8934):-smallerorequal(_8924,_8926,_8934).
	 * smallerorequal(_9062,_9060,_9070):-smallerorequal(_9062,_9060,_9070).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$less_or_equal_2 : public Code {

	/*
	 * 
	 * '$less_or_equal'(_8958,_8960,_8968):-'$less_or_equal'(_8958,_8960,_8968).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$greater_than_2 : public Code {

	/*
	 * 
	 * '$greater_than'(_9026,_9028,_9036):-'$greater_than'(_9026,_9028,_9036).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$greater_or_equal_2 : public Code {

	/*
	 * 
	 * '$greater_or_equal'(_9094,_9096,_9104):-'$greater_or_equal'(_9094,_9096,_9104
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_clause_2 : public Code {

	/*
	 * 
	 * clause(_9230,_9232,_9276):-'$head_to_term'(_9230,_9246,_9236:_9238,clause(
	 * _9230,_9232),'$new_internal_database'(_9236,'$check_procedure_permission'(
	 * _9236:_9238,access,private_procedure,clause(_9230,_9232),'$clause_internal'(
	 * _9236,_9238,_9246,_9260,_9262,copy_term(_9260,(_9246:-_9232),_9276))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$head_to_term_4 : public Code {

	/*
	 * 
	 * '$head_to_term'(_9356,_9358,_9352:_9346/_9348,_9360,_9368):-'$head_to_term'(
	 * _9356,_9358,user,_9352,_9360,functor(_9358,_9346,_9348,_9368)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$head_to_term_5 : public Code {

	/*
	 * 
	 * '$head_to_term'(_9412,_9414,_9416,_9418,_9420,_9428):-var(_9412,cut(1,illarg(
	 * var,_9420,1,_9428))).
	 * '$head_to_term'(_9474:_9476,_9478,_9480,_9482,_9484,_9492):-cut(1,'
	 * $head_to_term'(_9476,_9478,_9474,_9482,_9484,_9492)).
	 * '$head_to_term'(_9534,_9534,_9536,_9536,_9538,_9546):-callable(_9534,atom(
	 * _9536,cut(1,_9546))).
	 * '$head_to_term'(_9586,_9588,_9590,_9592,_9594,_9606):-illarg(type(callable),
	 * _9594,1,_9606).
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

class pred_$new_internal_database_1 : public Code {

	/*
	 * 
	 * '$new_internal_database'(_9638,_9648):-atom(_9638,'$get_hash_manager'(_9640,'
	 * $new_internal_database'(_9640,_9638,_9648))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$new_internal_database_2 : public Code {

	/*
	 * 
	 * '$new_internal_database'(_9682,_9684,_9692):-hash_contains_key(_9682,_9684,
	 * cut(1,_9692)).
	 * '$new_internal_database'(_9722,_9724,_9744):-new_hash(_9736,[alias(_9724)],'
	 * $init_internal_database'(_9724,_9744)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$init_internal_database_1 : public Code {

	/*
	 * 
	 * '$init_internal_database'(_9774,_9792):-'$compiled_predicate'(_9774,'$init',0
	 * ,findall(_9782,_9774:'$init',_9784,cut(1,_9792))).
	 * '$init_internal_database'(_9832,_9842):-call(_9842).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$defined_internal_database_1 : public Code {

	/*
	 * 
	 * '$defined_internal_database'(_9856,_9866):-atom(_9856,'$get_hash_manager'(
	 * _9858,hash_contains_key(_9858,_9856,_9866))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$clause_internal_5 : public Code {

	/*
	 * 
	 * '$clause_internal'(_9900,_9902,_9904,_9906,_9908,_9920):-hash_contains_key(
	 * _9900,_9902,'$get_indices'(_9900,_9902,_9904,_9910,'$get_instances'(_9910,
	 * _9912,'$clause_internal0'(_9912,_9906,_9908,_9920)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$clause_internal0_3 : public Code {

	/*
	 * 
	 * '$clause_internal0'([],_9980,_9982,_9990):-fail(_9990).
	 * '$clause_internal0'([(_10014,_10016)],_10014,_10016,_10030):-cut(1,_10030).
	 * '$clause_internal0'(_10054,_10056,_10058,_10072):-'$builtin_member'((_10056,
	 * _10058),_10054,_10072).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$get_indices_4 : public Code {

	/*
	 * 
	 * '$get_indices'(_10098,_10100,_10102,_10104,_10144):-'$new_indexing_hash'(
	 * _10098,_10100,_10106,'$calc_indexing_key'(_10102,_10108,or((hash_contains_key
	 * (_10106,_10108)->hash_get(_10106,_10108,_10104)),hash_get(_10106,var,_10104),
	 * _10144))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$new_indexing_hash_3 : public Code {

	/*
	 * 
	 * '$new_indexing_hash'(_10190,_10192,_10194,_10202):-hash_contains_key(_10190,
	 * _10192,cut(1,hash_get(_10190,_10192,_10194,_10202))).
	 * '$new_indexing_hash'(_10244,_10246,_10248,_10256):-new_hash(_10248,hash_put(
	 * _10248,all,[],hash_put(_10248,var,[],hash_put(_10248,lis,[],hash_put(_10248,
	 * str,[],hash_put(_10244,_10246,_10248,_10256)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$calc_indexing_key_2 : public Code {

	/*
	 * 
	 * '$calc_indexing_key'(_10330,all,_10338):-atom(_10330,cut(1,_10338)).
	 * '$calc_indexing_key'(_10366,_10368,_10378):-arg(1,_10366,_10370,'
	 * $calc_indexing_key0'(_10370,_10368,_10378)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$calc_indexing_key0_2 : public Code {

	/*
	 * 
	 * '$calc_indexing_key0'(_10412,all,_10420):-var(_10412,cut(1,_10420)).
	 * '$calc_indexing_key0'(_10448,lis,_10462):-unify([_10452|_10454],_10448,cut(1,
	 * _10462)).
	 * '$calc_indexing_key0'(_10492,str,_10500):-compound(_10492,cut(1,_10500)).
	 * '$calc_indexing_key0'(_10528,_10530,_10538):-ground(_10528,cut(1,'$term_hash'
	 * (_10528,_10530,_10538))).
	 * '$calc_indexing_key0'(_10574,_10576,_10594):-illarg(type(term),'
	 * $calc_indexing_key0'(_10574,_10576),1,_10594).
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

class pred_$check_procedure_permission_4 : public Code {

	/*
	 * 
	 * '$check_procedure_permission'(_10628:_10622/_10624,_10632,_10634,_10636,
	 * _10650):-hash_contains_key(_10628,_10622/_10624,cut(1,_10650)).
	 * '$check_procedure_permission'(_10692:_10686/_10688,_10696,_10698,_10700,
	 * _10732):-'$compiled_predicate_or_builtin'(_10692,_10686,_10688,cut(1,illarg(
	 * permission(_10696,_10698,_10692:_10686/_10688,_10722),_10700,_10724,_10732)))
	 * . '$check_procedure_permission'(_10778,_10780,_10782,_10784,_10794):-call(
	 * _10794).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_initialization_2 : public Code {

	/*
	 * 
	 * initialization([],_10814,_10822):-cut(1,once(_10814,_10822)).
	 * initialization([_10852|_10854],_10856,_10864):-'$new_internal_database'(
	 * _10852,initialization(_10854,_10856,_10864)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_assert_1 : public Code {

	/*
	 * 
	 * assert(_11098,_11106):-assertz(_11098,_11106).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_assertz_1 : public Code {

	/*
	 * 
	 * assertz(_11126,_11160):-'$term_to_clause'(_11126,_11138,_11130:_11132,assertz
	 * (_11126),'$new_internal_database'(_11130,'$check_procedure_permission'(_11130
	 * :_11132,modify,static_procedure,assertz(_11126),copy_term(_11138,_11150,'
	 * $insert'(_11150,_11152,'$update_indexing'(_11130,_11132,_11138,_11152,z,fail(
	 * _11160))))))). assertz(_11238,_11248):-call(_11248).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_asserta_1 : public Code {

	/*
	 * 
	 * asserta(_11262,_11296):-'$term_to_clause'(_11262,_11274,_11266:_11268,asserta
	 * (_11262),'$new_internal_database'(_11266,'$check_procedure_permission'(_11266
	 * :_11268,modify,static_procedure,asserta(_11262),copy_term(_11274,_11286,'
	 * $insert'(_11286,_11288,'$update_indexing'(_11266,_11268,_11274,_11288,a,fail(
	 * _11296))))))). asserta(_11374,_11384):-call(_11384).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_abolish_1 : public Code {

	/*
	 * 
	 * abolish(_11398,_11430):-'$term_to_predicateindicator'(_11398,_11402:_11404,
	 * abolish(_11398),'$new_internal_database'(_11402,'$check_procedure_permission'
	 * (_11402:_11404,modify,static_procedure,abolish(_11398),'$new_indexing_hash'(
	 * _11402,_11404,_11420,hash_get(_11420,all,_11422,'$erase_all'(_11422,
	 * hash_remove(_11402,_11404,fail(_11430)))))))).
	 * abolish(_11510,_11520):-call(_11520).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_retract_1 : public Code {

	/*
	 * 
	 * retract(_11534,_11574):-'$clause_to_term'(_11534,_11546,_11538:_11540,retract
	 * (_11534),'$new_internal_database'(_11538,'$check_procedure_permission'(_11538
	 * :_11540,access,static_procedure,retract(_11534),unify((_11560:-_11562),_11546
	 * ,'$clause_internal'(_11538,_11540,_11560,_11564,_11566,copy_term(_11564,
	 * _11546,'$erase'(_11566,'$rehash_indexing'(_11538,_11540,_11566,_11574))))))))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_retractall_1 : public Code {

	/*
	 * 
	 * retractall(_11664,_11704):-'$head_to_term'(_11664,_11676,_11668:_11670,
	 * retractall(_11664),'$new_internal_database'(_11668,'
	 * $check_procedure_permission'(_11668:_11670,access,static_procedure,retractall
	 * (_11664),'$clause_internal'(_11668,_11670,_11676,_11688,_11690,copy_term(
	 * _11688,(_11676:-_11696),'$erase'(_11690,'$rehash_indexing'(_11668,_11670,
	 * _11690,fail(_11704)))))))). retractall(_11790,_11800):-call(_11800).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_to_clause_4 : public Code {

	/*
	 * 
	 * '$term_to_clause'(_11826,_11828,_11822:_11816/_11818,_11830,_11844):-'
	 * $term_to_clause'(_11826,_11828,user,_11822,_11830,unify((_11834:-_11836),
	 * _11828,functor(_11834,_11816,_11818,_11844))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_to_clause_5 : public Code {

	/*
	 * 
	 * '$term_to_clause'(_11896,_11898,_11900,_11902,_11904,_11912):-var(_11896,cut(
	 * 1,illarg(var,_11904,1,_11912))).
	 * '$term_to_clause'(_11956,_11958,_11960,_11962,_11964,_11972):-var(_11960,cut(
	 * 1,illarg(var,_11964,1,_11972))).
	 * '$term_to_clause'(_12018:_12020,_12022,_12024,_12026,_12028,_12036):-cut(1,'
	 * $term_to_clause'(_12020,_12022,_12018,_12026,_12028,_12036)).
	 * '$term_to_clause'(_12078,_12080,_12082,_12084,_12086,_12102):-not(atom(_12082
	 * ),cut(1,illarg(type(atom),_12086,1,_12102))).
	 * '$term_to_clause'((_12148:-_12150),(_12154:-_12156),_12158,_12158,_12160,
	 * _12168):-cut(1,'$term_to_head'(_12148,_12154,_12158,_12160,'$term_to_body'(
	 * _12150,_12156,_12158,_12160,_12168))).
	 * '$term_to_clause'(_12226,(_12222:-true),_12228,_12228,_12230,_12238):-'
	 * $term_to_head'(_12226,_12222,_12228,_12230,_12238).
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
};

class pred_$term_to_head_4 : public Code {

	/*
	 * 
	 * '$term_to_head'(_12272,_12272,_12274,_12276,_12284):-atom(_12272,cut(1,_12284
	 * )).
	 * '$term_to_head'(_12316,_12316,_12318,_12320,_12328):-compound(_12316,cut(1,
	 * _12328)).
	 * '$term_to_head'(_12360,_12362,_12364,_12366,_12378):-illarg(type(callable),
	 * _12366,1,_12378).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_to_body_4 : public Code {

	/*
	 * 
	 * '$term_to_body'(_12408,_12410,_12412,_12414,_12422):-'$localize_body'(_12408,
	 * _12412,_12410,_12422).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$localize_body_3 : public Code {

	/*
	 * 
	 * '$localize_body'(_12452,_12454,_12456,_12468):-var(_12452,cut(1,'
	 * $localize_body'(call(_12452),_12454,_12456,_12468))).
	 * '$localize_body'(_12510:_12512,_12514,_12516,_12524):-cut(1,'$localize_body'(
	 * _12512,_12510,_12516,_12524)).
	 * '$localize_body'((_12560,_12562),_12570,(_12566,_12568),_12578):-cut(1,'
	 * $localize_body'(_12560,_12570,_12566,'$localize_body'(_12562,_12570,_12568,
	 * _12578))).
	 * '$localize_body'((_12624->_12626),_12634,(_12630->_12632),_12642):-cut(1,'
	 * $localize_body'(_12624,_12634,_12630,'$localize_body'(_12626,_12634,_12632,
	 * _12642))).
	 * '$localize_body'((_12688;_12690),_12698,(_12694;_12696),_12706):-cut(1,'
	 * $localize_body'(_12688,_12698,_12694,'$localize_body'(_12690,_12698,_12696,
	 * _12706))).
	 * '$localize_body'(_12750,_12752,_12754,_12782):-functor(_12750,_12756,_12758,'
	 * $builtin_meta_predicates'(_12756,_12758,_12760,cut(1,=..(_12750,[_12756|
	 * _12766],'$localize_args'(_12760,_12766,_12752,_12768,=..(_12754,[_12756|
	 * _12768],_12782)))))).
	 * '$localize_body'(_12858,_12856,call(_12856:_12858),_12870):-var(_12856,cut(1,
	 * _12870)). '$localize_body'(_12900,user,_12900,_12908):-cut(1,_12908).
	 * '$localize_body'(_12932,_12934,_12932,_12942):-system_predicate(_12932,cut(1,
	 * _12942)). '$localize_body'(_12976,_12974,_12974:_12976,_12986):-call(_12986).
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
};

class pred_$localize_args_4 : public Code {

	/*
	 * 
	 * '$localize_args'([],[],_13004,[],_13012):-cut(1,_13012).
	 * '$localize_args'([:|_13042],[_13046|_13048],_13052,[_13052:_13046|_13060],
	 * _13084):-or(var(_13046),_13046\=_13068:_13070,cut(1,'$localize_args'(_13042,
	 * _13048,_13052,_13060,_13084))).
	 * '$localize_args'([_13132|_13134],[_13138|_13140],_13148,[_13138|_13146],
	 * _13156):-'$localize_args'(_13134,_13140,_13148,_13146,_13156).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$builtin_meta_predicates_3 : public Code {

	/*
	 * 
	 * '$builtin_meta_predicates'(^,2,[?,:],_13208):-call(_13208).
	 * '$builtin_meta_predicates'(call,1,[:],_13240):-call(_13240).
	 * '$builtin_meta_predicates'(once,1,[:],_13272):-call(_13272).
	 * '$builtin_meta_predicates'(\+,1,[:],_13304):-call(_13304).
	 * '$builtin_meta_predicates'(findall,3,[?,:,?],_13348):-call(_13348).
	 * '$builtin_meta_predicates'(setof,3,[?,:,?],_13392):-call(_13392).
	 * '$builtin_meta_predicates'(bagof,3,[?,:,?],_13436):-call(_13436).
	 * '$builtin_meta_predicates'(on_exception,3,[?,:,:],_13480):-call(_13480).
	 * '$builtin_meta_predicates'(catch,3,[:,?,:],_13524):-call(_13524).
	 * '$builtin_meta_predicates'(synchronized,2,[?,:],_13562):-call(_13562).
	 * '$builtin_meta_predicates'(freeze,2,[?,:],_13600):-call(_13600).
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
};

class pred_$clause_to_term_4 : public Code {

	/*
	 * 
	 * '$clause_to_term'(_13630,_13632,_13626:_13620/_13622,_13634,_13648):-'
	 * $clause_to_term'(_13630,_13632,user,_13626,_13634,unify((_13638:-_13640),
	 * _13632,functor(_13638,_13620,_13622,_13648))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$clause_to_term_5 : public Code {

	/*
	 * 
	 * '$clause_to_term'(_13700,_13702,_13704,_13706,_13708,_13716):-var(_13700,cut(
	 * 1,illarg(var,_13708,1,_13716))).
	 * '$clause_to_term'(_13760,_13762,_13764,_13766,_13768,_13776):-var(_13764,cut(
	 * 1,illarg(var,_13768,1,_13776))).
	 * '$clause_to_term'(_13822:_13824,_13826,_13828,_13830,_13832,_13840):-cut(1,'
	 * $clause_to_term'(_13824,_13826,_13822,_13830,_13832,_13840)).
	 * '$clause_to_term'(_13882,_13884,_13886,_13888,_13890,_13906):-not(atom(_13886
	 * ),cut(1,illarg(type(atom),_13890,1,_13906))).
	 * '$clause_to_term'((_13952:-_13954),(_13958:-_13954),_13962,_13962,_13964,
	 * _13974):-cut(1,'$head_to_term'(_13952,_13958,_13966,_13964,_13974)).
	 * '$clause_to_term'(_14020,(_14016:-true),_14022,_14022,_14024,_14034):-'
	 * $head_to_term'(_14020,_14016,_14026,_14024,_14034).
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
};

class pred_$term_to_predicateindicator_3 : public Code {

	/*
	 * 
	 * '$term_to_predicateindicator'(_14074,_14070:_14072,_14076,_14084):-'
	 * $term_to_predicateindicator'(_14074,_14072,user,_14070,_14076,_14084).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_to_predicateindicator_5 : public Code {

	/*
	 * 
	 * '$term_to_predicateindicator'(_14116,_14118,_14120,_14122,_14124,_14132):-var
	 * (_14116,cut(1,illarg(var,_14124,1,_14132))).
	 * '$term_to_predicateindicator'(_14176,_14178,_14180,_14182,_14184,_14192):-var
	 * (_14180,cut(1,illarg(var,_14184,1,_14192))).
	 * '$term_to_predicateindicator'(_14238:_14240,_14242,_14244,_14246,_14248,
	 * _14256):-cut(1,'$term_to_predicateindicator'(_14240,_14242,_14238,_14246,
	 * _14248,_14256)).
	 * '$term_to_predicateindicator'(_14298,_14300,_14302,_14304,_14306,_14324):-
	 * \=(_14298,_14310/_14312,cut(1,illarg(type(predicate_indicator),_14306,1,
	 * _14324))).
	 * '$term_to_predicateindicator'(_14372/_14374,_14376,_14378,_14380,_14382,
	 * _14398):-not(atom(_14372),cut(1,illarg(type(atom),_14382,1,_14398))).
	 * '$term_to_predicateindicator'(_14444/_14446,_14448,_14450,_14452,_14454,
	 * _14470):-not(integer(_14446),cut(1,illarg(type(integer),_14454,1,_14470))).
	 * '$term_to_predicateindicator'(_14514,_14514,_14516,_14516,_14518,_14528):-
	 * call(_14528).
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
};

class pred_$update_indexing_5 : public Code {

	/*
	 * 
	 * '$update_indexing'(_14550,_14552,_14554,_14556,_14558,_14570):-'
	 * $new_indexing_hash'(_14550,_14552,_14560,'$gen_indexing_keys'(_14554,_14560,
	 * _14562,'$update_indexing_hash'(_14558,_14562,_14560,_14556,_14570))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$gen_indexing_keys_3 : public Code {

	/*
	 * 
	 * '$gen_indexing_keys'((_14626:-_14628),_14636,[all],_14644):-atom(_14626,cut(1
	 * ,_14644)).
	 * '$gen_indexing_keys'((_14676:-_14678),_14680,_14682,_14692):-arg(1,_14676,
	 * _14684,'$gen_indexing_keys0'(_14684,_14680,_14682,_14692)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$gen_indexing_keys0_3 : public Code {

	/*
	 * 
	 * '$gen_indexing_keys0'(_14730,_14732,_14734,_14742):-var(_14730,cut(1,
	 * hash_keys(_14732,_14734,_14742))).
	 * '$gen_indexing_keys0'(_14792,_14794,[all,lis],_14808):-unify([_14798|_14800],
	 * _14792,cut(1,_14808)).
	 * '$gen_indexing_keys0'(_14852,_14854,[all,str],_14862):-compound(_14852,cut(1,
	 * _14862)).
	 * '$gen_indexing_keys0'(_14904,_14906,[all,_14900],_14948):-ground(_14904,cut(1
	 * ,'$term_hash'(_14904,_14900,or((hash_contains_key(_14906,_14900)->true),(
	 * hash_get(_14906,var,_14926),hash_put(_14906,_14900,_14926)),_14948)))).
	 * '$gen_indexing_keys0'(_14994,_14996,_14998,_15018):-illarg(type(term),'
	 * $gen_indexing_keys0'(_14994,_14996,_14998),1,_15018).
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

class pred_$update_indexing_hash_4 : public Code {

	/*
	 * 
	 * '$update_indexing_hash'(a,_15046,_15048,_15050,_15058):-cut(1,'$hash_addz_all
	 * '(_15046,_15048,_15050,_15058)).
	 * '$update_indexing_hash'(z,_15094,_15096,_15098,_15106):-cut(1,'$hash_adda_all
	 * '(_15094,_15096,_15098,_15106)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$hash_adda_all_3 : public Code {

	/*
	 * 
	 * '$hash_adda_all'([],_15142,_15144,_15152):-cut(1,_15152).
	 * '$hash_adda_all'([_15178|_15180],_15182,_15184,_15192):-'$hash_adda'(_15182,
	 * _15178,_15184,'$hash_adda_all'(_15180,_15182,_15184,_15192)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$hash_addz_all_3 : public Code {

	/*
	 * 
	 * '$hash_addz_all'([],_15230,_15232,_15240):-cut(1,_15240).
	 * '$hash_addz_all'([_15266|_15268],_15270,_15272,_15280):-'$hash_addz'(_15270,
	 * _15266,_15272,'$hash_addz_all'(_15268,_15270,_15272,_15280)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$erase_all_1 : public Code {

	/*
	 * 
	 * '$erase_all'([],_15324):-cut(1,_15324).
	 * '$erase_all'([_15346|_15348],_15356):-'$erase'(_15346,'$erase_all'(_15348,
	 * _15356)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$rehash_indexing_3 : public Code {

	/*
	 * 
	 * '$rehash_indexing'(_15382,_15384,_15386,_15398):-'$new_indexing_hash'(_15382,
	 * _15384,_15388,hash_keys(_15388,_15390,'$remove_index_all'(_15390,_15388,
	 * _15386,_15398))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$remove_index_all_3 : public Code {

	/*
	 * 
	 * '$remove_index_all'([],_15444,_15446,_15454):-cut(1,_15454).
	 * '$remove_index_all'([_15480|_15482],_15484,_15486,_15494):-'
	 * $hash_remove_first'(_15484,_15480,_15486,'$remove_index_all'(_15482,_15484,
	 * _15486,_15494)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_findall_3 : public Code {

	/*
	 * 
	 * findall(_15634,_15636,_15638,_15648):-callable(_15636,cut(1,new_hash(_15640,'
	 * $findall'(_15640,_15634,_15636,_15638,_15648)))).
	 * findall(_15696,_15698,_15700,_15720):-illarg(type(callable),findall(_15696,
	 * _15698,_15700),2,_15720).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$findall_4 : public Code {

	/*
	 * 
	 * '$findall'(_15748,_15750,_15752,_15754,_15764):-call(_15752,copy_term(_15750,
	 * _15756,'$hash_addz'(_15748,'$FINDALL',_15756,fail(_15764)))).
	 * '$findall'(_15812,_15814,_15816,_15818,_15826):-hash_get(_15812,'$FINDALL',
	 * _15818,_15826).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_bagof_3 : public Code {

	/*
	 * 
	 * bagof(_15856,_15858,_15860,_15868):-callable(_15858,cut(1,'$bagof'(_15856,
	 * _15858,_15860,_15868))).
	 * bagof(_15908,_15910,_15912,_15932):-illarg(type(callable),bagof(_15908,_15910
	 * ,_15912),2,_15932).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_setof_3 : public Code {

	/*
	 * 
	 * setof(_15960,_15962,_15964,_15974):-callable(_15962,cut(1,'$bagof'(_15960,
	 * _15962,_15966,sort(_15966,_15964,_15974)))).
	 * setof(_16022,_16024,_16026,_16046):-illarg(type(callable),setof(_16022,_16024
	 * ,_16026),2,_16046).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bagof_3 : public Code {

	/*
	 * 
	 * '$bagof'(_16074,_16076,_16078,_16106):-'$free_variables_set'(_16076,_16074,
	 * _16080,\==(_16080,[],cut(1,=..(_16088,['$witness'|_16080],findall(_16088+
	 * _16074,_16076,_16096,'$bagof_instances'(_16096,_16088,_16098,unify(_16098,
	 * _16078,_16106))))))).
	 * '$bagof'(_16184,_16186,_16188,_16196):-findall(_16184,_16186,_16188,\==(
	 * _16188,[],_16196)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bagof_instances_3 : public Code {

	/*
	 * 
	 * '$bagof_instances'([],_16232,_16234,_16242):-fail(_16242).
	 * '$bagof_instances'(_16264,_16266,_16268,_16312):-unify([_16272+_16274|_16280]
	 * ,_16264,'$variants_subset'(_16280,_16272,_16282,_16284,_16286,'
	 * $bagof_instances0'(_16286,_16266,_16268,[_16272+_16274|_16282],[_16274|_16284
	 * ],_16312))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$bagof_instances0_5 : public Code {

	/*
	 * 
	 * '$bagof_instances0'(_16366,_16368,_16370,_16372,_16374,_16382):-'
	 * $unify_witness'(_16372,_16368,unify(_16374,_16370,_16382)).
	 * '$bagof_instances0'(_16420,_16422,_16424,_16426,_16428,_16436):-'
	 * $bagof_instances'(_16420,_16422,_16424,_16436).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$variants_subset_5 : public Code {

	/*
	 * 
	 * '$variants_subset'([],_16468,[],[],[],_16476):-cut(1,_16476).
	 * '$variants_subset'([_16506+_16508|_16514],_16534,[_16506+_16508|_16526],[
	 * _16508|_16532],_16536,_16544):-'$term_variant'(_16534,_16506,cut(1,'
	 * $variants_subset'(_16514,_16534,_16526,_16532,_16536,_16544))).
	 * '$variants_subset'([_16596|_16598],_16606,_16608,_16610,[_16596|_16604],
	 * _16618):-'$variants_subset'(_16598,_16606,_16608,_16610,_16604,_16618).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_variant_2 : public Code {

	/*
	 * 
	 * '$term_variant'(_16654,_16656,_16666):-new_hash(_16658,'$term_variant'(_16654
	 * ,_16656,_16658,_16666)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$term_variant_3 : public Code {

	/*
	 * 
	 * '$term_variant'(_16698,_16700,_16702,_16760):-var(_16698,cut(1,or((
	 * hash_contains_key(_16702,_16698)->hash_get(_16702,_16698,_16716),_16700==
	 * _16716),(var(_16700),hash_put(_16702,_16698,_16700)),_16760))).
	 * '$term_variant'(_16798,_16800,_16802,_16810):-ground(_16798,cut(1,termequal(
	 * _16798,_16800,_16810))).
	 * '$term_variant'(_16848,_16850,_16852,_16860):-var(_16850,cut(1,fail(_16860)))
	 * . '$term_variant'([_16896|_16898],[_16902|_16904],_16906,_16914):-cut(1,'
	 * $term_variant'(_16896,_16902,_16906,'$term_variant'(_16898,_16904,_16906,
	 * _16914))). '$term_variant'(_16958,_16960,_16962,_16974):-
	 * =..(_16958,_16964,=..(_16960,_16966,'$term_variant'(_16964,_16966,_16962,
	 * _16974))).
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

class pred_$unify_witness_2 : public Code {

	/*
	 * 
	 * '$unify_witness'([],_17018,_17026):-cut(1,_17026).
	 * '$unify_witness'([_17050+_17052|_17058],_17050,_17066):-'$unify_witness'(
	 * _17058,_17050,_17066).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$variables_set_2 : public Code {

	/*
	 * 
	 * '$variables_set'(_17090,_17092,_17100):-'$variables_set'(_17090,[],_17092,
	 * _17100).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$variables_set_3 : public Code {

	/*
	 * 
	 * '$variables_set'(_17126,_17128,_17128,_17136):-var(_17126,'$builtin_memq'(
	 * _17126,_17128,cut(1,_17136))).
	 * '$variables_set'(_17176,_17178,[_17176|_17178],_17186):-var(_17176,cut(1,
	 * _17186)).
	 * '$variables_set'(_17216,_17218,_17218,_17226):-atomic(_17216,cut(1,_17226)).
	 * '$variables_set'([_17258|_17260],_17262,_17264,_17274):-cut(1,'$variables_set
	 * '(_17258,_17262,_17266,'$variables_set'(_17260,_17266,_17264,_17274))).
	 * '$variables_set'(_17318,_17320,_17322,_17332):-
	 * =..(_17318,_17324,'$variables_set'(_17324,_17320,_17322,_17332)).
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

class pred_$builtin_memq_2 : public Code {

	/*
	 * 
	 * '$builtin_memq'(_17374,[_17370|_17372],_17382):-termequal(_17374,_17370,cut(1
	 * ,_17382)).
	 * '$builtin_memq'(_17418,[_17414|_17416],_17426):-'$builtin_memq'(_17418,_17416
	 * ,_17426).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$existential_variables_set_2 : public Code {

	/*
	 * 
	 * '$existential_variables_set'(_17450,_17452,_17460):-'
	 * $existential_variables_set'(_17450,[],_17452,_17460).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$existential_variables_set_3 : public Code {

	/*
	 * 
	 * '$existential_variables_set'(_17486,_17488,_17488,_17496):-var(_17486,cut(1,
	 * _17496)).
	 * '$existential_variables_set'(_17526,_17528,_17528,_17536):-atomic(_17526,cut(
	 * 1,_17536)).
	 * '$existential_variables_set'(_17568:_17570,_17572,_17574,_17582):-cut(1,'
	 * $existential_variables_set'(_17570,_17572,_17574,_17582)).
	 * '$existential_variables_set'(_17618^_17620,_17622,_17624,_17634):-cut(1,'
	 * $variables_set'(_17618,_17622,_17626,'$existential_variables_set'(_17620,
	 * _17626,_17624,_17634))).
	 * '$existential_variables_set'('$meta_call'(_17680,_17682,_17684,_17686,_17688)
	 * ,_17690,_17692,_17700):-cut(1,'$existential_variables_set'(_17680,_17690,
	 * _17692,_17700)).
	 * '$existential_variables_set'(_17734,_17736,_17736,_17746):-call(_17746).
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
};

class pred_$free_variables_set_3 : public Code {

	/*
	 * 
	 * '$free_variables_set'(_17764,_17766,_17768,_17782):-'$variables_set'(_17764,
	 * _17770,'$variables_set'(_17766,_17772,'$existential_variables_set'(_17764,
	 * _17772,_17774,'$builtin_set_diff'(_17770,_17774,_17768,cut(1,_17782))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$builtin_set_diff_3 : public Code {

	/*
	 * 
	 * '$builtin_set_diff'(_17842,_17844,_17846,_17858):-sort(_17842,_17848,sort(
	 * _17844,_17850,'$builtin_set_diff0'(_17848,_17850,_17846,_17858))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$builtin_set_diff0_3 : public Code {

	/*
	 * 
	 * '$builtin_set_diff0'([],_17902,[],_17910):-cut(1,_17910).
	 * '$builtin_set_diff0'(_17934,[],_17934,_17942):-cut(1,_17942).
	 * '$builtin_set_diff0'([_17968|_17970],[_17974|_17976],_17978,_17986):-
	 * termequal(_17968,_17974,cut(1,'$builtin_set_diff0'(_17970,_17976,_17978,
	 * _17986))).
	 * '$builtin_set_diff0'([_18030|_18032],[_18036|_18038],[_18030|_18044],_18058):
	 * -termsmallerthan(_18030,_18036,cut(1,'$builtin_set_diff0'(_18032,[_18036|
	 * _18038],_18044,_18058))).
	 * '$builtin_set_diff0'([_18102|_18104],[_18108|_18110],[_18108|_18116],_18136):
	 * -'$builtin_set_diff0'([_18102|_18104],_18110,[_18108|_18116],_18136).
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

class pred_open_3 : public Code {

	/*
	 * 
	 * open(_18300,_18302,_18304,_18312):-open(_18300,_18302,_18304,[],_18312).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_close_1 : public Code {

	/*
	 * 
	 * close(_18342,_18350):-close(_18342,[],_18350).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_flush_output_0 : public Code {

	/*
	 * 
	 * flush_output(_18380):-current_output(_18372,flush_output(_18372,_18380)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_stream_property_2 : public Code {

	/*
	 * 
	 * stream_property(_18404,_18406,_18414):-var(_18406,cut(1,'$stream_property'(
	 * _18404,_18406,_18414))).
	 * stream_property(_18450,_18452,_18460):-'$stream_property_specifier'(_18452,
	 * cut(1,'$stream_property'(_18450,_18452,_18460))).
	 * stream_property(_18496,_18498,_18518):-illarg(domain(term,stream_property),
	 * stream_property(_18496,_18498),2,_18518).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$stream_property_2 : public Code {

	/*
	 * 
	 * '$stream_property'(_18544,_18546,_18564):-var(_18544,cut(1,'
	 * $get_stream_manager'(_18548,hash_map(_18548,_18550,'$builtin_member'((_18544,
	 * _18556),_18550,java(_18544,'$builtin_member'(_18546,_18556,_18564))))))).
	 * '$stream_property'(_18628,_18630,_18642):-java(_18628,cut(1,'
	 * $get_stream_manager'(_18632,hash_get(_18632,_18628,_18634,'$builtin_member'(
	 * _18630,_18634,_18642))))).
	 * '$stream_property'(_18694,_18696,_18716):-illarg(domain(stream,stream),
	 * stream_property(_18694,_18696),1,_18716).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$stream_property_specifier_1 : public Code {

	/*
	 * 
	 * '$stream_property_specifier'(input,_18750):-call(_18750).
	 * '$stream_property_specifier'(output,_18772):-call(_18772).
	 * '$stream_property_specifier'(alias(_18788),_18798):-call(_18798).
	 * '$stream_property_specifier'((mode _18814),_18824):-call(_18824).
	 * '$stream_property_specifier'(type(_18840),_18850):-call(_18850).
	 * '$stream_property_specifier'(file_name(_18866),_18876):-call(_18876).
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
};

class pred_get_char_1 : public Code {

	/*
	 * 
	 * get_char(_19062,_19072):-current_input(_19064,get_char(_19064,_19062,_19072))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get_code_1 : public Code {

	/*
	 * 
	 * get_code(_19100,_19110):-current_input(_19102,get_code(_19102,_19100,_19110))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_peek_char_1 : public Code {

	/*
	 * 
	 * peek_char(_19138,_19148):-current_input(_19140,peek_char(_19140,_19138,_19148
	 * )).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_peek_code_1 : public Code {

	/*
	 * 
	 * peek_code(_19176,_19186):-current_input(_19178,peek_code(_19178,_19176,_19186
	 * )).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_put_char_1 : public Code {

	/*
	 * 
	 * put_char(_19214,_19224):-current_output(_19216,put_char(_19216,_19214,_19224)
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_put_code_1 : public Code {

	/*
	 * 
	 * put_code(_19252,_19262):-current_output(_19254,put_code(_19254,_19252,_19262)
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nl_1 : public Code {

	/*
	 * 
	 * nl(_19290,_19298):-put_char(_19290,'\n',_19298).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get0_1 : public Code {

	/*
	 * 
	 * get0(_19514,_19524):-current_input(_19516,get_code(_19516,_19514,_19524)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get0_2 : public Code {

	/*
	 * 
	 * get0(_19552,_19554,_19562):-get_code(_19552,_19554,_19562).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get_1 : public Code {

	/*
	 * 
	 * get(_19586,_19596):-current_input(_19588,get(_19588,_19586,_19596)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_put_1 : public Code {

	/*
	 * 
	 * put(_19624,_19634):-current_output(_19626,put(_19626,_19624,_19634)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_put_2 : public Code {

	/*
	 * 
	 * put(_19662,_19664,_19674):-is(_19666,_19664,put_code(_19662,_19666,_19674)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tab_1 : public Code {

	/*
	 * 
	 * tab(_19706,_19716):-current_output(_19708,tab(_19708,_19706,_19716)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_skip_1 : public Code {

	/*
	 * 
	 * skip(_19744,_19754):-current_input(_19746,skip(_19746,_19744,_19754)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get_byte_1 : public Code {

	/*
	 * 
	 * get_byte(_19840,_19850):-current_input(_19842,get_byte(_19842,_19840,_19850))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_peek_byte_1 : public Code {

	/*
	 * 
	 * peek_byte(_19878,_19888):-current_input(_19880,peek_byte(_19880,_19878,_19888
	 * )).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_put_byte_1 : public Code {

	/*
	 * 
	 * put_byte(_19916,_19926):-current_output(_19918,put_byte(_19918,_19916,_19926)
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_1 : public Code {

	/*
	 * 
	 * read(_20114,_20124):-current_input(_20116,read(_20116,_20114,_20124)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_2 : public Code {

	/*
	 * 
	 * read(_20152,_20154,_20166):-read_tokens(_20152,_20156,_20158,parse_tokens(
	 * _20154,_20156,cut(1,_20166))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_with_variables_2 : public Code {

	/*
	 * 
	 * read_with_variables(_20206,_20208,_20218):-current_input(_20210,
	 * read_with_variables(_20210,_20206,_20208,_20218)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_with_variables_3 : public Code {

	/*
	 * 
	 * read_with_variables(_20250,_20252,_20254,_20264):-read_tokens(_20250,_20256,
	 * _20254,parse_tokens(_20252,_20256,cut(1,_20264))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_line_1 : public Code {

	/*
	 * 
	 * read_line(_20306,_20316):-current_input(_20308,read_line(_20308,_20306,_20316
	 * )).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_token_2 : public Code {

	/*
	 * 
	 * read_token(_20344,_20346,_20364):-'$read_token0'(_20344,_20348,_20350,'
	 * $read_token1'([_20348],_20350,_20346,_20364)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_token1_3 : public Code {

	/*
	 * 
	 * '$read_token1'([-2],_20408,error(_20408),_20416):-cut(1,_20416).
	 * '$read_token1'("I",_20448,number(_20448),_20456):-cut(1,_20456).
	 * '$read_token1'("L",_20488,number(_20488),_20496):-cut(1,_20496).
	 * '$read_token1'("D",_20528,number(_20528),_20536):-cut(1,_20536).
	 * '$read_token1'("A",_20568,atom(_20568),_20576):-cut(1,_20576).
	 * '$read_token1'("V",_20608,var(_20608),_20616):-cut(1,_20616).
	 * '$read_token1'("S",_20648,string(_20648),_20656):-cut(1,_20656).
	 * '$read_token1'(_20680,_20682,_20682,_20690):-cut(1,_20690).
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
};

class pred_read_tokens_3 : public Code {

	/*
	 * 
	 * read_tokens(_20714,_20716,_20718,_20726):-'$read_tokens'(_20714,_20716,_20718
	 * ,[],cut(1,_20726)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_tokens_4 : public Code {

	/*
	 * 
	 * '$read_tokens'(_20762,_20764,_20766,_20768,_20778):-read_token(_20762,_20770,
	 * '$read_tokens1'(_20762,_20770,_20764,_20766,_20768,_20778)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_tokens1_5 : public Code {

	/*
	 * 
	 * '$read_tokens1'(_20824,error(_20822),[],_20826,_20828,_20836):-cut(1,write(
	 * user_error,'{SYNTAX ERROR}',nl(user_error,write(user_error,'**
	 * ',write(user_error,_20822,write(user_error,'
	 * **',nl(user_error,flush_output(user_error,'$read_tokens_until_fullstop'(
	 * _20824,fail(_20836)))))))))).
	 * '$read_tokens1'(_20936,end_of_file,[end_of_file,'.'],[],_20938,_20946):-cut(1
	 * ,_20946). '$read_tokens1'(_20980,'.',['.'],[],_20982,_20990):-cut(1,_20990).
	 * '$read_tokens1'(_21046,var('_'),[var('_',_21026)|_21032],['_'=_21026|_21044],
	 * _21048,_21068):-cut(1,'$read_tokens'(_21046,_21032,_21044,['_'=_21026|_21048]
	 * ,_21068)).
	 * '$read_tokens1'(_21124,var(_21110),[var(_21110,_21116)|_21122],_21126,_21128,
	 * _21142):-'$mem_pair'(_21110=_21116,_21128,cut(1,'$read_tokens'(_21124,_21122,
	 * _21126,_21128,_21142))).
	 * '$read_tokens1'(_21218,var(_21192),[var(_21192,_21198)|_21204],[_21192=_21198
	 * |_21216],_21220,_21240):-cut(1,'$read_tokens'(_21218,_21204,_21216,[_21192=
	 * _21198|_21220],_21240)).
	 * '$read_tokens1'(_21286,_21282,[_21282|_21284],_21288,_21290,_21298):-'
	 * $read_tokens'(_21286,_21284,_21288,_21290,_21298).
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
};

class pred_$mem_pair_2 : public Code {

	/*
	 * 
	 * '$mem_pair'(_21334=_21336,[_21340=_21342|_21348],_21356):-termequal(_21334,
	 * _21340,cut(1,unify(_21342,_21336,_21356))).
	 * '$mem_pair'(_21400,[_21396|_21398],_21408):-'$mem_pair'(_21400,_21398,_21408)
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_tokens_until_fullstop_1 : public Code {

	/*
	 * 
	 * '$read_tokens_until_fullstop'(_21432,_21442):-read_token(_21432,_21434,'
	 * $read_tokens_until_fullstop'(_21432,_21434,_21442)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_tokens_until_fullstop_2 : public Code {

	/*
	 * 
	 * '$read_tokens_until_fullstop'(_21472,end_of_file,_21480):-cut(1,_21480).
	 * '$read_tokens_until_fullstop'(_21502,'.',_21510):-cut(1,_21510).
	 * '$read_tokens_until_fullstop'(_21532,_21534,_21544):-read_token(_21532,_21536
	 * ,'$read_tokens_until_fullstop'(_21532,_21536,_21544)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_parse_tokens_2 : public Code {

	/*
	 * 
	 * parse_tokens(_21576,_21578,_21604):-retractall('$tokens'(_21582),assertz('
	 * $tokens'(_21578),'$parse_tokens'(_21576,1201,_21578,['.'],retract('$tokens'(
	 * _21578),cut(1,_21604))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_dcg_arrow_2 : public Code {

	/*
	 * 
	 * -->('$parse_tokens'(_21658,_21660),('$parse_tokens_skip_spaces','
	 * $parse_tokens1'(_21660,_21666,_21668),!,'$parse_tokens_skip_spaces','
	 * $parse_tokens2'(_21660,_21666,_21668,_21658,_21680),!),_21720):-call(_21720).
	 * -->('$parse_tokens1'(_21738,_21740,_21742),('$parse_tokens_peep_next'(_21746)
	 * ,{'$parse_tokens_is_starter'(_21746)},!,'$parse_tokens_before_op'(_21738,
	 * _21740,_21742)),_21790):-call(_21790).
	 * -->('$parse_tokens1'(_21808,_21810,_21812),('$parse_tokens_peep_next'(_21816)
	 * ,'$parse_tokens_error'([_21816,cannot,start,an,expression])),_21866):-call(
	 * _21866). -->('$parse_tokens2'(_21884,_21886,_21888,_21886,_21888),('
	 * $parse_tokens_peep_next'(_21896),{'$parse_tokens_is_terminator'(_21896)},{
	 * _21888=<_21884},!),_21942):-call(_21942).
	 * -->('$parse_tokens2'(_21960,_21962,_21964,_21966,_21968),('
	 * $parse_tokens_peep_next'(_21972),{'$parse_tokens_is_post_in_op'(_21972)},!,'
	 * $parse_tokens_post_in_ops'(_21960,_21962,_21964,_21966,_21968)),_22020):-call
	 * (_22020).
	 * -->('$parse_tokens2'(_22038,_22040,_22042,_22044,_22046),'$parse_tokens_error
	 * '([operator,expected,after,expression]),_22084):-call(_22084).
	 * -->('$parse_tokens_before_op'(_22102,_22104,_22106),(['
	 * '],!,'$parse_tokens_before_op'(_22102,_22104,_22106)),_22142):-call(_22142).
	 * -->('$parse_tokens_before_op'(_22160,end_of_file,0),([end_of_file],!),_22186)
	 * :-call(_22186).
	 * -->('$parse_tokens_before_op'(_22204,_22206,0),([number(_22206)],!),_22234):-
	 * call(_22234).
	 * -->('$parse_tokens_before_op'(_22252,_22254,0),([atom(-)],[number(_22270)],!,
	 * {_22254 is -_22270}),_22318):-call(_22318).
	 * -->('$parse_tokens_before_op'(_22336,_22338,0),([var(_22344,_22338)],!),
	 * _22368):-call(_22368).
	 * -->('$parse_tokens_before_op'(_22386,_22388,0),([string(_22388)],!),_22416):-
	 * call(_22416).
	 * -->('$parse_tokens_before_op'(_22434,_22436,0),(['('],!,'$parse_tokens'(
	 * _22436,1201),'$parse_tokens_expect'(')')),_22482):-call(_22482).
	 * -->('$parse_tokens_before_op'(_22500,_22502,0),(['{'],!,'
	 * $parse_tokens_skip_spaces','$parse_tokens_brace'(_22502)),_22542):-call(
	 * _22542). -->('$parse_tokens_before_op'(_22560,_22562,0),(['['],!,'
	 * $parse_tokens_skip_spaces','$parse_tokens_list'(_22562)),_22602):-call(_22602
	 * ). -->('$parse_tokens_before_op'(_22620,_22622,0),([atom(_22628)],['('],!,'
	 * $parse_tokens_skip_spaces','$parse_tokens_args'(_22644),{_22622=..[_22628|
	 * _22644]}),_22700):-call(_22700).
	 * -->('$parse_tokens_before_op'(_22718,_22720,_22722),([atom(_22726)],{
	 * current_op(_22722,fx,_22726)},{_22722=<_22718},'$parse_tokens_skip_spaces','
	 * $parse_tokens_peep_next'(_22758),{'$parse_tokens_is_starter'(_22758)},{\+'
	 * $parse_tokens_is_post_in_op'(_22758)},!,{_22788 is
	 * _22722-1},'$parse_tokens'(_22798,_22788),{functor(_22720,_22726,1)},{arg(1,
	 * _22720,_22798)}),_22900):-call(_22900).
	 * -->('$parse_tokens_before_op'(_22918,_22920,_22922),([atom(_22926)],{
	 * current_op(_22922,fy,_22926)},{_22922=<_22918},'$parse_tokens_skip_spaces','
	 * $parse_tokens_peep_next'(_22958),{'$parse_tokens_is_starter'(_22958)},{\+'
	 * $parse_tokens_is_post_in_op'(_22958)},!,'$parse_tokens'(_22982,_22922),{
	 * functor(_22920,_22926,1)},{arg(1,_22920,_22982)}),_23078):-call(_23078).
	 * -->('$parse_tokens_before_op'(_23096,_23098,0),[atom(_23098)],_23120):-call(
	 * _23120). -->('$parse_tokens_brace'({}),(['}'],!),_23160):-call(_23160).
	 * -->('$parse_tokens_brace'(_23178),('$parse_tokens'(_23182,1201),'
	 * $parse_tokens_expect'('}'),{_23178={_23182}}),_23224):-call(_23224).
	 * -->('$parse_tokens_list'('[]'),([']'],!),_23264):-call(_23264).
	 * -->('$parse_tokens_list'([_23282|_23284]),('$parse_tokens'(_23282,999),'
	 * $parse_tokens_skip_spaces','$parse_tokens_list_rest'(_23284)),_23320):-call(
	 * _23320).
	 * -->('$parse_tokens_list_rest'(_23338),(['|'],!,'$parse_tokens'(_23338,999),'
	 * $parse_tokens_expect'(']')),_23382):-call(_23382).
	 * -->('$parse_tokens_list_rest'([_23400|_23402]),([','],!,'$parse_tokens'(
	 * _23400,999),'$parse_tokens_skip_spaces','$parse_tokens_list_rest'(_23402)),
	 * _23456):-call(_23456).
	 * -->('$parse_tokens_list_rest'('[]'),'$parse_tokens_expect'(']'),_23488):-call
	 * (_23488). -->('$parse_tokens_args'('[]'),([')'],!),_23528):-call(_23528).
	 * -->('$parse_tokens_args'([_23546|_23548]),('$parse_tokens'(_23546,999),'
	 * $parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23548)),_23584):-call(
	 * _23584).
	 * -->('$parse_tokens_args_rest'([_23602|_23604]),([','],!,'$parse_tokens'(
	 * _23602,999),'$parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23604)),
	 * _23658):-call(_23658).
	 * -->('$parse_tokens_args_rest'('[]'),'$parse_tokens_expect'(')'),_23690):-call
	 * (_23690).
	 * -->('$parse_tokens_post_in_ops'(_23708,_23710,_23712,_23714,_23716),('
	 * $parse_tokens_skip_spaces',[_23720],'$parse_tokens_op'(_23720,_23708,_23710,
	 * _23712,_23734,_23736),'$parse_tokens_post_in_ops'(_23708,_23734,_23736,_23714
	 * ,_23716)),_23776):-call(_23776).
	 * -->('$parse_tokens_post_in_ops'(_23794,_23796,_23798,_23796,_23798),{_23798=<
	 * _23794},_23822):-call(_23822).
	 * -->('$parse_tokens_op'(',',_23842,_23844,_23846,_23848,_23850),(!,'
	 * $parse_tokens_op'(atom(','),_23842,_23844,_23846,_23848,_23850)),_23884):-
	 * call(_23884).
	 * -->('$parse_tokens_op'('|',_23904,_23906,_23908,_23910,_23912),(!,'
	 * $parse_tokens_op'(atom(;),_23904,_23906,_23908,_23910,_23912)),_23946):-call(
	 * _23946).
	 * -->('$parse_tokens_op'(atom(_23964),_23970,_23972,_23974,_23976,_23978),({
	 * current_op(_23978,xf,_23964)},{_23978=<_23970},{_23974<_23978},{functor(
	 * _23976,_23964,1)},{arg(1,_23976,_23972)}),_24068):-call(_24068).
	 * -->('$parse_tokens_op'(atom(_24086),_24092,_24094,_24096,_24098,_24100),({
	 * current_op(_24100,yf,_24086)},{_24100=<_24092},{_24096=<_24100},{functor(
	 * _24098,_24086,1)},{arg(1,_24098,_24094)}),_24190):-call(_24190).
	 * -->('$parse_tokens_op'(atom(_24208),_24214,_24216,_24218,_24220,_24222),({
	 * current_op(_24222,xfx,_24208)},{_24222=<_24214},{_24218<_24222},{_24264 is
	 * _24222-1},'$parse_tokens'(_24274,_24264),!,{functor(_24220,_24208,2)},{arg(1,
	 * _24220,_24216)},{arg(2,_24220,_24274)}),_24370):-call(_24370).
	 * -->('$parse_tokens_op'(atom(_24388),_24394,_24396,_24398,_24400,_24402),({
	 * current_op(_24402,xfy,_24388)},{_24402=<_24394},{_24398<_24402},{_24438 is
	 * _24402},'$parse_tokens'(_24448,_24438),!,{functor(_24400,_24388,2)},{arg(1,
	 * _24400,_24396)},{arg(2,_24400,_24448)}),_24544):-call(_24544).
	 * -->('$parse_tokens_op'(atom(_24562),_24568,_24570,_24572,_24574,_24576),({
	 * current_op(_24576,yfx,_24562)},{_24576=<_24568},{_24572=<_24576},{_24618 is
	 * _24576-1},'$parse_tokens'(_24628,_24618),!,{functor(_24574,_24562,2)},{arg(1,
	 * _24574,_24570)},{arg(2,_24574,_24628)}),_24724):-call(_24724).
	 * -->('$parse_tokens_expect'(_25236),('$parse_tokens_skip_spaces',[_25236],!),
	 * _25264):-call(_25264).
	 * -->('$parse_tokens_expect'(_25282),'$parse_tokens_error'([_25282,expected]),
	 * _25308):-call(_25308). -->('$parse_tokens_skip_spaces',(['
	 * '],!,'$parse_tokens_skip_spaces'),_25350):-call(_25350).
	 * -->('$parse_tokens_skip_spaces',[],_25374):-call(_25374).
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
};

class pred_$parse_tokens_is_starter_1 : public Code {

	/*
	 * 
	 * '$parse_tokens_is_starter'(end_of_file,_24748):-call(_24748).
	 * '$parse_tokens_is_starter'('(',_24770):-call(_24770).
	 * '$parse_tokens_is_starter'('[',_24792):-call(_24792).
	 * '$parse_tokens_is_starter'('{',_24814):-call(_24814).
	 * '$parse_tokens_is_starter'(number(_24830),_24840):-call(_24840).
	 * '$parse_tokens_is_starter'(atom(_24856),_24866):-call(_24866).
	 * '$parse_tokens_is_starter'(var(_24882,_24884),_24894):-call(_24894).
	 * '$parse_tokens_is_starter'(string(_24910),_24920):-call(_24920).
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
};

class pred_$parse_tokens_is_terminator_1 : public Code {

	/*
	 * 
	 * '$parse_tokens_is_terminator'(')',_24942):-call(_24942).
	 * '$parse_tokens_is_terminator'(']',_24964):-call(_24964).
	 * '$parse_tokens_is_terminator'('}',_24986):-call(_24986).
	 * '$parse_tokens_is_terminator'('.',_25008):-call(_25008).
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

class pred_$parse_tokens_is_post_in_op_1 : public Code {

	/*
	 * 
	 * '$parse_tokens_is_post_in_op'(',',_25028):-cut(1,_25028).
	 * '$parse_tokens_is_post_in_op'('|',_25054):-cut(1,_25054).
	 * '$parse_tokens_is_post_in_op'(atom(_25076),_25088):-current_op(_25078,_25080,
	 * _25076,'$parse_tokens_post_in_type'(_25080,cut(1,_25088))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$parse_tokens_post_in_type_1 : public Code {

	/*
	 * 
	 * '$parse_tokens_post_in_type'(xfx,_25132):-call(_25132).
	 * '$parse_tokens_post_in_type'(xfy,_25154):-call(_25154).
	 * '$parse_tokens_post_in_type'(yfx,_25176):-call(_25176).
	 * '$parse_tokens_post_in_type'(xf,_25198):-call(_25198).
	 * '$parse_tokens_post_in_type'(yf,_25220):-call(_25220).
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

class pred_$parse_tokens_peep_next_3 : public Code {

	/*
	 * 
	 * '$parse_tokens_peep_next'(_25390,_25392,_25392,_25406):-unify([_25390|_25398]
	 * ,_25392,_25406).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$parse_tokens_error_3 : public Code {

	/*
	 * 
	 * '$parse_tokens_error'(_25432,_25434,_25436,_25450):-write(user_error,'{SYNTAX
	 * ERROR}',nl(user_error,write(user_error,'**
	 * ','$parse_tokens_write_message'(user_error,_25432,write(user_error,'
	 * **',nl(user_error,'$parse_tokens_error1'([],_25434,clause('$tokens'(_25440),
	 * _25442,'$parse_tokens_error1'(_25440,_25434,flush_output(user_error,fail(
	 * _25450))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$parse_tokens_error1_2 : public Code {

	/*
	 * 
	 * '$parse_tokens_error1'([],_25546,_25554):-cut(1,_25554).
	 * '$parse_tokens_error1'(_25576,_25578,_25586):-termequal(_25576,_25578,cut(1,
	 * nl(user_error,write(user_error,'** here
	 * **',nl(user_error,'$parse_tokens_error1'(_25576,[],nl(user_error,_25586))))))
	 * ).
	 * '$parse_tokens_error1'([_25652|_25654],_25656,_25664):-'$parse_tokens_error2'
	 * (_25652,'$parse_tokens_error1'(_25654,_25656,_25664)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$parse_tokens_error2_1 : public Code {

	/*
	 * 
	 * '$parse_tokens_error2'(number(_25696),_25704):-cut(1,write(_25696,_25704)).
	 * '$parse_tokens_error2'(atom(_25732),_25740):-cut(1,writeq(_25732,_25740)).
	 * '$parse_tokens_error2'(var(_25768,_25770),_25778):-cut(1,write(_25768,_25778)
	 * ). '$parse_tokens_error2'(string(_25806),_25814):-cut(1,write(user_error,'
	 * "','$parse_tokens_write_string'(user_error,_25806,write(user_error,'"',_25814
	 * )))). '$parse_tokens_error2'(_25858,_25866):-write(user_error,_25858,_25866).
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

class pred_$parse_tokens_write_string_2 : public Code {

	/*
	 * 
	 * '$parse_tokens_write_string'(_25888,[],_25898):-call(_25898).
	 * '$parse_tokens_write_string'(_25920,[_25916|_25918],_25940):-unify("\"",[
	 * _25916],cut(1,put_code(_25920,_25916,put_code(_25920,_25916,'
	 * $parse_tokens_write_string'(_25920,_25918,_25940))))).
	 * '$parse_tokens_write_string'(_26000,[_25996|_25998],_26008):-put_code(_26000,
	 * _25996,'$parse_tokens_write_string'(_26000,_25998,_26008)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$parse_tokens_write_message_2 : public Code {

	/*
	 * 
	 * '$parse_tokens_write_message'(_26040,[],_26050):-call(_26050).
	 * '$parse_tokens_write_message'(_26072,[_26068|_26070],_26080):-write(_26072,
	 * _26068,write(_26072,'
	 * ','$parse_tokens_write_message'(_26072,_26070,_26080))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_1 : public Code {

	/*
	 * 
	 * write(_26304,_26324):-current_output(_26306,write_term(_26306,_26304,[
	 * numbervars(true)],_26324)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_2 : public Code {

	/*
	 * 
	 * write(_26354,_26356,_26374):-write_term(_26354,_26356,[numbervars(true)],
	 * _26374).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_writeq_1 : public Code {

	/*
	 * 
	 * writeq(_26400,_26430):-current_output(_26402,write_term(_26402,_26400,[quoted
	 * (true),numbervars(true)],_26430)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_writeq_2 : public Code {

	/*
	 * 
	 * writeq(_26460,_26462,_26490):-write_term(_26460,_26462,[quoted(true),
	 * numbervars(true)],_26490).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_canonical_1 : public Code {

	/*
	 * 
	 * write_canonical(_26516,_26546):-current_output(_26518,write_term(_26518,
	 * _26516,[quoted(true),ignore_ops(true)],_26546)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_canonical_2 : public Code {

	/*
	 * 
	 * write_canonical(_26576,_26578,_26606):-write_term(_26576,_26578,[quoted(true)
	 * ,ignore_ops(true)],_26606).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_term_2 : public Code {

	/*
	 * 
	 * write_term(_26632,_26634,_26644):-current_output(_26636,write_term(_26636,
	 * _26632,_26634,_26644)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_term_3 : public Code {

	/*
	 * 
	 * write_term(_26676,_26678,_26680,_26688):-'$write_term'(_26676,_26678,_26680,
	 * fail(_26688)). write_term(_26720,_26722,_26724,_26734):-call(_26734).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_term_3 : public Code {

	/*
	 * 
	 * '$write_term'(_26752,_26754,_26756,_26766):-'$write_term0'(_26754,1200,punct,
	 * _26758,_26756,_26752,cut(1,_26766)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_term0_6 : public Code {

	/*
	 * 
	 * '$write_term0'(_26806,_26808,_26810,alpha,_26812,_26814,_26822):-var(_26806,
	 * cut(1,'$write_space_if_needed'(_26810,alpha,_26814,'$fast_write'(_26814,
	 * _26806,_26822)))).
	 * '$write_term0'(_26876,_26878,_26880,alpha,_26882,_26884,_26892):-java(_26876,
	 * cut(1,'$write_space_if_needed'(_26880,alpha,_26884,'$fast_write'(_26884,
	 * _26876,_26892)))).
	 * '$write_term0'(_26946,_26948,_26950,alpha,_26952,_26954,_26970):-unify('$VAR'
	 * (_26958),_26946,integer(_26958,smallerorequal(0,_26958,'$builtin_member'(
	 * numbervars(true),_26952,cut(1,'$write_space_if_needed'(_26950,alpha,_26954,'
	 * $write_VAR'(_26958,_26954,_26970))))))).
	 * '$write_term0'(_27048,_27050,_27052,alpha,_27054,_27056,_27064):-number(
	 * _27048,smallerthan(_27048,0,cut(1,'$write_space_if_needed'(_27052,symbol,
	 * _27056,'$fast_write'(_27056,_27048,_27064))))).
	 * '$write_term0'(_27126,_27128,_27130,alpha,_27132,_27134,_27142):-number(
	 * _27126,cut(1,'$write_space_if_needed'(_27130,alpha,_27134,'$fast_write'(
	 * _27134,_27126,_27142)))).
	 * '$write_term0'(_27196,_27198,_27200,_27202,_27204,_27206,_27214):-atom(_27196
	 * ,cut(1,'$write_atom'(_27196,_27200,_27202,_27204,_27206,_27214))).
	 * '$write_term0'(_27264,_27266,_27268,_27270,_27272,_27274,_27298):-not('
	 * $builtin_member'(ignore_ops(true),_27272),'$write_is_operator'(_27264,_27286,
	 * _27288,_27290,cut(1,'$write_term_op'(_27286,_27290,_27288,_27266,_27268,
	 * _27270,_27272,_27274,_27298)))).
	 * '$write_term0'(_27366,_27368,_27370,punct,_27372,_27374,_27400):-unify([
	 * _27378|_27380],_27366,not('$builtin_member'(ignore_ops(true),_27372),cut(1,'
	 * $write_space_if_needed'(_27370,punct,_27374,put_char(_27374,'[','
	 * $write_term_list_args'(_27366,punct,_27392,_27372,_27374,put_char(_27374,']',
	 * _27400))))))).
	 * '$write_term0'(_27484,_27486,_27488,_27490,_27492,_27494,_27518):-unify({
	 * _27498},_27484,not('$builtin_member'(ignore_ops(true),_27492),cut(1,'
	 * $write_space_if_needed'(_27488,punct,_27494,put_char(_27494,'{','$write_term0
	 * '(_27498,1200,punct,_27510,_27492,_27494,put_char(_27494,'}',_27518))))))).
	 * '$write_term0'(_27604,_27606,_27608,punct,_27610,_27612,_27630):-
	 * =..(_27604,[_27616|_27618],'$write_atom'(_27616,_27608,_27620,_27610,_27612,
	 * put_char(_27612,'(','$write_term_args'(_27618,punct,_27622,_27610,_27612,
	 * put_char(_27612,')',_27630))))).
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
};

class pred_$write_space_if_needed_3 : public Code {

	/*
	 * 
	 * '$write_space_if_needed'(punct,_27706,_27708,_27716):-cut(1,_27716).
	 * '$write_space_if_needed'(_27740,_27740,_27742,_27750):-cut(1,put_char(_27742,
	 * ' ',_27750)).
	 * '$write_space_if_needed'(other,alpha,_27782,_27790):-cut(1,put_char(_27782,'
	 * ',_27790)).
	 * '$write_space_if_needed'(_27822,_27824,_27826,_27836):-call(_27836).
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

class pred_$write_VAR_2 : public Code {

	/*
	 * 
	 * '$write_VAR'(_27854,_27856,_27884):-smallerthan(_27854,26,cut(1,is(_27876,
	 * _27854 mod 26+"A",put_code(_27856,_27876,_27884)))).
	 * '$write_VAR'(_27930,_27932,_27968):-is(_27952,_27930 mod
	 * 26+"A",put_code(_27932,_27952,is(_27960,_27930//26,'$fast_write'(_27932,
	 * _27960,_27968)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_atom_5 : public Code {

	/*
	 * 
	 * '$write_atom'(_28016,_28018,_28020,_28022,_28024,_28036):-'$builtin_member'(
	 * quoted(true),_28022,cut(1,'$atom_type'(_28016,_28020,'$write_space_if_needed'
	 * (_28018,_28020,_28024,'$fast_writeq'(_28024,_28016,_28036))))).
	 * '$write_atom'(_28098,_28100,_28102,_28104,_28106,_28114):-'$atom_type'(_28098
	 * ,_28102,'$write_space_if_needed'(_28100,_28102,_28106,'$fast_write'(_28106,
	 * _28098,_28114))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$atom_type_2 : public Code {

	/*
	 * 
	 * '$atom_type'(_28162,alpha,_28170):-'$atom_type0'(_28162,0,cut(1,_28170)).
	 * '$atom_type'(_28200,symbol,_28208):-'$atom_type0'(_28200,1,cut(1,_28208)).
	 * '$atom_type'(_28238,punct,_28246):-'$atom_type0'(_28238,2,cut(1,_28246)).
	 * '$atom_type'(_28276,other,_28284):-'$atom_type0'(_28276,3,cut(1,_28284)).
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

class pred_$write_is_operator_4 : public Code {

	/*
	 * 
	 * '$write_is_operator'(_28314,_28316,_28318,_28320,_28338):-functor(_28314,
	 * _28316,_28322,'$write_op_type'(_28322,_28320,current_op(_28324,_28320,_28316,
	 * =..(_28314,[_28328|_28318],cut(1,_28338))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_op_type_2 : public Code {

	/*
	 * 
	 * '$write_op_type'(1,fx,_28408):-call(_28408).
	 * '$write_op_type'(1,fy,_28432):-call(_28432).
	 * '$write_op_type'(1,xf,_28456):-call(_28456).
	 * '$write_op_type'(1,yf,_28480):-call(_28480).
	 * '$write_op_type'(2,xfx,_28504):-call(_28504).
	 * '$write_op_type'(2,xfy,_28528):-call(_28528).
	 * '$write_op_type'(2,yfx,_28552):-call(_28552).
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
};

class pred_$write_term_op_8 : public Code {

	/*
	 * 
	 * '$write_term_op'(_28568,_28570,_28572,_28574,_28576,punct,_28578,_28580,
	 * _28592):-current_op(_28582,_28570,_28568,smallerthan(_28574,_28582,cut(1,'
	 * $write_space_if_needed'(_28576,punct,_28580,put_char(_28580,'(','
	 * $write_term_op1'(_28568,_28570,_28572,_28582,punct,_28584,_28578,_28580,
	 * put_char(_28580,')',_28592))))))).
	 * '$write_term_op'(_28690,_28692,_28694,_28696,_28698,_28700,_28702,_28704,
	 * _28714):-current_op(_28706,_28692,_28690,'$write_term_op1'(_28690,_28692,
	 * _28694,_28706,_28698,_28700,_28702,_28704,_28714)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_term_op1_8 : public Code {

	/*
	 * 
	 * '$write_term_op1'(_28778,fx,[_28774],_28780,_28782,_28784,_28786,_28788,
	 * _28806):-cut(1,'$write_atom'(_28778,_28782,_28790,_28786,_28788,is(_28798,
	 * _28780-1,'$write_term0'(_28774,_28798,_28790,_28784,_28786,_28788,_28806)))).
	 * '$write_term_op1'(_28884,fy,[_28880],_28886,_28888,_28890,_28892,_28894,
	 * _28906):-cut(1,'$write_atom'(_28884,_28888,_28896,_28892,_28894,is(_28898,
	 * _28886,'$write_term0'(_28880,_28898,_28896,_28890,_28892,_28894,_28906)))).
	 * '$write_term_op1'(_28984,xf,[_28980],_28986,_28988,_28990,_28992,_28994,
	 * _29012):-cut(1,is(_29002,_28986-1,'$write_term0'(_28980,_29002,_28988,_29004,
	 * _28992,_28994,'$write_atom'(_28984,_29004,_28990,_28992,_28994,_29012)))).
	 * '$write_term_op1'(_29090,yf,[_29086],_29092,_29094,_29096,_29098,_29100,
	 * _29112):-cut(1,is(_29102,_29092,'$write_term0'(_29086,_29102,_29094,_29104,
	 * _29098,_29100,'$write_atom'(_29090,_29104,_29096,_29098,_29100,_29112)))).
	 * '$write_term_op1'(_29196,xfx,[_29186,_29192],_29198,_29200,_29202,_29204,
	 * _29206,_29234):-cut(1,is(_29214,_29198-1,is(_29222,_29198-1,'$write_term0'(
	 * _29186,_29214,_29200,_29224,_29204,_29206,'$write_term_infix_op'(_29196,
	 * _29224,_29226,_29204,_29206,'$write_term0'(_29192,_29222,_29226,_29202,_29204
	 * ,_29206,_29234)))))).
	 * '$write_term_op1'(_29342,xfy,[_29332,_29338],_29344,_29346,_29348,_29350,
	 * _29352,_29374):-cut(1,is(_29360,_29344-1,is(_29362,_29344,'$write_term0'(
	 * _29332,_29360,_29346,_29364,_29350,_29352,'$write_term_infix_op'(_29342,
	 * _29364,_29366,_29350,_29352,'$write_term0'(_29338,_29362,_29366,_29348,_29350
	 * ,_29352,_29374)))))).
	 * '$write_term_op1'(_29482,yfx,[_29472,_29478],_29484,_29486,_29488,_29490,
	 * _29492,_29514):-cut(1,is(_29494,_29484,is(_29502,_29484-1,'$write_term0'(
	 * _29472,_29494,_29486,_29504,_29490,_29492,'$write_term_infix_op'(_29482,
	 * _29504,_29506,_29490,_29492,'$write_term0'(_29478,_29502,_29506,_29488,_29490
	 * ,_29492,_29514)))))).
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
};

class pred_$write_term_infix_op_5 : public Code {

	/*
	 * 
	 * '$write_term_infix_op'(',',_29610,punct,_29612,_29614,_29622):-cut(1,'
	 * $write_space_if_needed'(_29610,punct,_29614,put_char(_29614,',',_29622))).
	 * '$write_term_infix_op'(_29668,_29670,_29672,_29674,_29676,_29684):-'
	 * $write_atom'(_29668,_29670,_29672,_29674,_29676,_29684).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_term_list_args_5 : public Code {

	/*
	 * 
	 * '$write_term_list_args'([_29722|_29724],_29726,_29728,_29730,_29732,_29748):-
	 * nonvar(_29724,unify([_29736|_29738],_29724,cut(1,'$write_term0'(_29722,999,
	 * _29726,_29740,_29730,_29732,'$write_space_if_needed'(_29740,punct,_29732,
	 * put_char(_29732,',','$write_term_list_args'(_29724,punct,_29728,_29730,_29732
	 * ,_29748))))))).
	 * '$write_term_list_args'([_29840|_29842],_29844,_29846,_29848,_29850,_29858):-
	 * nonvar(_29842,unify([],_29842,cut(1,'$write_term0'(_29840,999,_29844,_29846,
	 * _29848,_29850,_29858)))).
	 * '$write_term_list_args'([_29918|_29920],_29922,_29924,_29926,_29928,_29938):-
	 * '$write_term0'(_29918,999,_29922,_29930,_29926,_29928,'$write_space_if_needed
	 * '(_29930,punct,_29928,put_char(_29928,'|','$write_term0'(_29920,999,punct,
	 * _29924,_29926,_29928,_29938)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_term_args_5 : public Code {

	/*
	 * 
	 * '$write_term_args'([],_30010,_30010,_30012,_30014,_30022):-cut(1,_30022).
	 * '$write_term_args'([_30052],_30056,_30058,_30060,_30062,_30070):-cut(1,'
	 * $write_term0'(_30052,999,_30056,_30058,_30060,_30062,_30070)).
	 * '$write_term_args'([_30116|_30118],_30120,_30122,_30124,_30126,_30136):-cut(1
	 * ,'$write_term0'(_30116,999,_30120,_30128,_30124,_30126,'
	 * $write_space_if_needed'(_30128,punct,_30126,put_char(_30126,',','
	 * $write_term_args'(_30118,punct,_30122,_30124,_30126,_30136))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_op_3 : public Code {

	/*
	 * 
	 * op(_30314,_30316,_30318,_30326):-integer(_30314,smallerorequal(0,_30314,
	 * smallerorequal(_30314,1200,cut(1,'$op1'(_30314,_30316,_30318,_30326))))).
	 * op(_30382,_30384,_30386,_30414):-illarg(domain(integer,0-1200),op(_30382,
	 * _30384,_30386),1,_30414).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$op1_3 : public Code {

	/*
	 * 
	 * '$op1'(_30442,_30444,_30446,_30456):-nonvar(_30444,'$op_specifier'(_30444,
	 * _30448,cut(1,'$op2'(_30442,_30444,_30446,_30456)))).
	 * '$op1'(_30504,_30506,_30508,_30538):-findall(_30512,'$op_specifier'(_30512,
	 * _30514),_30516,illarg(domain(term,_30516),op(_30504,_30506,_30508),2,_30538))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$op2_3 : public Code {

	/*
	 * 
	 * '$op2'(_30576,_30578,_30580,_30594):-atom(_30580,cut(1,'$add_operators'([
	 * _30580],_30576,_30578,_30594))).
	 * '$op2'(_30634,_30636,_30638,_30648):-'$op_atom_list'(_30638,_30640,cut(1,'
	 * $add_operators'(_30640,_30634,_30636,_30648))).
	 * '$op2'(_30690,_30692,_30694,_30718):-illarg(type(list(atom)),op(_30690,_30692
	 * ,_30694),3,_30718).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$add_operators_3 : public Code {

	/*
	 * 
	 * '$add_operators'([],_30746,_30748,_30756):-cut(1,_30756).
	 * '$add_operators'([_30782|_30784],_30786,_30788,_30796):-'$add_op'(_30782,
	 * _30786,_30788,'$add_operators'(_30784,_30786,_30788,_30796)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$add_op_3 : public Code {

	/*
	 * 
	 * '$add_op'(',',_30834,_30836,_30862):-cut(1,illarg(permission(modify,operator,
	 * ',',_30846),op(_30834,_30836,','),3,_30862)).
	 * '$add_op'(_30896,_30898,_30900,_30930):-clause('$current_operator'(_30904,
	 * _30906,_30896),_30910,'$op_specifier'(_30900,_30912,'$op_specifier'(_30906,
	 * _30914,unify(_30914,_30912,retract('$current_operator'(_30918,_30906,_30896),
	 * fail(_30930)))))). '$add_op'(_30990,0,_30992,_31000):-cut(1,_31000).
	 * '$add_op'(_31024,_31026,_31028,_31044):-assertz('$current_operator'(_31026,
	 * _31028,_31024),_31044).
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

class pred_$op_specifier_2 : public Code {

	/*
	 * 
	 * '$op_specifier'(fx,prefix,_31076):-call(_31076).
	 * '$op_specifier'(fy,prefix,_31100):-call(_31100).
	 * '$op_specifier'(xfx,infix,_31124):-call(_31124).
	 * '$op_specifier'(xfy,infix,_31148):-call(_31148).
	 * '$op_specifier'(yfx,infix,_31172):-call(_31172).
	 * '$op_specifier'(xf,postfix,_31196):-call(_31196).
	 * '$op_specifier'(yf,postfix,_31220):-call(_31220).
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
};

class pred_$op_atom_list_2 : public Code {

	/*
	 * 
	 * '$op_atom_list'(_31236,_31238,_31246):-var(_31236,cut(1,fail(_31246))).
	 * '$op_atom_list'([],[],_31284):-cut(1,_31284).
	 * '$op_atom_list'([_31308|_31310],[_31308|_31316],_31324):-atom(_31308,cut(1,'
	 * $op_atom_list'(_31310,_31316,_31324))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_current_op_3 : public Code {

	/*
	 * 
	 * current_op(_31360,_31362,_31364,_31382):-clause('$current_operator'(_31360,
	 * _31362,_31364),_31374,_31382).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$current_operator_3 : public Code {

	/*
	 * 
	 * '$current_operator'(1200,xfx,:-,_31416):-call(_31416).
	 * '$current_operator'(1200,xfx,-->,_31442):-call(_31442).
	 * '$current_operator'(1200,fx,:-,_31468):-call(_31468).
	 * '$current_operator'(1200,fx,?-,_31494):-call(_31494).
	 * '$current_operator'(1150,fx,package,_31520):-call(_31520).
	 * '$current_operator'(1150,fx,import,_31546):-call(_31546).
	 * '$current_operator'(1150,fx,include,_31572):-call(_31572).
	 * '$current_operator'(1150,fx,include_resource,_31598):-call(_31598).
	 * '$current_operator'(1150,fx,constant,_31624):-call(_31624).
	 * '$current_operator'(1150,fx,public,_31650):-call(_31650).
	 * '$current_operator'(1150,fx,dynamic,_31676):-call(_31676).
	 * '$current_operator'(1150,fx,meta_predicate,_31702):-call(_31702).
	 * '$current_operator'(1150,fx,mode,_31728):-call(_31728).
	 * '$current_operator'(1150,fx,multifile,_31754):-call(_31754).
	 * '$current_operator'(1150,fx,block,_31780):-call(_31780).
	 * '$current_operator'(1150,fx,ifdef,_31806):-call(_31806).
	 * '$current_operator'(1150,fx,ifndef,_31832):-call(_31832).
	 * '$current_operator'(1150,fx,domain,_31858):-call(_31858).
	 * '$current_operator'(1150,fx,database,_31884):-call(_31884).
	 * '$current_operator'(1100,xfy,;,_31910):-call(_31910).
	 * '$current_operator'(1050,xfy,->,_31936):-call(_31936).
	 * '$current_operator'(1000,xfy,',',_31962):-call(_31962).
	 * '$current_operator'(900,fy,\+,_31988):-call(_31988).
	 * '$current_operator'(700,xfx,=,_32014):-call(_32014).
	 * '$current_operator'(700,xfx,\=,_32040):-call(_32040).
	 * '$current_operator'(700,xfx,==,_32066):-call(_32066).
	 * '$current_operator'(700,xfx,\==,_32092):-call(_32092).
	 * '$current_operator'(700,xfx,@<,_32118):-call(_32118).
	 * '$current_operator'(700,xfx,@>,_32144):-call(_32144).
	 * '$current_operator'(700,xfx,@=<,_32170):-call(_32170).
	 * '$current_operator'(700,xfx,@>=,_32196):-call(_32196).
	 * '$current_operator'(700,xfx,=..,_32222):-call(_32222).
	 * '$current_operator'(700,xfx,is,_32248):-call(_32248).
	 * '$current_operator'(700,xfx,=:=,_32274):-call(_32274).
	 * '$current_operator'(700,xfx,=\=,_32300):-call(_32300).
	 * '$current_operator'(700,xfx,<,_32326):-call(_32326).
	 * '$current_operator'(700,xfx,>,_32352):-call(_32352).
	 * '$current_operator'(700,xfx,=<,_32378):-call(_32378).
	 * '$current_operator'(700,xfx,>=,_32404):-call(_32404).
	 * '$current_operator'(550,xfy,:,_32430):-call(_32430).
	 * '$current_operator'(500,yfx,+,_32456):-call(_32456).
	 * '$current_operator'(500,yfx,-,_32482):-call(_32482).
	 * '$current_operator'(500,yfx,#,_32508):-call(_32508).
	 * '$current_operator'(500,yfx,/\,_32534):-call(_32534).
	 * '$current_operator'(500,yfx,\/,_32560):-call(_32560).
	 * '$current_operator'(500,fx,+,_32586):-call(_32586).
	 * '$current_operator'(400,yfx,*,_32612):-call(_32612).
	 * '$current_operator'(400,yfx,/,_32638):-call(_32638).
	 * '$current_operator'(400,yfx,//,_32664):-call(_32664).
	 * '$current_operator'(400,yfx,mod,_32690):-call(_32690).
	 * '$current_operator'(400,yfx,rem,_32716):-call(_32716).
	 * '$current_operator'(400,yfx,<<,_32742):-call(_32742).
	 * '$current_operator'(400,yfx,>>,_32768):-call(_32768).
	 * '$current_operator'(300,xfx,~,_32794):-call(_32794).
	 * '$current_operator'(200,xfx,**,_32820):-call(_32820).
	 * '$current_operator'(200,xfy,^,_32846):-call(_32846).
	 * '$current_operator'(200,fy,\,_32872):-call(_32872).
	 * '$current_operator'(200,fy,-,_32898):-call(_32898).
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
};

class pred_not_1 : public Code {

	/*
	 * 
	 * not(_33018,_33026):-call(_33018,cut(1,fail(_33026))).
	 * not(_33056,_33066):-call(_33066).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_repeat_0 : public Code {

	/*
	 * 
	 * repeat(_33088):-call(_33088). repeat(_33106):-repeat(_33106).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_once_1 : public Code {

	/*
	 * 
	 * once(_33122,_33130):-call(_33122,cut(1,_33130)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sub_atom_5 : public Code {

	/*
	 * 
	 * sub_atom(_33292,_33294,_33296,_33298,_33300,_33314):-atom_concat(_33302,
	 * _33304,_33292,atom_length(_33302,_33294,atom_concat(_33300,_33306,_33304,
	 * atom_length(_33300,_33296,atom_length(_33306,_33298,_33314))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_name_2 : public Code {

	/*
	 * 
	 * name(_33380,_33382,_33446):-nonvar(_33380,or((number(_33380)->number_codes(
	 * _33380,_33382)),(atomic(_33380)->atom_codes(_33380,_33382);illarg(type(atomic
	 * ),name(_33380,_33382),1)),_33446)).
	 * name(_33476,_33478,_33550):-var(_33476,or((number_codes(_33482,_33478)->
	 * _33476=_33482),(atom_codes(_33482,_33478)->_33476=_33482;illarg(type(list(
	 * char)),name(_33476,_33478),2)),_33550)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_regex_matches_3 : public Code {

	/*
	 * 
	 * regex_matches(_33580,[],_33582,_33590):-cut(1,fail(_33590)).
	 * regex_matches(_33618,_33620,_33622,_33636):-unify([_33626|_33628],_33620,cut(
	 * 1,regex_list(_33618,_33620,_33622,_33636))).
	 * regex_matches(_33678,_33680,_33682,_33692):-atom(_33680,regex_compile(_33678,
	 * _33684,regex_match(_33684,_33680,_33682,_33692))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_regex_matches_2 : public Code {

	/*
	 * 
	 * regex_matches(_33734,_33736,_33752):-once(regex_matches(_33734,_33736,_33744)
	 * ,_33752).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_regex_list_3 : public Code {

	/*
	 * 
	 * regex_list(_33780,[_33776|_33778],_33782,_33790):-regex_matches(_33780,_33776
	 * ,_33782,_33790).
	 * regex_list(_33824,[_33820|_33822],_33826,_33834):-regex_list(_33824,_33822,
	 * _33826,_33834).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_prolog_flag_2 : public Code {

	/*
	 * 
	 * set_prolog_flag(_33930,_33932,_33946):-var(_33930,cut(1,illarg(var,
	 * set_prolog_flag(_33930,_33932),1,_33946))).
	 * set_prolog_flag(_33984,_33986,_34000):-var(_33986,cut(1,illarg(var,
	 * set_prolog_flag(_33984,_33986),2,_34000))).
	 * set_prolog_flag(_34038,_34040,_34048):-atom(_34038,cut(1,'$set_prolog_flag0'(
	 * _34038,_34040,_34048))).
	 * set_prolog_flag(_34084,_34086,_34104):-illarg(type(atom),set_prolog_flag(
	 * _34084,_34086),1,_34104).
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

class pred_$set_prolog_flag0_2 : public Code {

	/*
	 * 
	 * '$set_prolog_flag0'(_34130,_34132,_34146):-'$prolog_impl_flag'(_34130,_34138,
	 * changeable(_34136),cut(1,'$set_prolog_flag0'(_34136,_34130,_34132,_34138,
	 * _34146))).
	 * '$set_prolog_flag0'(_34190,_34192,_34212):-illarg(domain(atom,prolog_flag),
	 * set_prolog_flag(_34190,_34192),1,_34212).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$set_prolog_flag0_4 : public Code {

	/*
	 * 
	 * '$set_prolog_flag0'(no,_34238,_34240,_34242,_34268):-cut(1,illarg(permission(
	 * modify,flag,_34238,_34252),set_prolog_flag(_34238,_34240),_34260,_34268)).
	 * '$set_prolog_flag0'(_34304,_34306,_34308,_34310,_34318):-'$builtin_member'(
	 * _34308,_34310,cut(1,'$set_prolog_impl_flag'(_34306,_34308,_34318))).
	 * '$set_prolog_flag0'(_34360,_34362,_34364,_34366,_34386):-illarg(domain(atom,
	 * flag_value),set_prolog_flag(_34362,_34364),2,_34386).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_current_prolog_flag_2 : public Code {

	/*
	 * 
	 * current_prolog_flag(_34416,_34418,_34430):-var(_34416,cut(1,'
	 * $prolog_impl_flag'(_34416,_34420,_34422,'$get_prolog_impl_flag'(_34416,_34418
	 * ,_34430)))).
	 * current_prolog_flag(_34476,_34478,_34526):-atom(_34476,cut(1,or(('
	 * $prolog_impl_flag'(_34476,_34484,_34486)->'$get_prolog_impl_flag'(_34476,
	 * _34478)),illarg(domain(atom,prolog_flag),current_prolog_flag(_34476,_34478),1
	 * ),_34526))). current_prolog_flag(_34562,_34564,_34582):-illarg(type(atom),
	 * current_prolog_flag(_34562,_34564),1,_34582).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$prolog_impl_flag_3 : public Code {

	/*
	 * 
	 * '$prolog_impl_flag'(max_integer,_34612,changeable(no),_34622):-call(_34622).
	 * '$prolog_impl_flag'(min_integer,_34644,changeable(no),_34654):-call(_34654).
	 * '$prolog_impl_flag'(debug,[on,off],changeable(yes),_34696):-call(_34696).
	 * '$prolog_impl_flag'(max_arity,_34718,changeable(no),_34728):-call(_34728).
	 * '$prolog_impl_flag'(unknown,[error,fail,warning],changeable(yes),_34776):-
	 * call(_34776).
	 * '$prolog_impl_flag'(double_quotes,[chars,codes,atom],changeable(no),_34824):-
	 * call(_34824).
	 * '$prolog_impl_flag'(print_stack_trace,[on,off],changeable(yes),_34866):-call(
	 * _34866).
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
};

class pred_halt_0 : public Code {

	/*
	 * 
	 * halt(_34958):-halt(0,_34958).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_abort_0 : public Code {

	/*
	 * 
	 * abort(_34982):-raise_exception('Execution aborted',_34982).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_C_3 : public Code {

	/*
	 * 
	 * 'C'([_35048|_35050],_35048,_35050,_35060):-call(_35060).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_expand_term_2 : public Code {

	/*
	 * 
	 * expand_term(_35078,_35080,_35088):-var(_35078,cut(1,unify(_35080,_35078,
	 * _35088))).
	 * expand_term(_35124,_35126,_35136):-'$dcg_expansion'(_35124,_35128,cut(1,unify
	 * (_35126,_35128,_35136))). expand_term(_35174,_35174,_35184):-call(_35184).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_expansion_2 : public Code {

	/*
	 * 
	 * '$dcg_expansion'(_35200,_35202,_35210):-var(_35200,cut(1,unify(_35202,_35200,
	 * _35210))).
	 * '$dcg_expansion'((_35248-->_35250),(_35260:-_35254,_35256),_35288):-nonvar(
	 * _35248,unify((_35266,_35268),_35248,unify([_35272|_35274],_35268,cut(1,'
	 * $dcg_translation_atom'(_35266,_35260,_35276,_35278,'$dcg_translation'(_35250,
	 * _35254,_35276,_35280,'$dcg_translation'(_35268,_35256,_35278,_35280,_35288)))
	 * )))). '$dcg_expansion'((_35370-->_35372),(_35376:-_35378),_35390):-'
	 * $dcg_translation_atom'(_35370,_35376,_35380,_35382,'$dcg_translation'(_35372,
	 * _35378,_35380,_35382,_35390)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_translation_atom_4 : public Code {

	/*
	 * 
	 * '$dcg_translation_atom'(_35432,phrase(_35432,_35434,_35436),_35434,_35436,
	 * _35444):-var(_35432,cut(1,_35444)).
	 * '$dcg_translation_atom'(_35478:_35480,_35478:_35486,_35488,_35490,_35498):-
	 * cut(1,'$dcg_translation_atom'(_35480,_35486,_35488,_35490,_35498)).
	 * '$dcg_translation_atom'(_35536,_35538,_35540,_35542,_35576):-
	 * =..(_35536,[_35546|_35548],'$builtin_append'(_35548,[_35540,_35542],_35562,=.
	 * .(_35538,[_35546|_35562],_35576))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_translation_4 : public Code {

	/*
	 * 
	 * '$dcg_translation'(_35622,_35624,_35626,_35628,_35640):-'$dcg_trans'(_35622,
	 * _35630,_35632,_35626,_35628,'$dcg_trans0'(_35630,_35624,_35632,_35626,_35628,
	 * _35640)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_trans0_5 : public Code {

	/*
	 * 
	 * '$dcg_trans0'(_35688,_35688,_35690,_35692,_35690,_35700):-
	 * \==(_35690,_35692,cut(1,_35700)).
	 * '$dcg_trans0'(_35736,_35738,_35740,_35742,_35744,_35758):-'$dcg_concat'(
	 * _35736,_35744=_35740,_35738,_35758).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_concat_3 : public Code {

	/*
	 * 
	 * '$dcg_concat'(_35790,_35792,_35794,_35802):-termequal(_35790,true,cut(1,unify
	 * (_35792,_35794,_35802))).
	 * '$dcg_concat'(_35842,_35844,_35846,_35854):-termequal(_35844,true,cut(1,unify
	 * (_35842,_35846,_35854))).
	 * '$dcg_concat'(_35896,_35898,(_35896,_35898),_35908):-call(_35908).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$dcg_trans_5 : public Code {

	/*
	 * 
	 * '$dcg_trans'(_35926,_35928,_35930,_35932,_35930,_35940):-var(_35926,cut(1,'
	 * $dcg_translation_atom'(_35926,_35928,_35932,_35930,_35940))).
	 * '$dcg_trans'(_35988:_35990,_35988:_35996,_35998,_36000,_36002,_36010):-cut(1,
	 * '$dcg_trans'(_35990,_35996,_35998,_36000,_36002,_36010)).
	 * '$dcg_trans'([],true,_36052,_36052,_36054,_36062):-cut(1,_36062).
	 * '$dcg_trans'([_36092|_36094],_36096,_36098,_36100,_36102,_36122):-cut(1,'
	 * $dcg_trans'(_36094,_36104,_36098,_36106,_36102,'$dcg_concat'('C'(_36100,
	 * _36092,_36106),_36104,_36096,_36122))).
	 * '$dcg_trans'(\+_36176,(_36180->fail;_36186=_36188),_36186,_36188,_36186,
	 * _36204):-cut(1,'$dcg_trans'(_36176,_36180,_36196,_36188,_36196,_36204)).
	 * '$dcg_trans'((_36248,_36250),_36252,_36254,_36256,_36258,_36272):-cut(1,'
	 * $dcg_trans'(_36248,_36260,_36262,_36256,_36262,'$dcg_trans'(_36250,_36264,
	 * _36254,_36262,_36258,'$dcg_concat'(_36260,_36264,_36252,_36272)))).
	 * '$dcg_trans'((_36340->_36342),(_36346->_36348),_36350,_36352,_36354,_36364):-
	 * cut(1,'$dcg_trans'(_36340,_36346,_36356,_36352,_36356,'$dcg_trans'(_36342,
	 * _36348,_36350,_36356,_36354,_36364))).
	 * '$dcg_trans'((_36422;_36424),(_36428;_36430),_36432,_36434,_36432,_36442):-
	 * cut(1,'$dcg_translation'(_36422,_36428,_36434,_36432,'$dcg_translation'(
	 * _36424,_36430,_36434,_36432,_36442))).
	 * '$dcg_trans'(!,!,_36494,_36494,_36496,_36504):-cut(1,_36504).
	 * '$dcg_trans'({_36534},call(_36534),_36540,_36540,_36542,_36550):-var(_36534,
	 * cut(1,_36550)).
	 * '$dcg_trans'({_36586},_36586,_36588,_36588,_36590,_36598):-cut(1,_36598).
	 * '$dcg_trans'(_36626,_36628,_36630,_36632,_36630,_36640):-'
	 * $dcg_translation_atom'(_36626,_36628,_36632,_36630,_36640).
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
};

class pred_new_hash_1 : public Code {

	/*
	 * 
	 * new_hash(_36776,_36784):-new_hash(_36776,[],_36784).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_hash_map_2 : public Code {

	/*
	 * 
	 * hash_map(_36806,_36808,_36820):-hash_keys(_36806,_36810,sort(_36810,_36812,
	 * hash_map(_36812,_36808,_36806,_36820))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_hash_map_3 : public Code {

	/*
	 * 
	 * hash_map([],[],_36862,_36870):-cut(1,_36870).
	 * hash_map([_36896|_36898],[(_36896,_36904)|_36910],_36912,_36920):-hash_get(
	 * _36912,_36896,_36904,hash_map(_36898,_36910,_36912,_36920)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_hash_exists_1 : public Code {

	/*
	 * 
	 * hash_exists(_36958,_36968):-atom(_36958,'$get_hash_manager'(_36960,
	 * hash_contains_key(_36960,_36958,_36968))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_constructor_2 : public Code {

	/*
	 * 
	 * java_constructor(_37308,_37310,_37336):-
	 * =..(_37308,[_37314|_37316],builtin_java_convert_args(_37316,_37318,=..(_37326
	 * ,[_37314|_37318],java_constructor0(_37326,_37328,unify(_37328,_37310,_37336))
	 * ))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_declared_constructor_2 : public Code {

	/*
	 * 
	 * java_declared_constructor(_37392,_37394,_37420):-
	 * =..(_37392,[_37398|_37400],builtin_java_convert_args(_37400,_37402,=..(_37410
	 * ,[_37398|_37402],java_declared_constructor0(_37410,_37412,unify(_37412,_37394
	 * ,_37420))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_method_3 : public Code {

	/*
	 * 
	 * java_method(_37476,_37478,_37480,_37508):-
	 * =..(_37478,[_37484|_37486],builtin_java_convert_args(_37486,_37488,=..(_37496
	 * ,[_37484|_37488],java_method0(_37476,_37496,_37498,java_conversion(_37500,
	 * _37498,unify(_37500,_37480,_37508)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_declared_method_3 : public Code {

	/*
	 * 
	 * java_declared_method(_37576,_37578,_37580,_37608):-
	 * =..(_37578,[_37584|_37586],builtin_java_convert_args(_37586,_37588,=..(_37596
	 * ,[_37584|_37588],java_declared_method0(_37576,_37596,_37598,java_conversion(
	 * _37600,_37598,unify(_37600,_37580,_37608)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_get_field_3 : public Code {

	/*
	 * 
	 * java_get_field(_37676,_37678,_37680,_37692):-java_get_field0(_37676,_37678,
	 * _37682,java_conversion(_37684,_37682,unify(_37684,_37680,_37692))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_get_declared_field_3 : public Code {

	/*
	 * 
	 * java_get_declared_field(_37736,_37738,_37740,_37752):-
	 * java_get_declared_field0(_37736,_37738,_37742,java_conversion(_37744,_37742,
	 * unify(_37744,_37740,_37752))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_set_field_3 : public Code {

	/*
	 * 
	 * java_set_field(_37796,_37798,_37800,_37810):-java_conversion(_37800,_37802,
	 * java_set_field0(_37796,_37798,_37802,_37810)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_java_set_declared_field_3 : public Code {

	/*
	 * 
	 * java_set_declared_field(_37846,_37848,_37850,_37860):-java_conversion(_37850,
	 * _37852,java_set_declared_field0(_37846,_37848,_37852,_37860)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_builtin_java_convert_args_2 : public Code {

	/*
	 * 
	 * builtin_java_convert_args([],[],_37902):-cut(1,_37902).
	 * builtin_java_convert_args([_37926|_37928],[_37932|_37934],_37942):-
	 * java_conversion(_37926,_37932,builtin_java_convert_args(_37928,_37934,_37942)
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_synchronized_2 : public Code {

	/*
	 * 
	 * synchronized(_37974,_37976,_37986):-'$begin_sync'(_37974,_37978,call(_37976,'
	 * $end_sync'(_37978,_37986))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cafeteria_0 : public Code {

	/*
	 * 
	 * cafeteria(_39014):-'$cafeteria_init'(repeat('$toplvel_loop'(on_exception(
	 * _39006,'$cafeteria'(_39000),print_message(error,_39006),termequal(_39000,
	 * end_of_file,cut(1,nl('$fast_write'(bye,nl(_39014))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$cafeteria_init_0 : public Code {

	/*
	 * 
	 * '$cafeteria_init'(_39134):-retractall('$leap_flag'(_39078),retractall('
	 * $current_leash'(_39082),retractall('$current_spypoint'(_39086,_39088,_39090),
	 * retractall('$consulted_file'(_39094),retractall('$consulted_package'(_39098),
	 * retractall('$consulted_predicate'(_39102,_39104,_39106),assertz('$leap_flag'(
	 * no),assertz('$current_leash'(call),assertz('$current_leash'(exit),assertz('
	 * $current_leash'(redo),assertz('$current_leash'(fail),cut(1,_39134))))))))))))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$toplvel_loop_0 : public Code {

	/*
	 * 
	 * '$toplvel_loop'(_39250):-current_prolog_flag(debug,_39218,or((_39218==off->
	 * true),print_message(info,[debug]),'$fast_write'('| ?-
	 * ',flush_output(_39250)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$cafeteria_1 : public Code {

	/*
	 * 
	 * '$cafeteria'(_39288,_39298):-read_with_variables(_39288,_39290,'
	 * $process_order'(_39288,_39290,_39298)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$process_order_2 : public Code {

	/*
	 * 
	 * '$process_order'(_39328,_39330,_39342):-var(_39328,cut(1,illarg(var,(?-_39328
	 * ),1,_39342))). '$process_order'(end_of_file,_39380,_39388):-cut(1,_39388).
	 * '$process_order'([_39412|_39414],_39416,_39430):-cut(1,consult([_39412|_39414
	 * ],_39430)).
	 * '$process_order'(_39458,_39460,_39504):-current_prolog_flag(debug,_39462,or((
	 * _39462==off->call(user:_39458)),'$trace_goal'(user:_39458),nl('
	 * $rm_redundant_vars'(_39460,_39496,'$give_answers_with_prompt'(_39496,cut(1,'
	 * $fast_write'(yes,nl(_39504)))))))).
	 * '$process_order'(_39570,_39572,_39580):-nl('$fast_write'(no,nl(_39580))).
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

class pred_$rm_redundant_vars_2 : public Code {

	/*
	 * 
	 * '$rm_redundant_vars'([],[],_39616):-cut(1,_39616).
	 * '$rm_redundant_vars'(['_'=_39642|_39648],_39650,_39658):-cut(1,'
	 * $rm_redundant_vars'(_39648,_39650,_39658)).
	 * '$rm_redundant_vars'([_39690|_39692],[_39690|_39698],_39706):-'
	 * $rm_redundant_vars'(_39692,_39698,_39706).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$give_answers_with_prompt_1 : public Code {

	/*
	 * 
	 * '$give_answers_with_prompt'([],_39736):-cut(1,_39736).
	 * '$give_answers_with_prompt'(_39756,_39772):-'$give_an_answer'(_39756,'
	 * $fast_write'(' ?
	 * ',flush_output(read_line(_39758,\==(_39758,";",nl(_39772)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$give_an_answer_1 : public Code {

	/*
	 * 
	 * '$give_an_answer'([],_39826):-cut(1,'$fast_write'(true,_39826)).
	 * '$give_an_answer'([_39854],_39864):-cut(1,'$print_an answer'(_39854,_39864)).
	 * '$give_an_answer'([_39892|_39894],_39902):-'$print_an
	 * answer'(_39892,'$fast_write'(',',nl('$give_an_answer'(_39894,_39902)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

static* std::function<Function*(PrologMachine*);
};

class pred_$print_an answer_1 : public Code {

	/*
	 * 
	 * '$print_an answer'(_39940=_39942,_39950):-write(_39940,'$fast_write'(' =
	 * ',writeq(_39942,_39950))).
	 * 
	 * 
	 */

public:
static* std::function<Function*(PrologMachine*);

static* std::function<Function*(PrologMachine*);
};

class pred_consult_1 : public Code {

	/*
	 * 
	 * consult(_39982,_39994):-var(_39982,cut(1,illarg(var,consult(_39982),1,_39994)
	 * )). consult([],_40036):-cut(1,_40036).
	 * consult([_40058|_40060],_40068):-cut(1,consult(_40058,consult(_40060,_40068))
	 * ). consult(_40100,_40108):-atom(_40100,cut(1,'$consult'(_40100,_40108))).
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

class pred_$consult_1 : public Code {

	/*
	 * 
	 * '$consult'(_40140,_40212):-'$prolog_file_name'(_40140,_40142,open(_40142,read
	 * ,_40144,stream_property(_40144,file_name(_40148),print_message(info,[
	 * consulting,_40148,...],statistics(runtime,_40168,consult_stream(_40148,_40144
	 * ,statistics(runtime,[_40172,_40178],print_message(info,[_40148,consulted,
	 * _40178,msec],close(_40144,_40212))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_consult_stream_2 : public Code {

	/*
	 * 
	 * consult_stream(_40298,_40300,_40310):-'$consult_init'(_40298,repeat(read(
	 * _40300,_40302,'$consult_clause'(_40302,termequal(_40302,end_of_file,cut(1,
	 * _40310)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$prolog_file_name_2 : public Code {

	/*
	 * 
	 * '$prolog_file_name'(_40364,_40364,_40378):-sub_atom(_40364,_40366,_40368,
	 * _40370,'.',smallerthan(0,_40370,cut(1,_40378))).
	 * '$prolog_file_name'(_40422,_40424,_40432):-atom_concat(_40422,'.pl',_40424,
	 * _40432).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$consult_init_1 : public Code {

	/*
	 * 
	 * '$consult_init'(_40458,_40494):-retractall('$consulted_file'(_40462),
	 * retractall('$consulted_package'(_40466),retractall('$consulted_import'(_40458
	 * ,_40472),retract('$consulted_predicate'(_40476,_40478,_40458),abolish(_40476:
	 * _40478,fail(_40494)))))).
	 * '$consult_init'(_40542,_40558):-assertz('$consulted_file'(_40542),assertz('
	 * $consulted_package'(user),_40558)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$consult_clause_1 : public Code {

	/*
	 * 
	 * '$consult_clause'(end_of_file,_40590):-cut(1,_40590).
	 * '$consult_clause'((:-module(_40612,_40614)),_40626):-cut(1,'
	 * $assert_consulted_package'(_40612,_40626)). '$consult_clause'((:-package
	 * _40654),_40666):-cut(1,'$assert_consulted_package'(_40654,_40666)).
	 * '$consult_clause'((:-import
	 * _40694),_40706):-cut(1,'$assert_consulted_import'(_40694,_40706)).
	 * '$consult_clause'((:-dynamic _40734),_40746):-cut(1,_40746).
	 * '$consult_clause'((:-public _40768),_40780):-cut(1,_40780).
	 * '$consult_clause'((:-meta_predicate _40802),_40814):-cut(1,_40814).
	 * '$consult_clause'((:-mode _40836),_40848):-cut(1,_40848).
	 * '$consult_clause'((:-multifile _40870),_40882):-cut(1,_40882).
	 * '$consult_clause'((:-block _40904),_40916):-cut(1,_40916).
	 * '$consult_clause'((:-_40938),_40958):-cut(1,clause('$consulted_package'(
	 * _40942),_40944,once(_40942:_40938,_40958))).
	 * '$consult_clause'(_40992,_41002):-'$consult_preprocess'(_40992,_40994,'
	 * $consult_cls'(_40994,_41002)).
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
};

class pred_$assert_consulted_package_1 : public Code {

	/*
	 * 
	 * '$assert_consulted_package'(_41030,_41044):-clause('$consulted_package'(
	 * _41030),_41036,cut(1,_41044)).
	 * '$assert_consulted_package'(_41072,_41088):-retractall('$consulted_package'(
	 * _41076),assertz('$consulted_package'(_41072),_41088)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$assert_consulted_import_1 : public Code {

	/*
	 * 
	 * '$assert_consulted_import'(_41114,_41134):-clause('$consulted_file'(_41118),
	 * _41120,assertz('$consulted_import'(_41118,_41114),_41134)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$consult_preprocess_2 : public Code {

	/*
	 * 
	 * '$consult_preprocess'(_41162,_41164,_41172):-expand_term(_41162,_41164,_41172
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$consult_cls_1 : public Code {

	/*
	 * 
	 * '$consult_cls'((_41198:-_41200),_41214):-cut(1,'$assert_consulted_clause'((
	 * _41198:-_41200),_41214)).
	 * '$consult_cls'(_41240,_41254):-'$assert_consulted_clause'((_41240:-true),
	 * _41254).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$assert_consulted_clause_1 : public Code {

	/*
	 * 
	 * '$assert_consulted_clause'(_41274,_41324):-unify((_41278:-_41280),_41274,
	 * functor(_41278,_41282,_41284,clause('$consulted_file'(_41288),_41290,clause('
	 * $consulted_package'(_41294),_41296,assertz(_41294:_41274,assertz('
	 * $consulted_predicate'(_41294,_41282/_41284,_41288),cut(1,_41324))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_trace_0 : public Code {

	/*
	 * 
	 * trace(_41396):-current_prolog_flag(debug,on,cut(1,_41396)).
	 * trace(_41428):-set_prolog_flag(debug,on,'$trace_init'('$fast_write'('{Small
	 * debugger is switch on}',nl(cut(1,_41428))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$trace_init_0 : public Code {

	/*
	 * 
	 * '$trace_init'(_41510):-retractall('$leap_flag'(_41470),retractall('
	 * $current_leash'(_41474),retractall('$current_spypoint'(_41478,_41480,_41482),
	 * assertz('$leap_flag'(no),assertz('$current_leash'(call),assertz('
	 * $current_leash'(exit),assertz('$current_leash'(redo),assertz('$current_leash'
	 * (fail),cut(1,_41510))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notrace_0 : public Code {

	/*
	 * 
	 * notrace(_41582):-current_prolog_flag(debug,off,cut(1,_41582)).
	 * notrace(_41614):-set_prolog_flag(debug,off,'$fast_write'('{Small debugger is
	 * switch off}',nl(cut(1,_41614)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_debug_0 : public Code {

	/*
	 * 
	 * debug(_41656):-trace(_41656).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nodebug_0 : public Code {

	/*
	 * 
	 * nodebug(_41678):-notrace(_41678).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_spy_1 : public Code {

	/*
	 * 
	 * spy(_41694,_41708):-'$term_to_predicateindicator'(_41694,_41700,spy(_41694),
	 * trace('$assert_spypoint'(_41700,'$set_debug_flag'(leap,yes,cut(1,_41708))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$assert_spypoint_1 : public Code {

	/*
	 * 
	 * '$assert_spypoint'(_41764:_41758/_41760,_41826):-clause('$current_spypoint'(
	 * _41764,_41758,_41760),_41776,print_message(info,[spypoint,_41764:_41758/
	 * _41760,is,already,added],cut(1,_41826))).
	 * '$assert_spypoint'(_41870:_41864/_41866,_41940):-clause('$consulted_predicate
	 * '(_41870,_41864/_41866,_41886),_41888,assertz('$current_spypoint'(_41870,
	 * _41864,_41866),print_message(info,[spypoint,_41870:_41864/_41866,is,added],
	 * cut(1,_41940)))).
	 * '$assert_spypoint'(_41990:_41984/_41986,_42048):-print_message(warning,[no,
	 * matching,predicate,for,spy,_41990:_41984/_41986],_42048).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nospy_1 : public Code {

	/*
	 * 
	 * nospy(_42070,_42084):-'$term_to_predicateindicator'(_42070,_42076,nospy(
	 * _42070),'$retract_spypoint'(_42076,'$set_debug_flag'(leap,no,cut(1,_42084))))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$retract_spypoint_1 : public Code {

	/*
	 * 
	 * '$retract_spypoint'(_42136:_42130/_42132,_42190):-retract('$current_spypoint'
	 * (_42136,_42130,_42132),print_message(info,[spypoint,_42136:_42130/_42132,is,
	 * removed],cut(1,_42190))). '$retract_spypoint'(_42224,_42234):-call(_42234).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nospyall_0 : public Code {

	/*
	 * 
	 * nospyall(_42262):-retractall('$current_spypoint'(_42250,_42252,_42254),'
	 * $set_debug_flag'(leap,no,_42262)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_leash_1 : public Code {

	/*
	 * 
	 * leash(_42288,_42296):-nonvar(_42288,'$leash'(_42288,cut(1,_42296))).
	 * leash(_42328,_42344):-illarg(type(leash_specifier),leash(_42328),1,_42344).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$leash_1 : public Code {

	/*
	 * 
	 * '$leash'([],_42390):-cut(1,retractall('$current_leash'(_42370),print_message(
	 * info,[no,leashing],_42390))).
	 * '$leash'(_42424,_42460):-retractall('$current_leash'(_42428),'$assert_leash'(
	 * _42424,print_message(info,[leashing,stopping,on,_42424],_42460))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$assert_leash_1 : public Code {

	/*
	 * 
	 * '$assert_leash'([],_42500):-cut(1,_42500).
	 * '$assert_leash'([_42522|_42524],_42536):-'$leash_specifier'(_42522,assertz('
	 * $current_leash'(_42522),'$assert_leash'(_42524,_42536))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$leash_specifier_1 : public Code {

	/*
	 * 
	 * '$leash_specifier'(call,_42576):-call(_42576).
	 * '$leash_specifier'(exit,_42598):-call(_42598).
	 * '$leash_specifier'(redo,_42620):-call(_42620).
	 * '$leash_specifier'(fail,_42642):-call(_42642).
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

class pred_$trace_goal_1 : public Code {

	/*
	 * 
	 * '$trace_goal'(_42656,_42666):-'$set_debug_flag'(leap,no,'$get_current_B'(
	 * _42658,'$meta_call'(_42656,user,_42658,0,trace,_42666))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$trace_goal_4 : public Code {

	/*
	 * 
	 * '$trace_goal'(_42708,_42710,_42712,_42714,_42722):-print_procedure_box(call,
	 * _42708,_42710,_42712,_42714,'$call_internal'(_42708,_42710,_42712,_42714,
	 * trace,print_procedure_box(exit,_42708,_42710,_42712,_42714,redo_procedure_box
	 * (_42708,_42710,_42712,_42714,_42722)))).
	 * '$trace_goal'(_42796,_42798,_42800,_42802,_42810):-print_procedure_box(fail,
	 * _42796,_42798,_42800,_42802,fail(_42810)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_print_procedure_box_5 : public Code {

	/*
	 * 
	 * print_procedure_box(_42854,_42856,_42858,_42850/_42852,_42860,_42932):-clause
	 * ('$current_spypoint'(_42858,_42850,_42852),_42870,cut(1,'$builtin_message'([+
	 * ,_42860,_42854,:,_42858:_42856],'$read_blocked'(print_procedure_box(_42854,
	 * _42856,_42858,_42850/_42852,_42860),_42932)))).
	 * print_procedure_box(_42980,_42982,_42984,_42986,_42988,_43070):-clause('
	 * $leap_flag'(no),_42994,cut(1,'$builtin_message'(['
	 * ',_42988,_42980,:,_42984:_42982],or((clause('$current_leash'(_42980),_43040)-
	 * >'$read_blocked'(print_procedure_box(_42980,_42982,_42984,_42986,_42988))),nl
	 * ,_43070)))).
	 * print_procedure_box(_43120,_43122,_43124,_43126,_43128,_43138):-call(_43138).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_redo_procedure_box_4 : public Code {

	/*
	 * 
	 * redo_procedure_box(_43160,_43162,_43164,_43166,_43176):-call(_43176).
	 * redo_procedure_box(_43196,_43198,_43200,_43202,_43210):-print_procedure_box(
	 * redo,_43196,_43198,_43200,_43202,fail(_43210)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$read_blocked_1 : public Code {

	/*
	 * 
	 * '$read_blocked'(_43248,_43288):-'$fast_write'(' ?
	 * ',flush_output(read_line(_43250,or((_43250==[]->_43260=99),_43250=[_43260|
	 * _43274],'$debug_option'(_43260,_43248,_43288))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$debug_option_2 : public Code {

	/*
	 * 
	 * '$debug_option'(97,_43334,_43342):-cut(1,notrace(abort(_43342))).
	 * '$debug_option'(99,_43372,_43380):-cut(1,'$set_debug_flag'(leap,no,_43380)).
	 * '$debug_option'(108,_43410,_43418):-cut(1,'$set_debug_flag'(leap,yes,_43418))
	 * . '$debug_option'(43,print_procedure_box(_43450,_43452,_43454,_43456,_43458),
	 * _43484):-cut(1,spy(_43454:_43456,call(print_procedure_box(_43450,_43452,
	 * _43454,_43456,_43458),_43484))).
	 * '$debug_option'(45,print_procedure_box(_43520,_43522,_43524,_43526,_43528),
	 * _43554):-cut(1,nospy(_43524:_43526,call(print_procedure_box(_43520,_43522,
	 * _43524,_43526,_43528),_43554))).
	 * '$debug_option'(63,_43588,_43596):-cut(1,'$show_debug_option'(call(_43588,
	 * _43596))).
	 * '$debug_option'(104,_43628,_43636):-cut(1,'$show_debug_option'(call(_43628,
	 * _43636))). '$debug_option'(_43668,_43670,_43680):-call(_43680).
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
};

class pred_$show_debug_option_0 : public Code {

	/*
	 * 
	 * '$show_debug_option'(_43702):-tab(4,'$fast_write'('Debuggin
	 * options:',nl(tab(4,'$fast_write'('a abort',nl(tab(4,'$fast_write'('RET
	 * creep',nl(tab(4,'$fast_write'('c creep',nl(tab(4,'$fast_write'('l
	 * leap',nl(tab(4,'$fast_write'('+ spy this',nl(tab(4,'$fast_write'('- nospy
	 * this',nl(tab(4,'$fast_write'('? help',nl(tab(4,'$fast_write'('h
	 * help',nl(_43702))))))))))))))))))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$set_debug_flag_2 : public Code {

	/*
	 * 
	 * '$set_debug_flag'(leap,_43858,_43872):-clause('$leap_flag'(_43858),_43864,cut
	 * (1,_43872)).
	 * '$set_debug_flag'(leap,_43902,_43918):-retractall('$leap_flag'(_43906),
	 * assertz('$leap_flag'(_43902),_43918)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_listing_0 : public Code {

	/*
	 * 
	 * listing(_43954):-'$listing'(_43946,user,_43954).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_listing_1 : public Code {

	/*
	 * 
	 * listing(_43974,_43986):-var(_43974,cut(1,illarg(var,listing(_43974),1,_43986)
	 * )).
	 * listing(_44022,_44032):-atom(_44022,cut(1,'$listing'(_44024,_44022,_44032))).
	 * listing(_44068/_44070,_44084):-cut(1,'$listing'(_44068/_44070,user,_44084)).
	 * listing(_44114:_44116,_44124):-atom(_44114,cut(1,'$listing'(_44116,_44114,
	 * _44124))).
	 * listing(_44158,_44174):-illarg(type(predicate_indicator),listing(_44158),1,
	 * _44174).
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

class pred_$listing_2 : public Code {

	/*
	 * 
	 * '$listing'(_44198,_44200,_44210):-var(_44198,cut(1,'$listing_dynamic_clause'(
	 * _44200,_44202,_44210))).
	 * '$listing'(_44248/_44250,_44252,_44266):-atom(_44248,integer(_44250,cut(1,'
	 * $listing_dynamic_clause'(_44252,_44248/_44250,_44266)))).
	 * '$listing'(_44308,_44310,_44332):-illarg(type(predicate_indicator),listing(
	 * _44310:_44308),1,_44332).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$listing_dynamic_clause_2 : public Code {

	/*
	 * 
	 * '$listing_dynamic_clause'(_44358,_44360,_44382):-'$new_internal_database'(
	 * _44358,hash_keys(_44358,_44362,'$builtin_member'(_44360,_44362,unify(_44366/
	 * _44368,_44360,functor(_44370,_44366,_44368,'$clause_internal'(_44358,_44360,
	 * _44370,_44372,_44374,'$write_dynamic_clause'(_44358,_44372,fail(_44382)))))))
	 * ). '$listing_dynamic_clause'(_44464,_44466,_44476):-call(_44476).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_dynamic_clause_2 : public Code {

	/*
	 * 
	 * '$write_dynamic_clause'(_44492,_44494,_44502):-var(_44494,cut(1,fail(_44502))
	 * ). '$write_dynamic_clause'(_44540,(_44536:-true),_44550):-cut(1,numbervars(
	 * _44536,0,_44542,'$write_dynamic_head'(_44540,_44536,write('.',nl(_44550))))).
	 * '$write_dynamic_clause'(_44606,(_44602:-_44604),_44622):-cut(1,numbervars((
	 * _44602:-_44604),0,_44614,'$write_dynamic_head'(_44606,_44602,write('
	 * :-',nl('$write_dynamic_body'(_44604,8,write('.',nl(_44622)))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_dynamic_head_2 : public Code {

	/*
	 * 
	 * '$write_dynamic_head'(user,_44690,_44698):-cut(1,writeq(_44690,_44698)).
	 * '$write_dynamic_head'(_44726,_44728,_44736):-write(_44726,write(:,writeq(
	 * _44728,_44736))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$write_dynamic_body_2 : public Code {

	/*
	 * 
	 * '$write_dynamic_body'((_44772,_44774),_44776,_44784):-cut(1,'
	 * $write_dynamic_body'(_44772,_44776,write(',',nl('$write_dynamic_body'(_44774,
	 * _44776,_44784))))).
	 * '$write_dynamic_body'((_44834;_44836),_44838,_44854):-cut(1,is(_44846,_44838+
	 * 4,tab(_44838,write('(',nl('$write_dynamic_body'(_44834,_44846,nl(tab(_44838,
	 * write(;,nl('$write_dynamic_body'(_44836,_44846,nl(tab(_44838,write(')',_44854
	 * )))))))))))))).
	 * '$write_dynamic_body'((_44954->_44956),_44958,_44974):-cut(1,is(_44966,_44958
	 * +4,tab(_44958,write('(',nl('$write_dynamic_body'(_44954,_44966,nl(tab(_44958,
	 * write(->,nl('$write_dynamic_body'(_44956,_44966,nl(tab(_44958,write(')',
	 * _44974)))))))))))))).
	 * '$write_dynamic_body'(_45072,_45074,_45082):-tab(_45074,writeq(_45072,_45082)
	 * ).
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

class pred_length_2 : public Code {

	/*
	 * 
	 * length(_45246,_45248,_45256):-var(_45248,cut(1,'$length'(_45246,0,_45248,
	 * _45256))). length(_45294,_45296,_45304):-'$length0'(_45294,0,_45296,_45304).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$length_3 : public Code {

	/*
	 * 
	 * '$length'([],_45330,_45330,_45340):-call(_45340).
	 * '$length'([_45360|_45362],_45364,_45366,_45382):-is(_45374,_45364+1,'$length'
	 * (_45362,_45374,_45366,_45382)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$length0_3 : public Code {

	/*
	 * 
	 * '$length0'([],_45418,_45418,_45426):-cut(1,_45426).
	 * '$length0'([_45452|_45454],_45456,_45458,_45474):-smallerthan(_45456,_45458,
	 * is(_45466,_45456+1,'$length0'(_45454,_45466,_45458,_45474))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_numbervars_3 : public Code {

	/*
	 * 
	 * numbervars(_45518,_45520,_45522,_45530):-integer(_45520,smallerorequal(0,
	 * _45520,cut(1,'$numbervars'(_45518,_45520,_45522,_45530)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$numbervars_3 : public Code {

	/*
	 * 
	 * '$numbervars'(_45578,_45580,_45582,_45600):-var(_45578,cut(1,unify('$VAR'(
	 * _45580),_45578,is(_45582,_45580+1,_45600)))).
	 * '$numbervars'(_45646,_45648,_45648,_45656):-atomic(_45646,cut(1,_45656)).
	 * '$numbervars'(_45686,_45688,_45688,_45696):-java(_45686,cut(1,_45696)).
	 * '$numbervars'(_45726,_45728,_45730,_45742):-functor(_45726,_45732,_45734,'
	 * $numbervars_str'(1,_45734,_45726,_45728,_45730,_45742)).
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

class pred_$numbervars_str_5 : public Code {

	/*
	 * 
	 * '$numbervars_str'(_45784,_45784,_45786,_45788,_45790,_45800):-cut(1,arg(
	 * _45784,_45786,_45792,'$numbervars'(_45792,_45788,_45790,_45800))).
	 * '$numbervars_str'(_45848,_45850,_45852,_45854,_45856,_45876):-arg(_45848,
	 * _45852,_45858,'$numbervars'(_45858,_45854,_45860,is(_45868,_45848+1,'
	 * $numbervars_str'(_45868,_45850,_45852,_45860,_45856,_45876)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_statistics_2 : public Code {

	/*
	 * 
	 * statistics(_45940,_45942,_45950):-nonvar(_45940,'$statistics_mode'(_45940,cut
	 * (1,'$statistics'(_45940,_45942,_45950)))).
	 * statistics(_45992,_45994,_46020):-findall(_45998,'$statistics_mode'(_45998),
	 * _46000,illarg(domain(atom,_46000),statistics(_45992,_45994),1,_46020)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$statistics_mode_1 : public Code {

	/*
	 * 
	 * '$statistics_mode'(runtime,_46064):-call(_46064).
	 * '$statistics_mode'(trail,_46086):-call(_46086).
	 * '$statistics_mode'(choice,_46108):-call(_46108).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_print_message_2 : public Code {

	/*
	 * 
	 * print_message(_46122,_46124,_46138):-var(_46122,cut(1,illarg(var,
	 * print_message(_46122,_46124),1,_46138))).
	 * print_message(error,_46176,_46184):-cut(1,'$error_message'(_46176,_46184)).
	 * print_message(info,_46212,_46220):-cut(1,'$fast_write'('{','$builtin_message'
	 * (_46212,'$fast_write'('}',nl(_46220))))).
	 * print_message(warning,_46264,_46272):-cut(1,'$fast_write'('{WARNING:
	 * ','$builtin_message'(_46264,'$fast_write'('}',nl(_46272))))).
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

class pred_$error_message_1 : public Code {

	/*
	 * 
	 * '$error_message'(instantiation_error(_46318,0),_46328):-cut(1,'$fast_write'(
	 * user_error,'{INSTANTIATION ERROR:
	 * ','$write_goal'(user_error,_46318,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_46328)))))).
	 * '$error_message'(instantiation_error(_46386,_46388),_46396):-cut(1,'
	 * $fast_write'(user_error,'{INSTANTIATION ERROR:
	 * ','$write_goal'(user_error,_46386,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_46388,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_46396)))))))).
	 * '$error_message'(type_error(_46470,_46472,_46474,_46476),_46484):-cut(1,'
	 * $fast_write'(user_error,'{TYPE ERROR:
	 * ','$write_goal'(user_error,_46470,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_46472,'$fast_write'(user_error,': expected
	 * ','$fast_write'(user_error,_46474,'$fast_write'(user_error,', found
	 * ',write(user_error,_46476,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_46484)))))))))))).
	 * '$error_message'(domain_error(_46590,_46592,_46594,_46596),_46604):-cut(1,'
	 * $fast_write'(user_error,'{DOMAIN ERROR:
	 * ','$write_goal'(user_error,_46590,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_46592,'$fast_write'(user_error,': expected
	 * ','$fast_write'(user_error,_46594,'$fast_write'(user_error,', found
	 * ',write(user_error,_46596,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_46604)))))))))))).
	 * '$error_message'(existence_error(_46710,0,_46714,_46716,_46718),_46726):-cut(
	 * 1,'$fast_write'(user_error,'{EXISTENCE ERROR:
	 * ','$fast_write'(user_error,_46714,'$fast_write'(user_error,'
	 * ',write(user_error,_46716,'$fast_write'(user_error,' does not
	 * exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,
	 * _46726))))))))).
	 * '$error_message'(existence_error(_46808,_46810,_46812,_46814,_46816),_46824):
	 * -cut(1,'$fast_write'(user_error,'{EXISTENCE ERROR:
	 * ','$write_goal'(user_error,_46808,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_46810,'$fast_write'(user_error,':
	 * ','$fast_write'(user_error,_46812,'$fast_write'(user_error,'
	 * ',write(user_error,_46814,'$fast_write'(user_error,' does not
	 * exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,
	 * _46824))))))))))))).
	 * '$error_message'(permission_error(_46938,_46940,_46942,_46944,_46946),_46954)
	 * :-cut(1,'$fast_write'(user_error,'{PERMISSION ERROR:
	 * ','$write_goal'(user_error,_46938,'$fast_write'(user_error,' - can not
	 * ','$fast_write'(user_error,_46940,'$fast_write'(user_error,'
	 * ','$fast_write'(user_error,_46942,'$fast_write'(user_error,'
	 * ',write(user_error,_46944,'$fast_write'(user_error,':
	 * ','$fast_write'(user_error,_46946,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_46954)))))))))))))).
	 * '$error_message'(representation_error(_47076,_47078,_47080),_47088):-cut(1,'
	 * $fast_write'(user_error,'{REPRESENTATION ERROR:
	 * ','$write_goal'(user_error,_47076,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_47078,'$fast_write'(user_error,': limit of
	 * ','$fast_write'(user_error,_47080,'$fast_write'(user_error,' is
	 * breached','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,
	 * _47088))))))))))).
	 * '$error_message'(evaluation_error(_47186,_47188,_47190),_47198):-cut(1,'
	 * $fast_write'(user_error,'{EVALUATION ERROR:
	 * ','$write_goal'(user_error,_47186,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_47188,'$fast_write'(user_error,', found
	 * ','$fast_write'(user_error,_47190,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_47198)))))))))).
	 * '$error_message'(syntax_error(_47288,_47290,_47292,_47294,_47296),_47304):-
	 * cut(1,'$fast_write'(user_error,'{SYNTAX ERROR:
	 * ','$write_goal'(user_error,_47288,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_47290,'$fast_write'(user_error,': expected
	 * ','$fast_write'(user_error,_47292,'$fast_write'(user_error,', found
	 * ',write(user_error,_47294,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_47304)))))))))))).
	 * '$error_message'(system_error(_47410),_47418):-cut(1,'$fast_write'(user_error
	 * ,'{SYSTEM ERROR:
	 * ',write(user_error,_47410,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_47418)))))).
	 * '$error_message'(internal_error(_47476),_47484):-cut(1,'$fast_write'(
	 * user_error,'{INTERNAL ERROR:
	 * ',write(user_error,_47476,'$fast_write'(user_error,'}',nl(user_error,
	 * flush_output(user_error,_47484)))))).
	 * '$error_message'(java_error(_47542,_47544,_47546),_47554):-cut(1,'$fast_write
	 * '(user_error,'{JAVA ERROR:
	 * ','$write_goal'(user_error,_47542,'$fast_write'(user_error,' - arg
	 * ','$fast_write'(user_error,_47544,'$fast_write'(user_error,', found
	 * ','$write_goal'(user_error,_47546,'$fast_write'(user_error,'}',nl(user_error,
	 * '$print_stack_trace'(_47546,flush_output(user_error,_47554))))))))))).
	 * '$error_message'(_47648,_47656):-'$fast_write'(user_error,'{',write(
	 * user_error,_47648,'$fast_write'(user_error,'}',nl(user_error,flush_output(
	 * user_error,_47656))))).
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
};

class pred_$write_goal_2 : public Code {

	/*
	 * 
	 * '$write_goal'(_47706,_47708,_47716):-java(_47708,cut(1,'$write_toString'(
	 * _47706,_47708,_47716))).
	 * '$write_goal'(_47752,_47754,_47762):-write(_47752,_47754,_47762).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_illarg_3 : public Code {

	/*
	 * 
	 * illarg(_47786,_47788,_47790,_47798):-var(_47786,cut(1,illarg(var,_47788,
	 * _47790,_47798))).
	 * illarg(var,_47838,_47840,_47854):-raise_exception(instantiation_error(_47838,
	 * _47840),_47854).
	 * illarg(type(_47880),_47882,_47884,_47932):-arg(_47884,_47882,_47886,or((
	 * nonvar(_47886)->_47904=type_error(_47882,_47884,_47880,_47886)),_47904=
	 * instantiation_error(_47882,_47884),raise_exception(_47904,_47932))).
	 * illarg(domain(_47976,_47978),_47980,_47982,_48064):-arg(_47982,_47980,_47984,
	 * or(('$match_type'(_47976,_47984)->_48004=domain_error(_47980,_47982,_47978,
	 * _47984)),(nonvar(_47984)->_48004=type_error(_47980,_47982,_47976,_47984);
	 * _48004=instantiation_error(_47980,_47982)),raise_exception(_48004,_48064))).
	 * illarg(existence(_48108,_48110,_48112),_48114,_48116,_48136):-raise_exception
	 * (existence_error(_48114,_48116,_48108,_48110,_48112),_48136).
	 * illarg(permission(_48162,_48164,_48166,_48168),_48170,_48172,_48192):-
	 * raise_exception(permission_error(_48170,_48162,_48164,_48166,_48168),_48192).
	 * illarg(representation(_48218),_48220,_48222,_48238):-raise_exception(
	 * representation_error(_48220,_48222,_48218),_48238).
	 * illarg(evaluation(_48264),_48266,_48268,_48284):-raise_exception(
	 * evaluation_error(_48266,_48268,_48264),_48284).
	 * illarg(syntax(_48310,_48312,_48314),_48316,_48318,_48338):-raise_exception(
	 * syntax_error(_48316,_48318,_48310,_48312,_48314),_48338).
	 * illarg(system(_48364),_48366,_48368,_48380):-raise_exception(system_error(
	 * _48364),_48380).
	 * illarg(internal(_48406),_48408,_48410,_48422):-raise_exception(internal_error
	 * (_48406),_48422).
	 * illarg(java(_48448),_48450,_48452,_48468):-raise_exception(java_error(_48450,
	 * _48452,_48448),_48468).
	 * illarg(_48492,_48494,_48496,_48504):-raise_exception(_48492,_48504).
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
};

class pred_$match_type_2 : public Code {

	/*
	 * 
	 * '$match_type'(term,_48528,_48538):-call(_48538).
	 * '$match_type'(variable,_48554,_48562):-var(_48554,_48562).
	 * '$match_type'(atom,_48584,_48592):-atom(_48584,_48592).
	 * '$match_type'(atomic,_48614,_48622):-atomic(_48614,_48622).
	 * '$match_type'(byte,_48644,_48652):-integer(_48644,smallerorequal(0,_48644,
	 * smallerorequal(_48644,255,_48652))).
	 * '$match_type'(in_byte,_48690,_48698):-integer(_48690,smallerorequal(-1,_48690
	 * ,smallerorequal(_48690,255,_48698))).
	 * '$match_type'(character,_48736,_48744):-atom(_48736,atom_length(_48736,1,
	 * _48744)). '$match_type'(in_character,_48774,_48794):-or(_48774==end_of_file,'
	 * $match_type'(character,_48774),_48794).
	 * '$match_type'(number,_48818,_48826):-number(_48818,_48826).
	 * '$match_type'(integer,_48848,_48856):-integer(_48848,_48856).
	 * '$match_type'(long,_48878,_48886):-long(_48878,_48886).
	 * '$match_type'(float,_48908,_48916):-float(_48908,_48916).
	 * '$match_type'(callable,_48938,_48946):-callable(_48938,_48946).
	 * '$match_type'(compound,_48968,_48976):-compound(_48968,_48976).
	 * '$match_type'(list,_48998,_49024):-nonvar(_48998,or(_48998=[],_48998=[_49008|
	 * _49010],_49024)). '$match_type'(java,_49054,_49062):-java(_49054,_49062).
	 * '$match_type'(stream,_49084,_49104):-or(java(_49084,'java.io.PushbackReader')
	 * ,java(_49084,'java.io.PrintWriter'),_49104).
	 * '$match_type'(stream_or_alias,_49128,_49146):-or(atom(_49128),'$match_type'(
	 * stream,_49128),_49146).
	 * '$match_type'(hash,_49170,_49178):-java(_49170,'com.googlecode.prolog_cafe.
	 * lang.HashtableOfTerm',_49178).
	 * '$match_type'(hash_or_alias,_49202,_49220):-or(atom(_49202),'$match_type'(
	 * hash,_49202),_49220).
	 * '$match_type'(predicate_indicator,_49244,_49264):-nonvar(_49244,unify(_49254:
	 * _49248/_49250,_49244,atom(_49254,atom(_49248,integer(_49250,_49264))))).
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
};

class pred_with_mutex_2 : public Code {

	/*
	 * 
	 * with_mutex(_49346,_49348,_49374):-not(atom(_49346),not(java(_49346),cut(1,
	 * illarg(type(atom),with_mutex(_49346,_49348),1,_49374)))).
	 * with_mutex(_49418,_49420,_49434):-var(_49420,cut(1,illarg(var,with_mutex(
	 * _49418,_49420),2,_49434))).
	 * with_mutex(_49472,_49474,_49496):-not(callable(_49474),cut(1,illarg(type(
	 * callable),with_mutex(_49472,_49474),2,_49496))).
	 * with_mutex(_49534,_49536,_49544):-mutex_lock_bt(_49534,call(_49536,cut(1,
	 * mutex_unlock(_49534,_49544)))).
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

class pred_$builtin_append_3 : public Code {

	/*
	 * 
	 * '$builtin_append'([],_49584,_49584,_49594):-call(_49594).
	 * '$builtin_append'([_49614|_49616],_49624,[_49614|_49622],_49632):-'
	 * $builtin_append'(_49616,_49624,_49622,_49632).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$builtin_message_1 : public Code {

	/*
	 * 
	 * '$builtin_message'([],_49666):-cut(1,_49666).
	 * '$builtin_message'([_49688],_49698):-cut(1,write(_49688,_49698)).
	 * '$builtin_message'([_49726|_49728],_49736):-write(_49726,'$fast_write'('
	 * ','$builtin_message'(_49728,_49736))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_$member_in_reverse_2 : public Code {

	/*
	 * 
	 * '$member_in_reverse'(_49774,[_49770|_49772],_49782):-'$member_in_reverse'(
	 * _49774,_49772,_49782).
	 * '$member_in_reverse'(_49808,[_49808|_49810],_49820):-call(_49820).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SXX_BUILTINS_CAFE
