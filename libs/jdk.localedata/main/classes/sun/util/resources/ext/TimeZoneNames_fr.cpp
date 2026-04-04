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

void TimeZoneNames_fr::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_fr::getContents() {
	$useLocalObjectStack();
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
				"Heure du Paraguay"_s,
				"PYT"_s,
				u"Heure d\'été du Paraguay"_s,
				"PYST"_s,
				"Heure du Paraguay"_s,
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
				"Heure de Colombie"_s,
				"COT"_s,
				u"Heure d\'été de Colombie"_s,
				"COST"_s,
				"Heure de Colombie"_s,
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
				"Heure du Venezuela"_s,
				"VET"_s,
				u"Heure d\'été du Venezuela"_s,
				"VEST"_s,
				"Heure du Venezuela"_s,
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
				u"Heure de Guyane française"_s,
				"GFT"_s,
				u"Heure d\'été de Guyane française"_s,
				"GFST"_s,
				u"Heure de Guyane française"_s,
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
				u"Heure de l\'Équateur"_s,
				"ECT"_s,
				u"Heure d\'été de l\'Équateur"_s,
				"ECST"_s,
				"Heure de l\'Equateur"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Heure de Guyana"_s,
				"GYT"_s,
				u"Heure d\'été de Guyana"_s,
				"GYST"_s,
				"Heure de Guyana"_s,
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
				"Heure de Bolivie"_s,
				"BOT"_s,
				u"Heure d\'été de Bolivie"_s,
				"BOST"_s,
				"Heure de Bolivie"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				u"Heure du Pérou"_s,
				"PET"_s,
				u"Heure d\'été du Pérou"_s,
				"PEST"_s,
				u"Heure du Pérou"_s,
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
				"Heure normale de Saint-Pierre et Miquelon"_s,
				"PMST"_s,
				u"Heure avancée de Saint-Pierre et Miquelon"_s,
				"PMDT"_s,
				"Saint-Pierre-et-Miquelon"_s,
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
				"Heure de l\'Uruguay"_s,
				"UYT"_s,
				u"Heure d\'été de l\'Uruguay"_s,
				"UYST"_s,
				"Heure de l\'Uruguay"_s,
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
				"Heure du Surinam"_s,
				"SRT"_s,
				u"Heure d\'été du Surinam"_s,
				"SRST"_s,
				"Heure du Surinam"_s,
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
				"Heure de Davis"_s,
				"DAVT"_s,
				u"Heure d\'été de Davis"_s,
				"DAVST"_s,
				"Heure de Davis"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Heure de Dumont-d\'Urville"_s,
				"DDUT"_s,
				u"Heure d\'été de Dumont-d\'Urville"_s,
				"DDUST"_s,
				"Heure de Dumont-d\'Urville"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				"Heure de l\'Ile Macquarie"_s,
				"MIST"_s,
				u"Heure d\'été de l\'Ile Macquarie"_s,
				"MIST"_s,
				"Heure de l\'Ile Macquarie"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Heure de Mawson"_s,
				"MAWT"_s,
				u"Heure d\'été de Mawson"_s,
				"MAWST"_s,
				"Heure de Mawson"_s,
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
				"Heure de Rothera"_s,
				"ROTT"_s,
				u"Heure d\'été de Rothera"_s,
				"ROTST"_s,
				"Heure de Rothera"_s,
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
				"Heure de Syowa"_s,
				"SYOT"_s,
				u"Heure d\'été de Syowa"_s,
				"SYOST"_s,
				"Heure de Syowa"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				u"Temps universel coordonné"_s,
				"UTC"_s,
				u"Heure d\'été d\'Europe centrale"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Heure de Vostok"_s,
				"VOST"_s,
				u"Heure d\'été de Vostok"_s,
				"VOSST"_s,
				"Heure de Vostok"_s,
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
				"Heure d\'Alma-Ata"_s,
				"ALMT"_s,
				u"Heure d\'été d\'Alma-Ata"_s,
				"ALMST"_s,
				"Heure d\'Alma-Ata"_s,
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
				"Heure d\'Anadyr"_s,
				"ANAT"_s,
				u"Heure d\'été d\'Anadyr"_s,
				"ANAST"_s,
				"Heure d\'Anadyr"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Heure d\'Aqtau"_s,
				"AQTT"_s,
				u"Heure d\'été d\'Aqtau"_s,
				"AQTST"_s,
				"Heure d\'Aqtau"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Heure d\'Aqtobe"_s,
				"AQTT"_s,
				u"Heure d\'été d\'Aqtobe"_s,
				"AQTST"_s,
				"Heure d\'Aqtobe"_s,
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
				u"Heure d\'Azerbaïdjan"_s,
				"AZT"_s,
				u"Heure d\'été d\'Azerbaïdjan"_s,
				"AZST"_s,
				u"Heure d\'Azerbaïdjan"_s,
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
				"Heure du Kirghizistan"_s,
				"KGT"_s,
				u"Heure d\'été du Kirghizistan"_s,
				"KGST"_s,
				"Heure du Kirghizistan"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Heure du Brunei"_s,
				"BNT"_s,
				u"Heure d\'été du Brunei"_s,
				"BNST"_s,
				"Heure du Brunei"_s,
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
				"Heure de Choibalsan"_s,
				"CHOT"_s,
				u"Heure d\'été de Choibalsan"_s,
				"CHOST"_s,
				"Heure de Choibalsan"_s,
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
				"Heure de Timor-Leste"_s,
				"TLT"_s,
				u"Heure d\'été de Timor-Leste"_s,
				"TLST"_s,
				"Heure de Timor-Leste"_s,
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
				"Heure du Tadjikistan"_s,
				"TJT"_s,
				u"Heure d\'été du Tadjikistan"_s,
				"TJST"_s,
				"Heure du Tadjikistan"_s,
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
				"Heure de Hovd"_s,
				"HOVT"_s,
				u"Heure d\'été de Hovd"_s,
				"HOVST"_s,
				"Heure de Hovd"_s,
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
				u"Heure d\'Indonésie orientale"_s,
				"WIT"_s,
				u"Heure d\'été d\'Indonésie orientale"_s,
				"EIST"_s,
				u"Heure d\'Indonésie orientale"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				"Heure d\'Afghanistan"_s,
				"AFT"_s,
				u"Heure d\'été d\'Afghanistan"_s,
				"AFST"_s,
				"Heure d\'Afghanistan"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Heure de Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				u"Heure d\'été de Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				"Heure de Petropavlovsk-Kamchatski"_s,
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
				"Heure de Magadan"_s,
				"MAGT"_s,
				u"Heure d\'été de Magadan"_s,
				"MAGST"_s,
				"Heure de Magadan"_s,
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
				"Heure d\'Oral"_s,
				"ORAT"_s,
				u"Heure d\'été d\'Oral"_s,
				"ORAST"_s,
				"Heure d\'Oral"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Heure d\'Omsk"_s,
				"OMST"_s,
				u"Heure d\'été d\'Omsk"_s,
				"OMSST"_s,
				"Heure d\'Omsk"_s,
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
				"Heure de Kyzylorda"_s,
				"QYZT"_s,
				u"Heure d\'été de Kyzylorda"_s,
				"QYZST"_s,
				"Heure de Kyzylorda"_s,
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
				"Heure de Sakhalin"_s,
				"SAKT"_s,
				u"Heure d\'été de Sakhalin"_s,
				"SAKST"_s,
				"Heure de Sakhalin"_s,
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
				u"Heure de Géorgie"_s,
				"GET"_s,
				u"Heure d\'été de Géorgie"_s,
				"GEST"_s,
				u"Heure de Géorgie"_s,
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
				"Heure d\'Ust-Nera"_s,
				"VLAT"_s,
				u"Heure d\'été d\'Ust-Nera"_s,
				"VLAST"_s,
				"Heure d\'Ust-Nera"_s,
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
				"Heure de Vladivostok"_s,
				"VLAT"_s,
				u"Heure d\'été de Vladivostok"_s,
				"VLAST"_s,
				"Heure de Vladivostok"_s,
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
				"Heure de Yekaterinburg"_s,
				"YEKT"_s,
				u"Heure d\'été de Yekaterinburg"_s,
				"YEKST"_s,
				"Heure de Yekaterinburg"_s,
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
				u"Heure des Açores"_s,
				"AZOT"_s,
				u"Heure d\'été des Açores"_s,
				"AZOST"_s,
				u"Heure des Açores"_s,
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
				"Heure de Cap-Vert"_s,
				"CVT"_s,
				u"Heure d\'été de Cap-Vert"_s,
				"CVST"_s,
				"Heure de Cap-Vert"_s,
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
				u"Heure normale de Géorgie du Sud"_s,
				"GST"_s,
				u"Heure avancée de Géorgie du Sud"_s,
				"GDT"_s,
				u"Géorgie du Sud"_s,
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
				u"Heure des îles Falkland"_s,
				"FKT"_s,
				u"Heure d\'été des îles Falkland"_s,
				"FKST"_s,
				u"Heure des îles Falkland"_s,
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
				"Heure standard de l\'Australie occidentale (centre)"_s,
				"ACWST"_s,
				u"Heure d\'été de l\'Australie occidentale (centre)"_s,
				"ACWDT"_s,
				"Heure de l\'Australie occidentale (centre)"_s,
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
				"Heure normale de Samara"_s,
				"SAMT"_s,
				u"Heure d\'été de Samara"_s,
				"SAMST"_s,
				"Heure de Samara"_s,
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
				u"Heure de l\'océan Indien"_s,
				"IOT"_s,
				u"Heure d\'été de l\'océan Indien"_s,
				"IOST"_s,
				u"Heure de l\'océan Indien"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				u"Heure de l\'Île Christmas"_s,
				"CXT"_s,
				u"Heure d\'été de l\'Île Christmas"_s,
				"CXST"_s,
				"Heure de l\'Ile Christmas"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				u"Heure des Îles Cocos"_s,
				"CCT"_s,
				u"Heure d\'été des Îles Cocos"_s,
				"CCST"_s,
				"Heure des Iles Cocos"_s,
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
				u"Heure des Terres australes antartiques françaises"_s,
				"TFT"_s,
				u"Heure d\'été des Terres australes antartiques françaises"_s,
				"TFST"_s,
				u"Heure des Terres australes antarctiques françaises"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Heure des Seychelles"_s,
				"SCT"_s,
				u"Heure d\'été des Seychelles"_s,
				"SCST"_s,
				"Heure des Seychelles"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Heure des Maldives"_s,
				"MVT"_s,
				u"Heure d\'été des Maldives"_s,
				"MVST"_s,
				"Heure des Maldives"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Heure de Maurice"_s,
				"MUT"_s,
				u"Heure d\'été de Maurice"_s,
				"MUST"_s,
				"Heure de Maurice"_s,
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
				u"Heure de la Réunion"_s,
				"RET"_s,
				u"Heure d\'été de la Réunion"_s,
				"REST"_s,
				u"Heure de la Réunion"_s,
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
				"Heure de l\'Europe centrale"_s,
				"MET"_s,
				u"Heure d\'été de l\'Europe centrale"_s,
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
				"Heure du Vanuatu"_s,
				"VUT"_s,
				u"Heure d\'été du Vanuatu"_s,
				"VUST"_s,
				"Heure du Vanuatu"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				u"Heure de l\'Île de Phoenix"_s,
				"PHOT"_s,
				u"Heure d\'été de l\'Île de Phoenix"_s,
				"PHOST"_s,
				"Heure de l\'Ile de Phoenix"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Heure de Tokelau"_s,
				"TKT"_s,
				u"Heure d\'été de Tokelau"_s,
				"TKST"_s,
				"Heure de Tokelau"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Heure de Fidji"_s,
				"FJT"_s,
				u"Heure d\'été de Fidji"_s,
				"FJST"_s,
				"Heure de Fidji"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Heure de Tuvalu"_s,
				"TVT"_s,
				u"Heure d\'été de Tuvalu"_s,
				"TVST"_s,
				"Heure de Tuvalu"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				"Heure des Galapagos"_s,
				"GALT"_s,
				u"Heure d\'été des Galapagos"_s,
				"GALST"_s,
				"Heure des Galapagos"_s,
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
				u"Heure de l\'Île de Line"_s,
				"LINT"_s,
				u"Heure d\'été de l\'Île de Line"_s,
				"LINST"_s,
				"Heure de l\'Ile de Line"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Heure de Kusaie"_s,
				"KOST"_s,
				u"Heure d\'été de Kusaie"_s,
				"KOSST"_s,
				"Heure de Kusaie"_s,
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
				"Heure des Marquises"_s,
				"MART"_s,
				u"Heure d\'été des Marquises"_s,
				"MARST"_s,
				"Heure des Marquises"_s,
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
				"Heure de Nauru"_s,
				"NRT"_s,
				u"Heure d\'été de Nauru"_s,
				"NRST"_s,
				"Heure de Nauru"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Heure de Niue"_s,
				"NUT"_s,
				u"Heure d\'été de Niue"_s,
				"NUST"_s,
				"Heure de Niue"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Heure de Norfolk"_s,
				"NFT"_s,
				u"Heure d\'été de Norfolk"_s,
				"NFST"_s,
				"Heure de Norfolk"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				u"Heure de Nouvelle-Calédonie"_s,
				"NCT"_s,
				u"Heure d\'été de Nouvelle-Calédonie"_s,
				"NCST"_s,
				u"Heure de Nouvelle-Calédonie"_s,
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
				"Heure de Palaos"_s,
				"PWT"_s,
				u"Heure d\'été de Palaos"_s,
				"PWST"_s,
				"Heure de Palaos"_s,
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
				u"Heure de Papouasie-Nouvelle-Guinée"_s,
				"PGT"_s,
				u"Heure d\'été de de Papouasie-Nouvelle-Guinée"_s,
				"PGST"_s,
				u"Heure de Papouasie-Nouvelle-Guinée"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				u"Heure des Îles Cook"_s,
				"CKT"_s,
				u"Heure d\'été des Îles Cook"_s,
				"CKHST"_s,
				"Heure des Iles Cook"_s,
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
				"Heure de Tahiti"_s,
				"TAHT"_s,
				u"Heure d\'été de Tahiti"_s,
				"TAHST"_s,
				"Heure de Tahiti"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				"Heure de Kiribati"_s,
				"GILT"_s,
				u"Heure d\'été de Kiribati"_s,
				"GILST"_s,
				"Heure de Kiribati"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Heure de Tonga"_s,
				"TOT"_s,
				u"Heure d\'été de Tonga"_s,
				"TOST"_s,
				"Heure de Tonga"_s,
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
				"Heure de Wake"_s,
				"WAKT"_s,
				u"Heure d\'été de Wake"_s,
				"WAKST"_s,
				"Heure de Wake"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Heure de Wallis et Futuna"_s,
				"WFT"_s,
				u"Heure d\'été de Wallis et Futuna"_s,
				"WFST"_s,
				"Heure de Wallis-et-Futuna"_s,
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

TimeZoneNames_fr::TimeZoneNames_fr() {
}

$Class* TimeZoneNames_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_fr",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_fr);
	});
	return class$;
}

$Class* TimeZoneNames_fr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun