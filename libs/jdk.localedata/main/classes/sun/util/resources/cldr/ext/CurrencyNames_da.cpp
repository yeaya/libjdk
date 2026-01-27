#include <sun/util/resources/cldr/ext/CurrencyNames_da.h>

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

$MethodInfo _CurrencyNames_da_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_da, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_da, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_da_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_da",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_da_MethodInfo_
};

$Object* allocate$CurrencyNames_da($Class* clazz) {
	return $of($alloc(CurrencyNames_da));
}

void CurrencyNames_da::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_da::getContents() {
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
			$of("kr."_s)
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
			$of("Andorransk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham fra de Forenede Arabiske Emirater"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afghansk afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghansk afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albansk lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armensk dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Nederlandske Antiller-gylden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolansk kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolansk kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolansk nye kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolansk kwanza (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentinsk austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentinsk peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Østrigsk schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("australsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubansk florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Aserbajdsjansk manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("aserbajdsjansk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Bosnien-Hercegovinsk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosnien-hercegovinsk konvertibel mark"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladeshisk taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgisk franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgisk franc (financial)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Bulgarsk hard lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bulgarsk lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainsk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("bruneisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviansk boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Boliviansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Boliviansk mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brasiliansk cruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brasiliansk cruzado (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brasiliansk cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brasiliansk real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brasiliansk cruzado novo (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brasiliansk cruzeiro (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutansk ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Burmesisk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswansk pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Hviderussisk rubel (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("hviderussisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"hviderussisk rubel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("canadisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("congolesisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("schweizerfranc"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR franc"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilensk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("kinesisk yuan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("kinesisk yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("colombiansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"costaricansk colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Serbisk dinar (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Tjekkoslovakisk hard koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("cubansk konvertibel peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("cubansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Cypriotisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("tjekkisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Østtysk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("Tysk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("djiboutisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("dansk krone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algerisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadoriansk sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estisk kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreisk nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Spansk peseta (A–konto)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("Spansk peseta (konvertibel konto)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spansk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopisk birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finsk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("fijiansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"pund fra Falklandsøerne"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Fransk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("britisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Georgisk kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("georgisk lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ghanesisk cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ghanesisk cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltarisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambisk dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guineansk syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Ækvatorialguineask ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Græsk drakme"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalansk quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugisisk guinea escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guineansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("guyansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("hongkongsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduransk lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Kroatisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kroatisk kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitisk gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("ungarsk forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indonesisk rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Irsk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Israelsk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("ny israelsk shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indisk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iransk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("islandsk krone"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italiensk lire"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaicansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordansk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japansk yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyansk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgisisk som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("cambodjansk riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("comorisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("nordkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("sydkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("caymansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kasakhisk tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laotisk kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanesisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("srilankansk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesothisk loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litauisk litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Litauisk talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("Luxembourgsk konvertibel franc"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxembourgsk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Luxembourgsk finansiel franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lettisk lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Lettisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libysk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marokkansk dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Marokkansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldovisk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madagaskisk ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Madagaskisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonsk denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmarsk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongolsk tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("macaosk pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mauritansk ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("mauritansk ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltesisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Maltesisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauritisk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("maldivisk rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexicansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexicansk silver peso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malaysisk ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambiquisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambiquisk metical (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mozambiquisk metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigeriansk naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nicaraguansk cordoba (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("nicaraguansk cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Hollandsk guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norsk krone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalesisk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("newzealandsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omansk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamansk balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("peruviansk inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruansk sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"peruviansk sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papuansk kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filippinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistansk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("polsk zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Polsk zloty (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portugisisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguaysk guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("qatarsk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rumænsk leu (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rumænsk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("russisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Russisk rubel (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("rwandisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudiarabisk riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("salomonsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychellisk rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Sudansk dinar (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudansk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Sudansk pund (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("svensk krone"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singaporeansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("pund fra Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Slovensk tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slovakisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierraleonsk leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somalisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamsk guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("sydsudansk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra fra Sao Tome og Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobra fra Sao Tome og Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sovjetisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Salvadoransk colon"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syrisk pund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swazilandsk lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("thailandsk baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tadsjikisk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("tadsjikisk somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmensk manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmensk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunesisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongansk paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Escudo fra Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Tyrkisk lire (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("tyrkisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("trinidadisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("ny taiwansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tanzanisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainsk grynia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrainsk karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandisk shilling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("amerikansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Amerikansk dollar (næste dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("Amerikansk dollar (samme dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguayansk peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("usbekisk sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuelansk bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelansk bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("venezuelansk bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamesisk dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuaisk vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samoansk tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA-franc (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Sølv"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Guld"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("EURCO"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("EMU"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"østkaribisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("SDR"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("ECU"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Fransk guldfranc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Fransk UIC-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA-franc BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platin"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET-fond"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("testvalutakode"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("ukendt valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Yemenitisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("yemenitisk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Jugoslavisk hard dinar (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Jugoslavisk noviy dinar (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Jugoslavisk konvertibel dinar (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("Sydafrikansk rand (financial)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("sydafrikansk rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambisk kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Ny zairisk zaire (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zairisk zaire (1971–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabwisk dollar (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Zimbabwisk dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Zimbabwisk dollar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_da::CurrencyNames_da() {
}

$Class* CurrencyNames_da::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_da, name, initialize, &_CurrencyNames_da_ClassInfo_, allocate$CurrencyNames_da);
	return class$;
}

$Class* CurrencyNames_da::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun