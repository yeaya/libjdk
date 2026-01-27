#include <sun/util/resources/cldr/ext/CurrencyNames_bs.h>

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

$MethodInfo _CurrencyNames_bs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bs, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bs, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bs",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bs_MethodInfo_
};

$Object* allocate$CurrencyNames_bs($Class* clazz) {
	return $of($alloc(CurrencyNames_bs));
}

void CurrencyNames_bs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bs::getContents() {
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
			$of("KM"_s)
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
			$of("kn"_s)
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
			$of("din."_s)
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
			$of("XPF"_s),
			$of("XPF"_s)
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
			$of("Andorska pezeta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham Ujedinjenih Arapskih Emirata"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Avganistanski avgani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afganistanski afgan"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Albanski lek (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanski lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Armenski dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Holandskoantilski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolska kvanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolijska kvanza (1977–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolijska nova kvanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolijska kvanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentinski austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentinski pezo (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentinski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Austrijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Arubanski florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbejdžanski manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Azerbejdžanski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosanskohercegovački dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Bosanskohercegovačka konvertibilna marka"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Bosanskohercegovački novi dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadoski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Bangladeška taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgijski frank (konvertibilni)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgijski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgijski frank (finansijski)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Bugarski tvrdi lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Bugarski socijalistički lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bugarski lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Bugarski lev (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahreinski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunejski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivijski boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Bolivijski boliviano (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Bolivijski pezo"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivijski mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brazilski kruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brazilski kruzado (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brazilski kruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilski real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brazilski kruzado novo (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brazilski kruzeiro (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Brazilski kruzeiro (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Butanski ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Burmanski kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Bocvanska pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Beloruska nova rublja (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Bjeloruska rublja"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Bjeloruska rublja (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belizeanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanadski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Kongoanski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR Evro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Švicarski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR franak"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"Čileanski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Čileanski unidades de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Čileanski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Kineski juan (izvanteritorijalni)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of("Dolar kineske narodne banke"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Kineski juan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolumbijski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Kolumbijski Unidade real de valor"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kostarikanski kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Srpski dinar (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Čehoslovačka tvrda koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Kubanski konvertibilni pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubanski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Zelenortski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Kipratska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Češka kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Istočnoevropska marka"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Nemačka marka"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Džibutski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danska kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominikanski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Alžirski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ekvadorijski sukr"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ekvadorski unidad de valor konstantin (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estonska kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egipatska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrejska nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Španska pezeta (račun) ESA"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Španska pezeta (konvertibilni račun)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Španska pezeta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Etiopski bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finska marka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Fidžijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Folklandska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Francuski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Britanska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Gruzijski kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Gruzijski lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ganijski cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ganski cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltarska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambijski dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Gvinejski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Gvinejski sili"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Evatorijalna gvineja ekvele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Drahma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Gvatemalski kecal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugalska Gvineja eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Gvineja bisao pezo"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Gvajanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Honkonški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Honduraška lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Hrvatski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Hrvatska kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Haićanski gurd"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Mađarska forinta"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Indonežanska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Irska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Izraelska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"stari izraelski šekeli"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Izraelski novi šekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indijska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Irački dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Iranski rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of("stara islandska kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Islandska kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italijanska lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Jamajčanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordanski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanski jen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Kenijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kirgistanski som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kambodžanski rijel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komorski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Sjevernokorejski von"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Južno-korejski hvan (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Južno-korejski Von (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Južnokorejski von"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuvajtski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Kajmanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazahstanski tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laoski kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libanska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Šrilankanska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotski loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litvanski litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Litvanski talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Luksemburški konvertibilni franak"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Luksemburški franak"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Luksemburški finansijski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Letonski lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvijska rublja"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libijski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Marokanski dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Marokanski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"Monegaskaški franak"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("Moldavski kupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldavski lej"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Malagaški arijari"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Malagasijski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Makedonski denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Makedonski denar (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malijanski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Mijanmarski kjat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolski tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Makaonska pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mauritanijska ugvija (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritanijska ugvija"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Malteška lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Malteška funta"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauricijska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Maldivska rufija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Malavijska kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Meksički pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Meksijski srebrno pezo (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Meksijski unidad de inverzion"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malezijski ringit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambijski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambijski metikal (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambijski metikal"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerijska naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nikaragvanška kordoba (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Nikaragvanska kordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Holandski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Norveška kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Novozelandski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omanski rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamska balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peruvijski inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peruanski sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peruvijski sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Papue Nove Gvineje"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Filipinski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistanska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Poljski zlot"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Poljski zloti (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portugalski eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paragvajski gvarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Katarski rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Rodizijski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rumunski leu (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Rumunski lej"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Srpski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Ruska rublja"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Ruska rublja (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ruandski franak"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudijski rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Solomonski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Sejšelska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Sudanski dinar (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudanska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Sudanska funta (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Švedska kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapurski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Svetohelenska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Slovenski tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Slovačka kruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sijeraleonski leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somalski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamski gilder"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Južnosudanska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra Sao Toma i Principa (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Sao Toma i Principa"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sovjetska rublja"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Salvadorski kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Sirijska funta"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Svazilendski lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Tajlandski baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Tadžakistanska rublja"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Tadžikistanski somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmenistanski manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Turkmenistanski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Tuniški dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Tonganska panga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Timorški eskudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Turska lira (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turska lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Trinidadtobaški dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Novi tajvanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzanijski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrajinska hrivnja"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrajinski karbovaneti"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandijski šiling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ugandski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Američki dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"SAD dolar (sledeći dan)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("SAD dolar (isti dan)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Urugvajski pezo en unidades indeksades"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Urugvajski pezo (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Urugvajski pezos"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Uzbekistanski som"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venecuelanski bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venecuelanski bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Venecuelanski bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vijetnamski dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Vijetnamski dong (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatski vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoanska tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Centralnoafrički franak (CFA)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Srebro"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Zlato"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("Evropska kompozitna jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Evropska novčana jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Evropska jedinica računa (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Evropska jedinica računa (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Istočnokaripski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Posebna prava"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("Evropska valutna jedinica"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Francuski zlatni frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Francuski UIC-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Zapadnoafrički franak (CFA)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladijum"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franak (CFP)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET fondovi"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Kod testirane valute"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Nepoznata valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Jemenski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Jemenski rijal"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("Jugoslovenski tvrdi dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("Jugoslovenski novi dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("Jugoslovenski konvertibilni dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of("Jugoslovenski reformirani dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Južnoafrički rand (finansijski)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Južnoafrički rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambijska kvača (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambijska kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zairski novi zair (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zairski zair (1971–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabvejski dolar (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Zimbabvejski dolar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Zimbabvejski dolar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_bs::CurrencyNames_bs() {
}

$Class* CurrencyNames_bs::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bs, name, initialize, &_CurrencyNames_bs_ClassInfo_, allocate$CurrencyNames_bs);
	return class$;
}

$Class* CurrencyNames_bs::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun