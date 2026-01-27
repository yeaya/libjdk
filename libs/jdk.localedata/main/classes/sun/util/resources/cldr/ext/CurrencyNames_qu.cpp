#include <sun/util/resources/cldr/ext/CurrencyNames_qu.h>

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

$MethodInfo _CurrencyNames_qu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_qu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_qu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_qu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_qu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_qu_MethodInfo_
};

$Object* allocate$CurrencyNames_qu($Class* clazz) {
	return $of($alloc(CurrencyNames_qu));
}

void CurrencyNames_qu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_qu::getContents() {
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
			$of("BBG"_s)
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
			$of("DBM"_s)
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
			$of("DBZ"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("$CA"_s)
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
			$of("S/"_s)
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
			$of("$US"_s)
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
			$of("aed"_s),
			$of(u"Dirham de Emiratos Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afgani Afgano"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lek albanés"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Armenio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Florín Antillano Neerlandés"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza Angoleño"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dólar Australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Florín Arubeño"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat Azerbaiyano"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Marco Bosnioherzegovino"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Dólar de Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Taka Bangladesí"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinar Bareiní"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Franco Burundés"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dólar Bermudeño"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Dólar de Brunéi"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Real Brasileño"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Dólar Bahameño"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum Butanés"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Botswano"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Nuevo Rublo Bielorruso"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dólar Beliceño"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dólar Canadiense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Franco Congoleño"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Franco Suizo"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Yuan Chino (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Chino"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Colón Costarricense"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Peso Cubano Convertible"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso Cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Caboverdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Corona Checa"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franco Yibutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Corona Danesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar Argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Libra Egipcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eritreano"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birr Etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Dólar Fiyiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Libra Malvinense"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Libra Esterlina"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Cedi Ganés"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Libra Gibraltareña"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franco Guineano"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Dólar Guyanés"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Dólar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Lempira Hondureño"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna Croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Florín Húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupia Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Nuevo Séquel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupia India"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Dinar Iraquí"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Rial Iraní"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Corona Islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Dólar Jamaiquino"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar Jordano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yen Japonés"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Chelín Keniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Som Kirguís"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Camboyano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franco Comorense"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won Norcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won Surcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Dinar Kuwaití"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Dólar de las Islas Caimán"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Kazajo"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip Laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libra Libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupia de Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dólar Liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinar Libio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dírham Marroquí"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Dinar Macedonio"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat Birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca Macaense"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Uguiya Mauritano"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia de Mauricio"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rupia de Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwacha Malauí"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit Malayo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical Mozambiqueño"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dólar Namibio"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira Nigeriano"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Córdova Nicaragüense"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Corona Noruega"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Rupia Nepalí"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Dólar Neozelandés"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Rial Omaní"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Balboa Panameño"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Papuano"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Rupia Pakistaní"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Guaraní Paraguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Riyal Catarí"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu Rumano"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinar Serbio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rublo Ruso"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Franco Ruandés"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyal Saudí"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Dólar de las Islas Salomón"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia de Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Libra Sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Corona Sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Dólar de Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Libra de Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone de Sierra Leona"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Chelín Somalí"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Dólar Surinamés"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Libra Sursudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Santotomense"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Libra Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Baht Tailandés"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni Tayiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat Turcomano"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar Tunecino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga Tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira Turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dólar de Trinidad y Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Nuevo Dólar Taiwanés"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Chelín Tanzano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Grivna"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Chelín Ugandés"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dólar Americano"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguayo"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som Ubzeko"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bolívar Venezolano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong Vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Franco CFA de África Central"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Dólar del Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Franco CFA de África Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Mana riqsisqa Qullqi"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Rial Yemení"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Sudafricano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha Zambiano"_s)
		})
	}));
	return data;
}

CurrencyNames_qu::CurrencyNames_qu() {
}

$Class* CurrencyNames_qu::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_qu, name, initialize, &_CurrencyNames_qu_ClassInfo_, allocate$CurrencyNames_qu);
	return class$;
}

$Class* CurrencyNames_qu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun