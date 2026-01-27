#include <sun/util/resources/cldr/ext/CurrencyNames_ru.h>

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

$MethodInfo _CurrencyNames_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ru, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ru, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ru",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_MethodInfo_
};

$Object* allocate$CurrencyNames_ru($Class* clazz) {
	return $of($alloc(CurrencyNames_ru));
}

void CurrencyNames_ru::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ru::getContents() {
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
			$of(u"₽"_s)
		}),
		$$new($ObjectArray, {
			$of("RUR"_s),
			$of(u"р."_s)
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
			$of(u"ТМТ"_s)
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
			$of(u"₴"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
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
			$of("XXX"_s),
			$of("XXXX"_s)
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
			$of(u"Андоррская песета"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"дирхам ОАЭ"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Афгани (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"афгани"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"албанский лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"армянский драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"нидерландский антильский гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ангольская кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Ангольская кванза (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Ангольская новая кванза (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Ангольская кванза реюстадо (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Аргентинский аустрал"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Аргентинское песо (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"аргентинский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Австрийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"австралийский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"арубанский флорин"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Старый азербайджанский манат"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"азербайджанский манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Динар Боснии и Герцеговины"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"конвертируемая марка Боснии и Герцеговины"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"барбадосский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"бангладешская така"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Бельгийский франк (конвертируемый)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Бельгийский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Бельгийский франк (финансовый)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"болгарский лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"бахрейнский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"бурундийский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"бермудский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"брунейский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"боливийский боливиано"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Боливийское песо"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Боливийский мвдол"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Бразильский новый крузейро (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Бразильское крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Бразильский крузейро (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"бразильский реал"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Бразильское новое крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Бразильский крузейро"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"багамский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"бутанский нгултрум"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Джа"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ботсванская пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Белорусский рубль (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"белорусский рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Белорусский рубль (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"белизский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"канадский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"конголезский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR евро"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"швейцарский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR франк"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Условная расчетная единица Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"чилийский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"китайский офшорный юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"китайский юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"колумбийский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Единица реальной стоимости Колумбии"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"костариканский колон"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Старый Сербский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Чехословацкая твердая крона"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"кубинский конвертируемый песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"кубинский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"эскудо Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Кипрский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"чешская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Восточногерманская марка"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Немецкая марка"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"франк Джибути"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"датская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"доминиканский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"алжирский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"Эквадорский сукре"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"Постоянная единица стоимости Эквадора"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Эстонская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"египетский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"эритрейская накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Испанская песета (А)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Испанская песета (конвертируемая)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Испанская песета"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"эфиопский быр"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"евро"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Финская марка"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"доллар Фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"фунт Фолклендских островов"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Французский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"британский фунт стерлингов"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Грузинский купон"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"грузинский лари"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ганский седи (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ганский седи"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"гибралтарский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"гамбийский даласи"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"гвинейский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Гвинейская сили"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Эквеле экваториальной Гвинеи"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Греческая драхма"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"гватемальский кетсаль"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Эскудо Португальской Гвинеи"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Песо Гвинеи-Бисау"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"гайанский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"гонконгский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"гондурасская лемпира"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Хорватский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"хорватская куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"гаитянский гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"венгерский форинт"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"индонезийская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ирландский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Израильский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"новый израильский шекель"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"индийская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"иракский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"иранский риал"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"исландская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Итальянская лира"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ямайский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"иорданский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"японская иена"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"кенийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"киргизский сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"камбоджийский риель"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"коморский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"северокорейская вона"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"южнокорейская вона"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"кувейтский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"доллар Островов Кайман"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"казахский тенге"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"лаосский кип"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"ливанский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"шри-ланкийская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"либерийский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Лоти"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Литовский лит"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Литовский талон"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Конвертируемый франк Люксембурга"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Люксембургский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Финансовый франк Люксембурга"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Латвийский лат"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Латвийский рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ливийский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"марокканский дирхам"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Марокканский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"молдавский лей"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"малагасийский ариари"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Малагасийский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"македонский денар"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Малийский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"мьянманский кьят"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"монгольский тугрик"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"патака Макао"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"мавританская угия (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"мавританская угия"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Мальтийская лира"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Мальтийский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"маврикийская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"мальдивская руфия"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"малавийская квача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"мексиканский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Мексиканское серебряное песо (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Мексиканская пересчетная единица (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"малайзийский ринггит"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Мозамбикское эскудо"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Старый мозамбикский метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мозамбикский метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"доллар Намибии"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"нигерийская найра"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Никарагуанская кордоба (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"никарагуанская кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Нидерландский гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"норвежская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"непальская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"новозеландский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"оманский риал"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"панамский бальбоа"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Перуанское инти"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"перуанский соль"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Перуанский соль (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"кина Папуа – Новой Гвинеи"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"филиппинский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"пакистанская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"польский злотый"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Злотый"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Португальское эскудо"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"парагвайский гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"катарский риал"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Родезийский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Старый Румынский лей"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"румынский лей"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"сербский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"российский рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Российский рубль (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"франк Руанды"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"саудовский риял"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"доллар Соломоновых Островов"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"сейшельская рупия"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Суданский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"суданский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Старый суданский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"шведская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"сингапурский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"фунт острова Святой Елены"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Словенский толар"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Словацкая крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"сомалийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"суринамский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"Суринамский гульден"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"южносуданский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"добра Сан-Томе и Принсипи (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"добра Сан-Томе и Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Рубль СССР"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Сальвадорский колон"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"сирийский фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"свазилендский лилангени"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"таиландский бат"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Таджикский рубль"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"таджикский сомони"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Туркменский манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"новый туркменский манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"тунисский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"тонганская паанга"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Тиморское эскудо"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Турецкая лира (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"турецкая лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"доллар Тринидада и Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"новый тайваньский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"танзанийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"украинская гривна"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Карбованец (украинский)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Старый угандийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"угандийский шиллинг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"доллар США"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Доллар США следующего дня"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"Доллар США текущего дня"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"Уругвайский песо (индекс инфляции)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Уругвайское старое песо (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"уругвайский песо"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"узбекский сум"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Венесуэльский боливар (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"венесуэльский боливар (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"венесуэльский боливар"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"вьетнамский донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"вату Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"самоанская тала"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"франк КФА BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Серебро"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"Золото"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Европейская составная единица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Европейская денежная единица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"расчетная единица европейского валютного соглашения (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"расчетная единица европейского валютного соглашения (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"восточно-карибский доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"СДР (специальные права заимствования)"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"ЭКЮ (единица европейской валюты)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Французский золотой франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Французский UIC-франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"франк КФА ВСЕАО"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"Палладий"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"французский тихоокеанский франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"Платина"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"единица RINET-фондов"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"тестовый валютный код"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"неизвестная валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Йеменский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"йеменский риал"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Югославский твердый динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Югославский новый динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Югославский динар"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Южноафриканский рэнд (финансовый)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"южноафриканский рэнд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Квача (замбийская) (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"замбийская квача"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Новый заир"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Заир"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Доллар Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Доллар Зимбабве (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_ru::CurrencyNames_ru() {
}

$Class* CurrencyNames_ru::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru, name, initialize, &_CurrencyNames_ru_ClassInfo_, allocate$CurrencyNames_ru);
	return class$;
}

$Class* CurrencyNames_ru::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun