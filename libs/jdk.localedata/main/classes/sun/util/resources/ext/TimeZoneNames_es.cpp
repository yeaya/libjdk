#include <sun/util/resources/ext/TimeZoneNames_es.h>
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

void TimeZoneNames_es::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		"Hora de Acre"_s,
		"ACT"_s,
		"Hora de verano de Acre"_s,
		"ACST"_s,
		"Hora de Acre"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"Hora estándar Central (Sur de Australia)"_s,
		"ACST"_s,
		"Hora de verano Central (Sur de Australia)"_s,
		"ACDT"_s,
		"Hora Central (Australia del Sur)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Hora de Argentina"_s,
		"ART"_s,
		"Hora de verano de Argentina"_s,
		"ARST"_s,
		"Hora de Argentina"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"Hora estándar de Alaska"_s,
		"AKST"_s,
		"Hora de verano de Alaska"_s,
		"AKDT"_s,
		"Hora de Alaska"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"Hora estándar de Amazonia"_s,
		"AMT"_s,
		"Hora de verano de Amazonia"_s,
		"AMST"_s,
		u"Hora estándar de Amazonia"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"Hora estándar de Arabia"_s,
		"AST"_s,
		"Hora de verano de Arabia"_s,
		"ADT"_s,
		"Hora de Arabia"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		"Hora de Armenia"_s,
		"AMT"_s,
		"Hora de verano de Armenia"_s,
		"AMST"_s,
		"Hora de Armenia"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"Hora estándar Atlántico"_s,
		"AST"_s,
		u"Hora de verano Atlántico"_s,
		"ADT"_s,
		u"Hora del Atlántico"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Hora de Bangladesh"_s,
		"BDT"_s,
		"Hora de verano de Bangladesh"_s,
		"BDST"_s,
		"Hora de Bangladesh"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"Hora estándar del Este (Queensland)"_s,
		"AEST"_s,
		u"Hora estándar de verano del Este (Queensland)"_s,
		"AEDT"_s,
		"Hora Oriental (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"Hora estándar Central (Sur de Australia/Nueva Gales del Sur)"_s,
		"ACST"_s,
		"Hora de verano Central (Sur de Australia/Nueva Gales del Sur)"_s,
		"ACDT"_s,
		"Hora Central (Australia del Sur/Nueva Gales del Sur)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		"Hora de Brasil"_s,
		"BRT"_s,
		"Hora de verano de Brasil"_s,
		"BRST"_s,
		"Hora de Brasil"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"Hora de Bután"_s,
		"BTT"_s,
		u"Hora de verano de Bután"_s,
		"BTST"_s,
		u"Hora de Bután"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"Hora de África Central"_s,
		"CAT"_s,
		u"Hora de verano de África Central"_s,
		"CAST"_s,
		u"Hora de África Central"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		"Hora de Europa Central"_s,
		"CET"_s,
		"Hora de verano de Europa Central"_s,
		"CEST"_s,
		"Hora de Europa Central"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"Hora estándar de Chatham"_s,
		"CHAST"_s,
		"Hora de verano de Chatham"_s,
		"CHADT"_s,
		"Hora de Chatam"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Hora de Chuuk"_s,
		"CHUT"_s,
		"Hora de verano de Chuuk"_s,
		"CHUST"_s,
		"Hora de Chuuk"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		"Hora de Indonesia Central"_s,
		"WITA"_s,
		"Hora de verano de Indonesia Central"_s,
		"CIST"_s,
		"Hora de Indonesia Central"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Hora de Chile"_s,
		"CLT"_s,
		"Hora de verano de Chile"_s,
		"CLST"_s,
		"Hora de Chile"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"Hora estándar Central"_s,
		"CST"_s,
		"Hora de verano Central"_s,
		"CDT"_s,
		"Hora Central"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"Hora estándar de China"_s,
		"CST"_s,
		"Hora de verano de China"_s,
		"CDT"_s,
		"Hora de China"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"Hora estándar de Cuba"_s,
		"CST"_s,
		"Hora de verano de Cuba"_s,
		"CDT"_s,
		"Hora de Cuba"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"Hora estándar Central (territorio del Norte)"_s,
		"ACST"_s,
		"Hora de verano Central (territorio del Norte)"_s,
		"ACDT"_s,
		"Hora Central (Territorio Septentrional)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		"Hora del Meridiano de Greenwich"_s,
		"GMT"_s,
		"Hora de verano de Irlanda"_s,
		"IST"_s,
		"Hora de Irlanda"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"Hora de África Oriental"_s,
		"EAT"_s,
		u"Hora de verano de África Oriental"_s,
		"EAST"_s,
		u"Hora de África Oriental"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		"Hora de la Isla de Pascua"_s,
		"EAST"_s,
		"Hora de verano de la Isla de Pascua"_s,
		"EASST"_s,
		"Hora de la Isla de Pascua"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		"Hora de Europa Oriental"_s,
		"EET"_s,
		"Hora de verano de Europa Oriental"_s,
		"EEST"_s,
		"Hora de Europa Oriental"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		"Hora de Groenlandia Oriental"_s,
		"EGT"_s,
		"Hora de verano de Groenlandia Oriental"_s,
		"EGST"_s,
		"Hora de Groenlandia Oriental"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"Hora estándar Oriental"_s,
		"EST"_s,
		"Hora de verano Oriental"_s,
		"EDT"_s,
		"Hora Oriental"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"Hora estándar Oriental (Nueva Gales del Sur)"_s,
		"AEST"_s,
		"Hora de verano Oriental (Nueva Gales del Sur)"_s,
		"AEDT"_s,
		"Hora Oriental (Nueva Gales del Sur)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"Hora de Europa más Oriental"_s,
		"FET"_s,
		u"Hora de verano de Europa más Oriental"_s,
		"FEST"_s,
		u"Hora de Europa más Oriental"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Hora central de Ghana"_s,
		"GMT"_s,
		"Hora de verano de Ghana"_s,
		"GHST"_s,
		"Hora central de Ghana"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Hora de Gambier"_s,
		"GAMT"_s,
		"Hora de verano de Gambier"_s,
		"GAMST"_s,
		"Hora de Gambier"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Hora del Meridiano de Greenwich"_s,
		"GMT"_s,
		"Hora del Meridiano de Greenwich"_s,
		"GMT"_s,
		"Hora del Meridiano de Greenwich"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		"Hora del Meridiano de Greenwich"_s,
		"GMT"_s,
		u"Hora de verano de Gran Bretaña"_s,
		"BST"_s,
		u"Hora de Gran Bretaña"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"Hora estándar del Golfo"_s,
		"GST"_s,
		"Hora de verano del Golfo"_s,
		"GDT"_s,
		"Hora del Golfo"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Hora de Hong Kong"_s,
		"HKT"_s,
		"Hora de verano de Hong Kong"_s,
		"HKST"_s,
		"Hora de Hong Kong"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"Hora estándar de Hawaii"_s,
		"HST"_s,
		"Hora de verano de Hawaii"_s,
		"HDT"_s,
		"Hora de Hawaii"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Hora de Indochina"_s,
		"ICT"_s,
		"Hora de verano de Indochina"_s,
		"ICST"_s,
		"Hora de Indochina"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Hora de Irkutsk"_s,
		"IRKT"_s,
		"Hora de verano de Irkutsk"_s,
		"IRKST"_s,
		"Hora de Irkutsk"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"Hora estándar de Irán"_s,
		"IRST"_s,
		u"Hora de verano de Irán"_s,
		"IRDT"_s,
		u"Hora de Irán"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"Hora estándar de Israel"_s,
		"IST"_s,
		"Hora de verano de Israel"_s,
		"IDT"_s,
		"Hora de Israel"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"Hora estándar de India"_s,
		"IST"_s,
		"Hora de verano de India"_s,
		"IDT"_s,
		"Hora de India"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"Hora estándar de Japón"_s,
		"JST"_s,
		u"Hora de verano de Japón"_s,
		"JDT"_s,
		u"Hora de Japón"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		"Hora de Krasnoyarsk"_s,
		"KRAT"_s,
		"Hora de verano de Krasnoyarsk"_s,
		"KRAST"_s,
		"Hora de Krasnoyarsk"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"Hora estándar de Corea"_s,
		"KST"_s,
		"Hora de verano de Corea"_s,
		"KDT"_s,
		"Hora de Corea"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"Hora estándar de Lord Howe"_s,
		"LHST"_s,
		"Hora de verano de Lord Howe"_s,
		"LHDT"_s,
		"Hora de Lord Howe"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		"Hora de las Islas Marshall"_s,
		"MHT"_s,
		"Hora de verano de las Islas Marshall"_s,
		"MHST"_s,
		"Hora de Islas Marshall"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Hora de Myanmar"_s,
		"MMT"_s,
		"Hora de verano de Myanmar"_s,
		"MMST"_s,
		"Hora de Myanmar"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"Hora estándar de Moscú"_s,
		"MSK"_s,
		u"Hora de verano de Moscú"_s,
		"MSD"_s,
		u"Hora de Moscú"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"Hora estándar de las Rocosas"_s,
		"MST"_s,
		"Hora de verano de las Rocosas"_s,
		"MDT"_s,
		u"Hora de las Montañas Rocosas"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Hora de Malasia"_s,
		"MYT"_s,
		"Hora de verano de Malasia"_s,
		"MYST"_s,
		"Hora de Malasia"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Hora de Fernando de Noronha"_s,
		"FNT"_s,
		"Hora de verano de Fernando de Noronha"_s,
		"FNST"_s,
		"Hora de Fernando de Noronha"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Hora de Novosibirsk"_s,
		"NOVT"_s,
		"Hora de verano de Novosibirsk"_s,
		"NOVST"_s,
		"Hora de Novosibirsk"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		"Hora de Nepal"_s,
		"NPT"_s,
		"Hora de verano de Nepal"_s,
		"NPST"_s,
		"Hora de Nepal"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"Hora estándar de Terranova"_s,
		"NST"_s,
		"Hora de verano de Terranova"_s,
		"NDT"_s,
		"Hora de Terranova"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"Hora estándar de Nueva Zelanda"_s,
		"NZST"_s,
		"Hora de verano de Nueva Zelanda"_s,
		"NZDT"_s,
		"Hora de Nueva Zelanda"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"Hora estándar de Pitcairn"_s,
		"PST"_s,
		"Hora de verano de Pitcairn"_s,
		"PDT"_s,
		"Hora de Islas Pitcairn"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"Hora de Pakistán"_s,
		"PKT"_s,
		u"Hora de verano de Pakistán"_s,
		"PKST"_s,
		u"Hora de Pakistán"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Hora de Pohnpei"_s,
		"PONT"_s,
		"Hora de verano de Pohnpei"_s,
		"PONST"_s,
		"Hora de Pohnpei"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"Hora estándar del Pacífico"_s,
		"PST"_s,
		u"Hora de verano del Pacífico"_s,
		"PDT"_s,
		u"Hora del Pacífico"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"Hora estándar de Sudáfrica"_s,
		"SAST"_s,
		u"Hora de verano de Sudáfrica"_s,
		"SAST"_s,
		u"Hora de Sudáfrica"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		"Hora de las Islas Solomon"_s,
		"SBT"_s,
		"Hora de verano de las Islas Solomon"_s,
		"SBST"_s,
		"Hora de las Islas Solomon"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Hora de Singapur"_s,
		"SGT"_s,
		"Hora de verano de  Singapur"_s,
		"SGST"_s,
		"Hora de Singapur"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"Hora estándar del Este (Tasmania)"_s,
		"AEST"_s,
		"Hora de verano del Este (Tasmania)"_s,
		"AEDT"_s,
		"Hora Oriental (Tasmania)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"Hora de Turkmenistán"_s,
		"TMT"_s,
		u"Hora de verano de Turkmenistán"_s,
		"TMST"_s,
		u"Hora de Turkmenistán"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Hora de Ulan Bator"_s,
		"ULAT"_s,
		"Hora de verano de Ulan Bator"_s,
		"ULAST"_s,
		"Hora de Ulan Bator"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"Hora de África Occidental"_s,
		"WAT"_s,
		u"Hora de verano de África Occidental"_s,
		"WAST"_s,
		u"Hora de África Occidental"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		"Hora de Europa Occidental"_s,
		"WET"_s,
		"Hora de verano de Europa Occidental"_s,
		"WEST"_s,
		"Hora de Europa Occidental"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		"Hora de Groenlandia Occidental"_s,
		"WGT"_s,
		"Hora de verano de Groenlandia Occidental"_s,
		"WGST"_s,
		"Hora de Groenlandia Occidental"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		"Hora de Indonesia Occidental"_s,
		"WIB"_s,
		"Indonesia Hora de verano de Indonesia Occidental"_s,
		"WIST"_s,
		"Hora de Indonesia Occidental"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"Hora estándar Occidental (Australia)"_s,
		"AWST"_s,
		"Hora de verano Occidental (Australia)"_s,
		"AWDT"_s,
		"Hora Occidental (Australia)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"Hora estándar de Samoa"_s,
		"SST"_s,
		"Hora de verano de Samoa"_s,
		"SDT"_s,
		"Hora de Samoa"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		"Hora de Samoa Occidental"_s,
		"WSST"_s,
		"Hora de verano de Samoa Occidental"_s,
		"WSDT"_s,
		"Hora de Samoa Occidental"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"Hora estándar de Chamorro"_s,
		"ChST"_s,
		"Hora de verano de Chamorro"_s,
		"ChDT"_s,
		"Hora de Chamorro"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"Hora estándar del Este (Victoria)"_s,
		"AEST"_s,
		"Hora de verano del Este (Victoria)"_s,
		"AEDT"_s,
		"Hora Oriental (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Hora Universal Coordinada"_s,
		"UTC"_s,
		"Hora Universal Coordinada"_s,
		"UTC"_s,
		"Hora Universal Coordinada"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"Hora de Uzbekistán"_s,
		"UZT"_s,
		u"Hora de verano de Uzbekistán"_s,
		"UZST"_s,
		u"Hora de Uzbekistán"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"Hora estándar de China"_s,
		"XJT"_s,
		"Hora de verano de China"_s,
		"XJDT"_s,
		"Hora de China"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Hora de Yakutsk"_s,
		"YAKT"_s,
		"Hora de verano de Yakutsk"_s,
		"YAKST"_s,
		"Hora de Yakutsk"_s,
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
				"Hora de Paraguay"_s,
				"PYT"_s,
				"Hora de verano de Paraguay"_s,
				"PYST"_s,
				"Hora de Paraguay"_s,
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
				"Hora de Colombia"_s,
				"COT"_s,
				"Hora de verano de Colombia"_s,
				"COST"_s,
				"Hora de Colombia"_s,
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
				"Hora de Venezuela"_s,
				"VET"_s,
				"Hora de verano de Venezuela"_s,
				"VEST"_s,
				"Hora de Venezuela"_s,
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
				"Hora de la Guayana Francesa"_s,
				"GFT"_s,
				"Hora de verano de la Guayana Francesa"_s,
				"GFST"_s,
				"Hora de la Guayana Francesa"_s,
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
				"Hora de Ecuador"_s,
				"ECT"_s,
				"Hora de verano de Ecuador"_s,
				"ECST"_s,
				"Hora de Ecuador"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Hora de Guyana"_s,
				"GYT"_s,
				"Hora de verano de Guyana"_s,
				"GYST"_s,
				"Hora de Guyana"_s,
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
				"Hora de Bolivia"_s,
				"BOT"_s,
				"Hora de verano de Bolivia"_s,
				"BOST"_s,
				"Hora de Bolivia"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"Hora de Perú"_s,
				"PET"_s,
				u"Hora de verano de Perú"_s,
				"PEST"_s,
				u"Hora de Perú"_s,
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
				u"Hora estándar de Pierre & Miquelon"_s,
				"PMST"_s,
				"Hora de verano de Pierre & Miquelon"_s,
				"PMDT"_s,
				u"Hora de San Pedro y Miquelón"_s,
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
				"Hora de Uruguay"_s,
				"UYT"_s,
				"Hora de verano de Uruguay"_s,
				"UYST"_s,
				"Hora de Uruguay"_s,
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
				"Hora de Surinam"_s,
				"SRT"_s,
				"Hora de verano de Surinam"_s,
				"SRST"_s,
				"Hora de Surinam"_s,
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
				"Hora de Davis"_s,
				"DAVT"_s,
				"Hora de verano de Davis"_s,
				"DAVST"_s,
				"Hora de Davis"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Hora de Dumont-d\'Urville"_s,
				"DDUT"_s,
				"Hora de verano de Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Hora de Dumont-d\'Urville"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				"Hora de Isla Macquarie"_s,
				"MIST"_s,
				"Hora de verano de Isla Macquarie"_s,
				"MIST"_s,
				"Hora de Isla Macquarie"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Hora de Mawson"_s,
				"MAWT"_s,
				"Hora de verano de Mawson"_s,
				"MAWST"_s,
				"Hora de Mawson"_s,
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
				"Hora de Rothera"_s,
				"ROTT"_s,
				"Hora de verano de Rothera"_s,
				"ROTST"_s,
				"Hora de Rothera"_s,
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
				"Hora de Syowa"_s,
				"SYOT"_s,
				"Hora de verano de Syowa"_s,
				"SYOST"_s,
				"Hora de Syowa"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				"Hora Universal Coordinada"_s,
				"UTC"_s,
				"Hora de verano de Europa Central"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Hora de Vostok"_s,
				"VOST"_s,
				"Hora de verano de Vostok"_s,
				"VOSST"_s,
				"Hora de Vostok"_s,
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
				"Hora de Alma-Ata"_s,
				"ALMT"_s,
				"Hora de verano de Alma-Ata"_s,
				"ALMST"_s,
				"Hora de Alma-Ata"_s,
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
				"Hora de Anadyr"_s,
				"ANAT"_s,
				"Hora de verano de Anadyr"_s,
				"ANAST"_s,
				"Hora de Anadyr"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Hora de Aqtau"_s,
				"AQTT"_s,
				"Hora de verano de Aqtau"_s,
				"AQTST"_s,
				"Hora de Aqtau"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Hora de Aqtobe"_s,
				"AQTT"_s,
				"Hora de verano de Aqtobe"_s,
				"AQTST"_s,
				"Hora de Aqtobe"_s,
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
				u"Hora de Azerbaiyán"_s,
				"AZT"_s,
				u"Hora de verano de Azerbaiyán"_s,
				"AZST"_s,
				u"Hora de Azerbaiyán"_s,
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
				u"Hora de Kirguizistán"_s,
				"KGT"_s,
				u"Hora de verano de Kirguizistán"_s,
				"KGST"_s,
				u"Hora de Kirguizistán"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Hora de Brunei"_s,
				"BNT"_s,
				"Hora de verano de Brunei"_s,
				"BNST"_s,
				"Hora de Brunei"_s,
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
				"Hora de Choibalsan"_s,
				"CHOT"_s,
				"Hora de verano de Choibalsan"_s,
				"CHOST"_s,
				"Hora de Choibalsan"_s,
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
				"Hora de Timor Leste"_s,
				"TLT"_s,
				"Hora de verano de Timor Leste"_s,
				"TLST"_s,
				"Hora de Timor Leste"_s,
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
				u"Hora de Tajikistán"_s,
				"TJT"_s,
				u"Hora de verano de Tajikistán"_s,
				"TJST"_s,
				u"Hora de Tajikistán"_s,
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
				"Hora de Hovd"_s,
				"HOVT"_s,
				"Hora de verano de Hovd"_s,
				"HOVST"_s,
				"Hora de Hovd"_s,
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
				"Hora de Indonesia Oriental"_s,
				"WIT"_s,
				"Hora de verano de Indonesia Oriental"_s,
				"EIST"_s,
				"Hora de Indonesia Oriental"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				u"Hora de Afganistán"_s,
				"AFT"_s,
				u"Hora de verano de Afganistán"_s,
				"AFST"_s,
				u"Hora de Afganistán"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Hora de Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				"Hora de verano de Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Hora de Petropavlovsk-Kamchatski"_s,
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
				u"Hora de Magadán"_s,
				"MAGT"_s,
				u"Hora de verano de Magadán"_s,
				"MAGST"_s,
				u"Hora de Magadán"_s,
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
				"Hora de Uralsk"_s,
				"ORAT"_s,
				"Hora de verano de Uralsk"_s,
				"ORAST"_s,
				"Hora de Uralsk"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Hora de Omsk"_s,
				"OMST"_s,
				"Hora de verano de Omsk"_s,
				"OMSST"_s,
				"Hora de Omsk"_s,
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
				"Hora de Qyzylorda"_s,
				"QYZT"_s,
				"Hora de verano de Qyzylorda"_s,
				"QYZST"_s,
				"Hora de Qyzylorda"_s,
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
				"Hora de Sajalin"_s,
				"SAKT"_s,
				"Hora de verano de Sajalin"_s,
				"SAKST"_s,
				"Hora de Sajalin"_s,
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
				"Hora de Georgia"_s,
				"GET"_s,
				"Hora de verano de Georgia"_s,
				"GEST"_s,
				"Hora de Georgia"_s,
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
				"Hora de Ust-Nera"_s,
				"VLAT"_s,
				"Hora de verano de Ust-Nera"_s,
				"VLAST"_s,
				"Hora de Ust-Nera"_s,
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
				"Hora de Vladivostok"_s,
				"VLAT"_s,
				"Hora de verano de Vladivostok"_s,
				"VLAST"_s,
				"Hora de Vladivostok"_s,
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
				"Hora de Ekaterinburgo"_s,
				"YEKT"_s,
				"Hora de verano de Ekaterinburgo"_s,
				"YEKST"_s,
				"Hora de Ekaterinburgo"_s,
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
				"Hora de Azores"_s,
				"AZOT"_s,
				"Hora de verano de Azores"_s,
				"AZOST"_s,
				"Hora de Azores"_s,
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
				"Hora de Cabo Verde"_s,
				"CVT"_s,
				"Hora de verano de Cabo Verde"_s,
				"CVST"_s,
				"Hora de Cabo Verde"_s,
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
				u"Hora estándar de Georgia del Sur"_s,
				"GST"_s,
				"Hora de verano de Georgia del Sur"_s,
				"GDT"_s,
				"Hora de Georgia del Sur"_s,
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
				"Hora de las islas Malvinas"_s,
				"FKT"_s,
				"Hora de verano de las islas Malvinas"_s,
				"FKST"_s,
				"Hora de las islas Malvinas"_s,
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
				u"Hora estándar de Australia Central y Occidental"_s,
				"ACWST"_s,
				u"Hora estándar de verano de Australia Central y Occidental"_s,
				"ACWDT"_s,
				"Hora de Australia Central y Occidental"_s,
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
				"Hora de Samara"_s,
				"SAMT"_s,
				"Hora de verano de Samara"_s,
				"SAMST"_s,
				"Hora de Samara"_s,
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
				u"Hora del Territorio del Océano Índico"_s,
				"IOT"_s,
				u"Hora de verano del Territorio del Océano Índico"_s,
				"IOST"_s,
				u"Hora del Territorio del Océano Índico"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				"Hora de la isla de Christmas"_s,
				"CXT"_s,
				"Hora de verano de la isla de Christmas"_s,
				"CXST"_s,
				"Hora de la isla de Christmas"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				"Hora de las islas Cocos"_s,
				"CCT"_s,
				"Hora de verano de las islas Cocos"_s,
				"CCST"_s,
				"Hora de las islas Cocos"_s,
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
				u"Hora de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFT"_s,
				u"Hora de verano de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFST"_s,
				u"Hora de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Hora de Seychelles"_s,
				"SCT"_s,
				"Hora de verano de Seychelles"_s,
				"SCST"_s,
				"Hora de Seychelles"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Hora de Maldivas"_s,
				"MVT"_s,
				"Hora de verano de Maldivas"_s,
				"MVST"_s,
				"Hora de Maldivas"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Hora de Mauricio"_s,
				"MUT"_s,
				"Hora de verano de Mauricio"_s,
				"MUST"_s,
				"Hora de Mauricio"_s,
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
				u"Hora de Reunión"_s,
				"RET"_s,
				u"Hora de verano de Reunión"_s,
				"REST"_s,
				u"Hora de Reunión"_s,
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
				"Hora de Europa Central"_s,
				"MET"_s,
				"Hora de verano de Europa Central"_s,
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
				"Hora de Vanuatu"_s,
				"VUT"_s,
				"Hora de verano de Vanuatu"_s,
				"VUST"_s,
				"Hora de Vanuatu"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				"Hora de la isla Phoenix"_s,
				"PHOT"_s,
				"Hora de verano de la isla Phoenix"_s,
				"PHOST"_s,
				"Hora de la isla Phoenix"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Hora de Tokelau"_s,
				"TKT"_s,
				"Hora de verano de Tokelau"_s,
				"TKST"_s,
				"Hora de Tokelau"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Hora de Fiji"_s,
				"FJT"_s,
				"Hora de verano de Fiji"_s,
				"FJST"_s,
				"Hora de Fiji"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Hora de Tuvalu"_s,
				"TVT"_s,
				"Hora de verano de Tuvalu"_s,
				"TVST"_s,
				"Hora de Tuvalu"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				u"Hora de Galápagos"_s,
				"GALT"_s,
				u"Hora de verano de Galápagos"_s,
				"GALST"_s,
				u"Hora de Galápagos"_s,
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
				"Hora de las islas Line"_s,
				"LINT"_s,
				"Hora de verano de las islas Line"_s,
				"LINST"_s,
				"Hora de las islas Line"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Hora de Kosrae"_s,
				"KOST"_s,
				"Hora de verano de Kosrae"_s,
				"KOSST"_s,
				"Hora de Kosrae"_s,
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
				"Hora de Marquesas"_s,
				"MART"_s,
				"Hora de verano de Marquesas"_s,
				"MARST"_s,
				"Hora de Marquesas"_s,
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
				"Hora de Nauru"_s,
				"NRT"_s,
				"Hora de verano de Nauru"_s,
				"NRST"_s,
				"Hora de Nauru"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Hora de Niue"_s,
				"NUT"_s,
				"Hora de verano de Niue"_s,
				"NUST"_s,
				"Hora de Niue"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Hora de Norfolk"_s,
				"NFT"_s,
				"Hora de verano de Norfolk"_s,
				"NFST"_s,
				"Hora de Norfolk"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				"Hora de Nueva Caledonia"_s,
				"NCT"_s,
				"Hora de verano de Nueva Caledonia"_s,
				"NCST"_s,
				"Hora de Nueva Caledonia"_s,
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
				"Hora de Palau"_s,
				"PWT"_s,
				"Hora de verano de Palau"_s,
				"PWST"_s,
				"Hora de Palau"_s,
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
				u"Hora de Papúa-Nueva Guinea"_s,
				"PGT"_s,
				u"Hora de verano de Papúa-Nueva Guinea"_s,
				"PGST"_s,
				u"Hora de Papúa-Nueva Guinea"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				"Hora de las islas Cook"_s,
				"CKT"_s,
				"Hora de verano de las islas Cook"_s,
				"CKHST"_s,
				"Hora de las islas Cook"_s,
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
				u"Hora de Tahití"_s,
				"TAHT"_s,
				u"Hora de verano de Tahití"_s,
				"TAHST"_s,
				u"Hora de Tahití"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				"Hora de las islas Gilbert"_s,
				"GILT"_s,
				"Hora de verano de las islas Gilbert"_s,
				"GILST"_s,
				"Hora de las islas Gilbert"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Hora de Tonga"_s,
				"TOT"_s,
				"Hora de verano de Tonga"_s,
				"TOST"_s,
				"Hora de Tonga"_s,
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
				"Hora de Wake"_s,
				"WAKT"_s,
				"Hora de verano de Wake"_s,
				"WAKST"_s,
				"Hora de Wake"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Hora de Wallis y Futuna"_s,
				"WFT"_s,
				"Hora de verano de Wallis y Futuna"_s,
				"WFST"_s,
				"Hora de Wallis y Futuna"_s,
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

TimeZoneNames_es::TimeZoneNames_es() {
}

$Class* TimeZoneNames_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_es",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_es);
	});
	return class$;
}

$Class* TimeZoneNames_es::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun