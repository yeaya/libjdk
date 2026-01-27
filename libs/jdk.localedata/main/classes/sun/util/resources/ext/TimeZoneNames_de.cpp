#include <sun/util/resources/ext/TimeZoneNames_de.h>

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

$MethodInfo _TimeZoneNames_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_de",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_de_MethodInfo_
};

$Object* allocate$TimeZoneNames_de($Class* clazz) {
	return $of($alloc(TimeZoneNames_de));
}

void TimeZoneNames_de::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_de::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, ACT, $new($StringArray, {
		"Acre Normalzeit"_s,
		"ACT"_s,
		"Acre Sommerzeit"_s,
		"ACST"_s,
		"Acre Normalzeit"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"Zentrale Normalzeit (Südaustralien)"_s,
		"ACST"_s,
		u"Zentrale Sommerzeit (Südaustralien)"_s,
		"ACDT"_s,
		u"Zentrale Zeitzone (Südaustralien)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Argentinische Zeit"_s,
		"ART"_s,
		"Argentinische Sommerzeit"_s,
		"ARST"_s,
		"Argentinische Zeit"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		"Alaska Normalzeit"_s,
		"AKST"_s,
		"Alaska Sommerzeit"_s,
		"AKDT"_s,
		u"Zeitzone für Alaska"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		"Amazonas Normalzeit"_s,
		"AMT"_s,
		"Amazonas Sommerzeit"_s,
		"AMST"_s,
		"Amazonas Normalzeit"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		"Arabische Normalzeit"_s,
		"AST"_s,
		"Arabische Sommerzeit"_s,
		"ADT"_s,
		u"Zeitzone für Arabische Halbinsel"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		"Armenische Zeit"_s,
		"AMT"_s,
		"Armenische Sommerzeit"_s,
		"AMST"_s,
		"Armenische Zeit"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		"Atlantik Normalzeit"_s,
		"AST"_s,
		"Atlantik Sommerzeit"_s,
		"ADT"_s,
		"Zeitzone Atlantik"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Bangladesch Zeit"_s,
		"BDT"_s,
		"Bangladesch Sommerzeit"_s,
		"BDST"_s,
		"Bangladesch Zeit"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"Östliche Normalzeit (Queensland)"_s,
		"AEST"_s,
		u"Östliche Sommerzeit (Queensland)"_s,
		"AEDT"_s,
		u"Östliche Zeitzone (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"Zentrale Normalzeit (Südaustralien/New South Wales)"_s,
		"ACST"_s,
		u"Zentrale Sommerzeit (Südaustralien/New South Wales)"_s,
		"ACDT"_s,
		u"Zentrale Zeitzone (Südaustralien/New South Wales)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		"Brasilianische Zeit"_s,
		"BRT"_s,
		"Brasilianische Sommerzeit"_s,
		"BRST"_s,
		"Brasilianische Zeit"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		"Bhutanische Zeit"_s,
		"BTT"_s,
		"Bhutanische Sommerzeit"_s,
		"BTST"_s,
		"Bhutanische Zeit"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		"Zentralafrikanische Zeit"_s,
		"CAT"_s,
		"Zentralafrikanische Sommerzeit"_s,
		"CAST"_s,
		"Zentralafrikanische Zeit"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"Mitteleuropäische Zeit"_s,
		"MEZ"_s,
		u"Mitteleuropäische Sommerzeit"_s,
		"MESZ"_s,
		u"Mitteleuropäische Zeit"_s,
		"MEZ"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		"Chatham Normalzeit"_s,
		"CHAST"_s,
		"Chatham Sommerzeit"_s,
		"CHADT"_s,
		u"Zeitzone für Chatham-Inseln"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Chuuk Zeit"_s,
		"CHUT"_s,
		"Chuuk Sommerzeit"_s,
		"CHUST"_s,
		"Chuuk Zeit"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		"Zentralindonesische Zeit"_s,
		"WITA"_s,
		"Zentralindonesische Sommerzeit"_s,
		"CIST"_s,
		"Zentralindonesische Zeit"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Chilenische Zeit"_s,
		"CLT"_s,
		"Chilenische Sommerzeit"_s,
		"CLST"_s,
		"Chilenische Zeit"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		"Zentrale Normalzeit"_s,
		"CST"_s,
		"Zentrale Sommerzeit"_s,
		"CDT"_s,
		"Zentrale Zeitzone"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		"Chinesische Normalzeit"_s,
		"CST"_s,
		"Chinesische Sommerzeit"_s,
		"CDT"_s,
		u"Zeitzone für China"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		"Kubanische Normalzeit"_s,
		"CST"_s,
		"Kubanische Sommerzeit"_s,
		"CDT"_s,
		"Kubanische Normalzeit"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		"Zentrale Normalzeit (Northern Territory)"_s,
		"ACST"_s,
		"Zentrale Sommerzeit (Northern Territory)"_s,
		"ACDT"_s,
		"Zentrale Zeitzone (Northern Territory)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		"Greenwich Zeit"_s,
		"GMT"_s,
		"Irische Sommerzeit"_s,
		"IST"_s,
		"Irische Zeit"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		"Ostafrikanische Zeit"_s,
		"EAT"_s,
		"Ostafrikanische Sommerzeit"_s,
		"EAST"_s,
		"Ostafrikanische Zeit"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		"Osterinseln Zeit"_s,
		"EAST"_s,
		"Osterinseln Sommerzeit"_s,
		"EASST"_s,
		"Osterinseln Zeit"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"Osteuropäische Zeit"_s,
		"OEZ"_s,
		u"Osteuropäische Sommerzeit"_s,
		"OESZ"_s,
		u"Osteuropäische Zeit"_s,
		"OEZ"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"Ostgrönländische Zeit"_s,
		"EGT"_s,
		u"Ostgrönländische Sommerzeit"_s,
		"EGST"_s,
		u"Ostgrönländische Zeit"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"Östliche Normalzeit"_s,
		"EST"_s,
		u"Östliche Sommerzeit"_s,
		"EDT"_s,
		u"Östliche Zeitzone"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"Östliche Normalzeit (New South Wales)"_s,
		"AEST"_s,
		u"Östliche Sommerzeit (New South Wales)"_s,
		"AEDT"_s,
		u"Östliche Zeitzone (New South Wales)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		"Kaliningrader Zeit"_s,
		"FET"_s,
		"Kaliningrader Sommerzeit"_s,
		"FEST"_s,
		"Kaliningrader Zeit"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Ghanaische Normalzeit"_s,
		"GMT"_s,
		"Ghanaische Sommerzeit"_s,
		"GHST"_s,
		"Ghanaische Normalzeit"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Gambier Zeit"_s,
		"GAMT"_s,
		"Gambier Sommerzeit"_s,
		"GAMST"_s,
		"Gambier Zeit"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Greenwich Zeit"_s,
		"GMT"_s,
		"Greenwich Zeit"_s,
		"GMT"_s,
		"Greenwich Zeit"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		"Greenwich Zeit"_s,
		"GMT"_s,
		"Britische Sommerzeit"_s,
		"BST"_s,
		"Britische Zeit"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		"Golf Normalzeit"_s,
		"GST"_s,
		"Golf Sommerzeit"_s,
		"GDT"_s,
		u"Zeitzone für Persischen Golf"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Hongkong Zeit"_s,
		"HKT"_s,
		"Hongkong Sommerzeit"_s,
		"HKST"_s,
		"Hongkong Zeit"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		"Hawaii Normalzeit"_s,
		"HST"_s,
		"Hawaii Sommerzeit"_s,
		"HDT"_s,
		u"Zeitzone für Hawaii"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Indochina Zeit"_s,
		"ICT"_s,
		"Indochina Sommerzeit"_s,
		"ICST"_s,
		"Indochina Zeit"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Irkutsk Zeit"_s,
		"IRKT"_s,
		"Irkutsk Sommerzeit"_s,
		"IRKST"_s,
		"Irkutsk Zeit"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		"Iranische Normalzeit"_s,
		"IRST"_s,
		"Iranische Sommerzeit"_s,
		"IRDT"_s,
		"Iranische Zeit"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		"Israelische Normalzeit"_s,
		"IST"_s,
		"Israelische Sommerzeit"_s,
		"IDT"_s,
		u"Zeitzone für Israel"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		"Indische Normalzeit"_s,
		"IST"_s,
		"Indische Sommerzeit"_s,
		"IDT"_s,
		u"Zeitzone für Indien"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		"Japanische Normalzeit"_s,
		"JST"_s,
		"Japanische Sommerzeit"_s,
		"JDT"_s,
		u"Zeitzone für Japan"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		"Krasnojarsker Zeit"_s,
		"KRAT"_s,
		"Krasnojarsker Sommerzeit"_s,
		"KRAST"_s,
		"Krasnojarsker Zeit"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		"Koreanische Normalzeit"_s,
		"KST"_s,
		"Koreanische Sommerzeit"_s,
		"KDT"_s,
		u"Zeitzone für Korea"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		"Lord Howe Normalzeit"_s,
		"LHST"_s,
		"Lord Howe Sommerzeit"_s,
		"LHDT"_s,
		"Lord-Howe Normalzeit"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		"Marshallinseln Zeit"_s,
		"MHT"_s,
		"Marshallinseln Sommerzeit"_s,
		"MHST"_s,
		"Marshallinseln Zeit"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Myanmar Zeit"_s,
		"MMT"_s,
		"Myanmar Sommerzeit"_s,
		"MMST"_s,
		"Myanmar Zeit"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		"Moskauer Normalzeit"_s,
		"MSK"_s,
		"Moskauer Sommerzeit"_s,
		"MSD"_s,
		u"Zeitzone für Moskau"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		"Rocky Mountains Normalzeit"_s,
		"MST"_s,
		"Rocky Mountains Sommerzeit"_s,
		"MDT"_s,
		"Zeitzone Mountain"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Malaysische Zeit"_s,
		"MYT"_s,
		"Malaysische Sommerzeit"_s,
		"MYST"_s,
		"Malaysische Zeit"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Fernando de Noronha Zeit"_s,
		"FNT"_s,
		"Fernando de Noronha Sommerzeit"_s,
		"FNST"_s,
		"Fernando de Noronha Zeit"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Nowosibirsker Zeit"_s,
		"NOVT"_s,
		"Nowosibirsker Sommerzeit"_s,
		"NOVST"_s,
		"Nowosibirsker Zeit"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		"Nepalesische Zeit"_s,
		"NPT"_s,
		"Nepalesische Sommerzeit"_s,
		"NPST"_s,
		"Nepalesische Zeit"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		"Neufundland Normalzeit"_s,
		"NST"_s,
		"Neufundland Sommerzeit"_s,
		"NDT"_s,
		u"Zeitzone für Neufundland"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		"Neuseeland Normalzeit"_s,
		"NZST"_s,
		"Neuseeland Sommerzeit"_s,
		"NZDT"_s,
		u"Zeitzone für Neuseeland"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		"Pitcairn Normalzeit"_s,
		"PST"_s,
		"Pitcairn Sommerzeit"_s,
		"PDT"_s,
		u"Zeitzone für Pitcairn"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		"Pakistanische Zeit"_s,
		"PKT"_s,
		"Pakistanische Sommerzeit"_s,
		"PKST"_s,
		"Pakistanische Zeit"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Pohnpei Zeit"_s,
		"PONT"_s,
		"Pohnpei Sommerzeit"_s,
		"PONST"_s,
		"Pohnpei-Inseln Zeit"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		"Pazifische Normalzeit"_s,
		"PST"_s,
		"Pazifische Sommerzeit"_s,
		"PDT"_s,
		"Zeitzone Pazifik"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"Südafrikanische Normalzeit"_s,
		"SAST"_s,
		u"Südafrikanische Sommerzeit"_s,
		"SAST"_s,
		u"Zeitzone für Südafrika"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		"Salomoninseln Zeit"_s,
		"SBT"_s,
		"Salomoninseln Sommerzeit"_s,
		"SBST"_s,
		"Salomoninseln Zeit"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Singapur Zeit"_s,
		"SGT"_s,
		"Singapur Sommerzeit"_s,
		"SGST"_s,
		"Singapur Zeit"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"Östliche Normalzeit (Tasmanien)"_s,
		"AEST"_s,
		u"Östliche Sommerzeit (Tasmanien)"_s,
		"AEDT"_s,
		u"Östliche Zeitzone (Tasmanien)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		"Turkmenische Zeit"_s,
		"TMT"_s,
		"Turkmenische Sommerzeit"_s,
		"TMST"_s,
		"Turkmenische Zeit"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Ulaanbaatar Zeit"_s,
		"ULAT"_s,
		"Ulaanbaatar Sommerzeit"_s,
		"ULAST"_s,
		"Ulaanbaatar Zeit"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		"Westafrikanische Zeit"_s,
		"WAT"_s,
		"Westafrikanische Sommerzeit"_s,
		"WAST"_s,
		"Westafrikanische Zeit"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"Westeuropäische Zeit"_s,
		"WEZ"_s,
		u"Westeuropäische Sommerzeit"_s,
		"WESZ"_s,
		u"Westeuropäische Zeit"_s,
		"WEZ"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"Westgrönländische Zeit"_s,
		"WGT"_s,
		u"Westgrönländische Sommerzeit"_s,
		"WGST"_s,
		u"Westgrönländische Zeit"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		"Westindonesische Zeit"_s,
		"WIB"_s,
		"Westindonesische Sommerzeit"_s,
		"WIST"_s,
		"Westindonesische Zeit"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		"Westliche Normalzeit (Australien)"_s,
		"AWST"_s,
		"Westliche Sommerzeit (Australien)"_s,
		"AWDT"_s,
		"Westliche Zeitzone (Australien)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		"Samoa Normalzeit"_s,
		"SST"_s,
		"Samoa Sommerzeit"_s,
		"SDT"_s,
		u"Zeitzone für Samoa"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		"West Samoa Zeit"_s,
		"WSST"_s,
		"West Samoa Sommerzeit"_s,
		"WSDT"_s,
		"West Samoa Zeit"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		"Chamorro Normalzeit"_s,
		"ChST"_s,
		"Chamorro Sommerzeit"_s,
		"ChDT"_s,
		u"Zeitzone für die Marianen"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"Östliche Normalzeit (Victoria)"_s,
		"AEST"_s,
		u"Östliche Sommerzeit (Victoria)"_s,
		"AEDT"_s,
		u"Östliche Zeitzone (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Koordinierte Universalzeit"_s,
		"UTC"_s,
		"Koordinierte Universalzeit"_s,
		"UTC"_s,
		"Koordinierte Universalzeit"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		"Usbekistan Zeit"_s,
		"UZT"_s,
		"Usbekistan Sommerzeit"_s,
		"UZST"_s,
		"Usbekistan Zeit"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		"Chinesische Normalzeit"_s,
		"XJT"_s,
		"Chinesische Sommerzeit"_s,
		"XJDT"_s,
		u"Zeitzone für China"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Jakutsk Zeit"_s,
		"YAKT"_s,
		"Jakutsk Sommerzeit"_s,
		"YAKST"_s,
		"Jakutsk Zeit"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("MST"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("EST"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("IET"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("HST"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Casablanca"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("AGT"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GHMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmara"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/El_Aaiun"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/ComodRivadavia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of($$new($StringArray, {
				"Paraguay Zeit"_s,
				"PYT"_s,
				"Paraguay Sommerzeit"_s,
				"PYST"_s,
				"Paraguay Zeit"_s,
				"PYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Atikokan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Atka"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of($$new($StringArray, {
				"Kolumbianische Zeit"_s,
				"COT"_s,
				"Kolumbianische Sommerzeit"_s,
				"COST"_s,
				"Kolumbianische Zeit"_s,
				"COT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of($$new($StringArray, {
				"Venezuelanische Zeit"_s,
				"VET"_s,
				"Venezuelanische Sommerzeit"_s,
				"VEST"_s,
				"Venezuelanische Zeit"_s,
				"VET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of($$new($StringArray, {
				u"Französisch-Guiana Zeit"_s,
				"GFT"_s,
				u"Französisch-Guiana Sommerzeit"_s,
				"GFST"_s,
				u"Französisch-Guiana Zeit"_s,
				"GFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Ensenada"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Wayne"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of($$new($StringArray, {
				"Ecuadorianische Zeit"_s,
				"ECT"_s,
				"Ecuadorianische Sommerzeit"_s,
				"ECST"_s,
				"Ecuadorianische Zeit"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				"Guyanische Zeit"_s,
				"GYT"_s,
				"Guyanische Sommerzeit"_s,
				"GYST"_s,
				"Guyanische Zeit"_s,
				"GYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Knox_IN"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of($$new($StringArray, {
				"Bolivianische Zeit"_s,
				"BOT"_s,
				"Bolivianische Sommerzeit"_s,
				"BOST"_s,
				"Bolivianische Zeit"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				"Peruanische Zeit"_s,
				"PET"_s,
				"Peruanische Sommerzeit"_s,
				"PEST"_s,
				"Peruanische Zeit"_s,
				"PET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of($$new($StringArray, {
				"Pierre & Miquelon Normalzeit"_s,
				"PMST"_s,
				"Pierre & Miquelon Sommerzeit"_s,
				"PMDT"_s,
				u"Zeitzone für St. Pierre und Miquelon"_s,
				"PMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of($$new($StringArray, {
				"Uruguayische Zeit"_s,
				"UYT"_s,
				"Uruguayische Sommerzeit"_s,
				"UYST"_s,
				"Uruguayanische Zeit"_s,
				"UYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Nuuk"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of($$new($StringArray, {
				"Suriname Zeit"_s,
				"SRT"_s,
				"Suriname Sommerzeit"_s,
				"SRST"_s,
				"Suriname Zeit"_s,
				"SRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Rosario"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(EGT)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Virgin"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Casey"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of($$new($StringArray, {
				"Davis Zeit"_s,
				"DAVT"_s,
				"Davis Sommerzeit"_s,
				"DAVST"_s,
				"Davis Zeit"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				"Dumont-d\'Urville Zeit"_s,
				"DDUT"_s,
				"Dumont-d\'Urville Sommerzeit"_s,
				"DDUST"_s,
				"Dumont-d\'Urville Zeit"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				"Macquarieinsel Zeit"_s,
				"MIST"_s,
				"Macquarieinsel Sommerzeit"_s,
				"MIST"_s,
				"Macquarieinsel Zeit"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				"Mawson Zeit"_s,
				"MAWT"_s,
				"Mawson Sommerzeit"_s,
				"MAWST"_s,
				"Mawson Zeit"_s,
				"MAWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Palmer"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of($$new($StringArray, {
				"Rothera Zeit"_s,
				"ROTT"_s,
				"Rothera Sommerzeit"_s,
				"ROTST"_s,
				"Rothera Zeit"_s,
				"ROTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of($$new($StringArray, {
				"Syowa Zeit"_s,
				"SYOT"_s,
				"Syowa Sommerzeit"_s,
				"SYOST"_s,
				"Syowa Zeit"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				"Koordinierte Universalzeit"_s,
				"UTC"_s,
				u"Mitteleuropäische Sommerzeit"_s,
				"MESZ"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				"Vostok Zeit"_s,
				"VOST"_s,
				"Vostok Sommerzeit"_s,
				"VOSST"_s,
				"Vostok Zeit"_s,
				"VOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of($$new($StringArray, {
				"Alma Ata Zeit"_s,
				"ALMT"_s,
				"Alma-Ata Sommerzeit"_s,
				"ALMST"_s,
				"Alma Ata Zeit"_s,
				"ALMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of($$new($StringArray, {
				"Anadyr Zeit"_s,
				"ANAT"_s,
				"Anadyr Sommerzeit"_s,
				"ANAST"_s,
				"Anadyr Zeit"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				"Aqtau Zeit"_s,
				"AQTT"_s,
				"Aqtau Sommerzeit"_s,
				"AQTST"_s,
				"Aqtau Zeit"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				"Aqtobe Zeit"_s,
				"AQTT"_s,
				"Aqtobe Sommerzeit"_s,
				"AQTST"_s,
				"Aqtobe Zeit"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashkhabad"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of($$new($StringArray, {
				"Aserbaidschanische Zeit"_s,
				"AZT"_s,
				"Aserbaidschanische Sommerzeit"_s,
				"AZST"_s,
				"Aserbaidschanische Zeit"_s,
				"AZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of($$new($StringArray, {
				"Kirgisische Zeit"_s,
				"KGT"_s,
				"Kirgisische Sommerzeit"_s,
				"KGST"_s,
				"Kirgisische Zeit"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				"Brunei Zeit"_s,
				"BNT"_s,
				"Brunei Sommerzeit"_s,
				"BNST"_s,
				"Brunei Zeit"_s,
				"BNT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of($$new($StringArray, {
				"Choibalsan Zeit"_s,
				"CHOT"_s,
				"Choibalsan Sommerzeit"_s,
				"CHOST"_s,
				"Choibalsan Zeit"_s,
				"CHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chungking"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dacca"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of($$new($StringArray, {
				"Timor-Leste Normalzeit"_s,
				"TLT"_s,
				"Timor-Leste Sommerzeit"_s,
				"TLST"_s,
				"Timor-Leste Normalzeit"_s,
				"TLT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of($$new($StringArray, {
				"Tadschikische Zeit"_s,
				"TJT"_s,
				"Tadschikische Sommerzeit"_s,
				"TJST"_s,
				"Tadschikische Zeit"_s,
				"TJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ho_Chi_Minh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of($$new($StringArray, {
				"Hovd Zeit"_s,
				"HOVT"_s,
				"Hovd Sommerzeit"_s,
				"HOVST"_s,
				"Hovd Zeit"_s,
				"HOVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(IRKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of($$new($StringArray, {
				"Ostindonesische Zeit"_s,
				"WIT"_s,
				"Ostindonesische Sommerzeit"_s,
				"EIST"_s,
				"Ostindonesische Zeit"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				"Afghanistanische Zeit"_s,
				"AFT"_s,
				"Afghanistanische Sommerzeit"_s,
				"AFST"_s,
				"Afghanistanische Zeit"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				"Petropawlowsk-Kamtschatkische Zeit"_s,
				"PETT"_s,
				"Petropawlowsk-Kamtschatkische Sommerzeit"_s,
				"PETST"_s,
				"Petropawlowsk-Kamtschatkische Zeit"_s,
				"PETT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kashgar"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kathmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kolkata"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macao"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of($$new($StringArray, {
				"Magadanische Zeit"_s,
				"MAGT"_s,
				"Magadanische Sommerzeit"_s,
				"MAGST"_s,
				"Magadanische Zeit"_s,
				"MAGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of($$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(NOVT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of($$new($StringArray, {
				"Oral Zeit"_s,
				"ORAT"_s,
				"Oral Sommerzeit"_s,
				"ORAST"_s,
				"Oral Zeit"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				"Omsk Zeit"_s,
				"OMST"_s,
				"Omsk Sommerzeit"_s,
				"OMSST"_s,
				"Omsk Zeit"_s,
				"OMST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of($$new($StringArray, {
				"Qyzylorda Zeit"_s,
				"QYZT"_s,
				"Qyzylorda Sommerzeit"_s,
				"QYZST"_s,
				"Qyzylorda Zeit"_s,
				"QYZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of($$new($StringArray, {
				"Sakhalin Zeit"_s,
				"SAKT"_s,
				"Sakhalin Sommerzeit"_s,
				"SAKST"_s,
				"Sakhalin Zeit"_s,
				"SAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Srednekolymsk"_s),
			$of($$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tel_Aviv"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of($$new($StringArray, {
				"Georgische Zeit"_s,
				"GET"_s,
				"Georgische Sommerzeit"_s,
				"GEST"_s,
				"Georgische Zeit"_s,
				"GET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimbu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ujung_Pandang"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulan_Bator"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Urumqi"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of($$new($StringArray, {
				"Ust-Nera Zeit"_s,
				"VLAT"_s,
				"Ust-Nera Sommerzeit"_s,
				"VLAST"_s,
				"Ust-Nera Zeit"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of($$new($StringArray, {
				"Wladiwostok Zeit"_s,
				"VLAT"_s,
				"Wladiwostok Sommerzeit"_s,
				"VLAST"_s,
				"Wladiwostok Zeit"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yangon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of($$new($StringArray, {
				"Jekaterinburger Zeit"_s,
				"YEKT"_s,
				"Jekaterinburger Sommerzeit"_s,
				"YEKST"_s,
				"Jekaterinburger Zeit"_s,
				"YEKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of($$new($StringArray, {
				"Azoren Zeit"_s,
				"AZOT"_s,
				"Azoren Sommerzeit"_s,
				"AZOST"_s,
				"Azoren Zeit"_s,
				"AZOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of($$new($StringArray, {
				"Kap Verde Zeit"_s,
				"CVT"_s,
				"Kap Verde Sommerzeit"_s,
				"CVST"_s,
				"Kap Verde Zeit"_s,
				"CVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of($$new($StringArray, {
				"South Georgia Normalzeit"_s,
				"GST"_s,
				"South Georgia Sommerzeit"_s,
				"GDT"_s,
				u"Zeitzone für Südgeorgien"_s,
				"GT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of($$new($StringArray, {
				"Falkland Inseln Zeit"_s,
				"FKT"_s,
				"Falkland Inseln Sommerzeit"_s,
				"FKST"_s,
				"Falkland Inseln Zeit"_s,
				"FKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/ACT"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("Australia/Canberra"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of($$new($StringArray, {
				"Zentral-Westliche Normalzeit (Australien)"_s,
				"ACWST"_s,
				"Zentral-Westliche Sommerzeit (Australien)"_s,
				"ACWDT"_s,
				"Zentral-Westliche Normalzeit (Australien)"_s,
				"ACWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/LHI"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/North"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/NSW"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Queensland"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/South"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Tasmania"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/Victoria"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/West"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Yancowinna"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/DeNoronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("Brazil/East"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/West"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("Canada/Atlantic"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Newfoundland"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Yukon"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Saskatchewan"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("CET"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Chile/Continental"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Chile/EasterIsland"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Cuba"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("EET"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Egypt"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Eire"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Etc/Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Zulu"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of($$new($StringArray, {
				"Samarische Zeit"_s,
				"SAMT"_s,
				"Samarische Sommerzeit"_s,
				"SAMST"_s,
				"Samarische Zeit"_s,
				"SAMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tiraspol"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("GB-Eire"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Hongkong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Iceland"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Iran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("IST"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of($$new($StringArray, {
				"Indischer Ozean Territorium Zeit"_s,
				"IOT"_s,
				"Indischer Ozean Territorium Sommerzeit"_s,
				"IOST"_s,
				"Indischer Ozean Territorium Zeit"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				"Christmas Island Zeit"_s,
				"CXT"_s,
				"Christmas Island Sommerzeit"_s,
				"CXST"_s,
				"Weihnachtsinseln Zeit"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				"Cocos Islands Zeit"_s,
				"CCT"_s,
				"Cocos Islands Sommerzeit"_s,
				"CCST"_s,
				"Kokos-Inseln Zeit"_s,
				"CCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of($$new($StringArray, {
				u"Französisch Süd- u. Antarktische Landzeit"_s,
				"TFT"_s,
				u"Französisch Süd- u. Antarktische Landsommerzeit"_s,
				"TFST"_s,
				u"Französisch Süd- u. Antarktische Landzeit"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				"Seychellen Zeit"_s,
				"SCT"_s,
				"Seychellen Sommerzeit"_s,
				"SCST"_s,
				"Seychellen Zeit"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				"Maledivische Zeit"_s,
				"MVT"_s,
				"Maledivische Sommerzeit"_s,
				"MVST"_s,
				"Maledivische Zeit"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				"Mauritius Zeit"_s,
				"MUT"_s,
				"Mauritius Sommerzeit"_s,
				"MUST"_s,
				"Mauritius Zeit"_s,
				"MUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of($$new($StringArray, {
				"Reunion Zeit"_s,
				"RET"_s,
				"Reunion Sommerzeit"_s,
				"REST"_s,
				u"Réunion Zeit"_s,
				"RET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Israel"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Japan"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Libya"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("MET"_s),
			$of($$new($StringArray, {
				u"Zentraleuropäische Zeit"_s,
				"MET"_s,
				u"Zentraleuropäische Sommerzeit"_s,
				"MEST"_s,
				"MET"_s,
				"MET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaNorte"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaSur"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/General"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Navajo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ-CHAT"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Portugal"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Bougainville"_s),
			$of($$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chuuk"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of($$new($StringArray, {
				"Vanuatu Zeit"_s,
				"VUT"_s,
				"Vanuatu Sommerzeit"_s,
				"VUST"_s,
				"Vanuatu Zeit"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				"Phoenix Inseln Zeit"_s,
				"PHOT"_s,
				"Phoenix Inseln Sommerzeit"_s,
				"PHOST"_s,
				"Phoenix Inseln Zeit"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				"Tokelau Zeit"_s,
				"TKT"_s,
				"Tokelau Sommerzeit"_s,
				"TKST"_s,
				"Tokelau Zeit"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				"Fidschi Zeit"_s,
				"FJT"_s,
				"Fidschi Sommerzeit"_s,
				"FJST"_s,
				"Fidschi Zeit"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				"Tuvalu Zeit"_s,
				"TVT"_s,
				"Tuvalu Sommerzeit"_s,
				"TVST"_s,
				"Tuvalu Zeit"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				"Galapagos Zeit"_s,
				"GALT"_s,
				"Galapagos Sommerzeit"_s,
				"GALST"_s,
				"Galapagos Zeit"_s,
				"GALT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(GAMBIER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of($$new($StringArray, {
				"Line Inseln Zeit"_s,
				"LINT"_s,
				"Line Inseln Sommerzeit"_s,
				"LINST"_s,
				"Line Inseln Zeit"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				"Kosrae Zeit"_s,
				"KOST"_s,
				"Kosrae Sommerzeit"_s,
				"KOSST"_s,
				"Kosrae Zeit"_s,
				"KOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of($$new($StringArray, {
				"Marquesas Zeit"_s,
				"MART"_s,
				"Marquesas Sommerzeit"_s,
				"MARST"_s,
				"Marquesas Zeit"_s,
				"MART"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of($$new($StringArray, {
				"Nauru Zeit"_s,
				"NRT"_s,
				"Nauru Sommerzeit"_s,
				"NRST"_s,
				"Nauru Zeit"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				"Niue Zeit"_s,
				"NUT"_s,
				"Niue Sommerzeit"_s,
				"NUST"_s,
				"Niue Zeit"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				"Norfolk Zeit"_s,
				"NFT"_s,
				"Norfolk Sommerzeit"_s,
				"NFST"_s,
				"Norfolk Zeit"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				"Neukaledonische Zeit"_s,
				"NCT"_s,
				"Neukaledonische Sommerzeit"_s,
				"NCST"_s,
				"Neukaledonische Zeit"_s,
				"NCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of($$new($StringArray, {
				"Palau Zeit"_s,
				"PWT"_s,
				"Palau Sommerzeit"_s,
				"PWST"_s,
				"Palau Zeit"_s,
				"PWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(PITCAIRN)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pohnpei"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of($$new($StringArray, {
				"Papua-Neuguinea Zeit"_s,
				"PGT"_s,
				"Papua-Neuguinea Sommerzeit"_s,
				"PGST"_s,
				"Papua-Neuguinea Zeit"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				"Cook-Inseln Zeit"_s,
				"CKT"_s,
				"Cook-Inseln Sommerzeit"_s,
				"CKHST"_s,
				"Cook-Inseln Zeit"_s,
				"CKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of($$new($StringArray, {
				"Tahiti Zeit"_s,
				"TAHT"_s,
				"Tahiti Sommerzeit"_s,
				"TAHST"_s,
				"Tahiti Zeit"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				"Gilbert-Inseln Zeit"_s,
				"GILT"_s,
				"Gilbert-Inseln Sommerzeit"_s,
				"GILST"_s,
				"Gilbert-Inseln Zeit"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				"Tonga Zeit"_s,
				"TOT"_s,
				"Tonga Sommerzeit"_s,
				"TOST"_s,
				"Tonga Zeit"_s,
				"TOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of($$new($StringArray, {
				"Wake Zeit"_s,
				"WAKT"_s,
				"Wake Sommerzeit"_s,
				"WAKST"_s,
				"Wake Zeit"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				"Wallis u. Futuna Zeit"_s,
				"WFT"_s,
				"Wallis u. Futuna Sommerzeit"_s,
				"WFST"_s,
				"Wallis u. Futuna Zeit"_s,
				"WFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(CHUT)
		}),
		$$new($ObjectArray, {
			$of("Poland"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("PRC"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("ROK"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("Turkey"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("US/Alaska"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("US/Aleutian"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Arizona"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Hawaii"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Indiana-Starke"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/East-Indiana"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Michigan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("US/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("VST"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("W-SU"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("WET"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Zulu"_s),
			$of(UTC)
		})
	});
}

TimeZoneNames_de::TimeZoneNames_de() {
}

$Class* TimeZoneNames_de::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_de, name, initialize, &_TimeZoneNames_de_ClassInfo_, allocate$TimeZoneNames_de);
	return class$;
}

$Class* TimeZoneNames_de::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun