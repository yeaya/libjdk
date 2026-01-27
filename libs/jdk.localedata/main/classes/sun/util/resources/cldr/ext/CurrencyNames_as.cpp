#include <sun/util/resources/cldr/ext/CurrencyNames_as.h>

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

$MethodInfo _CurrencyNames_as_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_as, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_as, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_as_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_as",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_as_MethodInfo_
};

$Object* allocate$CurrencyNames_as($Class* clazz) {
	return $of($alloc(CurrencyNames_as));
}

void CurrencyNames_as::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_as::getContents() {
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
			$of(u"সংযুক্ত আৰব আমিৰাত ডিৰহেম"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"আফগান আফগানী"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"আলবেনীয় লেক"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"আৰ্মেনিয়ান ড্ৰাম"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"নেডাৰলেণ্ডছ এণ্টিলিয়েন গিল্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"এংগোলান কোৱাঞ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"আৰ্জেণ্টাইন পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"অষ্ট্ৰেলিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"আৰুবান ফ্ল’ৰিন"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"আজেৰবাইজানী মানাত"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"ব’ছনিয়া আৰু হাৰ্জেগ’ভিনা কনভাৰ্টিব্\u200cল মাৰ্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"বাৰ্বাডিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"বাংলাদেশী টাকা"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"বুলগেৰীয় লেভ"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"বাহৰেইনী ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"বুৰুণ্ডিয়ান ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"বাৰ্মুডান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"ব্ৰুনেই ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"বলিভিয়ান বলিভিয়ানো"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ব্ৰাজিলিয়ান ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"বাহামিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ভুটানী নংগলট্ৰাম"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ব’টচোৱানান পুলা"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"বেলাৰুছীয় ৰুবেল"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"বেলিজ ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"কানাডিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"কংগো ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"চুইছ ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"চিলিয়ান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"চীনা ইউৱান (অফশ্ব’ৰ)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"চীনা ইউৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"কলম্বিয়ান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"কোষ্টা ৰিকান কোলন"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"কিউবান ৰূপান্তৰযোগ্য পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"কিউবান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"কেপ ভাৰ্দে এছকুডো"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"চেক কোৰুনা"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"জিবুটি ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"ডেনিচ ক্ৰোন"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"ড’মিনিকান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"আলজেৰীয় ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"ইজিপ্তৰ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"এৰিট্ৰিয়ন নাক্\u200cফা"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ইথিঅ’পিয়ান বিৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ইউৰো"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"ফিজিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"ফকলেণ্ড দ্বীপপুঞ্জৰ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ব্ৰিটিছ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"জৰ্জিয়ান লাৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ঘানাৰ চেডি"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"জিব্ৰাল্টৰ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"গাম্বিয়া ডালাছি"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"গিনি ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"গুৱাটেমালা কুৱেৎজাল"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"গায়ানিজ ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"হং কং ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"হোন্দুৰান লেম্পিৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"ক্ৰোৱেছিয়ান কুনা"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"হাইটিয়ান গৌৰ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"হাংগেৰীয়ান ফ’ৰিণ্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"ইণ্ডোনেচিয়ান ৰুপিয়াহ"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"ইজৰাইলী নিউ শ্বেকেল"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ভাৰতীয় ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"ইৰাকী ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ইৰানীয়ান ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"আইচলেণ্ডিক ক্ৰোনা"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"জামাইকান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"জৰ্ডানিয়ান ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"জাপানী য়েন"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"কেনিয়ান শ্বিলিং"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"কিৰ্গিস্তানী ছোম"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"কেম্ব’ডিয়ান ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"ক’মোৰিয়ান ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"উত্তৰ কোৰিয়াৰ ওৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"দক্ষিণ কোৰিয়াৰ ওৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"কুৱেইটি ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"কেইমেন দ্বীপপুঞ্জৰ ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"কাজাখস্তানী তেঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"লাওচিয়ান কিপ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"লেবানীজ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"শ্ৰীলংকান ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"লাইবেৰিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"লিবিয়ান ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"মৰোক্কান ডিৰহাম"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"মোলডোভান লেউ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"মালাগাছী এৰিয়াৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"মেচিডোনীয় ডেনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"ম্যানমাৰ কিয়াট"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"মঙ্গোলিয়ান টুৰ্গিক"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"মেকানীজ পাটাকা"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ম’ৰিটেনিয়ান ঔগুইয়া (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ম’ৰিটেনিয়ান ঔগুইয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"মৰিচিয়ান ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"মালডিভিয়ান ৰুফিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"মালাউইয়ান কোৱাচা"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"মেক্সিকান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"মালায়েচিয়ান ৰিংগিট"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"মোজাম্বিকান মেটিকল"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"নামিবিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"নাইজেৰিয়ান নাইৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"নিকাৰাগুৱান কোৰ্ডোবা"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"নৰৱেজিয়ান ক্ৰোন"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"নেপালী ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"নিউজিলেণ্ড ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ওমানি ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"পানামেনিয়ান বাল্বোৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"পেৰুভিয়ান ছ’ল"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"পাপুৱা নিউ গিনি কিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"ফিলিপিন পেইছ’"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"পাকিস্তানী ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"প’লিচ জোল্টী"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"পাৰাগুয়ান গুৱাৰানি"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"কাটাৰি ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"ৰোমানীয় লেউ"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"চাৰ্বিয়ান ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"ৰাছিয়ান ৰুব্\u200cল"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ৰোৱান্দান ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"চৌডি ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"চোলোমোন দ্বীপপুঞ্জৰ ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"ছেচেলৱা ৰুপী"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"চুডানী পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"চুইডিছ ক্ৰোনা"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"ছিংগাপুৰ ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"ছেইণ্ট হেলেনা পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"চিয়েৰা লিঅ’নৰ লিঅ’ন"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"চোমালি শ্বিলিং"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"ছুৰিনামী ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"দক্ষিণ চুডানীজ পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"চাও টোমে আৰু প্ৰিনচিপে ডোব্\u200cৰা (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"চাও টোমে আৰু প্ৰিনচিপে ডোব্\u200cৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"চিৰিয়ান পাউণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"স্বাজি লিলেংগেনি"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"থাই বাত"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"তাজিকিস্তানী ছোমনি"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"তুৰ্কমেনিস্তানী মানাত"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"টুনিচিয়ান ডিনাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"টংগান পাআংগা"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"তুৰ্কীৰ লিৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"ট্ৰিনিডাড আৰু টোবাগো ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"নিউ টাইৱান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"টানজানিয়ান শ্বিলিং"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ইউক্ৰেইনীয় হৃভনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"উগাণ্ডান শ্বিলিং"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ইউ. এছ. ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"উৰুগুৱেয়ান পেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"উজবেকিস্তানী ছোম"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"ভেনিজুৱেলান বলিভাৰ (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"ভেনিজুৱেলান বলিভাৰ (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"ভেনিজুৱেলান বলিভাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"ভিয়েটনামীজ ডং"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"ভানাটুৰ ভাটু"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"ছামোৱান টালা"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"মধ্য আফ্ৰিকান CFA ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"ইষ্ট কেৰিবিয়ান ডলাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"পশ্চিম আফ্ৰিকান CFA ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP ফ্ৰেংক"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"অজ্ঞাত মুদ্ৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"য়েমেনী ৰিয়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"দক্ষিণ আফ্ৰিকাৰ ৰাণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"জাম্বিয়ান কোৱাচা"_s)
		})
	}));
	return data;
}

CurrencyNames_as::CurrencyNames_as() {
}

$Class* CurrencyNames_as::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_as, name, initialize, &_CurrencyNames_as_ClassInfo_, allocate$CurrencyNames_as);
	return class$;
}

$Class* CurrencyNames_as::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun