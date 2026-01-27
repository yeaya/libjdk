#include <sun/util/resources/cldr/ext/CurrencyNames_pl.h>

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

$MethodInfo _CurrencyNames_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pl_MethodInfo_
};

$Object* allocate$CurrencyNames_pl($Class* clazz) {
	return $of($alloc(CurrencyNames_pl));
}

void CurrencyNames_pl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pl::getContents() {
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
			$of(u"zł"_s)
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
			$of("peseta andorska"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham ZEA"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afgani afgańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek albański"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram armeński"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("gulden antylski"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolska"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angolańska (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nowa kwanza angolańska (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza angolańska Reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"austral argentyński"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentyńskie (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"peso argentyńskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("szyling austriacki"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolar australijski"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"florin arubański"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azerbejdżański"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azerski"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"dinar Bośni i Hercegowiny"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marka zamienna Bośni i Hercegowiny"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dolar barbadoski"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bengalska"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("frank belgijski (zamienny)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("frank belgijski"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("frank belgijski (finansowy)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lew bułgarski wymienny"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"lew bułgarski socjalistyczny"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lew bułgarski"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"lew bułgarski (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahrański"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("frank burundyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dolar bermudzki"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("dolar brunejski"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano boliwijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso boliwijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol boliwijski"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"cruzeiro novo brazylijskie (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("cruzado brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brazylijskie (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brazylijski"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("nowe cruzado brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro brazylijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dolar bahamski"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum bhutański"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"kyat birmański"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"pula botswańska"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"rubel białoruski (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"rubel białoruski"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rubel białoruski (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dolar belizeński"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dolar kanadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("frank kongijski"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("frank szwajcarski"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"juan chiński (rynek zewnętrzny)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"juan chiński"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso kolumbijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"colon kostarykański"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("stary dinar serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"korona czechosłowacka"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"peso kubańskie wymienialne"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"peso kubańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"escudo zielonoprzylądkowe"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("funt cypryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("korona czeska"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("wschodnia marka wschodnioniemiecka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("marka niemiecka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"frank dżibutyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"korona duńska"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"peso dominikańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar algierski"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("sucre ekwadorski"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"korona estońska"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("funt egipski"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa erytrejska"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"peseta hiszpańska (Konto A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"peseta hiszpańska (konto wymienne)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"peseta hiszpańska"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiopski"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"marka fińska"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"dolar fidżyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("funt falklandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("frank francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("funt szterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"kupon gruziński larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"lari gruzińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi ghańskie (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi ghańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("funt gibraltarski"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("frank gwinejski"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli gwinejskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"ekwele gwinejskie Gwinei Równikowej"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("drachma grecka"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal gwatemalski"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escudo Gwinea Portugalska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"dolar gujański"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"dolar hongkoński"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira honduraska"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar chorwacki"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna chorwacka"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"gourde haitański"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"forint węgierski"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonezyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("funt irlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("funt izraelski"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("nowy szekel izraelski"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar iracki"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"rial irański"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("korona islandzka"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"lir włoski"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dolar jamajski"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"dinar jordański"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"jen japoński"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("szyling kenijski"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"riel kambodżański"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("frank komoryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"won północnokoreański"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"won południowokoreański"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar kuwejcki"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dolar kajmański"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazachskie"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"kip laotański"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"funt libański"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia lankijska"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dolar liberyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("lit litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talon litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("frank luksemburski"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"łat łotewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"rubel łotewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dirham marokański"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"frank marokański"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"lej mołdawski"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("frank malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"denar macedoński"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("frank malijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"kiat birmański"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca Makau"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauretańska (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ugija mauretańska"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"lira maltańska"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"funt maltański"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia maurytyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia malediwska"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawijska"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"peso meksykańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso srebrne meksykańskie (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo mozambickie"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metical Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambicki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dolar namibijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeryjska"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"cordoba nikaraguańska (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"cordoba nikaraguańska"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("gulden holenderski"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("korona norweska"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalska"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dolar nowozelandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"rial omański"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa panamski"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"inti peruwiański"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"sol peruwiański"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruwiański (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papuańska"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"peso filipińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"rupia pakistańska"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"złoty polski"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"złoty polski (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portugalskie"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paragwajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial katarski"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("dolar rodezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"lej rumuński (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"lej rumuński"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rubel rosyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rubel rosyjski (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("frank ruandyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dolar Wysp Salomona"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seszelska"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudański"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"funt sudański"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"funt sudański (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("korona szwedzka"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dolar singapurski"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"funt Świętej Heleny"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tolar słoweński"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"korona słowacka"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leone sierraleoński"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("szyling somalijski"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dolar surinamski"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("gulden surinamski"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"funt południowosudański"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra Wysp Świętego Tomasza i Książęcej (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra Wysp Świętego Tomasza i Książęcej"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("rubel radziecki"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("colon salwadorski"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("funt syryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni Suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht tajski"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"rubel tadżycki"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"somoni tadżyckie"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkmeński (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"manat turkmeński"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa’anga tongijska"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorskie"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira turecka (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turecka"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dolar trynidadzki"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nowy dolar tajwański"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"szyling tanzański"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"hrywna ukraińska"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"karbowaniec ukraiński"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"szyling ugandyjski (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("szyling ugandyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dolar amerykański"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso urugwajskie (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso urugwajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbecki"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"boliwar wenezuelski (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"boliwar wenezuelski (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("boliwar wenezuelski"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong wietnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu wanuackie"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"tala samoańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("frank CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("srebro"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"złoto"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("europejska jednostka rozrachunkowa (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("europejska jednostka rozrachunkowa (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dolar wschodniokaraibski"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"specjalne prawa ciągnienia"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("ECU"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"frank złoty francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("UIC-frank francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("frank CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("pallad"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("frank CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platyna"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("testowy kod waluty"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("nieznana waluta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"dinar jemeński"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial jemeński"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"nowy dinar jugosławiański"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"dinar jugosławiański wymienny"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"rand południowoafrykański (finansowy)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"rand południowoafrykański"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambijska (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambijska"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("nowy zair zairski"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zair zairski"_s)
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

CurrencyNames_pl::CurrencyNames_pl() {
}

$Class* CurrencyNames_pl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pl, name, initialize, &_CurrencyNames_pl_ClassInfo_, allocate$CurrencyNames_pl);
	return class$;
}

$Class* CurrencyNames_pl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun