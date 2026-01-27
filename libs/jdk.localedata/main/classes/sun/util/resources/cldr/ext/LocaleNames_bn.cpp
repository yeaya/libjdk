#include <sun/util/resources/cldr/ext/LocaleNames_bn.h>

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

$MethodInfo _LocaleNames_bn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bn_MethodInfo_
};

$Object* allocate$LocaleNames_bn($Class* clazz) {
	return $of($alloc(LocaleNames_bn));
}

void LocaleNames_bn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"নাউরু"_s);
	$var($String, metaValue_TK, u"টোকেলাউ"_s);
	$var($String, metaValue_TV, u"টুভালু"_s);
	$var($String, metaValue_bn, u"বাংলা"_s);
	$var($String, metaValue_bo, u"তিব্বতি"_s);
	$var($String, metaValue_el, u"গ্রিক"_s);
	$var($String, metaValue_gu, u"গুজরাটি"_s);
	$var($String, metaValue_he, u"হিব্রু"_s);
	$var($String, metaValue_jv, u"জাভানিজ"_s);
	$var($String, metaValue_ka, u"জর্জিয়ান"_s);
	$var($String, metaValue_ko, u"কোরিয়ান"_s);
	$var($String, metaValue_lo, u"লাও"_s);
	$var($String, metaValue_ml, u"মালায়ালাম"_s);
	$var($String, metaValue_or, u"ওড়িয়া"_s);
	$var($String, metaValue_ta, u"তামিল"_s);
	$var($String, metaValue_th, u"থাই"_s);
	$var($String, metaValue_ccp, u"চাকমা"_s);
	$var($String, metaValue_peo, u"প্রাচীন ফার্সি"_s);
	$var($String, metaValue_syr, u"সিরিয়াক"_s);
	$var($String, metaValue_uga, u"উগারিটিক"_s);
	$var($String, metaValue_vai, u"ভাই"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"কলোনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ওঘাম"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"মিরান্ডিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"প্রতীকগুলি"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"আত্সাম"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"মারোয়ারি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"টাই থাম থাম সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"টাগোওয়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ইমোজি"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"প্রাচীন মিশরীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"রাজস্থানী"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ফাগ্স-পা"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"টাইম্নে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"কুদয়াদি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"তেসো"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"রাপানুই"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"তেরেনো"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"অ্যাসসেনশন আইল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"রারোটোংগান"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"তেতুম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"সিংহলী লিথ সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"আন্ডোরা"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"সংযুক্ত আরব আমিরাত"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ফ্লেমিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"আফগানিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"অ্যান্টিগুয়া ও বারবুডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"ম্রো সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ইথিওপিক ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"এ্যাঙ্গুইলা"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"সময় জোন"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"আলবেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"আর্মেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"তেঙ্গোয়ার"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"অ্যাঙ্গোলা"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"অ্যান্টার্কটিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"আর্জেন্টিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"পার্থিয়ন"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"আমেরিকান সামোয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"অস্ট্রিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"অস্ট্রেলিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"আরুবা"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"আমেরিকার ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"আলান্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"আজারবাইজান"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"বসনিয়া ও হার্জেগোভিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"বারবাদোস"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"চেবুয়ানো"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"বাংলাদেশ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"কুমিক"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"বেলজিয়াম"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"মধ্য-উচ্চ জার্মানি"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"বুরকিনা ফাসো"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"বুলগেরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"বাহরাইন"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"বুরুন্ডি"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"বেনিন"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"সেন্ট বারথেলিমি"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"বারমুডা"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"কুটেনাই"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"এরজিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ব্রুনেই"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"বলিভিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ক্যারিবিয়ান নেদারল্যান্ডস"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ব্রাজিল"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"বাহামা দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"সোগা"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ভুটান"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"বোভেট দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"বতসোয়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"বেলারুশ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"বেলিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"দৃশ্যমান ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ফারসি ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"হিব্রু সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"কানাডা"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"কোকোস (কিলিং) দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"মাজানদেরানি"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"কঙ্গো-কিনশাসা"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"মধ্য আফ্রিকার প্রজাতন্ত্র"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"কঙ্গো - ব্রাজাভিল"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"সুইজারল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"কোত দিভোয়ার"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"কুক দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"চিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"কাইথি"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ক্যামেরুন"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"চীন"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"কলম্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ক্লিপারটন আইল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"কোস্টারিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"কিউবা"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"কেপভার্দে"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"কুরাসাও"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ক্রিসমাস দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"সাইপ্রাস"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"বালিনীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"চেচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ইকাজুক"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"জার্মানি"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"প্রাচীন উচ্চ জার্মানি"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"অ্যাচাইনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"চিগা"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"দিয়েগো গার্সিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"দেবনাগরি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"জিবুতি"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ডেনমার্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"আকোলি"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"গোন্ডি"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ব্রেইল"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ব্রাহ্মী"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ডোমিনিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"আর্মেনীয় ছোটহাতের সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ডোমেনিকান প্রজাতন্ত্র"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"গোরোন্তালো"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"গথিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"মেইটেই মায়েক"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"জুনি"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"টাইগ্রে"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"আলজেরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"পাঙ্গাসিনান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"অর্ধপ্রস্থ পর্যন্ত"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"পাহ্লাভি"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"কুউটা এবং মেলিলা"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"চিবচা"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"পাম্পাঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ইকুয়েডর"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"পাপিয়ামেন্টো"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"অদাগ্মে"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"এস্তোনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"টিভ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"মিশর"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"পশ্চিম সাহারা"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"চাগাতাই"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"পালায়ুয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"চুকি"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"চিনুক জার্গন"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"মারি"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"চিপেওয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"চকটোও"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"গাণিতিক বোল্ড সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"চেরোকী"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ইরিত্রিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"স্পেন"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ইথিওপিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ইউরোপীয় ইউনিয়ন"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"এলামাইট"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"গ্রিগোরিয়ান ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ইউরোজোন"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"শাইয়েন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"গুজরাতি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"সিন্ধু"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"আদেগে"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ফিনল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ফিজি"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ফকল্যান্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"মাইক্রোনেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"স্থানীয় ভিন্নতা"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ফ্যারও দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ফ্রান্স"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"গ্রেবো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ভারতীয় জাতীয় বর্ষপঞ্জী"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"প্রাচীন গ্রীক"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"গ্যাবন"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ভোটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"যুক্তরাজ্য"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"নাইজেরিয় পিজিন"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"গ্রেনাডা"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"জর্জিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ফরাসী গায়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"গুয়ার্নসি"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ঘানা"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"তাইলে"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"জিব্রাল্টার"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"আফ্রিহিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"গ্রীনল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"মধ্য ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"গাম্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"গিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"গুয়াদেলৌপ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"নিরক্ষীয় গিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"গ্রীস"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"দক্ষিণ জর্জিয়া ও দক্ষিণ স্যান্ডউইচ দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"গুয়াতেমালা"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"গুয়াম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"গাণিতিক মোনোস্পেস সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"গিনি-বিসাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ত্লিঙ্গিট"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ক্লিঙ্গন"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"নতুন তাই লু"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"গিয়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"মধ্য কুর্দিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ভাষাভিত্তিক বিষয়বস্তু নেই"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"অস্ট্রিয়ান জার্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"হংকং এসএআর চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"হার্ড এবং ম্যাকডোনাল্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"হন্ডুরাস"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ক্রোয়েশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"এঘেম"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"সুইস জার্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ইসলামিক বর্ষপঞ্জী (উম্মা আল-কুরআ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"হাইতি"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"হাঙ্গেরি"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"তামাশেক"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ক্যানারি দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ইন্দোনেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"কায়াহ লি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"আয়ারল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"নেয়াপোলিটান"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"নামা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"সোরা সম্পেং সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"জাজা"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ইজরায়েল"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"আইল অফ ম্যান"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ভারত"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ইউরোপীয় ক্রম বিন্যাসের নিয়মাবলী"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ব্রিটিশ ভারত মহাসাগরীয় অঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ইরাক"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ইরান"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"আইসল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ইতালি"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"গাণিতিক চিহ্ন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"থাই সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"বাংলা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"সিরিলিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"জার্সি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ইসলামিক ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"জামাইকা"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"জর্ডন"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"জাপান"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"আইনু"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"গুসী"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"নায়াসা টোঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"কন্নড় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"কায়াহ লি"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"সুইস হাই জার্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ধ্বনি নির্দেশক বাছাই ক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"বৌদ্ধ ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"কেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ল্যাটিন আমেরিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"কিরগিজিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"কম্বোডিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"কিরিবাতি"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"কমোরোস"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"সেন্ট কিটস ও নেভিস"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"কানাড়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"কাই"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"কানাডীয় ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"উত্তর কোরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"দক্ষিণ কোরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"পোলার্ড ধ্বনিক"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"সুইস ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"কুয়েত"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"টোক পিসিন"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"কেম্যান দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"কাজাখস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"সিরিলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"লাওস"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"লেবানন"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"সেন্ট লুসিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ফোনিশীয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"প্রাচীন চার্চ স্লাভোনিক সিরিলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"গওইচ্’ইন"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"নিম্ন জার্মানি"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"লিচেনস্টেইন"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"শ্রীলঙ্কা"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"আক্কাদিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"কপটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"লাইবেরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"লেসোথো"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"পুস্তক পাহলভি"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"লিথুয়ানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"লাক্সেমবার্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"লাত্ভিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"কাটাকানা"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"লিবিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"লাডিনো"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ভুঞ্জো"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"লান্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"লাঙ্গি"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"থানা"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"মোরক্কো"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"মোনাকো"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"মলডোভা"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"মন্টিনিগ্রো"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"সেন্ট মার্টিন"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"লাম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"মাদাগাস্কার"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"মার্শাল দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"আলেউত"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ভাই সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"উত্তর ম্যাসেডোনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"গাণিতিক ডাবল-স্ট্রাক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"মালি"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"মায়ানমার (বার্মা)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"মঙ্গোলিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"নেওয়ারি"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ম্যাকাও এসএআর চীনা চীনা (ম্যাকাও এসএআর চীনা) চীনা (ঐতিহ্যবাহী, ম্যাকাও এসএআর চীনা) অঞ্চল: ম্যাকাও এসএআর চীন"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"উত্তরাঞ্চলীয় মারিয়ানা দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"মার্টিনিক"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"মরিতানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"মন্টসেরাট"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"মাল্টা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"ইউএন জিইজিএন বর্ণান্তরণ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"মরিশাস"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"দক্ষিন আলতাই"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"মালদ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"মালাউই"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"মেক্সিকো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"জাপানি ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"মালয়েশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"মোজাম্বিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"খদিত পাহলভি"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"নামিবিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"উপ সাহারান আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"হিব্রু ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"অভিধান বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"নিউ ক্যালেডোনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"নাইজার"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"নরফোক দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"নাইজেরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"তারোকো"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"সল্টার পাহলভি"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"নিকারাগুয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"ফাহাও মঙ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"নেদারল্যান্ডস"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"নরওয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"নেপাল"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"নিউয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ফিনিশিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"রম্বো"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"সিমশিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"নিউজিল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"রোমানি"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"মেরোইটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ক্রিমিয়ান তুর্কি"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"প্রাচীন ইংরেজী"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ওমান"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"আঙ্গিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"সেসেলওয়া ক্রেওল ফ্রেঞ্চ"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"পাহয়া মং সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"পানামা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ইসলামিক-সিভিল বর্ষপঞ্জী"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"কাশুবিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ব্রিটিশ ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"পেরু"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ফরাসী পলিনেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"পাপুয়া নিউ গিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ফিলিপাইন"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"পাকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"পোল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ইওন্ডো"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"সেন্ট পিয়ের ও মিকুয়েলন"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"পিটকেয়ার্ন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"পুয়ের্তো রিকো"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"প্যালেস্টাইনের অঞ্চলসমূহ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"বালীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"পর্তুগাল"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"পালাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"নিয়াস"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"গ্রীক ছোট হাতের সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"প্যারাগুয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"তুম্বুকা"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"কাতার"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"নিউয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"আউটলাইনিং ওসানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"লেজঘিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"অহম সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"তাক্রি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"তাই ভিয়েৎ"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"পৃথিবী"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"উত্তর আমেরিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"রিইউনিয়ন"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"দক্ষিণ আমেরিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"লোজবান"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"রেজ্যাঙ্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ওশিয়ানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"রোমানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"সার্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"রাশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"রুয়ান্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"নতুন তাই লিউ সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"ম্যানিচাইন"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"খরোষ্ঠী"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"সৌদি আরব"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"পোহ্নপেইয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"ম্যান্ডায়ীন"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"সলোমন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"তাসাওয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"পশ্চিম আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"সিসিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"সুদান"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"মধ্য আমেরিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"সুইডেন"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"পূর্ব আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"আরামাইক"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"উত্তর আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"সিঙ্গাপুর"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"সেন্ট হেলেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"টাইট লাইন বিভাজক শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"মধ্য আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"স্লোভানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"মায়ানমার থাই লেয়িং সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"দক্ষিন আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"স্বালবার্ড ও জান মেয়েন"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"আমেরিকাস"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"স্লোভাকিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"সিয়েরা লিওন"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"সান মারিনো"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"সেনেগাল"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"সোমালিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"মাপুচি"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"আরাপাহো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ঐতিহ্যবাহী তামিল সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"সুরিনাম"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"দক্ষিণ সুদান"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"সাওটোমা ও প্রিন্সিপি"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"এল সালভেদর"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"সিন্ট মার্টেন"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"সিরিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ইয়াও"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ইসওয়াতিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"আরাওয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ইয়াপেসে"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ট্রিস্টান ডা কুনহা"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"আসু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"মার্কিন যুক্তরাষ্ট্রের পরিমাপ সিস্টেম"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"উত্তরাঞ্চলীয় আমেরিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"তুর্কস ও কাইকোস দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ইয়াঙ্গবেন"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"চাদ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ফরাসী দক্ষিণাঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"টোগো"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"থাইল্যান্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"তাজিকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ক্যারাবিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"তিমুর-লেস্তে"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ইয়েম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"হাঙ্গুল প্রাথমিক ব্যঞ্জনবর্ণ দ্বারা অনুসন্ধান করুন"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"তুর্কমেনিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"তিউনিসিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"টোঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"তুরস্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ত্রিনিনাদ ও টোব্যাগো"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"তাইওয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"আস্তুরিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"অর্খোন"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"তাঞ্জানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"কোয়াসিও"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"অজানা লিপি"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ইউক্রেন"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"আরমেনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"পূর্ব এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"টুভিনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"কঙ্গো সোয়াহিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"দক্ষিণ এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"হাইডা"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"দক্ষিণ পূর্ব এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"উগান্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"পিনিন সজ্জাক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"দক্ষিণ ইউরোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"সিংহলি"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"যুক্তরাষ্ট্রের পার্শ্ববর্তী দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"জাতিসংঘ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"মার্কিন যুক্তরাষ্ট্র"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"হাওয়াইয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"সাধারণ চীনা সজ্জাক্রম - জিবি২৩১২"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"উরুগুয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"প্রুশিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"উজবেকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"সেন্ট্রাল আটলাস তামাজিগাত"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"আবর্তিত সজ্জাক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"নিঙ্গেম্বুন"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ভ্যাটিকান সিটি"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"প্রাচীন প্রোভেনসাল"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"সেন্ট ভিনসেন্ট ও গ্রেনাডিনস"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ভেনেজুয়েলা"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ব্রিটিশ ভার্জিন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"মার্কিন যুক্তরাষ্ট্রের ভার্জিন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ভিয়েতনাম"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ভানুয়াটু"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"নোগাই"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"রাওয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"প্রাচীন নর্স"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"অস্ট্রালেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ম্যালেনেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ওয়ালিস ও ফুটুনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"প্রথাগত বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"মাইক্রোনেশিয়া অঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"গোম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"লাকোটা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"অর্থনৈতিক সংখ্যাসূচক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"আগের বাছাইয়ের ক্রম, সামঞ্জস্যের জন্য"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ওয়ালসের"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"সামোয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"মিটিই মায়েক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ওয়ালামো"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ওয়াশো"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"সিউডো-অ্যাকসেন্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ওয়ারে"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"সিউডো-বিডি"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"আওয়াধি"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"পলিনেশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"কসোভো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"ব্রাহ্মী সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"অলিখিত"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ওল চিকি"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ওয়ার্লপিরি"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"বাটাক"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ব্লিসপ্রতীক"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ইয়েমেন"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"এন’কো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"আদর্শ বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ফ্যাঙ্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ফান্তি"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"চিহ্ন লিখন"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"মায়োত্তে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"চাম সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"দক্ষিণ আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"সুদানীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"আলগা লাইন বিভাজক শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"দেবনাগরি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"জর্জিয়ান সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"ঝুইন সজ্জাক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"হিরাগানা"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"জাম্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"জিম্বাবোয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"অজানা অঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"রুনিক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"মেট্রিক সিস্টেম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-861 ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"মোঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"উত্তরাঞ্চলীয় সোথো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"তেলুগু সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"লুইসিয়ানা ক্রেওল"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"লোজি"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"মাকামে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"সরলিকৃত চৈনিক আর্থিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"হিলিগ্যায়নোন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"প্রসারিত আরবি -ভারতীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"নুয়ার"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ডাকোটা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"পূর্ণ চওড়া সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"হিট্টিট"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"দার্গওয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"তাইতা"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"মায়ান হায়ারোগ্লিপ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"উত্তর লুরি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"ইমোজি বাছাই ক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"কোপ্টিক"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"প্রাচীন নেওয়ারী"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"উডমুর্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"খেমের"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ইসলামিক বর্ষপঞ্জী (সৌদি আরব, দৃশ্যমান)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"লিম্বু"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"স্যান্ডাওয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"রোমান সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"শাখা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"সারদা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"সামারিটান আরামিক"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"সামবুরু"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"সাসাক"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"সাঁওতালি"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"তিফিনাগ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"জুদেও ফার্সি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"সাংখিক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"স্থানীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ন্যাগাম্বে"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"গুরুমুখি"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"লুবা-লুলুয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"তিরহুতা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"পূর্ণপ্রস্থ পর্যন্ত"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"সাঙ্গু"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"লুইসেনো"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ন্যায়াঙ্কোলে"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ন্যায়ামওয়েজি"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"লুন্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ন্যোরো"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"লুয়ো"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ফিলিপিনো"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"হ্\u200cমোঙ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ডেলাওয়ের"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"মিজো"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"বেলুচী"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"স্ল্যাভ"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"বালিনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"ওয়ারেং সিটি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"লুইয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"বাসা"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"জুদেও আরবি"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ইউরোপীয় স্প্যানিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"এনজিমা"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"স্কটস"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"সিসিলিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"আফার"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"আবখাজিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"আবেস্তীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"আফ্রিকান"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"আকান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"চাকমা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"আমহারিক"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"আর্গোনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"আরবি"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"জাপানী"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"আরবী"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"জাপানি অক্ষরমালা"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"অসমীয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"লিনিয়ার এ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"আভেরিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"লিনিয়ার বি"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"দক্ষিণ কুর্দিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"আয়মারা"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"আজারবাইজানী"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"বাশকির"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"রাডিকেল স্ট্রোক বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"বেলারুশিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"বুলগেরিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"বিসলামা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"জাভানিজ সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"বামবারা"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"দোগ্রীব"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ব্রেটন"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"বসনীয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"মায়ানমার"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"লাও সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"সেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"এনকো"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"সেল্কুপ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"কাতালান"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"কোয়রাবেনো সেন্নী"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"চেচেন"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"চামোরো"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"কর্সিকান"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ক্রি"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"চেক"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"চার্চ স্লাভিক"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"চুবাস"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ওয়েলশ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ইথিয়োপিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"উই"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ডেনিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ইউরোপের পর্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"জার্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"মানক মুদ্রা বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"বেজা"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ডিংকা"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"বুগি"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"বেম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"প্রাচীন আইরিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"মঙ্গোলীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"দিবেহি"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ল্যাটিন আমেরিকান স্প্যানিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"জোঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"বেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"চীনা ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"জার্মা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"গ্রিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ইউয়ি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"সাধারণ লাইন বিভাজক শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"মলদাভিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"এস্পেরান্তো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"প্রথাগত চীনা সজ্জাক্রম - বিগ৫"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"স্প্যানিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"এস্তোনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"হ্যানবি"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"বাস্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"বুহিড"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"হাঙ্গুল"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"সমেরিটন"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"তাচেলহিত"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"উচ্চ সোর্বিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"হ্যান"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"শান"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"হ্যানুনু"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ফার্সি"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"সরলীকৃত"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ওয়েস্টার্ন ডিজিট"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ঐতিহ্যবাহী"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ফুলাহ্"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Xiang চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ফিনিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ফিজিআন"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ফন"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"পশ্চিম বালোচি"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ক্যান্টোনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ফারোস"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"ইউএস বিজিএন বর্ণান্তরণ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"উম্বুন্দু"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"সিডামো"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"পশ্চিম ফ্রিসিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"আইরিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"স্কটস-গ্যেলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"গ্যালিশিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"গুয়ারানি"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ভোজপুরি"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"অজানা ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ইথিওপিও আমেতে আলেম ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ইসলামিক বর্ষপঞ্জী (ছকবদ্ধ, জ্যোতির্বিদ্যীয় যুগ)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ম্যাঙ্কস"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"ওসমানিয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"হাউসা"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"হিন্দি"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"হুপা"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"বিকোল"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"বিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"হিরি মোতু"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ক্রোয়েশীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"হাইতিয়ান ক্রেওল"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"হাঙ্গেরীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"আর্মেনিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"হেরেরো"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"কাজুন ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ইন্টারলিঙ্গুয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"জ্যামো"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ইন্দোনেশীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"তিব্বতি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ইন্টারলিঙ্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ইগ্\u200cবো"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"সিচুয়ান য়ি"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"মধ্য ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ইনুপিয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"প্রাচীন ফরাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ইডো"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"পূর্ব ফ্রিসিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"উত্তরাঞ্চলীয় ফ্রিসিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"আইসল্যান্ডীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ইতালিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ইনুক্টিটুট"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"জাপানি"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"সারাতি"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ডোগরি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"লেপচা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"দক্ষিণাঞ্চলীয় সামি"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"সাভিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"মাদুরেসে"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"লুলে সামি"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"মাগাহি"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"মৈথিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ইনারি সামি"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"সিকসিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ম্যাকাসার"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Wu চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"স্কোল্ট সামি"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"ম্যান্ডিঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"কঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"গোথিক"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"কিকুয়ু"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"মাসাই"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"কোয়ানিয়ামা"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"কাজাখ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ক্যালাল্লিসুট"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"খমের"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"কন্নড়"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"কানুরি"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"কাশ্মীরি"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"কির্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"লেপ্চা"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"আভেসতান"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"কুর্দিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"কোমি"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"কর্ণিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"কির্গিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"সোনিঙ্কে"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"লাতিন"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"লুক্সেমবার্গীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"মালয়ালম সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"গান্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"রোঙ্গোরোঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"লিম্বুর্গিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"লিঙ্গালা"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ফ্রিউলিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ইম্পেরিয়াল পরিমাপ সিস্টেম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"টাই থাম হোরা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"লিথুয়েনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"লুবা-কাটাঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"লাত্\u200cভীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"সোগডিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"মালাগাসি"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"মার্শালিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ডিফল্ট ইউনিকোড বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"মাওরি"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ম্যাসিডোনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"মঙ্গোলিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"মারাঠি"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"মালয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"মল্টিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"বর্মি"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"সৌরাষ্ট্র"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"আর্মেনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"মোকশা"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"নিম্নতর সোর্বিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"আরমি"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"সাধারণ-উদ্দেশ্যে অনুসন্ধান"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"নরওয়েজিয়ান বোকমাল"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"উত্তর এন্দেবিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"নেপালী"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"এন্দোঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"ম্যাণ্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ওলন্দাজ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"নরওয়েজিয়ান নিনর্স্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"নরওয়েজীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"দক্ষিণ এনডেবেলে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"মোদি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"নাভাজো"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"কারা-কাল্পাক"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"নায়াঞ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"কাচিন"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"কাবাইলে"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"অক্সিটান"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"অজ্জু"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"কাম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"মেন্ডে"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ওজিবওয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"মেরু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"আর্মেনীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"অরোমো"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"কাউই"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ওসেটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"কাবার্ডিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"মরিসিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"স্রানান টোঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"পাঞ্জাবী"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"দুয়ালা"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"সেরের"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"পালি"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"পোলিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"মধ্য ডাচ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"সৌরাষ্ট্রের সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"দাঙ্গী ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"পুশতু"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"পর্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"মধ্য আইরিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ব্রাজিলের পর্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"টাইয়াপ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"মাখুয়া-মেত্তো"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"মুদ্র্যা ফরম্যাট"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"এন’কো সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ব্রাজ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"মেটা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"২৪ ঘণ্টার হিসাবে (০–২৩)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"২৪ ঘণ্টার হিসাবে (১–২৪)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"সাহো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"মায়ানমার সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"কেচুয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"জাপোটেক"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"বোড়ো"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"লান্না"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"মাকোন্দে"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ইথিওপিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"১২ ঘণ্টার হিসাবে (১–১২)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"১২ ঘণ্টার হিসাবে (০–১১)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"রোমান্স"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"রুন্দি"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"মুদ্রা"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"রোমানীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ওড়িয়া সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"চৈনিক দশমিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"রুশ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"কিনয়ারোয়ান্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"চিত্র ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"কাবুভারদিয়ানু"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"মিকম্যাক"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"সুকুমা"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"অস্ট্রেলীয় ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"সংস্কৃত"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"সার্ডিনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"সুসু"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"সিন্ধি"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"উত্তরাঞ্চলীয় সামি"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"মিনাংকাবাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"সাঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"সার্বো-ক্রোয়েশিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"সিংহলী"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"সুমেরীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"স্লোভাক"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"স্লোভেনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"সামোয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"শোনা"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"সোমালি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"আরবি-ভারতীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"আলবেনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"সার্বীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"সোয়াতি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"হিসাবের মুদ্রা বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"দক্ষিন সোথো"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"সুদানী"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"সুইডিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"সোয়াহিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ঐতিহ্যবাহী চৈনিক আর্থিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ইবিবিও"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ইবান"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"বুরিয়াত"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"মধ্য এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"তেলুগু"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"পশ্চিম এশিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"তাজিক"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"তিগরিনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"বুগিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"কোরো"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"কানাডীয় ইংরেজি"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"তুর্কমেনী"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"তাগালগ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"সোয়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"টোঙ্গান"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"জোলা-ফনী"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"জাপানি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"তুর্কী"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"সঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"কমোরিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"তাতার"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ডিউলা"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"টোয়াই"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"তাহিতিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ইউরোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"পূর্ব ইউরোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"গাণিতিক স্যান্স-শেরিফ বোল্ড সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"উত্তর ইউরোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"দাজাগা"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"পশ্চিম ইউরোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"উইঘুর"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"প্রাচীন ইতালি"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"সাধারন"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ইউক্রেনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"কপটিক ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"উর্দু"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"কাল্মইক"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"জেনাগা"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"উজবেকীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"খাশি"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"লো স্যাক্সন"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"সিলেটি নাগরি"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ভেন্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"মিঙ্গুও ক্যালেন্ডার"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ভিয়েতনামী"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"খোটানিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"কোয়রা চীনি"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"সময়ের হিসাব (১২ বা ২৪)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ভোলাপুক"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"প্রাচীন সিরিও"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"গাণিতিক স্যান্স-শেরিফ সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ওসমানিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"কি‘চে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"মাসারাম গন্ডি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"গা"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ওয়ালুন"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"গাগাউজ"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"লাইডিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"সুমের-আক্কাদীয় কীলকরূপ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"উওলোফ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"আদর্শ মরক্কোন তামাজিগাত"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"আধুনিক আদর্শ আরবী"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"সংযুক্ত কানাডিয়ান অ্যাব্রোজিনিয়ান সিলেবিক্স"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"গায়ো"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"মোঙ্গোলীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"মাঞ্চু"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ফ্রাক্টুর ল্যাটিন"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"বায়া"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"মণিপুরী"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ল্যাটিন"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"গ্যালিক ল্যাটিন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"সরলিকৃত চৈনিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ঐতিহ্যাবাহী চৈনিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"জোসা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"রোমান ছোটহাতের সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ব্লিন"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"লাইসিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ওসেজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"মুন"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"মোহাওক"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"কাকো"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ইয়েদ্দিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"মসি"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"দেসেরাত"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ইওরুবা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"ঐতিহ্যগত সংখ্যাসূচক"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ম্যাক্সিকান স্প্যানিশ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"পশ্চিমাঞ্চলীয় সিরিয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"অটোমান তুর্কি"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"এস্ট্রেঙ্গেলো সিরিয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ঝু্য়াঙ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"ক্যারিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"কালেনজিন"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"বোপোমোফো"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"প্রাচীন পার্মিক"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"লাইন বিভাজক শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"জুলু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ফোনবুক সজ্জাক্রম"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"কিম্বুন্দু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"জাপানি আর্থিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"চ্যাম"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"গীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"পূর্বাঞ্চলীয় সিরিয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"মায়ানমার শান সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"ওল চিকি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"রিফর্মড বাছাই বিন্যাস"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"টাগালগ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"মিশরীয় ডেমোটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"মিশরীয় হায়রেটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"এম্বু"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"মিশরীয় হায়ারোগ্লিপ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"জর্জিয় খুৎসুরি"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"সরলীকৃত চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"কমি-পারমিআক"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"পুরোনো হাঙ্গেরীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"কোঙ্কানি"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"কোস্রাইন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"লিম্বু সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ঐতিহ্যবাহি চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"সান্দানিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ক্\u200cপেল্লে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"খেমের সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ইলোকো"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"সাইপ্রোয়েট"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"মুদাঙ্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"গুরুমুখি সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"একাধিক ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ক্যাডো"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"পরিমাপ সিস্টেম"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ক্রিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"গ্লাগোলিটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"গিলবার্টিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"চেরোকি"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"ক্যারিব"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"তামিল সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"কারচে-বাল্কার"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ইঙ্গুশ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"দারি"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"কারেলিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"এফিক"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"কুরুখ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"শাম্বালা"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"তেলেগু"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"বাফিয়া"_s)
		})
	}));
	return data;
}

LocaleNames_bn::LocaleNames_bn() {
}

$Class* LocaleNames_bn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bn, name, initialize, &_LocaleNames_bn_ClassInfo_, allocate$LocaleNames_bn);
	return class$;
}

$Class* LocaleNames_bn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun