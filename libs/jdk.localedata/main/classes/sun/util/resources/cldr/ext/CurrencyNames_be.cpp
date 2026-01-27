#include <sun/util/resources/cldr/ext/CurrencyNames_be.h>

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

$MethodInfo _CurrencyNames_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_be, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_be, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_be",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_be_MethodInfo_
};

$Object* allocate$CurrencyNames_be($Class* clazz) {
	return $of($alloc(CurrencyNames_be));
}

void CurrencyNames_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_be::getContents() {
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
			$of("Br"_s)
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
			$of(u"₽"_s)
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
			$of("aed"_s),
			$of(u"дырхам ААЭ"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"афганскі афгані"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"албанскі лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"армянскі драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"нідэрландскі антыльскі гульдэн"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ангольская кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"аргенцінскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"аўстралійскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"арубанскі фларын"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"азербайджанскі манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"канверсоўная марка Босніі і Герцагавіны"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"барбадаскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"бангладэшская така"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"балгарскі леў"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"бахрэйнскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"бурундзійскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"бермудскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"брунейскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"балівіяна"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"бразільскі рэал"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"багамскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"бутанскі нгултрум"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"батсванская пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"беларускі рубель"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"беларускі рубель (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"белізскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"канадскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"кангалезскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"швейцарскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"чылійскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"афшорны кітайскі юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"кітайскі юань"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"калумбійскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"коста-рыканскі калон"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"кубінскае канверсоўнае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"кубінскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"эскуда Каба-Вердэ"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"чэшская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"джыбуційскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"дацкая крона"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"дамініканскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"алжырскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"егіпецкі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"эрытрэйская накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"эфіопскі быр"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"еўра"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"фіджыйскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"фунт Фалклендскіх астравоў"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"брытанскі фунт стэрлінгаў"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"грузінскі лары"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ганскі седзі"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"гібралтарскі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"гамбійскі даласі"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"гвінейскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"гватэмальскі кетсаль"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"гаянскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"ганконгскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"гандураская лемпіра"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"харвацкая куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"гаіцянскі гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"венгерскі форынт"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"інданезійская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"новы ізраільскі шэкель"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"індыйская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"іракскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"іранскі рыял"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"ісландская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ямайскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"іарданскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"японская іена"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"кенійскі шылінг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"кіргізскі сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"камбаджыйскі рыель"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"каморскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"паўночнакарэйская вона"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"паўднёвакарэйская вона"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"кувейцкі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"долар Кайманавых астравоў"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"казахстанскі тэнге"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"лаоскі кіп"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"ліванскі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"шры-ланкійская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ліберыйскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"лівійскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мараканскі дырхам"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"малдаўскі лей"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"малагасійскі арыяры"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"македонскі дэнар"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"м’янманскі к’ят"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"мангольскі тугрык"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"патака Макаа"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"маўрытанская ўгія (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"маўрытанская угія"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"маўрыкійская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"мальдыўская руфія"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"малавійская квача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"мексіканскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"малайзійскі рынгіт"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазамбікскі метыкал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"намібійскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"нігерыйская наіра"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"нікарагуанская кордаба"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"нарвежская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"непальская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"новазеландскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"аманскі рыял"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"панамскае бальбоа"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"перуанскі соль"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"кіна Папуа-Новай Гвінеі"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"філіпінскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"пакістанская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"польскі злоты"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"парагвайскі гуарані"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"катарскі рыял"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"румынскі лей"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"сербскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"расійскі рубель"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"руандыйскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"саудаўскі рыял"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"долар Саламонавых астравоў"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"сейшэльская рупія"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"суданскі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"шведская крона"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"сінгапурскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"фунт в-ва Святой Алены"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"сьера-леонскі леонэ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"самалійскі шылінг"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"сурынамскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"паўднёвасуданскі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"добра Сан-Тамэ і Прынсіпі (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"добра Сан-Тамэ і Прынсіпі"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"сірыйскі фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"свазілендскі лілангені"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"тайскі бат"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"таджыкскі самані"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"туркменскі манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"туніскі дынар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"танганская паанга"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"турэцкая ліра"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"долар Трынідада і Табага"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"новы тайваньскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"танзанійскі шылінг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"украінская грыўня"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"угандыйскі шылінг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"долар ЗША"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"уругвайскае песа"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"узбекскі сум"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"венесуальскі балівар (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"венесуэльскі балівар"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"в’етнамскі донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"вануацкі вату"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"самаанская тала"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"цэнтральнаафрыканскі франк КФА"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"усходнекарыбскі долар"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"заходнеафрыканскі франк КФА"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"французскі ціхаакіянскі франк"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"невядомая валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"еменскі рыал"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"паўднёваафрыканскі рэнд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"замбійская квача"_s)
		})
	}));
	return data;
}

CurrencyNames_be::CurrencyNames_be() {
}

$Class* CurrencyNames_be::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_be, name, initialize, &_CurrencyNames_be_ClassInfo_, allocate$CurrencyNames_be);
	return class$;
}

$Class* CurrencyNames_be::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun