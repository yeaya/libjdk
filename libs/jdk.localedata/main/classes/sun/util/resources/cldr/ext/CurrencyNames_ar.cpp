#include <sun/util/resources/cldr/ext/CurrencyNames_ar.h>

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

$MethodInfo _CurrencyNames_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_MethodInfo_
};

$Object* allocate$CurrencyNames_ar($Class* clazz) {
	return $of($alloc(CurrencyNames_ar));
}

void CurrencyNames_ar::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AED"_s),
			$of(u"د.إ.\u200f"_s)
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
			$of(u"د.ب.\u200f"_s)
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
			$of(u"د.ج.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of(u"ج.م.\u200f"_s)
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
			$of(u"UK£"_s)
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
			$of(u"د.ع.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of(u"ر.إ."_s)
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
			$of(u"د.أ.\u200f"_s)
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
			$of(u"د.ك.\u200f"_s)
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
			$of(u"ل.ل.\u200f"_s)
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
			$of(u"د.ل.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of(u"د.م.\u200f"_s)
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
			$of(u"أ.م."_s)
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
			$of(u"ر.ع.\u200f"_s)
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
			$of(u"ر.ق.\u200f"_s)
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
			$of(u"ر.س.\u200f"_s)
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
			$of("SDD"_s),
			$of(u"د.س.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of(u"ج.س."_s)
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
			$of(u"ل.س.\u200f"_s)
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
			$of(u"د.ت.\u200f"_s)
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
			$of("XXX"_s),
			$of("***"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of(u"ر.ي.\u200f"_s)
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
			$of(u"بيستا أندوري"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"درهم إماراتي"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"أفغاني - 1927-2002"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"أفغاني"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"ليك ألباني"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"درام أرميني"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"غيلدر أنتيلي هولندي"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"كوانزا أنغولي"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"كوانزا أنجولي - 1977-1990"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"كوانزا أنجولي جديدة - 1990-2000"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"كوانزا أنجولي معدلة - 1995 - 1999"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"استرال أرجنتيني"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"بيزو أرجنتيني - 1983-1985"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"بيزو أرجنتيني"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"شلن نمساوي"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"دولار أسترالي"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"فلورن أروبي"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"مانات أذريبجاني"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"مانات أذربيجان"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"دينار البوسنة والهرسك"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"مارك البوسنة والهرسك قابل للتحويل"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"دولار بربادوسي"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"تاكا بنغلاديشي"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"فرنك بلجيكي قابل للتحويل"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"فرنك بلجيكي"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"فرنك بلجيكي مالي"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ليف بلغاري"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"دينار بحريني"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"فرنك بروندي"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"دولار برمودي"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"دولار بروناي"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"بوليفيانو بوليفي"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"بيزو بوليفي"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"مفدول بوليفي"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"نوفو كروزايرو برازيلي - 1967-1986"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"كروزادو برازيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"كروزايرو برازيلي - 1990-1993"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ريال برازيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"دولار باهامي"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"نولتوم بوتاني"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"كيات بورمي"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"بولا بتسواني"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"روبل بيلاروسي جديد - 1994-1999"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"روبل بيلاروسي"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"روبل بيلاروسي (٢٠٠٠–٢٠١٦)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"دولار بليزي"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"دولار كندي"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"فرنك كونغولي"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"فرنك سويسري"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"بيزو تشيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"يوان صيني (في الخارج)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"يوان صيني"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"بيزو كولومبي"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"كولن كوستاريكي"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"دينار صربي قديم"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"كرونة تشيكوسلوفاكيا"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"بيزو كوبي قابل للتحويل"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"بيزو كوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"اسكودو الرأس الأخضر"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"جنيه قبرصي"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"كرونة تشيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"أوستمارك ألماني شرقي"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"مارك ألماني"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"فرنك جيبوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"كرونة دنماركية"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"بيزو الدومنيكان"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"دينار جزائري"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"كرونة استونية"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"جنيه مصري"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ناكفا أريتري"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"بيزيتا إسباني"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"بير أثيوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"يورو"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"ماركا فنلندي"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"دولار فيجي"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"جنيه جزر فوكلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"فرنك فرنسي"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"جنيه إسترليني"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"لارى جورجي"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"سيدي غاني"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"سيدي غانا"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"جنيه جبل طارق"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"دلاسي غامبي"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"فرنك غينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"سيلي غينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"اكويل جونينا غينيا الاستوائيّة"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"دراخما يوناني"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"كوتزال غواتيمالا"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"اسكود برتغالي غينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"بيزو غينيا بيساو"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"دولار غيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"دولار هونغ كونغ"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"ليمبيرا هنداروس"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"دينار كرواتي"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"كونا كرواتي"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"جوردى هايتي"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"فورينت هنغاري"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"روبية إندونيسية"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"جنيه إيرلندي"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"جنيه إسرائيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"شيكل إسرائيلي جديد"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"روبية هندي"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"دينار عراقي"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ريال إيراني"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"كرونة أيسلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"ليرة إيطالية"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"دولار جامايكي"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"دينار أردني"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ين ياباني"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"شلن كينيي"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"سوم قيرغستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"رييال كمبودي"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"فرنك جزر القمر"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"وون كوريا الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"وون كوريا الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"دينار كويتي"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"دولار جزر كيمن"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"تينغ كازاخستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"كيب لاوسي"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"جنيه لبناني"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"روبية سريلانكية"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"دولار ليبيري"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"لوتي ليسوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"ليتا ليتوانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"تالوناس ليتواني"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"فرنك لوكسمبرج قابل للتحويل"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"فرنك لوكسمبرج"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"فرنك لوكسمبرج المالي"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"لاتس لاتفيا"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"روبل لاتفيا"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"دينار ليبي"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"درهم مغربي"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"فرنك مغربي"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"ليو مولدوفي"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"أرياري مدغشقر"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"فرنك مدغشقر"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"دينار مقدوني"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"فرنك مالي"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"كيات ميانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"توغروغ منغولي"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"باتاكا ماكاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"أوقية موريتانية - 1973-2017"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"أوقية موريتانية"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"ليرة مالطية"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"جنيه مالطي"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"روبية موريشيوسية"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"روفيه جزر المالديف"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"كواشا مالاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"بيزو مكسيكي"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"بيزو فضي مكسيكي - 1861-1992"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"رينغيت ماليزي"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"اسكود موزمبيقي"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"متكال موزمبيقي"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"دولار ناميبي"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"نايرا نيجيري"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"كوردوبة نيكاراجوا"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"قرطبة نيكاراغوا"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"جلدر هولندي"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"كرونة نرويجية"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"روبية نيبالي"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"دولار نيوزيلندي"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ريال عماني"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"بالبوا بنمي"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"سول بيروفي"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"كينا بابوا غينيا الجديدة"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"بيزو فلبيني"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"روبية باكستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"زلوتي بولندي"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"زلوتي بولندي - 1950-1995"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"اسكود برتغالي"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"غواراني باراغواي"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"ريال قطري"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"دولار روديسي"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"ليو روماني قديم"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"ليو روماني"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"دينار صربي"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"روبل روسي"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"روبل روسي - 1991-1998"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"فرنك رواندي"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"ريال سعودي"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"دولار جزر سليمان"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"روبية سيشيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"دينار سوداني"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"جنيه سوداني"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"جنيه سوداني قديم"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"كرونة سويدية"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"دولار سنغافوري"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"جنيه سانت هيلين"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"تولار سلوفيني"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"كرونة سلوفاكية"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"ليون سيراليوني"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"شلن صومالي"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"دولار سورينامي"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"جلدر سورينامي"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"جنيه جنوب السودان"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"دوبرا ساو تومي وبرينسيبي - 1977-2017"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"دوبرا ساو تومي وبرينسيبي"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"روبل سوفيتي"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"كولون سلفادوري"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"ليرة سورية"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"ليلانجيني سوازيلندي"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"باخت تايلاندي"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"روبل طاجيكستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"سوموني طاجيكستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"مانات تركمنستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"مانات تركمانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"دينار تونسي"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"بانغا تونغا"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"اسكود تيموري"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"ليرة تركي"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"ليرة تركية"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"دولار ترينداد وتوباغو"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"دولار تايواني"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"شلن تنزاني"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"هريفنيا أوكراني"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"شلن أوغندي - 1966-1987"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"شلن أوغندي"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"دولار أمريكي"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"دولار أمريكي (اليوم التالي)\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"دولار أمريكي (نفس اليوم)\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"بيزو أوروجواي - 1975-1993"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"بيزو اوروغواي"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"سوم أوزبكستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"بوليفار فنزويلي - 1871-2008"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"بوليفار فنزويلي - 2008–2018"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"بوليفار فنزويلي"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"دونج فيتنامي"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"فاتو فانواتو"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"تالا ساموا"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"فرنك وسط أفريقي"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"فضة"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"ذهب"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"الوحدة الأوروبية المركبة"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"الوحدة المالية الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"الوحدة الحسابية الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"(XBD)وحدة الحساب الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"دولار شرق الكاريبي"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"حقوق السحب الخاصة"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"وحدة النقد الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"فرنك فرنسي ذهبي"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"(UIC)فرنك فرنسي"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"فرنك غرب أفريقي"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"بالاديوم"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"فرنك سي إف بي"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"البلاتين"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"كود اختبار العملة"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"عملة غير معروفة"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"دينار يمني"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"ريال يمني"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"دينار يوغسلافي"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"دينار يوغسلافي قابل للتحويل"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"راند جنوب أفريقيا -مالي"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"راند جنوب أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"كواشا زامبي - 1968-2012"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"كواشا زامبي"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"زائير زائيري جديد"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"زائير زائيري"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"دولار زمبابوي"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"دولار زمبابوي 2009"_s)
		})
	}));
	return data;
}

CurrencyNames_ar::CurrencyNames_ar() {
}

$Class* CurrencyNames_ar::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar, name, initialize, &_CurrencyNames_ar_ClassInfo_, allocate$CurrencyNames_ar);
	return class$;
}

$Class* CurrencyNames_ar::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun