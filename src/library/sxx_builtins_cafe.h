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

on_load_sxx_builtins_cafe(_428):-op(1150,fx,package,_428).
on_load_sxx_builtins_cafe(_480):-package('TauMachine.builtin',_480).
on_load_sxx_builtins_cafe(_522):-public((true/0,otherwise/0),_522).
on_load_sxx_builtins_cafe(_564):-public((fail/0,false/0),_564).
on_load_sxx_builtins_cafe(_594):-public(!/0,_594).
on_load_sxx_builtins_cafe(_624):-public((^)/2,_624).
on_load_sxx_builtins_cafe(_654):-public((',')/2,_654).
on_load_sxx_builtins_cafe(_684):-public((;)/2,_684).
on_load_sxx_builtins_cafe(_714):-public((->)/2,_714).
on_load_sxx_builtins_cafe(_744):-public(call/1,_744).
on_load_sxx_builtins_cafe(_3816):-public((catch/3,throw/1),_3816).
on_load_sxx_builtins_cafe(_3846):-public(on_exception/3,_3846).
on_load_sxx_builtins_cafe(_4254):-public(((=)/2,'$unify'/2),_4254).
on_load_sxx_builtins_cafe(_4296):-public(((\=)/2,'$not_unifiable'/2),_4296).
on_load_sxx_builtins_cafe(_4558):-public((var/1,atom/1,integer/1,long/1,float/1,atomic/1,compound/1,nonvar/1,number/1),_4558).
on_load_sxx_builtins_cafe(_4612):-public((java/1,java/2,closure/1),_4612).
on_load_sxx_builtins_cafe(_4654):-public((ground/1,callable/1),_4654).
on_load_sxx_builtins_cafe(_5184):-public(((==)/2,'$equality_of_term'/2),_5184).
on_load_sxx_builtins_cafe(_5226):-public(((\==)/2,'$inequality_of_term'/2),_5226).
on_load_sxx_builtins_cafe(_5268):-public(((@<)/2,'$before'/2),_5268).
on_load_sxx_builtins_cafe(_5310):-public(((@>)/2,'$after'/2),_5310).
on_load_sxx_builtins_cafe(_5352):-public(((@=<)/2,'$not_after'/2),_5352).
on_load_sxx_builtins_cafe(_5394):-public(((@>=)/2,'$not_before'/2),_5394).
on_load_sxx_builtins_cafe(_5436):-public((?= / 2,'$identical_or_cannot_unify'/2),_5436).
on_load_sxx_builtins_cafe(_5466):-public(compare/3,_5466).
on_load_sxx_builtins_cafe(_6166):-public((=..)/2,_6166).
on_load_sxx_builtins_cafe(_6196):-public(copy_term/2,_6196).
on_load_sxx_builtins_cafe(_6294):-public((is)/2,_6294).
on_load_sxx_builtins_cafe(_6360):-public(('$abs'/2,'$asin'/2,'$acos'/2,'$atan'/2),_6360).
on_load_sxx_builtins_cafe(_6426):-public(('$bitwise_conj'/3,'$bitwise_disj'/3,'$bitwise_exclusive_or'/3,'$bitwise_neg'/2),_6426).
on_load_sxx_builtins_cafe(_6468):-public(('$ceil'/2,'$cos'/2),_6468).
on_load_sxx_builtins_cafe(_6498):-public('$degrees'/2,_6498).
on_load_sxx_builtins_cafe(_6528):-public('$exp'/2,_6528).
on_load_sxx_builtins_cafe(_6606):-public(('$float'/2,'$float_integer_part'/2,'$float_fractional_part'/2,'$float_quotient'/3,'$floor'/2),_6606).
on_load_sxx_builtins_cafe(_6636):-public('$int_quotient'/3,_6636).
on_load_sxx_builtins_cafe(_6666):-public('$log'/2,_6666).
on_load_sxx_builtins_cafe(_6744):-public(('$max'/3,'$min'/3,'$minus'/3,'$mod'/3,'$multi'/3),_6744).
on_load_sxx_builtins_cafe(_6786):-public(('$plus'/3,'$pow'/3),_6786).
on_load_sxx_builtins_cafe(_6840):-public(('$radians'/2,'$rint'/2,'$round'/2),_6840).
on_load_sxx_builtins_cafe(_6918):-public(('$shift_left'/3,'$shift_right'/3,'$sign'/2,'$sin'/2,'$sqrt'/2),_6918).
on_load_sxx_builtins_cafe(_6960):-public(('$tan'/2,'$truncate'/2),_6960).
on_load_sxx_builtins_cafe(_8344):-public(((=:=)/2,'$arith_equal'/2),_8344).
on_load_sxx_builtins_cafe(_8386):-public(((=\=)/2,'$arith_not_equal'/2),_8386).
on_load_sxx_builtins_cafe(_8428):-public(((<)/2,'$less_than'/2),_8428).
on_load_sxx_builtins_cafe(_8470):-public(((=<)/2,'$less_or_equal'/2),_8470).
on_load_sxx_builtins_cafe(_8512):-public(((>)/2,'$greater_than'/2),_8512).
on_load_sxx_builtins_cafe(_8554):-public(((>=)/2,'$greater_or_equal'/2),_8554).
on_load_sxx_builtins_cafe(_8992):-public(clause/2,_8992).
on_load_sxx_builtins_cafe(_9022):-public((initialization)/2,_9022).
on_load_sxx_builtins_cafe(_9052):-public('$new_indexing_hash'/3,_9052).
on_load_sxx_builtins_cafe(_10746):-public(assert/1,_10746).
on_load_sxx_builtins_cafe(_10776):-public(assertz/1,_10776).
on_load_sxx_builtins_cafe(_10806):-public(asserta/1,_10806).
on_load_sxx_builtins_cafe(_10836):-public(retract/1,_10836).
on_load_sxx_builtins_cafe(_10866):-public(abolish/1,_10866).
on_load_sxx_builtins_cafe(_10896):-public(retractall/1,_10896).
on_load_sxx_builtins_cafe(_15360):-public(findall/3,_15360).
on_load_sxx_builtins_cafe(_15390):-public(bagof/3,_15390).
on_load_sxx_builtins_cafe(_15420):-public(setof/3,_15420).
on_load_sxx_builtins_cafe(_17980):-public(open/3,_17980).
on_load_sxx_builtins_cafe(_18010):-public(close/1,_18010).
on_load_sxx_builtins_cafe(_18040):-public(flush_output/0,_18040).
on_load_sxx_builtins_cafe(_18070):-public(stream_property/2,_18070).
on_load_sxx_builtins_cafe(_18702):-public((get_char/1,get_code/1),_18702).
on_load_sxx_builtins_cafe(_18744):-public((peek_char/1,peek_code/1),_18744).
on_load_sxx_builtins_cafe(_18786):-public((put_char/1,put_code/1),_18786).
on_load_sxx_builtins_cafe(_18816):-public(nl/1,_18816).
on_load_sxx_builtins_cafe(_19116):-public((get0/1,get0/2),_19116).
on_load_sxx_builtins_cafe(_19146):-public(get/1,_19146).
on_load_sxx_builtins_cafe(_19188):-public((put/1,put/2),_19188).
on_load_sxx_builtins_cafe(_19218):-public(tab/1,_19218).
on_load_sxx_builtins_cafe(_19248):-public(skip/1,_19248).
on_load_sxx_builtins_cafe(_19570):-public((get_byte/1,peek_byte/1,put_byte/1),_19570).
on_load_sxx_builtins_cafe(_19726):-public((read/1,read/2),_19726).
on_load_sxx_builtins_cafe(_19768):-public((read_with_variables/2,read_with_variables/3),_19768).
on_load_sxx_builtins_cafe(_19798):-public(read_line/1,_19798).
on_load_sxx_builtins_cafe(_19828):-dynamic('$tokens'/1,_19828).
on_load_sxx_builtins_cafe(_25876):-public((write/1,write/2),_25876).
on_load_sxx_builtins_cafe(_25918):-public((writeq/1,writeq/2),_25918).
on_load_sxx_builtins_cafe(_25960):-public((write_canonical/1,write_canonical/2),_25960).
on_load_sxx_builtins_cafe(_26002):-public((write_term/2,write_term/3),_26002).
on_load_sxx_builtins_cafe(_29940):-public(op/3,_29940).
on_load_sxx_builtins_cafe(_29970):-public(current_op/3,_29970).
on_load_sxx_builtins_cafe(_30000):-dynamic('$current_operator'/3,_30000).
on_load_sxx_builtins_cafe(_32632):-public((\+)/1,_32632).
on_load_sxx_builtins_cafe(_32662):-public(once/1,_32662).
on_load_sxx_builtins_cafe(_32692):-public(repeat/0,_32692).
on_load_sxx_builtins_cafe(_32860):-public(sub_atom/5,_32860).
on_load_sxx_builtins_cafe(_32890):-public(name/2,_32890).
on_load_sxx_builtins_cafe(_32920):-public(regex_matches/3,_32920).
on_load_sxx_builtins_cafe(_32950):-public(regex_matches/2,_32950).
on_load_sxx_builtins_cafe(_33550):-public(set_prolog_flag/2,_33550).
on_load_sxx_builtins_cafe(_33580):-public(current_prolog_flag/2,_33580).
on_load_sxx_builtins_cafe(_34564):-public(halt/0,_34564).
on_load_sxx_builtins_cafe(_34594):-public(abort/0,_34594).
on_load_sxx_builtins_cafe(_34684):-public(('C'/3,expand_term/2),_34684).
on_load_sxx_builtins_cafe(_36342):-public(new_hash/1,_36342).
on_load_sxx_builtins_cafe(_36372):-public(hash_map/2,_36372).
on_load_sxx_builtins_cafe(_36402):-public(hash_exists/1,_36402).
on_load_sxx_builtins_cafe(_36658):-public(java_constructor/2,_36658).
on_load_sxx_builtins_cafe(_36688):-public(java_declared_constructor/2,_36688).
on_load_sxx_builtins_cafe(_36718):-public(java_method/3,_36718).
on_load_sxx_builtins_cafe(_36748):-public(java_declared_method/3,_36748).
on_load_sxx_builtins_cafe(_36778):-public(java_get_field/3,_36778).
on_load_sxx_builtins_cafe(_36808):-public(java_get_declared_field/3,_36808).
on_load_sxx_builtins_cafe(_36838):-public(java_set_field/3,_36838).
on_load_sxx_builtins_cafe(_36868):-public(java_set_declared_field/3,_36868).
on_load_sxx_builtins_cafe(_36898):-public(synchronized/2,_36898).
on_load_sxx_builtins_cafe(_37636):-op(1170,xfx,:-,_37636).
on_load_sxx_builtins_cafe(_37664):-op(1170,xfx,-->,_37664).
on_load_sxx_builtins_cafe(_37692):-op(1170,fx,:-,_37692).
on_load_sxx_builtins_cafe(_37720):-op(1170,fx,?-,_37720).
on_load_sxx_builtins_cafe(_37748):-op(1150,fx,package,_37748).
on_load_sxx_builtins_cafe(_37776):-op(1150,fx,import,_37776).
on_load_sxx_builtins_cafe(_37804):-op(1150,fx,public,_37804).
on_load_sxx_builtins_cafe(_37832):-op(1150,fx,dynamic,_37832).
on_load_sxx_builtins_cafe(_37860):-op(1150,fx,meta_predicate,_37860).
on_load_sxx_builtins_cafe(_37888):-op(1150,fx,mode,_37888).
on_load_sxx_builtins_cafe(_37916):-op(1150,fx,multifile,_37916).
on_load_sxx_builtins_cafe(_37944):-op(1150,fx,block,_37944).
on_load_sxx_builtins_cafe(_37978):-public(cafeteria/0,_37978).
on_load_sxx_builtins_cafe(_38008):-public(consult/1,_38008).
on_load_sxx_builtins_cafe(_38038):-public(consult_stream/1,_38038).
on_load_sxx_builtins_cafe(_38080):-public((trace/0,notrace/0),_38080).
on_load_sxx_builtins_cafe(_38122):-public((debug/0,nodebug/0),_38122).
on_load_sxx_builtins_cafe(_38152):-public(leash/1,_38152).
on_load_sxx_builtins_cafe(_38206):-public((spy/1,nospy/1,nospyall/0),_38206).
on_load_sxx_builtins_cafe(_38236):-public(listing/0,_38236).
on_load_sxx_builtins_cafe(_38266):-public(listing/1,_38266).
on_load_sxx_builtins_cafe(_38296):-dynamic('$current_leash'/1,_38296).
on_load_sxx_builtins_cafe(_38326):-dynamic('$current_spypoint'/3,_38326).
on_load_sxx_builtins_cafe(_38356):-dynamic('$leap_flag'/1,_38356).
on_load_sxx_builtins_cafe(_38386):-dynamic('$consulted_file'/1,_38386).
on_load_sxx_builtins_cafe(_38416):-dynamic('$consulted_import'/2,_38416).
on_load_sxx_builtins_cafe(_38446):-dynamic('$consulted_package'/1,_38446).
on_load_sxx_builtins_cafe(_38476):-dynamic('$consulted_predicate'/3,_38476).
on_load_sxx_builtins_cafe(_44618):-public(reverse/2,_44618).
on_load_sxx_builtins_cafe(_44648):-public(length/2,_44648).
on_load_sxx_builtins_cafe(_44678):-public(numbervars/3,_44678).
on_load_sxx_builtins_cafe(_44708):-public(statistics/2,_44708).
on_load_sxx_builtins_cafe(_66258):-public(with_mutex/2,_66258).


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

package(_410,_420):-call(_420).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_true_0 : public Code {

/*

true(_730):-call(_730).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_otherwise_0 : public Code {

/*

otherwise(_750):-call(_750).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_fail_0 : public Code {

/*

fail(_768):-fail(_768).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_false_0 : public Code {

/*

false(_790):-fail(_790).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_cut_1 : public Code {

/*

cut(1,_814):-call(_814).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_system_carrot_2 : public Code {

/*

^(_828,_830,_838):-call(_830,_838).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_system_comma_2 : public Code {

/*

','(_860,_862,_870):-call(_860,call(_862,_870)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_or_2 : public Code {

/*

or(_898,_900,_914):- \=(_898,(_904->_906),call(_898,_914)).
or(_944,_946,_960):- \=(_946,(_950->_952),call(_946,_960)).
or((_1036->_1038),_1040,_1048):-call(_1036,cut(1,call(_1038,_1048))).
or((_1084->_1086),_1088,_1096):-call(_1088,_1096).


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

->(_990,_992,_1000):-call(_990,cut(1,call(_992,_1000))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_call_1 : public Code {

/*

call(_1118,_1128):-'$get_current_B'(_1120,'$meta_call'(_1118,user,_1120,0,interpret,_1128)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$meta_call_5 : public Code {

/*

'$meta_call'(_1162,_1164,_1166,_1168,_1170,_1182):-var(_1162,cut(1,illarg(var,call(_1162),1,_1182))).
'$meta_call'(_1226,_1228,_1230,_1232,_1234,_1242):-closure(_1226,cut(1,'$call_closure'(_1226,_1242))).
'$meta_call'(true,_1282,_1284,_1286,_1288,_1296):-cut(1,_1296).
'$meta_call'(trace,_1324,_1326,_1328,_1330,_1338):-cut(1,trace(_1338)).
'$meta_call'(debug,_1370,_1372,_1374,_1376,_1384):-cut(1,debug(_1384)).
'$meta_call'(notrace,_1416,_1418,_1420,_1422,_1430):-cut(1,notrace(_1430)).
'$meta_call'(nodebug,_1462,_1464,_1466,_1468,_1476):-cut(1,nodebug(_1476)).
'$meta_call'(spy(_1510),_1512,_1514,_1516,_1518,_1526):-cut(1,spy(_1510,_1526)).
'$meta_call'(nospy(_1562),_1564,_1566,_1568,_1570,_1578):-cut(1,nospy(_1562,_1578)).
'$meta_call'(nospyall,_1612,_1614,_1616,_1618,_1626):-cut(1,nospyall(_1626)).
'$meta_call'(leash(_1660),_1662,_1664,_1666,_1668,_1676):-cut(1,leash(_1660,_1676)).
'$meta_call'([_1712|_1714],_1716,_1718,_1720,_1722,_1736):-cut(1,consult([_1712|_1714],_1736)).
'$meta_call'(_1772^_1774,_1776,_1778,_1780,_1782,_1790):-cut(1,'$meta_call'(_1774,_1776,_1778,_1780,_1782,_1790)).
'$meta_call'(_1834:_1836,_1838,_1840,_1842,_1844,_1852):-cut(1,'$meta_call'(_1836,_1834,_1840,_1842,_1844,_1852)).
'$meta_call'(!,_1894,no,_1896,_1898,_1912):-cut(1,illarg(context(if,cut),!,0,_1912)).
'$meta_call'(!,_1950,_1952,_1954,_1956,_1964):-cut(1,'$cut'(_1952,_1964)).
'$meta_call'((_2000,_2002),_2004,_2006,_2008,_2010,_2018):-cut(1,'$meta_call'(_2000,_2004,_2006,_2008,_2010,'$meta_call'(_2002,_2004,_2006,_2008,_2010,_2018))).
'$meta_call'((_2076->_2078;_2084),_2086,_2088,_2090,_2092,_2142):-cut(1,or(('$meta_call'(_2076,_2086,no,_2090,_2092)->'$meta_call'(_2078,_2086,_2088,_2090,_2092)),'$meta_call'(_2084,_2086,_2088,_2090,_2092),_2142)).
'$meta_call'((_2180->_2182),_2184,_2186,_2188,_2190,_2222):-cut(1,->('$meta_call'(_2180,_2184,no,_2188,_2190),'$meta_call'(_2182,_2184,_2186,_2188,_2190),_2222)).
'$meta_call'((_2260;_2262),_2264,_2266,_2268,_2270,_2302):-cut(1,or('$meta_call'(_2260,_2264,_2266,_2268,_2270),'$meta_call'(_2262,_2264,_2266,_2268,_2270),_2302)).
'$meta_call'(\+_2340,_2342,_2344,_2346,_2348,_2368):-cut(1,not('$meta_call'(_2340,_2342,no,_2346,_2348),_2368)).
'$meta_call'(findall(_2404,_2406,_2408),_2410,_2412,_2414,_2416,_2436):-cut(1,findall(_2404,'$meta_call'(_2406,_2410,_2412,_2414,_2416),_2408,_2436)).
'$meta_call'(bagof(_2476,_2478,_2480),_2482,_2484,_2486,_2488,_2508):-cut(1,bagof(_2476,'$meta_call'(_2478,_2482,_2484,_2486,_2488),_2480,_2508)).
'$meta_call'(setof(_2548,_2550,_2552),_2554,_2556,_2558,_2560,_2580):-cut(1,setof(_2548,'$meta_call'(_2550,_2554,_2556,_2558,_2560),_2552,_2580)).
'$meta_call'(once(_2620),_2622,_2624,_2626,_2628,_2648):-cut(1,once('$meta_call'(_2620,_2622,_2624,_2626,_2628),_2648)).
'$meta_call'(on_exception(_2684,_2686,_2688),_2690,_2692,_2694,_2696,_2728):-cut(1,on_exception(_2684,'$meta_call'(_2686,_2690,_2692,_2694,_2696),'$meta_call'(_2688,_2690,_2692,_2694,_2696),_2728)).
'$meta_call'(catch(_2768,_2770,_2772),_2774,_2776,_2778,_2780,_2812):-cut(1,catch('$meta_call'(_2768,_2774,_2776,_2778,_2780),_2770,'$meta_call'(_2772,_2774,_2776,_2778,_2780),_2812)).
'$meta_call'(synchronized(_2852,_2854),_2856,_2858,_2860,_2862,_2882):-cut(1,synchronized(_2852,'$meta_call'(_2854,_2856,_2858,_2860,_2862),_2882)).
'$meta_call'(clause(_2920,_2922),_2924,_2926,_2928,_2930,_2944):-cut(1,clause(_2924:_2920,_2922,_2944)).
'$meta_call'(assert(_2982),_2984,_2986,_2988,_2990,_3004):-cut(1,assertz(_2984:_2982,_3004)).
'$meta_call'(assertz(_3040),_3042,_3044,_3046,_3048,_3062):-cut(1,assertz(_3042:_3040,_3062)).
'$meta_call'(asserta(_3098),_3100,_3102,_3104,_3106,_3120):-cut(1,asserta(_3100:_3098,_3120)).
'$meta_call'(retract(_3156),_3158,_3160,_3162,_3164,_3178):-cut(1,retract(_3158:_3156,_3178)).
'$meta_call'(abolish(_3214),_3216,_3218,_3220,_3222,_3236):-cut(1,abolish(_3216:_3214,_3236)).
'$meta_call'(retractall(_3272),_3274,_3276,_3278,_3280,_3294):-cut(1,retractall(_3274:_3272,_3294)).
'$meta_call'(_3328,_3330,_3332,_3334,_3336,_3344):-atom(_3330,callable(_3328,cut(1,'$meta_call'(_3336,_3334,_3330,_3328,_3344)))).
'$meta_call'(_3396,_3398,_3400,_3402,_3404,_3426):-illarg(type(callable),call(_3398:_3396),1,_3426).


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

'$meta_call'(trace,_3458,_3460,_3462,_3480):-cut(1,functor(_3462,_3464,_3466,'$trace_goal'(_3462,_3460,_3464/_3466,_3458,_3480))).
'$meta_call'(interpret,_3528,_3530,_3532,_3550):-functor(_3532,_3534,_3536,'$call_internal'(_3532,_3530,_3534/_3536,_3528,interpret,_3550)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$call_internal_5 : public Code {

/*

'$call_internal'(_3594,_3596,_3598,_3600,_3602,_3628):-'$new_internal_database'(_3596,hash_contains_key(_3596,_3598,cut(1,'$get_current_B'(_3604,is(_3612,_3600+1,clause(_3596:_3594,_3620,'$meta_call'(_3620,_3596,_3604,_3612,_3602,_3628))))))).
'$call_internal'(_3706,_3708,_3710,_3712,_3714,_3722):-'$call'(_3708,_3706,_3722).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_catch_3 : public Code {

/*

catch(_3824,_3826,_3828,_3836):-on_exception(_3826,_3824,_3828,_3836).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_throw_1 : public Code {

/*

throw(_3864,_3872):-raise_exception(_3864,_3872).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_on_exception_3 : public Code {

/*

on_exception(_3892,_3894,_3896,_3904):-callable(_3894,cut(1,'$on_exception'(_3892,_3894,_3896,_3904))).
on_exception(_3944,_3946,_3948,_3968):-illarg(type(callable),on_exception(_3944,_3946,_3948),2,_3968).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$on_exception_3 : public Code {

/*

'$on_exception'(_3996,_3998,_4000,_4010):-'$set_exception'('$none','$begin_exception'(_4002,call(_3998,'$end_exception'(_4002,_4010)))).
'$on_exception'(_4052,_4054,_4056,_4066):-'$get_exception'(_4058,\==(_4058,'$none','$catch_and_throw'(_4058,_4052,_4056,_4066))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$catch_and_throw_3 : public Code {

/*

'$catch_and_throw'(_4108,_4108,_4110,_4118):-cut(1,'$set_exception'('$none',call(_4110,_4118))).
'$catch_and_throw'(_4154,_4156,_4158,_4166):-raise_exception(_4154,_4166).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_unify_2 : public Code {

/*

unify(_4276,_4274,_4284):-unify(_4276,_4274,_4284).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$unify_2 : public Code {

/*

'$unify'(_4308,_4310,_4318):-'$unify'(_4308,_4310,_4318).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_system_notequals_2 : public Code {

/*

\=(_4342,_4344,_4352):- \=(_4342,_4344,_4352).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$not_unifiable_2 : public Code {

/*

'$not_unifiable'(_4376,_4378,_4386):-'$not_unifiable'(_4376,_4378,_4386).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_var_1 : public Code {

/*

var(_4632,_4640):-var(_4632,_4640).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_atom_1 : public Code {

/*

atom(_4660,_4668):-atom(_4660,_4668).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_integer_1 : public Code {

/*

integer(_4688,_4696):-integer(_4688,_4696).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_long_1 : public Code {

/*

long(_4716,_4724):-long(_4716,_4724).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_float_1 : public Code {

/*

float(_4744,_4752):-float(_4744,_4752).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_atomic_1 : public Code {

/*

atomic(_4772,_4780):-atomic(_4772,_4780).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_nonvar_1 : public Code {

/*

nonvar(_4800,_4808):-nonvar(_4800,_4808).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_number_1 : public Code {

/*

number(_4828,_4836):-number(_4828,_4836).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_1 : public Code {

/*

java(_4856,_4864):-java(_4856,_4864).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_2 : public Code {

/*

java(_4884,_4886,_4894):-java(_4884,_4886,_4894).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_closure_1 : public Code {

/*

closure(_4918,_4926):-closure(_4918,_4926).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_ground_1 : public Code {

/*

ground(_4946,_4954):-ground(_4946,_4954).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_compound_1 : public Code {

/*

compound(_4974,_4986):-nonvar(_4974,functor(_4974,_4976,_4978,smallerthan(0,_4978,_4986))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_callable_1 : public Code {

/*

callable(_5024,_5032):-atom(_5024,cut(1,_5032)).
callable(_5058,_5066):-compound(_5058,cut(1,_5066)).
callable(_5092,_5100):-closure(_5092,_5100).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_termequal_2 : public Code {

/*

termequal(_5444,_5446,_5454):-termequal(_5444,_5446,_5454).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$equality_of_term_2 : public Code {

/*

'$equality_of_term'(_5478,_5480,_5488):-'$equality_of_term'(_5478,_5480,_5488).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_strict_noteq_2 : public Code {

/*

\==(_5512,_5514,_5522):- \==(_5512,_5514,_5522).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$inequality_of_term_2 : public Code {

/*

'$inequality_of_term'(_5546,_5548,_5556):-'$inequality_of_term'(_5546,_5548,_5556).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_termsmallerthan_2 : public Code {

/*

termsmallerthan(_5580,_5582,_5590):-termsmallerthan(_5580,_5582,_5590).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$before_2 : public Code {

/*

'$before'(_5614,_5616,_5624):-'$before'(_5614,_5616,_5624).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_termgreaterthan_2 : public Code {

/*

termgreaterthan(_5648,_5650,_5658):-termgreaterthan(_5648,_5650,_5658).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$after_2 : public Code {

/*

'$after'(_5682,_5684,_5692):-'$after'(_5682,_5684,_5692).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_termsmallerequal_2 : public Code {

/*

termsmallerequal(_5716,_5718,_5726):-termsmallerequal(_5716,_5718,_5726).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$not_after_2 : public Code {

/*

'$not_after'(_5750,_5752,_5760):-'$not_after'(_5750,_5752,_5760).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_termgreaterequal_2 : public Code {

/*

termgreaterequal(_5784,_5786,_5794):-termgreaterequal(_5784,_5786,_5794).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$not_before_2 : public Code {

/*

'$not_before'(_5818,_5820,_5828):-'$not_before'(_5818,_5820,_5828).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym__c63_system_equals_2 : public Code {

/*

?=(_5852,_5854,_5862):- ?=(_5852,_5854,_5862).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$identical_or_cannot_unify_2 : public Code {

/*

'$identical_or_cannot_unify'(_5886,_5888,_5896):-'$identical_or_cannot_unify'(_5886,_5888,_5896).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_compare_3 : public Code {

/*

compare(_5920,_5922,_5924,_5934):-'$compare0'(_5926,_5922,_5924,'$map_compare_op'(_5926,_5920,_5934)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$map_compare_op_2 : public Code {

/*

'$map_compare_op'(_5970,_5972,_5980):-arithequal(0,_5970,cut(1,unify(=,_5972,_5980))).
'$map_compare_op'(_6018,_6020,_6028):-smallerthan(_6018,0,cut(1,unify(<,_6020,_6028))).
'$map_compare_op'(_6066,_6068,_6076):-smallerthan(0,_6066,cut(1,unify(>,_6068,_6076))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_system_univ_2 : public Code {

/*

=..(_6174,_6176,_6184):- =..(_6174,_6176,_6184).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_copy_term_2 : public Code {

/*

copy_term(_6208,_6210,_6218):-copy_term(_6208,_6210,_6218).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_is_2 : public Code {

/*

is(_6938,_6940,_6948):-is(_6938,_6940,_6948).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$abs_2 : public Code {

/*

'$abs'(_6972,_6974,_6982):-'$abs'(_6972,_6974,_6982).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$asin_2 : public Code {

/*

'$asin'(_7006,_7008,_7016):-'$asin'(_7006,_7008,_7016).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$acos_2 : public Code {

/*

'$acos'(_7040,_7042,_7050):-'$acos'(_7040,_7042,_7050).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$atan_2 : public Code {

/*

'$atan'(_7074,_7076,_7084):-'$atan'(_7074,_7076,_7084).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bitwise_conj_3 : public Code {

/*

'$bitwise_conj'(_7108,_7110,_7112,_7120):-'$bitwise_conj'(_7108,_7110,_7112,_7120).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bitwise_disj_3 : public Code {

/*

'$bitwise_disj'(_7148,_7150,_7152,_7160):-'$bitwise_disj'(_7148,_7150,_7152,_7160).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bitwise_exclusive_or_3 : public Code {

/*

'$bitwise_exclusive_or'(_7188,_7190,_7192,_7200):-'$bitwise_exclusive_or'(_7188,_7190,_7192,_7200).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bitwise_neg_2 : public Code {

/*

'$bitwise_neg'(_7228,_7230,_7238):-'$bitwise_neg'(_7228,_7230,_7238).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$ceil_2 : public Code {

/*

'$ceil'(_7262,_7264,_7272):-'$ceil'(_7262,_7264,_7272).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$cos_2 : public Code {

/*

'$cos'(_7296,_7298,_7306):-'$cos'(_7296,_7298,_7306).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$degrees_2 : public Code {

/*

'$degrees'(_7330,_7332,_7340):-'$degrees'(_7330,_7332,_7340).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$exp_2 : public Code {

/*

'$exp'(_7364,_7366,_7374):-'$exp'(_7364,_7366,_7374).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$float_2 : public Code {

/*

'$float'(_7398,_7400,_7408):-'$float'(_7398,_7400,_7408).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$float_integer_part_2 : public Code {

/*

'$float_integer_part'(_7432,_7434,_7442):-'$float_integer_part'(_7432,_7434,_7442).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$float_fractional_part_2 : public Code {

/*

'$float_fractional_part'(_7466,_7468,_7476):-'$float_fractional_part'(_7466,_7468,_7476).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$float_quotient_3 : public Code {

/*

'$float_quotient'(_7500,_7502,_7504,_7512):-'$float_quotient'(_7500,_7502,_7504,_7512).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$floor_2 : public Code {

/*

'$floor'(_7540,_7542,_7550):-'$floor'(_7540,_7542,_7550).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$int_quotient_3 : public Code {

/*

'$int_quotient'(_7574,_7576,_7578,_7586):-'$int_quotient'(_7574,_7576,_7578,_7586).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$log_2 : public Code {

/*

'$log'(_7614,_7616,_7624):-'$log'(_7614,_7616,_7624).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$max_3 : public Code {

/*

'$max'(_7648,_7650,_7652,_7660):-'$max'(_7648,_7650,_7652,_7660).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$min_3 : public Code {

/*

'$min'(_7688,_7690,_7692,_7700):-'$min'(_7688,_7690,_7692,_7700).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$minus_3 : public Code {

/*

'$minus'(_7728,_7730,_7732,_7740):-'$minus'(_7728,_7730,_7732,_7740).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$mod_3 : public Code {

/*

'$mod'(_7768,_7770,_7772,_7780):-'$mod'(_7768,_7770,_7772,_7780).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$multi_3 : public Code {

/*

'$multi'(_7808,_7810,_7812,_7820):-'$multi'(_7808,_7810,_7812,_7820).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$plus_3 : public Code {

/*

'$plus'(_7848,_7850,_7852,_7860):-'$plus'(_7848,_7850,_7852,_7860).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$pow_3 : public Code {

/*

'$pow'(_7888,_7890,_7892,_7900):-'$pow'(_7888,_7890,_7892,_7900).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$radians_2 : public Code {

/*

'$radians'(_7928,_7930,_7938):-'$radians'(_7928,_7930,_7938).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$rint_2 : public Code {

/*

'$rint'(_7962,_7964,_7972):-'$rint'(_7962,_7964,_7972).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$round_2 : public Code {

/*

'$round'(_7996,_7998,_8006):-'$round'(_7996,_7998,_8006).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$shift_left_3 : public Code {

/*

'$shift_left'(_8030,_8032,_8034,_8042):-'$shift_left'(_8030,_8032,_8034,_8042).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$shift_right_3 : public Code {

/*

'$shift_right'(_8070,_8072,_8074,_8082):-'$shift_right'(_8070,_8072,_8074,_8082).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$sign_2 : public Code {

/*

'$sign'(_8110,_8112,_8120):-'$sign'(_8110,_8112,_8120).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$sin_2 : public Code {

/*

'$sin'(_8144,_8146,_8154):-'$sin'(_8144,_8146,_8154).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$sqrt_2 : public Code {

/*

'$sqrt'(_8178,_8180,_8188):-'$sqrt'(_8178,_8180,_8188).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$tan_2 : public Code {

/*

'$tan'(_8212,_8214,_8222):-'$tan'(_8212,_8214,_8222).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$truncate_2 : public Code {

/*

'$truncate'(_8246,_8248,_8256):-'$truncate'(_8246,_8248,_8256).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_arithequal_2 : public Code {

/*

arithequal(_8534,_8532,_8542):-arithequal(_8534,_8532,_8542).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$arith_equal_2 : public Code {

/*

'$arith_equal'(_8566,_8568,_8576):-'$arith_equal'(_8566,_8568,_8576).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym__c61_system_notequals_2 : public Code {

/*

=\=(_8600,_8602,_8610):- =\=(_8600,_8602,_8610).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$arith_not_equal_2 : public Code {

/*

'$arith_not_equal'(_8634,_8636,_8644):-'$arith_not_equal'(_8634,_8636,_8644).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_smallerthan_2 : public Code {

/*

smallerthan(_8668,_8670,_8678):-smallerthan(_8668,_8670,_8678).
smallerthan(_8806,_8804,_8814):-smallerthan(_8806,_8804,_8814).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$less_than_2 : public Code {

/*

'$less_than'(_8702,_8704,_8712):-'$less_than'(_8702,_8704,_8712).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_smallerorequal_2 : public Code {

/*

smallerorequal(_8736,_8738,_8746):-smallerorequal(_8736,_8738,_8746).
smallerorequal(_8874,_8872,_8882):-smallerorequal(_8874,_8872,_8882).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$less_or_equal_2 : public Code {

/*

'$less_or_equal'(_8770,_8772,_8780):-'$less_or_equal'(_8770,_8772,_8780).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$greater_than_2 : public Code {

/*

'$greater_than'(_8838,_8840,_8848):-'$greater_than'(_8838,_8840,_8848).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$greater_or_equal_2 : public Code {

/*

'$greater_or_equal'(_8906,_8908,_8916):-'$greater_or_equal'(_8906,_8908,_8916).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_clause_2 : public Code {

/*

clause(_9030,_9032,_9076):-'$head_to_term'(_9030,_9046,_9036:_9038,clause(_9030,_9032),'$new_internal_database'(_9036,'$check_procedure_permission'(_9036:_9038,access,private_procedure,clause(_9030,_9032),'$clause_internal'(_9036,_9038,_9046,_9060,_9062,copy_term(_9060,(_9046:-_9032),_9076))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$head_to_term_4 : public Code {

/*

'$head_to_term'(_9156,_9158,_9152:_9146/_9148,_9160,_9168):-'$head_to_term'(_9156,_9158,user,_9152,_9160,functor(_9158,_9146,_9148,_9168)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$head_to_term_5 : public Code {

/*

'$head_to_term'(_9212,_9214,_9216,_9218,_9220,_9228):-var(_9212,cut(1,illarg(var,_9220,1,_9228))).
'$head_to_term'(_9274:_9276,_9278,_9280,_9282,_9284,_9292):-cut(1,'$head_to_term'(_9276,_9278,_9274,_9282,_9284,_9292)).
'$head_to_term'(_9334,_9334,_9336,_9336,_9338,_9346):-callable(_9334,atom(_9336,cut(1,_9346))).
'$head_to_term'(_9386,_9388,_9390,_9392,_9394,_9406):-illarg(type(callable),_9394,1,_9406).


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

'$new_internal_database'(_9438,_9448):-atom(_9438,'$get_hash_manager'(_9440,'$new_internal_database'(_9440,_9438,_9448))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$new_internal_database_2 : public Code {

/*

'$new_internal_database'(_9482,_9484,_9492):-hash_contains_key(_9482,_9484,cut(1,_9492)).
'$new_internal_database'(_9522,_9524,_9544):-new_hash(_9536,[alias(_9524)],'$init_internal_database'(_9524,_9544)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$init_internal_database_1 : public Code {

/*

'$init_internal_database'(_9574,_9592):-'$compiled_predicate'(_9574,'$init',0,findall(_9582,_9574:'$init',_9584,cut(1,_9592))).
'$init_internal_database'(_9632,_9642):-call(_9642).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$defined_internal_database_1 : public Code {

/*

'$defined_internal_database'(_9656,_9666):-atom(_9656,'$get_hash_manager'(_9658,hash_contains_key(_9658,_9656,_9666))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$clause_internal_5 : public Code {

/*

'$clause_internal'(_9700,_9702,_9704,_9706,_9708,_9720):-hash_contains_key(_9700,_9702,'$get_indices'(_9700,_9702,_9704,_9710,'$get_instances'(_9710,_9712,'$clause_internal0'(_9712,_9706,_9708,_9720)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$clause_internal0_3 : public Code {

/*

'$clause_internal0'([],_9780,_9782,_9790):-fail(_9790).
'$clause_internal0'([(_9814,_9816)],_9814,_9816,_9830):-cut(1,_9830).
'$clause_internal0'(_9854,_9856,_9858,_9872):-'$builtin_member'((_9856,_9858),_9854,_9872).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$get_indices_4 : public Code {

/*

'$get_indices'(_9898,_9900,_9902,_9904,_9944):-'$new_indexing_hash'(_9898,_9900,_9906,'$calc_indexing_key'(_9902,_9908,or((hash_contains_key(_9906,_9908)->hash_get(_9906,_9908,_9904)),hash_get(_9906,var,_9904),_9944))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$new_indexing_hash_3 : public Code {

/*

'$new_indexing_hash'(_9990,_9992,_9994,_10002):-hash_contains_key(_9990,_9992,cut(1,hash_get(_9990,_9992,_9994,_10002))).
'$new_indexing_hash'(_10044,_10046,_10048,_10056):-new_hash(_10048,hash_put(_10048,all,[],hash_put(_10048,var,[],hash_put(_10048,lis,[],hash_put(_10048,str,[],hash_put(_10044,_10046,_10048,_10056)))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$calc_indexing_key_2 : public Code {

/*

'$calc_indexing_key'(_10130,all,_10138):-atom(_10130,cut(1,_10138)).
'$calc_indexing_key'(_10166,_10168,_10178):-arg(1,_10166,_10170,'$calc_indexing_key0'(_10170,_10168,_10178)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$calc_indexing_key0_2 : public Code {

/*

'$calc_indexing_key0'(_10212,all,_10220):-var(_10212,cut(1,_10220)).
'$calc_indexing_key0'(_10248,lis,_10262):-unify([_10252|_10254],_10248,cut(1,_10262)).
'$calc_indexing_key0'(_10292,str,_10300):-compound(_10292,cut(1,_10300)).
'$calc_indexing_key0'(_10328,_10330,_10338):-ground(_10328,cut(1,'$term_hash'(_10328,_10330,_10338))).
'$calc_indexing_key0'(_10374,_10376,_10394):-illarg(type(term),'$calc_indexing_key0'(_10374,_10376),1,_10394).


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

'$check_procedure_permission'(_10428:_10422/_10424,_10432,_10434,_10436,_10450):-hash_contains_key(_10428,_10422/_10424,cut(1,_10450)).
'$check_procedure_permission'(_10492:_10486/_10488,_10496,_10498,_10500,_10532):-'$compiled_predicate_or_builtin'(_10492,_10486,_10488,cut(1,illarg(permission(_10496,_10498,_10492:_10486/_10488,_10522),_10500,_10524,_10532))).
'$check_procedure_permission'(_10578,_10580,_10582,_10584,_10594):-call(_10594).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_initialization_2 : public Code {

/*

initialization([],_10614,_10622):-cut(1,once(_10614,_10622)).
initialization([_10652|_10654],_10656,_10664):-'$new_internal_database'(_10652,initialization(_10654,_10656,_10664)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_assert_1 : public Code {

/*

assert(_10874,_10882):-assertz(_10874,_10882).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_assertz_1 : public Code {

/*

assertz(_10902,_10936):-'$term_to_clause'(_10902,_10914,_10906:_10908,assertz(_10902),'$new_internal_database'(_10906,'$check_procedure_permission'(_10906:_10908,modify,static_procedure,assertz(_10902),copy_term(_10914,_10926,'$insert'(_10926,_10928,'$update_indexing'(_10906,_10908,_10914,_10928,z,fail(_10936))))))).
assertz(_11014,_11024):-call(_11024).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_asserta_1 : public Code {

/*

asserta(_11038,_11072):-'$term_to_clause'(_11038,_11050,_11042:_11044,asserta(_11038),'$new_internal_database'(_11042,'$check_procedure_permission'(_11042:_11044,modify,static_procedure,asserta(_11038),copy_term(_11050,_11062,'$insert'(_11062,_11064,'$update_indexing'(_11042,_11044,_11050,_11064,a,fail(_11072))))))).
asserta(_11150,_11160):-call(_11160).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_abolish_1 : public Code {

/*

abolish(_11174,_11206):-'$term_to_predicateindicator'(_11174,_11178:_11180,abolish(_11174),'$new_internal_database'(_11178,'$check_procedure_permission'(_11178:_11180,modify,static_procedure,abolish(_11174),'$new_indexing_hash'(_11178,_11180,_11196,hash_get(_11196,all,_11198,'$erase_all'(_11198,hash_remove(_11178,_11180,fail(_11206)))))))).
abolish(_11286,_11296):-call(_11296).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_retract_1 : public Code {

/*

retract(_11310,_11350):-'$clause_to_term'(_11310,_11322,_11314:_11316,retract(_11310),'$new_internal_database'(_11314,'$check_procedure_permission'(_11314:_11316,access,static_procedure,retract(_11310),unify((_11336:-_11338),_11322,'$clause_internal'(_11314,_11316,_11336,_11340,_11342,copy_term(_11340,_11322,'$erase'(_11342,'$rehash_indexing'(_11314,_11316,_11342,_11350)))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_retractall_1 : public Code {

/*

retractall(_11440,_11480):-'$head_to_term'(_11440,_11452,_11444:_11446,retractall(_11440),'$new_internal_database'(_11444,'$check_procedure_permission'(_11444:_11446,access,static_procedure,retractall(_11440),'$clause_internal'(_11444,_11446,_11452,_11464,_11466,copy_term(_11464,(_11452:-_11472),'$erase'(_11466,'$rehash_indexing'(_11444,_11446,_11466,fail(_11480)))))))).
retractall(_11566,_11576):-call(_11576).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_to_clause_4 : public Code {

/*

'$term_to_clause'(_11602,_11604,_11598:_11592/_11594,_11606,_11620):-'$term_to_clause'(_11602,_11604,user,_11598,_11606,unify((_11610:-_11612),_11604,functor(_11610,_11592,_11594,_11620))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_to_clause_5 : public Code {

/*

'$term_to_clause'(_11672,_11674,_11676,_11678,_11680,_11688):-var(_11672,cut(1,illarg(var,_11680,1,_11688))).
'$term_to_clause'(_11732,_11734,_11736,_11738,_11740,_11748):-var(_11736,cut(1,illarg(var,_11740,1,_11748))).
'$term_to_clause'(_11794:_11796,_11798,_11800,_11802,_11804,_11812):-cut(1,'$term_to_clause'(_11796,_11798,_11794,_11802,_11804,_11812)).
'$term_to_clause'(_11854,_11856,_11858,_11860,_11862,_11878):-not(atom(_11858),cut(1,illarg(type(atom),_11862,1,_11878))).
'$term_to_clause'((_11924:-_11926),(_11930:-_11932),_11934,_11934,_11936,_11944):-cut(1,'$term_to_head'(_11924,_11930,_11934,_11936,'$term_to_body'(_11926,_11932,_11934,_11936,_11944))).
'$term_to_clause'(_12002,(_11998:-true),_12004,_12004,_12006,_12014):-'$term_to_head'(_12002,_11998,_12004,_12006,_12014).


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

'$term_to_head'(_12048,_12048,_12050,_12052,_12060):-atom(_12048,cut(1,_12060)).
'$term_to_head'(_12092,_12092,_12094,_12096,_12104):-compound(_12092,cut(1,_12104)).
'$term_to_head'(_12136,_12138,_12140,_12142,_12154):-illarg(type(callable),_12142,1,_12154).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_to_body_4 : public Code {

/*

'$term_to_body'(_12184,_12186,_12188,_12190,_12198):-'$localize_body'(_12184,_12188,_12186,_12198).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$localize_body_3 : public Code {

/*

'$localize_body'(_12228,_12230,_12232,_12244):-var(_12228,cut(1,'$localize_body'(call(_12228),_12230,_12232,_12244))).
'$localize_body'(_12286:_12288,_12290,_12292,_12300):-cut(1,'$localize_body'(_12288,_12286,_12292,_12300)).
'$localize_body'((_12336,_12338),_12346,(_12342,_12344),_12354):-cut(1,'$localize_body'(_12336,_12346,_12342,'$localize_body'(_12338,_12346,_12344,_12354))).
'$localize_body'((_12400->_12402),_12410,(_12406->_12408),_12418):-cut(1,'$localize_body'(_12400,_12410,_12406,'$localize_body'(_12402,_12410,_12408,_12418))).
'$localize_body'((_12464;_12466),_12474,(_12470;_12472),_12482):-cut(1,'$localize_body'(_12464,_12474,_12470,'$localize_body'(_12466,_12474,_12472,_12482))).
'$localize_body'(_12526,_12528,_12530,_12558):-functor(_12526,_12532,_12534,'$builtin_meta_predicates'(_12532,_12534,_12536,cut(1,=..(_12526,[_12532|_12542],'$localize_args'(_12536,_12542,_12528,_12544,=..(_12530,[_12532|_12544],_12558)))))).
'$localize_body'(_12634,_12632,call(_12632:_12634),_12646):-var(_12632,cut(1,_12646)).
'$localize_body'(_12676,user,_12676,_12684):-cut(1,_12684).
'$localize_body'(_12708,_12710,_12708,_12718):-system_predicate(_12708,cut(1,_12718)).
'$localize_body'(_12752,_12750,_12750:_12752,_12762):-call(_12762).


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

'$localize_args'([],[],_12780,[],_12788):-cut(1,_12788).
'$localize_args'([:|_12818],[_12822|_12824],_12828,[_12828:_12822|_12836],_12860):-or(var(_12822),_12822\=_12844:_12846,cut(1,'$localize_args'(_12818,_12824,_12828,_12836,_12860))).
'$localize_args'([_12908|_12910],[_12914|_12916],_12924,[_12914|_12922],_12932):-'$localize_args'(_12910,_12916,_12924,_12922,_12932).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$builtin_meta_predicates_3 : public Code {

/*

'$builtin_meta_predicates'(^,2,[?,:],_12984):-call(_12984).
'$builtin_meta_predicates'(call,1,[:],_13016):-call(_13016).
'$builtin_meta_predicates'(once,1,[:],_13048):-call(_13048).
'$builtin_meta_predicates'(\+,1,[:],_13080):-call(_13080).
'$builtin_meta_predicates'(findall,3,[?,:,?],_13124):-call(_13124).
'$builtin_meta_predicates'(setof,3,[?,:,?],_13168):-call(_13168).
'$builtin_meta_predicates'(bagof,3,[?,:,?],_13212):-call(_13212).
'$builtin_meta_predicates'(on_exception,3,[?,:,:],_13256):-call(_13256).
'$builtin_meta_predicates'(catch,3,[:,?,:],_13300):-call(_13300).
'$builtin_meta_predicates'(synchronized,2,[?,:],_13338):-call(_13338).
'$builtin_meta_predicates'(freeze,2,[?,:],_13376):-call(_13376).


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

'$clause_to_term'(_13406,_13408,_13402:_13396/_13398,_13410,_13424):-'$clause_to_term'(_13406,_13408,user,_13402,_13410,unify((_13414:-_13416),_13408,functor(_13414,_13396,_13398,_13424))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$clause_to_term_5 : public Code {

/*

'$clause_to_term'(_13476,_13478,_13480,_13482,_13484,_13492):-var(_13476,cut(1,illarg(var,_13484,1,_13492))).
'$clause_to_term'(_13536,_13538,_13540,_13542,_13544,_13552):-var(_13540,cut(1,illarg(var,_13544,1,_13552))).
'$clause_to_term'(_13598:_13600,_13602,_13604,_13606,_13608,_13616):-cut(1,'$clause_to_term'(_13600,_13602,_13598,_13606,_13608,_13616)).
'$clause_to_term'(_13658,_13660,_13662,_13664,_13666,_13682):-not(atom(_13662),cut(1,illarg(type(atom),_13666,1,_13682))).
'$clause_to_term'((_13728:-_13730),(_13734:-_13730),_13738,_13738,_13740,_13750):-cut(1,'$head_to_term'(_13728,_13734,_13742,_13740,_13750)).
'$clause_to_term'(_13796,(_13792:-true),_13798,_13798,_13800,_13810):-'$head_to_term'(_13796,_13792,_13802,_13800,_13810).


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

'$term_to_predicateindicator'(_13850,_13846:_13848,_13852,_13860):-'$term_to_predicateindicator'(_13850,_13848,user,_13846,_13852,_13860).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_to_predicateindicator_5 : public Code {

/*

'$term_to_predicateindicator'(_13892,_13894,_13896,_13898,_13900,_13908):-var(_13892,cut(1,illarg(var,_13900,1,_13908))).
'$term_to_predicateindicator'(_13952,_13954,_13956,_13958,_13960,_13968):-var(_13956,cut(1,illarg(var,_13960,1,_13968))).
'$term_to_predicateindicator'(_14014:_14016,_14018,_14020,_14022,_14024,_14032):-cut(1,'$term_to_predicateindicator'(_14016,_14018,_14014,_14022,_14024,_14032)).
'$term_to_predicateindicator'(_14074,_14076,_14078,_14080,_14082,_14100):- \=(_14074,_14086/_14088,cut(1,illarg(type(predicate_indicator),_14082,1,_14100))).
'$term_to_predicateindicator'(_14148/_14150,_14152,_14154,_14156,_14158,_14174):-not(atom(_14148),cut(1,illarg(type(atom),_14158,1,_14174))).
'$term_to_predicateindicator'(_14220/_14222,_14224,_14226,_14228,_14230,_14246):-not(integer(_14222),cut(1,illarg(type(integer),_14230,1,_14246))).
'$term_to_predicateindicator'(_14290,_14290,_14292,_14292,_14294,_14304):-call(_14304).


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

'$update_indexing'(_14326,_14328,_14330,_14332,_14334,_14346):-'$new_indexing_hash'(_14326,_14328,_14336,'$gen_indexing_keys'(_14330,_14336,_14338,'$update_indexing_hash'(_14334,_14338,_14336,_14332,_14346))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$gen_indexing_keys_3 : public Code {

/*

'$gen_indexing_keys'((_14402:-_14404),_14412,[all],_14420):-atom(_14402,cut(1,_14420)).
'$gen_indexing_keys'((_14452:-_14454),_14456,_14458,_14468):-arg(1,_14452,_14460,'$gen_indexing_keys0'(_14460,_14456,_14458,_14468)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$gen_indexing_keys0_3 : public Code {

/*

'$gen_indexing_keys0'(_14506,_14508,_14510,_14518):-var(_14506,cut(1,hash_keys(_14508,_14510,_14518))).
'$gen_indexing_keys0'(_14568,_14570,[all,lis],_14584):-unify([_14574|_14576],_14568,cut(1,_14584)).
'$gen_indexing_keys0'(_14628,_14630,[all,str],_14638):-compound(_14628,cut(1,_14638)).
'$gen_indexing_keys0'(_14680,_14682,[all,_14676],_14724):-ground(_14680,cut(1,'$term_hash'(_14680,_14676,or((hash_contains_key(_14682,_14676)->true),(hash_get(_14682,var,_14702),hash_put(_14682,_14676,_14702)),_14724)))).
'$gen_indexing_keys0'(_14770,_14772,_14774,_14794):-illarg(type(term),'$gen_indexing_keys0'(_14770,_14772,_14774),1,_14794).


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

'$update_indexing_hash'(a,_14822,_14824,_14826,_14834):-cut(1,'$hash_addz_all'(_14822,_14824,_14826,_14834)).
'$update_indexing_hash'(z,_14870,_14872,_14874,_14882):-cut(1,'$hash_adda_all'(_14870,_14872,_14874,_14882)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$hash_adda_all_3 : public Code {

/*

'$hash_adda_all'([],_14918,_14920,_14928):-cut(1,_14928).
'$hash_adda_all'([_14954|_14956],_14958,_14960,_14968):-'$hash_adda'(_14958,_14954,_14960,'$hash_adda_all'(_14956,_14958,_14960,_14968)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$hash_addz_all_3 : public Code {

/*

'$hash_addz_all'([],_15006,_15008,_15016):-cut(1,_15016).
'$hash_addz_all'([_15042|_15044],_15046,_15048,_15056):-'$hash_addz'(_15046,_15042,_15048,'$hash_addz_all'(_15044,_15046,_15048,_15056)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$erase_all_1 : public Code {

/*

'$erase_all'([],_15100):-cut(1,_15100).
'$erase_all'([_15122|_15124],_15132):-'$erase'(_15122,'$erase_all'(_15124,_15132)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$rehash_indexing_3 : public Code {

/*

'$rehash_indexing'(_15158,_15160,_15162,_15174):-'$new_indexing_hash'(_15158,_15160,_15164,hash_keys(_15164,_15166,'$remove_index_all'(_15166,_15164,_15162,_15174))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$remove_index_all_3 : public Code {

/*

'$remove_index_all'([],_15220,_15222,_15230):-cut(1,_15230).
'$remove_index_all'([_15256|_15258],_15260,_15262,_15270):-'$hash_remove_first'(_15260,_15256,_15262,'$remove_index_all'(_15258,_15260,_15262,_15270)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_findall_3 : public Code {

/*

findall(_15398,_15400,_15402,_15412):-callable(_15400,cut(1,new_hash(_15404,'$findall'(_15404,_15398,_15400,_15402,_15412)))).
findall(_15460,_15462,_15464,_15484):-illarg(type(callable),findall(_15460,_15462,_15464),2,_15484).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$findall_4 : public Code {

/*

'$findall'(_15512,_15514,_15516,_15518,_15528):-call(_15516,copy_term(_15514,_15520,'$hash_addz'(_15512,'$FINDALL',_15520,fail(_15528)))).
'$findall'(_15576,_15578,_15580,_15582,_15590):-hash_get(_15576,'$FINDALL',_15582,_15590).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_bagof_3 : public Code {

/*

bagof(_15620,_15622,_15624,_15632):-callable(_15622,cut(1,'$bagof'(_15620,_15622,_15624,_15632))).
bagof(_15672,_15674,_15676,_15696):-illarg(type(callable),bagof(_15672,_15674,_15676),2,_15696).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_setof_3 : public Code {

/*

setof(_15724,_15726,_15728,_15738):-callable(_15726,cut(1,'$bagof'(_15724,_15726,_15730,sort(_15730,_15728,_15738)))).
setof(_15786,_15788,_15790,_15810):-illarg(type(callable),setof(_15786,_15788,_15790),2,_15810).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bagof_3 : public Code {

/*

'$bagof'(_15838,_15840,_15842,_15870):-'$free_variables_set'(_15840,_15838,_15844,\==(_15844,[],cut(1,=..(_15852,['$witness'|_15844],findall(_15852+_15838,_15840,_15860,'$bagof_instances'(_15860,_15852,_15862,unify(_15862,_15842,_15870))))))).
'$bagof'(_15948,_15950,_15952,_15960):-findall(_15948,_15950,_15952,\==(_15952,[],_15960)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bagof_instances_3 : public Code {

/*

'$bagof_instances'([],_15996,_15998,_16006):-fail(_16006).
'$bagof_instances'(_16028,_16030,_16032,_16076):-unify([_16036+_16038|_16044],_16028,'$variants_subset'(_16044,_16036,_16046,_16048,_16050,'$bagof_instances0'(_16050,_16030,_16032,[_16036+_16038|_16046],[_16038|_16048],_16076))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$bagof_instances0_5 : public Code {

/*

'$bagof_instances0'(_16130,_16132,_16134,_16136,_16138,_16146):-'$unify_witness'(_16136,_16132,unify(_16138,_16134,_16146)).
'$bagof_instances0'(_16184,_16186,_16188,_16190,_16192,_16200):-'$bagof_instances'(_16184,_16186,_16188,_16200).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$variants_subset_5 : public Code {

/*

'$variants_subset'([],_16232,[],[],[],_16240):-cut(1,_16240).
'$variants_subset'([_16270+_16272|_16278],_16298,[_16270+_16272|_16290],[_16272|_16296],_16300,_16308):-'$term_variant'(_16298,_16270,cut(1,'$variants_subset'(_16278,_16298,_16290,_16296,_16300,_16308))).
'$variants_subset'([_16360|_16362],_16370,_16372,_16374,[_16360|_16368],_16382):-'$variants_subset'(_16362,_16370,_16372,_16374,_16368,_16382).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_variant_2 : public Code {

/*

'$term_variant'(_16418,_16420,_16430):-new_hash(_16422,'$term_variant'(_16418,_16420,_16422,_16430)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$term_variant_3 : public Code {

/*

'$term_variant'(_16462,_16464,_16466,_16524):-var(_16462,cut(1,or((hash_contains_key(_16466,_16462)->hash_get(_16466,_16462,_16480),_16464==_16480),(var(_16464),hash_put(_16466,_16462,_16464)),_16524))).
'$term_variant'(_16562,_16564,_16566,_16574):-ground(_16562,cut(1,termequal(_16562,_16564,_16574))).
'$term_variant'(_16612,_16614,_16616,_16624):-var(_16614,cut(1,fail(_16624))).
'$term_variant'([_16660|_16662],[_16666|_16668],_16670,_16678):-cut(1,'$term_variant'(_16660,_16666,_16670,'$term_variant'(_16662,_16668,_16670,_16678))).
'$term_variant'(_16722,_16724,_16726,_16738):- =..(_16722,_16728,=..(_16724,_16730,'$term_variant'(_16728,_16730,_16726,_16738))).


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

'$unify_witness'([],_16782,_16790):-cut(1,_16790).
'$unify_witness'([_16814+_16816|_16822],_16814,_16830):-'$unify_witness'(_16822,_16814,_16830).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$variables_set_2 : public Code {

/*

'$variables_set'(_16854,_16856,_16864):-'$variables_set'(_16854,[],_16856,_16864).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$variables_set_3 : public Code {

/*

'$variables_set'(_16890,_16892,_16892,_16900):-var(_16890,'$builtin_memq'(_16890,_16892,cut(1,_16900))).
'$variables_set'(_16940,_16942,[_16940|_16942],_16950):-var(_16940,cut(1,_16950)).
'$variables_set'(_16980,_16982,_16982,_16990):-atomic(_16980,cut(1,_16990)).
'$variables_set'([_17022|_17024],_17026,_17028,_17038):-cut(1,'$variables_set'(_17022,_17026,_17030,'$variables_set'(_17024,_17030,_17028,_17038))).
'$variables_set'(_17082,_17084,_17086,_17096):- =..(_17082,_17088,'$variables_set'(_17088,_17084,_17086,_17096)).


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

'$builtin_memq'(_17138,[_17134|_17136],_17146):-termequal(_17138,_17134,cut(1,_17146)).
'$builtin_memq'(_17182,[_17178|_17180],_17190):-'$builtin_memq'(_17182,_17180,_17190).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$existential_variables_set_2 : public Code {

/*

'$existential_variables_set'(_17214,_17216,_17224):-'$existential_variables_set'(_17214,[],_17216,_17224).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$existential_variables_set_3 : public Code {

/*

'$existential_variables_set'(_17250,_17252,_17252,_17260):-var(_17250,cut(1,_17260)).
'$existential_variables_set'(_17290,_17292,_17292,_17300):-atomic(_17290,cut(1,_17300)).
'$existential_variables_set'(_17332:_17334,_17336,_17338,_17346):-cut(1,'$existential_variables_set'(_17334,_17336,_17338,_17346)).
'$existential_variables_set'(_17382^_17384,_17386,_17388,_17398):-cut(1,'$variables_set'(_17382,_17386,_17390,'$existential_variables_set'(_17384,_17390,_17388,_17398))).
'$existential_variables_set'('$meta_call'(_17444,_17446,_17448,_17450,_17452),_17454,_17456,_17464):-cut(1,'$existential_variables_set'(_17444,_17454,_17456,_17464)).
'$existential_variables_set'(_17498,_17500,_17500,_17510):-call(_17510).


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

'$free_variables_set'(_17528,_17530,_17532,_17546):-'$variables_set'(_17528,_17534,'$variables_set'(_17530,_17536,'$existential_variables_set'(_17528,_17536,_17538,'$builtin_set_diff'(_17534,_17538,_17532,cut(1,_17546))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$builtin_set_diff_3 : public Code {

/*

'$builtin_set_diff'(_17606,_17608,_17610,_17622):-sort(_17606,_17612,sort(_17608,_17614,'$builtin_set_diff0'(_17612,_17614,_17610,_17622))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$builtin_set_diff0_3 : public Code {

/*

'$builtin_set_diff0'([],_17666,[],_17674):-cut(1,_17674).
'$builtin_set_diff0'(_17698,[],_17698,_17706):-cut(1,_17706).
'$builtin_set_diff0'([_17732|_17734],[_17738|_17740],_17742,_17750):-termequal(_17732,_17738,cut(1,'$builtin_set_diff0'(_17734,_17740,_17742,_17750))).
'$builtin_set_diff0'([_17794|_17796],[_17800|_17802],[_17794|_17808],_17822):-termsmallerthan(_17794,_17800,cut(1,'$builtin_set_diff0'(_17796,[_17800|_17802],_17808,_17822))).
'$builtin_set_diff0'([_17866|_17868],[_17872|_17874],[_17872|_17880],_17900):-'$builtin_set_diff0'([_17866|_17868],_17874,[_17872|_17880],_17900).


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

open(_18048,_18050,_18052,_18060):-open(_18048,_18050,_18052,[],_18060).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_close_1 : public Code {

/*

close(_18090,_18098):-close(_18090,[],_18098).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_flush_output_0 : public Code {

/*

flush_output(_18128):-current_output(_18120,flush_output(_18120,_18128)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_stream_property_2 : public Code {

/*

stream_property(_18152,_18154,_18162):-var(_18154,cut(1,'$stream_property'(_18152,_18154,_18162))).
stream_property(_18198,_18200,_18208):-'$stream_property_specifier'(_18200,cut(1,'$stream_property'(_18198,_18200,_18208))).
stream_property(_18244,_18246,_18266):-illarg(domain(term,stream_property),stream_property(_18244,_18246),2,_18266).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$stream_property_2 : public Code {

/*

'$stream_property'(_18292,_18294,_18312):-var(_18292,cut(1,'$get_stream_manager'(_18296,hash_map(_18296,_18298,'$builtin_member'((_18292,_18304),_18298,java(_18292,'$builtin_member'(_18294,_18304,_18312))))))).
'$stream_property'(_18376,_18378,_18390):-java(_18376,cut(1,'$get_stream_manager'(_18380,hash_get(_18380,_18376,_18382,'$builtin_member'(_18378,_18382,_18390))))).
'$stream_property'(_18442,_18444,_18464):-illarg(domain(stream,stream),stream_property(_18442,_18444),1,_18464).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$stream_property_specifier_1 : public Code {

/*

'$stream_property_specifier'(input,_18498):-call(_18498).
'$stream_property_specifier'(output,_18520):-call(_18520).
'$stream_property_specifier'(alias(_18536),_18546):-call(_18546).
'$stream_property_specifier'((mode _18562),_18572):-call(_18572).
'$stream_property_specifier'(type(_18588),_18598):-call(_18598).
'$stream_property_specifier'(file_name(_18614),_18624):-call(_18624).


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

get_char(_18794,_18804):-current_input(_18796,get_char(_18796,_18794,_18804)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_get_code_1 : public Code {

/*

get_code(_18832,_18842):-current_input(_18834,get_code(_18834,_18832,_18842)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_peek_char_1 : public Code {

/*

peek_char(_18870,_18880):-current_input(_18872,peek_char(_18872,_18870,_18880)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_peek_code_1 : public Code {

/*

peek_code(_18908,_18918):-current_input(_18910,peek_code(_18910,_18908,_18918)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_put_char_1 : public Code {

/*

put_char(_18946,_18956):-current_output(_18948,put_char(_18948,_18946,_18956)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_put_code_1 : public Code {

/*

put_code(_18984,_18994):-current_output(_18986,put_code(_18986,_18984,_18994)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_nl_1 : public Code {

/*

nl(_19022,_19030):-put_char(_19022,'\n',_19030).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_get0_1 : public Code {

/*

get0(_19226,_19236):-current_input(_19228,get_code(_19228,_19226,_19236)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_get0_2 : public Code {

/*

get0(_19264,_19266,_19274):-get_code(_19264,_19266,_19274).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_get_1 : public Code {

/*

get(_19298,_19308):-current_input(_19300,get(_19300,_19298,_19308)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_put_1 : public Code {

/*

put(_19336,_19346):-current_output(_19338,put(_19338,_19336,_19346)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_put_2 : public Code {

/*

put(_19374,_19376,_19386):-is(_19378,_19376,put_code(_19374,_19378,_19386)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_tab_1 : public Code {

/*

tab(_19418,_19428):-current_output(_19420,tab(_19420,_19418,_19428)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_skip_1 : public Code {

/*

skip(_19456,_19466):-current_input(_19458,skip(_19458,_19456,_19466)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_get_byte_1 : public Code {

/*

get_byte(_19548,_19558):-current_input(_19550,get_byte(_19550,_19548,_19558)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_peek_byte_1 : public Code {

/*

peek_byte(_19586,_19596):-current_input(_19588,peek_byte(_19588,_19586,_19596)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_put_byte_1 : public Code {

/*

put_byte(_19624,_19634):-current_output(_19626,put_byte(_19626,_19624,_19634)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_1 : public Code {

/*

read(_19806,_19816):-current_input(_19808,read(_19808,_19806,_19816)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_2 : public Code {

/*

read(_19844,_19846,_19858):-read_tokens(_19844,_19848,_19850,parse_tokens(_19846,_19848,cut(1,_19858))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_with_variables_2 : public Code {

/*

read_with_variables(_19898,_19900,_19910):-current_input(_19902,read_with_variables(_19902,_19898,_19900,_19910)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_with_variables_3 : public Code {

/*

read_with_variables(_19942,_19944,_19946,_19956):-read_tokens(_19942,_19948,_19946,parse_tokens(_19944,_19948,cut(1,_19956))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_line_1 : public Code {

/*

read_line(_19998,_20008):-current_input(_20000,read_line(_20000,_19998,_20008)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_read_token_2 : public Code {

/*

read_token(_20036,_20038,_20056):-'$read_token0'(_20036,_20040,_20042,'$read_token1'([_20040],_20042,_20038,_20056)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_token1_3 : public Code {

/*

'$read_token1'([-2],_20100,error(_20100),_20108):-cut(1,_20108).
'$read_token1'("I",_20140,number(_20140),_20148):-cut(1,_20148).
'$read_token1'("L",_20180,number(_20180),_20188):-cut(1,_20188).
'$read_token1'("D",_20220,number(_20220),_20228):-cut(1,_20228).
'$read_token1'("A",_20260,atom(_20260),_20268):-cut(1,_20268).
'$read_token1'("V",_20300,var(_20300),_20308):-cut(1,_20308).
'$read_token1'("S",_20340,string(_20340),_20348):-cut(1,_20348).
'$read_token1'(_20372,_20374,_20374,_20382):-cut(1,_20382).


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

read_tokens(_20406,_20408,_20410,_20418):-'$read_tokens'(_20406,_20408,_20410,[],cut(1,_20418)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_tokens_4 : public Code {

/*

'$read_tokens'(_20454,_20456,_20458,_20460,_20470):-read_token(_20454,_20462,'$read_tokens1'(_20454,_20462,_20456,_20458,_20460,_20470)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_tokens1_5 : public Code {

/*

'$read_tokens1'(_20516,error(_20514),[],_20518,_20520,_20528):-cut(1,write(user_error,'{SYNTAX ERROR}',nl(user_error,write(user_error,'** ',write(user_error,_20514,write(user_error,' **',nl(user_error,flush_output(user_error,'$read_tokens_until_fullstop'(_20516,fail(_20528)))))))))).
'$read_tokens1'(_20628,end_of_file,[end_of_file,'.'],[],_20630,_20638):-cut(1,_20638).
'$read_tokens1'(_20672,'.',['.'],[],_20674,_20682):-cut(1,_20682).
'$read_tokens1'(_20738,var('_'),[var('_',_20718)|_20724],['_'=_20718|_20736],_20740,_20760):-cut(1,'$read_tokens'(_20738,_20724,_20736,['_'=_20718|_20740],_20760)).
'$read_tokens1'(_20816,var(_20802),[var(_20802,_20808)|_20814],_20818,_20820,_20834):-'$mem_pair'(_20802=_20808,_20820,cut(1,'$read_tokens'(_20816,_20814,_20818,_20820,_20834))).
'$read_tokens1'(_20910,var(_20884),[var(_20884,_20890)|_20896],[_20884=_20890|_20908],_20912,_20932):-cut(1,'$read_tokens'(_20910,_20896,_20908,[_20884=_20890|_20912],_20932)).
'$read_tokens1'(_20978,_20974,[_20974|_20976],_20980,_20982,_20990):-'$read_tokens'(_20978,_20976,_20980,_20982,_20990).


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

'$mem_pair'(_21026=_21028,[_21032=_21034|_21040],_21048):-termequal(_21026,_21032,cut(1,unify(_21034,_21028,_21048))).
'$mem_pair'(_21092,[_21088|_21090],_21100):-'$mem_pair'(_21092,_21090,_21100).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_tokens_until_fullstop_1 : public Code {

/*

'$read_tokens_until_fullstop'(_21124,_21134):-read_token(_21124,_21126,'$read_tokens_until_fullstop'(_21124,_21126,_21134)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_tokens_until_fullstop_2 : public Code {

/*

'$read_tokens_until_fullstop'(_21164,end_of_file,_21172):-cut(1,_21172).
'$read_tokens_until_fullstop'(_21194,'.',_21202):-cut(1,_21202).
'$read_tokens_until_fullstop'(_21224,_21226,_21236):-read_token(_21224,_21228,'$read_tokens_until_fullstop'(_21224,_21228,_21236)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_parse_tokens_2 : public Code {

/*

parse_tokens(_21268,_21270,_21296):-retractall('$tokens'(_21274),assertz('$tokens'(_21270),'$parse_tokens'(_21268,1201,_21270,['.'],retract('$tokens'(_21270),cut(1,_21296))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sym_dcg_arrow_2 : public Code {

/*

-->('$parse_tokens'(_21350,_21352),('$parse_tokens_skip_spaces','$parse_tokens1'(_21352,_21358,_21360),!,'$parse_tokens_skip_spaces','$parse_tokens2'(_21352,_21358,_21360,_21350,_21372),!),_21412):-call(_21412).
-->('$parse_tokens1'(_21430,_21432,_21434),('$parse_tokens_peep_next'(_21438),{'$parse_tokens_is_starter'(_21438)},!,'$parse_tokens_before_op'(_21430,_21432,_21434)),_21482):-call(_21482).
-->('$parse_tokens1'(_21500,_21502,_21504),('$parse_tokens_peep_next'(_21508),'$parse_tokens_error'([_21508,cannot,start,an,expression])),_21558):-call(_21558).
-->('$parse_tokens2'(_21576,_21578,_21580,_21578,_21580),('$parse_tokens_peep_next'(_21588),{'$parse_tokens_is_terminator'(_21588)},{_21580=<_21576},!),_21634):-call(_21634).
-->('$parse_tokens2'(_21652,_21654,_21656,_21658,_21660),('$parse_tokens_peep_next'(_21664),{'$parse_tokens_is_post_in_op'(_21664)},!,'$parse_tokens_post_in_ops'(_21652,_21654,_21656,_21658,_21660)),_21712):-call(_21712).
-->('$parse_tokens2'(_21730,_21732,_21734,_21736,_21738),'$parse_tokens_error'([operator,expected,after,expression]),_21776):-call(_21776).
-->('$parse_tokens_before_op'(_21794,_21796,_21798),([' '],!,'$parse_tokens_before_op'(_21794,_21796,_21798)),_21834):-call(_21834).
-->('$parse_tokens_before_op'(_21852,end_of_file,0),([end_of_file],!),_21878):-call(_21878).
-->('$parse_tokens_before_op'(_21896,_21898,0),([number(_21898)],!),_21926):-call(_21926).
-->('$parse_tokens_before_op'(_21944,_21946,0),([atom(-)],[number(_21962)],!,{_21946 is -_21962}),_22010):-call(_22010).
-->('$parse_tokens_before_op'(_22028,_22030,0),([var(_22036,_22030)],!),_22060):-call(_22060).
-->('$parse_tokens_before_op'(_22078,_22080,0),([string(_22080)],!),_22108):-call(_22108).
-->('$parse_tokens_before_op'(_22126,_22128,0),(['('],!,'$parse_tokens'(_22128,1201),'$parse_tokens_expect'(')')),_22174):-call(_22174).
-->('$parse_tokens_before_op'(_22192,_22194,0),(['{'],!,'$parse_tokens_skip_spaces','$parse_tokens_brace'(_22194)),_22234):-call(_22234).
-->('$parse_tokens_before_op'(_22252,_22254,0),(['['],!,'$parse_tokens_skip_spaces','$parse_tokens_list'(_22254)),_22294):-call(_22294).
-->('$parse_tokens_before_op'(_22312,_22314,0),([atom(_22320)],['('],!,'$parse_tokens_skip_spaces','$parse_tokens_args'(_22336),{_22314=..[_22320|_22336]}),_22392):-call(_22392).
-->('$parse_tokens_before_op'(_22410,_22412,_22414),([atom(_22418)],{current_op(_22414,fx,_22418)},{_22414=<_22410},'$parse_tokens_skip_spaces','$parse_tokens_peep_next'(_22450),{'$parse_tokens_is_starter'(_22450)},{\+'$parse_tokens_is_post_in_op'(_22450)},!,{_22480 is _22414-1},'$parse_tokens'(_22490,_22480),{functor(_22412,_22418,1)},{arg(1,_22412,_22490)}),_22592):-call(_22592).
-->('$parse_tokens_before_op'(_22610,_22612,_22614),([atom(_22618)],{current_op(_22614,fy,_22618)},{_22614=<_22610},'$parse_tokens_skip_spaces','$parse_tokens_peep_next'(_22650),{'$parse_tokens_is_starter'(_22650)},{\+'$parse_tokens_is_post_in_op'(_22650)},!,'$parse_tokens'(_22674,_22614),{functor(_22612,_22618,1)},{arg(1,_22612,_22674)}),_22770):-call(_22770).
-->('$parse_tokens_before_op'(_22788,_22790,0),[atom(_22790)],_22812):-call(_22812).
-->('$parse_tokens_brace'({}),(['}'],!),_22852):-call(_22852).
-->('$parse_tokens_brace'(_22870),('$parse_tokens'(_22874,1201),'$parse_tokens_expect'('}'),{_22870={_22874}}),_22916):-call(_22916).
-->('$parse_tokens_list'('[]'),([']'],!),_22956):-call(_22956).
-->('$parse_tokens_list'([_22974|_22976]),('$parse_tokens'(_22974,999),'$parse_tokens_skip_spaces','$parse_tokens_list_rest'(_22976)),_23012):-call(_23012).
-->('$parse_tokens_list_rest'(_23030),(['|'],!,'$parse_tokens'(_23030,999),'$parse_tokens_expect'(']')),_23074):-call(_23074).
-->('$parse_tokens_list_rest'([_23092|_23094]),([','],!,'$parse_tokens'(_23092,999),'$parse_tokens_skip_spaces','$parse_tokens_list_rest'(_23094)),_23148):-call(_23148).
-->('$parse_tokens_list_rest'('[]'),'$parse_tokens_expect'(']'),_23180):-call(_23180).
-->('$parse_tokens_args'('[]'),([')'],!),_23220):-call(_23220).
-->('$parse_tokens_args'([_23238|_23240]),('$parse_tokens'(_23238,999),'$parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23240)),_23276):-call(_23276).
-->('$parse_tokens_args_rest'([_23294|_23296]),([','],!,'$parse_tokens'(_23294,999),'$parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23296)),_23350):-call(_23350).
-->('$parse_tokens_args_rest'('[]'),'$parse_tokens_expect'(')'),_23382):-call(_23382).
-->('$parse_tokens_post_in_ops'(_23400,_23402,_23404,_23406,_23408),('$parse_tokens_skip_spaces',[_23412],'$parse_tokens_op'(_23412,_23400,_23402,_23404,_23426,_23428),'$parse_tokens_post_in_ops'(_23400,_23426,_23428,_23406,_23408)),_23468):-call(_23468).
-->('$parse_tokens_post_in_ops'(_23486,_23488,_23490,_23488,_23490),{_23490=<_23486},_23514):-call(_23514).
-->('$parse_tokens_op'(',',_23534,_23536,_23538,_23540,_23542),(!,'$parse_tokens_op'(atom(','),_23534,_23536,_23538,_23540,_23542)),_23576):-call(_23576).
-->('$parse_tokens_op'('|',_23596,_23598,_23600,_23602,_23604),(!,'$parse_tokens_op'(atom(;),_23596,_23598,_23600,_23602,_23604)),_23638):-call(_23638).
-->('$parse_tokens_op'(atom(_23656),_23662,_23664,_23666,_23668,_23670),({current_op(_23670,xf,_23656)},{_23670=<_23662},{_23666<_23670},{functor(_23668,_23656,1)},{arg(1,_23668,_23664)}),_23760):-call(_23760).
-->('$parse_tokens_op'(atom(_23778),_23784,_23786,_23788,_23790,_23792),({current_op(_23792,yf,_23778)},{_23792=<_23784},{_23788=<_23792},{functor(_23790,_23778,1)},{arg(1,_23790,_23786)}),_23882):-call(_23882).
-->('$parse_tokens_op'(atom(_23900),_23906,_23908,_23910,_23912,_23914),({current_op(_23914,xfx,_23900)},{_23914=<_23906},{_23910<_23914},{_23956 is _23914-1},'$parse_tokens'(_23966,_23956),!,{functor(_23912,_23900,2)},{arg(1,_23912,_23908)},{arg(2,_23912,_23966)}),_24062):-call(_24062).
-->('$parse_tokens_op'(atom(_24080),_24086,_24088,_24090,_24092,_24094),({current_op(_24094,xfy,_24080)},{_24094=<_24086},{_24090<_24094},{_24130 is _24094},'$parse_tokens'(_24140,_24130),!,{functor(_24092,_24080,2)},{arg(1,_24092,_24088)},{arg(2,_24092,_24140)}),_24236):-call(_24236).
-->('$parse_tokens_op'(atom(_24254),_24260,_24262,_24264,_24266,_24268),({current_op(_24268,yfx,_24254)},{_24268=<_24260},{_24264=<_24268},{_24310 is _24268-1},'$parse_tokens'(_24320,_24310),!,{functor(_24266,_24254,2)},{arg(1,_24266,_24262)},{arg(2,_24266,_24320)}),_24416):-call(_24416).
-->('$parse_tokens_expect'(_24928),('$parse_tokens_skip_spaces',[_24928],!),_24956):-call(_24956).
-->('$parse_tokens_expect'(_24974),'$parse_tokens_error'([_24974,expected]),_25000):-call(_25000).
-->('$parse_tokens_skip_spaces',([' '],!,'$parse_tokens_skip_spaces'),_25042):-call(_25042).
-->('$parse_tokens_skip_spaces',[],_25066):-call(_25066).


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

'$parse_tokens_is_starter'(end_of_file,_24440):-call(_24440).
'$parse_tokens_is_starter'('(',_24462):-call(_24462).
'$parse_tokens_is_starter'('[',_24484):-call(_24484).
'$parse_tokens_is_starter'('{',_24506):-call(_24506).
'$parse_tokens_is_starter'(number(_24522),_24532):-call(_24532).
'$parse_tokens_is_starter'(atom(_24548),_24558):-call(_24558).
'$parse_tokens_is_starter'(var(_24574,_24576),_24586):-call(_24586).
'$parse_tokens_is_starter'(string(_24602),_24612):-call(_24612).


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

'$parse_tokens_is_terminator'(')',_24634):-call(_24634).
'$parse_tokens_is_terminator'(']',_24656):-call(_24656).
'$parse_tokens_is_terminator'('}',_24678):-call(_24678).
'$parse_tokens_is_terminator'('.',_24700):-call(_24700).


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

'$parse_tokens_is_post_in_op'(',',_24720):-cut(1,_24720).
'$parse_tokens_is_post_in_op'('|',_24746):-cut(1,_24746).
'$parse_tokens_is_post_in_op'(atom(_24768),_24780):-current_op(_24770,_24772,_24768,'$parse_tokens_post_in_type'(_24772,cut(1,_24780))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$parse_tokens_post_in_type_1 : public Code {

/*

'$parse_tokens_post_in_type'(xfx,_24824):-call(_24824).
'$parse_tokens_post_in_type'(xfy,_24846):-call(_24846).
'$parse_tokens_post_in_type'(yfx,_24868):-call(_24868).
'$parse_tokens_post_in_type'(xf,_24890):-call(_24890).
'$parse_tokens_post_in_type'(yf,_24912):-call(_24912).


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

'$parse_tokens_peep_next'(_25082,_25084,_25084,_25098):-unify([_25082|_25090],_25084,_25098).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$parse_tokens_error_3 : public Code {

/*

'$parse_tokens_error'(_25124,_25126,_25128,_25142):-write(user_error,'{SYNTAX ERROR}',nl(user_error,write(user_error,'** ','$parse_tokens_write_message'(user_error,_25124,write(user_error,' **',nl(user_error,'$parse_tokens_error1'([],_25126,clause('$tokens'(_25132),_25134,'$parse_tokens_error1'(_25132,_25126,flush_output(user_error,fail(_25142))))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$parse_tokens_error1_2 : public Code {

/*

'$parse_tokens_error1'([],_25238,_25246):-cut(1,_25246).
'$parse_tokens_error1'(_25268,_25270,_25278):-termequal(_25268,_25270,cut(1,nl(user_error,write(user_error,'** here **',nl(user_error,'$parse_tokens_error1'(_25268,[],nl(user_error,_25278))))))).
'$parse_tokens_error1'([_25344|_25346],_25348,_25356):-'$parse_tokens_error2'(_25344,'$parse_tokens_error1'(_25346,_25348,_25356)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$parse_tokens_error2_1 : public Code {

/*

'$parse_tokens_error2'(number(_25388),_25396):-cut(1,write(_25388,_25396)).
'$parse_tokens_error2'(atom(_25424),_25432):-cut(1,writeq(_25424,_25432)).
'$parse_tokens_error2'(var(_25460,_25462),_25470):-cut(1,write(_25460,_25470)).
'$parse_tokens_error2'(string(_25498),_25506):-cut(1,write(user_error,'"','$parse_tokens_write_string'(user_error,_25498,write(user_error,'"',_25506)))).
'$parse_tokens_error2'(_25550,_25558):-write(user_error,_25550,_25558).


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

'$parse_tokens_write_string'(_25580,[],_25590):-call(_25590).
'$parse_tokens_write_string'(_25612,[_25608|_25610],_25632):-unify("\"",[_25608],cut(1,put_code(_25612,_25608,put_code(_25612,_25608,'$parse_tokens_write_string'(_25612,_25610,_25632))))).
'$parse_tokens_write_string'(_25692,[_25688|_25690],_25700):-put_code(_25692,_25688,'$parse_tokens_write_string'(_25692,_25690,_25700)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$parse_tokens_write_message_2 : public Code {

/*

'$parse_tokens_write_message'(_25732,[],_25742):-call(_25742).
'$parse_tokens_write_message'(_25764,[_25760|_25762],_25772):-write(_25764,_25760,write(_25764,' ','$parse_tokens_write_message'(_25764,_25762,_25772))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_1 : public Code {

/*

write(_25980,_26000):-current_output(_25982,write_term(_25982,_25980,[numbervars(true)],_26000)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_2 : public Code {

/*

write(_26030,_26032,_26050):-write_term(_26030,_26032,[numbervars(true)],_26050).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_writeq_1 : public Code {

/*

writeq(_26076,_26106):-current_output(_26078,write_term(_26078,_26076,[quoted(true),numbervars(true)],_26106)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_writeq_2 : public Code {

/*

writeq(_26136,_26138,_26166):-write_term(_26136,_26138,[quoted(true),numbervars(true)],_26166).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_canonical_1 : public Code {

/*

write_canonical(_26192,_26222):-current_output(_26194,write_term(_26194,_26192,[quoted(true),ignore_ops(true)],_26222)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_canonical_2 : public Code {

/*

write_canonical(_26252,_26254,_26282):-write_term(_26252,_26254,[quoted(true),ignore_ops(true)],_26282).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_term_2 : public Code {

/*

write_term(_26308,_26310,_26320):-current_output(_26312,write_term(_26312,_26308,_26310,_26320)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_write_term_3 : public Code {

/*

write_term(_26352,_26354,_26356,_26364):-'$write_term'(_26352,_26354,_26356,fail(_26364)).
write_term(_26396,_26398,_26400,_26410):-call(_26410).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_term_3 : public Code {

/*

'$write_term'(_26428,_26430,_26432,_26442):-'$write_term0'(_26430,1200,punct,_26434,_26432,_26428,cut(1,_26442)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_term0_6 : public Code {

/*

'$write_term0'(_26482,_26484,_26486,alpha,_26488,_26490,_26498):-var(_26482,cut(1,'$write_space_if_needed'(_26486,alpha,_26490,'$fast_write'(_26490,_26482,_26498)))).
'$write_term0'(_26552,_26554,_26556,alpha,_26558,_26560,_26568):-java(_26552,cut(1,'$write_space_if_needed'(_26556,alpha,_26560,'$fast_write'(_26560,_26552,_26568)))).
'$write_term0'(_26622,_26624,_26626,alpha,_26628,_26630,_26646):-unify('$VAR'(_26634),_26622,integer(_26634,smallerorequal(0,_26634,'$builtin_member'(numbervars(true),_26628,cut(1,'$write_space_if_needed'(_26626,alpha,_26630,'$write_VAR'(_26634,_26630,_26646))))))).
'$write_term0'(_26724,_26726,_26728,alpha,_26730,_26732,_26740):-number(_26724,smallerthan(_26724,0,cut(1,'$write_space_if_needed'(_26728,symbol,_26732,'$fast_write'(_26732,_26724,_26740))))).
'$write_term0'(_26802,_26804,_26806,alpha,_26808,_26810,_26818):-number(_26802,cut(1,'$write_space_if_needed'(_26806,alpha,_26810,'$fast_write'(_26810,_26802,_26818)))).
'$write_term0'(_26872,_26874,_26876,_26878,_26880,_26882,_26890):-atom(_26872,cut(1,'$write_atom'(_26872,_26876,_26878,_26880,_26882,_26890))).
'$write_term0'(_26940,_26942,_26944,_26946,_26948,_26950,_26974):-not('$builtin_member'(ignore_ops(true),_26948),'$write_is_operator'(_26940,_26962,_26964,_26966,cut(1,'$write_term_op'(_26962,_26966,_26964,_26942,_26944,_26946,_26948,_26950,_26974)))).
'$write_term0'(_27042,_27044,_27046,punct,_27048,_27050,_27076):-unify([_27054|_27056],_27042,not('$builtin_member'(ignore_ops(true),_27048),cut(1,'$write_space_if_needed'(_27046,punct,_27050,put_char(_27050,'[','$write_term_list_args'(_27042,punct,_27068,_27048,_27050,put_char(_27050,']',_27076))))))).
'$write_term0'(_27160,_27162,_27164,_27166,_27168,_27170,_27194):-unify({_27174},_27160,not('$builtin_member'(ignore_ops(true),_27168),cut(1,'$write_space_if_needed'(_27164,punct,_27170,put_char(_27170,'{','$write_term0'(_27174,1200,punct,_27186,_27168,_27170,put_char(_27170,'}',_27194))))))).
'$write_term0'(_27280,_27282,_27284,punct,_27286,_27288,_27306):- =..(_27280,[_27292|_27294],'$write_atom'(_27292,_27284,_27296,_27286,_27288,put_char(_27288,'(','$write_term_args'(_27294,punct,_27298,_27286,_27288,put_char(_27288,')',_27306))))).


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

'$write_space_if_needed'(punct,_27382,_27384,_27392):-cut(1,_27392).
'$write_space_if_needed'(_27416,_27416,_27418,_27426):-cut(1,put_char(_27418,' ',_27426)).
'$write_space_if_needed'(other,alpha,_27458,_27466):-cut(1,put_char(_27458,' ',_27466)).
'$write_space_if_needed'(_27498,_27500,_27502,_27512):-call(_27512).


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

'$write_VAR'(_27530,_27532,_27560):-smallerthan(_27530,26,cut(1,is(_27552,_27530 mod 26+"A",put_code(_27532,_27552,_27560)))).
'$write_VAR'(_27606,_27608,_27644):-is(_27628,_27606 mod 26+"A",put_code(_27608,_27628,is(_27636,_27606//26,'$fast_write'(_27608,_27636,_27644)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_atom_5 : public Code {

/*

'$write_atom'(_27692,_27694,_27696,_27698,_27700,_27712):-'$builtin_member'(quoted(true),_27698,cut(1,'$atom_type'(_27692,_27696,'$write_space_if_needed'(_27694,_27696,_27700,'$fast_writeq'(_27700,_27692,_27712))))).
'$write_atom'(_27774,_27776,_27778,_27780,_27782,_27790):-'$atom_type'(_27774,_27778,'$write_space_if_needed'(_27776,_27778,_27782,'$fast_write'(_27782,_27774,_27790))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$atom_type_2 : public Code {

/*

'$atom_type'(_27838,alpha,_27846):-'$atom_type0'(_27838,0,cut(1,_27846)).
'$atom_type'(_27876,symbol,_27884):-'$atom_type0'(_27876,1,cut(1,_27884)).
'$atom_type'(_27914,punct,_27922):-'$atom_type0'(_27914,2,cut(1,_27922)).
'$atom_type'(_27952,other,_27960):-'$atom_type0'(_27952,3,cut(1,_27960)).


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

'$write_is_operator'(_27990,_27992,_27994,_27996,_28014):-functor(_27990,_27992,_27998,'$write_op_type'(_27998,_27996,current_op(_28000,_27996,_27992,=..(_27990,[_28004|_27994],cut(1,_28014))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_op_type_2 : public Code {

/*

'$write_op_type'(1,fx,_28084):-call(_28084).
'$write_op_type'(1,fy,_28108):-call(_28108).
'$write_op_type'(1,xf,_28132):-call(_28132).
'$write_op_type'(1,yf,_28156):-call(_28156).
'$write_op_type'(2,xfx,_28180):-call(_28180).
'$write_op_type'(2,xfy,_28204):-call(_28204).
'$write_op_type'(2,yfx,_28228):-call(_28228).


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

'$write_term_op'(_28244,_28246,_28248,_28250,_28252,punct,_28254,_28256,_28268):-current_op(_28258,_28246,_28244,smallerthan(_28250,_28258,cut(1,'$write_space_if_needed'(_28252,punct,_28256,put_char(_28256,'(','$write_term_op1'(_28244,_28246,_28248,_28258,punct,_28260,_28254,_28256,put_char(_28256,')',_28268))))))).
'$write_term_op'(_28366,_28368,_28370,_28372,_28374,_28376,_28378,_28380,_28390):-current_op(_28382,_28368,_28366,'$write_term_op1'(_28366,_28368,_28370,_28382,_28374,_28376,_28378,_28380,_28390)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_term_op1_8 : public Code {

/*

'$write_term_op1'(_28454,fx,[_28450],_28456,_28458,_28460,_28462,_28464,_28482):-cut(1,'$write_atom'(_28454,_28458,_28466,_28462,_28464,is(_28474,_28456-1,'$write_term0'(_28450,_28474,_28466,_28460,_28462,_28464,_28482)))).
'$write_term_op1'(_28560,fy,[_28556],_28562,_28564,_28566,_28568,_28570,_28582):-cut(1,'$write_atom'(_28560,_28564,_28572,_28568,_28570,is(_28574,_28562,'$write_term0'(_28556,_28574,_28572,_28566,_28568,_28570,_28582)))).
'$write_term_op1'(_28660,xf,[_28656],_28662,_28664,_28666,_28668,_28670,_28688):-cut(1,is(_28678,_28662-1,'$write_term0'(_28656,_28678,_28664,_28680,_28668,_28670,'$write_atom'(_28660,_28680,_28666,_28668,_28670,_28688)))).
'$write_term_op1'(_28766,yf,[_28762],_28768,_28770,_28772,_28774,_28776,_28788):-cut(1,is(_28778,_28768,'$write_term0'(_28762,_28778,_28770,_28780,_28774,_28776,'$write_atom'(_28766,_28780,_28772,_28774,_28776,_28788)))).
'$write_term_op1'(_28872,xfx,[_28862,_28868],_28874,_28876,_28878,_28880,_28882,_28910):-cut(1,is(_28890,_28874-1,is(_28898,_28874-1,'$write_term0'(_28862,_28890,_28876,_28900,_28880,_28882,'$write_term_infix_op'(_28872,_28900,_28902,_28880,_28882,'$write_term0'(_28868,_28898,_28902,_28878,_28880,_28882,_28910)))))).
'$write_term_op1'(_29018,xfy,[_29008,_29014],_29020,_29022,_29024,_29026,_29028,_29050):-cut(1,is(_29036,_29020-1,is(_29038,_29020,'$write_term0'(_29008,_29036,_29022,_29040,_29026,_29028,'$write_term_infix_op'(_29018,_29040,_29042,_29026,_29028,'$write_term0'(_29014,_29038,_29042,_29024,_29026,_29028,_29050)))))).
'$write_term_op1'(_29158,yfx,[_29148,_29154],_29160,_29162,_29164,_29166,_29168,_29190):-cut(1,is(_29170,_29160,is(_29178,_29160-1,'$write_term0'(_29148,_29170,_29162,_29180,_29166,_29168,'$write_term_infix_op'(_29158,_29180,_29182,_29166,_29168,'$write_term0'(_29154,_29178,_29182,_29164,_29166,_29168,_29190)))))).


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

'$write_term_infix_op'(',',_29286,punct,_29288,_29290,_29298):-cut(1,'$write_space_if_needed'(_29286,punct,_29290,put_char(_29290,',',_29298))).
'$write_term_infix_op'(_29344,_29346,_29348,_29350,_29352,_29360):-'$write_atom'(_29344,_29346,_29348,_29350,_29352,_29360).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_term_list_args_5 : public Code {

/*

'$write_term_list_args'([_29398|_29400],_29402,_29404,_29406,_29408,_29424):-nonvar(_29400,unify([_29412|_29414],_29400,cut(1,'$write_term0'(_29398,999,_29402,_29416,_29406,_29408,'$write_space_if_needed'(_29416,punct,_29408,put_char(_29408,',','$write_term_list_args'(_29400,punct,_29404,_29406,_29408,_29424))))))).
'$write_term_list_args'([_29516|_29518],_29520,_29522,_29524,_29526,_29534):-nonvar(_29518,unify([],_29518,cut(1,'$write_term0'(_29516,999,_29520,_29522,_29524,_29526,_29534)))).
'$write_term_list_args'([_29594|_29596],_29598,_29600,_29602,_29604,_29614):-'$write_term0'(_29594,999,_29598,_29606,_29602,_29604,'$write_space_if_needed'(_29606,punct,_29604,put_char(_29604,'|','$write_term0'(_29596,999,punct,_29600,_29602,_29604,_29614)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_term_args_5 : public Code {

/*

'$write_term_args'([],_29686,_29686,_29688,_29690,_29698):-cut(1,_29698).
'$write_term_args'([_29728],_29732,_29734,_29736,_29738,_29746):-cut(1,'$write_term0'(_29728,999,_29732,_29734,_29736,_29738,_29746)).
'$write_term_args'([_29792|_29794],_29796,_29798,_29800,_29802,_29812):-cut(1,'$write_term0'(_29792,999,_29796,_29804,_29800,_29802,'$write_space_if_needed'(_29804,punct,_29802,put_char(_29802,',','$write_term_args'(_29794,punct,_29798,_29800,_29802,_29812))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_op_3 : public Code {

/*

op(_29978,_29980,_29982,_29990):-integer(_29978,smallerorequal(0,_29978,smallerorequal(_29978,1200,cut(1,'$op1'(_29978,_29980,_29982,_29990))))).
op(_30046,_30048,_30050,_30078):-illarg(domain(integer,0-1200),op(_30046,_30048,_30050),1,_30078).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$op1_3 : public Code {

/*

'$op1'(_30106,_30108,_30110,_30120):-nonvar(_30108,'$op_specifier'(_30108,_30112,cut(1,'$op2'(_30106,_30108,_30110,_30120)))).
'$op1'(_30168,_30170,_30172,_30202):-findall(_30176,'$op_specifier'(_30176,_30178),_30180,illarg(domain(term,_30180),op(_30168,_30170,_30172),2,_30202)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$op2_3 : public Code {

/*

'$op2'(_30240,_30242,_30244,_30258):-atom(_30244,cut(1,'$add_operators'([_30244],_30240,_30242,_30258))).
'$op2'(_30298,_30300,_30302,_30312):-'$op_atom_list'(_30302,_30304,cut(1,'$add_operators'(_30304,_30298,_30300,_30312))).
'$op2'(_30354,_30356,_30358,_30382):-illarg(type(list(atom)),op(_30354,_30356,_30358),3,_30382).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$add_operators_3 : public Code {

/*

'$add_operators'([],_30410,_30412,_30420):-cut(1,_30420).
'$add_operators'([_30446|_30448],_30450,_30452,_30460):-'$add_op'(_30446,_30450,_30452,'$add_operators'(_30448,_30450,_30452,_30460)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$add_op_3 : public Code {

/*

'$add_op'(',',_30498,_30500,_30526):-cut(1,illarg(permission(modify,operator,',',_30510),op(_30498,_30500,','),3,_30526)).
'$add_op'(_30560,_30562,_30564,_30594):-clause('$current_operator'(_30568,_30570,_30560),_30574,'$op_specifier'(_30564,_30576,'$op_specifier'(_30570,_30578,unify(_30578,_30576,retract('$current_operator'(_30582,_30570,_30560),fail(_30594)))))).
'$add_op'(_30654,0,_30656,_30664):-cut(1,_30664).
'$add_op'(_30688,_30690,_30692,_30708):-assertz('$current_operator'(_30690,_30692,_30688),_30708).


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

'$op_specifier'(fx,prefix,_30740):-call(_30740).
'$op_specifier'(fy,prefix,_30764):-call(_30764).
'$op_specifier'(xfx,infix,_30788):-call(_30788).
'$op_specifier'(xfy,infix,_30812):-call(_30812).
'$op_specifier'(yfx,infix,_30836):-call(_30836).
'$op_specifier'(xf,postfix,_30860):-call(_30860).
'$op_specifier'(yf,postfix,_30884):-call(_30884).


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

'$op_atom_list'(_30900,_30902,_30910):-var(_30900,cut(1,fail(_30910))).
'$op_atom_list'([],[],_30948):-cut(1,_30948).
'$op_atom_list'([_30972|_30974],[_30972|_30980],_30988):-atom(_30972,cut(1,'$op_atom_list'(_30974,_30980,_30988))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_current_op_3 : public Code {

/*

current_op(_31024,_31026,_31028,_31046):-clause('$current_operator'(_31024,_31026,_31028),_31038,_31046).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$current_operator_3 : public Code {

/*

'$current_operator'(1200,xfx,:-,_31080):-call(_31080).
'$current_operator'(1200,xfx,-->,_31106):-call(_31106).
'$current_operator'(1200,fx,:-,_31132):-call(_31132).
'$current_operator'(1200,fx,?-,_31158):-call(_31158).
'$current_operator'(1150,fx,package,_31184):-call(_31184).
'$current_operator'(1150,fx,import,_31210):-call(_31210).
'$current_operator'(1150,fx,include,_31236):-call(_31236).
'$current_operator'(1150,fx,include_resource,_31262):-call(_31262).
'$current_operator'(1150,fx,constant,_31288):-call(_31288).
'$current_operator'(1150,fx,public,_31314):-call(_31314).
'$current_operator'(1150,fx,dynamic,_31340):-call(_31340).
'$current_operator'(1150,fx,meta_predicate,_31366):-call(_31366).
'$current_operator'(1150,fx,mode,_31392):-call(_31392).
'$current_operator'(1150,fx,multifile,_31418):-call(_31418).
'$current_operator'(1150,fx,block,_31444):-call(_31444).
'$current_operator'(1150,fx,ifdef,_31470):-call(_31470).
'$current_operator'(1150,fx,ifndef,_31496):-call(_31496).
'$current_operator'(1150,fx,domain,_31522):-call(_31522).
'$current_operator'(1150,fx,database,_31548):-call(_31548).
'$current_operator'(1100,xfy,;,_31574):-call(_31574).
'$current_operator'(1050,xfy,->,_31600):-call(_31600).
'$current_operator'(1000,xfy,',',_31626):-call(_31626).
'$current_operator'(900,fy,\+,_31652):-call(_31652).
'$current_operator'(700,xfx,=,_31678):-call(_31678).
'$current_operator'(700,xfx,\=,_31704):-call(_31704).
'$current_operator'(700,xfx,==,_31730):-call(_31730).
'$current_operator'(700,xfx,\==,_31756):-call(_31756).
'$current_operator'(700,xfx,@<,_31782):-call(_31782).
'$current_operator'(700,xfx,@>,_31808):-call(_31808).
'$current_operator'(700,xfx,@=<,_31834):-call(_31834).
'$current_operator'(700,xfx,@>=,_31860):-call(_31860).
'$current_operator'(700,xfx,=..,_31886):-call(_31886).
'$current_operator'(700,xfx,is,_31912):-call(_31912).
'$current_operator'(700,xfx,=:=,_31938):-call(_31938).
'$current_operator'(700,xfx,=\=,_31964):-call(_31964).
'$current_operator'(700,xfx,<,_31990):-call(_31990).
'$current_operator'(700,xfx,>,_32016):-call(_32016).
'$current_operator'(700,xfx,=<,_32042):-call(_32042).
'$current_operator'(700,xfx,>=,_32068):-call(_32068).
'$current_operator'(550,xfy,:,_32094):-call(_32094).
'$current_operator'(500,yfx,+,_32120):-call(_32120).
'$current_operator'(500,yfx,-,_32146):-call(_32146).
'$current_operator'(500,yfx,#,_32172):-call(_32172).
'$current_operator'(500,yfx,/\,_32198):-call(_32198).
'$current_operator'(500,yfx,\/,_32224):-call(_32224).
'$current_operator'(500,fx,+,_32250):-call(_32250).
'$current_operator'(400,yfx,*,_32276):-call(_32276).
'$current_operator'(400,yfx,/,_32302):-call(_32302).
'$current_operator'(400,yfx,//,_32328):-call(_32328).
'$current_operator'(400,yfx,mod,_32354):-call(_32354).
'$current_operator'(400,yfx,rem,_32380):-call(_32380).
'$current_operator'(400,yfx,<<,_32406):-call(_32406).
'$current_operator'(400,yfx,>>,_32432):-call(_32432).
'$current_operator'(300,xfx,~,_32458):-call(_32458).
'$current_operator'(200,xfx,**,_32484):-call(_32484).
'$current_operator'(200,xfy,^,_32510):-call(_32510).
'$current_operator'(200,fy,\,_32536):-call(_32536).
'$current_operator'(200,fy,-,_32562):-call(_32562).


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

not(_32670,_32678):-call(_32670,cut(1,fail(_32678))).
not(_32708,_32718):-call(_32718).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_repeat_0 : public Code {

/*

repeat(_32740):-call(_32740).
repeat(_32758):-repeat(_32758).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_once_1 : public Code {

/*

once(_32774,_32782):-call(_32774,cut(1,_32782)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_sub_atom_5 : public Code {

/*

sub_atom(_32928,_32930,_32932,_32934,_32936,_32950):-atom_concat(_32938,_32940,_32928,atom_length(_32938,_32930,atom_concat(_32936,_32942,_32940,atom_length(_32936,_32932,atom_length(_32942,_32934,_32950))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_name_2 : public Code {

/*

name(_33016,_33018,_33082):-nonvar(_33016,or((number(_33016)->number_codes(_33016,_33018)),(atomic(_33016)->atom_codes(_33016,_33018);illarg(type(atomic),name(_33016,_33018),1)),_33082)).
name(_33112,_33114,_33186):-var(_33112,or((number_codes(_33118,_33114)->_33112=_33118),(atom_codes(_33118,_33114)->_33112=_33118;illarg(type(list(char)),name(_33112,_33114),2)),_33186)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_regex_matches_3 : public Code {

/*

regex_matches(_33216,[],_33218,_33226):-cut(1,fail(_33226)).
regex_matches(_33254,_33256,_33258,_33272):-unify([_33262|_33264],_33256,cut(1,regex_list(_33254,_33256,_33258,_33272))).
regex_matches(_33314,_33316,_33318,_33328):-atom(_33316,regex_compile(_33314,_33320,regex_match(_33320,_33316,_33318,_33328))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_regex_matches_2 : public Code {

/*

regex_matches(_33370,_33372,_33388):-once(regex_matches(_33370,_33372,_33380),_33388).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_regex_list_3 : public Code {

/*

regex_list(_33416,[_33412|_33414],_33418,_33426):-regex_matches(_33416,_33412,_33418,_33426).
regex_list(_33460,[_33456|_33458],_33462,_33470):-regex_list(_33460,_33458,_33462,_33470).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_set_prolog_flag_2 : public Code {

/*

set_prolog_flag(_33558,_33560,_33574):-var(_33558,cut(1,illarg(var,set_prolog_flag(_33558,_33560),1,_33574))).
set_prolog_flag(_33612,_33614,_33628):-var(_33614,cut(1,illarg(var,set_prolog_flag(_33612,_33614),2,_33628))).
set_prolog_flag(_33666,_33668,_33676):-atom(_33666,cut(1,'$set_prolog_flag0'(_33666,_33668,_33676))).
set_prolog_flag(_33712,_33714,_33732):-illarg(type(atom),set_prolog_flag(_33712,_33714),1,_33732).


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

'$set_prolog_flag0'(_33758,_33760,_33774):-'$prolog_impl_flag'(_33758,_33766,changeable(_33764),cut(1,'$set_prolog_flag0'(_33764,_33758,_33760,_33766,_33774))).
'$set_prolog_flag0'(_33818,_33820,_33840):-illarg(domain(atom,prolog_flag),set_prolog_flag(_33818,_33820),1,_33840).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$set_prolog_flag0_4 : public Code {

/*

'$set_prolog_flag0'(no,_33866,_33868,_33870,_33896):-cut(1,illarg(permission(modify,flag,_33866,_33880),set_prolog_flag(_33866,_33868),_33888,_33896)).
'$set_prolog_flag0'(_33932,_33934,_33936,_33938,_33946):-'$builtin_member'(_33936,_33938,cut(1,'$set_prolog_impl_flag'(_33934,_33936,_33946))).
'$set_prolog_flag0'(_33988,_33990,_33992,_33994,_34014):-illarg(domain(atom,flag_value),set_prolog_flag(_33990,_33992),2,_34014).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_current_prolog_flag_2 : public Code {

/*

current_prolog_flag(_34044,_34046,_34058):-var(_34044,cut(1,'$prolog_impl_flag'(_34044,_34048,_34050,'$get_prolog_impl_flag'(_34044,_34046,_34058)))).
current_prolog_flag(_34104,_34106,_34154):-atom(_34104,cut(1,or(('$prolog_impl_flag'(_34104,_34112,_34114)->'$get_prolog_impl_flag'(_34104,_34106)),illarg(domain(atom,prolog_flag),current_prolog_flag(_34104,_34106),1),_34154))).
current_prolog_flag(_34190,_34192,_34210):-illarg(type(atom),current_prolog_flag(_34190,_34192),1,_34210).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$prolog_impl_flag_3 : public Code {

/*

'$prolog_impl_flag'(max_integer,_34240,changeable(no),_34250):-call(_34250).
'$prolog_impl_flag'(min_integer,_34272,changeable(no),_34282):-call(_34282).
'$prolog_impl_flag'(debug,[on,off],changeable(yes),_34324):-call(_34324).
'$prolog_impl_flag'(max_arity,_34346,changeable(no),_34356):-call(_34356).
'$prolog_impl_flag'(unknown,[error,fail,warning],changeable(yes),_34404):-call(_34404).
'$prolog_impl_flag'(double_quotes,[chars,codes,atom],changeable(no),_34452):-call(_34452).
'$prolog_impl_flag'(print_stack_trace,[on,off],changeable(yes),_34494):-call(_34494).


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

halt(_34578):-halt(0,_34578).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_abort_0 : public Code {

/*

abort(_34602):-raise_exception('Execution aborted',_34602).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_C_3 : public Code {

/*

'C'([_34664|_34666],_34664,_34666,_34676):-call(_34676).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_expand_term_2 : public Code {

/*

expand_term(_34694,_34696,_34704):-var(_34694,cut(1,unify(_34696,_34694,_34704))).
expand_term(_34740,_34742,_34752):-'$dcg_expansion'(_34740,_34744,cut(1,unify(_34742,_34744,_34752))).
expand_term(_34790,_34790,_34800):-call(_34800).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_expansion_2 : public Code {

/*

'$dcg_expansion'(_34816,_34818,_34826):-var(_34816,cut(1,unify(_34818,_34816,_34826))).
'$dcg_expansion'((_34864-->_34866),(_34876:-_34870,_34872),_34904):-nonvar(_34864,unify((_34882,_34884),_34864,unify([_34888|_34890],_34884,cut(1,'$dcg_translation_atom'(_34882,_34876,_34892,_34894,'$dcg_translation'(_34866,_34870,_34892,_34896,'$dcg_translation'(_34884,_34872,_34894,_34896,_34904))))))).
'$dcg_expansion'((_34986-->_34988),(_34992:-_34994),_35006):-'$dcg_translation_atom'(_34986,_34992,_34996,_34998,'$dcg_translation'(_34988,_34994,_34996,_34998,_35006)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_translation_atom_4 : public Code {

/*

'$dcg_translation_atom'(_35048,phrase(_35048,_35050,_35052),_35050,_35052,_35060):-var(_35048,cut(1,_35060)).
'$dcg_translation_atom'(_35094:_35096,_35094:_35102,_35104,_35106,_35114):-cut(1,'$dcg_translation_atom'(_35096,_35102,_35104,_35106,_35114)).
'$dcg_translation_atom'(_35152,_35154,_35156,_35158,_35192):- =..(_35152,[_35162|_35164],'$builtin_append'(_35164,[_35156,_35158],_35178,=..(_35154,[_35162|_35178],_35192))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_translation_4 : public Code {

/*

'$dcg_translation'(_35238,_35240,_35242,_35244,_35256):-'$dcg_trans'(_35238,_35246,_35248,_35242,_35244,'$dcg_trans0'(_35246,_35240,_35248,_35242,_35244,_35256)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_trans0_5 : public Code {

/*

'$dcg_trans0'(_35304,_35304,_35306,_35308,_35306,_35316):- \==(_35306,_35308,cut(1,_35316)).
'$dcg_trans0'(_35352,_35354,_35356,_35358,_35360,_35374):-'$dcg_concat'(_35352,_35360=_35356,_35354,_35374).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_concat_3 : public Code {

/*

'$dcg_concat'(_35406,_35408,_35410,_35418):-termequal(_35406,true,cut(1,unify(_35408,_35410,_35418))).
'$dcg_concat'(_35458,_35460,_35462,_35470):-termequal(_35460,true,cut(1,unify(_35458,_35462,_35470))).
'$dcg_concat'(_35512,_35514,(_35512,_35514),_35524):-call(_35524).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$dcg_trans_5 : public Code {

/*

'$dcg_trans'(_35542,_35544,_35546,_35548,_35546,_35556):-var(_35542,cut(1,'$dcg_translation_atom'(_35542,_35544,_35548,_35546,_35556))).
'$dcg_trans'(_35604:_35606,_35604:_35612,_35614,_35616,_35618,_35626):-cut(1,'$dcg_trans'(_35606,_35612,_35614,_35616,_35618,_35626)).
'$dcg_trans'([],true,_35668,_35668,_35670,_35678):-cut(1,_35678).
'$dcg_trans'([_35708|_35710],_35712,_35714,_35716,_35718,_35738):-cut(1,'$dcg_trans'(_35710,_35720,_35714,_35722,_35718,'$dcg_concat'('C'(_35716,_35708,_35722),_35720,_35712,_35738))).
'$dcg_trans'(\+_35792,(_35796->fail;_35802=_35804),_35802,_35804,_35802,_35820):-cut(1,'$dcg_trans'(_35792,_35796,_35812,_35804,_35812,_35820)).
'$dcg_trans'((_35864,_35866),_35868,_35870,_35872,_35874,_35888):-cut(1,'$dcg_trans'(_35864,_35876,_35878,_35872,_35878,'$dcg_trans'(_35866,_35880,_35870,_35878,_35874,'$dcg_concat'(_35876,_35880,_35868,_35888)))).
'$dcg_trans'((_35956->_35958),(_35962->_35964),_35966,_35968,_35970,_35980):-cut(1,'$dcg_trans'(_35956,_35962,_35972,_35968,_35972,'$dcg_trans'(_35958,_35964,_35966,_35972,_35970,_35980))).
'$dcg_trans'((_36038;_36040),(_36044;_36046),_36048,_36050,_36048,_36058):-cut(1,'$dcg_translation'(_36038,_36044,_36050,_36048,'$dcg_translation'(_36040,_36046,_36050,_36048,_36058))).
'$dcg_trans'(!,!,_36110,_36110,_36112,_36120):-cut(1,_36120).
'$dcg_trans'({_36150},call(_36150),_36156,_36156,_36158,_36166):-var(_36150,cut(1,_36166)).
'$dcg_trans'({_36202},_36202,_36204,_36204,_36206,_36214):-cut(1,_36214).
'$dcg_trans'(_36242,_36244,_36246,_36248,_36246,_36256):-'$dcg_translation_atom'(_36242,_36244,_36248,_36246,_36256).


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

new_hash(_36380,_36388):-new_hash(_36380,[],_36388).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_hash_map_2 : public Code {

/*

hash_map(_36410,_36412,_36424):-hash_keys(_36410,_36414,sort(_36414,_36416,hash_map(_36416,_36412,_36410,_36424))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_hash_map_3 : public Code {

/*

hash_map([],[],_36466,_36474):-cut(1,_36474).
hash_map([_36500|_36502],[(_36500,_36508)|_36514],_36516,_36524):-hash_get(_36516,_36500,_36508,hash_map(_36502,_36514,_36516,_36524)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_hash_exists_1 : public Code {

/*

hash_exists(_36562,_36572):-atom(_36562,'$get_hash_manager'(_36564,hash_contains_key(_36564,_36562,_36572))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_constructor_2 : public Code {

/*

java_constructor(_36876,_36878,_36904):- =..(_36876,[_36882|_36884],builtin_java_convert_args(_36884,_36886,=..(_36894,[_36882|_36886],java_constructor0(_36894,_36896,unify(_36896,_36878,_36904))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_declared_constructor_2 : public Code {

/*

java_declared_constructor(_36960,_36962,_36988):- =..(_36960,[_36966|_36968],builtin_java_convert_args(_36968,_36970,=..(_36978,[_36966|_36970],java_declared_constructor0(_36978,_36980,unify(_36980,_36962,_36988))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_method_3 : public Code {

/*

java_method(_37044,_37046,_37048,_37076):- =..(_37046,[_37052|_37054],builtin_java_convert_args(_37054,_37056,=..(_37064,[_37052|_37056],java_method0(_37044,_37064,_37066,java_conversion(_37068,_37066,unify(_37068,_37048,_37076)))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_declared_method_3 : public Code {

/*

java_declared_method(_37144,_37146,_37148,_37176):- =..(_37146,[_37152|_37154],builtin_java_convert_args(_37154,_37156,=..(_37164,[_37152|_37156],java_declared_method0(_37144,_37164,_37166,java_conversion(_37168,_37166,unify(_37168,_37148,_37176)))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_get_field_3 : public Code {

/*

java_get_field(_37244,_37246,_37248,_37260):-java_get_field0(_37244,_37246,_37250,java_conversion(_37252,_37250,unify(_37252,_37248,_37260))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_get_declared_field_3 : public Code {

/*

java_get_declared_field(_37304,_37306,_37308,_37320):-java_get_declared_field0(_37304,_37306,_37310,java_conversion(_37312,_37310,unify(_37312,_37308,_37320))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_set_field_3 : public Code {

/*

java_set_field(_37364,_37366,_37368,_37378):-java_conversion(_37368,_37370,java_set_field0(_37364,_37366,_37370,_37378)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_java_set_declared_field_3 : public Code {

/*

java_set_declared_field(_37414,_37416,_37418,_37428):-java_conversion(_37418,_37420,java_set_declared_field0(_37414,_37416,_37420,_37428)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_builtin_java_convert_args_2 : public Code {

/*

builtin_java_convert_args([],[],_37470):-cut(1,_37470).
builtin_java_convert_args([_37494|_37496],[_37500|_37502],_37510):-java_conversion(_37494,_37500,builtin_java_convert_args(_37496,_37502,_37510)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_synchronized_2 : public Code {

/*

synchronized(_37542,_37544,_37554):-'$begin_sync'(_37542,_37546,call(_37544,'$end_sync'(_37546,_37554))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_cafeteria_0 : public Code {

/*

cafeteria(_38470):-'$cafeteria_init'(repeat('$toplvel_loop'(on_exception(_38462,'$cafeteria'(_38456),print_message(error,_38462),termequal(_38456,end_of_file,cut(1,nl('$fast_write'(bye,nl(_38470))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$cafeteria_init_0 : public Code {

/*

'$cafeteria_init'(_38590):-retractall('$leap_flag'(_38534),retractall('$current_leash'(_38538),retractall('$current_spypoint'(_38542,_38544,_38546),retractall('$consulted_file'(_38550),retractall('$consulted_package'(_38554),retractall('$consulted_predicate'(_38558,_38560,_38562),assertz('$leap_flag'(no),assertz('$current_leash'(call),assertz('$current_leash'(exit),assertz('$current_leash'(redo),assertz('$current_leash'(fail),cut(1,_38590)))))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$toplvel_loop_0 : public Code {

/*

'$toplvel_loop'(_38706):-current_prolog_flag(debug,_38674,or((_38674==off->true),print_message(info,[debug]),'$fast_write'('| ?- ',flush_output(_38706)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$cafeteria_1 : public Code {

/*

'$cafeteria'(_38744,_38754):-read_with_variables(_38744,_38746,'$process_order'(_38744,_38746,_38754)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$process_order_2 : public Code {

/*

'$process_order'(_38784,_38786,_38798):-var(_38784,cut(1,illarg(var,(?-_38784),1,_38798))).
'$process_order'(end_of_file,_38836,_38844):-cut(1,_38844).
'$process_order'([_38868|_38870],_38872,_38886):-cut(1,consult([_38868|_38870],_38886)).
'$process_order'(_38914,_38916,_38960):-current_prolog_flag(debug,_38918,or((_38918==off->call(user:_38914)),'$trace_goal'(user:_38914),nl('$rm_redundant_vars'(_38916,_38952,'$give_answers_with_prompt'(_38952,cut(1,'$fast_write'(yes,nl(_38960)))))))).
'$process_order'(_39026,_39028,_39036):-nl('$fast_write'(no,nl(_39036))).


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

'$rm_redundant_vars'([],[],_39072):-cut(1,_39072).
'$rm_redundant_vars'(['_'=_39098|_39104],_39106,_39114):-cut(1,'$rm_redundant_vars'(_39104,_39106,_39114)).
'$rm_redundant_vars'([_39146|_39148],[_39146|_39154],_39162):-'$rm_redundant_vars'(_39148,_39154,_39162).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$give_answers_with_prompt_1 : public Code {

/*

'$give_answers_with_prompt'([],_39192):-cut(1,_39192).
'$give_answers_with_prompt'(_39212,_39228):-'$give_an_answer'(_39212,'$fast_write'(' ? ',flush_output(read_line(_39214,\==(_39214,";",nl(_39228)))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$give_an_answer_1 : public Code {

/*

'$give_an_answer'([],_39282):-cut(1,'$fast_write'(true,_39282)).
'$give_an_answer'([_39310],_39320):-cut(1,'$print_an answer'(_39310,_39320)).
'$give_an_answer'([_39348|_39350],_39358):-'$print_an answer'(_39348,'$fast_write'(',',nl('$give_an_answer'(_39350,_39358)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$print_an answer_1 : public Code {

/*

'$print_an answer'(_39396=_39398,_39406):-write(_39396,'$fast_write'(' = ',writeq(_39398,_39406))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_consult_1 : public Code {

/*

consult(_39438,_39450):-var(_39438,cut(1,illarg(var,consult(_39438),1,_39450))).
consult([],_39492):-cut(1,_39492).
consult([_39514|_39516],_39524):-cut(1,consult(_39514,consult(_39516,_39524))).
consult(_39556,_39564):-atom(_39556,cut(1,'$consult'(_39556,_39564))).


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

'$consult'(_39596,_39668):-'$prolog_file_name'(_39596,_39598,open(_39598,read,_39600,stream_property(_39600,file_name(_39604),print_message(info,[consulting,_39604,...],statistics(runtime,_39624,consult_stream(_39604,_39600,statistics(runtime,[_39628,_39634],print_message(info,[_39604,consulted,_39634,msec],close(_39600,_39668))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_consult_stream_2 : public Code {

/*

consult_stream(_39754,_39756,_39766):-'$consult_init'(_39754,repeat(read(_39756,_39758,'$consult_clause'(_39758,termequal(_39758,end_of_file,cut(1,_39766)))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$prolog_file_name_2 : public Code {

/*

'$prolog_file_name'(_39820,_39820,_39834):-sub_atom(_39820,_39822,_39824,_39826,'.',smallerthan(0,_39826,cut(1,_39834))).
'$prolog_file_name'(_39878,_39880,_39888):-atom_concat(_39878,'.pl',_39880,_39888).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$consult_init_1 : public Code {

/*

'$consult_init'(_39914,_39950):-retractall('$consulted_file'(_39918),retractall('$consulted_package'(_39922),retractall('$consulted_import'(_39914,_39928),retract('$consulted_predicate'(_39932,_39934,_39914),abolish(_39932:_39934,fail(_39950)))))).
'$consult_init'(_39998,_40014):-assertz('$consulted_file'(_39998),assertz('$consulted_package'(user),_40014)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$consult_clause_1 : public Code {

/*

'$consult_clause'(end_of_file,_40046):-cut(1,_40046).
'$consult_clause'((:-module(_40068,_40070)),_40082):-cut(1,'$assert_consulted_package'(_40068,_40082)).
'$consult_clause'((:-package _40110),_40122):-cut(1,'$assert_consulted_package'(_40110,_40122)).
'$consult_clause'((:-import _40150),_40162):-cut(1,'$assert_consulted_import'(_40150,_40162)).
'$consult_clause'((:-dynamic _40190),_40202):-cut(1,_40202).
'$consult_clause'((:-public _40224),_40236):-cut(1,_40236).
'$consult_clause'((:-meta_predicate _40258),_40270):-cut(1,_40270).
'$consult_clause'((:-mode _40292),_40304):-cut(1,_40304).
'$consult_clause'((:-multifile _40326),_40338):-cut(1,_40338).
'$consult_clause'((:-block _40360),_40372):-cut(1,_40372).
'$consult_clause'((:-_40394),_40414):-cut(1,clause('$consulted_package'(_40398),_40400,once(_40398:_40394,_40414))).
'$consult_clause'(_40448,_40458):-'$consult_preprocess'(_40448,_40450,'$consult_cls'(_40450,_40458)).


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

'$assert_consulted_package'(_40486,_40500):-clause('$consulted_package'(_40486),_40492,cut(1,_40500)).
'$assert_consulted_package'(_40528,_40544):-retractall('$consulted_package'(_40532),assertz('$consulted_package'(_40528),_40544)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$assert_consulted_import_1 : public Code {

/*

'$assert_consulted_import'(_40570,_40590):-clause('$consulted_file'(_40574),_40576,assertz('$consulted_import'(_40574,_40570),_40590)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$consult_preprocess_2 : public Code {

/*

'$consult_preprocess'(_40618,_40620,_40628):-expand_term(_40618,_40620,_40628).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$consult_cls_1 : public Code {

/*

'$consult_cls'((_40654:-_40656),_40670):-cut(1,'$assert_consulted_clause'((_40654:-_40656),_40670)).
'$consult_cls'(_40696,_40710):-'$assert_consulted_clause'((_40696:-true),_40710).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$assert_consulted_clause_1 : public Code {

/*

'$assert_consulted_clause'(_40730,_40780):-unify((_40734:-_40736),_40730,functor(_40734,_40738,_40740,clause('$consulted_file'(_40744),_40746,clause('$consulted_package'(_40750),_40752,assertz(_40750:_40730,assertz('$consulted_predicate'(_40750,_40738/_40740,_40744),cut(1,_40780))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_trace_0 : public Code {

/*

trace(_40852):-current_prolog_flag(debug,on,cut(1,_40852)).
trace(_40884):-set_prolog_flag(debug,on,'$trace_init'('$fast_write'('{Small debugger is switch on}',nl(cut(1,_40884))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$trace_init_0 : public Code {

/*

'$trace_init'(_40966):-retractall('$leap_flag'(_40926),retractall('$current_leash'(_40930),retractall('$current_spypoint'(_40934,_40936,_40938),assertz('$leap_flag'(no),assertz('$current_leash'(call),assertz('$current_leash'(exit),assertz('$current_leash'(redo),assertz('$current_leash'(fail),cut(1,_40966))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_notrace_0 : public Code {

/*

notrace(_41038):-current_prolog_flag(debug,off,cut(1,_41038)).
notrace(_41070):-set_prolog_flag(debug,off,'$fast_write'('{Small debugger is switch off}',nl(cut(1,_41070)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_debug_0 : public Code {

/*

debug(_41112):-trace(_41112).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_nodebug_0 : public Code {

/*

nodebug(_41134):-notrace(_41134).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_spy_1 : public Code {

/*

spy(_41150,_41164):-'$term_to_predicateindicator'(_41150,_41156,spy(_41150),trace('$assert_spypoint'(_41156,'$set_debug_flag'(leap,yes,cut(1,_41164))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$assert_spypoint_1 : public Code {

/*

'$assert_spypoint'(_41220:_41214/_41216,_41282):-clause('$current_spypoint'(_41220,_41214,_41216),_41232,print_message(info,[spypoint,_41220:_41214/_41216,is,already,added],cut(1,_41282))).
'$assert_spypoint'(_41326:_41320/_41322,_41396):-clause('$consulted_predicate'(_41326,_41320/_41322,_41342),_41344,assertz('$current_spypoint'(_41326,_41320,_41322),print_message(info,[spypoint,_41326:_41320/_41322,is,added],cut(1,_41396)))).
'$assert_spypoint'(_41446:_41440/_41442,_41504):-print_message(warning,[no,matching,predicate,for,spy,_41446:_41440/_41442],_41504).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_nospy_1 : public Code {

/*

nospy(_41526,_41540):-'$term_to_predicateindicator'(_41526,_41532,nospy(_41526),'$retract_spypoint'(_41532,'$set_debug_flag'(leap,no,cut(1,_41540)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$retract_spypoint_1 : public Code {

/*

'$retract_spypoint'(_41592:_41586/_41588,_41646):-retract('$current_spypoint'(_41592,_41586,_41588),print_message(info,[spypoint,_41592:_41586/_41588,is,removed],cut(1,_41646))).
'$retract_spypoint'(_41680,_41690):-call(_41690).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_nospyall_0 : public Code {

/*

nospyall(_41718):-retractall('$current_spypoint'(_41706,_41708,_41710),'$set_debug_flag'(leap,no,_41718)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_leash_1 : public Code {

/*

leash(_41744,_41752):-nonvar(_41744,'$leash'(_41744,cut(1,_41752))).
leash(_41784,_41800):-illarg(type(leash_specifier),leash(_41784),1,_41800).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$leash_1 : public Code {

/*

'$leash'([],_41846):-cut(1,retractall('$current_leash'(_41826),print_message(info,[no,leashing],_41846))).
'$leash'(_41880,_41916):-retractall('$current_leash'(_41884),'$assert_leash'(_41880,print_message(info,[leashing,stopping,on,_41880],_41916))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$assert_leash_1 : public Code {

/*

'$assert_leash'([],_41956):-cut(1,_41956).
'$assert_leash'([_41978|_41980],_41992):-'$leash_specifier'(_41978,assertz('$current_leash'(_41978),'$assert_leash'(_41980,_41992))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$leash_specifier_1 : public Code {

/*

'$leash_specifier'(call,_42032):-call(_42032).
'$leash_specifier'(exit,_42054):-call(_42054).
'$leash_specifier'(redo,_42076):-call(_42076).
'$leash_specifier'(fail,_42098):-call(_42098).


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

'$trace_goal'(_42112,_42122):-'$set_debug_flag'(leap,no,'$get_current_B'(_42114,'$meta_call'(_42112,user,_42114,0,trace,_42122))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$trace_goal_4 : public Code {

/*

'$trace_goal'(_42164,_42166,_42168,_42170,_42178):-print_procedure_box(call,_42164,_42166,_42168,_42170,'$call_internal'(_42164,_42166,_42168,_42170,trace,print_procedure_box(exit,_42164,_42166,_42168,_42170,redo_procedure_box(_42164,_42166,_42168,_42170,_42178)))).
'$trace_goal'(_42252,_42254,_42256,_42258,_42266):-print_procedure_box(fail,_42252,_42254,_42256,_42258,fail(_42266)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_print_procedure_box_5 : public Code {

/*

print_procedure_box(_42310,_42312,_42314,_42306/_42308,_42316,_42388):-clause('$current_spypoint'(_42314,_42306,_42308),_42326,cut(1,'$builtin_message'([+,_42316,_42310,:,_42314:_42312],'$read_blocked'(print_procedure_box(_42310,_42312,_42314,_42306/_42308,_42316),_42388)))).
print_procedure_box(_42436,_42438,_42440,_42442,_42444,_42526):-clause('$leap_flag'(no),_42450,cut(1,'$builtin_message'([' ',_42444,_42436,:,_42440:_42438],or((clause('$current_leash'(_42436),_42496)->'$read_blocked'(print_procedure_box(_42436,_42438,_42440,_42442,_42444))),nl,_42526)))).
print_procedure_box(_42576,_42578,_42580,_42582,_42584,_42594):-call(_42594).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_redo_procedure_box_4 : public Code {

/*

redo_procedure_box(_42616,_42618,_42620,_42622,_42632):-call(_42632).
redo_procedure_box(_42652,_42654,_42656,_42658,_42666):-print_procedure_box(redo,_42652,_42654,_42656,_42658,fail(_42666)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$read_blocked_1 : public Code {

/*

'$read_blocked'(_42704,_42744):-'$fast_write'(' ? ',flush_output(read_line(_42706,or((_42706==[]->_42716=99),_42706=[_42716|_42730],'$debug_option'(_42716,_42704,_42744))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$debug_option_2 : public Code {

/*

'$debug_option'(97,_42790,_42798):-cut(1,notrace(abort(_42798))).
'$debug_option'(99,_42828,_42836):-cut(1,'$set_debug_flag'(leap,no,_42836)).
'$debug_option'(108,_42866,_42874):-cut(1,'$set_debug_flag'(leap,yes,_42874)).
'$debug_option'(43,print_procedure_box(_42906,_42908,_42910,_42912,_42914),_42940):-cut(1,spy(_42910:_42912,call(print_procedure_box(_42906,_42908,_42910,_42912,_42914),_42940))).
'$debug_option'(45,print_procedure_box(_42976,_42978,_42980,_42982,_42984),_43010):-cut(1,nospy(_42980:_42982,call(print_procedure_box(_42976,_42978,_42980,_42982,_42984),_43010))).
'$debug_option'(63,_43044,_43052):-cut(1,'$show_debug_option'(call(_43044,_43052))).
'$debug_option'(104,_43084,_43092):-cut(1,'$show_debug_option'(call(_43084,_43092))).
'$debug_option'(_43124,_43126,_43136):-call(_43136).


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

'$show_debug_option'(_43158):-tab(4,'$fast_write'('Debuggin options:',nl(tab(4,'$fast_write'('a      abort',nl(tab(4,'$fast_write'('RET    creep',nl(tab(4,'$fast_write'('c      creep',nl(tab(4,'$fast_write'('l      leap',nl(tab(4,'$fast_write'('+      spy this',nl(tab(4,'$fast_write'('-      nospy this',nl(tab(4,'$fast_write'('?      help',nl(tab(4,'$fast_write'('h      help',nl(_43158))))))))))))))))))))))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$set_debug_flag_2 : public Code {

/*

'$set_debug_flag'(leap,_43314,_43328):-clause('$leap_flag'(_43314),_43320,cut(1,_43328)).
'$set_debug_flag'(leap,_43358,_43374):-retractall('$leap_flag'(_43362),assertz('$leap_flag'(_43358),_43374)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_listing_0 : public Code {

/*

listing(_43410):-'$listing'(_43402,user,_43410).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_listing_1 : public Code {

/*

listing(_43430,_43442):-var(_43430,cut(1,illarg(var,listing(_43430),1,_43442))).
listing(_43478,_43488):-atom(_43478,cut(1,'$listing'(_43480,_43478,_43488))).
listing(_43524/_43526,_43540):-cut(1,'$listing'(_43524/_43526,user,_43540)).
listing(_43570:_43572,_43580):-atom(_43570,cut(1,'$listing'(_43572,_43570,_43580))).
listing(_43614,_43630):-illarg(type(predicate_indicator),listing(_43614),1,_43630).


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

'$listing'(_43654,_43656,_43666):-var(_43654,cut(1,'$listing_dynamic_clause'(_43656,_43658,_43666))).
'$listing'(_43704/_43706,_43708,_43722):-atom(_43704,integer(_43706,cut(1,'$listing_dynamic_clause'(_43708,_43704/_43706,_43722)))).
'$listing'(_43764,_43766,_43788):-illarg(type(predicate_indicator),listing(_43766:_43764),1,_43788).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$listing_dynamic_clause_2 : public Code {

/*

'$listing_dynamic_clause'(_43814,_43816,_43838):-'$new_internal_database'(_43814,hash_keys(_43814,_43818,'$builtin_member'(_43816,_43818,unify(_43822/_43824,_43816,functor(_43826,_43822,_43824,'$clause_internal'(_43814,_43816,_43826,_43828,_43830,'$write_dynamic_clause'(_43814,_43828,fail(_43838)))))))).
'$listing_dynamic_clause'(_43920,_43922,_43932):-call(_43932).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_dynamic_clause_2 : public Code {

/*

'$write_dynamic_clause'(_43948,_43950,_43958):-var(_43950,cut(1,fail(_43958))).
'$write_dynamic_clause'(_43996,(_43992:-true),_44006):-cut(1,numbervars(_43992,0,_43998,'$write_dynamic_head'(_43996,_43992,write('.',nl(_44006))))).
'$write_dynamic_clause'(_44062,(_44058:-_44060),_44078):-cut(1,numbervars((_44058:-_44060),0,_44070,'$write_dynamic_head'(_44062,_44058,write(' :-',nl('$write_dynamic_body'(_44060,8,write('.',nl(_44078)))))))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_dynamic_head_2 : public Code {

/*

'$write_dynamic_head'(user,_44146,_44154):-cut(1,writeq(_44146,_44154)).
'$write_dynamic_head'(_44182,_44184,_44192):-write(_44182,write(:,writeq(_44184,_44192))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$write_dynamic_body_2 : public Code {

/*

'$write_dynamic_body'((_44228,_44230),_44232,_44240):-cut(1,'$write_dynamic_body'(_44228,_44232,write(',',nl('$write_dynamic_body'(_44230,_44232,_44240))))).
'$write_dynamic_body'((_44290;_44292),_44294,_44310):-cut(1,is(_44302,_44294+4,tab(_44294,write('(',nl('$write_dynamic_body'(_44290,_44302,nl(tab(_44294,write(;,nl('$write_dynamic_body'(_44292,_44302,nl(tab(_44294,write(')',_44310)))))))))))))).
'$write_dynamic_body'((_44410->_44412),_44414,_44430):-cut(1,is(_44422,_44414+4,tab(_44414,write('(',nl('$write_dynamic_body'(_44410,_44422,nl(tab(_44414,write(->,nl('$write_dynamic_body'(_44412,_44422,nl(tab(_44414,write(')',_44430)))))))))))))).
'$write_dynamic_body'(_44528,_44530,_44538):-tab(_44530,writeq(_44528,_44538)).


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

length(_44686,_44688,_44696):-var(_44688,cut(1,'$length'(_44686,0,_44688,_44696))).
length(_44734,_44736,_44744):-'$length0'(_44734,0,_44736,_44744).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$length_3 : public Code {

/*

'$length'([],_44770,_44770,_44780):-call(_44780).
'$length'([_44800|_44802],_44804,_44806,_44822):-is(_44814,_44804+1,'$length'(_44802,_44814,_44806,_44822)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$length0_3 : public Code {

/*

'$length0'([],_44858,_44858,_44866):-cut(1,_44866).
'$length0'([_44892|_44894],_44896,_44898,_44914):-smallerthan(_44896,_44898,is(_44906,_44896+1,'$length0'(_44894,_44906,_44898,_44914))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_numbervars_3 : public Code {

/*

numbervars(_44958,_44960,_44962,_44970):-integer(_44960,smallerorequal(0,_44960,cut(1,'$numbervars'(_44958,_44960,_44962,_44970)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$numbervars_3 : public Code {

/*

'$numbervars'(_45018,_45020,_45022,_45040):-var(_45018,cut(1,unify('$VAR'(_45020),_45018,is(_45022,_45020+1,_45040)))).
'$numbervars'(_45086,_45088,_45088,_45096):-atomic(_45086,cut(1,_45096)).
'$numbervars'(_45126,_45128,_45128,_45136):-java(_45126,cut(1,_45136)).
'$numbervars'(_45166,_45168,_45170,_45182):-functor(_45166,_45172,_45174,'$numbervars_str'(1,_45174,_45166,_45168,_45170,_45182)).


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

'$numbervars_str'(_45224,_45224,_45226,_45228,_45230,_45240):-cut(1,arg(_45224,_45226,_45232,'$numbervars'(_45232,_45228,_45230,_45240))).
'$numbervars_str'(_45288,_45290,_45292,_45294,_45296,_45316):-arg(_45288,_45292,_45298,'$numbervars'(_45298,_45294,_45300,is(_45308,_45288+1,'$numbervars_str'(_45308,_45290,_45292,_45300,_45296,_45316)))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_statistics_2 : public Code {

/*

statistics(_45380,_45382,_45390):-nonvar(_45380,'$statistics_mode'(_45380,cut(1,'$statistics'(_45380,_45382,_45390)))).
statistics(_45432,_45434,_45460):-findall(_45438,'$statistics_mode'(_45438),_45440,illarg(domain(atom,_45440),statistics(_45432,_45434),1,_45460)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$statistics_mode_1 : public Code {

/*

'$statistics_mode'(runtime,_45504):-call(_45504).
'$statistics_mode'(trail,_45526):-call(_45526).
'$statistics_mode'(choice,_45548):-call(_45548).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_print_message_2 : public Code {

/*

print_message(_45562,_45564,_45578):-var(_45562,cut(1,illarg(var,print_message(_45562,_45564),1,_45578))).
print_message(error,_45616,_45624):-cut(1,'$error_message'(_45616,_45624)).
print_message(info,_45652,_45660):-cut(1,'$fast_write'('{','$builtin_message'(_45652,'$fast_write'('}',nl(_45660))))).
print_message(warning,_45704,_45712):-cut(1,'$fast_write'('{WARNING: ','$builtin_message'(_45704,'$fast_write'('}',nl(_45712))))).


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

'$error_message'(instantiation_error(_45758,0),_45768):-cut(1,'$fast_write'(user_error,'{INSTANTIATION ERROR: ','$write_goal'(user_error,_45758,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_45768)))))).
'$error_message'(instantiation_error(_45826,_45828),_45836):-cut(1,'$fast_write'(user_error,'{INSTANTIATION ERROR: ','$write_goal'(user_error,_45826,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_45828,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_45836)))))))).
'$error_message'(type_error(_45910,_45912,_45914,_45916),_45924):-cut(1,'$fast_write'(user_error,'{TYPE ERROR: ','$write_goal'(user_error,_45910,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_45912,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_45914,'$fast_write'(user_error,', found ',write(user_error,_45916,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_45924)))))))))))).
'$error_message'(domain_error(_46030,_46032,_46034,_46036),_46044):-cut(1,'$fast_write'(user_error,'{DOMAIN ERROR: ','$write_goal'(user_error,_46030,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46032,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_46034,'$fast_write'(user_error,', found ',write(user_error,_46036,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46044)))))))))))).
'$error_message'(existence_error(_46150,0,_46154,_46156,_46158),_46166):-cut(1,'$fast_write'(user_error,'{EXISTENCE ERROR: ','$fast_write'(user_error,_46154,'$fast_write'(user_error,' ',write(user_error,_46156,'$fast_write'(user_error,' does not exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46166))))))))).
'$error_message'(existence_error(_46248,_46250,_46252,_46254,_46256),_46264):-cut(1,'$fast_write'(user_error,'{EXISTENCE ERROR: ','$write_goal'(user_error,_46248,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46250,'$fast_write'(user_error,': ','$fast_write'(user_error,_46252,'$fast_write'(user_error,' ',write(user_error,_46254,'$fast_write'(user_error,' does not exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46264))))))))))))).
'$error_message'(permission_error(_46378,_46380,_46382,_46384,_46386),_46394):-cut(1,'$fast_write'(user_error,'{PERMISSION ERROR: ','$write_goal'(user_error,_46378,'$fast_write'(user_error,' - can not ','$fast_write'(user_error,_46380,'$fast_write'(user_error,' ','$fast_write'(user_error,_46382,'$fast_write'(user_error,' ',write(user_error,_46384,'$fast_write'(user_error,': ','$fast_write'(user_error,_46386,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46394)))))))))))))).
'$error_message'(representation_error(_46516,_46518,_46520),_46528):-cut(1,'$fast_write'(user_error,'{REPRESENTATION ERROR: ','$write_goal'(user_error,_46516,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46518,'$fast_write'(user_error,': limit of ','$fast_write'(user_error,_46520,'$fast_write'(user_error,' is breached','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46528))))))))))).
'$error_message'(evaluation_error(_46626,_46628,_46630),_46638):-cut(1,'$fast_write'(user_error,'{EVALUATION ERROR: ','$write_goal'(user_error,_46626,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46628,'$fast_write'(user_error,', found ','$fast_write'(user_error,_46630,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46638)))))))))).
'$error_message'(syntax_error(_46728,_46730,_46732,_46734,_46736),_46744):-cut(1,'$fast_write'(user_error,'{SYNTAX ERROR: ','$write_goal'(user_error,_46728,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46730,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_46732,'$fast_write'(user_error,', found ',write(user_error,_46734,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46744)))))))))))).
'$error_message'(system_error(_46850),_46858):-cut(1,'$fast_write'(user_error,'{SYSTEM ERROR: ',write(user_error,_46850,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46858)))))).
'$error_message'(internal_error(_46916),_46924):-cut(1,'$fast_write'(user_error,'{INTERNAL ERROR: ',write(user_error,_46916,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46924)))))).
'$error_message'(java_error(_46982,_46984,_46986),_46994):-cut(1,'$fast_write'(user_error,'{JAVA ERROR: ','$write_goal'(user_error,_46982,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46984,'$fast_write'(user_error,', found ','$write_goal'(user_error,_46986,'$fast_write'(user_error,'}',nl(user_error,'$print_stack_trace'(_46986,flush_output(user_error,_46994))))))))))).
'$error_message'(_47088,_47096):-'$fast_write'(user_error,'{',write(user_error,_47088,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47096))))).


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

'$write_goal'(_47146,_47148,_47156):-java(_47148,cut(1,'$write_toString'(_47146,_47148,_47156))).
'$write_goal'(_47192,_47194,_47202):-write(_47192,_47194,_47202).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_illarg_3 : public Code {

/*

illarg(_47226,_47228,_47230,_47238):-var(_47226,cut(1,illarg(var,_47228,_47230,_47238))).
illarg(var,_47278,_47280,_47294):-raise_exception(instantiation_error(_47278,_47280),_47294).
illarg(type(_47320),_47322,_47324,_47372):-arg(_47324,_47322,_47326,or((nonvar(_47326)->_47344=type_error(_47322,_47324,_47320,_47326)),_47344=instantiation_error(_47322,_47324),raise_exception(_47344,_47372))).
illarg(domain(_47416,_47418),_47420,_47422,_47504):-arg(_47422,_47420,_47424,or(('$match_type'(_47416,_47424)->_47444=domain_error(_47420,_47422,_47418,_47424)),(nonvar(_47424)->_47444=type_error(_47420,_47422,_47416,_47424);_47444=instantiation_error(_47420,_47422)),raise_exception(_47444,_47504))).
illarg(existence(_47548,_47550,_47552),_47554,_47556,_47576):-raise_exception(existence_error(_47554,_47556,_47548,_47550,_47552),_47576).
illarg(permission(_47602,_47604,_47606,_47608),_47610,_47612,_47632):-raise_exception(permission_error(_47610,_47602,_47604,_47606,_47608),_47632).
illarg(representation(_47658),_47660,_47662,_47678):-raise_exception(representation_error(_47660,_47662,_47658),_47678).
illarg(evaluation(_47704),_47706,_47708,_47724):-raise_exception(evaluation_error(_47706,_47708,_47704),_47724).
illarg(syntax(_47750,_47752,_47754),_47756,_47758,_47778):-raise_exception(syntax_error(_47756,_47758,_47750,_47752,_47754),_47778).
illarg(system(_47804),_47806,_47808,_47820):-raise_exception(system_error(_47804),_47820).
illarg(internal(_47846),_47848,_47850,_47862):-raise_exception(internal_error(_47846),_47862).
illarg(java(_47888),_47890,_47892,_47908):-raise_exception(java_error(_47890,_47892,_47888),_47908).
illarg(_47932,_47934,_47936,_47944):-raise_exception(_47932,_47944).


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

'$match_type'(term,_47968,_47978):-call(_47978).
'$match_type'(variable,_47994,_48002):-var(_47994,_48002).
'$match_type'(atom,_48024,_48032):-atom(_48024,_48032).
'$match_type'(atomic,_48054,_48062):-atomic(_48054,_48062).
'$match_type'(byte,_48084,_48092):-integer(_48084,smallerorequal(0,_48084,smallerorequal(_48084,255,_48092))).
'$match_type'(in_byte,_48130,_48138):-integer(_48130,smallerorequal(-1,_48130,smallerorequal(_48130,255,_48138))).
'$match_type'(character,_48176,_48184):-atom(_48176,atom_length(_48176,1,_48184)).
'$match_type'(in_character,_48214,_48234):-or(_48214==end_of_file,'$match_type'(character,_48214),_48234).
'$match_type'(number,_48258,_48266):-number(_48258,_48266).
'$match_type'(integer,_48288,_48296):-integer(_48288,_48296).
'$match_type'(long,_48318,_48326):-long(_48318,_48326).
'$match_type'(float,_48348,_48356):-float(_48348,_48356).
'$match_type'(callable,_48378,_48386):-callable(_48378,_48386).
'$match_type'(compound,_48408,_48416):-compound(_48408,_48416).
'$match_type'(list,_48438,_48464):-nonvar(_48438,or(_48438=[],_48438=[_48448|_48450],_48464)).
'$match_type'(java,_48494,_48502):-java(_48494,_48502).
'$match_type'(stream,_48524,_48544):-or(java(_48524,'java.io.PushbackReader'),java(_48524,'java.io.PrintWriter'),_48544).
'$match_type'(stream_or_alias,_48568,_48586):-or(atom(_48568),'$match_type'(stream,_48568),_48586).
'$match_type'(hash,_48610,_48618):-java(_48610,'com.googlecode.prolog_cafe.lang.HashtableOfTerm',_48618).
'$match_type'(hash_or_alias,_48642,_48660):-or(atom(_48642),'$match_type'(hash,_48642),_48660).
'$match_type'(predicate_indicator,_48684,_48704):-nonvar(_48684,unify(_48694:_48688/_48690,_48684,atom(_48694,atom(_48688,integer(_48690,_48704))))).


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

with_mutex(_48782,_48784,_48810):-not(atom(_48782),not(java(_48782),cut(1,illarg(type(atom),with_mutex(_48782,_48784),1,_48810)))).
with_mutex(_48854,_48856,_48870):-var(_48856,cut(1,illarg(var,with_mutex(_48854,_48856),2,_48870))).
with_mutex(_48908,_48910,_48932):-not(callable(_48910),cut(1,illarg(type(callable),with_mutex(_48908,_48910),2,_48932))).
with_mutex(_48970,_48972,_48980):-mutex_lock_bt(_48970,call(_48972,cut(1,mutex_unlock(_48970,_48980)))).


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

'$builtin_append'([],_49020,_49020,_49030):-call(_49030).
'$builtin_append'([_49050|_49052],_49060,[_49050|_49058],_49068):-'$builtin_append'(_49052,_49060,_49058,_49068).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$builtin_message_1 : public Code {

/*

'$builtin_message'([],_49102):-cut(1,_49102).
'$builtin_message'([_49124],_49134):-cut(1,write(_49124,_49134)).
'$builtin_message'([_49162|_49164],_49172):-write(_49162,'$fast_write'(' ','$builtin_message'(_49164,_49172))).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_$member_in_reverse_2 : public Code {

/*

'$member_in_reverse'(_49210,[_49206|_49208],_49218):-'$member_in_reverse'(_49210,_49208,_49218).
'$member_in_reverse'(_49244,[_49244|_49246],_49256):-call(_49256).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};




#endif	//#ifndef SXX_BUILTINS_CAFE
