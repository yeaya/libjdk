#include <sun/util/resources/cldr/ext/CurrencyNames_ms.h>

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

$MethodInfo _CurrencyNames_ms_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ms, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ms, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ms_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ms",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ms_MethodInfo_
};

$Object* allocate$CurrencyNames_ms($Class* clazz) {
	return $of($alloc(CurrencyNames_ms));
}

void CurrencyNames_ms::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ms::getContents() {
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
			$of("MXN"_s),
			$of("MXN"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("RM"_s)
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
			$of("aed"_s),
			$of("Dirham Emiriah Arab Bersatu"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lek Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Guilder Antillen Belanda"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dolar Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Florin Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Mark Boleh Tukar Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Dolar Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lev Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franc Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Dolar Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Dolar Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Dolar Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ngultrum Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Rubel Belarus baharu"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Rubel Belarus (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Dolar Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dolar Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Franc Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Franc Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Yuan China (luar pesisir)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Cina"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Colon Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Peso Boleh Tukar Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Tanjung Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Koruna Republik Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franc Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Krone Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Dominican"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Paun Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Dolar Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Paun Kepulauan Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Paun British"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Cedi Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Paun Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franc Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Dolar Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Dolar Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forint Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupiah Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Syekel Baharu Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee India"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinar Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Krona Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Dolar Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Jepun"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Syiling Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som Kyrgystani"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Kemboja"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franc Comoria"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won Korea Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won Korea Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Dolar Kepulauan Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Paun Lubnan"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupee Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dolar Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litas Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lats Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinar Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham Maghribi"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Franc Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat Myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya Mauritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupee Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Escudo Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical Mozambique (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metikal Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolar Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Cordoba Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Krone Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupee Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Dolar New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso Filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupee Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Dolar Rhodesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinar Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubel Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Franc Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dolar Kepulauan Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupee Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Paun Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Krona Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Dolar Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Paun Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Syiling Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Dolar Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Paun Sudan selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra Sao Tome dan Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Sao Tome dan Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Paun Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Baht Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pa’anga Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira Turki"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dolar Trinidad dan Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Dolar Taiwan Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Syiling Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Shilling Uganda (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Syiling Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolar AS"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolivar Venezuela (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Bolivar Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franc CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Dolar Caribbean Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franc CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Mata Wang Tidak Diketahui"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Afrika Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dolar Zimbabwe (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Dolar Zimbabwe (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Dolar Zimbabwe (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ms::CurrencyNames_ms() {
}

$Class* CurrencyNames_ms::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ms, name, initialize, &_CurrencyNames_ms_ClassInfo_, allocate$CurrencyNames_ms);
	return class$;
}

$Class* CurrencyNames_ms::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun