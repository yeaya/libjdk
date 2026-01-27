#include <sun/util/resources/cldr/ext/CurrencyNames_lt.h>

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

$MethodInfo _CurrencyNames_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lt_MethodInfo_
};

$Object* allocate$CurrencyNames_lt($Class* clazz) {
	return $of($alloc(CurrencyNames_lt));
}

void CurrencyNames_lt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lt::getContents() {
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
			$of("Andoros peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Jungtinių Arabų Emyratų dirhamas"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afganistano afganis (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afganistano afganis"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Albanijos lekas (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanijos lekas"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Armėnijos dramas"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Olandijos Antilų guldenas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolos kvanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolos kvanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolos naujoji kvanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolos patikslinta kvanza (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentinos australs"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Argentinos pesos ley (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Argentinos pesai (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentinos pesas (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentinos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Austrijos šilingas"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australijos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Arubos guldenas"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbaidžano manatas (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Azerbaidžano manatas"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosnijos ir Hercegovinos dinaras (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Bosnijos ir Hercegovinos konvertuojamoji markė"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Bosnijos ir Hercegovinos naujasis dinaras (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadoso doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Bangladešo taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgijos frankas (konvertuojamas)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgijos frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgijos frankas (finansinis)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Bulgarijos levas (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Bulgarų socialistų leva"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgarijos levas"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Bulgarijos levas (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahreino dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Burundžio frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Brunėjaus doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivijos bolivijanas"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Bolivijos bolivijanas (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Bolivijos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivijos mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brazilijos naujieji kruzeirai (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brazilijos kruzadai (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brazilijos kruzeiras (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilijos realas"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brazilijos naujiejis kruzadai (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brazilijos kruzeiras (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Brazilijos kruzeirai (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Bahamų doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Butano ngultrumas"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Birmos kijatas"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botsvanos pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Baltarusijos naujasis rublis (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Baltarusijos rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Baltarusijos rublis (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belizo doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanados doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Kongo frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR eurai"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Šveicarijos frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"Čilės eskudai"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Čiliečių unidades de fomentos"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Čilės pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Kinijos Užsienio juanis"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of("Kinijos \"People\" banko doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Kinijos ženminbi juanis"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolumbijos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("unidad de valor realai"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kosta Rikos kolonas"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Serbijos dinaras (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Čekoslovakų sunkusis korunas"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Kubos konvertuojamasis pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kubos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Žaliojo Kyšulio eskudas"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Kipro svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Čekijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Rytų Vokietijos markė"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Vokietijos markė"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Džibučio frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominikos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Alžyro dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"Ekvadoro sukrė"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ekvadoro constante (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egipto svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Eritrėjos nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Ispanų pesetai (A sąskaita)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Ispanų pesetai (konvertuojama sąskaita)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Ispanijos peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Etiopijos biras"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euras"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Suomijos markė"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Fidžio doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Falklando salų svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Prancūzijos frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Didžiosios Britanijos svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Gruzinų kupon larits"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Gruzijos laris"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ganos sedis (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ganos sedis"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltaro svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambijos dalasis"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Gvinėjos frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guinean sylis"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Pusiaujo Guinean ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Graikijos drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Gvatemalos ketcalis"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Portugalų Gvinėjos eskudas"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Gvinėjos-Bisau pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Gajanos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Honkongo doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Hondūro lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Kroatijos dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kroatijos kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Haičio gurdas"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Vengrijos forintas"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonezijos rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Airijos svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Izraelio svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"Izraelio šekelis (1980–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Izraelio naujasis šekelis"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indijos rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Irako dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Irano rialas"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"Islandijos krona (1918–1981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Islandijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italijos lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaikos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordanijos dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japonijos jena"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Kenijos šilingas"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kirgizijos somas"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Kambodžos rielis"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komoro frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Šiaurės Korėjos vonas"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Pietų Korėjos hwanas (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Pietų Korėjos vonas (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Pietų Korėjos vonas"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuveito dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Kaimanų salų doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Kazachstano tengė"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laoso kipas"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libano svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Šri Lankos rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberijos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesoto lotis"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lietuvos litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Lietuvos talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("Liuksemburgo konvertuojamas frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Liuksemburgo frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Liuksemburgo finansinis frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Latvijos latas"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvijos rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libijos dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maroko dirhamas"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Maroko frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Monegasque frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"Moldovų cupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Moldovos lėja"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagaskaro ariaris"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Madagaskaro frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Makedonijos denaras"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Makedonijos denaras (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malio frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Mianmaro kijatas"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolijos tugrikas"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Makao pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mauritanijos ugija (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritanijos ugija"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltos lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Maltos svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauricijaus rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"Maldyvų rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Maldyvų rufija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Malavio kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksikos pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Meksikos sidabrinis pesas (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Meksikos United de Inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaizijos ringitas"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambiko eskudas"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambiko metikalis (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambiko metikalis"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibijos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerijos naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nikaragvos kardoba (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Nikaragvos kordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Nyderlandų guldenas"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Norvegijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalo rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Naujosios Zelandijos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omano rialas"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamos balboja"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peru intis"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peru solis"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peru solis (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Papua Naujosios Gvinėjos kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Filipinų pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistano rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Lenkijos zlotas"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Lenkijos zlotas (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portugalijos eskudas"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paragvajaus guaranis"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Kataro rialas"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Rodezijos doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Rumunijos lėja (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rumunijos lėja"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbijos dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rusijos rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rusijos rublis (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ruandos frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudo Arabijos rijalas"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Saliamono salų doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Seišelių rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Sudano dinaras (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudano svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Sudano svaras (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Švedijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Singapūro doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Šv. Elenos salų svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Slovėnijos tolaras"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slovakijos krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Siera Leonės leonė"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somalio šilingas"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surimano doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surimano guldenas"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Pietų Sudano svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"San Tomės ir Principės dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"San Tomės ir Principės dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Sovietų rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Salvadoro kolonas"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Sirijos svaras"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Svazilando lilangenis"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Tailando batas"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Tadžikistano rublis"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Tadžikistano somonis"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmėnistano manatas (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Turkmėnistano manatas"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tuniso dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Tongo paanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timoro eskudas"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Turkijos lira (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkijos lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidado ir Tobago doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Taivano naujasis doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzanijos šilingas"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrainos grivina"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrainos karbovanecas"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandos šilingas (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ugandos šilingas"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("JAV doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("JAV doleris (kitos dienos)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"JAV doleris (šios dienos)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Urugvajaus pesai en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Urugvajaus pesas (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Urugvajaus pesas"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Uzbekistano sumas"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venesuelos bolivaras (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venesuelos bolivaras (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Venesuelos bolivaras"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vietnamo dongas"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Vietnamo dongas (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu vatas"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoa tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA BEAC frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Sidabras"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Auksas"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Europos suvestinės vienetas"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("Europos piniginis vienetas"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("Europos valiutos / apskaitos vienetas (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("Europos valiutos / apskaitos vienetas (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Rytų Karibų doleris"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("SDR tarptautinis valiutos fondas"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Europos piniginis vienetas (1993–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Aukso frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Prancūzijos UIC - frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA BCEAO frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladis"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP frankas"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET fondai"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of(u"Sukrė"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Tikrinamas valiutos kodas"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"Azijos plėtros banko apskaitos vienetas"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"nežinoma valiuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Jemeno dinaras"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Jemeno rialas"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Jugoslavijos kietasis dinaras (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Jugoslavijos naujasis dinaras (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Jugoslavijos konvertuojamas dinaras (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Jugoslavijos reformuotas dinaras (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Pietų Afrikos finansinis randas"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Pietų Afrikos Respublikos randas"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambijos kvača (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Zambijos kvača"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zairo naujasis zairas (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zairo zairas (1971–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabvės doleris (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Zimbabvės doleris (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Zimbabvės doleris (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_lt::CurrencyNames_lt() {
}

$Class* CurrencyNames_lt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lt, name, initialize, &_CurrencyNames_lt_ClassInfo_, allocate$CurrencyNames_lt);
	return class$;
}

$Class* CurrencyNames_lt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun