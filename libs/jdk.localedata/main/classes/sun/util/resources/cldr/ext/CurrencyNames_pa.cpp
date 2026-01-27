#include <sun/util/resources/cldr/ext/CurrencyNames_pa.h>

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

$MethodInfo _CurrencyNames_pa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pa_MethodInfo_
};

$Object* allocate$CurrencyNames_pa($Class* clazz) {
	return $of($alloc(CurrencyNames_pa));
}

void CurrencyNames_pa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pa::getContents() {
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
			$of("ARA"_s),
			$of("ARA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARL"_s),
			$of("ARL"_s)
		}),
		$$new($ObjectArray, {
			$of("ARM"_s),
			$of("ARM"_s)
		}),
		$$new($ObjectArray, {
			$of("ARP"_s),
			$of("ARP"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
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
			$of("BOL"_s),
			$of("BOL"_s)
		}),
		$$new($ObjectArray, {
			$of("BOP"_s),
			$of("BOP"_s)
		}),
		$$new($ObjectArray, {
			$of("BOV"_s),
			$of("BOV"_s)
		}),
		$$new($ObjectArray, {
			$of("BRB"_s),
			$of("BRB"_s)
		}),
		$$new($ObjectArray, {
			$of("BRC"_s),
			$of("BRC"_s)
		}),
		$$new($ObjectArray, {
			$of("BRE"_s),
			$of("BRE"_s)
		}),
		$$new($ObjectArray, {
			$of("BRN"_s),
			$of("BRN"_s)
		}),
		$$new($ObjectArray, {
			$of("BRR"_s),
			$of("BRR"_s)
		}),
		$$new($ObjectArray, {
			$of("BRZ"_s),
			$of("BRZ"_s)
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
			$of("DEM"_s),
			$of("DEM"_s)
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
			$of("ILP"_s),
			$of("ILP"_s)
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
			$of("SUR"_s),
			$of("SUR"_s)
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
			$of("UYI"_s),
			$of("UYI"_s)
		}),
		$$new($ObjectArray, {
			$of("UYP"_s),
			$of("UYP"_s)
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
			$of("VEB"_s),
			$of("VEB"_s)
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
			$of("VNN"_s),
			$of("VNN"_s)
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
			$of("XAG"_s),
			$of("XAG"_s)
		}),
		$$new($ObjectArray, {
			$of("XAU"_s),
			$of("XAU"_s)
		}),
		$$new($ObjectArray, {
			$of("XBA"_s),
			$of("XBA"_s)
		}),
		$$new($ObjectArray, {
			$of("XBB"_s),
			$of("XBB"_s)
		}),
		$$new($ObjectArray, {
			$of("XBC"_s),
			$of("XBC"_s)
		}),
		$$new($ObjectArray, {
			$of("XBD"_s),
			$of("XBD"_s)
		}),
		$$new($ObjectArray, {
			$of("XEU"_s),
			$of("XEU"_s)
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
			$of("aed"_s),
			$of(u"ਸੰਯੁਕਤ ਅਰਬ ਅਮੀਰਾਤ ਦਿਰਹਾਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"ਅਫ਼ਗਾਨ ਅਫ਼ਗਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"ਅਲਬਾਨੀਆਈ ਲੇਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"ਅਰਮੀਨੀਆਈ ਦਰਾਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ਨੀਦਰਲੈਂਡਸ ਐਂਟੀਲੀਅਨ ਗਿਲਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ਅੰਗੋਲਾ ਕਵਾਂਜਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"ਅਰਜਨਟੀਨੀ ਅਸਟਰਾਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"ਅਰਜਨਟੀਨੀ ਪੇਸੋ ਲੇ (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"ਅਰਜਨਟੀਨੀ ਪੇਸੋ (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ਅਰਜਨਟੀਨੀ ਪੇਸੋ (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"ਅਰਜਨਟੀਨੀ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ਆਸਟ੍ਰੇਲੀਆਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"ਅਰੂਬਨ ਫਲੋਰਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"ਅਜ਼ਰਬਾਈਜਾਨ ਮਾਨਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"ਬੋਸਨੀਆ-ਹਰਜ਼ੇਗੋਵੀਨਾ ਬਦਲਣਯੋਗ ਮਾਰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"ਬਾਰਬਾਡੀਅਨ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"ਬੰਗਲਾਦੇਸ਼ੀ ਟਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ਬੁਲਗਾਰੀਆਈ ਲੇਵ"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"ਬਹਿਰੀਨੀ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"ਬੁਰੁੰਡੀਆਈ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"ਬਰਮੂਡਾ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"ਬਰੂਨੇਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"ਬੋਲੀਵੀਅਨ ਬੋਲੀਵੀਅਨੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"ਬੋਲੀਵੀਆਈ ਬੋਲੀਵੀਅਨੋ (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"ਬੋਲੀਵੀਆਈ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"ਬੋਲੀਵੀਆਈ ਮਵਡੋਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਨਿਊ ਕਰੁਜ਼ਿਰੋਸ (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਕਰੁਜ਼ਾਡੂ (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਕਰੁਜ਼ਿਰੋਸ (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਰੀਅਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਨਿਊ ਕਰੁਜ਼ਾਡੂ (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਕਰੁਜ਼ਿਰੋਸ (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲੀਆਈ ਕਰੁਜ਼ਿਰੋਸ (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"ਬਾਹਾਮੀਅਨ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ਭੂਟਾਨੀ ਐਂਗਲਟ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ਬੋਟਸਵਾਨਾ ਪੁਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ਬੇਲਾਰੂਸੀ ਰੂਬਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"ਬੇਲਾਰੂਸੀ ਰੂਬਲ (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"ਬੇਲੀਜ਼ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ਕੇਨੇਡਿਆਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"ਕਾਂਗੋਲੀਜ਼ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"ਸਵਿਸ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"ਚਿਲੀ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"ਚੀਨੀ ਯੁਆਨ (ਔਫ਼ਸ਼ੋਰ)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"ਚੀਨੀ ਯੁਆਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"ਕੋਲੰਬਿਆਈ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"ਕੋਸਟਾ ਰੀਕਨ ਕੋਲਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"ਕਿਊਬਨ ਬਦਲਣਯੋਗ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"ਕਿਊਬਨ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"ਕੇਪ ਵਰਡੀਅਨ ਸਕੂਡੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"ਚੈਕ ਗਣਰਾਜ ਕੋਰੁਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"ਜਰਮਨ ਮਾਰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"ਜ਼ੀਬੂਤੀਅਨ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"ਡੈਨਿਸ਼ ਕਰੌਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"ਡੌਮਿਨਿਕਨ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"ਅਲਜੀਰਿਆਈ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"ਮਿਸਰੀ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ਇਰੀਟ੍ਰਿਆਈ ਨਾਫ਼ਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ਇਥੋਪੀਆਈ ਬਿਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ਯੂਰੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"ਫ਼ਿਜ਼ੀ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"ਫ਼ਾਕਲੈਂਡ ਆਈਲੈਂਡਸ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ਬ੍ਰਿਟਿਸ਼ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"ਜਾਰਜੀਆਈ ਲਾਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ਘਾਨਾਈ ਸੇਡੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"ਜਿਬਰਾਲਟਰ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"ਗੈਂਬੀਆਈ ਦਲਾਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"ਗਿਨੀ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"ਗੁਆਟੇਮਾਲਾ ਕੁਏਟਜ਼ਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"ਗੁਆਨਾਆਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"ਹਾਂਗ ਕਾਂਗ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"ਹਾਨਡੂਰਨ ਲੇਮਪਿਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"ਕਰੋਏਸ਼ੀਆਈ ਕੁਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"ਹੈਤੀ ਗੌਰਡੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"ਹੰਗਰੀ ਫੋਰਿੰਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"ਇੰਡੋਨੇਸ਼ੀਆਈ ਰੁਪਿਆਹ"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"ਆਇਰਿਸ਼ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"ਇਜ਼ਰਾਈਲੀ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"ਇਜ਼ਰਾਈਲੀ ਨਵੀਂ ਸ਼ੇਕੇਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ਭਾਰਤੀ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"ਇਰਾਕੀ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ਈਰਾਨੀ ਰਿਆਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"ਆਈਸਲੈਂਡੀ ਕਰੋਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ਜਮਾਇਕਨ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"ਜਾਰਡਨ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ਜਪਾਨੀ ਯੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"ਕੀਨੀਆਈ ਸ਼ਿਲਿੰਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"ਕਿਰਗਿਸਤਾਨੀ ਸੋਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"ਕੰਬੋਡੀਆਈ ਰੀਅਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"ਕੋਮੋਰੀਅਨ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"ਉੱਤਰੀ ਕੋਰੀਆਈ ਵੋਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"ਦੱਖਣੀ ਕੋਰੀਆਈ ਵੋਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"ਕੁਵੈਤੀ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"ਕੇਮੈਨ ਆਈਲੈਂਡਸ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"ਕਜ਼ਾਖਸਤਾਨੀ ਤੇਂਗੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"ਲਾਓਟਿਆਈ ਕਿਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"ਲੈਬਨਾਨੀ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"ਸ੍ਰੀਲੰਕਾਈ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ਲਾਈਬੀਰੀਆਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"ਲਿਥੁਆਨੀਆਈ ਲਿਤਾਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"ਲਾਟਵਿਆਈ ਲਾਟਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ਲੀਬੀਆਈ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ਮੋਰੱਕਨ ਦਿਰਹਾਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"ਮੋਲਡੋਵਨ ਲੇਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ਮਾਲਾਗਾਸੀ ਅਰਾਇਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"ਮੈਕਡੋਨੀਆਈ ਡੇਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"ਮਿਆਂਮਾਰ ਕਿਆਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"ਮੰਗੋਲੀਆਈ ਤੁਗਰਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"ਮੇਕਾਨੀ ਪਟਾਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ਮੋਰਿਟਾਨੀਆਈ ਊਗੀਆ (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ਮੋਰਿਟਾਨੀਆਈ ਊਗੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"ਮੌਰਿਸ਼ੀਆਈ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"ਮਾਲਦੀਵੀ ਰੁਫੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"ਮਾਲਾਵੀਆਈ ਕਵਾਚਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"ਮੈਕਸੀਕਨ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"ਮਲੇਸ਼ੀਆਈ ਰਿੰਗਿਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ਮੋਜ਼ਾਮਬੀਕਨ ਮੈਟੀਕਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"ਨਾਮੀਬੀਆਈ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"ਨਾਇਜੀਰੀਆਈ ਨਾਇਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"ਨਿਕਾਰਾਗੁਆਈ ਕੋਰਡੋਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"ਨਾਰਵੇਜੀਆਈ ਕਰੌਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"ਨੇਪਾਲੀ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"ਨਿਊਜ਼ੀਲੈਂਡ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ਓਮਾਨੀ ਰਿਆਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"ਪਨਾਮੇਨੀਅਨ ਬਾਲਬੋਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"ਪੇਰੂਵੀਅਨ ਸੋਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"ਪਾਪੂਆ ਨਿਊ ਗਿਨੀਆਈ ਕੀਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"ਫਿਲਿਪੀਨੀ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"ਪਾਕਿਸਤਾਨੀ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"ਪੋਲੈਂਡੀ ਜ਼ਲੌਟੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"ਪੈਰਾਗੁਵਾਇਨ ਗੁਆਰਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"ਕਤਰੀ ਰਿਆਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"ਰੋਮਾਨੀਆਈ ਲੇਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"ਸਰਬੀਆਈ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"ਰੂਸੀ ਰੂਬਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ਰਵਾਂਡਨ ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"ਸਾਊਦੀ ਰਿਆਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"ਸੋਲੋਮਨ ਆਈਲੈਂਡਸ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"ਸੇਸ਼ਲਸ ਰੁਪਇਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"ਸੂਡਾਨੀ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"ਸਵੀਡਿਸ਼ ਕਰੋਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"ਸਿੰਗਾਪੁਰ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"ਸੇਂਟ ਹੇਲੇਨਾ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"ਸਿਏਰਾ ਲਿਓਨੀਅਨ ਲਿਓਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"ਸੋਮਾਲੀ ਸ਼ਿਲਿੰਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"ਸੂਰੀਨਾਮੀ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"ਦੱਖਣੀ ਸੂਡਾਨੀ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"ਸਾਉ ਟੋਮੀ ਐਂਡ ਪ੍ਰਿੰਸਪੀ ਡੋਬਰਾ (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"ਸਾਉ ਟੋਮੀ ਐਂਡ ਪ੍ਰਿੰਸਪੀ ਡੋਬਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"ਸੋਵੀਅਤ ਰੂਬਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"ਸੀਰੀਆਈ ਪੌਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"ਸਵਾਜ਼ੀ ਲਾਇਲੈਂਗਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"ਥਾਈ ਬਾਹਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"ਤਾਜਿਕਿਸਤਾਨੀ ਸੋਮੋਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"ਤੁਰਕਮੇਨਿਸਤਾਨੀ ਮਾਨਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"ਟਿਉਨੀਸ਼ੀਆਈ ਦਿਨਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"ਟੌਂਗਨ ਪੈਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"ਤੁਰਕੀ ਲੀਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"ਟ੍ਰਿਨੀਡਾਡ ਅਤੇ ਟੋਬਾਗੋ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"ਨਵਾਂ ਤਾਇਵਾਨ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"ਤਨਜ਼ਾਨੀਆਈ ਸ਼ਿਲਿੰਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ਯੂਕਰੇਨੀਆਈ ਰਿਵਨਿਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ਯੂਗਾਂਡੀਆਈ ਸ਼ਿਲਿੰਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ਯੂ.ਐਸ. ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"ਉਰੂਗੁਵਾਇਨ ਪੇਸੋ (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"ਉਰੂਗੁਵਾਇਨ ਪੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"ਉਜ਼ਬੇਕਿਸਤਾਨ ਸੋਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"ਵੇਨੇਜ਼ੂਏਲਨ ਬੋਲੀਵਰ (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"ਵੇਨੇਜ਼ੂਏਲਨ ਬੋਲੀਵਰ (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"ਵੇਨੇਜ਼ੂਏਲਨ ਬੋਲੀਵਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"ਵੀਅਤਨਾਮੀ ਡੋਂਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"ਵੀਅਤਨਾਮੀ ਡੋਂਗ (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"ਵਾਨੂਆਟੂ ਵਾਟੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"ਸਾਮੋਆਈ ਤਾਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"ਕੇਂਦਰੀ ਅਫ਼ਰੀਕੀ [CFA] ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"ਚਾਂਦੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"ਸੋਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"ਯੂਰਪੀ ਵਿੱਤੀ ਇਕਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"ਪੂਰਬੀ ਕੈਰੇਬੀਅਨ ਡਾਲਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"ਯੂਰਪੀ ਮੁਦਰਾ ਇਕਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"ਪੱਛਮੀ ਅਫ਼ਰੀਕੀ (CFA) ਫ੍ਰੈਂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"ਫ੍ਰੈਂਕ (CFP)"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ਅਗਿਆਤ ਮੁਦਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"ਯਮਨੀ ਰਿਆਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"ਦੱਖਣੀ ਅਫਰੀਕੀ ਰੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"ਜ਼ਾਮਬੀਆਈ ਕਵਾਚਾ"_s)
		})
	}));
	return data;
}

CurrencyNames_pa::CurrencyNames_pa() {
}

$Class* CurrencyNames_pa::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pa, name, initialize, &_CurrencyNames_pa_ClassInfo_, allocate$CurrencyNames_pa);
	return class$;
}

$Class* CurrencyNames_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun