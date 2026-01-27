#include <sun/util/resources/cldr/ext/CurrencyNames_ca.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ca",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ca_MethodInfo_
};

$Object* allocate$CurrencyNames_ca($Class* clazz) {
	return $of($alloc(CurrencyNames_ca));
}

void CurrencyNames_ca::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of("AFN"_s)
		}),
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AMD"_s),
			$of("AMD"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("AOA"_s),
			$of("AOA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AU$"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("AZN"_s),
			$of("AZN"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("BBD"_s)
		}),
		$$new($ObjectArray, {
			$of("BDT"_s),
			$of("BDT"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BHD"_s),
			$of("BHD"_s)
		}),
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("BIF"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("BRL"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BSD"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("BTN"_s)
		}),
		$$new($ObjectArray, {
			$of("BWP"_s),
			$of("BWP"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("CAD"_s)
		}),
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("CDF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNH"_s),
			$of("CNH"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of("CNY"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of("CVE"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DJF"_s),
			$of("DJF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("DOP"_s)
		}),
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DZD"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of("EGP"_s)
		}),
		$$new($ObjectArray, {
			$of("ERN"_s),
			$of("ERN"_s)
		}),
		$$new($ObjectArray, {
			$of("ESP"_s),
			$of(u"₧"_s)
		}),
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of("GHS"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("GMD"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of("IQD"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of("IRR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("JOD"_s),
			$of("JOD"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("KES"_s)
		}),
		$$new($ObjectArray, {
			$of("KGS"_s),
			$of("KGS"_s)
		}),
		$$new($ObjectArray, {
			$of("KHR"_s),
			$of("KHR"_s)
		}),
		$$new($ObjectArray, {
			$of("KMF"_s),
			$of("KMF"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("KWD"_s),
			$of("KWD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("KZT"_s),
			$of("KZT"_s)
		}),
		$$new($ObjectArray, {
			$of("LAK"_s),
			$of("LAK"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("LKR"_s),
			$of("LKR"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("LRD"_s)
		}),
		$$new($ObjectArray, {
			$of("LYD"_s),
			$of("LYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of("MAD"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("MGA"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MMK"_s),
			$of("MMK"_s)
		}),
		$$new($ObjectArray, {
			$of("MNT"_s),
			$of("MNT"_s)
		}),
		$$new($ObjectArray, {
			$of("MOP"_s),
			$of("MOP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("MUR"_s)
		}),
		$$new($ObjectArray, {
			$of("MVR"_s),
			$of("MVR"_s)
		}),
		$$new($ObjectArray, {
			$of("MWK"_s),
			$of("MWK"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("MXN"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("MYR"_s)
		}),
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MZN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of("NGN"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("NPR"_s),
			$of("NPR"_s)
		}),
		$$new($ObjectArray, {
			$of("OMR"_s),
			$of("OMR"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PGK"_s),
			$of("PGK"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of("PHP"_s)
		}),
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("QAR"_s),
			$of("QAR"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RWF"_s),
			$of("RWF"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SCR"_s),
			$of("SCR"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of("SDG"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of("SHP"_s)
		}),
		$$new($ObjectArray, {
			$of("SLL"_s),
			$of("SLL"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("SOS"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of("SSP"_s)
		}),
		$$new($ObjectArray, {
			$of("STD"_s),
			$of("STD"_s)
		}),
		$$new($ObjectArray, {
			$of("STN"_s),
			$of("STN"_s)
		}),
		$$new($ObjectArray, {
			$of("SYP"_s),
			$of("SYP"_s)
		}),
		$$new($ObjectArray, {
			$of("SZL"_s),
			$of("SZL"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"฿"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of("TJS"_s)
		}),
		$$new($ObjectArray, {
			$of("TMT"_s),
			$of("TMT"_s)
		}),
		$$new($ObjectArray, {
			$of("TND"_s),
			$of("TND"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("TOP"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TZS"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("USD"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of("UZS"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("VES"_s)
		}),
		$$new($ObjectArray, {
			$of("VUV"_s),
			$of("VUV"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("XCD"_s),
			$of("XCD"_s)
		}),
		$$new($ObjectArray, {
			$of("XXX"_s),
			$of("XXX"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("pesseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dírham de la UEA"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani afganès (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afgani afganès"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"lek albanès (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek albanès"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram armeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"florí de les Antilles Neerlandeses"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kwanza angolès"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angolès (1977–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nou kwanza angolès (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza angolès reajustat (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"austral argentí"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"peso ley argentí (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"peso argentí (1981–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentí (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"peso argentí"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"xíling austríac"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"dòlar australià"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"florí d’Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azerbaidjanès (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"manat azerbaidjanès"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"dinar de Bòsnia i Hercegovina (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marc convertible de Bòsnia i Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"nou dinar de Bòsnia i Hercegovina (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"dòlar de Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka de Bangla Desh"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franc belga (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franc belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franc belga (financer)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev fort búlgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"lev socialista búlgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lev búlgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"lev búlgar (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinar de Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franc de Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"dòlar de les Bermudes"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"dòlar de Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"bolivià"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"boliviano bolivià (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"peso bolivià"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"MVDOL bolivià"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"cruzeiro novo brasiler (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("cruzado brasiler"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brasiler (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasiler"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("cruzado novo brasiler"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro brasiler"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of("antic cruzeiro brasiler"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"dòlar de les Bahames"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum de Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"kyat birmà"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula de Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"nou ruble bielorús (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ruble bielorús"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"ruble bielorús (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dòlar de Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dòlar canadenc"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"franc congolès"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"franc suís"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("franc WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"escut xilè"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("unidad de fomento xilena"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"peso xilè"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"iuan xinès extracontinental"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"iuan xinès"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"peso colombià"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("unidad de valor real colombiana"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("colon costa-riqueny"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("dinar serbi antic"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("corona forta txecoslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"peso convertible cubà"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"peso cubà"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escut de Cap Verd"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("lliura xipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("corona txeca"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"marc de l’Alemanya Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("marc alemany"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franc de Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"peso dominicà"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"dinar algerià"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"sucre equatorià"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("unidad de valor constante (UVC) equatoriana"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("corona estoniana"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"lliura egípcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreu"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("pesseta espanyola (compte A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("pesseta espanyola (compte convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("pesseta espanyola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"birr etíop"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"marc finlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"dòlar fijià"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("lliura de les illes Malvines"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franc francès"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"lliura esterlina britànica"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"cupó de lari georgià"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"lari georgià"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi ghanès (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi ghanès"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("lliura de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"dalasi gambià"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"franc guineà"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"syli guineà"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekwele de Guinea Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("dracma grega"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemalenc"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escut de la Guinea Portuguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso de Guinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"dòlar de Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"dòlar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira hondurenya"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar croat"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"gourde haitià"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"fòrint hongarès"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"rupia indonèsia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("lliura irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("lliura israeliana"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"xéquel israelià"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nou xéquel israelià"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"rupia índia"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"dinar iraquià"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"rial iranià"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of("corona islandesa antiga"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"dòlar jamaicà"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"dinar jordà"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ien japonès"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"xíling kenyà"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"som kirguís"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"riel cambodjà"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franc de les Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won nord-coreà"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"hwan sud-coreà (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"antic won sud-coreà"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"won sud-coreà"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"dinar kuwaitià"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dòlar de les illes Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"kip laosià"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("lliura libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia de Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dòlar liberià"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti de Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"litas lituà"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"talonas lituà"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"franc convertible luxemburguès"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"franc luxemburguès"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"franc financer luxemburguès"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"lats letó"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"ruble letó"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dírham marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"franc marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("franc monegasc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"cupó moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgaix"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franc malgaix"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("denar macedoni"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"denar macedoni (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"franc malià"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat de Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"tögrög mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca de Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya maurità (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ouguiya maurità"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("lliura maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia de les Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kwacha malawià"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"peso mexicà"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso de plata mexicà (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"unidad de inversión (UDI) mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"ringgit de Malàisia"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"escut moçambiquès"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"antic metical moçambiquès"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"metical moçambiquès"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"dòlar namibià"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"naira nigerià"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"córdoba nicaragüenca"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba nicaragüenc"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"florí neerlandès"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"dòlar neozelandès"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanita"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa panameny"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"inti peruà"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"sol peruà"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruà (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina de Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"peso filipí"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("rupia pakistanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"zloty polonès"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"zloty polonès (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"escut portuguès"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaraní paraguaià"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial de Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"dòlar rhodesià"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"antic leu romanès"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"leu romanès"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("ruble rus"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"ruble rus (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franc de Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"dòlar de les illes Salomó"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia de les Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudanès"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("lliura sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("antiga lliura sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"dòlar de Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("lliura de Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tolar eslovè"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("corona eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone de Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"xíling somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"dòlar de Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"florí de Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("lliura del Sudan del Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra de São Tomé i Príncipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra de São Tomé i Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"ruble soviètic"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("colon salvadorenc"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("lliura siriana"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailandès"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("ruble tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tadjik"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turcman (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turcman"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"dinar tunisià"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa‘anga tongà"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escut de Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira turca (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"dòlar de Trinitat i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nou dòlar de Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"xíling tanzà"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"hrívnia ucraïnesa"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"karbóvanets ucraïnès"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"xíling ugandès (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"xíling ugandès"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dòlar dels Estats Units"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"dòlar dels Estats Units (dia següent)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dòlar dels Estats Units (mateix dia)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"peso uruguaià en unitats indexades"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso uruguaià (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"peso uruguaià"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolívar veneçolà (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolívar veneçolà (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar veneçolà"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"dong vietnamita (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu de Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"tala samoà"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franc CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("plata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("or"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"unitat compensatòria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"unitat monetària europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("unitat de compte europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("unitat de compte europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"dòlar del Carib Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("drets especials de gir"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("unitat de moneda europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franc or francès"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"franc UIC francès"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franc CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"pal·ladi"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"platí"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fons RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("codi reservat per a proves"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("moneda desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("dinar iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("rial iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("dinar fort iugoslau"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("nou dinar iugoslau"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("dinar convertible iugoslau"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"dinar iugoslau reformat (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"rand sud-africà (financer)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"rand sud-africà"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambià (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"kwacha zambià"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"nou zaire zairès"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"zaire zairès"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dòlar zimbabuès (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"dòlar zimbabuès (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"dòlar zimbabuès (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ca::CurrencyNames_ca() {
}

$Class* CurrencyNames_ca::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ca, name, initialize, &_CurrencyNames_ca_ClassInfo_, allocate$CurrencyNames_ca);
	return class$;
}

$Class* CurrencyNames_ca::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun