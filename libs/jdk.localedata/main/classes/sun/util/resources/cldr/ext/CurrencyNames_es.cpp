#include <sun/util/resources/cldr/ext/CurrencyNames_es.h>

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

$MethodInfo _CurrencyNames_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_MethodInfo_
};

$Object* allocate$CurrencyNames_es($Class* clazz) {
	return $of($alloc(CurrencyNames_es));
}

void CurrencyNames_es::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es::getContents() {
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
			$of("ESP"_s),
			$of(u"₧"_s)
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
			$of("UYW"_s),
			$of("UYW"_s)
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
			$of("XAF"_s),
			$of("XAF"_s)
		}),
		$$new($ObjectArray, {
			$of("XCD"_s),
			$of("XCD"_s)
		}),
		$$new($ObjectArray, {
			$of("XOF"_s),
			$of("XOF"_s)
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
			$of("peseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dírham de los Emiratos Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"florín antillano"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kuanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angoleño (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nuevo kwanza angoleño (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza reajustado angoleño (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("austral argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentino (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"chelín austriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"dólar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"florín arubeño"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azerí (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azerbaiyano"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("dinar bosnio"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marco convertible de Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"dólar barbadense"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franco belga (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franco belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franco belga (financiero)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev fuerte búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lev búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahreiní"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"franco burundés"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"dólar bermudeño"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"dólar bruneano"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("MVDOL boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"nuevo cruceiro brasileño (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"cruzado brasileño"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruceiro brasileño (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"real brasileño"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"nuevo cruzado brasileño"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"cruceiro brasileño"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"dólar bahameño"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("gultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("kyat birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"nuevo rublo bielorruso (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rublo bielorruso"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rublo bielorruso (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dólar beliceño"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dólar canadiense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"franco congoleño"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franco suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("franco WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("unidad de fomento chilena"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("yuan chino (extracontinental)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("unidad de valor real colombiana"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"colón costarricense"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("antiguo dinar serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("corona fuerte checoslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubano convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo de Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("libra chipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("corona checa"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("ostmark de Alemania del Este"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"marco alemán"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco yibutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("sucre ecuatoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("unidad de valor constante (UVC) ecuatoriana"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("corona estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("libra egipcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"peseta española (cuenta A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"peseta española (cuenta convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"peseta española"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"marco finlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"dólar fiyiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("libra malvinense"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"franco francés"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("libra esterlina"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("kupon larit georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi ghanés (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"libra gibraltareña"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franco guineano"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli guineano"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekuele de Guinea Ecuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("dracma griego"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escudo de Guinea Portuguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"peso de Guinea-Bissáu"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"dólar guyanés"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"dólar hongkonés"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"lempira hondureño"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar croata"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"forinto húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("libra irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"libra israelí"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"nuevo séquel israelí"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia india"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"dinar iraquí"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"rial iraní"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"dólar jamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"chelín keniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comorense"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won norcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won surcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"dinar kuwaití"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dólar de las Islas Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazako"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia esrilanquesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dólar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lesothense"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talonas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"franco convertible luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"franco luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"franco financiero luxemburgués"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"lats letón"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"rublo letón"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dírham marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"franco marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariari"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franco malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("dinar macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"franco malí"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kiat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca de Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"uguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("uguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("libra maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kuacha malauí"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso de plata mexicano (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"unidad de inversión (UDI) mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"escudo mozambiqueño"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"antiguo metical mozambiqueño"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"dólar namibio"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"córdoba nicaragüense (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba oro"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"florín neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"rupia nepalí"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"dólar neozelandés"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"rial omaní"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa panameño"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("inti peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruano (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"rupia pakistaní"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("esloti"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"zloty polaco (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"escudo portugués"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaraní paraguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"rial catarí"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"dólar rodesiano"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("antiguo leu rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"rublo ruso (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"franco ruandés"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"rial saudí"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"dólar salomonense"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seychellense"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudanés"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("libra sudanesa antigua"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"dólar singapurense"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("libra de Santa Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"tólar esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("corona eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leona"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"chelín somalí"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"dólar surinamés"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"florín surinamés"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("libra sursudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"rublo soviético"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"colón salvadoreño"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("libra siria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("bat"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("rublo tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turcomano (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunecino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo timorense"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira turca (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"dólar de Trinidad y Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"nuevo dólar taiwanés"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"chelín tanzano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("grivna"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("karbovanet ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"chelín ugandés (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"chelín ugandés"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dólar estadounidense"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"dólar estadounidense (día siguiente)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dólar estadounidense (mismo día)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("peso uruguayo en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso uruguayo (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("uyw"_s),
			$of("unidad previsional uruguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolívar venezolano (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolívar venezolano (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar venezolano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"franco CFA de África Central"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("plata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("oro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("unidad compuesta europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("unidad monetaria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("unidad de cuenta europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("unidad de cuenta europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"dólar del Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("derechos especiales de giro"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("unidad de moneda europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franco oro francés"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"franco UIC francés"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"franco CFA de África Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("paladio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platino"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fondos RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"código reservado para pruebas"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("moneda desconocida"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"dinar yemení"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial yemení"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("dinar fuerte yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("super dinar yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("dinar convertible yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("rand sudafricano (financiero)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zambiano (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kuacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"nuevo zaire zaireño"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"zaire zaireño"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dólar de Zimbabue"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"dólar zimbabuense"_s)
		})
	}));
	return data;
}

CurrencyNames_es::CurrencyNames_es() {
}

$Class* CurrencyNames_es::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es, name, initialize, &_CurrencyNames_es_ClassInfo_, allocate$CurrencyNames_es);
	return class$;
}

$Class* CurrencyNames_es::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun