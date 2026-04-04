#include <sun/util/resources/ext/TimeZoneNames_it.h>
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

void TimeZoneNames_it::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_it::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		"Ora di Acre"_s,
		"ACT"_s,
		"Ora estiva di Acre"_s,
		"ACST"_s,
		"Ora di Acre"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		"Ora standard centrale (Australia del Sud)"_s,
		"ACST"_s,
		"Ora estiva centrale (Australia del Sud)"_s,
		"ACDT"_s,
		"Ora fuso centrale (Australia del Sud)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Ora dell\'Argentina"_s,
		"ART"_s,
		"Ora estiva dell\'Argentina"_s,
		"ARST"_s,
		"Ora dell\'Argentina"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		"Ora solare dell\'Alaska"_s,
		"AKST"_s,
		"Ora legale dell\'Alaska"_s,
		"AKDT"_s,
		"Ora Alaska"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		"Ora solare dell\'Amazzonia"_s,
		"AMT"_s,
		"Ora estiva dell\'Amazzonia"_s,
		"AMST"_s,
		"Ora dell\'Amazzonia"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		"Ora solare dell\'Arabia"_s,
		"AST"_s,
		"Ora legale dell\'Arabia"_s,
		"ADT"_s,
		"Ora Arabia Saudita"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		"Ora dell\'Armenia"_s,
		"AMT"_s,
		"Ora estiva dell\'Armenia"_s,
		"AMST"_s,
		"Ora dell\'Armenia"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		"Ora solare dell\'Atlantico occidentale"_s,
		"AST"_s,
		"Ora legale dell\'Atlantico occidentale"_s,
		"ADT"_s,
		"Fuso dell\'Atlantico"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Ora del Bangladesh"_s,
		"BDT"_s,
		"Ora estiva del Bangladesh"_s,
		"BDST"_s,
		"Ora del Bangladesh"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		"Ora standard orientale (Queensland)"_s,
		"AEST"_s,
		"Ora estiva orientale (Queensland)"_s,
		"AEDT"_s,
		"Ora fuso orientale (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		"Ora standard centrale (Australia del Sud/Nuovo Galles del Sud)"_s,
		"ACST"_s,
		"Ora estiva centrale (Australia del Sud/Nuovo Galles del Sud)"_s,
		"ACDT"_s,
		"Ora fuso centrale (Australia del Sud/Nuovo Galles del Sud)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		"Ora del Brasile"_s,
		"BRT"_s,
		"Ora estiva del Brasile"_s,
		"BRST"_s,
		"Ora di Brasilia"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		"Ora del Bhutan"_s,
		"BTT"_s,
		"Ora estiva del Bhutan"_s,
		"BTST"_s,
		"Ora del Bhutan"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		"Ora dell\'Africa centrale"_s,
		"CAT"_s,
		"Ora estiva dell\'Africa centrale"_s,
		"CAST"_s,
		"Ora dell\'Africa centrale"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		"Ora dell\'Europa centrale"_s,
		"CET"_s,
		"Ora estiva dell\'Europa centrale"_s,
		"CEST"_s,
		"Ora dell\'Europa centrale"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		"Ora di Chatham standard"_s,
		"CHAST"_s,
		"Ora legale di Chatham"_s,
		"CHADT"_s,
		"Ora Chatham"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Ora di Chuuk"_s,
		"CHUT"_s,
		"Ora estiva di Chuuk"_s,
		"CHUST"_s,
		"Ora di Chuuk"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		"Ora dell\'Indonesia centrale"_s,
		"WITA"_s,
		"Ora estiva dell\'Indonesia centrale"_s,
		"CIST"_s,
		"Ora dell\'Indonesia centrale"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Ora del Cile"_s,
		"CLT"_s,
		"Ora estiva del Cile"_s,
		"CLST"_s,
		"Ora del Cile"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		"Ora solare USA centrale"_s,
		"CST"_s,
		"Ora legale USA centrale"_s,
		"CDT"_s,
		"Ora fuso centrale"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		"Ora solare della Cina"_s,
		"CST"_s,
		"Ora legale della Cina"_s,
		"CDT"_s,
		"Ora Cina"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		"Ora solare Cuba"_s,
		"CST"_s,
		"Ora legale Cuba"_s,
		"CDT"_s,
		"Ora di Cuba"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		"Ora standard centrale (Territori del Nord)"_s,
		"ACST"_s,
		"Ora estiva centrale (Territori del Nord)"_s,
		"ACDT"_s,
		"Ora fuso centrale (Territori del Nord)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		"Ora media di Greenwich"_s,
		"GMT"_s,
		"Ora estiva irlandese"_s,
		"IST"_s,
		"Ora irlandese"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		"Ora dell\'Africa orientale"_s,
		"EAT"_s,
		"Ora estiva dell\'Africa orientale"_s,
		"EAST"_s,
		"Ora dell\'Africa orientale"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		"Ora dell\'Isola di Pasqua"_s,
		"EAST"_s,
		"Ora estiva dell\'Isola di Pasqua"_s,
		"EASST"_s,
		"Ora dell\'Isola di Pasqua"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		"Ora dell\'Europa orientale"_s,
		"EET"_s,
		"Ora estiva dell\'Europa orientale"_s,
		"EEST"_s,
		"Ora dell\'Europa orientale"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		"Ora della Groenlandia orientale"_s,
		"EGT"_s,
		"Ora estiva della Groenlandia orientale"_s,
		"EGST"_s,
		"Ora della Groenlandia orientale"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		"Ora solare USA orientale"_s,
		"EST"_s,
		"Ora legale USA orientale"_s,
		"EDT"_s,
		"Fuso orientale"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		"Ora standard dell\'Australia orientale (Nuovo Galles del Sud)"_s,
		"AEST"_s,
		"Ora estiva dell\'Australia orientale (Nuovo Galles del Sud)"_s,
		"AEDT"_s,
		"Ora fuso orientale (Nuovo Galles del Sud)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"Ora dei paesi europei più orientali"_s,
		"FET"_s,
		u"Ora estiva dei paesi europei più orientali"_s,
		"FEST"_s,
		u"Ora dei paesi europei più orientali"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Ora media del Ghana"_s,
		"GMT"_s,
		"Ora legale del Ghana"_s,
		"GHST"_s,
		"Ora media del Ghana"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Ora di Gambier"_s,
		"GAMT"_s,
		"Ora estiva di Gambier"_s,
		"GAMST"_s,
		"Ora di Gambier"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Ora media di Greenwich"_s,
		"GMT"_s,
		"Ora media di Greenwich"_s,
		"GMT"_s,
		"Ora media di Greenwich"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		"Ora media di Greenwich"_s,
		"GMT"_s,
		"Ora estiva britannica"_s,
		"BST"_s,
		"Ora britannica"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		"Ora solare del golfo"_s,
		"GST"_s,
		"Ora legale del golfo"_s,
		"GDT"_s,
		"Ora del golfo"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Ora di Hong Kong"_s,
		"HKT"_s,
		"Ora estiva di Hong Kong"_s,
		"HKST"_s,
		"Ora di Hong Kong"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		"Ora solare delle Isole Hawaii"_s,
		"HST"_s,
		"Ora legale delle Isole Hawaii"_s,
		"HDT"_s,
		"Ora Hawaii"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Ora dell\'Indocina"_s,
		"ICT"_s,
		"Ora estiva dell\'Indocina"_s,
		"ICST"_s,
		"Ora dell\'Indocina"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Ora di Irkutsk"_s,
		"IRKT"_s,
		"Ora estiva di Irkutsk"_s,
		"IRKST"_s,
		"Ora di Irkutsk"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		"Ora solare Iran"_s,
		"IRST"_s,
		"Ora legale Iran"_s,
		"IRDT"_s,
		"Ora Iran"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		"Ora standard di Israele"_s,
		"IST"_s,
		"Ora legale di Israele"_s,
		"IDT"_s,
		"Ora Israele"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		"Ora solare dell\'India"_s,
		"IST"_s,
		"Ora legale dell\'India"_s,
		"IDT"_s,
		"Ora India"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		"Ora solare del Giappone"_s,
		"JST"_s,
		"Ora legale del Giappone"_s,
		"JDT"_s,
		"Ora Giappone"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		"Ora di Krasnojarsk"_s,
		"KRAT"_s,
		"Ora estiva di Krasnojarsk"_s,
		"KRAST"_s,
		"Ora di Krasnojarsk"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		"Ora solare della Corea"_s,
		"KST"_s,
		"Ora legale della Corea"_s,
		"KDT"_s,
		"Ora Corea"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		"Ora standard di Lord Howe"_s,
		"LHST"_s,
		"Ora estiva di Lord Howe"_s,
		"LHDT"_s,
		"Ora di Lord Howe"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		"Ora delle Isole Marshall"_s,
		"MHT"_s,
		"Ora estiva delle Isole Marshall"_s,
		"MHST"_s,
		"Ora delle Isole Marshall"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Ora della Birmania/Myanmar"_s,
		"MMT"_s,
		"Ora estiva della Birmania/Myanmar"_s,
		"MMST"_s,
		"Ora della Birmania/Myanmar"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		"Ora standard di Mosca"_s,
		"MSK"_s,
		"Ora legale di Mosca"_s,
		"MSD"_s,
		"Ora Mosca"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		"Ora solare USA occidentale"_s,
		"MST"_s,
		"Ora legale USA occidentale"_s,
		"MDT"_s,
		"Ora fuso occidentale"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Ora della Malaysia"_s,
		"MYT"_s,
		"Ora estiva della Malaysia"_s,
		"MYST"_s,
		"Ora della Malaysia"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Ora di Fernando de Noronha"_s,
		"FNT"_s,
		"Ora estiva di Fernando de Noronha"_s,
		"FNST"_s,
		"Ora di Fernando de Noronha"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Ora di Novosibirsk"_s,
		"NOVT"_s,
		"Ora estiva di Novosibirsk"_s,
		"NOVST"_s,
		"Ora di Novosibirsk"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		"Ora del Nepal"_s,
		"NPT"_s,
		"Ora estiva del Nepal"_s,
		"NPST"_s,
		"Ora del Nepal"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		"Ora solare di Terranova"_s,
		"NST"_s,
		"Ora legale di Terranova"_s,
		"NDT"_s,
		"Ora Terranova"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		"Ora solare della Nuova Zelanda"_s,
		"NZST"_s,
		"Ora legale della Nuova Zelanda"_s,
		"NZDT"_s,
		"Ora Nuova Zelanda"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		"Ora standard di Pitcairn"_s,
		"PST"_s,
		"Ora legale di Pitcairn"_s,
		"PDT"_s,
		"Ora Pitcairn"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		"Ora del Pakistan"_s,
		"PKT"_s,
		"Ora estiva del Pakistan"_s,
		"PKST"_s,
		"Ora del Pakistan"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Ora di Pohnpei"_s,
		"PONT"_s,
		"Ora estiva di Pohnpei"_s,
		"PONST"_s,
		"Ora Ponape"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		"Ora solare della costa occidentale USA"_s,
		"PST"_s,
		"Ora legale della costa occidentale USA"_s,
		"PDT"_s,
		"Fuso del Pacifico"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		"Ora solare del Sudafrica"_s,
		"SAST"_s,
		"Ora estiva del Sudafrica"_s,
		"SAST"_s,
		"Ora Sudafrica"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		"Ora delle Isole Salomone"_s,
		"SBT"_s,
		"Ora estiva delle Isole Salomone"_s,
		"SBST"_s,
		"Ora delle Isole Salomone"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Ora di Singapore"_s,
		"SGT"_s,
		"Ora estiva di Singapore"_s,
		"SGST"_s,
		"Ora di Singapore"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		"Ora standard orientale (Tasmania)"_s,
		"AEST"_s,
		"Ora estiva orientale (Tasmania)"_s,
		"AEDT"_s,
		"Ora fuso orientale (Tasmania)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		"Ora del Turkmenistan"_s,
		"TMT"_s,
		"Ora estiva del Turkmenistan"_s,
		"TMST"_s,
		"Ora del Turkmenistan"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Ora di Ulaanbaatar"_s,
		"ULAT"_s,
		"Ora estiva di Ulaanbaatar"_s,
		"ULAST"_s,
		"Ora di Ulaanbaatar"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		"Ora dell\'Africa occidentale"_s,
		"WAT"_s,
		"Ora estiva dell\'Africa occidentale"_s,
		"WAST"_s,
		"Ora dell\'Africa occidentale"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		"Ora dell\'Europa occidentale"_s,
		"WET"_s,
		"Ora estiva dell\'Europa occidentale"_s,
		"WEST"_s,
		"Ora dell\'Europa occidentale"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		"Ora della Groenlandia occidentale"_s,
		"WGT"_s,
		"Ora estiva della Groenlandia occidentale"_s,
		"WGST"_s,
		"Ora della Groenlandia occidentale"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		"Ora dell\'Indonesia occidentale"_s,
		"WIB"_s,
		"Ora estiva dell\'Indonesia occidentale"_s,
		"WIST"_s,
		"Ora dell\'Indonesia occidentale"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		"Ora standard dell\'Australia occidentale"_s,
		"AWST"_s,
		"Ora estiva dell\'Australia occidentale"_s,
		"AWDT"_s,
		"Ora Australia occidentale"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		"Ora standard di Samoa"_s,
		"SST"_s,
		"Ora legale di Samoa"_s,
		"SDT"_s,
		"Ora Samoa"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		"Ora di Samoa"_s,
		"WSST"_s,
		"Ora estiva di Samoa"_s,
		"WSDT"_s,
		"Ora di Samoa occidentale"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		"Ora standard di Chamorro"_s,
		"ChST"_s,
		"Ora legale di Chamorro"_s,
		"ChDT"_s,
		"Ora Chamorro"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		"Ora standard orientale (Victoria)"_s,
		"AEST"_s,
		"Ora estiva orientale (Victoria)"_s,
		"AEDT"_s,
		"Ora fuso orientale (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Tempo universale coordinato"_s,
		"UTC"_s,
		"Tempo universale coordinato"_s,
		"UTC"_s,
		"Tempo universale coordinato"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		"Ora dell\'Uzbekistan"_s,
		"UZT"_s,
		"Ora estiva dell\'Uzbekistan"_s,
		"UZST"_s,
		"Ora dell\'Uzbekistan"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		"Ora solare della Cina"_s,
		"XJT"_s,
		"Ora legale della Cina"_s,
		"XJDT"_s,
		"Ora Cina"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Ora di Jakutsk"_s,
		"YAKT"_s,
		"Ora estiva di Jakutsk"_s,
		"YAKST"_s,
		"Ora di Yakutsk"_s,
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
				"Ora del Paraguay"_s,
				"PYT"_s,
				"Ora estiva del Paraguay"_s,
				"PYST"_s,
				"Ora del Paraguay"_s,
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
				"Ora della Colombia"_s,
				"COT"_s,
				"Ora estiva della Colombia"_s,
				"COST"_s,
				"Ora della Colombia"_s,
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
				"Ora del Venezuela"_s,
				"VET"_s,
				"Ora estiva del Venezuela"_s,
				"VEST"_s,
				"Ora del Venezuela"_s,
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
				"Ora della Guyana Francese"_s,
				"GFT"_s,
				"Ora estiva della Guyana Francese"_s,
				"GFST"_s,
				"Ora della Guyana Francese"_s,
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
				"Ora dell\'Ecuador"_s,
				"ECT"_s,
				"Ora estiva dell\'Ecuador"_s,
				"ECST"_s,
				"Ora dell\'Ecuador"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Ora della Guyana"_s,
				"GYT"_s,
				"Ora estiva della Guyana"_s,
				"GYST"_s,
				"Ora della Guyana"_s,
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
				"Ora della Bolivia"_s,
				"BOT"_s,
				"Ora estiva della Bolivia"_s,
				"BOST"_s,
				"Ora della Bolivia"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"Ora del Perù"_s,
				"PET"_s,
				u"Ora estiva del Perù"_s,
				"PEST"_s,
				u"Ora del Perù"_s,
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
				"Ora solare di Saint-Pierre e Miquelon"_s,
				"PMST"_s,
				"Ora legale di Saint-Pierre e Miquelon"_s,
				"PMDT"_s,
				"Ora Saint-Pierre e Miquelon"_s,
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
				"Ora dell\'Uruguay"_s,
				"UYT"_s,
				"Ora estiva dell\'Uruguay"_s,
				"UYST"_s,
				"Ora dell\'Uruguay"_s,
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
				"Ora di Suriname"_s,
				"SRT"_s,
				"Ora estiva di Suriname"_s,
				"SRST"_s,
				"Ora di Suriname"_s,
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
				"Ora di Davis"_s,
				"DAVT"_s,
				"Ora estiva di Davis"_s,
				"DAVST"_s,
				"Ora di Davis"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Ora di Dumont-d\'Urville"_s,
				"DDUT"_s,
				"Ora estiva di Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Ora di Dumont-d\'Urville"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				"Ora dell\'Isola Macquarie"_s,
				"MIST"_s,
				"Ora estiva dell\'Isola Macquarie"_s,
				"MIST"_s,
				"Ora dell\'Isola Macquarie"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Ora di Mawson"_s,
				"MAWT"_s,
				"Ora estiva di Mawson"_s,
				"MAWST"_s,
				"Ora di Mawson"_s,
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
				"Ora di Rothera"_s,
				"ROTT"_s,
				"Ora estiva di Rothera"_s,
				"ROTST"_s,
				"Ora di Rothera"_s,
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
				"Ora di Syowa"_s,
				"SYOT"_s,
				"Ora estiva di Syowa"_s,
				"SYOST"_s,
				"Ora di Syowa"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				"Tempo universale coordinato"_s,
				"UTC"_s,
				"Ora estiva dell\'Europa centrale"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Ora di Vostok"_s,
				"VOST"_s,
				"Ora estiva di Vostok"_s,
				"VOSST"_s,
				"Ora di Vostok"_s,
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
				"Ora di Alma-Ata"_s,
				"ALMT"_s,
				"Ora estiva di Alma-Ata"_s,
				"ALMST"_s,
				"Ora di Alma-Ata"_s,
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
				"Ora di Anadyr"_s,
				"ANAT"_s,
				"Ora estiva di Anadyr"_s,
				"ANAST"_s,
				"Ora di Anadyr"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Ora di Aqtau"_s,
				"AQTT"_s,
				"Ora estiva di Aqtau"_s,
				"AQTST"_s,
				"Ora di Aqtau"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Ora di Aqtobe"_s,
				"AQTT"_s,
				"Ora estiva di Aqtobe"_s,
				"AQTST"_s,
				"Ora di Aqtobe"_s,
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
				"Ora dell\'Azerbaigian"_s,
				"AZT"_s,
				"Ora estiva dell\'Azerbaigian"_s,
				"AZST"_s,
				"Ora dell\'Azerbaigian"_s,
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
				"Ora del Kirghizistan"_s,
				"KGT"_s,
				"Ora estiva del Kirghizistan"_s,
				"KGST"_s,
				"Ora del Kirghizistan"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Ora del Brunei"_s,
				"BNT"_s,
				"Ora estiva del Brunei"_s,
				"BNST"_s,
				"Ora del Brunei"_s,
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
				"Ora di Choibalsan"_s,
				"CHOT"_s,
				"Ora estiva di Choibalsan"_s,
				"CHOST"_s,
				"Ora di Choibalsan"_s,
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
				"Ora di Timor Leste"_s,
				"TLT"_s,
				"Ora estiva di Timor Leste"_s,
				"TLST"_s,
				"Ora di Timor Est"_s,
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
				"Ora del Tagikistan"_s,
				"TJT"_s,
				"Ora estiva del Tagikistan"_s,
				"TJST"_s,
				"Ora del Tagikistan"_s,
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
				"Ora di Hovd"_s,
				"HOVT"_s,
				"Ora estiva di Hovd"_s,
				"HOVST"_s,
				"Ora di Hovd"_s,
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
				"Ora dell\'Indonesia orientale"_s,
				"WIT"_s,
				"Ora estiva dell\'Indonesia orientale"_s,
				"EIST"_s,
				"Ora dell\'Indonesia orientale"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				"Ora dell\'Afghanistan"_s,
				"AFT"_s,
				"Ora estiva dell\'Afghanistan"_s,
				"AFST"_s,
				"Ora dell\'Afghanistan"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Ora di Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				"Ora estiva di Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Ora di Petropavlovsk-Kamchatski"_s,
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
			"Asia/Kolkata"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			YAKT
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
				"Ora di Magadan"_s,
				"MAGT"_s,
				"Ora estiva di Magadan"_s,
				"MAGST"_s,
				"Ora di Magadan"_s,
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
				"Ora di Oral"_s,
				"ORAT"_s,
				"Ora estiva di Oral"_s,
				"ORAST"_s,
				"Ora di Oral"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Ora di Omsk"_s,
				"OMST"_s,
				"Ora estiva di Omsk"_s,
				"OMSST"_s,
				"Ora di Omsk"_s,
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
				"Ora di Qyzylorda"_s,
				"QYZT"_s,
				"Ora estiva di Qyzylorda"_s,
				"QYZST"_s,
				"Ora di Qyzylorda"_s,
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
				"Ora di Sakhalin"_s,
				"SAKT"_s,
				"Ora estiva di Sakhalin"_s,
				"SAKST"_s,
				"Ora di Sakhalin"_s,
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
				"Ora della Georgia"_s,
				"GET"_s,
				"Ora estiva della Georgia"_s,
				"GEST"_s,
				"Ora della Georgia"_s,
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
				"Ora di Ust-Nera"_s,
				"VLAT"_s,
				"Ora estiva di Ust-Nera"_s,
				"VLAST"_s,
				"Ora di Ust-Nera"_s,
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
				"Ora di Vladivostok"_s,
				"VLAT"_s,
				"Ora estiva di Vladivostok"_s,
				"VLAST"_s,
				"Ora di Vladivostok"_s,
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
				"Ora di Ekaterinburg"_s,
				"YEKT"_s,
				"Ora estiva di Ekaterinburg"_s,
				"YEKST"_s,
				"Ora di Ekaterinburg"_s,
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
				"Ora delle Azzorre"_s,
				"AZOT"_s,
				"Ora estiva delle Azzorre"_s,
				"AZOST"_s,
				"Ora delle Azzorre"_s,
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
				"Ora di Capo Verde"_s,
				"CVT"_s,
				"Ora estiva di Capo Verde"_s,
				"CVST"_s,
				"Ora di Capo Verde"_s,
				"CVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Faroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
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
				"Ora solare della Georgia Australe"_s,
				"GST"_s,
				"Ora legale della Georgia Australe"_s,
				"GDT"_s,
				"Ora Georgia del Sud"_s,
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
				"Ora delle Falkland"_s,
				"FKT"_s,
				"Ora estiva delle Falkland"_s,
				"FKST"_s,
				"Ora delle Falkland"_s,
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
				"Ora standard Australia centro-occidentale"_s,
				"ACWST"_s,
				"Ora estiva Australia centro-occidentale"_s,
				"ACWDT"_s,
				"Ora Australia centro-occidentale"_s,
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
				"Ora di Samara"_s,
				"SAMT"_s,
				"Ora estiva di Samara"_s,
				"SAMST"_s,
				"Ora di Samara"_s,
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
				"Ora del Terr. Britannico dell\'Oceano Indiano"_s,
				"IOT"_s,
				"Ora estiva del Terr. Britannico dell\'Oceano Indiano"_s,
				"IOST"_s,
				"Ora del Territorio Britannico dell\'Oceano Indiano"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				"Ora dell\'Isola Christmas"_s,
				"CXT"_s,
				"Ora estiva dell\'Isola Christmas"_s,
				"CXST"_s,
				"Ora dell\'Isola Christmas"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				"Ora delle Isole Cocos"_s,
				"CCT"_s,
				"Ora estiva delle Isole Cocos"_s,
				"CCST"_s,
				"Ora delle Isole Cocos"_s,
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
				"Ora delle Terre Australi e Antartiche Francesi"_s,
				"TFT"_s,
				"Ora estiva delle Terre Australi Antartiche Francesi"_s,
				"TFST"_s,
				"Ora delle Terre Australi e Antartiche Francesi"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Ora delle Seychelles"_s,
				"SCT"_s,
				"Ora estiva delle Seychelles"_s,
				"SCST"_s,
				"Ora delle Seychelles"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Ora delle Maldive"_s,
				"MVT"_s,
				"Ora estiva delle Maldive"_s,
				"MVST"_s,
				"Ora delle Maldive"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Ora di Mauritius"_s,
				"MUT"_s,
				"Ora estiva di Mauritius"_s,
				"MUST"_s,
				"Ora di Mauritius"_s,
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
				"Ora di Reunion"_s,
				"RET"_s,
				"Ora estiva di Reunion"_s,
				"REST"_s,
				"Ora di Reunion"_s,
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
				"Ora dell\'Europa centrale"_s,
				"MET"_s,
				"Ora estiva dell\'Europa centrale"_s,
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
				"Ora di Vanuatu"_s,
				"VUT"_s,
				"Ora estiva di Vanuatu"_s,
				"VUST"_s,
				"Ora di Vanuatu"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				"Ora dell\'Isola della Fenice"_s,
				"PHOT"_s,
				"Ora estiva dell\'Isola della Fenice"_s,
				"PHOST"_s,
				"Ora delle Isole Phoenix"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Ora di Tokelau"_s,
				"TKT"_s,
				"Ora estiva di Tokelau"_s,
				"TKST"_s,
				"Ora di Tokelau"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Ora di Figi"_s,
				"FJT"_s,
				"Ora estiva di Figi"_s,
				"FJST"_s,
				"Ora di Figi"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Ora di Tuvalu"_s,
				"TVT"_s,
				"Ora estiva di Tuvalu"_s,
				"TVST"_s,
				"Ora di Tuvalu"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				"Ora delle Galapagos"_s,
				"GALT"_s,
				"Ora estiva delle Galapagos"_s,
				"GALST"_s,
				"Ora delle Galapagos"_s,
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
				"Ora delle Line Islands"_s,
				"LINT"_s,
				"Ora estiva delle Line Islands"_s,
				"LINST"_s,
				"Ora delle Line Islands"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Ora di Kosrae"_s,
				"KOST"_s,
				"Ora estiva di Kosrae"_s,
				"KOSST"_s,
				"Ora di Kosrae"_s,
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
				"Ora delle Isole Marchesi"_s,
				"MART"_s,
				"Ora estiva delle Isole Marchesi"_s,
				"MARST"_s,
				"Ora delle Isole Marchesi"_s,
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
				"Ora di Nauru"_s,
				"NRT"_s,
				"Ora estiva di Nauru"_s,
				"NRST"_s,
				"Ora di Nauru"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Ora di Niue"_s,
				"NUT"_s,
				"Ora estiva di Niue"_s,
				"NUST"_s,
				"Ora di Niue"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Ora di Norfolk"_s,
				"NFT"_s,
				"Ora estiva di Norfolk"_s,
				"NFST"_s,
				"Ora di Norfolk"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				"Ora della Nuova Caledonia"_s,
				"NCT"_s,
				"Ora estiva della Nuova Caledonia"_s,
				"NCST"_s,
				"Ora della Nuova Caledonia"_s,
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
				"Ora di Palau"_s,
				"PWT"_s,
				"Ora estiva di Palau"_s,
				"PWST"_s,
				"Ora di Palau"_s,
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
				"Ora di Papua Nuova Guinea"_s,
				"PGT"_s,
				"Ora estiva di Papua Nuova Guinea"_s,
				"PGST"_s,
				"Ora di Papua Nuova Guinea"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				"Ora delle Isole Cook"_s,
				"CKT"_s,
				"Ora estiva delle Isole Cook"_s,
				"CKHST"_s,
				"Ora delle Isole Cook"_s,
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
				"Ora di Tahiti"_s,
				"TAHT"_s,
				"Ora estiva di Tahiti"_s,
				"TAHST"_s,
				"Ora di Tahiti"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				"Ora delle Isole Gilbert"_s,
				"GILT"_s,
				"Ora estiva delle Isole Gilbert"_s,
				"GILST"_s,
				"Ora delle Isole Gilbert"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Ora di Tonga"_s,
				"TOT"_s,
				"Ora estiva di Tonga"_s,
				"TOST"_s,
				"Ora di Tonga"_s,
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
				"Ora di Wake"_s,
				"WAKT"_s,
				"Ora estiva di Wake"_s,
				"WAKST"_s,
				"Ora di Wake"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Ora di Wallis e Futuna"_s,
				"WFT"_s,
				"Ora estiva di Wallis e Futuna"_s,
				"WFST"_s,
				"Ora di Wallis e Futuna"_s,
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

TimeZoneNames_it::TimeZoneNames_it() {
}

$Class* TimeZoneNames_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_it",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_it);
	});
	return class$;
}

$Class* TimeZoneNames_it::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun