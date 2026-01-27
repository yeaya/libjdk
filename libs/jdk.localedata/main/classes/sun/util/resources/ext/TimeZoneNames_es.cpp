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

$MethodInfo _TimeZoneNames_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_es",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_MethodInfo_
};

$Object* allocate$TimeZoneNames_es($Class* clazz) {
	return $of($alloc(TimeZoneNames_es));
}

void TimeZoneNames_es::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es::getContents() {
	$useLocalCurrentObjectStackCache();
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
				"Hora de Paraguay"_s,
				"PYT"_s,
				"Hora de verano de Paraguay"_s,
				"PYST"_s,
				"Hora de Paraguay"_s,
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
				"Hora de Colombia"_s,
				"COT"_s,
				"Hora de verano de Colombia"_s,
				"COST"_s,
				"Hora de Colombia"_s,
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
				"Hora de Venezuela"_s,
				"VET"_s,
				"Hora de verano de Venezuela"_s,
				"VEST"_s,
				"Hora de Venezuela"_s,
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
				"Hora de la Guayana Francesa"_s,
				"GFT"_s,
				"Hora de verano de la Guayana Francesa"_s,
				"GFST"_s,
				"Hora de la Guayana Francesa"_s,
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
				"Hora de Ecuador"_s,
				"ECT"_s,
				"Hora de verano de Ecuador"_s,
				"ECST"_s,
				"Hora de Ecuador"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				"Hora de Guyana"_s,
				"GYT"_s,
				"Hora de verano de Guyana"_s,
				"GYST"_s,
				"Hora de Guyana"_s,
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
				"Hora de Bolivia"_s,
				"BOT"_s,
				"Hora de verano de Bolivia"_s,
				"BOST"_s,
				"Hora de Bolivia"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"Hora de Perú"_s,
				"PET"_s,
				u"Hora de verano de Perú"_s,
				"PEST"_s,
				u"Hora de Perú"_s,
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
				u"Hora estándar de Pierre & Miquelon"_s,
				"PMST"_s,
				"Hora de verano de Pierre & Miquelon"_s,
				"PMDT"_s,
				u"Hora de San Pedro y Miquelón"_s,
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
				"Hora de Uruguay"_s,
				"UYT"_s,
				"Hora de verano de Uruguay"_s,
				"UYST"_s,
				"Hora de Uruguay"_s,
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
				"Hora de Surinam"_s,
				"SRT"_s,
				"Hora de verano de Surinam"_s,
				"SRST"_s,
				"Hora de Surinam"_s,
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
				"Hora de Davis"_s,
				"DAVT"_s,
				"Hora de verano de Davis"_s,
				"DAVST"_s,
				"Hora de Davis"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				"Hora de Dumont-d\'Urville"_s,
				"DDUT"_s,
				"Hora de verano de Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Hora de Dumont-d\'Urville"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				"Hora de Isla Macquarie"_s,
				"MIST"_s,
				"Hora de verano de Isla Macquarie"_s,
				"MIST"_s,
				"Hora de Isla Macquarie"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				"Hora de Mawson"_s,
				"MAWT"_s,
				"Hora de verano de Mawson"_s,
				"MAWST"_s,
				"Hora de Mawson"_s,
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
				"Hora de Rothera"_s,
				"ROTT"_s,
				"Hora de verano de Rothera"_s,
				"ROTST"_s,
				"Hora de Rothera"_s,
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
				"Hora de Syowa"_s,
				"SYOT"_s,
				"Hora de verano de Syowa"_s,
				"SYOST"_s,
				"Hora de Syowa"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				"Hora Universal Coordinada"_s,
				"UTC"_s,
				"Hora de verano de Europa Central"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				"Hora de Vostok"_s,
				"VOST"_s,
				"Hora de verano de Vostok"_s,
				"VOSST"_s,
				"Hora de Vostok"_s,
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
				"Hora de Alma-Ata"_s,
				"ALMT"_s,
				"Hora de verano de Alma-Ata"_s,
				"ALMST"_s,
				"Hora de Alma-Ata"_s,
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
				"Hora de Anadyr"_s,
				"ANAT"_s,
				"Hora de verano de Anadyr"_s,
				"ANAST"_s,
				"Hora de Anadyr"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				"Hora de Aqtau"_s,
				"AQTT"_s,
				"Hora de verano de Aqtau"_s,
				"AQTST"_s,
				"Hora de Aqtau"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				"Hora de Aqtobe"_s,
				"AQTT"_s,
				"Hora de verano de Aqtobe"_s,
				"AQTST"_s,
				"Hora de Aqtobe"_s,
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
				u"Hora de Azerbaiyán"_s,
				"AZT"_s,
				u"Hora de verano de Azerbaiyán"_s,
				"AZST"_s,
				u"Hora de Azerbaiyán"_s,
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
				u"Hora de Kirguizistán"_s,
				"KGT"_s,
				u"Hora de verano de Kirguizistán"_s,
				"KGST"_s,
				u"Hora de Kirguizistán"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				"Hora de Brunei"_s,
				"BNT"_s,
				"Hora de verano de Brunei"_s,
				"BNST"_s,
				"Hora de Brunei"_s,
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
				"Hora de Choibalsan"_s,
				"CHOT"_s,
				"Hora de verano de Choibalsan"_s,
				"CHOST"_s,
				"Hora de Choibalsan"_s,
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
				"Hora de Timor Leste"_s,
				"TLT"_s,
				"Hora de verano de Timor Leste"_s,
				"TLST"_s,
				"Hora de Timor Leste"_s,
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
				u"Hora de Tajikistán"_s,
				"TJT"_s,
				u"Hora de verano de Tajikistán"_s,
				"TJST"_s,
				u"Hora de Tajikistán"_s,
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
				"Hora de Hovd"_s,
				"HOVT"_s,
				"Hora de verano de Hovd"_s,
				"HOVST"_s,
				"Hora de Hovd"_s,
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
				"Hora de Indonesia Oriental"_s,
				"WIT"_s,
				"Hora de verano de Indonesia Oriental"_s,
				"EIST"_s,
				"Hora de Indonesia Oriental"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				u"Hora de Afganistán"_s,
				"AFT"_s,
				u"Hora de verano de Afganistán"_s,
				"AFST"_s,
				u"Hora de Afganistán"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				"Hora de Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				"Hora de verano de Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Hora de Petropavlovsk-Kamchatski"_s,
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
				u"Hora de Magadán"_s,
				"MAGT"_s,
				u"Hora de verano de Magadán"_s,
				"MAGST"_s,
				u"Hora de Magadán"_s,
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
				"Hora de Uralsk"_s,
				"ORAT"_s,
				"Hora de verano de Uralsk"_s,
				"ORAST"_s,
				"Hora de Uralsk"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				"Hora de Omsk"_s,
				"OMST"_s,
				"Hora de verano de Omsk"_s,
				"OMSST"_s,
				"Hora de Omsk"_s,
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
				"Hora de Qyzylorda"_s,
				"QYZT"_s,
				"Hora de verano de Qyzylorda"_s,
				"QYZST"_s,
				"Hora de Qyzylorda"_s,
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
				"Hora de Sajalin"_s,
				"SAKT"_s,
				"Hora de verano de Sajalin"_s,
				"SAKST"_s,
				"Hora de Sajalin"_s,
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
				"Hora de Georgia"_s,
				"GET"_s,
				"Hora de verano de Georgia"_s,
				"GEST"_s,
				"Hora de Georgia"_s,
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
				"Hora de Ust-Nera"_s,
				"VLAT"_s,
				"Hora de verano de Ust-Nera"_s,
				"VLAST"_s,
				"Hora de Ust-Nera"_s,
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
				"Hora de Vladivostok"_s,
				"VLAT"_s,
				"Hora de verano de Vladivostok"_s,
				"VLAST"_s,
				"Hora de Vladivostok"_s,
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
				"Hora de Ekaterinburgo"_s,
				"YEKT"_s,
				"Hora de verano de Ekaterinburgo"_s,
				"YEKST"_s,
				"Hora de Ekaterinburgo"_s,
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
				"Hora de Azores"_s,
				"AZOT"_s,
				"Hora de verano de Azores"_s,
				"AZOST"_s,
				"Hora de Azores"_s,
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
				"Hora de Cabo Verde"_s,
				"CVT"_s,
				"Hora de verano de Cabo Verde"_s,
				"CVST"_s,
				"Hora de Cabo Verde"_s,
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
				u"Hora estándar de Georgia del Sur"_s,
				"GST"_s,
				"Hora de verano de Georgia del Sur"_s,
				"GDT"_s,
				"Hora de Georgia del Sur"_s,
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
				"Hora de las islas Malvinas"_s,
				"FKT"_s,
				"Hora de verano de las islas Malvinas"_s,
				"FKST"_s,
				"Hora de las islas Malvinas"_s,
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
				u"Hora estándar de Australia Central y Occidental"_s,
				"ACWST"_s,
				u"Hora estándar de verano de Australia Central y Occidental"_s,
				"ACWDT"_s,
				"Hora de Australia Central y Occidental"_s,
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
				"Hora de Samara"_s,
				"SAMT"_s,
				"Hora de verano de Samara"_s,
				"SAMST"_s,
				"Hora de Samara"_s,
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
				u"Hora del Territorio del Océano Índico"_s,
				"IOT"_s,
				u"Hora de verano del Territorio del Océano Índico"_s,
				"IOST"_s,
				u"Hora del Territorio del Océano Índico"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				"Hora de la isla de Christmas"_s,
				"CXT"_s,
				"Hora de verano de la isla de Christmas"_s,
				"CXST"_s,
				"Hora de la isla de Christmas"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				"Hora de las islas Cocos"_s,
				"CCT"_s,
				"Hora de verano de las islas Cocos"_s,
				"CCST"_s,
				"Hora de las islas Cocos"_s,
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
				u"Hora de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFT"_s,
				u"Hora de verano de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFST"_s,
				u"Hora de los Territorios Franceses del Sur y de la Antártida"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				"Hora de Seychelles"_s,
				"SCT"_s,
				"Hora de verano de Seychelles"_s,
				"SCST"_s,
				"Hora de Seychelles"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				"Hora de Maldivas"_s,
				"MVT"_s,
				"Hora de verano de Maldivas"_s,
				"MVST"_s,
				"Hora de Maldivas"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				"Hora de Mauricio"_s,
				"MUT"_s,
				"Hora de verano de Mauricio"_s,
				"MUST"_s,
				"Hora de Mauricio"_s,
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
				u"Hora de Reunión"_s,
				"RET"_s,
				u"Hora de verano de Reunión"_s,
				"REST"_s,
				u"Hora de Reunión"_s,
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
				"Hora de Europa Central"_s,
				"MET"_s,
				"Hora de verano de Europa Central"_s,
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
				"Hora de Vanuatu"_s,
				"VUT"_s,
				"Hora de verano de Vanuatu"_s,
				"VUST"_s,
				"Hora de Vanuatu"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				"Hora de la isla Phoenix"_s,
				"PHOT"_s,
				"Hora de verano de la isla Phoenix"_s,
				"PHOST"_s,
				"Hora de la isla Phoenix"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				"Hora de Tokelau"_s,
				"TKT"_s,
				"Hora de verano de Tokelau"_s,
				"TKST"_s,
				"Hora de Tokelau"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				"Hora de Fiji"_s,
				"FJT"_s,
				"Hora de verano de Fiji"_s,
				"FJST"_s,
				"Hora de Fiji"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				"Hora de Tuvalu"_s,
				"TVT"_s,
				"Hora de verano de Tuvalu"_s,
				"TVST"_s,
				"Hora de Tuvalu"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				u"Hora de Galápagos"_s,
				"GALT"_s,
				u"Hora de verano de Galápagos"_s,
				"GALST"_s,
				u"Hora de Galápagos"_s,
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
				"Hora de las islas Line"_s,
				"LINT"_s,
				"Hora de verano de las islas Line"_s,
				"LINST"_s,
				"Hora de las islas Line"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				"Hora de Kosrae"_s,
				"KOST"_s,
				"Hora de verano de Kosrae"_s,
				"KOSST"_s,
				"Hora de Kosrae"_s,
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
				"Hora de Marquesas"_s,
				"MART"_s,
				"Hora de verano de Marquesas"_s,
				"MARST"_s,
				"Hora de Marquesas"_s,
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
				"Hora de Nauru"_s,
				"NRT"_s,
				"Hora de verano de Nauru"_s,
				"NRST"_s,
				"Hora de Nauru"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				"Hora de Niue"_s,
				"NUT"_s,
				"Hora de verano de Niue"_s,
				"NUST"_s,
				"Hora de Niue"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				"Hora de Norfolk"_s,
				"NFT"_s,
				"Hora de verano de Norfolk"_s,
				"NFST"_s,
				"Hora de Norfolk"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				"Hora de Nueva Caledonia"_s,
				"NCT"_s,
				"Hora de verano de Nueva Caledonia"_s,
				"NCST"_s,
				"Hora de Nueva Caledonia"_s,
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
				"Hora de Palau"_s,
				"PWT"_s,
				"Hora de verano de Palau"_s,
				"PWST"_s,
				"Hora de Palau"_s,
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
				u"Hora de Papúa-Nueva Guinea"_s,
				"PGT"_s,
				u"Hora de verano de Papúa-Nueva Guinea"_s,
				"PGST"_s,
				u"Hora de Papúa-Nueva Guinea"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				"Hora de las islas Cook"_s,
				"CKT"_s,
				"Hora de verano de las islas Cook"_s,
				"CKHST"_s,
				"Hora de las islas Cook"_s,
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
				u"Hora de Tahití"_s,
				"TAHT"_s,
				u"Hora de verano de Tahití"_s,
				"TAHST"_s,
				u"Hora de Tahití"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				"Hora de las islas Gilbert"_s,
				"GILT"_s,
				"Hora de verano de las islas Gilbert"_s,
				"GILST"_s,
				"Hora de las islas Gilbert"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				"Hora de Tonga"_s,
				"TOT"_s,
				"Hora de verano de Tonga"_s,
				"TOST"_s,
				"Hora de Tonga"_s,
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
				"Hora de Wake"_s,
				"WAKT"_s,
				"Hora de verano de Wake"_s,
				"WAKST"_s,
				"Hora de Wake"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				"Hora de Wallis y Futuna"_s,
				"WFT"_s,
				"Hora de verano de Wallis y Futuna"_s,
				"WFST"_s,
				"Hora de Wallis y Futuna"_s,
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

TimeZoneNames_es::TimeZoneNames_es() {
}

$Class* TimeZoneNames_es::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es, name, initialize, &_TimeZoneNames_es_ClassInfo_, allocate$TimeZoneNames_es);
	return class$;
}

$Class* TimeZoneNames_es::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun