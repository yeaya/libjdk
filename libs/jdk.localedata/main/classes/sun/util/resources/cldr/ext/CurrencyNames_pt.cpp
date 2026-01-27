#include <sun/util/resources/cldr/ext/CurrencyNames_pt.h>

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

$MethodInfo _CurrencyNames_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_MethodInfo_
};

$Object* allocate$CurrencyNames_pt($Class* clazz) {
	return $of($alloc(CurrencyNames_pt));
}

void CurrencyNames_pt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt::getContents() {
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
			$of("PTE"_s),
			$of("Esc."_s)
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
			$of("Peseta de Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirham dos Emirados Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afegane (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afegane afegão"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Lek Albanês (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lek albanês"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Dram armênio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Florim das Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Cuanza angolano (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Novo cuanza angolano (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Cuanza angolano reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Austral argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Peso lei argentino (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Peso argentino (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Peso argentino (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Xelim austríaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dólar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Florim arubano"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Manat azerbaijano (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat azeri"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Dinar da Bósnia-Herzegovina (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Marco conversível da Bósnia e Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Novo dinar da Bósnia-Herzegovina (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Dólar barbadense"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Franco belga (conversível)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Franco belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Franco belga (financeiro)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Lev forte búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"Lev socialista búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Lev búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Lev búlgaro (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar bareinita"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franco burundiano"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dólar bermudense"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Dólar bruneano"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Boliviano da Bolívia"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Boliviano (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Peso boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Mvdol boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Cruzeiro novo brasileiro (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Cruzado brasileiro (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Cruzeiro brasileiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real brasileiro"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Cruzado novo brasileiro (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Cruzeiro brasileiro (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Cruzeiro brasileiro (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Dólar bahamense"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum butanês"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Kyat birmanês"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula botsuanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Rublo novo bielo-russo (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Rublo bielorrusso"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Rublo bielorrusso (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dólar belizenho"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dólar canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Franco congolês"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("Euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Franco suíço"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("Franco WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("Escudo chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Unidades de Fomento chilenas"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Yuan chinês (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"Dólar do Banco Popular da China"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuan chinês"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidade de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Colón costarriquenho"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Dinar sérvio (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Coroa Forte checoslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Peso cubano conversível"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Libra cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Coroa tcheca"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("Ostmark da Alemanha Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Marco alemão"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franco djiboutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Coroa dinamarquesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Sucre equatoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Unidade de Valor Constante (UVC) do Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Coroa estoniana"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Libra egípcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa da Eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("Peseta espanhola (conta A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Peseta espanhola (conta conversível)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Peseta espanhola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birr etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Marca finlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Dólar fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Libra malvinense"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Franco francês"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Libra esterlina"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Cupom Lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Cedi de Gana (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Cedi ganês"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Libra de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi gambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franco guineano"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Syli da Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Ekwele da Guiné Equatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Dracma grego"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Escudo da Guiné Portuguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Peso da Guiné-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Dólar guianense"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Dólar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira hondurenha"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Dinar croata"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Florim húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Rupia indonésia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Libra irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Libra israelita"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of("Sheqel antigo israelita"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Novo shekel israelense"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinar iraquiano"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of("Coroa antiga islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Coroa islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Dólar jamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar jordaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iene japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Xelim queniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel cambojano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franco comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won norte-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Hwan da Coreia do Sul (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Won da Coreia do Sul (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won sul-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar kuwaitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Dólar das Ilhas Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupia cingalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dólar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti do Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Talonas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Franco conversível de Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Franco luxemburguês"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Franco financeiro de Luxemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Lats letão"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Rublo letão"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinar líbio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Franco marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Franco monegasco"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"Cupon moldávio"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Leu moldávio"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Franco de Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Dinar macedônio"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Dinar macedônio (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Franco de Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Quiate mianmarense"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca macaense"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya mauritana (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya mauritana"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Lira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Libra maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rupia maldivana"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha malauiana"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Peso Prata mexicano (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Unidade Mexicana de Investimento (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Escudo de Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical de Moçambique (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical moçambicano"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dólar namibiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Córdoba nicaraguense (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Córdoba nicaraguense"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Florim holandês"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Coroa norueguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Dólar neozelandês"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial omanense"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa panamenho"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Inti peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Novo sol peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Sol peruano (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Kina papuásia"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupia paquistanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Zloty polonês"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Zloti polonês (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Escudo português"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani paraguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial catariano"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Dólar rodesiano"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Leu romeno (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Dinar sérvio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rublo russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Rublo russo (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Franco ruandês"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Dólar das Ilhas Salomão"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia seichelense"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Dinar sudanês (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Libra sudanesa (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Coroa sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Dólar singapuriano"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Libra de Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tolar Bons esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Coroa eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone de Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Xelim somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Dólar surinamês"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Florim do Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Libra sul-sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra de São Tomé e Príncipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra de São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Rublo soviético"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Colom salvadorenho"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Libra síria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Baht tailandês"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Rublo do Tadjiquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni tadjique"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Manat do Turcomenistão (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat turcomeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar tunisiano"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga tonganesa"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Escudo timorense"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Lira turca (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dólar de Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Novo dólar taiwanês"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Xelim tanzaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Karbovanetz ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Xelim ugandense (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Xelim ugandense"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dólar americano"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Dólar norte-americano (Dia seguinte)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"Dólar norte-americano (Mesmo dia)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Peso uruguaio en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Peso uruguaio (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso uruguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som uzbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bolívar venezuelano (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolívar venezuelano (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bolívar venezuelano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Dong vietnamita (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu de Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franco CFA de BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Prata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Ouro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("Unidade Composta Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Unidade Monetária Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("Unidade de Conta Europeia (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("Unidade de Conta Europeia (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Dólar do Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Direitos Especiais de Giro"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("Unidade de Moeda Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Franco-ouro francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Franco UIC francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franco CFA de BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"Paládio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("Fundos RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Código de Moeda de Teste"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Moeda desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Dinar iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Dinar forte iugoslavo (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Dinar noviy iugoslavo (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Dinar conversível iugoslavo (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Dinar reformado iugoslavo (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("Rand sul-africano (financeiro)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand sul-africano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Cuacha zambiano (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zaire Novo zairense (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zaire zairense (1971–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dólar do Zimbábue (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Dólar do Zimbábue (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Dólar do Zimbábue (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_pt::CurrencyNames_pt() {
}

$Class* CurrencyNames_pt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt, name, initialize, &_CurrencyNames_pt_ClassInfo_, allocate$CurrencyNames_pt);
	return class$;
}

$Class* CurrencyNames_pt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun