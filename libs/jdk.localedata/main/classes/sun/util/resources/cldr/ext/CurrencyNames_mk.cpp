#include <sun/util/resources/cldr/ext/CurrencyNames_mk.h>

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

$MethodInfo _CurrencyNames_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mk_MethodInfo_
};

$Object* allocate$CurrencyNames_mk($Class* clazz) {
	return $of($alloc(CurrencyNames_mk));
}

void CurrencyNames_mk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mk::getContents() {
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
			$of(u"ден."_s)
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
			$of(u"Андорска Пезета"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Дирхам на Обединети Арапски Емирати"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Авгани (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Авганистански авгани"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Албански лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Ерменски драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Холандски антилски гилдер"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Анголска кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Анголска Кванза (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Анголска нова Кванза (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Аргентински Пезос (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Аргентински пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Австралиски Шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Австралиски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Арубиски флорин"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Азербејџански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Босанско-Херцеговски Динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Босанско-херцеговска конвертибилна марка"_s)
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
			$of(u"Белгиски Франк (конвертибилен)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Белгиски Франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Белгиски Франк (финансиски)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Бугарски цврст лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Бугарски лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Бахреински динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Бурундиски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Бермудски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Брунејски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Боливиски боливиано"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразилски реал"_s)
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
			$of("bwp"_s),
			$of(u"Боцванска пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Белоруска нова рубља (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Белоруска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Белоруска рубља (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Белизиски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Канадски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Конголски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Швајцарски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Чилеански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Кинески јуан (офшор)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Кинески јуан"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Колумбиски пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Костарикански колон"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Чехословачка цврста корона"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Кубански конвертибилен пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Кубански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Зелено’ртски ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Кипарска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Чешка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Германска Марка"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Џибутски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Данска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Доминикански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Алжирски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Египетска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Еритрејска накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Шпанска Пезета"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Етиописки бир"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Финска марка"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Фиџиски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Фолкландска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Француски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Британска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Грузиски лари"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ганајски Седи"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Гански седи"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Гибралтарска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Гамбиски даласи"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Гвинејски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Грчка драхма"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Гватемалски кветцал"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Гвинејски Бисау пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Гвајански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Хонгконшки долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Хондурска лемпира"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Хрватски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Хрватска куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Хаитски гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Унгарска форинта"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Индонезиска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ирска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Изрелска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Израелски нов шекел"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Индиска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Ирачки динар"_s)
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
			$of(u"Италијанска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Јамајкански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Јордански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Јапонски јен"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Кениски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Киргистански сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Камбоџиски рел"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Коморски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Северно корејски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Јужно корејски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Кувајтски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Кајмански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Казахстанска тенга"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Лаоски кип"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Либанска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Шриланканска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Либериски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Лесотско лоти"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Литваниска лита"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Литваниски литаз"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Луксембуршки франк"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Латвијски лат"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Латвијска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Либијски динар"_s)
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
			$of(u"Молдавски леу"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Малагасиски ариари"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Македонски денар"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Малски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Мјанмарски киат"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Монголиски тугрик"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Макао патака"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Мавританска угија (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Мавританска угија"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Малтешка лира"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Малтешка фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Мавританска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Малдивска руфија"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Малависка квача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Мексикански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Мексикански сребрен пезос (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Малезиски рингит"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Мозамбиско ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Стар мозамбиски метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Мозамбиски метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Намибиски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Нигериска наира"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Никарагванска кордоба (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Никарагванска кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Холандски гилдер"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Норвешка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Непалска рупија"_s)
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
			$of("pen"_s),
			$of(u"Перуански сол"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Перуански сол (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Папуа новогвинејска кина"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Филипински пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Пакистанска рупија"_s)
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
			$of(u"Парагвајска гуарана"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Катарски риал"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Романска леи (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Романски леу"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Српски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Руска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Руска рубља (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Руандски франк"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Саудиски ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Соломонски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Сејшелска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Стар судански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Суданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Стара суданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Шведска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Сингапурски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Фунта на Света Елена"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Словенечки толар"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Словачка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Сиералеонско леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Сомалијски шилинг"_s)
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
			$of(u"Јужносуданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Добра на Саун Томе и Принсип (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Добра на Сао Томе и Принсипе"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Советска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Салвадорски колон"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Сиријска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Свазилендски лиланген"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Таи бат"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Таџикистанска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Таџикистански сомони"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Туркменистански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Туркменист. манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Тунизиски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Тонганска панга"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Тиморски ескудо"_s)
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
			$of(u"Тајвански нов долар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Танзаниски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Украинска хривнија"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Угандиски шилинг (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Угандиски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Американски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"САД долар (Next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"САД долар (Same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Уругвајски пезос (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Уругвајски пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Узбекистански сом"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Венецуелски боливар (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Венецуелски боливар (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Венецуелски боливар"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Виетнамски донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Ванатски вату"_s)
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
			$of("xcd"_s),
			$of(u"Источнокарипски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Западноафрикански франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"ЦФП франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Непозната валута"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Јеменски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Јеменски риал"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Југословенски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Југословенски конвертибилен динар"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Јужно афрички ранд(финансиски)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Јужноафрикански ранд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Замбијска квача (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Замбијска квача"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Заирско новозаире"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Заирско заире"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Зимбабвиски долар"_s)
		})
	}));
	return data;
}

CurrencyNames_mk::CurrencyNames_mk() {
}

$Class* CurrencyNames_mk::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mk, name, initialize, &_CurrencyNames_mk_ClassInfo_, allocate$CurrencyNames_mk);
	return class$;
}

$Class* CurrencyNames_mk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun