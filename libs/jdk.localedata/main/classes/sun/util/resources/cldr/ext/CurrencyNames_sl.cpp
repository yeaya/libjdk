#include <sun/util/resources/cldr/ext/CurrencyNames_sl.h>

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

$MethodInfo _CurrencyNames_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sl_MethodInfo_
};

$Object* allocate$CurrencyNames_sl($Class* clazz) {
	return $of($alloc(CurrencyNames_sl));
}

void CurrencyNames_sl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sl::getContents() {
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
			$of("UAH"_s)
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
			$of("andorska peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirham Združenih arabskih emiratov"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"stari afganistanski afgani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albanski lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armenski dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("nizozemsko-antilski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolska kvanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"stara angolska kvanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolska nova kvanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"konvertibilna angolska kvanza (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentinski avstral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinski peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"avstrijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("avstralski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("arubski florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"stari azerbajdžanski manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajdžanski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("bosansko-hercegovski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosansko-hercegovska konvertibilna marka"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"barbadoški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"bangladeška taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("belgijski konvertibilni frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("belgijski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"belgijski finančni frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("stari bolgarski lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bolgarski lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahranski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("brunejski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("bolivijski boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("bolivijski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("bolivijski mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"brazilski novi kruzeiro (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("brazilski kruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"stari brazilski kruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brazilski real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("novi brazilski kruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("brazilski kruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("butanski ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmanski kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("bocvanska pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"beloruski novi rubelj (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("beloruski rubelj"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"beloruski rubelj (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizejski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanadski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongovski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("evro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"švicarski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("frank WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"čilski unidades de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"čilski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("kitajski juan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("kitajski juan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbijski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("kolumbijska enota realne vrednosti"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kostariški kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("stari srbski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"češkoslovaška krona"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("kubanski konvertibilni peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubanski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("zelenortski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("ciprski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"češka krona"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"vzhodnonemška marka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"nemška marka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"džibutski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("danska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikanski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"alžirski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("ekvadorski sukre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("ekvadorska enota realne vrednosti (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("estonska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egiptovski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritrejska nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"španska pezeta (račun A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"španska pezeta (račun B)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"španska pezeta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopski bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("evro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("finska marka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fidžijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falklandski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("francoski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("britanski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("gruzijski bon lari"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("gruzijski lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"stari ganski cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ganski cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltarski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambijski dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("gvinejski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("gvinejski sili"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekwele Ekvatorialne Gvineje"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"grška drahma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("gvatemalski kecal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("eskudo Portugalske Gvineje"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso Gvineje Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("gvajanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"hongkonški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"honduraška lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"hrvaški dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"hrvaška kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitski gurd"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"madžarski forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indonezijska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("irski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("izraelski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"izraelski šekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indijska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"iraški dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iranski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("islandska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("italijanska lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"jamajški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordanski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japonski jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"kenijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"kirgiški som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"kamboški riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komorski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("severnokorejski von"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"južnokorejski von"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuvajtski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("kajmanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazahstanski tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"laoški kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanonski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"šrilanška rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"lesoški loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litovski litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("litvanski litas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"luksemburški konvertibilni frank"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"luksemburški frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"luksemburški finančni frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("latvijski lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("latvijski rubelj"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libijski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"maroški dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"maroški frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldavijski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"malgaški ariarij"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"malgaški frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonski denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("malijski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("mjanmarski kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongolski tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("makavska pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mavretanska uguija (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("mavretanska uguija"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"malteška lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"malteški funt"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mavricijska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("maldivska rufija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"malavijska kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"mehiški peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"mehiški srebrni peso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"mehiška inverzna enota (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malezijski ringit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"mozambiški eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"stari mozambiški metikal"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mozambiški metikal"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigerijska naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"nikaraška kordova"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nikaraška zlata kordova"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("nizozemski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"norveška krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("novozelandski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omanski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamska balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("perujski inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("perujski sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"perujski sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina Papue Nove Gvineje"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filipinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistanska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("poljski novi zlot"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"stari poljski zlot (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("portugalski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paragvajski gvarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katarski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("rodezijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("stari romunski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("romunski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("srbski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("ruski rubelj"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"ruski rubelj (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("solomonski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"sejšelska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("stari sudanski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudanski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("stari sudanski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"švedska krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singapurski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("funt Sv. Helene"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("slovenski tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"slovaška krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sieraleonski leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"somalski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("surinamski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"južnosudanski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"saotomejska dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("saotomejska dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("sovjetski rubelj"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("salvadorski kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("sirijski funt"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("svazijski lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("tajski baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"tadžikistanski rubelj"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tadžikistanski somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("turkmenski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmenistanski novi manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunizijski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("tongovska paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("timorski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"stara turška lira"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"nova turška lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dolar Trinidada in Tobaga"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("novi tajvanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tanzanijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrajinska grivna"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("ukrajinski karbovanci"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"stari ugandski šiling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ugandski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ameriški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"ameriški dolar, naslednji dan"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"ameriški dolar, isti dan"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"stari urugvajski peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("urugvajski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"uzbeški sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"venezuelski bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelski bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("venezuelski bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vientnamski dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatujski vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samoanska tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA frank BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("srebro"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("zlato"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("evropska sestavljena enota"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("evropska monetarna enota"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"evropska obračunska enota (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"evropska obračunska enota (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("vzhodnokaribski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"posebne pravice črpanja"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("evropska denarna enota"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("zlati frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("frank UIC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"zahodnoafriški frank CFA"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("paladij"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("koda za potrebe testiranja"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("neznana valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("jemenski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("stari jugoslovanski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("novi jugoslovanski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("jugoslovanski konvertibilni dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"južnoafriški finančni rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"južnoafriški rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambijska kvača (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"zambijska kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("zairski novi zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zairski zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("zimbabvejski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("zimbabvejski dolar (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_sl::CurrencyNames_sl() {
}

$Class* CurrencyNames_sl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sl, name, initialize, &_CurrencyNames_sl_ClassInfo_, allocate$CurrencyNames_sl);
	return class$;
}

$Class* CurrencyNames_sl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun