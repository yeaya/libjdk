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

$MethodInfo _TimeZoneNames_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_it",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_it_MethodInfo_
};

$Object* allocate$TimeZoneNames_it($Class* clazz) {
	return $of($alloc(TimeZoneNames_it));
}

void TimeZoneNames_it::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_it::getContents() {
	$useLocalCurrentObjectStackCache();
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
				"Ora del Paraguay"_s,
				"PYT"_s,
				"Ora estiva del Paraguay"_s,
				"PYST"_s,
				"Ora del Paraguay"_s,
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
				"Ora della Colombia"_s,
				"COT"_s,
				"Ora estiva della Colombia"_s,
				"COST"_s,
				"Ora della Colombia"_s,
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
				"Ora del Venezuela"_s,
				"VET"_s,
				"Ora estiva del Venezuela"_s,
				"VEST"_s,
				"Ora del Venezuela"_s,
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
				"Ora della Guyana Francese"_s,
				"GFT"_s,
				"Ora estiva della Guyana Francese"_s,
				"GFST"_s,
				"Ora della Guyana Francese"_s,
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
				"Ora dell\'Ecuador"_s,
				"ECT"_s,
				"Ora estiva dell\'Ecuador"_s,
				"ECST"_s,
				"Ora dell\'Ecuador"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				"Ora della Guyana"_s,
				"GYT"_s,
				"Ora estiva della Guyana"_s,
				"GYST"_s,
				"Ora della Guyana"_s,
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
				"Ora della Bolivia"_s,
				"BOT"_s,
				"Ora estiva della Bolivia"_s,
				"BOST"_s,
				"Ora della Bolivia"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"Ora del Perù"_s,
				"PET"_s,
				u"Ora estiva del Perù"_s,
				"PEST"_s,
				u"Ora del Perù"_s,
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
				"Ora solare di Saint-Pierre e Miquelon"_s,
				"PMST"_s,
				"Ora legale di Saint-Pierre e Miquelon"_s,
				"PMDT"_s,
				"Ora Saint-Pierre e Miquelon"_s,
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
				"Ora dell\'Uruguay"_s,
				"UYT"_s,
				"Ora estiva dell\'Uruguay"_s,
				"UYST"_s,
				"Ora dell\'Uruguay"_s,
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
				"Ora di Suriname"_s,
				"SRT"_s,
				"Ora estiva di Suriname"_s,
				"SRST"_s,
				"Ora di Suriname"_s,
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
				"Ora di Davis"_s,
				"DAVT"_s,
				"Ora estiva di Davis"_s,
				"DAVST"_s,
				"Ora di Davis"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				"Ora di Dumont-d\'Urville"_s,
				"DDUT"_s,
				"Ora estiva di Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Ora di Dumont-d\'Urville"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				"Ora dell\'Isola Macquarie"_s,
				"MIST"_s,
				"Ora estiva dell\'Isola Macquarie"_s,
				"MIST"_s,
				"Ora dell\'Isola Macquarie"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				"Ora di Mawson"_s,
				"MAWT"_s,
				"Ora estiva di Mawson"_s,
				"MAWST"_s,
				"Ora di Mawson"_s,
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
				"Ora di Rothera"_s,
				"ROTT"_s,
				"Ora estiva di Rothera"_s,
				"ROTST"_s,
				"Ora di Rothera"_s,
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
				"Ora di Syowa"_s,
				"SYOT"_s,
				"Ora estiva di Syowa"_s,
				"SYOST"_s,
				"Ora di Syowa"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				"Tempo universale coordinato"_s,
				"UTC"_s,
				"Ora estiva dell\'Europa centrale"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				"Ora di Vostok"_s,
				"VOST"_s,
				"Ora estiva di Vostok"_s,
				"VOSST"_s,
				"Ora di Vostok"_s,
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
				"Ora di Alma-Ata"_s,
				"ALMT"_s,
				"Ora estiva di Alma-Ata"_s,
				"ALMST"_s,
				"Ora di Alma-Ata"_s,
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
				"Ora di Anadyr"_s,
				"ANAT"_s,
				"Ora estiva di Anadyr"_s,
				"ANAST"_s,
				"Ora di Anadyr"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				"Ora di Aqtau"_s,
				"AQTT"_s,
				"Ora estiva di Aqtau"_s,
				"AQTST"_s,
				"Ora di Aqtau"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				"Ora di Aqtobe"_s,
				"AQTT"_s,
				"Ora estiva di Aqtobe"_s,
				"AQTST"_s,
				"Ora di Aqtobe"_s,
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
				"Ora dell\'Azerbaigian"_s,
				"AZT"_s,
				"Ora estiva dell\'Azerbaigian"_s,
				"AZST"_s,
				"Ora dell\'Azerbaigian"_s,
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
				"Ora del Kirghizistan"_s,
				"KGT"_s,
				"Ora estiva del Kirghizistan"_s,
				"KGST"_s,
				"Ora del Kirghizistan"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				"Ora del Brunei"_s,
				"BNT"_s,
				"Ora estiva del Brunei"_s,
				"BNST"_s,
				"Ora del Brunei"_s,
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
				"Ora di Choibalsan"_s,
				"CHOT"_s,
				"Ora estiva di Choibalsan"_s,
				"CHOST"_s,
				"Ora di Choibalsan"_s,
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
				"Ora di Timor Leste"_s,
				"TLT"_s,
				"Ora estiva di Timor Leste"_s,
				"TLST"_s,
				"Ora di Timor Est"_s,
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
				"Ora del Tagikistan"_s,
				"TJT"_s,
				"Ora estiva del Tagikistan"_s,
				"TJST"_s,
				"Ora del Tagikistan"_s,
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
				"Ora di Hovd"_s,
				"HOVT"_s,
				"Ora estiva di Hovd"_s,
				"HOVST"_s,
				"Ora di Hovd"_s,
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
				"Ora dell\'Indonesia orientale"_s,
				"WIT"_s,
				"Ora estiva dell\'Indonesia orientale"_s,
				"EIST"_s,
				"Ora dell\'Indonesia orientale"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				"Ora dell\'Afghanistan"_s,
				"AFT"_s,
				"Ora estiva dell\'Afghanistan"_s,
				"AFST"_s,
				"Ora dell\'Afghanistan"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				"Ora di Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				"Ora estiva di Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Ora di Petropavlovsk-Kamchatski"_s,
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
			$of("Asia/Kolkata"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(YAKT)
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
				"Ora di Magadan"_s,
				"MAGT"_s,
				"Ora estiva di Magadan"_s,
				"MAGST"_s,
				"Ora di Magadan"_s,
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
				"Ora di Oral"_s,
				"ORAT"_s,
				"Ora estiva di Oral"_s,
				"ORAST"_s,
				"Ora di Oral"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				"Ora di Omsk"_s,
				"OMST"_s,
				"Ora estiva di Omsk"_s,
				"OMSST"_s,
				"Ora di Omsk"_s,
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
				"Ora di Qyzylorda"_s,
				"QYZT"_s,
				"Ora estiva di Qyzylorda"_s,
				"QYZST"_s,
				"Ora di Qyzylorda"_s,
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
				"Ora di Sakhalin"_s,
				"SAKT"_s,
				"Ora estiva di Sakhalin"_s,
				"SAKST"_s,
				"Ora di Sakhalin"_s,
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
				"Ora della Georgia"_s,
				"GET"_s,
				"Ora estiva della Georgia"_s,
				"GEST"_s,
				"Ora della Georgia"_s,
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
				"Ora di Ust-Nera"_s,
				"VLAT"_s,
				"Ora estiva di Ust-Nera"_s,
				"VLAST"_s,
				"Ora di Ust-Nera"_s,
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
				"Ora di Vladivostok"_s,
				"VLAT"_s,
				"Ora estiva di Vladivostok"_s,
				"VLAST"_s,
				"Ora di Vladivostok"_s,
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
				"Ora di Ekaterinburg"_s,
				"YEKT"_s,
				"Ora estiva di Ekaterinburg"_s,
				"YEKST"_s,
				"Ora di Ekaterinburg"_s,
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
				"Ora delle Azzorre"_s,
				"AZOT"_s,
				"Ora estiva delle Azzorre"_s,
				"AZOST"_s,
				"Ora delle Azzorre"_s,
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
				"Ora di Capo Verde"_s,
				"CVT"_s,
				"Ora estiva di Capo Verde"_s,
				"CVST"_s,
				"Ora di Capo Verde"_s,
				"CVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
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
				"Ora solare della Georgia Australe"_s,
				"GST"_s,
				"Ora legale della Georgia Australe"_s,
				"GDT"_s,
				"Ora Georgia del Sud"_s,
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
				"Ora delle Falkland"_s,
				"FKT"_s,
				"Ora estiva delle Falkland"_s,
				"FKST"_s,
				"Ora delle Falkland"_s,
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
				"Ora standard Australia centro-occidentale"_s,
				"ACWST"_s,
				"Ora estiva Australia centro-occidentale"_s,
				"ACWDT"_s,
				"Ora Australia centro-occidentale"_s,
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
				"Ora di Samara"_s,
				"SAMT"_s,
				"Ora estiva di Samara"_s,
				"SAMST"_s,
				"Ora di Samara"_s,
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
				"Ora del Terr. Britannico dell\'Oceano Indiano"_s,
				"IOT"_s,
				"Ora estiva del Terr. Britannico dell\'Oceano Indiano"_s,
				"IOST"_s,
				"Ora del Territorio Britannico dell\'Oceano Indiano"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				"Ora dell\'Isola Christmas"_s,
				"CXT"_s,
				"Ora estiva dell\'Isola Christmas"_s,
				"CXST"_s,
				"Ora dell\'Isola Christmas"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				"Ora delle Isole Cocos"_s,
				"CCT"_s,
				"Ora estiva delle Isole Cocos"_s,
				"CCST"_s,
				"Ora delle Isole Cocos"_s,
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
				"Ora delle Terre Australi e Antartiche Francesi"_s,
				"TFT"_s,
				"Ora estiva delle Terre Australi Antartiche Francesi"_s,
				"TFST"_s,
				"Ora delle Terre Australi e Antartiche Francesi"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				"Ora delle Seychelles"_s,
				"SCT"_s,
				"Ora estiva delle Seychelles"_s,
				"SCST"_s,
				"Ora delle Seychelles"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				"Ora delle Maldive"_s,
				"MVT"_s,
				"Ora estiva delle Maldive"_s,
				"MVST"_s,
				"Ora delle Maldive"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				"Ora di Mauritius"_s,
				"MUT"_s,
				"Ora estiva di Mauritius"_s,
				"MUST"_s,
				"Ora di Mauritius"_s,
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
				"Ora di Reunion"_s,
				"RET"_s,
				"Ora estiva di Reunion"_s,
				"REST"_s,
				"Ora di Reunion"_s,
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
				"Ora dell\'Europa centrale"_s,
				"MET"_s,
				"Ora estiva dell\'Europa centrale"_s,
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
				"Ora di Vanuatu"_s,
				"VUT"_s,
				"Ora estiva di Vanuatu"_s,
				"VUST"_s,
				"Ora di Vanuatu"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				"Ora dell\'Isola della Fenice"_s,
				"PHOT"_s,
				"Ora estiva dell\'Isola della Fenice"_s,
				"PHOST"_s,
				"Ora delle Isole Phoenix"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				"Ora di Tokelau"_s,
				"TKT"_s,
				"Ora estiva di Tokelau"_s,
				"TKST"_s,
				"Ora di Tokelau"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				"Ora di Figi"_s,
				"FJT"_s,
				"Ora estiva di Figi"_s,
				"FJST"_s,
				"Ora di Figi"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				"Ora di Tuvalu"_s,
				"TVT"_s,
				"Ora estiva di Tuvalu"_s,
				"TVST"_s,
				"Ora di Tuvalu"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				"Ora delle Galapagos"_s,
				"GALT"_s,
				"Ora estiva delle Galapagos"_s,
				"GALST"_s,
				"Ora delle Galapagos"_s,
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
				"Ora delle Line Islands"_s,
				"LINT"_s,
				"Ora estiva delle Line Islands"_s,
				"LINST"_s,
				"Ora delle Line Islands"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				"Ora di Kosrae"_s,
				"KOST"_s,
				"Ora estiva di Kosrae"_s,
				"KOSST"_s,
				"Ora di Kosrae"_s,
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
				"Ora delle Isole Marchesi"_s,
				"MART"_s,
				"Ora estiva delle Isole Marchesi"_s,
				"MARST"_s,
				"Ora delle Isole Marchesi"_s,
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
				"Ora di Nauru"_s,
				"NRT"_s,
				"Ora estiva di Nauru"_s,
				"NRST"_s,
				"Ora di Nauru"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				"Ora di Niue"_s,
				"NUT"_s,
				"Ora estiva di Niue"_s,
				"NUST"_s,
				"Ora di Niue"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				"Ora di Norfolk"_s,
				"NFT"_s,
				"Ora estiva di Norfolk"_s,
				"NFST"_s,
				"Ora di Norfolk"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				"Ora della Nuova Caledonia"_s,
				"NCT"_s,
				"Ora estiva della Nuova Caledonia"_s,
				"NCST"_s,
				"Ora della Nuova Caledonia"_s,
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
				"Ora di Palau"_s,
				"PWT"_s,
				"Ora estiva di Palau"_s,
				"PWST"_s,
				"Ora di Palau"_s,
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
				"Ora di Papua Nuova Guinea"_s,
				"PGT"_s,
				"Ora estiva di Papua Nuova Guinea"_s,
				"PGST"_s,
				"Ora di Papua Nuova Guinea"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				"Ora delle Isole Cook"_s,
				"CKT"_s,
				"Ora estiva delle Isole Cook"_s,
				"CKHST"_s,
				"Ora delle Isole Cook"_s,
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
				"Ora di Tahiti"_s,
				"TAHT"_s,
				"Ora estiva di Tahiti"_s,
				"TAHST"_s,
				"Ora di Tahiti"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				"Ora delle Isole Gilbert"_s,
				"GILT"_s,
				"Ora estiva delle Isole Gilbert"_s,
				"GILST"_s,
				"Ora delle Isole Gilbert"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				"Ora di Tonga"_s,
				"TOT"_s,
				"Ora estiva di Tonga"_s,
				"TOST"_s,
				"Ora di Tonga"_s,
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
				"Ora di Wake"_s,
				"WAKT"_s,
				"Ora estiva di Wake"_s,
				"WAKST"_s,
				"Ora di Wake"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				"Ora di Wallis e Futuna"_s,
				"WFT"_s,
				"Ora estiva di Wallis e Futuna"_s,
				"WFST"_s,
				"Ora di Wallis e Futuna"_s,
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

TimeZoneNames_it::TimeZoneNames_it() {
}

$Class* TimeZoneNames_it::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_it, name, initialize, &_TimeZoneNames_it_ClassInfo_, allocate$TimeZoneNames_it);
	return class$;
}

$Class* TimeZoneNames_it::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun