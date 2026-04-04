#include <sun/util/resources/ext/TimeZoneNames_zh_CN.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ACT
#undef ADELAIDE
#undef AGT
#undef AKST
#undef AMT
#undef ARAST
#undef ARMT
#undef AST
#undef BDT
#undef BRISBANE
#undef BROKEN_HILL
#undef BRT
#undef BTT
#undef CAT
#undef CET
#undef CHAST
#undef CHUT
#undef CIT
#undef CLT
#undef CST
#undef CTT
#undef CUBA
#undef DARWIN
#undef DUBLIN
#undef EASTER
#undef EAT
#undef EET
#undef EGT
#undef EST
#undef EST_NSW
#undef FET
#undef GAMBIER
#undef GHMT
#undef GMT
#undef GMTBST
#undef GST
#undef HKT
#undef HST
#undef ICT
#undef IRKT
#undef IRT
#undef ISRAEL
#undef IST
#undef JST
#undef KRAT
#undef KST
#undef LORD_HOWE
#undef MHT
#undef MMT
#undef MSK
#undef MST
#undef MYT
#undef NORONHA
#undef NOVT
#undef NPT
#undef NST
#undef NZST
#undef PITCAIRN
#undef PKT
#undef PONT
#undef PST
#undef SAMOA
#undef SAST
#undef SBT
#undef SGT
#undef TASMANIA
#undef TMT
#undef ULAT
#undef UTC
#undef UZT
#undef VICTORIA
#undef WAT
#undef WET
#undef WGT
#undef WIT
#undef WST_AUS
#undef WST_SAMOA
#undef XJT
#undef YAKT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void TimeZoneNames_zh_CN::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_zh_CN::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		u"Acre 时间"_s,
		"ACT"_s,
		u"Acre 夏令时"_s,
		"ACST"_s,
		u"Acre 时间"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"中央标准时间 (南澳大利亚)"_s,
		"ACST"_s,
		u"中央夏令时 (南澳大利亚)"_s,
		"ACDT"_s,
		u"中部时间 (南澳大利亚)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"阿根廷时间"_s,
		"ART"_s,
		u"阿根廷夏令时"_s,
		"ARST"_s,
		u"阿根廷时间"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"阿拉斯加标准时间"_s,
		"AKST"_s,
		u"阿拉斯加夏令时"_s,
		"AKDT"_s,
		u"阿拉斯加时间"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"亚马逊时间"_s,
		"AMT"_s,
		u"亚马逊夏令时"_s,
		"AMST"_s,
		u"亚马逊时间"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"阿拉伯标准时间"_s,
		"AST"_s,
		u"阿拉伯夏令时"_s,
		"ADT"_s,
		u"阿拉伯半岛时间"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"亚美尼亚时间"_s,
		"AMT"_s,
		u"亚美尼亚夏令时"_s,
		"AMST"_s,
		u"亚美尼亚时间"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"大西洋标准时间"_s,
		"AST"_s,
		u"大西洋夏令时"_s,
		"ADT"_s,
		u"大西洋时间"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"孟加拉时间"_s,
		"BDT"_s,
		u"孟加拉夏令时"_s,
		"BDST"_s,
		u"孟加拉时间"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"东部标准时间 (昆士兰)"_s,
		"AEST"_s,
		u"东部夏令时 (昆士兰)"_s,
		"AEDT"_s,
		u"东部时间 (昆士兰)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"中央标准时间 (南澳大利亚/新南威尔斯)"_s,
		"ACST"_s,
		u"中央夏令时 (南澳大利亚/新南威尔斯)"_s,
		"ACDT"_s,
		u"中部时间 (南澳大利亚/新南威尔斯)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"巴西利亚时间"_s,
		"BRT"_s,
		u"巴西利亚夏令时"_s,
		"BRST"_s,
		u"巴西利亚时间"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"不丹时间"_s,
		"BTT"_s,
		u"不丹夏令时"_s,
		"BTST"_s,
		u"不丹时间"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"中非时间"_s,
		"CAT"_s,
		u"中非夏令时"_s,
		"CAST"_s,
		u"中非时间"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"中欧时间"_s,
		"CET"_s,
		u"中欧夏令时"_s,
		"CEST"_s,
		u"中欧时间"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"查萨姆标准时间"_s,
		"CHAST"_s,
		u"查萨姆夏令时"_s,
		"CHADT"_s,
		u"查塔姆时间"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		u"丘克时间"_s,
		"CHUT"_s,
		u"丘克夏令时"_s,
		"CHUST"_s,
		u"丘克时间"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"中部印度尼西亚时间"_s,
		"WITA"_s,
		u"中部印度尼西亚夏令时"_s,
		"CIST"_s,
		u"中部印度尼西亚时间"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"智利时间"_s,
		"CLT"_s,
		u"智利夏令时"_s,
		"CLST"_s,
		u"智利时间"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"中央标准时间"_s,
		"CST"_s,
		u"中央夏令时"_s,
		"CDT"_s,
		u"中部时间"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"中国标准时间"_s,
		"CST"_s,
		u"中国夏令时"_s,
		"CDT"_s,
		u"中国时间"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"古巴标准时间"_s,
		"CST"_s,
		u"古巴夏令时"_s,
		"CDT"_s,
		u"古巴时间"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"中央标准时间 (北领地)"_s,
		"ACST"_s,
		u"中央夏令时 (北领地)"_s,
		"ACDT"_s,
		u"中部时间 (北部地区)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"格林威治时间"_s,
		"GMT"_s,
		u"爱尔兰夏令时"_s,
		"IST"_s,
		u"爱尔兰时间"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"东非时间"_s,
		"EAT"_s,
		u"东非夏令时"_s,
		"EAST"_s,
		u"东非时间"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"复活岛时间"_s,
		"EAST"_s,
		u"复活岛夏令时"_s,
		"EASST"_s,
		u"复活岛时间"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"东欧时间"_s,
		"EET"_s,
		u"东欧夏令时"_s,
		"EEST"_s,
		u"东欧时间"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"东格林岛时间"_s,
		"EGT"_s,
		u"东格林岛夏令时"_s,
		"EGST"_s,
		u"东格林岛时间"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"东部标准时间"_s,
		"EST"_s,
		u"东部夏令时"_s,
		"EDT"_s,
		u"东部时间"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"东部标准时间 (新南威尔斯)"_s,
		"AEST"_s,
		u"东部夏令时 (新南威尔斯)"_s,
		"AEDT"_s,
		u"东部时间 (新南威尔斯)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"远东欧时间"_s,
		"FET"_s,
		u"远东欧夏令时"_s,
		"FEST"_s,
		u"远东欧时间"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"加纳时间"_s,
		"GMT"_s,
		u"加纳夏令时"_s,
		"GHST"_s,
		u"加纳时间"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"冈比亚时间"_s,
		"GAMT"_s,
		u"冈比亚夏令时"_s,
		"GAMST"_s,
		u"冈比亚时间"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"格林威治时间"_s,
		"GMT"_s,
		u"格林威治时间"_s,
		"GMT"_s,
		u"格林威治时间"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"格林威治时间"_s,
		"GMT"_s,
		u"英国夏令时"_s,
		"BST"_s,
		u"英国时间"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"波斯湾标准时间"_s,
		"GST"_s,
		u"波斯湾夏令时"_s,
		"GDT"_s,
		u"海湾时间"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"香港时间"_s,
		"HKT"_s,
		u"香港夏令时"_s,
		"HKST"_s,
		u"香港时间"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"夏威夷标准时间"_s,
		"HST"_s,
		u"夏威夷夏令时"_s,
		"HDT"_s,
		u"夏威夷时间"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"印度支那时间"_s,
		"ICT"_s,
		u"印度支那夏令时"_s,
		"ICST"_s,
		u"印度支那时间"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"伊尔库次克时间"_s,
		"IRKT"_s,
		u"伊尔库次克夏令时"_s,
		"IRKST"_s,
		u"伊尔库次克时间"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"伊朗标准时间"_s,
		"IRST"_s,
		u"伊朗夏令时"_s,
		"IRDT"_s,
		u"伊朗时间"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"以色列标准时间"_s,
		"IST"_s,
		u"以色列夏令时"_s,
		"IDT"_s,
		u"以色列时间"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"印度标准时间"_s,
		"IST"_s,
		u"印度夏令时"_s,
		"IDT"_s,
		u"印度时间"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"日本标准时间"_s,
		"JST"_s,
		u"日本夏令时"_s,
		"JDT"_s,
		u"日本时间"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"克拉斯诺亚尔斯克时间"_s,
		"KRAT"_s,
		u"克拉斯诺亚尔斯克夏令时"_s,
		"KRAST"_s,
		u"克拉斯诺亚尔斯克时间"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"韩国标准时间"_s,
		"KST"_s,
		u"韩国夏令时"_s,
		"KDT"_s,
		u"韩国时间"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"豪公标准时间"_s,
		"LHST"_s,
		u"豪公夏令时"_s,
		"LHDT"_s,
		u"豪公时间"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"马绍尔群岛时间"_s,
		"MHT"_s,
		u"马绍尔群岛夏令时"_s,
		"MHST"_s,
		u"马绍尔群岛时间"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"缅甸时间"_s,
		"MMT"_s,
		u"缅甸夏令时"_s,
		"MMST"_s,
		u"缅甸时间"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"莫斯科标准时间"_s,
		"MSK"_s,
		u"莫斯科夏令时"_s,
		"MSD"_s,
		u"莫斯科时间"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"Mountain 标准时间"_s,
		"MST"_s,
		u"Mountain 夏令时"_s,
		"MDT"_s,
		u"山地时间"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"马来西亚时间"_s,
		"MYT"_s,
		u"马来西亚夏令时"_s,
		"MYST"_s,
		u"马来西亚时间"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"费尔南多德诺罗尼亚时间"_s,
		"FNT"_s,
		u"费尔南多德诺罗尼亚夏令时"_s,
		"FNST"_s,
		u"费尔南多德诺罗尼亚时间"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"Novosibirsk 时间"_s,
		"NOVT"_s,
		u"Novosibirsk 夏令时"_s,
		"NOVST"_s,
		u"Novosibirsk 时间"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"尼泊尔时间"_s,
		"NPT"_s,
		u"尼泊尔夏令时"_s,
		"NPST"_s,
		u"尼泊尔时间"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"纽芬兰标准时间"_s,
		"NST"_s,
		u"纽芬兰夏令时"_s,
		"NDT"_s,
		u"纽芬兰时间"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"新西兰标准时间"_s,
		"NZST"_s,
		u"新西兰夏令时"_s,
		"NZDT"_s,
		u"新西兰时间"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"皮特康岛标准时间"_s,
		"PST"_s,
		u"皮特康岛夏令时"_s,
		"PDT"_s,
		u"皮特凯恩时间"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"巴基斯坦时间"_s,
		"PKT"_s,
		u"巴基斯坦夏令时"_s,
		"PKST"_s,
		u"巴基斯坦时间"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"波纳佩时间"_s,
		"PONT"_s,
		u"波纳佩夏令时"_s,
		"PONST"_s,
		u"波纳佩时间"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"太平洋标准时间"_s,
		"PST"_s,
		u"太平洋夏令时"_s,
		"PDT"_s,
		u"太平洋时间"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"南非标准时间"_s,
		"SAST"_s,
		u"南非夏令时"_s,
		"SAST"_s,
		u"南非时间"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"所罗门群岛时间"_s,
		"SBT"_s,
		u"所罗门群岛夏令时"_s,
		"SBST"_s,
		u"所罗门群岛时间"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"新加坡时间"_s,
		"SGT"_s,
		u"新加坡夏令时"_s,
		"SGST"_s,
		u"新加坡时间"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"东部标准时间 (塔斯马尼亚)"_s,
		"AEST"_s,
		u"东部夏令时 (塔斯马尼亚)"_s,
		"AEDT"_s,
		u"东部时间 (塔斯马尼亚)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"土库曼时间"_s,
		"TMT"_s,
		u"土库曼夏令时"_s,
		"TMST"_s,
		u"土库曼时间"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"库伦时间"_s,
		"ULAT"_s,
		u"库伦夏令时"_s,
		"ULAST"_s,
		u"库伦时间"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"西非时间"_s,
		"WAT"_s,
		u"西非夏令时"_s,
		"WAST"_s,
		u"西非时间"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"西欧时间"_s,
		"WET"_s,
		u"西欧夏令时"_s,
		"WEST"_s,
		u"西欧时间"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"西格林兰岛时间"_s,
		"WGT"_s,
		u"西格林兰岛夏令时"_s,
		"WGST"_s,
		u"西格林兰岛时间"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"西印度尼西亚时间"_s,
		"WIB"_s,
		u"西印度尼西亚夏令时"_s,
		"WIST"_s,
		u"西印度尼西亚时间"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"西部标准时间 (澳大利亚)"_s,
		"AWST"_s,
		u"西部夏令时 (澳大利亚)"_s,
		"AWDT"_s,
		u"西部时间 (澳大利亚)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"萨摩亚群岛标准时间"_s,
		"SST"_s,
		u"萨摩亚群岛夏令时"_s,
		"SDT"_s,
		u"萨摩亚时间"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"西萨摩亚时间"_s,
		"WSST"_s,
		u"西萨摩亚夏令时"_s,
		"WSDT"_s,
		u"西萨摩亚时间"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"Chamorro 标准时间"_s,
		"ChST"_s,
		u"Chamorro 夏令时"_s,
		"ChDT"_s,
		u"查摩洛时间"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"东部标准时间 (维多利亚)"_s,
		"AEST"_s,
		u"东部夏令时 (维多利亚)"_s,
		"AEDT"_s,
		u"东部时间 (维多利亚)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"协调世界时间"_s,
		"UTC"_s,
		u"协调世界时间"_s,
		"UTC"_s,
		u"协调世界时间"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"乌兹别克斯坦时间"_s,
		"UZT"_s,
		u"乌兹别克斯坦夏令时"_s,
		"UZST"_s,
		u"乌兹别克斯坦时间"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"中国标准时间"_s,
		"XJT"_s,
		u"中国夏令时"_s,
		"XJDT"_s,
		u"中国时间"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"亚库次克时间"_s,
		"YAKT"_s,
		u"亚库次克夏令时"_s,
		"YAKST"_s,
		u"亚库次克时间"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			PST
		}),
		$$new($ObjectArray, {
			"PST"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			MST
		}),
		$$new($ObjectArray, {
			"MST"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			MST
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CST"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			EST
		}),
		$$new($ObjectArray, {
			"EST"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"IET"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			HST
		}),
		$$new($ObjectArray, {
			"HST"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"AST"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			NST
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			CET
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Casablanca"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			JST
		}),
		$$new($ObjectArray, {
			"JST"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"AET"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"AGT"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"ART"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GHMT
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Asmara"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/El_Aaiun"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/ComodRivadavia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			$$new($StringArray, {
				u"巴拉圭时间"_s,
				"PYT"_s,
				u"巴拉圭夏令时"_s,
				"PYST"_s,
				u"巴拉圭时间"_s,
				"PYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Atikokan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Atka"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			$$new($StringArray, {
				u"哥伦比亚时间"_s,
				"COT"_s,
				u"哥伦比亚夏令时"_s,
				"COST"_s,
				u"哥伦比亚时间"_s,
				"COT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			$$new($StringArray, {
				u"委内瑞拉时间"_s,
				"VET"_s,
				u"委内瑞拉夏令时"_s,
				"VEST"_s,
				u"委内瑞拉时间"_s,
				"VET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			$$new($StringArray, {
				u"法属圭亚那时间"_s,
				"GFT"_s,
				u"法属圭亚那夏令时"_s,
				"GFST"_s,
				u"法属圭亚那时间"_s,
				"GFT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Eirunepe"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Ensenada"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Fort_Wayne"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			$$new($StringArray, {
				u"厄瓜多尔时间"_s,
				"ECT"_s,
				u"厄瓜多尔夏令时"_s,
				"ECST"_s,
				u"厄瓜多尔时间"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				u"圭亚那时间"_s,
				"GYT"_s,
				u"圭亚那夏令时"_s,
				"GYST"_s,
				u"圭亚那时间"_s,
				"GYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Knox_IN"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			$$new($StringArray, {
				u"玻利维亚时间"_s,
				"BOT"_s,
				u"玻利维亚夏令时"_s,
				"BOST"_s,
				u"玻利维亚时间"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"秘鲁时间"_s,
				"PET"_s,
				u"秘鲁夏令时"_s,
				"PEST"_s,
				u"秘鲁时间"_s,
				"PET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			$$new($StringArray, {
				u"皮埃尔岛及密克隆岛标准时间"_s,
				"PMST"_s,
				u"皮埃尔岛及密克隆岛夏令时"_s,
				"PMDT"_s,
				u"皮埃尔和密克隆岛时间"_s,
				"PMT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			$$new($StringArray, {
				u"乌拉圭时间"_s,
				"UYT"_s,
				u"乌拉圭夏令时"_s,
				"UYST"_s,
				u"乌拉圭时间"_s,
				"UYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Nuuk"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			$$new($StringArray, {
				u"苏利南时间"_s,
				"SRT"_s,
				u"苏利南夏令时"_s,
				"SRST"_s,
				u"苏利南时间"_s,
				"SRT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Porto_Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rio_Branco"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Rosario"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			EGT
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Virgin"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Antarctica/Casey"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			$$new($StringArray, {
				u"戴维斯时间"_s,
				"DAVT"_s,
				u"戴维斯夏令时"_s,
				"DAVST"_s,
				u"戴维斯时间"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				u"Dumont-d\'Urville 时间"_s,
				"DDUT"_s,
				u"Dumont-d\'Urville 夏令时"_s,
				"DDUST"_s,
				u"Dumont-d\'Urville 时间"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				u"麦夸里岛时间"_s,
				"MIST"_s,
				u"麦夸里岛夏令时"_s,
				"MIST"_s,
				u"麦夸里岛时间"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				u"莫森时间"_s,
				"MAWT"_s,
				u"莫森夏令时"_s,
				"MAWST"_s,
				u"莫森时间"_s,
				"MAWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Palmer"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			$$new($StringArray, {
				u"罗瑟拉时间"_s,
				"ROTT"_s,
				u"罗瑟拉夏令时"_s,
				"ROTST"_s,
				u"罗瑟拉时间"_s,
				"ROTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			$$new($StringArray, {
				u"Syowa 时间"_s,
				"SYOT"_s,
				u"Syowa 夏令时"_s,
				"SYOST"_s,
				u"Syowa 时间"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				u"协调世界时间"_s,
				"UTC"_s,
				u"中欧夏令时"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				u"莫斯托克时间"_s,
				"VOST"_s,
				u"莫斯托克夏令时"_s,
				"VOSST"_s,
				u"莫斯托克时间"_s,
				"VOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			$$new($StringArray, {
				u"Alma-Ata 时间"_s,
				"ALMT"_s,
				u"Alma-Ata 夏令时"_s,
				"ALMST"_s,
				u"Alma-Ata 时间"_s,
				"ALMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			$$new($StringArray, {
				u"阿那底河时间"_s,
				"ANAT"_s,
				u"阿那底河夏令时"_s,
				"ANAST"_s,
				u"阿那底河时间"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				u"Aqtau 时间"_s,
				"AQTT"_s,
				u"Aqtau 夏令时"_s,
				"AQTST"_s,
				u"Aqtau 时间"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				u"Aqtobe 时间"_s,
				"AQTT"_s,
				u"Aqtobe 夏令时"_s,
				"AQTST"_s,
				u"Aqtobe 时间"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Ashkhabad"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			$$new($StringArray, {
				u"亚塞拜然时间"_s,
				"AZT"_s,
				u"亚塞拜然夏令时"_s,
				"AZST"_s,
				u"亚塞拜然时间"_s,
				"AZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			$$new($StringArray, {
				u"吉尔吉斯斯坦时间"_s,
				"KGT"_s,
				u"吉尔吉斯斯坦夏令时"_s,
				"KGST"_s,
				u"吉尔吉斯斯坦时间"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				u"文莱时间"_s,
				"BNT"_s,
				u"文莱夏令时"_s,
				"BNST"_s,
				u"文莱时间"_s,
				"BNT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			$$new($StringArray, {
				u"Choibalsan 时间"_s,
				"CHOT"_s,
				u"Choibalsan 夏令时"_s,
				"CHOST"_s,
				u"Choibalsan 时间"_s,
				"CHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Chungking"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Dacca"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			$$new($StringArray, {
				u"东帝汶时间"_s,
				"TLT"_s,
				u"东帝汶夏令时"_s,
				"TLST"_s,
				u"东帝汶时间"_s,
				"TLT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			$$new($StringArray, {
				u"塔吉克斯坦时间"_s,
				"TJT"_s,
				u"塔吉克斯坦夏令时"_s,
				"TJST"_s,
				u"塔吉克斯坦时间"_s,
				"TJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Ho_Chi_Minh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			$$new($StringArray, {
				u"科布多时间"_s,
				"HOVT"_s,
				u"科布多夏令时"_s,
				"HOVST"_s,
				u"科布多时间"_s,
				"HOVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			IRKT
		}),
		$$new($ObjectArray, {
			"Asia/Istanbul"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			$$new($StringArray, {
				u"东印度尼西亚时间"_s,
				"WIT"_s,
				u"东印度尼西亚夏令时"_s,
				"EIST"_s,
				u"东印度尼西亚时间"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				u"阿富汗时间"_s,
				"AFT"_s,
				u"阿富汗夏令时"_s,
				"AFST"_s,
				u"阿富汗时间"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				u"彼得罗巴甫洛夫斯克时间"_s,
				"PETT"_s,
				u"彼得罗巴甫洛夫斯克夏令时"_s,
				"PETST"_s,
				u"彼得罗巴甫洛夫斯克时间"_s,
				"PETT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Asia/Kashgar"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Kathmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Kolkata"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Macao"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			$$new($StringArray, {
				u"Magadan 时间"_s,
				"MAGT"_s,
				u"Magadan 夏令时"_s,
				"MAGST"_s,
				u"Magadan 时间"_s,
				"MAGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			$$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			NOVT
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			$$new($StringArray, {
				u"Oral 时间"_s,
				"ORAT"_s,
				u"Oral 夏令时"_s,
				"ORAST"_s,
				u"Oral 时间"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				u"鄂木斯克时间"_s,
				"OMST"_s,
				u"鄂木斯克夏令时"_s,
				"OMSST"_s,
				u"鄂木斯克时间"_s,
				"OMST"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			$$new($StringArray, {
				u"Qyzylorda 时间"_s,
				"QYZT"_s,
				u"Qyzylorda 夏令时"_s,
				"QYZST"_s,
				u"Qyzylorda 时间"_s,
				"QYZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			$$new($StringArray, {
				u"库页岛时间"_s,
				"SAKT"_s,
				u"库页岛夏令时"_s,
				"SAKST"_s,
				u"库页岛时间"_s,
				"SAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"Asia/Srednekolymsk"_s,
			$$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Tel_Aviv"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			$$new($StringArray, {
				u"乔治亚时间"_s,
				"GET"_s,
				u"乔治亚夏令时"_s,
				"GEST"_s,
				u"乔治亚时间"_s,
				"GET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"Asia/Thimbu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Ujung_Pandang"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Ulan_Bator"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Urumqi"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			$$new($StringArray, {
				u"乌斯季涅拉时间"_s,
				"VLAT"_s,
				u"乌斯季涅拉夏令时"_s,
				"VLAST"_s,
				u"乌斯季涅拉时间"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			$$new($StringArray, {
				u"海参崴时间"_s,
				"VLAT"_s,
				u"海参崴夏令时"_s,
				"VLAST"_s,
				u"海参崴时间"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Yangon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			$$new($StringArray, {
				u"Yekaterinburg 时间"_s,
				"YEKT"_s,
				u"Yekaterinburg 夏令时"_s,
				"YEKST"_s,
				u"Yekaterinburg 时间"_s,
				"YEKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			$$new($StringArray, {
				u"亚速尔群岛时间"_s,
				"AZOT"_s,
				u"亚速尔群岛夏令时"_s,
				"AZOST"_s,
				u"亚速尔群岛时间"_s,
				"AZOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			$$new($StringArray, {
				u"佛德角时间"_s,
				"CVT"_s,
				u"佛德角夏令时"_s,
				"CVST"_s,
				u"佛德角时间"_s,
				"CVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Faroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			$$new($StringArray, {
				u"南乔治亚标准时间"_s,
				"GST"_s,
				u"南乔治亚夏令时"_s,
				"GDT"_s,
				u"南乔治亚岛时间"_s,
				"GT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			$$new($StringArray, {
				u"福克兰群岛时间"_s,
				"FKT"_s,
				u"福克兰群岛夏令时"_s,
				"FKST"_s,
				u"福克兰群岛时间"_s,
				"FKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/ACT"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"Australia/Canberra"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			$$new($StringArray, {
				u"中西部标准时间 (澳大利亚)"_s,
				"ACWST"_s,
				u"中西部夏令时 (澳大利亚)"_s,
				"ACWDT"_s,
				u"中西部时间 (澳大利亚)"_s,
				"ACWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/LHI"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/North"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/NSW"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Queensland"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/South"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Tasmania"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/Victoria"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/West"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Yancowinna"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"BET"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"BST"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Brazil/Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"Brazil/DeNoronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"Brazil/East"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"Brazil/West"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"Canada/Atlantic"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Canada/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Canada/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Canada/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Newfoundland"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Canada/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Canada/Yukon"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Saskatchewan"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"CET"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Chile/Continental"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Chile/EasterIsland"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Cuba"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"EET"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Egypt"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Eire"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Etc/Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Zulu"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Istanbul"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			$$new($StringArray, {
				u"沙马拉时间"_s,
				"SAMT"_s,
				u"沙马拉夏令时"_s,
				"SAMST"_s,
				u"沙马拉时间"_s,
				"SAMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tiraspol"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GB"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"GB-Eire"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Hongkong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Iceland"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Iran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"IST"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			$$new($StringArray, {
				u"印度洋地带时间"_s,
				"IOT"_s,
				u"印度洋地带夏令时"_s,
				"IOST"_s,
				u"印度洋地带时间"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				u"圣诞岛时间"_s,
				"CXT"_s,
				u"圣诞岛夏令时"_s,
				"CXST"_s,
				u"圣诞岛时间"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				u"可可斯群岛时间"_s,
				"CCT"_s,
				u"可可斯群岛夏令时"_s,
				"CCST"_s,
				u"可可斯群岛时间"_s,
				"CCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			$$new($StringArray, {
				u"法属南极时间"_s,
				"TFT"_s,
				u"法属南极夏令时"_s,
				"TFST"_s,
				u"法属南极时间"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				u"塞席尔群岛时间"_s,
				"SCT"_s,
				u"塞席尔群岛夏令时"_s,
				"SCST"_s,
				u"塞席尔群岛时间"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				u"马尔代夫时间"_s,
				"MVT"_s,
				u"马尔代夫夏令时"_s,
				"MVST"_s,
				u"马尔代夫时间"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				u"摩里西斯时间"_s,
				"MUT"_s,
				u"摩里西斯夏令时"_s,
				"MUST"_s,
				u"摩里西斯时间"_s,
				"MUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			$$new($StringArray, {
				u"留尼旺岛时间"_s,
				"RET"_s,
				u"留尼旺岛夏令时"_s,
				"REST"_s,
				u"留尼旺岛时间"_s,
				"RET"_s
			})
		}),
		$$new($ObjectArray, {
			"Israel"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Japan"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Libya"_s,
			EET
		}),
		$$new($ObjectArray, {
			"MET"_s,
			$$new($StringArray, {
				u"中欧时间"_s,
				"MET"_s,
				u"中欧夏令时"_s,
				"MEST"_s,
				"MET"_s,
				"MET"_s
			})
		}),
		$$new($ObjectArray, {
			"Mexico/BajaNorte"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Mexico/BajaSur"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Mexico/General"_s,
			CST
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Navajo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"NET"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"NST"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ-CHAT"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Portugal"_s,
			WET
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Pacific/Bougainville"_s,
			$$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"Pacific/Chuuk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			$$new($StringArray, {
				u"瓦奴阿图时间"_s,
				"VUT"_s,
				u"瓦奴阿图夏令时"_s,
				"VUST"_s,
				u"瓦奴阿图时间"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				u"菲尼克斯群岛时间"_s,
				"PHOT"_s,
				u"菲尼克斯群岛夏令时"_s,
				"PHOST"_s,
				u"菲尼克斯群岛时间"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				u"托克劳群岛时间"_s,
				"TKT"_s,
				u"托克劳群岛夏令时"_s,
				"TKST"_s,
				u"托克劳群岛时间"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				u"斐济时间"_s,
				"FJT"_s,
				u"斐济夏令时"_s,
				"FJST"_s,
				u"斐济时间"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				u"吐鲁瓦时间"_s,
				"TVT"_s,
				u"吐鲁瓦夏令时"_s,
				"TVST"_s,
				u"吐鲁瓦时间"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				u"加拉巴哥时间"_s,
				"GALT"_s,
				u"加拉巴哥夏令时"_s,
				"GALST"_s,
				u"加拉巴哥时间"_s,
				"GALT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			GAMBIER
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			HST
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			$$new($StringArray, {
				u"Line 岛时间"_s,
				"LINT"_s,
				u"Line 岛夏令时"_s,
				"LINST"_s,
				u"Line 岛时间"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				u"Kosrae 时间"_s,
				"KOST"_s,
				u"Kosrae 夏令时"_s,
				"KOSST"_s,
				u"Kosrae 时间"_s,
				"KOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			$$new($StringArray, {
				u"马克萨斯时间"_s,
				"MART"_s,
				u"马克萨斯夏令时"_s,
				"MARST"_s,
				u"马克萨斯时间"_s,
				"MART"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			$$new($StringArray, {
				u"诺鲁时间"_s,
				"NRT"_s,
				u"诺鲁夏令时"_s,
				"NRST"_s,
				u"诺鲁时间"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				u"纽威岛时间"_s,
				"NUT"_s,
				u"纽威岛夏令时"_s,
				"NUST"_s,
				u"纽威岛时间"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				u"诺福克时间"_s,
				"NFT"_s,
				u"诺福克夏令时"_s,
				"NFST"_s,
				u"诺福克时间"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				u"新加勒多尼亚时间"_s,
				"NCT"_s,
				u"新加勒多尼亚夏令时"_s,
				"NCST"_s,
				u"新加勒多尼亚时间"_s,
				"NCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			$$new($StringArray, {
				u"帛琉时间"_s,
				"PWT"_s,
				u"帛琉夏令时"_s,
				"PWST"_s,
				u"帛琉时间"_s,
				"PWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			PITCAIRN
		}),
		$$new($ObjectArray, {
			"Pacific/Pohnpei"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			$$new($StringArray, {
				u"巴布亚新几内亚时间"_s,
				"PGT"_s,
				u"巴布亚新几内亚夏令时"_s,
				"PGST"_s,
				u"巴布亚新几内亚时间"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				u"库克群岛时间"_s,
				"CKT"_s,
				u"库克群岛夏令时"_s,
				"CKHST"_s,
				u"库克群岛时间"_s,
				"CKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			$$new($StringArray, {
				u"大溪地岛时间"_s,
				"TAHT"_s,
				u"大溪地岛夏令时"_s,
				"TAHST"_s,
				u"大溪地岛时间"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				u"吉伯特群岛时间"_s,
				"GILT"_s,
				u"吉伯特群岛夏令时"_s,
				"GILST"_s,
				u"吉伯特群岛时间"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				u"东加时间"_s,
				"TOT"_s,
				u"东加夏令时"_s,
				"TOST"_s,
				u"东加时间"_s,
				"TOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			$$new($StringArray, {
				u"威克时间"_s,
				"WAKT"_s,
				u"威克夏令时"_s,
				"WAKST"_s,
				u"威克时间"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				u"瓦利斯及福杜纳群岛时间"_s,
				"WFT"_s,
				u"瓦利斯及福杜纳群岛夏令时"_s,
				"WFST"_s,
				u"瓦利斯及福杜纳群岛时间"_s,
				"WFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Poland"_s,
			CET
		}),
		$$new($ObjectArray, {
			"PRC"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"ROK"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"SST"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			HST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"Turkey"_s,
			EET
		}),
		$$new($ObjectArray, {
			"UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"US/Alaska"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"US/Aleutian"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Arizona"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Hawaii"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Indiana-Starke"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/East-Indiana"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Michigan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"US/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"VST"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"W-SU"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"WET"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Zulu"_s,
			UTC
		})
	});
}

TimeZoneNames_zh_CN::TimeZoneNames_zh_CN() {
}

$Class* TimeZoneNames_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_zh_CN",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_zh_CN);
	});
	return class$;
}

$Class* TimeZoneNames_zh_CN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun