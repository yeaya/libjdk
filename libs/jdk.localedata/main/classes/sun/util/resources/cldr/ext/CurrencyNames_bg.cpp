#include <sun/util/resources/cldr/ext/CurrencyNames_bg.h>

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

$MethodInfo _CurrencyNames_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bg_MethodInfo_
};

$Object* allocate$CurrencyNames_bg($Class* clazz) {
	return $of($alloc(CurrencyNames_bg));
}

void CurrencyNames_bg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bg::getContents() {
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
			$of(u"лв."_s)
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
			$of("MXP"_s),
			$of("MXP"_s)
		}),
		$$new($ObjectArray, {
			$of("MXV"_s),
			$of("MXV"_s)
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
			$of("NIC"_s),
			$of("NIC"_s)
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
			$of("SVC"_s),
			$of("SVC"_s)
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
			$of(u"щ.д."_s)
		}),
		$$new($ObjectArray, {
			$of("USN"_s),
			$of("USN"_s)
		}),
		$$new($ObjectArray, {
			$of("USS"_s),
			$of("USS"_s)
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
			$of(u"Андорска песета"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Дирхам на Обединените арабски емирства"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Афганистански афган (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Афганистански афган"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Албански лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Арменски драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Антилски гулден"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Анголска кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Анголска кванца (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Анголска нова кванца (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Анголска нова кванца (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Аржентински австрал"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Аржентинско песо (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Аржентинско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Австрийски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Австралийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Арубски флорин"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Азербайджански манат (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Азербайджански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Босна и Херцеговина-динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Босненска конвертируема марка"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Барбадоски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Бангладешка така"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Белгийски франк (конвертируем)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Белгийски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Белгийски франк (финансов)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Български конвертируем лев (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Български лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Бахрейнски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Бурундийски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Бермудски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Брунейски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Боливийско боливиано"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Боливийско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Боливийски мвдол"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Бразилско ново крузейро (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Бразилско крозадо"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Бразилско крузейро (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразилски реал"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Бразилско ново крозадо"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Бразилско крузейро"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Бахамски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Бутански нгултрум"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Бирмански киат"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Ботсванска пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Беларуска нова рубла (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Беларуска рубла"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Беларуска рубла (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Белизийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Канадски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Конгоански франк"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR евро"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Швейцарски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR франк"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Условна разчетна единица на Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Чилийско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Китайски юан (офшорен)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Китайски юан"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Колумбийско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Колумбийска единица на реалната стойност"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Костарикански колон"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Стар сръбски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Чехословашка конвертируема крона"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Кубинско конвертируемо песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Кубинско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Ескудо на Кабо Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Кипърска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Чешка крона"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Източногерманска марка"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Германска марка"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Джибутски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Датска крона"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Доминиканско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Алжирски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"Еквадорско сукре"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"Еквадорска банкова единица"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Естонска крона"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Египетска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Еритрейска накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Испанска песета"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Етиопски бир"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Финландска марка"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Фиджийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Фолкландска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Френски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Британска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Грузински купон"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Грузински лари"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ганайско седи (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Ганайско седи"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Гибралтарска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Гамбийско даласи"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Гвинейски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Гвинейска сили"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Екваториално гвинейско еквеле"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Гръцка драхма"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Гватемалски кетцал"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Ескудо от Португалска Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Гвинея-Бисау песо"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Гаянски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Хонконгски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Хондураска лемпира"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Хърватски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Хърватска куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Хаитски гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Унгарски форинт"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Индонезийска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ирландска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Израелска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Израелски нов шекел"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Индийска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Иракски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Ирански риал"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Исландска крона"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Италианска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Ямайски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Йордански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Японска йена"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Кенийски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Киргизстански сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Камбоджански риел"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Коморски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Севернокорейски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Южнокорейски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Кувейтски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Кайманов долар"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Казахстанско тенге"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Лаоски кип"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Ливанска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Шриланкска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Либерийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Лесотско лоти"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Литовски литас"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Литовски талон"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Люксембургски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Латвийски лат"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Латвийска рубла"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Либийски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Марокански дирхам"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Марокански франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Молдовска лея"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Малгашко ариари"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Малгашки франк - Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Македонски денар"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Малийски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Мианмарски киат"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Монголски тугрик"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Патака на Макао"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Мавританска угия (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Мавританска угия"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Малтийска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Маврицийска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Малдивска руфия"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Малавийска куача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Мексиканско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Мексиканско сребърно песо (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Мексиканска конвертируема единица (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Малайзийски рингит"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Мозамбикско ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Мозамбикски метикал (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Мозамбикски метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Намибийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Нигерийска найра"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Никарагуанска кордоба (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Никарагуанска кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Холандски гулден"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Норвежка крона"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Непалска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Новозеландски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Омански риал"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Панамска балбоа"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Перуанско инти"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Перуански сол"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Перуански сол (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Папуа-новогвинейска кина"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Филипинско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Пакистанска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Полска злота"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Полска злота (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Португалско ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Парагвайско гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Катарски риал"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Родезийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Стара румънска лея"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Румънска лея"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Сръбски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Руска рубла"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Руска рубла (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Руандски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"саудитски риал"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Долар на Соломоновите острови"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Сейшелска рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Судански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Суданска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Шведска крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Сингапурски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Лира на Света Елена"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Словенски толар"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Словашка крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Сиералеонско леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Сомалийски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Суринамски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"Суринамски гилдер"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Южносуданска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Добра на Сао Томе и Принсипи (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Добра на Сао Томе и Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Съветска рубла"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Салвадорски колон"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Сирийска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Свазилендски лилангени"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Тайландски бат"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Таджикистанска рубла"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Таджикистански сомони"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Туркменистански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Туркменски манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Тунизийски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Тонганска паанга"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Тиморско ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Турска лира (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Турска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Долар на Тринидад и Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Тайвански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Танзанийски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Украинска гривня"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Украински карбованец"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Угандийски шилинг (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Угандски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Щатски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"Уругвайско песо (индекс на инфлацията)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Уругвайско песо (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Уругвайско песо"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Узбекски сум"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Венецуелски боливар (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Венецуелски боливар"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Венецуелски боливар (VES)"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Виетнамски донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Вануатско вату"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Самоанска тала"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Централноафрикански франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Сребро"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"Злато"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Европейска съставна единица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Европейска валутна единица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Европейска единица по сметка (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Европейска единица по сметка (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Източнокарибски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Специални права на тираж"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Еку на ЕИО"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Френски златен франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Западноафрикански франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"Паладий"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"Платина"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Код резервиран за целите на тестване"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Непозната валута"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Йеменски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Йеменски риал"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Югославски твърд динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Югославски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Югославски конвертируем динар"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Южноафрикански ранд (финансов)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Южноафрикански ранд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Замбийска квача (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Замбийска куача"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Заирско ново зайре"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Заирско зайре"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Зимбабвийски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Зимбабвийски долар (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_bg::CurrencyNames_bg() {
}

$Class* CurrencyNames_bg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bg, name, initialize, &_CurrencyNames_bg_ClassInfo_, allocate$CurrencyNames_bg);
	return class$;
}

$Class* CurrencyNames_bg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun