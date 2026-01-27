#include <sun/util/resources/ext/TimeZoneNames_fr.h>

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

$MethodInfo _TimeZoneNames_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_fr",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_fr_MethodInfo_
};

$Object* allocate$TimeZoneNames_fr($Class* clazz) {
	return $of($alloc(TimeZoneNames_fr));
}

void TimeZoneNames_fr::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, ACT, $new($StringArray, {
		"Heure de l\'Acre"_s,
		"ACT"_s,
		u"Heure d\'été de l\'Acre"_s,
		"ACST"_s,
		"Heure de l\'Acre"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		"Heure standard d\'Australie centrale (Australie du sud)"_s,
		"ACST"_s,
		u"Heure d\'été d\'Australie centrale (Australie du sud)"_s,
		"ACDT"_s,
		u"Centre (Australie-Méridionale)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Heure D\'Argentine"_s,
		"ART"_s,
		u"Heure d\'été D\'Argentine"_s,
		"ARST"_s,
		"Heure d\'Argentine"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		"Heure normale d\'Alaska"_s,
		"AKST"_s,
		u"Heure avancée d\'Alaska"_s,
		"AKDT"_s,
		"Alaska"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		"Heure normale d\'Amazonie"_s,
		"AMT"_s,
		u"Heure d\'été d\'Amazonie"_s,
		"AMST"_s,
		"Heure d\'Amazonie"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		"Heure normale d\'Arabie"_s,
		"AST"_s,
		u"Heure avancée d\'Arabie"_s,
		"ADT"_s,
		"Arabie"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"Heure d\'Arménie"_s,
		"AMT"_s,
		u"Heure d\'été d\'Arménie"_s,
		"AMST"_s,
		u"Heure d\'Arménie"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		"Heure normale de l\'Atlantique"_s,
		"AST"_s,
		u"Heure avancée de l\'Atlantique"_s,
		"ADT"_s,
		"Atlantique"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Heure du Bangladesh"_s,
		"BDT"_s,
		u"Heure d\'été du Bangladesh"_s,
		"BDST"_s,
		"Heure du Bangladesh"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		"Heure standard d\'Australie orientale (Queensland)"_s,
		"AEST"_s,
		u"Heure d\'été d\'Australie orientale (Queensland)"_s,
		"AEDT"_s,
		u"Côte Est (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		"Heure standard d\'Australie centrale (Australie du sud/Nouvelle-Galles du sud)"_s,
		"ACST"_s,
		u"Heure d\'été d\'Australie centrale (Australie du sud/Nouvelle-Galles du sud)"_s,
		"ACDT"_s,
		u"Centre (Australie-Méridionale/Nouvelle-Galles du Sud)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"Heure du Brésil"_s,
		"BRT"_s,
		u"Heure d\'été du Brésil"_s,
		"BRST"_s,
		u"Heure du Brésil"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		"Heure du Bhoutan"_s,
		"BTT"_s,
		u"Heure d\'été du Bhoutan"_s,
		"BTST"_s,
		"Heure du Bhoutan"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		"Heure d\'Afrique centrale"_s,
		"CAT"_s,
		u"Heure d\'été d\'Afrique centrale"_s,
		"CAST"_s,
		"Heure d\'Afrique centrale"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		"Heure d\'Europe centrale"_s,
		"CET"_s,
		u"Heure d\'été d\'Europe centrale"_s,
		"CEST"_s,
		"Heure d\'Europe centrale"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		"Heure standard de Chatham"_s,
		"CHAST"_s,
		u"Heure avancée de Chatham"_s,
		"CHADT"_s,
		"Chatham"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Heure de Chuuk"_s,
		"CHUT"_s,
		u"Heure d\'été de Chuuk"_s,
		"CHUST"_s,
		"Heure de Chuuk"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"Heure d\'Indonésie centrale"_s,
		"WITA"_s,
		u"Heure d\'été d\'Indonésie centrale"_s,
		"CIST"_s,
		u"Heure d\'Indonésie centrale"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Heure du Chili"_s,
		"CLT"_s,
		u"Heure d\'été du Chili"_s,
		"CLST"_s,
		"Heure du Chili"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		"Heure normale du Centre"_s,
		"CST"_s,
		u"Heure avancée du Centre"_s,
		"CDT"_s,
		"Centre"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		"Heure normale de Chine"_s,
		"CST"_s,
		u"Heure avancée de Chine"_s,
		"CDT"_s,
		"Chine"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		"Heure standard de Cuba"_s,
		"CST"_s,
		u"Heure d\'été de Cuba"_s,
		"CDT"_s,
		"Heure de Cuba"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		"Heure standard d\'Australie centrale (Territoire du Nord)"_s,
		"ACST"_s,
		u"Heure d\'été d\'Australie centrale (Territoire du Nord)"_s,
		"ACDT"_s,
		"Centre (Territoire du Nord)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"Heure du méridien de Greenwich"_s,
		"GMT"_s,
		u"Heure d\'été irlandaise"_s,
		"IST"_s,
		"Heure irlandaise"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		"Heure d\'Afrique de l\'Est"_s,
		"EAT"_s,
		u"Heure d\'été d\'Afrique de l\'Est"_s,
		"EAST"_s,
		"Heure d\'Afrique de l\'Est"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"Heure de l\'Ile de Pâques"_s,
		"EAST"_s,
		u"Heure d\'été de l\'Ile de Pâques"_s,
		"EASST"_s,
		u"Heure de l\'Ile de Pâques"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		"Heure d\'Europe de l\'Est"_s,
		"EET"_s,
		u"Heure d\'été d\'Europe de l\'Est"_s,
		"EEST"_s,
		"Heure d\'Europe de l\'Est"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		"Heure du Groenland de l\'Est"_s,
		"EGT"_s,
		u"Heure d\'été du Groenland de l\'Est"_s,
		"EGST"_s,
		"Heure du Groenland de l\'Est"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		"Heure normale de l\'Est"_s,
		"EST"_s,
		u"Heure avancée de l\'Est"_s,
		"EDT"_s,
		u"Côte Est"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		"Heure normale de l\'Est (Nouvelle-Galles du Sud)"_s,
		"AEST"_s,
		u"Heure d\'été de l\'Est (Nouvelle-Galles du Sud)"_s,
		"AEDT"_s,
		u"Côte Est (Nouvelle-Galles du Sud)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		"Heure d\'Europe de l\'Est UTC+3"_s,
		"FET"_s,
		u"Heure d\'été d\'Europe de l\'Est UTC+3"_s,
		"FEST"_s,
		"Heure d\'Europe de l\'Est UTC+3"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Heure du Ghana"_s,
		"GMT"_s,
		u"Heure d\'été du Ghana"_s,
		"GHST"_s,
		"Heure du Ghana"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Heure de Gambi"_s,
		"GAMT"_s,
		u"Heure d\'été de Gambi"_s,
		"GAMST"_s,
		"Heure de Gambi"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Heure de Greenwich"_s,
		"GMT"_s,
		"Heure de Greenwich"_s,
		"GMT"_s,
		"Heure de Greenwich"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"Heure du méridien de Greenwich"_s,
		"GMT"_s,
		u"Heure d\'été britannique"_s,
		"BST"_s,
		"Heure britannique"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		"Heure normale du Golfe"_s,
		"GST"_s,
		u"Heure avancée du Golfe"_s,
		"GDT"_s,
		"Golfe"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Heure de Hong Kong"_s,
		"HKT"_s,
		u"Heure d\'été de Hong Kong"_s,
		"HKST"_s,
		"Heure de Hong-Kong"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"Heure normale d\'Hawaï"_s,
		"HST"_s,
		u"Heure avancée d\'Hawaï"_s,
		"HDT"_s,
		u"Hawaï"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Heure d\'Indochine"_s,
		"ICT"_s,
		u"Heure d\'été d\'Indochine"_s,
		"ICST"_s,
		"Heure d\'Indochine"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Heure d\'Irkutsk"_s,
		"IRKT"_s,
		u"Heure d\'été d\'Irkutsk"_s,
		"IRKST"_s,
		"Heure d\'Irkutsk"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		"Heure normale d\'Iran"_s,
		"IRST"_s,
		u"Heure avancée d\'Iran"_s,
		"IRDT"_s,
		"Heure d\'Iran"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"Heure standard d\'Israël"_s,
		"IST"_s,
		u"Heure avancée d\'Israël"_s,
		"IDT"_s,
		u"Israël"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		"Heure normale d\'Inde"_s,
		"IST"_s,
		u"Heure avancée d\'Inde"_s,
		"IDT"_s,
		"Inde"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		"Heure normale du Japon"_s,
		"JST"_s,
		u"Heure avancée du Japon"_s,
		"JDT"_s,
		"Japon"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"Heure de Krasnoïarsk"_s,
		"KRAT"_s,
		u"Heure d\'été de Krasnoïarsk"_s,
		"KRAST"_s,
		u"Heure de Krasnoïarsk"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"Heure normale de Corée"_s,
		"KST"_s,
		u"Heure avancée de Corée"_s,
		"KDT"_s,
		u"Corée"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		"Heure standard de Lord Howe"_s,
		"LHST"_s,
		u"Heure d\'été de Lord Howe"_s,
		"LHDT"_s,
		"Heure de Lord Howe"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		"Heure des Iles Marshall"_s,
		"MHT"_s,
		u"Heure d\'été des Iles Marshall"_s,
		"MHST"_s,
		"Heure des Iles Marshall"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Heure de Myanmar"_s,
		"MMT"_s,
		u"Heure d\'été de Myanmar"_s,
		"MMST"_s,
		"Heure de Myanmar"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		"Heure standard de Moscou"_s,
		"MSK"_s,
		u"Heure avancée de Moscou"_s,
		"MSD"_s,
		"Moscou"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		"Heure normale des Rocheuses"_s,
		"MST"_s,
		u"Heure avancée des Rocheuses"_s,
		"MDT"_s,
		"Rocheuses"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Heure de Malaisie"_s,
		"MYT"_s,
		u"Heure d\'été de Malaisie"_s,
		"MYST"_s,
		"Heure de Malaisie"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Heure de Fernando de Noronha"_s,
		"FNT"_s,
		u"Heure d\'été de Fernando de Noronha"_s,
		"FNST"_s,
		"Heure de Fernando de Noronha"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Heure de Novossibirsk"_s,
		"NOVT"_s,
		u"Heure d\'été de Novossibirsk"_s,
		"NOVST"_s,
		"Heure de Novossibirsk"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"Heure du Népal"_s,
		"NPT"_s,
		u"Heure d\'été du Népal"_s,
		"NPST"_s,
		u"Heure du Népal"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		"Heure normale de Terre-Neuve"_s,
		"NST"_s,
		u"Heure avancée de Terre-Neuve"_s,
		"NDT"_s,
		"Terre-Neuve"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"Heure normale de Nouvelle-Zélande"_s,
		"NZST"_s,
		u"Heure avancée de Nouvelle-Zélande"_s,
		"NZDT"_s,
		u"Nouvelle-Zélande"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		"Heure standard des Pitcairn"_s,
		"PST"_s,
		u"heure avancée des Pitcairn"_s,
		"PDT"_s,
		"Pitcairn"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		"Heure du Pakistan"_s,
		"PKT"_s,
		u"Heure d\'été du Pakistan"_s,
		"PKST"_s,
		"Heure du Pakistan"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Heure de Pohnpei"_s,
		"PONT"_s,
		u"Heure d\'été de Pohnpei"_s,
		"PONST"_s,
		"Ponape"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		"Heure normale du Pacifique"_s,
		"PST"_s,
		u"Heure avancée du Pacifique"_s,
		"PDT"_s,
		"Pacifique"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		"Heure normale d\'Afrique du Sud"_s,
		"SAST"_s,
		u"Heure d\'été d\'Afrique du Sud"_s,
		"SAST"_s,
		"Afrique du Sud"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"Heure des Îles Salomon"_s,
		"SBT"_s,
		u"Heure d\'été des Îles Salomon"_s,
		"SBST"_s,
		"Heure des Iles Salomon"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Heure de Singapour"_s,
		"SGT"_s,
		u"Heure d\'été de Singapour"_s,
		"SGST"_s,
		"Heure de Singapour"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		"Heure standard d\'Australie orientale (Tasmanie)"_s,
		"AEST"_s,
		u"Heure d\'été d\'Australie orientale (Tasmanie)"_s,
		"AEDT"_s,
		u"Côte Est (Tasmanie)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"Heure du Turkménistan"_s,
		"TMT"_s,
		u"Heure d\'été du Turkménistan"_s,
		"TMST"_s,
		u"Heure du Turkménistan"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Heure de l\'Ulaanbaatar"_s,
		"ULAT"_s,
		u"Heure d\'été de l\'Ulaanbaatar"_s,
		"ULAST"_s,
		"Heure de l\'Ulaanbaatar"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		"Heure d\'Afrique de l\'Ouest"_s,
		"WAT"_s,
		u"Heure d\'été d\'Afrique de l\'Ouest"_s,
		"WAST"_s,
		"Heure d\'Afrique de l\'Ouest"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		"Heure d\'Europe de l\'Ouest"_s,
		"WET"_s,
		u"Heure d\'été d\'Europe de l\'Ouest"_s,
		"WEST"_s,
		"Heure d\'Europe de l\'Ouest"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		"Heure du Groenland de l\'Ouest"_s,
		"WGT"_s,
		u"Heure d\'été du Groenland de l\'Ouest"_s,
		"WGST"_s,
		"Heure du Groenland de l\'Ouest"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"Heure de l\'Indonésie occidentale"_s,
		"WIB"_s,
		u"Heure d\'été de l\'Indonésie occidentale"_s,
		"WIST"_s,
		u"Heure de l\'Indonésie occidentale"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		"Heure normale de l\'Ouest (Australie)"_s,
		"AWST"_s,
		u"Heure d\'été de l\'Ouest (Australie)"_s,
		"AWDT"_s,
		"Ouest (Australie)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		"Heure standard de Samoa"_s,
		"SST"_s,
		u"Heure avancée de Samoa"_s,
		"SDT"_s,
		"Samoa"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		"Heure des Samoas occidentales"_s,
		"WSST"_s,
		u"Heure d\'été des Samoas occidentales"_s,
		"WSDT"_s,
		"Heure des Samoas occidentales"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"Heure normale des îles Mariannes"_s,
		"ChST"_s,
		u"Heure d\'été des îles Mariannes"_s,
		"ChDT"_s,
		"Chamorro"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		"Heure standard d\'Australie orientale (Victoria)"_s,
		"AEST"_s,
		u"Heure d\'été d\'Australie orientale (Victoria)"_s,
		"AEDT"_s,
		u"Côte Est (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		u"Temps universel coordonné"_s,
		"UTC"_s,
		u"Temps universel coordonné"_s,
		"UTC"_s,
		u"Temps universel coordonné"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"Heure de l\'Ouzbékistan"_s,
		"UZT"_s,
		u"Heure d\'été de l\'Ouzbékistan"_s,
		"UZST"_s,
		u"Heure de l\'Ouzbékistan"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		"Heure normale de Chine"_s,
		"XJT"_s,
		u"Heure avancée de Chine"_s,
		"XJDT"_s,
		"Chine"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Heure du Iakoutsk"_s,
		"YAKT"_s,
		u"Heure d\'été du Iakoutsk"_s,
		"YAKST"_s,
		"Heure du Iakoutsk"_s,
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
				"Heure du Paraguay"_s,
				"PYT"_s,
				u"Heure d\'été du Paraguay"_s,
				"PYST"_s,
				"Heure du Paraguay"_s,
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
				"Heure de Colombie"_s,
				"COT"_s,
				u"Heure d\'été de Colombie"_s,
				"COST"_s,
				"Heure de Colombie"_s,
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
				"Heure du Venezuela"_s,
				"VET"_s,
				u"Heure d\'été du Venezuela"_s,
				"VEST"_s,
				"Heure du Venezuela"_s,
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
				u"Heure de Guyane française"_s,
				"GFT"_s,
				u"Heure d\'été de Guyane française"_s,
				"GFST"_s,
				u"Heure de Guyane française"_s,
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
				u"Heure de l\'Équateur"_s,
				"ECT"_s,
				u"Heure d\'été de l\'Équateur"_s,
				"ECST"_s,
				"Heure de l\'Equateur"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				"Heure de Guyana"_s,
				"GYT"_s,
				u"Heure d\'été de Guyana"_s,
				"GYST"_s,
				"Heure de Guyana"_s,
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
				"Heure de Bolivie"_s,
				"BOT"_s,
				u"Heure d\'été de Bolivie"_s,
				"BOST"_s,
				"Heure de Bolivie"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"Heure du Pérou"_s,
				"PET"_s,
				u"Heure d\'été du Pérou"_s,
				"PEST"_s,
				u"Heure du Pérou"_s,
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
				"Heure normale de Saint-Pierre et Miquelon"_s,
				"PMST"_s,
				u"Heure avancée de Saint-Pierre et Miquelon"_s,
				"PMDT"_s,
				"Saint-Pierre-et-Miquelon"_s,
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
				"Heure de l\'Uruguay"_s,
				"UYT"_s,
				u"Heure d\'été de l\'Uruguay"_s,
				"UYST"_s,
				"Heure de l\'Uruguay"_s,
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
				"Heure du Surinam"_s,
				"SRT"_s,
				u"Heure d\'été du Surinam"_s,
				"SRST"_s,
				"Heure du Surinam"_s,
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
				"Heure de Davis"_s,
				"DAVT"_s,
				u"Heure d\'été de Davis"_s,
				"DAVST"_s,
				"Heure de Davis"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				"Heure de Dumont-d\'Urville"_s,
				"DDUT"_s,
				u"Heure d\'été de Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Heure de Dumont-d\'Urville"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				"Heure de l\'Ile Macquarie"_s,
				"MIST"_s,
				u"Heure d\'été de l\'Ile Macquarie"_s,
				"MIST"_s,
				"Heure de l\'Ile Macquarie"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				"Heure de Mawson"_s,
				"MAWT"_s,
				u"Heure d\'été de Mawson"_s,
				"MAWST"_s,
				"Heure de Mawson"_s,
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
				"Heure de Rothera"_s,
				"ROTT"_s,
				u"Heure d\'été de Rothera"_s,
				"ROTST"_s,
				"Heure de Rothera"_s,
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
				"Heure de Syowa"_s,
				"SYOT"_s,
				u"Heure d\'été de Syowa"_s,
				"SYOST"_s,
				"Heure de Syowa"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				u"Temps universel coordonné"_s,
				"UTC"_s,
				u"Heure d\'été d\'Europe centrale"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				"Heure de Vostok"_s,
				"VOST"_s,
				u"Heure d\'été de Vostok"_s,
				"VOSST"_s,
				"Heure de Vostok"_s,
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
				"Heure d\'Alma-Ata"_s,
				"ALMT"_s,
				u"Heure d\'été d\'Alma-Ata"_s,
				"ALMST"_s,
				"Heure d\'Alma-Ata"_s,
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
				"Heure d\'Anadyr"_s,
				"ANAT"_s,
				u"Heure d\'été d\'Anadyr"_s,
				"ANAST"_s,
				"Heure d\'Anadyr"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				"Heure d\'Aqtau"_s,
				"AQTT"_s,
				u"Heure d\'été d\'Aqtau"_s,
				"AQTST"_s,
				"Heure d\'Aqtau"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				"Heure d\'Aqtobe"_s,
				"AQTT"_s,
				u"Heure d\'été d\'Aqtobe"_s,
				"AQTST"_s,
				"Heure d\'Aqtobe"_s,
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
				u"Heure d\'Azerbaïdjan"_s,
				"AZT"_s,
				u"Heure d\'été d\'Azerbaïdjan"_s,
				"AZST"_s,
				u"Heure d\'Azerbaïdjan"_s,
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
				"Heure du Kirghizistan"_s,
				"KGT"_s,
				u"Heure d\'été du Kirghizistan"_s,
				"KGST"_s,
				"Heure du Kirghizistan"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				"Heure du Brunei"_s,
				"BNT"_s,
				u"Heure d\'été du Brunei"_s,
				"BNST"_s,
				"Heure du Brunei"_s,
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
				"Heure de Choibalsan"_s,
				"CHOT"_s,
				u"Heure d\'été de Choibalsan"_s,
				"CHOST"_s,
				"Heure de Choibalsan"_s,
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
				"Heure de Timor-Leste"_s,
				"TLT"_s,
				u"Heure d\'été de Timor-Leste"_s,
				"TLST"_s,
				"Heure de Timor-Leste"_s,
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
				"Heure du Tadjikistan"_s,
				"TJT"_s,
				u"Heure d\'été du Tadjikistan"_s,
				"TJST"_s,
				"Heure du Tadjikistan"_s,
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
				"Heure de Hovd"_s,
				"HOVT"_s,
				u"Heure d\'été de Hovd"_s,
				"HOVST"_s,
				"Heure de Hovd"_s,
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
				u"Heure d\'Indonésie orientale"_s,
				"WIT"_s,
				u"Heure d\'été d\'Indonésie orientale"_s,
				"EIST"_s,
				u"Heure d\'Indonésie orientale"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				"Heure d\'Afghanistan"_s,
				"AFT"_s,
				u"Heure d\'été d\'Afghanistan"_s,
				"AFST"_s,
				"Heure d\'Afghanistan"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				"Heure de Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				u"Heure d\'été de Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Heure de Petropavlovsk-Kamchatski"_s,
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
				"Heure de Magadan"_s,
				"MAGT"_s,
				u"Heure d\'été de Magadan"_s,
				"MAGST"_s,
				"Heure de Magadan"_s,
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
				"Heure d\'Oral"_s,
				"ORAT"_s,
				u"Heure d\'été d\'Oral"_s,
				"ORAST"_s,
				"Heure d\'Oral"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				"Heure d\'Omsk"_s,
				"OMST"_s,
				u"Heure d\'été d\'Omsk"_s,
				"OMSST"_s,
				"Heure d\'Omsk"_s,
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
				"Heure de Kyzylorda"_s,
				"QYZT"_s,
				u"Heure d\'été de Kyzylorda"_s,
				"QYZST"_s,
				"Heure de Kyzylorda"_s,
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
				"Heure de Sakhalin"_s,
				"SAKT"_s,
				u"Heure d\'été de Sakhalin"_s,
				"SAKST"_s,
				"Heure de Sakhalin"_s,
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
				u"Heure de Géorgie"_s,
				"GET"_s,
				u"Heure d\'été de Géorgie"_s,
				"GEST"_s,
				u"Heure de Géorgie"_s,
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
				"Heure d\'Ust-Nera"_s,
				"VLAT"_s,
				u"Heure d\'été d\'Ust-Nera"_s,
				"VLAST"_s,
				"Heure d\'Ust-Nera"_s,
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
				"Heure de Vladivostok"_s,
				"VLAT"_s,
				u"Heure d\'été de Vladivostok"_s,
				"VLAST"_s,
				"Heure de Vladivostok"_s,
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
				"Heure de Yekaterinburg"_s,
				"YEKT"_s,
				u"Heure d\'été de Yekaterinburg"_s,
				"YEKST"_s,
				"Heure de Yekaterinburg"_s,
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
				u"Heure des Açores"_s,
				"AZOT"_s,
				u"Heure d\'été des Açores"_s,
				"AZOST"_s,
				u"Heure des Açores"_s,
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
				"Heure de Cap-Vert"_s,
				"CVT"_s,
				u"Heure d\'été de Cap-Vert"_s,
				"CVST"_s,
				"Heure de Cap-Vert"_s,
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
				u"Heure normale de Géorgie du Sud"_s,
				"GST"_s,
				u"Heure avancée de Géorgie du Sud"_s,
				"GDT"_s,
				u"Géorgie du Sud"_s,
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
				u"Heure des îles Falkland"_s,
				"FKT"_s,
				u"Heure d\'été des îles Falkland"_s,
				"FKST"_s,
				u"Heure des îles Falkland"_s,
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
				"Heure standard de l\'Australie occidentale (centre)"_s,
				"ACWST"_s,
				u"Heure d\'été de l\'Australie occidentale (centre)"_s,
				"ACWDT"_s,
				"Heure de l\'Australie occidentale (centre)"_s,
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
				"Heure normale de Samara"_s,
				"SAMT"_s,
				u"Heure d\'été de Samara"_s,
				"SAMST"_s,
				"Heure de Samara"_s,
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
				u"Heure de l\'océan Indien"_s,
				"IOT"_s,
				u"Heure d\'été de l\'océan Indien"_s,
				"IOST"_s,
				u"Heure de l\'océan Indien"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				u"Heure de l\'Île Christmas"_s,
				"CXT"_s,
				u"Heure d\'été de l\'Île Christmas"_s,
				"CXST"_s,
				"Heure de l\'Ile Christmas"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				u"Heure des Îles Cocos"_s,
				"CCT"_s,
				u"Heure d\'été des Îles Cocos"_s,
				"CCST"_s,
				"Heure des Iles Cocos"_s,
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
				u"Heure des Terres australes antartiques françaises"_s,
				"TFT"_s,
				u"Heure d\'été des Terres australes antartiques françaises"_s,
				"TFST"_s,
				u"Heure des Terres australes antarctiques françaises"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				"Heure des Seychelles"_s,
				"SCT"_s,
				u"Heure d\'été des Seychelles"_s,
				"SCST"_s,
				"Heure des Seychelles"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				"Heure des Maldives"_s,
				"MVT"_s,
				u"Heure d\'été des Maldives"_s,
				"MVST"_s,
				"Heure des Maldives"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				"Heure de Maurice"_s,
				"MUT"_s,
				u"Heure d\'été de Maurice"_s,
				"MUST"_s,
				"Heure de Maurice"_s,
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
				u"Heure de la Réunion"_s,
				"RET"_s,
				u"Heure d\'été de la Réunion"_s,
				"REST"_s,
				u"Heure de la Réunion"_s,
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
				"Heure de l\'Europe centrale"_s,
				"MET"_s,
				u"Heure d\'été de l\'Europe centrale"_s,
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
				"Heure du Vanuatu"_s,
				"VUT"_s,
				u"Heure d\'été du Vanuatu"_s,
				"VUST"_s,
				"Heure du Vanuatu"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				u"Heure de l\'Île de Phoenix"_s,
				"PHOT"_s,
				u"Heure d\'été de l\'Île de Phoenix"_s,
				"PHOST"_s,
				"Heure de l\'Ile de Phoenix"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				"Heure de Tokelau"_s,
				"TKT"_s,
				u"Heure d\'été de Tokelau"_s,
				"TKST"_s,
				"Heure de Tokelau"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				"Heure de Fidji"_s,
				"FJT"_s,
				u"Heure d\'été de Fidji"_s,
				"FJST"_s,
				"Heure de Fidji"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				"Heure de Tuvalu"_s,
				"TVT"_s,
				u"Heure d\'été de Tuvalu"_s,
				"TVST"_s,
				"Heure de Tuvalu"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				"Heure des Galapagos"_s,
				"GALT"_s,
				u"Heure d\'été des Galapagos"_s,
				"GALST"_s,
				"Heure des Galapagos"_s,
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
				u"Heure de l\'Île de Line"_s,
				"LINT"_s,
				u"Heure d\'été de l\'Île de Line"_s,
				"LINST"_s,
				"Heure de l\'Ile de Line"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				"Heure de Kusaie"_s,
				"KOST"_s,
				u"Heure d\'été de Kusaie"_s,
				"KOSST"_s,
				"Heure de Kusaie"_s,
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
				"Heure des Marquises"_s,
				"MART"_s,
				u"Heure d\'été des Marquises"_s,
				"MARST"_s,
				"Heure des Marquises"_s,
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
				"Heure de Nauru"_s,
				"NRT"_s,
				u"Heure d\'été de Nauru"_s,
				"NRST"_s,
				"Heure de Nauru"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				"Heure de Niue"_s,
				"NUT"_s,
				u"Heure d\'été de Niue"_s,
				"NUST"_s,
				"Heure de Niue"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				"Heure de Norfolk"_s,
				"NFT"_s,
				u"Heure d\'été de Norfolk"_s,
				"NFST"_s,
				"Heure de Norfolk"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				u"Heure de Nouvelle-Calédonie"_s,
				"NCT"_s,
				u"Heure d\'été de Nouvelle-Calédonie"_s,
				"NCST"_s,
				u"Heure de Nouvelle-Calédonie"_s,
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
				"Heure de Palaos"_s,
				"PWT"_s,
				u"Heure d\'été de Palaos"_s,
				"PWST"_s,
				"Heure de Palaos"_s,
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
				u"Heure de Papouasie-Nouvelle-Guinée"_s,
				"PGT"_s,
				u"Heure d\'été de de Papouasie-Nouvelle-Guinée"_s,
				"PGST"_s,
				u"Heure de Papouasie-Nouvelle-Guinée"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				u"Heure des Îles Cook"_s,
				"CKT"_s,
				u"Heure d\'été des Îles Cook"_s,
				"CKHST"_s,
				"Heure des Iles Cook"_s,
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
				"Heure de Tahiti"_s,
				"TAHT"_s,
				u"Heure d\'été de Tahiti"_s,
				"TAHST"_s,
				"Heure de Tahiti"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				"Heure de Kiribati"_s,
				"GILT"_s,
				u"Heure d\'été de Kiribati"_s,
				"GILST"_s,
				"Heure de Kiribati"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				"Heure de Tonga"_s,
				"TOT"_s,
				u"Heure d\'été de Tonga"_s,
				"TOST"_s,
				"Heure de Tonga"_s,
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
				"Heure de Wake"_s,
				"WAKT"_s,
				u"Heure d\'été de Wake"_s,
				"WAKST"_s,
				"Heure de Wake"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				"Heure de Wallis et Futuna"_s,
				"WFT"_s,
				u"Heure d\'été de Wallis et Futuna"_s,
				"WFST"_s,
				"Heure de Wallis-et-Futuna"_s,
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

TimeZoneNames_fr::TimeZoneNames_fr() {
}

$Class* TimeZoneNames_fr::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_fr, name, initialize, &_TimeZoneNames_fr_ClassInfo_, allocate$TimeZoneNames_fr);
	return class$;
}

$Class* TimeZoneNames_fr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun