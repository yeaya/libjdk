#include <sun/util/resources/cldr/ext/CurrencyNames_is.h>

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

$MethodInfo _CurrencyNames_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_is, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_is, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_is",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_is_MethodInfo_
};

$Object* allocate$CurrencyNames_is($Class* clazz) {
	return $of($alloc(CurrencyNames_is));
}

void CurrencyNames_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_is::getContents() {
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
			$of("Andorrskur peseti"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"arabískt dírham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albanskt lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armenskt dramm"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("hollenskt Antillugyllini"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"angólsk kvansa"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentine Austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentískur pesi (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"argentínskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Austurrískur skildingur"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ástralskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"arúbönsk flórína"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("aserskt manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"skiptanlegt Bosníu og Hersegóvínu-mark"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadoskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladessk taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Belgískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Lef"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"búlgarskt lef"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bareinskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"búrúndískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Bermúdadalur"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"brúneiskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"bólivíani"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Bólivískur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivian Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"brasilískt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamadalur"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"bútanskt núltrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Búrmverskt kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"botsvönsk púla"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"hvítrússnesk rúbla"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"hvítrússnesk rúbla (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"belískur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanadadalur"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kongóskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("svissneskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Chilean Unidades de Fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"síleskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"kínverskt júan (utan heimalands)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"kínverskt júan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"kólumbískur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kostarískt kólon"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Tékknesk króna, eldri"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"kúbverskur skiptanlegur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"kúbverskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"grænhöfðeyskur skúti"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Kýpverskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"tékknesk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Austurþýskt mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Þýskt mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"djíbútískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"dönsk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"dóminískur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"alsírskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuador Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Eistnesk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egypskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"erítresk nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Spænskur peseti"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"eþíópískt birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("evra"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finnskt mark"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("fidjeyskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falklenskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Franskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("sterlingspund"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"georgískur lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ganverskur sedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Gíbraltarspund"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"gambískur dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Gíneufranki"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Drakma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("gvatemalskt kvesal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Portúgalskur, gíneskur skúti"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"gvæjanskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hong Kong-dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"hondúrsk lempíra"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"króatísk kúna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"haítískur gúrdi"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"ungversk fórinta"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"indónesísk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Írskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Ísraelskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nýr ísraelskur sikill"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"indversk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"írakskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"íranskt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"íslensk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Ítölsk líra"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"jamaískur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"jórdanskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japanskt jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"kenískur skildingur"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgiskt som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"kambódískt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"kómoreyskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"norðurkóreskt vonn"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"suðurkóreskt vonn"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"kúveiskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("caymaneyskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kasakst tengi"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laoskt kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"líbanskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"srílönsk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"líberískur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotho Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Litháískt lít"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Lithuanian Talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Lúxemborgarfranki"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lettneskt lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Lettnesk rúbla"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"líbískur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"marokkóskt dírham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Marokkóskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"moldavískt lei"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagaskararjari"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Madagaskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"makedónskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Malískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("mjanmarskt kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"mongólskur túríkur"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"makaósk pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"márítönsk úgía (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"márítönsk úgía"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Meltnesk líra"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Maltneskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"máritísk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"maldíveysk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"malavísk kvaka"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"mexíkóskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexíkóskur silfurpesi (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Mexíkóskur pesi, UDI"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"malasískt ringit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Mósambískur skúti"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mósambískt metikal"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"namibískur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nígerísk næra"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Níkarögsk kordóva (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"níkarögsk kordóva"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Hollenskt gyllini"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"norsk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"nepölsk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"nýsjálenskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ómanskt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balbói"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"perúskt sól"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"papúsk kína"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filippseyskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"pakistönsk rúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"pólskt slot"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of("Slot"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Portúgalskur skúti"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"paragvæskt gvaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"katarskt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rúmenskt lei (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rúmenskt lei"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbneskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"rússnesk rúbla"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rússnesk rúbla (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"rúandskur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"sádíarabískt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"salómonseyskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Seychellesrúpía"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Súdanskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"súdanskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Súdanskt pund (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"sænsk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"singapúrskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("helenskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Slóvenskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Slóvakísk króna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"síerraleónsk ljóna"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"sómalískur skildingur"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Súrínamdalur"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Suriname Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"suðursúdanskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Saó Tóme og Prinsípe-dóbra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Saó Tóme og Prinsípe-dóbra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Soviet Rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("El Salvador Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"sýrlenskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"svasílenskur lílangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"taílenskt bat"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Tadsjiksk rúbla"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tadsjikskur sómóni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Túrkmenskt manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"túrkmenskt manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"túnískur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Tongapanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Tímorskur skúti"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Tyrknesk líra (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"tyrknesk líra"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trínidad og Tóbagó-dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"taívanskur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tansanískur skildingur"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"úkraínsk hrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrainian Karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"úgandskur skildingur"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Bandaríkjadalur"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Bandaríkjadalur (næsta dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"Bandaríkjadalur (sama dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"úrúgvæskur pesi"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"úsbekskt súm"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bolívar í Venesúela (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venesúelskur bólívari (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venesúelskur bólívari"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"víetnamskt dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"vanúatúskt vatú"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Samóatala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"miðafrískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"austurkarabískur dalur"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Sérstök dráttarréttindi"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Franskur gullfranki"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Franskur franki, UIC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"vesturafrískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"pólinesískur franki"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"óþekktur gjaldmiðill"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Jemenskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"jemenskt ríal"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Júgóslavneskur denari"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Rand (viðskipta)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"suðurafrískt rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambian Kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"sambísk kvaka"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Simbabveskur dalur"_s)
		})
	}));
	return data;
}

CurrencyNames_is::CurrencyNames_is() {
}

$Class* CurrencyNames_is::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_is, name, initialize, &_CurrencyNames_is_ClassInfo_, allocate$CurrencyNames_is);
	return class$;
}

$Class* CurrencyNames_is::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun