#include <sun/util/resources/ext/TimeZoneNames_sv.h>
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

void TimeZoneNames_sv::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_sv::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		"Acre, normaltid"_s,
		"ACT"_s,
		"Acre, sommartid"_s,
		"ACST"_s,
		"Acre, normaltid"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		"Central standardtid (Sydaustralien)"_s,
		"ACST"_s,
		"Central sommartid (South Australia)"_s,
		"ACDT"_s,
		"Central tid (Sydaustralien)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Argentina, normaltid"_s,
		"ART"_s,
		"Argentina, sommartid"_s,
		"ARST"_s,
		"Argentinsk tid"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		"Alaska, normaltid"_s,
		"AKST"_s,
		"Alaska, sommartid"_s,
		"AKDT"_s,
		"Alaskisk tid"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		"Amazonas, normaltid"_s,
		"AMT"_s,
		"Amazonas, sommartid"_s,
		"AMST"_s,
		"Amazonas-tid"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		"Arabisk normaltid"_s,
		"AST"_s,
		"Arabisk sommartid"_s,
		"ADT"_s,
		"Arabisk tid"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		"Armenien, normaltid"_s,
		"AMT"_s,
		"Armenien, sommartid"_s,
		"AMST"_s,
		"Armenisk tid"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		"Atlantisk normaltid"_s,
		"AST"_s,
		"Atlantisk sommartid"_s,
		"ADT"_s,
		"Atlantisk tid"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Bangladesh, normaltid"_s,
		"BDT"_s,
		"Bangladesh, sommartid"_s,
		"BDST"_s,
		"Bangladeshisk tid"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"Östlig standardtid (Queensland)"_s,
		"AEST"_s,
		u"Östlig sommartid (Queensland)"_s,
		"AEDT"_s,
		u"Östlig tid (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		"Central standardtid (Sydaustralien/New South Wales)"_s,
		"ACST"_s,
		"Central sommartid (South Australia/New South Wales)"_s,
		"ACDT"_s,
		"Central tid (Sydaustralien/New South Wales)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		"Brasilien, normaltid"_s,
		"BRT"_s,
		"Brasilien, sommartid"_s,
		"BRST"_s,
		"Brasiliansk tid"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		"Bhutan, normaltid"_s,
		"BTT"_s,
		"Bhutan, sommartid"_s,
		"BTST"_s,
		"Bhutanesisk tid"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		"Centralafrikansk tid"_s,
		"CAT"_s,
		"Centralafrikansk sommartid"_s,
		"CAST"_s,
		"Centralafrikansk tid"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		"Centraleuropeisk tid"_s,
		"CET"_s,
		"Centraleuropeisk sommartid"_s,
		"CEST"_s,
		"Centraleuropeisk tid"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		"Chatham, normaltid"_s,
		"CHAST"_s,
		"Chatham, sommartid"_s,
		"CHADT"_s,
		"Chathams tid"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Chuuk, normaltid"_s,
		"CHUT"_s,
		"Chuuk, sommartid"_s,
		"CHUST"_s,
		"Chuuk, normaltid"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		"Centralindonesisk tid"_s,
		"WITA"_s,
		"Centralindonesisk sommartid"_s,
		"CIST"_s,
		"Centralindonesisk tid"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Chile, normaltid"_s,
		"CLT"_s,
		"Chile, sommartid"_s,
		"CLST"_s,
		"Chilensk tid"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		"Central normaltid"_s,
		"CST"_s,
		"Central sommartid"_s,
		"CDT"_s,
		"Central tid"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		"Kina, normaltid"_s,
		"CST"_s,
		"Kina, sommartid"_s,
		"CDT"_s,
		"Kinesisk tid"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		"Kuba, normaltid"_s,
		"CST"_s,
		"Kuba, sommartid"_s,
		"CDT"_s,
		"Kubansk tid"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		"Central standardtid (Nordterritoriet)"_s,
		"ACST"_s,
		"Central sommartid (Nordterritoriet)"_s,
		"ACDT"_s,
		"Central tid (Nordterritoriet)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		"Greenwichtid"_s,
		"GMT"_s,
		"Irland, sommartid"_s,
		"IST"_s,
		u"Irländsk tid"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"Östafrikansk tid"_s,
		"EAT"_s,
		u"Östafrikansk sommartid"_s,
		"EAST"_s,
		u"Östafrikansk tid"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"Påskön, normaltid"_s,
		"EAST"_s,
		u"Påskön, sommartid"_s,
		"EASST"_s,
		u"Påskön-tid"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"Östeuropeisk tid"_s,
		"EET"_s,
		u"Östeuropeisk sommartid"_s,
		"EEST"_s,
		u"Östeuropeisk tid"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"Östgrönländsk tid"_s,
		"EGT"_s,
		u"Östgrönländsk sommartid"_s,
		"EGST"_s,
		u"Östgrönländsk tid"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		"Eastern, normaltid"_s,
		"EST"_s,
		"Eastern, sommartid"_s,
		"EDT"_s,
		u"Östlig tid"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"Östlig standardtid (New South Wales)"_s,
		"AEST"_s,
		u"Östlig sommartid (New South Wales)"_s,
		"AEDT"_s,
		u"Östlig tid (New South Wales)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		"Kaliningradtid"_s,
		"FET"_s,
		u"Östeuropeisk sommartid"_s,
		"FEST"_s,
		"Kaliningradtid"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Ghana, normaltid"_s,
		"GMT"_s,
		"Ghana, sommartid"_s,
		"GHST"_s,
		"Ghana, normaltid"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Gambier, normaltid"_s,
		"GAMT"_s,
		"Gambier, sommartid"_s,
		"GAMST"_s,
		u"Gambieröarna-tid"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Greenwichtid"_s,
		"GMT"_s,
		"Greenwichtid"_s,
		"GMT"_s,
		"Greenwichtid"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		"Greenwichtid"_s,
		"GMT"_s,
		"Brittisk sommartid"_s,
		"BST"_s,
		"Brittisk tid"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		"Gulf-normaltid"_s,
		"GST"_s,
		"Gulf-sommartid"_s,
		"GDT"_s,
		"Golfens tid"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Hong Kong, normaltid"_s,
		"HKT"_s,
		"Hong Kong, sommartid"_s,
		"HKST"_s,
		"Hongkong-tid"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		"Hawaii, normaltid"_s,
		"HST"_s,
		"Hawaii, sommartid"_s,
		"HDT"_s,
		"Hawaiiansk tid"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Indokinesisk tid"_s,
		"ICT"_s,
		"Indokinesisk sommartid"_s,
		"ICST"_s,
		"Indokinesisk tid"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Irkutsk, normaltid"_s,
		"IRKT"_s,
		"Irkutsk, sommartid"_s,
		"IRKST"_s,
		"Irkutsk-tid"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		"Iran, normaltid"_s,
		"IRST"_s,
		"Iran, sommartid"_s,
		"IRDT"_s,
		"Iransk tid"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		"Israel, normaltid"_s,
		"IST"_s,
		"Israel, sommartid"_s,
		"IDT"_s,
		"Israelisk tid"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		"Indien, normaltid"_s,
		"IST"_s,
		"Indien, sommartid"_s,
		"IDT"_s,
		"Indisk tid"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		"Japan, normaltid"_s,
		"JST"_s,
		"Japan, sommartid"_s,
		"JDT"_s,
		"Japansk tid"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		"Krasnojarsk, normaltid"_s,
		"KRAT"_s,
		"Krasnojarsk, sommartid"_s,
		"KRAST"_s,
		"Krasnojarsk-tid"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		"Korea, normaltid"_s,
		"KST"_s,
		"Korea, sommartid"_s,
		"KDT"_s,
		"Koreansk tid"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		"Lord Howe, normaltid"_s,
		"LHST"_s,
		"Lord Howe, sommartid"_s,
		"LHDT"_s,
		"Lord Howe-tid"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"Marshallöarna, normaltid"_s,
		"MHT"_s,
		u"Marshallöarna, sommartid"_s,
		"MHST"_s,
		u"Marshallöarna-tid"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Myanmar, normaltid"_s,
		"MMT"_s,
		"Myanmar, sommartid"_s,
		"MMST"_s,
		"Myanmar-tid"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		"Moskva, normaltid"_s,
		"MSK"_s,
		"Moskva, sommartid"_s,
		"MSD"_s,
		"Moskvas tid"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		"Mountain, normaltid"_s,
		"MST"_s,
		"Mountain, sommartid"_s,
		"MDT"_s,
		"Mountain-tid"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Malaysia, normaltid"_s,
		"MYT"_s,
		"Malaysia, sommartid"_s,
		"MYST"_s,
		"Malaysisk tid"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Fernando de Noronha, normaltid"_s,
		"FNT"_s,
		"Fernando de Noronha, sommartid"_s,
		"FNST"_s,
		"Fernando de Noronha-tid"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Novosibirsk, normaltid"_s,
		"NOVT"_s,
		"Novosibirsk, sommartid"_s,
		"NOVST"_s,
		"Sibirisk tid"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		"Nepal, normaltid"_s,
		"NPT"_s,
		"Nepal, sommartid"_s,
		"NPST"_s,
		"Nepalesisk tid"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		"Newfoundland, normaltid"_s,
		"NST"_s,
		"Newfoundland, sommartid"_s,
		"NDT"_s,
		u"Newfoundländsk tid"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		"Nya Zeeland, normaltid"_s,
		"NZST"_s,
		"Nya Zeeland, sommartid"_s,
		"NZDT"_s,
		u"Nyzeeländsk tid"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		"Pitcairn, normaltid"_s,
		"PST"_s,
		"Pitcairn, sommartid"_s,
		"PDT"_s,
		"Pitcairn-tid"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		"Pakistan, normaltid"_s,
		"PKT"_s,
		"Pakistan, sommartid"_s,
		"PKST"_s,
		"Pakistansk tid"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Pohnpei, normaltid"_s,
		"PONT"_s,
		"Pohnpei, sommartid"_s,
		"PONST"_s,
		"Ponape-tid"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		"Stilla havet, normaltid"_s,
		"PST"_s,
		"Stilla havet, sommartid"_s,
		"PDT"_s,
		"Stillahavet"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		"Sydafrika, normaltid"_s,
		"SAST"_s,
		"Sydafrika, sommartid"_s,
		"SAST"_s,
		"Sydafrikansk tid"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"Salomonöarna, normaltid"_s,
		"SBT"_s,
		u"Salomonöarna, sommartid"_s,
		"SBST"_s,
		u"Salomonöarna-tid"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Singapore, normaltid"_s,
		"SGT"_s,
		"Singapore, sommartid"_s,
		"SGST"_s,
		"Singapore-tid"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"Östlig standardtid (Tasmania)"_s,
		"AEST"_s,
		u"Östlig sommartid (Tasmanien)"_s,
		"AEDT"_s,
		u"Östlig tid (Tasmania)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		"Turkmenistan, normaltid"_s,
		"TMT"_s,
		"Turkmenistan, sommartid"_s,
		"TMST"_s,
		"Turkmensk tid"_s,
		"TMT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Ulaanbaatar, normaltid"_s,
		"ULAT"_s,
		"Ulaanbaatar, sommartid"_s,
		"ULAST"_s,
		"Ulaanbaatar-tid"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"Västafrikansk tid"_s,
		"WAT"_s,
		u"Västafrikansk sommartid"_s,
		"WAST"_s,
		u"Västafrikansk tid"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"Västeuropeisk tid"_s,
		"WET"_s,
		u"Västeuropeisk sommartid"_s,
		"WEST"_s,
		u"Västeuropeisk tid"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"Västra Grönland, normaltid"_s,
		"WGT"_s,
		u"Västra Grönland, sommartid"_s,
		"WGST"_s,
		u"Västgrönländsk tid"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"Västindonesisk tid"_s,
		"WIB"_s,
		u"Västindonesisk sommartid"_s,
		"WIST"_s,
		u"Västindonesisk tid"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		"Western Standard Time (Australien)"_s,
		"AWST"_s,
		u"Västlig sommartid (Australien)"_s,
		"AWDT"_s,
		u"Västlig tid (Australien)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		"Samoa, normaltid"_s,
		"SST"_s,
		"Samoa, sommartid"_s,
		"SDT"_s,
		"Samoansk tid"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"Västsamoansk tid"_s,
		"WSST"_s,
		u"Västsamoansk sommartid"_s,
		"WSDT"_s,
		u"Västsamoansk tid"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		"Chamorro, normaltid"_s,
		"ChST"_s,
		"Chamorro, sommartid"_s,
		"ChDT"_s,
		"Chamorros tid"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"Östlig standardtid (Victoria)"_s,
		"AEST"_s,
		u"Östlig sommartid (Victoria)"_s,
		"AEDT"_s,
		u"Östlig tid (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Koordinerad universell tid"_s,
		"UTC"_s,
		"Koordinerad universell tid"_s,
		"UTC"_s,
		u"UTC (koordinerad världstid)"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		"Uzbekistan, normaltid"_s,
		"UZT"_s,
		"Uzbekistan, sommartid"_s,
		"UZST"_s,
		"Uzbekisk tid"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		"Kina, normaltid"_s,
		"XJT"_s,
		"Kina, sommartid"_s,
		"XJDT"_s,
		"Kinesisk tid"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Jakutsk, normaltid"_s,
		"YAKT"_s,
		"Jakutsk, sommartid"_s,
		"YAKST"_s,
		"Jakutsk-tid"_s,
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
				"Paraguay, normaltid"_s,
				"PYT"_s,
				"Paraguay, sommartid"_s,
				"PYST"_s,
				"Paraguayansk tid"_s,
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
				"Colombia, normaltid"_s,
				"COT"_s,
				"Colombia, sommartid"_s,
				"COST"_s,
				"Kolombiansk tid"_s,
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
				"Venezuela, normaltid"_s,
				"VET"_s,
				"Venezuela, sommartid"_s,
				"VEST"_s,
				"Venezuelansk tid"_s,
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
				"Franska Guyana, normaltid"_s,
				"GFT"_s,
				"Franska Guyana, sommartid"_s,
				"GFST"_s,
				"Franska Guyana-tid"_s,
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
				"Ecuador, normaltid"_s,
				"ECT"_s,
				"Ecuador, sommartid"_s,
				"ECST"_s,
				"Ecuadoriansk tid"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Guyana, normaltid"_s,
				"GYT"_s,
				"Guyana, sommartid"_s,
				"GYST"_s,
				"Guyansk tid"_s,
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
				"Bolivia, normaltid"_s,
				"BOT"_s,
				"Bolivia, sommartid"_s,
				"BOST"_s,
				"Boliviansk tid"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				"Peru, normaltid"_s,
				"PET"_s,
				"Peru, sommartid"_s,
				"PEST"_s,
				"Peruansk tid"_s,
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
				"Saint-Pierre-et-Miquelon, normaltid"_s,
				"PMST"_s,
				"Saint-Pierre-et-Miquelon, sommartid"_s,
				"PMDT"_s,
				"Saint-Pierre och Miquelons tid"_s,
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
				"Uruguay, normaltid"_s,
				"UYT"_s,
				"Uruguay, sommartid"_s,
				"UYST"_s,
				"Uruguayansk tid"_s,
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
				"Surinam, normaltid"_s,
				"SRT"_s,
				"Surinam, sommartid"_s,
				"SRST"_s,
				"Surinamsk tid"_s,
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
				"Davis, normaltid"_s,
				"DAVT"_s,
				"Davis, sommartid"_s,
				"DAVST"_s,
				"Davis-tid"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Dumont-d\'Urville, normaltid"_s,
				"DDUT"_s,
				"Dumont-d\'Urville, sommartid"_s,
				"DDUST"_s,
				"Dumont-d\'Urville-tid"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				u"Macquarieön, normaltid"_s,
				"MIST"_s,
				u"Macquarieön, sommartid"_s,
				"MIST"_s,
				u"Macquarieön, normaltid"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Mawson, normaltid"_s,
				"MAWT"_s,
				"Mawson, sommartid"_s,
				"MAWST"_s,
				"Mawson-tid"_s,
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
				"Rothera, normaltid"_s,
				"ROTT"_s,
				"Rothera, sommartid"_s,
				"ROTST"_s,
				"Rothera-tid"_s,
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
				"Syowa, normaltid"_s,
				"SYOT"_s,
				"Syowa, sommartid"_s,
				"SYOST"_s,
				"Syowa-tid"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				"Koordinerad universell tid"_s,
				"UTC"_s,
				"Centraleuropeisk sommartid"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Vostok, normaltid"_s,
				"VOST"_s,
				"Vostok, sommartid"_s,
				"VOSST"_s,
				"Vostok-tid"_s,
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
				"Alma-Ata, normaltid"_s,
				"ALMT"_s,
				"Alma-Ata, sommartid"_s,
				"ALMST"_s,
				"Alma-Ata-tid"_s,
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
				"Anadyr, normaltid"_s,
				"ANAT"_s,
				"Anadyr, sommartid"_s,
				"ANAST"_s,
				"Anadyr-tid"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Aqtau, normaltid"_s,
				"AQTT"_s,
				"Aqtau, sommartid"_s,
				"AQTST"_s,
				"Aqtau-tid"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Aqtobe, normaltid"_s,
				"AQTT"_s,
				"Aqtobe, sommartid"_s,
				"AQTST"_s,
				"Aqtobe-tid"_s,
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
				"Azerbajdzjan, normaltid"_s,
				"AZT"_s,
				"Azerbajdzjan, sommartid"_s,
				"AZST"_s,
				"Azerbajdzjansk tid"_s,
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
				"Kirgizstan, normaltid"_s,
				"KGT"_s,
				"Kirgizstan, sommartid"_s,
				"KGST"_s,
				"Kirgizisk tid"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Brunei, normaltid"_s,
				"BNT"_s,
				"Brunei, sommartid"_s,
				"BNST"_s,
				"Bruneisk tid"_s,
				"BNT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			$$new($StringArray, {
				"Choibalsan, normaltid"_s,
				"CHOT"_s,
				"Choibalsan, sommartid"_s,
				"CHOST"_s,
				"Choibalsan-tid"_s,
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
			"Asia/Chita"_s,
			YAKT
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
				"Timor-Leste, normaltid"_s,
				"TLT"_s,
				"Timor-Leste, sommartid"_s,
				"TLST"_s,
				u"Östtimor, normaltid"_s,
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
				"Tadzjikistan, normaltid"_s,
				"TJT"_s,
				"Tadzjikistan, sommartid"_s,
				"TJST"_s,
				"Tadzjikisk tid"_s,
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
				"Hovd, normaltid"_s,
				"HOVT"_s,
				"Hovd, sommartid"_s,
				"HOVST"_s,
				"Hovd-tid"_s,
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
				u"Östindonesisk tid"_s,
				"WIT"_s,
				u"Östindonesisk sommartid"_s,
				"EIST"_s,
				u"Östindonesisk tid"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				"Afghanistan, normaltid"_s,
				"AFT"_s,
				"Afghanistan, sommartid"_s,
				"AFST"_s,
				"Afghansk tid"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Petropavlovsk-Kamtjatka, normaltid"_s,
				"PETT"_s,
				"Petropavlovsk-Kamtjatka, sommartid"_s,
				"PETST"_s,
				"Petropavlovsk-Kamtjatskij-tid"_s,
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
				"Magadan, normaltid"_s,
				"MAGT"_s,
				"Magadan, sommartid"_s,
				"MAGST"_s,
				"Magadan-tid"_s,
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
				"Oral, normaltid"_s,
				"ORAT"_s,
				"Oral, sommartid"_s,
				"ORAST"_s,
				"Oral-tid"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Omsk, normaltid"_s,
				"OMST"_s,
				"Omsk, sommartid"_s,
				"OMSST"_s,
				"Omsk-tid"_s,
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
				"Qyzylorda, normaltid"_s,
				"QYZT"_s,
				"Qyzylorda, sommartid"_s,
				"QYZST"_s,
				"Qyzylorda-tid"_s,
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
				"Sakhalin, normaltid"_s,
				"SAKT"_s,
				"Sakhalin, sommartid"_s,
				"SAKST"_s,
				"Sakhalin-tid"_s,
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
				"Georgien, normaltid"_s,
				"GET"_s,
				"Georgien, sommartid"_s,
				"GEST"_s,
				"Georgisk tid"_s,
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
				"Ust-Nera, normaltid"_s,
				"VLAT"_s,
				"Ust-Nera, sommartid"_s,
				"VLAST"_s,
				"Ust-Nera, normaltid"_s,
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
				"Vladivostok, normaltid"_s,
				"VLAT"_s,
				"Vladivostok, sommartid"_s,
				"VLAST"_s,
				"Vladivostok-tid"_s,
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
				"Jekaterinburg, normaltid"_s,
				"YEKT"_s,
				"Jekaterinburg, sommartid"_s,
				"YEKST"_s,
				"Jekaterinburg-tid"_s,
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
				"Azorerna, normaltid"_s,
				"AZOT"_s,
				"Azorerna, sommartid"_s,
				"AZOST"_s,
				"Azorerna-tid"_s,
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
				"Kap Verde, normaltid"_s,
				"CVT"_s,
				"Kap Verde, sommartid"_s,
				"CVST"_s,
				"Kap Verde-tid"_s,
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
				"Sydgeorgien, normaltid"_s,
				"GST"_s,
				"Sydgeorgien, sommartid"_s,
				"GDT"_s,
				"Sydgeorgisk tid"_s,
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
				u"Falklandsöarna, normaltid"_s,
				"FKT"_s,
				u"Falklandsöarna, sommartid"_s,
				"FKST"_s,
				u"Falklandsöarna-tid"_s,
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
				u"Central västlig normaltid (Australien)"_s,
				"ACWST"_s,
				u"Central västlig sommartid (Australien)"_s,
				"ACWDT"_s,
				u"Central västlig tid (Australien)"_s,
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
				"Samara, normaltid"_s,
				"SAMT"_s,
				"Samara, sommartid"_s,
				"SAMST"_s,
				"Samara-tid"_s,
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
				"Indiska oceanen, normaltid"_s,
				"IOT"_s,
				"Indiska oceanen, sommartid"_s,
				"IOST"_s,
				u"Indiska Oceanöarna-tid"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				u"Julön, normaltid"_s,
				"CXT"_s,
				u"Julön, sommartid"_s,
				"CXST"_s,
				u"Julön-tid"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				u"Cocos-Keelingöarna, normaltid"_s,
				"CCT"_s,
				u"Cocos-Keelingöarna, sommartid"_s,
				"CCST"_s,
				u"Kokosöarna-tid"_s,
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
				u"Franska södra och antarktiska områdena, normaltid"_s,
				"TFT"_s,
				u"Franska södra och antarktiska områdena, sommartid"_s,
				"TFST"_s,
				u"Franska södra och antarktiska öarna-tid"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Seychellerna, normaltid"_s,
				"SCT"_s,
				"Seychellerna, sommartid"_s,
				"SCST"_s,
				"Seychellisk tid"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Maldiverna, normaltid"_s,
				"MVT"_s,
				"Maldiverna, sommartid"_s,
				"MVST"_s,
				"Maldivisk tid"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Mauritius, normaltid"_s,
				"MUT"_s,
				"Mauritius, sommartid"_s,
				"MUST"_s,
				"Mauritiansk tid"_s,
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
				"Reunion, normaltid"_s,
				"RET"_s,
				"Reunion, sommartid"_s,
				"REST"_s,
				"Reunion-tid"_s,
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
				"Mellaneuropeisk tid"_s,
				"MET"_s,
				"Mellaneuropeisk sommartid"_s,
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
				"Vanuatu, normaltid"_s,
				"VUT"_s,
				"Vanuatu, sommartid"_s,
				"VUST"_s,
				"Vanuatu-tid"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				u"Phoenix-öarna, normaltid"_s,
				"PHOT"_s,
				u"Phoenix-öarna, sommartid"_s,
				"PHOST"_s,
				u"Phoenixöarna-tid"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Tokelau, normaltid"_s,
				"TKT"_s,
				"Tokelau, sommartid"_s,
				"TKST"_s,
				"Tokelau-tid"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Fiji, normaltid"_s,
				"FJT"_s,
				"Fiji, sommartid"_s,
				"FJST"_s,
				"Fijiansk tid"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Tuvalu, normaltid"_s,
				"TVT"_s,
				"Tuvalu, sommartid"_s,
				"TVST"_s,
				"Tuvalu-tid"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				"Galapagos, normaltid"_s,
				"GALT"_s,
				"Galapagos, sommartid"_s,
				"GALST"_s,
				"Galapagos-tid"_s,
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
				u"Line-öarna, normaltid"_s,
				"LINT"_s,
				u"Line-öarna, sommartid"_s,
				"LINST"_s,
				"Line Islands-tid"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Kosrae, normaltid"_s,
				"KOST"_s,
				"Kosrae, sommartid"_s,
				"KOSST"_s,
				"Kosrae-tid"_s,
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
				"Marquesas, normaltid"_s,
				"MART"_s,
				"Marquesas, sommartid"_s,
				"MARST"_s,
				u"Marquesasöarna-tid"_s,
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
				"Nauru, normaltid"_s,
				"NRT"_s,
				"Nauru, sommartid"_s,
				"NRST"_s,
				"Nauruansk tid"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Niue, normaltid"_s,
				"NUT"_s,
				"Niue, sommartid"_s,
				"NUST"_s,
				"Niue-tid"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Norfolk, normaltid"_s,
				"NFT"_s,
				"Norfolk, sommartid"_s,
				"NFST"_s,
				"Norfolk-tid"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				"Nya Caledonien, normaltid"_s,
				"NCT"_s,
				"Nya Caledonien, sommartid"_s,
				"NCST"_s,
				"Nya Kaledonien-tid"_s,
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
				"Palau, normaltid"_s,
				"PWT"_s,
				"Palau, sommartid"_s,
				"PWST"_s,
				"Palau-tid"_s,
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
				"Papua Nya Guinea, normaltid"_s,
				"PGT"_s,
				"Papua Nya Guinea, sommartid"_s,
				"PGST"_s,
				"Papua Nya Guinea-tid"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				u"Cooköarna, normaltid"_s,
				"CKT"_s,
				u"Cooköarna, sommartid"_s,
				"CKHST"_s,
				u"Cooköarna-tid"_s,
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
				"Tahiti, normaltid"_s,
				"TAHT"_s,
				"Tahiti, sommartid"_s,
				"TAHST"_s,
				"Tahiti-tid"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				u"Gilbertöarna, normaltid"_s,
				"GILT"_s,
				u"Gilbertöarna, sommartid"_s,
				"GILST"_s,
				u"Gilbertöarna-tid"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Tonga, normaltid"_s,
				"TOT"_s,
				"Tonga, sommartid"_s,
				"TOST"_s,
				"Tonga-tid"_s,
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
				"Wake, normaltid"_s,
				"WAKT"_s,
				"Wake, sommartid"_s,
				"WAKST"_s,
				"Wake-tid"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Wallis & Futuna, normaltid"_s,
				"WFT"_s,
				"Wallis & Futuna, sommartid"_s,
				"WFST"_s,
				u"Wallis- och Futunaöarna-tid"_s,
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

TimeZoneNames_sv::TimeZoneNames_sv() {
}

$Class* TimeZoneNames_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_sv",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_sv);
	});
	return class$;
}

$Class* TimeZoneNames_sv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun