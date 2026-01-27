#include <sun/util/resources/cldr/ext/CurrencyNames_uk.h>

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

$MethodInfo _CurrencyNames_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_uk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_uk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_uk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_uk_MethodInfo_
};

$Object* allocate$CurrencyNames_uk($Class* clazz) {
	return $of($alloc(CurrencyNames_uk));
}

void CurrencyNames_uk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_uk::getContents() {
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
			$of("PES"_s),
			$of("PES"_s)
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
			$of(u"₴"_s)
		}),
		$$new($ObjectArray, {
			$of("UAK"_s),
			$of(u"крб."_s)
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
			$of(u"андоррська песета"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"дирхам ОАЕ"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"афгані (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"афганський афгані"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"албанський лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"вірменський драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"нідерландський антильський гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ангольська кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"ангольська кванза (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"ангольська нова кванза (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"ангольська кванза реаджастадо (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"аргентинський австрал"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"аргентинський песо (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"аргентинський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"австрійський шилінг"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"австралійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"арубський флорин"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"азербайджанський манат (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"азербайджанський манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"динар (Боснія і Герцеговина)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"конвертована марка Боснії і Герцеговини"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"барбадоський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"бангладеська така"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"бельгійський франк (конвертований)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"бельгійський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"бельгійський франк (фінансовий)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"болгарський твердий лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"болгарський лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"бахрейнський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"бурундійський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"бермудський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"брунейський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"болівійський болівіано"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"болівійське песо"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"болівійський мвдол"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"бразильське нове крузейро (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"бразильське крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"бразильське крузейро (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"бразильський реал"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"бразильське нове крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"бразильське крузейро"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"багамський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"бутанський нгултрум"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"бірманський кіат"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ботсванська пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"білоруський новий рубль (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"білоруський рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"білоруський рубль (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"белізький долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"канадський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"конголезький франк"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"євро WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"швейцарський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"франк WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"чилійський юнідадес де фоменто"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"чилійський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"китайський офшорний юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"китайський юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"колумбійський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"одиниця реальної вартості"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"костариканський колон"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"старий сербський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"чехословацька тверда крона"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"кубинський конвертований песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"кубинський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"ескудо Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"кіпрський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"чеська крона"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"марка НДР"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"німецька марка"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"джибутійський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"данська крона"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"домініканський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"алжирський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"еквадорський сукре"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"еквадорський юнідад де валор константе"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"естонська крона"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"єгипетський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"еритрейська накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"іспанська песета (\"А\" рахунок)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"іспанська песета (конвертовані рахунки)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"іспанська песета"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ефіопський бир"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"євро"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"фінляндська марка"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"фіджійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"фунт Фолклендських островів"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"французький франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"англійський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"грузинський купон"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"грузинський ларі"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ганський седі (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ганський седі"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"гібралтарський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"гамбійський даласі"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"гвінейський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"гвінейське сілі"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"еквеле (Екваторіальна Ґвінея)"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"грецька драхма"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"гватемальський кетсаль"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"ескудо португальської гвінеї"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"песо Гвінеї-Бісау"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"гаянський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"гонконгський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"гондураська лемпіра"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"хорватський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"хорватська куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"гаїтянський гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"угорський форинт"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"індонезійська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"ірландський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"ізраїльський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"ізраїльський новий шекель"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"індійська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"іракський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"іранський ріал"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"ісландська крона"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"італійська ліра"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ямайський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"йорданський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"японська єна"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"кенійський шилінг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"киргизький сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"камбоджійський рієль"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"коморський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"північнокорейський вон"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"південнокорейський вон"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"кувейтський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"долар Кайманових островів"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"казахстанський тенге"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"лаоський кіп"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"ліванський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"шрі-ланкійська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ліберійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"лесотський лоті"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"литовський літ"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"литовський талон"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"люксембурґський франк (конвертований)"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"люксембурзький франк"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"люксембурґський франк (фінансовий)"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"латвійський лат"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"латвійський рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"лівійський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"марокканський дирхам"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"марокканський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"молдовський лей"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"малагасійський аріарі"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"мадагаскарський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"македонський денар"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"малійський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"кʼят Мʼянми"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"монгольський тугрик"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"патака Макао"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"мавританська угія (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"мавританська угія"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"мальтійська ліра"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"мальтійський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"маврикійська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"мальдівська руфія"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"малавійська квача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"мексиканський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"мексиканське срібне песо (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"мексиканський юнідад де інверсіон"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"малайзійський рингіт"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"мозамбіцький ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"старий мозамбіцький метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мозамбіцький метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"намібійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"нігерійська найра"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"нікарагуанська кордоба (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"нікарагуанська кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"нідерландський гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"норвезька крона"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"непальська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"новозеландський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"оманський ріал"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"панамське бальбоа"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"перуанський інті"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"перуанський новий сол"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"перуанський сол (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"кіна Папуа-Нової Ґвінеї"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"філіппінський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"пакистанська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"польський злотий"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"польський злотий (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"португальський ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"парагвайський гуарані"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"катарський ріал"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"родезійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"старий румунський лей"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"румунський лей"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"сербський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"російський рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"російський рубль (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"руандійський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"саудівський ріал"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"долар Соломонових Островів"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"сейшельська рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"суданський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"суданський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"старий суданський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"шведська крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"сінгапурський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"фунт острова Святої Єлени"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"словенський толар"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"словацька крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"леоне Сьєрра-Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"сомалійський шилінг"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"суринамський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"суринамський гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"південносуданський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"добра Сан-Томе і Прінсіпі (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"добра Сан-Томе і Прінсіпі"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"радянський рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"сальвадорський колон"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"сирійський фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"свазілендський лілангені"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"таїландський бат"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"таджицький рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"таджицький сомоні"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"туркменський манат (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"туркменський манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"туніський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"тонганська паанга"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"тіморський ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"турецька ліра (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"турецька ліра"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"долар Тринідаду і Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"новий тайванський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"танзанійський шилінг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"українська гривня"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"український карбованець"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"угандійський шилінг (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"угандійський шилінг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"долар США"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"долар США (наступного дня)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"долар США (цього дня)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"уругвайський песо в індексованих одиницях"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"уругвайське песо (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"уругвайський песо"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"узбецький сум"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"венесуельський болівар (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"венесуельський болівар (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"венесуельський болівар"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"вʼєтнамський донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"вануатський вату"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"самоанська тала"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"центральноафриканський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"срібло"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"золото"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"європейська складена валютна одиниця"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"одиниця європейського валютного фонду"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"європейська розрахункова одиниця XBC"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"європейська розрахункова одиниця XBD"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"східнокарибський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"спеціальні права запозичення"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"європейська валютна одиниця"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"французький золотий франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"французький франк UIC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"західноафриканський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"паладій"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"французький тихоокеанський франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"платина"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"фонди RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"код тестування валюти"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"невідома грошова одиниця"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"єменський динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"єменський ріал"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"югославський твердий динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"югославський новий динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"югославський конвертований динар"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"південноафриканський фінансовий ранд"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"південноафриканський ранд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"замбійська квача (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"замбійська квача"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"заїрський новий заїр"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"заїрський заїр"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"зімбабвійський долар"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"зімбабвійський долар (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_uk::CurrencyNames_uk() {
}

$Class* CurrencyNames_uk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_uk, name, initialize, &_CurrencyNames_uk_ClassInfo_, allocate$CurrencyNames_uk);
	return class$;
}

$Class* CurrencyNames_uk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun