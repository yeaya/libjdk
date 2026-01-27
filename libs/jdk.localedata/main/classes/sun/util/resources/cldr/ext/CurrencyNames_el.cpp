#include <sun/util/resources/cldr/ext/CurrencyNames_el.h>

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

$MethodInfo _CurrencyNames_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_el",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_el_MethodInfo_
};

$Object* allocate$CurrencyNames_el($Class* clazz) {
	return $of($alloc(CurrencyNames_el));
}

void CurrencyNames_el::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_el::getContents() {
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
			$of("GRD"_s),
			$of(u"Δρχ"_s)
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
			$of("TPE"_s),
			$of("TPE"_s)
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
			$of(u"Πεσέτα Ανδόρας"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Ντιράμ Ηνωμένων Αραβικών Εμιράτων"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Αφγανί Αφγανιστάν (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Αφγάνι Αφγανιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Λεκ Αλβανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Ντραμ Αρμενίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Γκίλντα Ολλανδικών Αντιλλών"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Κουάνζα Ανγκόλας"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Κουάνζα Ανγκόλας (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Νέα Κουάνζα Ανγκόλας (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Ωστράλ Αργετινής"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Πέσο Αργεντινής (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Πέσο Αργεντινής"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Σελίνι Αυστρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Δολάριο Αυστραλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Φλορίνι Αρούμπας"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Μανάτ Αζερμπαϊτζάν (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Μανάτ Αζερμπαϊτζάν"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Δηνάριο Βοσνίας-Ερζεγοβίνης"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Μετατρέψιμο Μάρκο Βοσνίας-Ερζεγοβίνης"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Δολάριο Μπαρμπέιντος"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Τάκα Μπαγκλαντές"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Φράγκο Βελγίου (μετατρέψιμο)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Φράγκο Βελγίου"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Φράγκο Βελγίου (οικονομικό)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Μεταλλικό Λεβ Βουλγαρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Λεβ Βουλγαρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Δηνάριο Μπαχρέιν"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Φράγκο Μπουρούντι"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Δολάριο Βερμούδων"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Δολάριο Μπρουνέι"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Μπολιβιάνο Βολιβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Πέσο Βολιβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Μβδολ Βολιβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Νέο Κρουζιέρο Βραζιλίας (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Κρουζάντο Βραζιλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Κρουζιέρο Βραζιλίας (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Ρεάλ Βραζιλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Νέο Κρουζάντο Βραζιλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Κρουζιέρο Βραζιλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Δολάριο Μπαχαμών"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Νγκούλτρουμ Μπουτάν"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Κιατ Βιρμανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Πούλα Μποτσουάνας"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Νέο Ρούβλι Λευκορωσίας (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Ρούβλι Λευκορωσίας"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Ρούβλι Λευκορωσίας (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Δολάριο Μπελίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Δολάριο Καναδά"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Φράγκο Κονγκό"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"Ευρώ WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Φράγκο Ελβετίας"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"Φράγκο WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Ουνιδάδες ντε φομέντο Χιλής"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Πέσο Χιλής"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Γουάν Κίνας (υπεράκτιο)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Γουάν Κίνας"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Πέσο Κολομβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Κολόν Κόστα Ρίκα"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Παλαιό Δηνάριο Σερβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Σκληρή Κορόνα Τσεχοσλοβακίας"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Μετατρέψιμο πέσο Κούβας"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Πέσο Κούβας"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Εσκούδο Πράσινου Ακρωτηρίου"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Λίρα Κύπρου"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Κορόνα Τσεχίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Οστμάρκ Ανατολικής Γερμανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Μάρκο Γερμανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Φράγκο Τζιμπουτί"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Κορόνα Δανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Πέσο Δομινικανής Δημοκρατίας"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Δηνάριο Αλγερίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"Σούκρε Εκουαδόρ"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Κορόνα Εσθονίας"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Λίρα Αιγύπτου"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Νάκφα Ερυθραίας"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"πεσέτα Ισπανίας (λογαριασμός Α)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"πεσέτα Ισπανίας (μετατρέψιμος λογαριασμός)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Πεσέτα Ισπανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Μπιρ Αιθιοπίας"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Ευρώ"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Μάρκο Φινλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Δολάριο Φίτζι"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Λίρα Νήσων Φόκλαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Φράγκο Γαλλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Λίρα Στερλίνα Βρετανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Κούπον Λάρι Γεωργίας"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Λάρι Γεωργίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Σέντι Γκάνας (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Σέντι Γκάνας"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Λίρα Γιβραλτάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Νταλάσι Γκάμπιας"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Φράγκο Γουινέας"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Συλί Γουινέας"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Εκγουέλε Ισημερινής Γουινέας"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Δραχμή Ελλάδας"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Κουετσάλ Γουατεμάλας"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"Γκινέα Εσκούδο Πορτογαλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Πέσο Γουινέας-Μπισάου"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Δολάριο Γουιάνας"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Δολάριο Χονγκ Κονγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Λεμπίρα Ονδούρας"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Δηνάριο Κροατίας"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Κούνα Κροατίας"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Γκουρντ Αϊτής"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Φιορίνι Ουγγαρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Ρουπία Ινδονησίας"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Λίρα Ιρλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Λίρα Ισραήλ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"παλιό σεκέλ Ισραήλ"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Νέο Σέκελ Ισραήλ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Ρουπία Ινδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Δηνάριο Ιράκ"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Ριάλ Ιράν"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"Παλιά κορόνα Ισλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Κορόνα Ισλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Λιρέτα Ιταλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Δολάριο Τζαμάικας"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Δηνάριο Ιορδανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Γιεν Ιαπωνίας"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Σελίνι Κένυας"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Σομ Κιργιζίας"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Ρίελ Καμπότζης"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Φράγκο Κομορών"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Γουόν Βόρειας Κορέας"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Γουόν Νότιας Κορέας"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Δηνάριο Κουβέιτ"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Δολάριο Νήσων Κέιμαν"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Τένγκε Καζακστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Κιπ Λάος"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Λίρα Λιβάνου"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Ρουπία Σρι Λάνκα"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Δολάριο Λιβερίας"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Λότι Λεσότο"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Λίτα Λιθουανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Ταλόνας Λιθουανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Μετατρέψιμο Φράγκο Λουξεμβούργου"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Φράγκο Λουξεμβούργου"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Οικονομικό Φράγκο Λουξεμβούργου"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Λατς Λετονίας"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"Ρούβλι Λετονίας"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Δηνάριο Λιβύης"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Ντιράμ Μαρόκου"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Φράγκο Μαρόκου"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Λέου Μολδαβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Αριάρι Μαδαγασκάρης"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Φράγκο Μαδαγασκάρης"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Δηνάριο ΠΓΔΜ"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Φράγκο Μαλί"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Κιάτ Μιανμάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Τουγκρίκ Μογγολίας"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Πατάκα Μακάο"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ουγκίγια Μαυριτανίας (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ουγκίγια Μαυριτανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Λιρέτα Μάλτας"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Λίρα Μάλτας"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Ρουπία Μαυρικίου"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Ρουφίγια Μαλδίβων"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Κουάτσα Μαλάουι"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Πέσο Μεξικού"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Ασημένιο Πέσο Μεξικού (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Ρινγκίτ Μαλαισίας"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Εσκούδο Μοζαμβίκης"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Παλαιό Μετικάλ Μοζαμβίκης"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Μετικάλ Μοζαμβίκης"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Δολάριο Ναμίμπιας"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Νάιρα Νιγηρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Κόρδοβα Νικαράγουας"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Χρυσή Κόρδοβα Νικαράγουας"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Γκίλντα Ολλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Κορόνα Νορβηγίας"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Ρουπία Νεπάλ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Δολάριο Νέας Ζηλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Ριάλ Ομάν"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Μπαλμπόα Παναμά"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Ίντι Περού"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Σολ Περού"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Σολ Περού (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Κίνα Παπούας Νέας Γουινέας"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Πέσο Φιλιππίνων"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Ρουπία Πακιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Ζλότι Πολωνίας"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Ζλότυ Πολωνίας (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Εσκούδο Πορτογαλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Γκουαρανί Παραγουάης"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Ριάλ Κατάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Δολάριο Ροδεσίας"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Λέι Ρουμανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Λέου Ρουμανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Δηνάριο Σερβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Ρούβλι Ρωσίας"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Ρούβλι Ρωσίας (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Φράγκο Ρουάντας"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Ριάλ Σαουδικής Αραβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Δολάριο Νήσων Σολομώντος"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Ρουπία Σεϋχελλών"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Δηνάριο Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Λίρα Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Παλαιά Λίρα Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Κορόνα Σουηδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Δολάριο Σιγκαπούρης"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Λίρα Αγίας Ελένης"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Τόλαρ Σλοβενίας"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Κορόνα Σλοβενίας"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Λεόνε Σιέρα Λεόνε"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Σελίνι Σομαλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Δολάριο Σουρινάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"Γκίλντα Σουρινάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Λίρα Νότιου Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Ντόμπρα Σάο Τομέ και Πρίνσιπε (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Ντόμπρα Σάο Τομέ και Πρίνσιπε"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Σοβιετικό Ρούβλι"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Κολόν Ελ Σαλβαδόρ"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Λίρα Συρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Λιλανγκένι Σουαζιλάνδης"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Μπατ Ταϊλάνδης"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Ρούβλι Τατζικιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Σομόνι Τατζικιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Μανάτ Τουρκμενιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Μάνατ Τουρκμενιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Δηνάριο Τυνησίας"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Παάγκα Τόνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Εσκούδο Τιμόρ"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Παλιά Λίρα Τουρκίας"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Λίρα Τουρκίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Δολάριο Τρινιντάντ και Τομπάγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Νέο δολάριο Ταϊβάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Σελίνι Τανζανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Γρίβνα Ουκρανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Καρμποβανέτς Ουκρανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Σελίνι Ουγκάντας (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Σελίνι Ουγκάντας"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Δολάριο ΗΠΑ"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Δολάριο ΗΠΑ (επόμενη ημέρα)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"Δολάριο ΗΠΑ (ίδια ημέρα)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Πέσο Ουρουγουάης (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Πέσο Ουρουγουάης"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Σομ Ουζμπεκιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Μπολιβάρ Βενεζουέλας (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Μπολιβάρ Βενεζουέλας (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Μπολιβάρ Βενεζουέλας"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Ντονγκ Βιετνάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Βατού Βανουάτου"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Τάλα Σαμόα"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Φράγκο CFA Κεντρικής Αφρικής"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Ευρωπαϊκή Σύνθετη Μονάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Ευρωπαϊκή Νομισματική Μονάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Ευρωπαϊκή μονάδα λογαριασμού (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Ευρωπαϊκή μονάδα λογαριασμού (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Δολάριο Ανατολικής Καραϊβικής"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Ειδικά Δικαιώματα Ανάληψης"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Ευρωπαϊκή Συναλλαγματική Μονάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Χρυσό Φράγκο Γαλλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"UIC-Φράγκο Γαλλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Φράγκο CFA Δυτικής Αφρικής"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Φράγκο CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Άγνωστο νόμισμα"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Δηνάριο Υεμένης"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Ριάλ Υεμένης"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Μεταλλικό Δηνάριο Γιουγκοσλαβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Νέο Δηνάριο Γιουγκοσλαβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Μετατρέψιμο Δηνάριο Γιουγκοσλαβίας"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Ραντ Νότιας Αφρικής (οικονομικό)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Ραντ Νότιας Αφρικής"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Κουάνζα Ζαΐρ (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Κουάτσα Ζάμπιας"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Νέο Ζαΐρ Ζαΐρ"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Ζαΐρ Ζαΐρ"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Δολάριο Ζιμπάμπουε"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Δολάριο Ζιμπάμπουε (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_el::CurrencyNames_el() {
}

$Class* CurrencyNames_el::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_el, name, initialize, &_CurrencyNames_el_ClassInfo_, allocate$CurrencyNames_el);
	return class$;
}

$Class* CurrencyNames_el::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun