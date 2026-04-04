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

void TimeZoneNames_de::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_de::getContents() {
	$useLocalObjectStack();
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
				"Paraguay Zeit"_s,
				"PYT"_s,
				"Paraguay Sommerzeit"_s,
				"PYST"_s,
				"Paraguay Zeit"_s,
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
				"Kolumbianische Zeit"_s,
				"COT"_s,
				"Kolumbianische Sommerzeit"_s,
				"COST"_s,
				"Kolumbianische Zeit"_s,
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
				"Venezuelanische Zeit"_s,
				"VET"_s,
				"Venezuelanische Sommerzeit"_s,
				"VEST"_s,
				"Venezuelanische Zeit"_s,
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
				u"Französisch-Guiana Zeit"_s,
				"GFT"_s,
				u"Französisch-Guiana Sommerzeit"_s,
				"GFST"_s,
				u"Französisch-Guiana Zeit"_s,
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
				"Ecuadorianische Zeit"_s,
				"ECT"_s,
				"Ecuadorianische Sommerzeit"_s,
				"ECST"_s,
				"Ecuadorianische Zeit"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Guyanische Zeit"_s,
				"GYT"_s,
				"Guyanische Sommerzeit"_s,
				"GYST"_s,
				"Guyanische Zeit"_s,
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
				"Bolivianische Zeit"_s,
				"BOT"_s,
				"Bolivianische Sommerzeit"_s,
				"BOST"_s,
				"Bolivianische Zeit"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				"Peruanische Zeit"_s,
				"PET"_s,
				"Peruanische Sommerzeit"_s,
				"PEST"_s,
				"Peruanische Zeit"_s,
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
				"Pierre & Miquelon Normalzeit"_s,
				"PMST"_s,
				"Pierre & Miquelon Sommerzeit"_s,
				"PMDT"_s,
				u"Zeitzone für St. Pierre und Miquelon"_s,
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
				"Uruguayische Zeit"_s,
				"UYT"_s,
				"Uruguayische Sommerzeit"_s,
				"UYST"_s,
				"Uruguayanische Zeit"_s,
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
				"Suriname Zeit"_s,
				"SRT"_s,
				"Suriname Sommerzeit"_s,
				"SRST"_s,
				"Suriname Zeit"_s,
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
				"Davis Zeit"_s,
				"DAVT"_s,
				"Davis Sommerzeit"_s,
				"DAVST"_s,
				"Davis Zeit"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Dumont-d\'Urville Zeit"_s,
				"DDUT"_s,
				"Dumont-d\'Urville Sommerzeit"_s,
				"DDUST"_s,
				"Dumont-d\'Urville Zeit"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				"Macquarieinsel Zeit"_s,
				"MIST"_s,
				"Macquarieinsel Sommerzeit"_s,
				"MIST"_s,
				"Macquarieinsel Zeit"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Mawson Zeit"_s,
				"MAWT"_s,
				"Mawson Sommerzeit"_s,
				"MAWST"_s,
				"Mawson Zeit"_s,
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
				"Rothera Zeit"_s,
				"ROTT"_s,
				"Rothera Sommerzeit"_s,
				"ROTST"_s,
				"Rothera Zeit"_s,
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
				"Syowa Zeit"_s,
				"SYOT"_s,
				"Syowa Sommerzeit"_s,
				"SYOST"_s,
				"Syowa Zeit"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				"Koordinierte Universalzeit"_s,
				"UTC"_s,
				u"Mitteleuropäische Sommerzeit"_s,
				"MESZ"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Vostok Zeit"_s,
				"VOST"_s,
				"Vostok Sommerzeit"_s,
				"VOSST"_s,
				"Vostok Zeit"_s,
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
				"Alma Ata Zeit"_s,
				"ALMT"_s,
				"Alma-Ata Sommerzeit"_s,
				"ALMST"_s,
				"Alma Ata Zeit"_s,
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
				"Anadyr Zeit"_s,
				"ANAT"_s,
				"Anadyr Sommerzeit"_s,
				"ANAST"_s,
				"Anadyr Zeit"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Aqtau Zeit"_s,
				"AQTT"_s,
				"Aqtau Sommerzeit"_s,
				"AQTST"_s,
				"Aqtau Zeit"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Aqtobe Zeit"_s,
				"AQTT"_s,
				"Aqtobe Sommerzeit"_s,
				"AQTST"_s,
				"Aqtobe Zeit"_s,
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
				"Aserbaidschanische Zeit"_s,
				"AZT"_s,
				"Aserbaidschanische Sommerzeit"_s,
				"AZST"_s,
				"Aserbaidschanische Zeit"_s,
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
				"Kirgisische Zeit"_s,
				"KGT"_s,
				"Kirgisische Sommerzeit"_s,
				"KGST"_s,
				"Kirgisische Zeit"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Brunei Zeit"_s,
				"BNT"_s,
				"Brunei Sommerzeit"_s,
				"BNST"_s,
				"Brunei Zeit"_s,
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
				"Choibalsan Zeit"_s,
				"CHOT"_s,
				"Choibalsan Sommerzeit"_s,
				"CHOST"_s,
				"Choibalsan Zeit"_s,
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
				"Timor-Leste Normalzeit"_s,
				"TLT"_s,
				"Timor-Leste Sommerzeit"_s,
				"TLST"_s,
				"Timor-Leste Normalzeit"_s,
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
				"Tadschikische Zeit"_s,
				"TJT"_s,
				"Tadschikische Sommerzeit"_s,
				"TJST"_s,
				"Tadschikische Zeit"_s,
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
				"Hovd Zeit"_s,
				"HOVT"_s,
				"Hovd Sommerzeit"_s,
				"HOVST"_s,
				"Hovd Zeit"_s,
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
				"Ostindonesische Zeit"_s,
				"WIT"_s,
				"Ostindonesische Sommerzeit"_s,
				"EIST"_s,
				"Ostindonesische Zeit"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				"Afghanistanische Zeit"_s,
				"AFT"_s,
				"Afghanistanische Sommerzeit"_s,
				"AFST"_s,
				"Afghanistanische Zeit"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Petropawlowsk-Kamtschatkische Zeit"_s,
				"PETT"_s,
				"Petropawlowsk-Kamtschatkische Sommerzeit"_s,
				"PETST"_s,
				"Petropawlowsk-Kamtschatkische Zeit"_s,
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
				"Magadanische Zeit"_s,
				"MAGT"_s,
				"Magadanische Sommerzeit"_s,
				"MAGST"_s,
				"Magadanische Zeit"_s,
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
				"Oral Zeit"_s,
				"ORAT"_s,
				"Oral Sommerzeit"_s,
				"ORAST"_s,
				"Oral Zeit"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Omsk Zeit"_s,
				"OMST"_s,
				"Omsk Sommerzeit"_s,
				"OMSST"_s,
				"Omsk Zeit"_s,
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
				"Qyzylorda Zeit"_s,
				"QYZT"_s,
				"Qyzylorda Sommerzeit"_s,
				"QYZST"_s,
				"Qyzylorda Zeit"_s,
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
				"Sakhalin Zeit"_s,
				"SAKT"_s,
				"Sakhalin Sommerzeit"_s,
				"SAKST"_s,
				"Sakhalin Zeit"_s,
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
				"Georgische Zeit"_s,
				"GET"_s,
				"Georgische Sommerzeit"_s,
				"GEST"_s,
				"Georgische Zeit"_s,
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
				"Ust-Nera Zeit"_s,
				"VLAT"_s,
				"Ust-Nera Sommerzeit"_s,
				"VLAST"_s,
				"Ust-Nera Zeit"_s,
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
				"Wladiwostok Zeit"_s,
				"VLAT"_s,
				"Wladiwostok Sommerzeit"_s,
				"VLAST"_s,
				"Wladiwostok Zeit"_s,
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
				"Jekaterinburger Zeit"_s,
				"YEKT"_s,
				"Jekaterinburger Sommerzeit"_s,
				"YEKST"_s,
				"Jekaterinburger Zeit"_s,
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
				"Azoren Zeit"_s,
				"AZOT"_s,
				"Azoren Sommerzeit"_s,
				"AZOST"_s,
				"Azoren Zeit"_s,
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
				"Kap Verde Zeit"_s,
				"CVT"_s,
				"Kap Verde Sommerzeit"_s,
				"CVST"_s,
				"Kap Verde Zeit"_s,
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
				"South Georgia Normalzeit"_s,
				"GST"_s,
				"South Georgia Sommerzeit"_s,
				"GDT"_s,
				u"Zeitzone für Südgeorgien"_s,
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
				"Falkland Inseln Zeit"_s,
				"FKT"_s,
				"Falkland Inseln Sommerzeit"_s,
				"FKST"_s,
				"Falkland Inseln Zeit"_s,
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
				"Zentral-Westliche Normalzeit (Australien)"_s,
				"ACWST"_s,
				"Zentral-Westliche Sommerzeit (Australien)"_s,
				"ACWDT"_s,
				"Zentral-Westliche Normalzeit (Australien)"_s,
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
				"Samarische Zeit"_s,
				"SAMT"_s,
				"Samarische Sommerzeit"_s,
				"SAMST"_s,
				"Samarische Zeit"_s,
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
				"Indischer Ozean Territorium Zeit"_s,
				"IOT"_s,
				"Indischer Ozean Territorium Sommerzeit"_s,
				"IOST"_s,
				"Indischer Ozean Territorium Zeit"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				"Christmas Island Zeit"_s,
				"CXT"_s,
				"Christmas Island Sommerzeit"_s,
				"CXST"_s,
				"Weihnachtsinseln Zeit"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				"Cocos Islands Zeit"_s,
				"CCT"_s,
				"Cocos Islands Sommerzeit"_s,
				"CCST"_s,
				"Kokos-Inseln Zeit"_s,
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
				u"Französisch Süd- u. Antarktische Landzeit"_s,
				"TFT"_s,
				u"Französisch Süd- u. Antarktische Landsommerzeit"_s,
				"TFST"_s,
				u"Französisch Süd- u. Antarktische Landzeit"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Seychellen Zeit"_s,
				"SCT"_s,
				"Seychellen Sommerzeit"_s,
				"SCST"_s,
				"Seychellen Zeit"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Maledivische Zeit"_s,
				"MVT"_s,
				"Maledivische Sommerzeit"_s,
				"MVST"_s,
				"Maledivische Zeit"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Mauritius Zeit"_s,
				"MUT"_s,
				"Mauritius Sommerzeit"_s,
				"MUST"_s,
				"Mauritius Zeit"_s,
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
				"Reunion Zeit"_s,
				"RET"_s,
				"Reunion Sommerzeit"_s,
				"REST"_s,
				u"Réunion Zeit"_s,
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
				u"Zentraleuropäische Zeit"_s,
				"MET"_s,
				u"Zentraleuropäische Sommerzeit"_s,
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
				"Vanuatu Zeit"_s,
				"VUT"_s,
				"Vanuatu Sommerzeit"_s,
				"VUST"_s,
				"Vanuatu Zeit"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				"Phoenix Inseln Zeit"_s,
				"PHOT"_s,
				"Phoenix Inseln Sommerzeit"_s,
				"PHOST"_s,
				"Phoenix Inseln Zeit"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Tokelau Zeit"_s,
				"TKT"_s,
				"Tokelau Sommerzeit"_s,
				"TKST"_s,
				"Tokelau Zeit"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Fidschi Zeit"_s,
				"FJT"_s,
				"Fidschi Sommerzeit"_s,
				"FJST"_s,
				"Fidschi Zeit"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Tuvalu Zeit"_s,
				"TVT"_s,
				"Tuvalu Sommerzeit"_s,
				"TVST"_s,
				"Tuvalu Zeit"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				"Galapagos Zeit"_s,
				"GALT"_s,
				"Galapagos Sommerzeit"_s,
				"GALST"_s,
				"Galapagos Zeit"_s,
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
				"Line Inseln Zeit"_s,
				"LINT"_s,
				"Line Inseln Sommerzeit"_s,
				"LINST"_s,
				"Line Inseln Zeit"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Kosrae Zeit"_s,
				"KOST"_s,
				"Kosrae Sommerzeit"_s,
				"KOSST"_s,
				"Kosrae Zeit"_s,
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
				"Marquesas Zeit"_s,
				"MART"_s,
				"Marquesas Sommerzeit"_s,
				"MARST"_s,
				"Marquesas Zeit"_s,
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
				"Nauru Zeit"_s,
				"NRT"_s,
				"Nauru Sommerzeit"_s,
				"NRST"_s,
				"Nauru Zeit"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Niue Zeit"_s,
				"NUT"_s,
				"Niue Sommerzeit"_s,
				"NUST"_s,
				"Niue Zeit"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Norfolk Zeit"_s,
				"NFT"_s,
				"Norfolk Sommerzeit"_s,
				"NFST"_s,
				"Norfolk Zeit"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				"Neukaledonische Zeit"_s,
				"NCT"_s,
				"Neukaledonische Sommerzeit"_s,
				"NCST"_s,
				"Neukaledonische Zeit"_s,
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
				"Palau Zeit"_s,
				"PWT"_s,
				"Palau Sommerzeit"_s,
				"PWST"_s,
				"Palau Zeit"_s,
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
				"Papua-Neuguinea Zeit"_s,
				"PGT"_s,
				"Papua-Neuguinea Sommerzeit"_s,
				"PGST"_s,
				"Papua-Neuguinea Zeit"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				"Cook-Inseln Zeit"_s,
				"CKT"_s,
				"Cook-Inseln Sommerzeit"_s,
				"CKHST"_s,
				"Cook-Inseln Zeit"_s,
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
				"Tahiti Zeit"_s,
				"TAHT"_s,
				"Tahiti Sommerzeit"_s,
				"TAHST"_s,
				"Tahiti Zeit"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				"Gilbert-Inseln Zeit"_s,
				"GILT"_s,
				"Gilbert-Inseln Sommerzeit"_s,
				"GILST"_s,
				"Gilbert-Inseln Zeit"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Tonga Zeit"_s,
				"TOT"_s,
				"Tonga Sommerzeit"_s,
				"TOST"_s,
				"Tonga Zeit"_s,
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
				"Wake Zeit"_s,
				"WAKT"_s,
				"Wake Sommerzeit"_s,
				"WAKST"_s,
				"Wake Zeit"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Wallis u. Futuna Zeit"_s,
				"WFT"_s,
				"Wallis u. Futuna Sommerzeit"_s,
				"WFST"_s,
				"Wallis u. Futuna Zeit"_s,
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

TimeZoneNames_de::TimeZoneNames_de() {
}

$Class* TimeZoneNames_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_de",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_de);
	});
	return class$;
}

$Class* TimeZoneNames_de::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun