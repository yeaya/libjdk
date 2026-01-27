#include <sun/util/resources/cldr/ext/CurrencyNames_hu.h>

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

$MethodInfo _CurrencyNames_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_hu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hu_MethodInfo_
};

$Object* allocate$CurrencyNames_hu($Class* clazz) {
	return $of($alloc(CurrencyNames_hu));
}

void CurrencyNames_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_hu::getContents() {
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
			$of("AUD"_s)
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
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
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
			$of("GBP"_s),
			$of("GBP"_s)
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
			$of("HKD"_s),
			$of("HKD"_s)
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
			$of("Ft"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
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
			$of("KRW"_s),
			$of("KRW"_s)
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
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
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
			$of("NZD"_s),
			$of("NZD"_s)
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
			$of("THB"_s)
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
			$of("TWD"_s),
			$of("TWD"_s)
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
			$of("VND"_s),
			$of("VND"_s)
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
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMK"_s),
			$of("ZMK"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorrai peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("EAE-dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgán afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afgán afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"albán lek (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"albán lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"örmény dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"holland antilláki forint"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolai kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolai kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolai új kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolai kwanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Argentín austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentín peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentin peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Osztrák schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ausztrál dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubai florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajdzsáni manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajdzsáni manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosznia-hercegovinai dínár (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"bosznia-hercegovinai konvertibilis márka"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"bosznia-hercegovinai új dínár (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"barbadosi dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladesi taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belga frank (konvertibilis)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belga frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Belga frank (pénzügyi)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Bolgár kemény leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"bolgár szocialista leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bolgár új leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"bolgár leva (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"bahreini dinár"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"bermudai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"brunei dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"bolíviai boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Bolíviai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Bolíviai mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brazi cruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brazi cruzado (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brazil cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brazil real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brazil cruzado novo (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brazil cruzeiro (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"bahamai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"bhutáni ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Burmai kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswanai pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Fehérorosz új rubel (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("belarusz rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"fehérorosz rubel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"belize-i dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"kanadai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kongói frank"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"svájci frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR frank"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Chilei unidades de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilei peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"kínai jüan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"kínai jüan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbiai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidad de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Costa Rica-i colon"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"szerb dinár"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Csehszlovák kemény korona"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("kubai konvertibilis peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Zöld-foki escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Ciprusi font"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("cseh korona"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Kelet-Német márka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Német márka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("dzsibuti frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"dán korona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikai peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"algériai dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadori sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ecuadori Unidad de Valor Constante (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Észt korona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyiptomi font"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreai nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"spanyol peseta (A–kontó)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"spanyol peseta (konvertibilis kontó)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spanyol peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"etiópiai birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"euró"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finn markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fidzsi dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falkland-szigeteki font"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Francia frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("angol font"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Grúz kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"grúz lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ghánai cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ghánai cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"gibraltári font"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambiai dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineai frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guineai syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Egyenlítői-guineai ekwele guineana"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Görög drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalai quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Portugál guinea escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissaui peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"guyanai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"hongkongi dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("hodurasi lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Horvát dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"horvát kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haiti gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("magyar forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"indonéz rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ír font"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Izraeli font"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"izraeli új sékel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"indiai rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"iraki dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"iráni rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("izlandi korona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Olasz líra"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"jamaicai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"jordániai dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"japán jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"kirgizisztáni szom"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodzsai riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("comorei frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"észak-koreai won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"dél-koreai won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"kuvaiti dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"kajmán-szigeteki dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"kazahsztáni tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laoszi kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanoni font"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Srí Lanka-i rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"libériai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesothoi loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"litvániai litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Litvániai talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("luxemburgi konvertibilis frank"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxemburgi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"luxemburgi pénzügyi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lett lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Lett rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"líbiai dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"marokkói dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Marokkói frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"moldáv kupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"moldován lei"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"madagaszkári ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Madagaszkári frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"macedon dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"macedón dénár (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Mali frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("mianmari kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"mongóliai tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"makaói pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mauritániai ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"mauritániai ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Máltai líra"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Máltai font"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"mauritiusi rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"maldív-szigeteki rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawi kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"mexikói peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexikói ezüst peso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Mexikói Unidad de Inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malajziai ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambik escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambik metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mozambiki metikális"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"namíbiai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nigériai naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Nikaraguai cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nicaraguai córdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Holland forint"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"norvég korona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"nepáli rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"új-zélandi dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ománi rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamai balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("perui inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("perui sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"perui sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"pápua új-guineai kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"fülöp-szigeteki peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"pakisztáni rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("lengyel zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Lengyel zloty (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Portugál escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayi guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katari rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"rhodéziai dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"román lej (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"román lej"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"szerb dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("orosz rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"orosz rubel (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandai frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"szaúdi riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"salamon-szigeteki dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"seychelle-szigeteki rúpia"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Szudáni dínár (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"szudáni font"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Szudáni font (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"svéd korona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"szingapúri dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Szent Ilona-i font"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Szlovén tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Szlovák korona"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leone-i leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"szomáli shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"suriname-i dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Suriname-i gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"dél-szudáni font"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"São Tomé és Príncipe-i dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"São Tomé és Príncipe-i dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Szovjet rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Salvadori colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"szíriai font"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"szvázi lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("thai baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Tádzsikisztáni rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tádzsikisztáni somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"türkmenisztáni manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"türkmenisztáni manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"tunéziai dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("tongai paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timori escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"török líra (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"török líra"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinidad és Tobago-i dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"tajvani új dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tanzániai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ukrán hrivnya"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Ukrán karbovanec"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandai shilling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandai shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"USA-dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"USA dollár (következő napi)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"USA dollár (aznapi)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Uruguayi peso en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguay-i peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguay-i peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"üzbegisztáni szum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuelai bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelai bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("venezuelai bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"vietnámi dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"vietnámi dong (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatui vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("nyugat-szamoai tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA frank BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Ezüst"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Arany"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Európai kompozit egység"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Európai monetáris egység"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Európai kontó egység (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Európai kontó egység (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"kelet-karibi dollár"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Special Drawing Rights"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"európai pénznemegység"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Francia arany frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Francia UIC-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA frank BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"palládium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"csendes-óceáni valutaközösségi frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET tőke"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Tesztelési pénznemkód"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ismeretlen pénznem"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Jemeni dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemeni rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Jugoszláv kemény dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Jugoszláv új dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Jugoszláv konvertibilis dínár"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"jugoszláv reformált dinár (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Dél-afrikai rand (pénzügyi)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"dél-afrikai rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambiai kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambiai kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zairei új zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("Zairei zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabwei dollár (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabwei dollár (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Zimbabwei dollár (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_hu::CurrencyNames_hu() {
}

$Class* CurrencyNames_hu::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hu, name, initialize, &_CurrencyNames_hu_ClassInfo_, allocate$CurrencyNames_hu);
	return class$;
}

$Class* CurrencyNames_hu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun