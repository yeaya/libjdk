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

$MethodInfo _TimeZoneNames_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_sv",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_sv_MethodInfo_
};

$Object* allocate$TimeZoneNames_sv($Class* clazz) {
	return $of($alloc(TimeZoneNames_sv));
}

void TimeZoneNames_sv::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_sv::getContents() {
	$useLocalCurrentObjectStackCache();
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
				"Paraguay, normaltid"_s,
				"PYT"_s,
				"Paraguay, sommartid"_s,
				"PYST"_s,
				"Paraguayansk tid"_s,
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
				"Colombia, normaltid"_s,
				"COT"_s,
				"Colombia, sommartid"_s,
				"COST"_s,
				"Kolombiansk tid"_s,
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
				"Venezuela, normaltid"_s,
				"VET"_s,
				"Venezuela, sommartid"_s,
				"VEST"_s,
				"Venezuelansk tid"_s,
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
				"Franska Guyana, normaltid"_s,
				"GFT"_s,
				"Franska Guyana, sommartid"_s,
				"GFST"_s,
				"Franska Guyana-tid"_s,
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
				"Ecuador, normaltid"_s,
				"ECT"_s,
				"Ecuador, sommartid"_s,
				"ECST"_s,
				"Ecuadoriansk tid"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				"Guyana, normaltid"_s,
				"GYT"_s,
				"Guyana, sommartid"_s,
				"GYST"_s,
				"Guyansk tid"_s,
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
				"Bolivia, normaltid"_s,
				"BOT"_s,
				"Bolivia, sommartid"_s,
				"BOST"_s,
				"Boliviansk tid"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				"Peru, normaltid"_s,
				"PET"_s,
				"Peru, sommartid"_s,
				"PEST"_s,
				"Peruansk tid"_s,
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
				"Saint-Pierre-et-Miquelon, normaltid"_s,
				"PMST"_s,
				"Saint-Pierre-et-Miquelon, sommartid"_s,
				"PMDT"_s,
				"Saint-Pierre och Miquelons tid"_s,
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
				"Uruguay, normaltid"_s,
				"UYT"_s,
				"Uruguay, sommartid"_s,
				"UYST"_s,
				"Uruguayansk tid"_s,
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
				"Surinam, normaltid"_s,
				"SRT"_s,
				"Surinam, sommartid"_s,
				"SRST"_s,
				"Surinamsk tid"_s,
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
				"Davis, normaltid"_s,
				"DAVT"_s,
				"Davis, sommartid"_s,
				"DAVST"_s,
				"Davis-tid"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				"Dumont-d\'Urville, normaltid"_s,
				"DDUT"_s,
				"Dumont-d\'Urville, sommartid"_s,
				"DDUST"_s,
				"Dumont-d\'Urville-tid"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				u"Macquarieön, normaltid"_s,
				"MIST"_s,
				u"Macquarieön, sommartid"_s,
				"MIST"_s,
				u"Macquarieön, normaltid"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				"Mawson, normaltid"_s,
				"MAWT"_s,
				"Mawson, sommartid"_s,
				"MAWST"_s,
				"Mawson-tid"_s,
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
				"Rothera, normaltid"_s,
				"ROTT"_s,
				"Rothera, sommartid"_s,
				"ROTST"_s,
				"Rothera-tid"_s,
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
				"Syowa, normaltid"_s,
				"SYOT"_s,
				"Syowa, sommartid"_s,
				"SYOST"_s,
				"Syowa-tid"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				"Koordinerad universell tid"_s,
				"UTC"_s,
				"Centraleuropeisk sommartid"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				"Vostok, normaltid"_s,
				"VOST"_s,
				"Vostok, sommartid"_s,
				"VOSST"_s,
				"Vostok-tid"_s,
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
				"Alma-Ata, normaltid"_s,
				"ALMT"_s,
				"Alma-Ata, sommartid"_s,
				"ALMST"_s,
				"Alma-Ata-tid"_s,
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
				"Anadyr, normaltid"_s,
				"ANAT"_s,
				"Anadyr, sommartid"_s,
				"ANAST"_s,
				"Anadyr-tid"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				"Aqtau, normaltid"_s,
				"AQTT"_s,
				"Aqtau, sommartid"_s,
				"AQTST"_s,
				"Aqtau-tid"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				"Aqtobe, normaltid"_s,
				"AQTT"_s,
				"Aqtobe, sommartid"_s,
				"AQTST"_s,
				"Aqtobe-tid"_s,
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
				"Azerbajdzjan, normaltid"_s,
				"AZT"_s,
				"Azerbajdzjan, sommartid"_s,
				"AZST"_s,
				"Azerbajdzjansk tid"_s,
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
				"Kirgizstan, normaltid"_s,
				"KGT"_s,
				"Kirgizstan, sommartid"_s,
				"KGST"_s,
				"Kirgizisk tid"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				"Brunei, normaltid"_s,
				"BNT"_s,
				"Brunei, sommartid"_s,
				"BNST"_s,
				"Bruneisk tid"_s,
				"BNT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of($$new($StringArray, {
				"Choibalsan, normaltid"_s,
				"CHOT"_s,
				"Choibalsan, sommartid"_s,
				"CHOST"_s,
				"Choibalsan-tid"_s,
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
			$of("Asia/Chita"_s),
			$of(YAKT)
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
				"Timor-Leste, normaltid"_s,
				"TLT"_s,
				"Timor-Leste, sommartid"_s,
				"TLST"_s,
				u"Östtimor, normaltid"_s,
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
				"Tadzjikistan, normaltid"_s,
				"TJT"_s,
				"Tadzjikistan, sommartid"_s,
				"TJST"_s,
				"Tadzjikisk tid"_s,
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
				"Hovd, normaltid"_s,
				"HOVT"_s,
				"Hovd, sommartid"_s,
				"HOVST"_s,
				"Hovd-tid"_s,
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
				u"Östindonesisk tid"_s,
				"WIT"_s,
				u"Östindonesisk sommartid"_s,
				"EIST"_s,
				u"Östindonesisk tid"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				"Afghanistan, normaltid"_s,
				"AFT"_s,
				"Afghanistan, sommartid"_s,
				"AFST"_s,
				"Afghansk tid"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				"Petropavlovsk-Kamtjatka, normaltid"_s,
				"PETT"_s,
				"Petropavlovsk-Kamtjatka, sommartid"_s,
				"PETST"_s,
				"Petropavlovsk-Kamtjatskij-tid"_s,
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
				"Magadan, normaltid"_s,
				"MAGT"_s,
				"Magadan, sommartid"_s,
				"MAGST"_s,
				"Magadan-tid"_s,
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
				"Oral, normaltid"_s,
				"ORAT"_s,
				"Oral, sommartid"_s,
				"ORAST"_s,
				"Oral-tid"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				"Omsk, normaltid"_s,
				"OMST"_s,
				"Omsk, sommartid"_s,
				"OMSST"_s,
				"Omsk-tid"_s,
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
				"Qyzylorda, normaltid"_s,
				"QYZT"_s,
				"Qyzylorda, sommartid"_s,
				"QYZST"_s,
				"Qyzylorda-tid"_s,
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
				"Sakhalin, normaltid"_s,
				"SAKT"_s,
				"Sakhalin, sommartid"_s,
				"SAKST"_s,
				"Sakhalin-tid"_s,
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
				"Georgien, normaltid"_s,
				"GET"_s,
				"Georgien, sommartid"_s,
				"GEST"_s,
				"Georgisk tid"_s,
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
				"Ust-Nera, normaltid"_s,
				"VLAT"_s,
				"Ust-Nera, sommartid"_s,
				"VLAST"_s,
				"Ust-Nera, normaltid"_s,
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
				"Vladivostok, normaltid"_s,
				"VLAT"_s,
				"Vladivostok, sommartid"_s,
				"VLAST"_s,
				"Vladivostok-tid"_s,
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
				"Jekaterinburg, normaltid"_s,
				"YEKT"_s,
				"Jekaterinburg, sommartid"_s,
				"YEKST"_s,
				"Jekaterinburg-tid"_s,
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
				"Azorerna, normaltid"_s,
				"AZOT"_s,
				"Azorerna, sommartid"_s,
				"AZOST"_s,
				"Azorerna-tid"_s,
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
				"Kap Verde, normaltid"_s,
				"CVT"_s,
				"Kap Verde, sommartid"_s,
				"CVST"_s,
				"Kap Verde-tid"_s,
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
				"Sydgeorgien, normaltid"_s,
				"GST"_s,
				"Sydgeorgien, sommartid"_s,
				"GDT"_s,
				"Sydgeorgisk tid"_s,
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
				u"Falklandsöarna, normaltid"_s,
				"FKT"_s,
				u"Falklandsöarna, sommartid"_s,
				"FKST"_s,
				u"Falklandsöarna-tid"_s,
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
				u"Central västlig normaltid (Australien)"_s,
				"ACWST"_s,
				u"Central västlig sommartid (Australien)"_s,
				"ACWDT"_s,
				u"Central västlig tid (Australien)"_s,
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
				"Samara, normaltid"_s,
				"SAMT"_s,
				"Samara, sommartid"_s,
				"SAMST"_s,
				"Samara-tid"_s,
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
				"Indiska oceanen, normaltid"_s,
				"IOT"_s,
				"Indiska oceanen, sommartid"_s,
				"IOST"_s,
				u"Indiska Oceanöarna-tid"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				u"Julön, normaltid"_s,
				"CXT"_s,
				u"Julön, sommartid"_s,
				"CXST"_s,
				u"Julön-tid"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				u"Cocos-Keelingöarna, normaltid"_s,
				"CCT"_s,
				u"Cocos-Keelingöarna, sommartid"_s,
				"CCST"_s,
				u"Kokosöarna-tid"_s,
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
				u"Franska södra och antarktiska områdena, normaltid"_s,
				"TFT"_s,
				u"Franska södra och antarktiska områdena, sommartid"_s,
				"TFST"_s,
				u"Franska södra och antarktiska öarna-tid"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				"Seychellerna, normaltid"_s,
				"SCT"_s,
				"Seychellerna, sommartid"_s,
				"SCST"_s,
				"Seychellisk tid"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				"Maldiverna, normaltid"_s,
				"MVT"_s,
				"Maldiverna, sommartid"_s,
				"MVST"_s,
				"Maldivisk tid"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				"Mauritius, normaltid"_s,
				"MUT"_s,
				"Mauritius, sommartid"_s,
				"MUST"_s,
				"Mauritiansk tid"_s,
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
				"Reunion, normaltid"_s,
				"RET"_s,
				"Reunion, sommartid"_s,
				"REST"_s,
				"Reunion-tid"_s,
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
				"Mellaneuropeisk tid"_s,
				"MET"_s,
				"Mellaneuropeisk sommartid"_s,
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
				"Vanuatu, normaltid"_s,
				"VUT"_s,
				"Vanuatu, sommartid"_s,
				"VUST"_s,
				"Vanuatu-tid"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				u"Phoenix-öarna, normaltid"_s,
				"PHOT"_s,
				u"Phoenix-öarna, sommartid"_s,
				"PHOST"_s,
				u"Phoenixöarna-tid"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				"Tokelau, normaltid"_s,
				"TKT"_s,
				"Tokelau, sommartid"_s,
				"TKST"_s,
				"Tokelau-tid"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				"Fiji, normaltid"_s,
				"FJT"_s,
				"Fiji, sommartid"_s,
				"FJST"_s,
				"Fijiansk tid"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				"Tuvalu, normaltid"_s,
				"TVT"_s,
				"Tuvalu, sommartid"_s,
				"TVST"_s,
				"Tuvalu-tid"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				"Galapagos, normaltid"_s,
				"GALT"_s,
				"Galapagos, sommartid"_s,
				"GALST"_s,
				"Galapagos-tid"_s,
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
				u"Line-öarna, normaltid"_s,
				"LINT"_s,
				u"Line-öarna, sommartid"_s,
				"LINST"_s,
				"Line Islands-tid"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				"Kosrae, normaltid"_s,
				"KOST"_s,
				"Kosrae, sommartid"_s,
				"KOSST"_s,
				"Kosrae-tid"_s,
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
				"Marquesas, normaltid"_s,
				"MART"_s,
				"Marquesas, sommartid"_s,
				"MARST"_s,
				u"Marquesasöarna-tid"_s,
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
				"Nauru, normaltid"_s,
				"NRT"_s,
				"Nauru, sommartid"_s,
				"NRST"_s,
				"Nauruansk tid"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				"Niue, normaltid"_s,
				"NUT"_s,
				"Niue, sommartid"_s,
				"NUST"_s,
				"Niue-tid"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				"Norfolk, normaltid"_s,
				"NFT"_s,
				"Norfolk, sommartid"_s,
				"NFST"_s,
				"Norfolk-tid"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				"Nya Caledonien, normaltid"_s,
				"NCT"_s,
				"Nya Caledonien, sommartid"_s,
				"NCST"_s,
				"Nya Kaledonien-tid"_s,
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
				"Palau, normaltid"_s,
				"PWT"_s,
				"Palau, sommartid"_s,
				"PWST"_s,
				"Palau-tid"_s,
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
				"Papua Nya Guinea, normaltid"_s,
				"PGT"_s,
				"Papua Nya Guinea, sommartid"_s,
				"PGST"_s,
				"Papua Nya Guinea-tid"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				u"Cooköarna, normaltid"_s,
				"CKT"_s,
				u"Cooköarna, sommartid"_s,
				"CKHST"_s,
				u"Cooköarna-tid"_s,
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
				"Tahiti, normaltid"_s,
				"TAHT"_s,
				"Tahiti, sommartid"_s,
				"TAHST"_s,
				"Tahiti-tid"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				u"Gilbertöarna, normaltid"_s,
				"GILT"_s,
				u"Gilbertöarna, sommartid"_s,
				"GILST"_s,
				u"Gilbertöarna-tid"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				"Tonga, normaltid"_s,
				"TOT"_s,
				"Tonga, sommartid"_s,
				"TOST"_s,
				"Tonga-tid"_s,
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
				"Wake, normaltid"_s,
				"WAKT"_s,
				"Wake, sommartid"_s,
				"WAKST"_s,
				"Wake-tid"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				"Wallis & Futuna, normaltid"_s,
				"WFT"_s,
				"Wallis & Futuna, sommartid"_s,
				"WFST"_s,
				u"Wallis- och Futunaöarna-tid"_s,
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

TimeZoneNames_sv::TimeZoneNames_sv() {
}

$Class* TimeZoneNames_sv::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_sv, name, initialize, &_TimeZoneNames_sv_ClassInfo_, allocate$TimeZoneNames_sv);
	return class$;
}

$Class* TimeZoneNames_sv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun