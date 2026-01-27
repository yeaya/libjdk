#include <sun/util/resources/cldr/ext/CurrencyNames_ro.h>

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

$MethodInfo _CurrencyNames_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ro, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ro, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ro_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ro",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ro_MethodInfo_
};

$Object* allocate$CurrencyNames_ro($Class* clazz) {
	return $of($alloc(CurrencyNames_ro));
}

void CurrencyNames_ro::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ro::getContents() {
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
			$of("HUF"_s)
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
			$of("JPY"_s)
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
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"pesetă andorrană"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham din Emiratele Arabe Unite"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani afgan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram armenesc"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("gulden neerlandez antilez"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kwanza angoleză"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentinian (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentinian"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"șiling austriac"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolar australian"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florin aruban"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azer (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azer"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"dinar Bosnia-Herțegovina (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marcă convertibilă"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dolar din Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka din Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franc belgian (convertibil)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franc belgian"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franc belgian (financiar)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinar din Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franc burundez"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dolar din Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("dolar din Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brazilian (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"cruzeiro brazilian (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dolar din Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum din Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("kyat birman"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"rublă belarusă"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rublă belarusă (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("dolar din Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dolar canadian"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franc congolez"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"franc elvețian"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilian"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("yuan chinezesc (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan chinezesc"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso columbian"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"colón costarican"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"dinar Serbia și Muntenegru (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubanez convertibil"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubanez"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo din Capul Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"liră cipriotă"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"coroană cehă"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"marcă est-germană"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"marcă germană"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franc djiboutian"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"coroană daneză"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominican"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar algerian"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("sucre Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"coroană estoniană"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"liră egipteană"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"nakfa eritreeană"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"peseta spaniolă (cont A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"peseta spaniolă (cont convertibil)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"pesetă spaniolă"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiopian"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"marcă finlandeză"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dolar fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"liră din Insulele Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("franc francez"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"liră sterlină"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi Ghana (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi ghanez"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"liră din Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi din Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franc guineean"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"drahmă grecească"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemalez"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso Guineea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dolar guyanez"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dolar din Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"lempira honduriană"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar croat"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde din Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"rupie indoneziană"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"liră irlandeză"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"liră israeliană"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"șechel israelian nou"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"rupie indiană"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar irakian"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iranian"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"coroană islandeză"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"liră italiană"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dolar jamaican"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar iordanian"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"șiling kenyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"som kârgâz"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambodgian"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franc comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won nord-coreean"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won sud-coreean"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar kuweitian"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("dolar din Insulele Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"tenge kazahă"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"kip laoțian"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"liră libaneză"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"rupie srilankeză"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dolar liberian"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lesothian"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litu lituanian"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("franc convertibil luxemburghez"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("franc luxemburghez"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("franc financiar luxemburghez"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lats letonian"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"rublă Letonia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocan"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("franc marocan"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldovenesc"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ariary malgaș"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franc Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("franc Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat din Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca din Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritană (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ouguiya mauritană"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"liră malteză"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"rupie mauritiană"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"rufiyaa maldiviană"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kwacha malawiană"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexican"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso mexican de argint (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malaiezian"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo Mozambic"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metical Mozambic vechi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambican"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dolar namibian"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"naira nigeriană"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"cordoba nicaraguană (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba oro"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("gulden olandez"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"coroană norvegiană"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"rupie nepaleză"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dolar neozeelandez"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanez"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa panameză"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("inti peruvian"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruvian (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina din Papua-Noua Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filipinez"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"rupie pakistaneză"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zlot"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"zlot polonez (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial qatarian"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("dolar rhodesian"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"leu românesc (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"leu românesc"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"dinar sârbesc"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"rublă rusească"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franc rwandez"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudit"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dolar din Insulele Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupie din Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("dinar sudanez"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"liră sudaneză"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"liră sudaneză (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"coroană suedeză"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dolar singaporez"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"liră Insula Sf. Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("tolar sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"coroană slovacă"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone din Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"șiling somalez"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dolar surinamez"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("gulden Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"liră din Sudanul de Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra Sao Tome și Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra Sao Tome și Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"rublă sovietică"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("colon El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"liră siriană"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni din Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht thailandez"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"rublă Tadjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tadjic"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkmen (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisian"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa’anga tongană"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"liră turcească (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"liră turcească"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"dolar din Trinidad și Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("dolar nou din Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"șiling tanzanian"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"grivnă"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"carboavă ucraineană"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"șiling ugandez (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"șiling ugandez"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dolar american"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"dolar american (ziua următoare)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dolar american (aceeași zi)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso Uruguay (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayan"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolivar Venezuela (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolivar venezuelean (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar soberano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamez"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu din Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"tala samoană"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franc CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("argint"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("aur"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"unitate compusă europeană"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"unitate monetară europeană"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"unitate de cont europeană (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"unitate de cont europeană (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dolar est-caraib"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("drepturi speciale de tragere"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"unitate de monedă europeană"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("franc francez de aur"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("franc UIC francez"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franc CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("paladiu"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"platină"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("cod monetar de test"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"monedă necunoscută"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("dinar Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("rial yemenit"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("dinar iugoslav greu"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("dinar iugoslav nou"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("dinar iugoslav convertibil"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("rand sud-african (financiar)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sud-african"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambian (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambian"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("zair nou"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dolar Zimbabwe (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("dolar Zimbabwe (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("dolar Zimbabwe (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ro::CurrencyNames_ro() {
}

$Class* CurrencyNames_ro::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ro, name, initialize, &_CurrencyNames_ro_ClassInfo_, allocate$CurrencyNames_ro);
	return class$;
}

$Class* CurrencyNames_ro::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun