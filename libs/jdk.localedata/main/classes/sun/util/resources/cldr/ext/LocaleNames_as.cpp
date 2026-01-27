#include <sun/util/resources/cldr/ext/LocaleNames_as.h>

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

$MethodInfo _LocaleNames_as_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_as, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_as, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_as_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_as",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_as_MethodInfo_
};

$Object* allocate$LocaleNames_as($Class* clazz) {
	return $of($alloc(LocaleNames_as));
}

void LocaleNames_as::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_as::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"নাউৰু"_s);
	$var($String, metaValue_TV, u"টুভালু"_s);
	$var($String, metaValue_ar, u"আৰবী"_s);
	$var($String, metaValue_bn, u"বাংলা"_s);
	$var($String, metaValue_bo, u"তিব্বতী"_s);
	$var($String, metaValue_el, u"গ্ৰীক"_s);
	$var($String, metaValue_gu, u"গুজৰাটী"_s);
	$var($String, metaValue_he, u"হিব্ৰু"_s);
	$var($String, metaValue_hy, u"আৰ্মেনীয়"_s);
	$var($String, metaValue_ja, u"জাপানী"_s);
	$var($String, metaValue_ka, u"জৰ্জিয়ান"_s);
	$var($String, metaValue_km, u"খমেৰ"_s);
	$var($String, metaValue_kn, u"কানাড়া"_s);
	$var($String, metaValue_ko, u"কোৰিয়ান"_s);
	$var($String, metaValue_la, u"লেটিন"_s);
	$var($String, metaValue_lo, u"লাও"_s);
	$var($String, metaValue_ml, u"মালায়ালম"_s);
	$var($String, metaValue_or, u"ওড়িয়া"_s);
	$var($String, metaValue_ta, u"তামিল"_s);
	$var($String, metaValue_te, u"তেলুগু"_s);
	$var($String, metaValue_th, u"থাই"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"কোলোগনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"মিৰাণ্ডিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"প্ৰতীক"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ইম’জি"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"চাক্\u200cমা"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"টিম্নে"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"তেছো"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ৰাপানুই"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"এচেনচিয়ন দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ৰাৰোতোঙ্গন"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"তেতুম"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"আন্দোৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"সংযুক্ত আৰব আমিৰাত"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ফ্লেমিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"আফগানিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"এণ্টিগুৱা আৰু বাৰ্বুডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ইথিঅ’পিক কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"এনগুইলা"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"আলবেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"আৰ্মেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"এংগোলা"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"এণ্টাৰ্কটিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"আৰ্জেণ্টিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"আমেৰিকান চামোৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"অষ্ট্ৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"অষ্ট্ৰেলিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"আৰুবা"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"আমেৰিকান ইংৰাজী"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"আলণ্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"আজাৰবেইজান"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ব’ছনিয়া আৰু হাৰ্জেগ’ভিনা"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"বাৰ্বাডোচ"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"চিবুৱানো"_s)
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
			$of("BF"_s),
			$of(u"বুৰকিনা ফাচো"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"বুলগেৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"বাহৰেইন"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"বুৰুণ্ডি"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"বেনিন"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ছেইণ্ট বাৰ্থলেমে"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"বাৰ্মুডা"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"এৰজিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ব্ৰুনেই"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"বলিভিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"কেৰিবিয়ান নেদাৰলেণ্ডছ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ব্ৰাজিল"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"বাহামাছ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ছোগা"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ভুটান"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"বুভে দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ব’টচোৱানা"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"বেলাৰুছ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"বেলিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ফাৰ্চী কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"হিব্ৰু সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"কানাডা"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"কোকোচ (কীলিং) দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"মাজেন্দাৰানি"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"কঙ্গো - কিনচাছা"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"মধ্য আফ্রিকান প্রজাতন্ত্র"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"কঙ্গো - ব্রাজাভিল"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"চুইজাৰলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"কোটে ডি আইভৰ"_s)
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
			$of("CM"_s),
			$of(u"কেমেৰুণ"_s)
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
			$of(u"ক্লিপাৰটোন দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"কোষ্টা ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"কিউবা"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"কেপ ভার্দে"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"কুৰাকাও"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"খ্ৰীষ্টমাছ দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"চাইপ্ৰাছ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"চিজেচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"একাজুক"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"জাৰ্মানী"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"আচিনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"চিগা"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ডিয়েগো গাৰ্চিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"দেৱনাগৰী অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"জিবুটি"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ডেনমাৰ্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ব্ৰেইল"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ড’মিনিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"আৰ্মেনীয় সৰুফলা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ড’মিনিকান ৰিপাব্লিক"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"গোৰোন্তালো"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ঝুনি"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"তাইগ্ৰে"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"আলজেৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"পংগাছিনান"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"চেউটা আৰু মেলিলা"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"পাম্পান্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ইকুৱেডৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"পাপিয়ামেণ্টো"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"আদাংমে"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ইষ্টোনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ইজিপ্ত"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"পশ্চিমীয় ছাহাৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"পালাউৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"চুকিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"মাৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"চোক্টাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"চেৰোকি"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"এৰিত্ৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"স্পেইন"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ইথিঅ’পিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ইউৰোপীয় সংঘ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"গ্ৰেগোৰিয়ান কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ইউৰোজ’ন"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"চাইয়েন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"গুজৰাটী অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"আদিগে"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ফিনলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ফিজি"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ফকলেণ্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"মাইক্ৰোনেচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ফাৰো দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ফ্ৰান্স"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ভাৰতীয় ৰাষ্ট্ৰীয় পঞ্জিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"গেবন"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"সংযুক্ত ৰাজ্য"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"নাইজেৰিয়ান পিজিন"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"গ্ৰেনাডা"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"জৰ্জিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ফ্ৰান্স গয়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"গোৰেনচি"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ঘানা"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"জিব্ৰাল্টৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"গ্ৰীণলেণ্ড"_s)
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
			$of(u"গুৱাডেলুপ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ইকুৱেটৰিয়েল গিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"গ্ৰীচ"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"দক্ষিণ জৰ্জিয়া আৰু দক্ষিণ চেণ্ডৱিচ দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"গুৱাটেমালা"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"গুৱাম"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"গিনি-বিছাও"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ক্লিংগন"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"গায়ানা"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"চেণ্ট্ৰেল কুৰ্ডিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"কোনো ভাষা সমল নাই"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"অষ্ট্ৰেলিয়ান জাৰ্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"হং কং এছ. এ. আৰ. চীন"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"হাৰ্ড দ্বীপ আৰু মেকডোনাল্ড দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"হন্দুৰাছ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ক্ৰোৱেছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"আঘেম"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ছুইচ জাৰ্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"হাইটি"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"হাংগেৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"কেনেৰী দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ইণ্ডোনেচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"আয়াৰলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"নিয়াপোলিটেন"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"নামা"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ঝাঝা"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ইজৰাইল"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"আইল অফ মেন"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ভাৰত"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ব্ৰিটিছ ইণ্ডিয়ান অ’চন টেৰিট’ৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ইৰাক"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ইৰান"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"আইচলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ইটালি"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"গাণিতিক চিহ্ন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"থাই অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"বাংলা অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"জাৰ্চি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ইছলামী কেলেণ্ডাৰ"_s)
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
			$of(u"জৰ্ডান"_s)
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
			$of(u"গুছি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"কানাড়া অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ছুইচ হাই জাৰ্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"বৌদ্ধ কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"কেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"লেটিন আমেৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"কিৰ্গিজস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"কম্বোডিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"কিৰিবাটি"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"কোমোৰোজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ছেইণ্ট কিটছ আৰু নেভিছ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"কানাডিয়ান ফ্ৰেন্স"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"উত্তৰ কোৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"দক্ষিণ কোৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ছুইচ ফ্ৰেন্স"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"কুৱেইট"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"টোক পিছিন"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"কেইমেন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"কাজাখাস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"চিৰিলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"লাওচ"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"লেবানন"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ছেইণ্ট লুচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"জিউইচিন"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ল’ জাৰ্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"লিচটেনষ্টেইন"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"শ্রীলংকা"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"লিবেৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"লেছ’থ’"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"লিথুৱানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"লাক্সেমবাৰ্গ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"লাটভিয়া"_s)
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
			$of(u"ভুঞ্জু"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"লাংগি"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"থানা"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"মৰক্কো"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"মোনাকো"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"মোলডোভা"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"মণ্টেনেগ্ৰু"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ছেইণ্ট মাৰ্টিন"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"মাদাগাস্কাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"মাৰ্শ্বাল দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"আলেউট"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"উত্তৰ মেচিডোনীয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"মালি"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ম্যানমাৰ (বাৰ্মা)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"মঙ্গোলিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"নেৱাৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"মাকাও এছ. এ. আৰ. চীন"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"উত্তৰ মাৰিয়ানা দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"মাৰ্টিনিক"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"মাউৰিটানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ম’ণ্টছেৰাট"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"মাল্টা"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"মৰিছাছ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"দাক্ষিণাত্য আল্টাই"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"মালদ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"মালাৱি"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"মেক্সিকো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"জাপানী কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"মালয়েচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ম’জামবিক"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"নামিবিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"উপ-ছাহাৰান আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"হিব্ৰু কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"নিউ কেলিডোনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"নাইজাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ন’ৰফ’ক দ্বীপ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"নাইজেৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"তাৰোকো"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"নিকাৰাগুৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"নেডাৰলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"নৰৱে"_s)
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
			$of(u"নিউ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ৰোম্বো"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"নিউজিলেণ্ড"_s)
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
			$of(u"ছেছেলৱা ক্ৰিওল ফ্ৰেন্স"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"পানামা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ইচলামী-নাগৰিকৰ পঞ্জিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ব্ৰিটিছ ইংৰাজী"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"পেৰু"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ফ্ৰান্স পোলেনচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"পাপুৱা নিউ গিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ফিলিপাইনছ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"পাকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"পোলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ইওন্দো"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ছেইণ্ট পিয়েৰে আৰু মিকিউৱেলন"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"পিটকেইৰ্ণ দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"পুৱেৰ্টো ৰিকো"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ফিলিস্তিন অঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"পৰ্তুগাল"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"পালাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"নিয়াছ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"গ্ৰীক সৰুফলা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"পাৰাগুৱে"_s)
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
			$of(u"কাটাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"নিয়ুৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"আউটলায়িং অ’চিয়ানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"লেজঘিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"বিশ্ব"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"উত্তৰ আমেৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ৰিইউনিয়ন"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"দক্ষিণ আমেৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"লোজ্বান"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"অ’চেনীয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ৰোমানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ছাৰ্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ৰাছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ৰোৱাণ্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"চৌডি আৰবিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"চোলোমোন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"টাছাৱাক"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"পাশ্চাত্য আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ছিচিলিছ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"চুডান"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"মধ্য আমেৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"চুইডেন"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"প্ৰাচ্য আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"উদীচ্য আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ছিংগাপুৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ছেইণ্ট হেলেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"কঠোৰ পংক্তি বিচ্ছেদ শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"মধ্য আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"শ্লোভেনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"দাক্ষিণাত্য আফ্ৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"চাভালবাৰ্ড আৰু জন মেয়ন"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"আমেৰিকাছ্"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"শ্লোভাকিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"চিয়েৰা লিঅ’ন"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"চান মাৰিনো"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"চেনেগাল"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"চোমালিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"মাপুচে"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"আৰাপাহো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"পৰম্পৰাগত তামিল সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ছুৰিনাম"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"দক্ষিণ চুডান"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"চাও টোমে আৰু প্ৰিনচিপে"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"এল ছেলভেড’ৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"চিণ্ট মাৰ্টেন"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"চিৰিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ইচ্চুটিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ত্ৰিস্তান দ্যা কুনহা"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"আছু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"মাৰ্কিন যুক্তৰাষ্ট্ৰৰ জোখ-মাখৰ প্ৰণালী"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"উদীচ্য আমেৰিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"টাৰ্কছ অৰু কেইক’ছ দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"য়াংবেন"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"চাড"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"দক্ষিণ ফ্ৰান্সৰ অঞ্চল"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"টোগো"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"থাইলেণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"তাজিকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"কেৰিবিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"টোকেলাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"টিমোৰ-লেচটে"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"য়েম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"তুৰ্কমেনিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"টুনিচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"টংগা"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"তুৰ্কি"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ট্ৰিনিডাড আৰু টোবাগো"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"টাইৱান"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"এষ্টুৰীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"তাঞ্জানিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"কোৱাছিঅ’"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"অজ্ঞাত লিপি"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ইউক্ৰেইন"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"আৰোমানীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"প্ৰাচ্য এছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"তুভিনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"কঙ্গো স্বাহিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"দাক্ষিণাত্য এছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"দক্ষিণ-পূব এছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"উগাণ্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"পিন্\u200cয়িন শৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"দাক্ষিণাত্য ইউৰোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"সিংহলী"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ইউ. এছ. আউটলায়িং দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ৰাষ্ট্ৰসংঘ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"মাৰ্কিন যুক্তৰাষ্ট্ৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"হাৱাই"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"সৰল চীনা শৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"উৰুগুৱে"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"প্ৰুছিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"উজবেকিস্তান"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"চেণ্ট্ৰেল এটলাছ টামাজাইট"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"স্ট্ৰোক শৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"নিয়েম্বোন"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ভেটিকান চিটি"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ছেইণ্ট ভিনচেণ্ট আৰু গ্ৰীণাডাইনছ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ভেনিজুৱেলা"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ব্ৰিটিছ ভাৰ্জিন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ইউ. এছ. ভাৰ্জিন দ্বীপপুঞ্জ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ভিয়েটনাম"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ভানাটু"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"নোগাই"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ৰৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"অষ্ট্ৰেলেছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"মেলানেছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ৱালিছ আৰু ফুটুনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"পৰম্পৰাগতভাবে শৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"মাইক্ৰোনেচিয় ক্ষেত্ৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"নগোম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"লাকোটা"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ৱালছেৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"চামোৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ওলেইটা"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ছুডু-একচেণ্ট"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ৱাৰে"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ছুডু-বিডি"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"আৱাধি"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"পলিনেচিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"কচ’ভ’"_s)
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
			$of("YE"_s),
			$of(u"য়েমেন"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"এন্কো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"মান্য সজোৱা ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"মায়োট্টে"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"দক্ষিণ আফ্রিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ঢিলা পংক্তি বিচ্ছেদ শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"দেৱনাগৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"জৰ্জীয়ান সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"হিৰাগানা"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"জাম্বিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"জিম্বাবৱে"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"অজ্ঞাত ক্ষেত্ৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"মেট্ৰিক প্ৰণালী"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"আই. এছ. অ’.-৮৬০১ কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"উদীচ্য ছোথো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"তেলুগু অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"লোজি"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"মেকহেম"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"সৰলীকৃত চীনা বিত্তীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"হিলিগায়নোন"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"বিস্তাৰিত আৰবী-ভাৰতীয় অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"নুয়েৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ডাকোটা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"পূৰ্ণ-প্ৰস্থৰ অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"দাৰ্গৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"তেইতা"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"উদীচ্য লুৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"উদমুৰ্ত"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ছান্দাৱে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ৰোমান সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ছাখা"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ছাম্বুৰু"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"চাওতালি"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"নাংম্বে"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"গুৰুমুখী"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"লুবা-লুলুৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ছাঙ্গু"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ন্যানকোল"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"লুণ্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"লুও"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ফিলিপিনো"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"হমং"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"মিজো"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"বালিনীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"লুইয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"বাছা"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ইউৰোপীয়ান স্পেনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"স্কটছ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ছিচিলিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"আফাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"আবখাজিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"আফ্ৰিকানছ্"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"আকান"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"আমহাৰিক"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"আৰ্গোনিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"জাপানী ছিলেবেৰিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"অসমীয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"আভেৰিক"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"আয়মাৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"আজেৰবাইজানী"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"বাছখিৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"বেলাৰুছীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"বুলগেৰীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"বিছলামা"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"বামবাৰা"_s)
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
			$of(u"ডোগ্ৰিব"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ব্ৰেটন"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"বছনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ম্যানমাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"লাও অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ছেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"কাতালান"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"কোইৰাবোৰো চেন্নি"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"চেচেন"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"চামোৰো"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"কোৰ্ছিকান"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"চেক"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"চাৰ্চ শ্লেভিক"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"চুভাচ"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ৱেলচ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ইথিঅ’পিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ডেনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ইউৰোপীয়ান পৰ্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"জাৰ্মান"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"মান্য মুদ্ৰা সজ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"বেম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"দিবেহি"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"লেটিন আমেৰিকান স্পেনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"জোংখা"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"বেনা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"চীনা কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ঝাৰ্মা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"গ্ৰীক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ইৱে"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"সাধাৰণ পংক্তি বিচ্ছেদ শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"মোল্ডাভিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ইংৰাজী"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"এস্পেৰান্তো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"পৰম্পৰাগত চীনা শৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"স্পেনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"এষ্টোনিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"বোপোমোফোৰ সৈতে হান"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"বাস্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"হেঙ্গুল"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"তাচেলহিট"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"আপাৰ ছোৰ্বিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"হান"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"চান"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ফাৰ্ছী"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"সৰলীকৃত"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"পশ্চিমীয়া অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"পৰম্পৰাগত"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ফুলাহ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ফিনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ফিজিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ফ’ন"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"কেণ্টোনীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ফাৰোইজ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"উম্বুন্দু"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ফ্ৰেন্স"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ৱেষ্টাৰ্ণ ফ্ৰিছিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"আইৰিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"স্কটিচ গেইলিক"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"গেলিচিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"গুৱাৰাণী"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ভোজপুৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"অজ্ঞাত ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"মেংক্স"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"হাউছা"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"হিন্দী"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"হুপা"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"বিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ক্ৰোৱেচিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"হেইটিয়ান ক্ৰিয়ল"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"হাঙ্গেৰিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"হেৰেৰো"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ইণ্টাৰলিংগুৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"জামো"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ইণ্ডোনেচিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"তিব্বতী অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ইগ্বো"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ছিচুৱান ই"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ইডো"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"আইচলেণ্ডিক"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ইটালিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ইনুক্টিটুট"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"দাক্ষিণাত্য ছামি"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"জাভানী"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"মাদুৰেছে"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"লুলে ছামি"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"মাগাহি"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"মৈথিলী"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ইনাৰি ছামি"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ছিক্সিকা"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"মাকাছাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"স্কোল্ট ছামি"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"কিকুয়ু"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"মাছাই"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"কুয়ানিয়ামা"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"কাজাখ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"কালালিছুট"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"কানুৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"কাশ্মিৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"কুৰ্ডিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"কোমি"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"কোৰ্নিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"কিৰ্গিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ছোনিনকে"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"লাক্সেমবাৰ্গিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"মালায়ালম অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"গান্দা"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"লিম্বুৰ্গিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"লিংগালা"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ফ্ৰিউলিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ইম্পেৰিয়েল জোখ-মাখৰ প্ৰণালী"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"লিথুৱানিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"লুবা-কাটাংগা"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"লাটভিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"মালাগাছী"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"মাৰ্চলিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ডিফ’ল্ট ইউনিকোড সজোৱা ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"মাওৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"মেচিডোনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"মংগোলীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"মাৰাঠী"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"মালয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"মাল্টিজ"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"বাৰ্মীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"মোক্সা"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ল’ৱাৰ ছোৰ্বিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"সাধাৰণ উদ্দেশ্যে অনুসন্ধান"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"নৰৱেজিয়ান বোকমাল"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"উত্তৰ নিবেবেলে"_s)
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
			$of("nl"_s),
			$of(u"ডাচ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"নৰৱেজিয়ান নায়নোৰ্স্ক"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"দক্ষিণ দেবেল"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"নাভাজো"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ন্যাঞ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"কাচিন"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"কাবাইল"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"অ’চিটান"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"জজু"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"কাম্বা"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"মেণ্ডে"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"মেৰু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"আৰ্মেনীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ওৰোমো"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ওছেটিক"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"কাবাৰ্ডিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"মৰিছিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"স্ৰানান টোঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"পাঞ্জাবী"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ডুৱালা"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"প’লিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"দাংগি কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"পুস্ত"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"পৰ্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"সজোৱা ক্ৰম"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ব্ৰাজিলিয়ান পৰ্তুগীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ত্যাপ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"মাখুৱা-মিট্টো"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"মুদ্ৰা সজ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"কেলেণ্ডাৰ"_s)
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
			$of(u"২৪ ঘণ্টীয়া প্ৰণালী (০–২৩)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"২৪ ঘণ্টীয়া প্ৰণালী (১–২৪)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ছাহো"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ম্যানমাৰ অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"কুৱেচুৱা"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"বড়ো"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"মাকোণ্ড"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ইথিঅ’পিক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"১২ ঘণ্টীয়া প্ৰণালী (১–১২)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"১২ ঘণ্টীয়া প্ৰণালী (০–১১)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ৰোমানচ"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ৰুন্দি"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"মুদ্ৰা"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ৰোমানীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ওড়িয়া অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"চীনা দশমিক সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ৰাছিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"কিনয়াৰোৱাণ্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"কাবুভেৰ্ডিয়ানু"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"মিকমেক"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ছুকুমা"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"অষ্ট্ৰেলিয়ান ইংৰাজী"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"সংস্কৃত"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ছাৰ্ডিনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"সিন্ধী"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"উদীচ্য ছামি"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"মিনাংকাবাউ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ছাঙ্গো"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"সিংহলা"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"শ্লোভাক"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"শ্লোভেনিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ছামোন"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"চোনা"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ছোমালি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"আৰবী-ভাৰতীয় অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"আলবেনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ছাৰ্বিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"স্বাতি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"গাণনিক মুদ্ৰা সজ্জা"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"দাক্ষিণাত্য ছোথো"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"ছুণ্ডানীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ছুইডিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"স্বাহিলি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"পৰম্পৰাগত চীনা বিত্তীয় সংখ্যা"_s)
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
			$of(u"এছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"মধ্য এছিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"পাশ্চাত্য এছিয়া"_s)
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
			$of(u"টিগৰিনিয়া"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"বগিনীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"কোৰো"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"কানাডিয়ান ইংৰাজী"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"তুৰ্কমেন"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ছোৱানা"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"টোঙ্গান"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"জোলা-ফ’নি"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"জাপানী সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"তুৰ্কী"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ছোঙ্গা"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"কোমোৰিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"তাতাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"তাহিতিয়ান"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ইউৰোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"প্ৰাচ্য ইউৰোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"উদীচ্য ইউৰোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"দাজাগা"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"পাশ্চাত্য ইউৰোপ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"উইঘুৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"কোমোন"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ইউক্ৰেইনীয়"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"উৰ্দু"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"কাল্মিক"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"উজবেক"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"খাচি"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ভেণ্ডা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"চীনা প্ৰজাতন্ত্ৰৰ কেলেণ্ডাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ভিয়েটনামী"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"কোয়াৰ চিনি"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ঘণ্টীয়া চক্ৰ (১২ বনাম ২৪)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ভোলাপুক"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"কিচিয়ে"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"গা"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ৱালুন"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"চিৰিয়াক"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ৱোলাফ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ষ্টেণ্ডাৰ্ড মোৰোক্কান তামাজাইট"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"আধুনিক মানক আৰবী"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"মঙ্গোলিয়"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"মণিপুৰী"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"সৰলীকৃত চীনা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"পৰম্পৰাগত চীনা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"হোছা"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ৰোমান সৰুফলা সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ব্লিন"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"মোহোক"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"কাকো"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ইদ্দিছ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"মোছি"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ইউৰুবা"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"মেক্সিকান স্পেনিচ"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ভাই"_s)
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
			$of("key.lb"_s),
			$of(u"পংক্তি বিচ্ছেদ শৈলী"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ঝুলু"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"টেলিফোন বহিৰ মতেশৃঙ্খলাবদ্ধ কৰাৰ ক্ৰম"_s)
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
			$of(u"জাপানী বিত্তীয় সংখ্যা"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"গীজ"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"এম্বু"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"সৰলীকৃত চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"কোংকণী"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"পৰম্পৰাগত চীনা"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"কেপেল"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"খমেৰ অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ইলোকো"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"মুণ্ডাং"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"গুৰুমুখী অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"একাধিক ভাষা"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"জোখ-মাখৰ প্ৰণালী"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ক্ৰীক"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"গিলবাৰ্টিছ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"তামিল অংক"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"কাৰাচে-বাল্কাৰ"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ইংগুচ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"দাৰি"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"কেৰেলিয়ান"_s)
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
			$of(u"কুৰুখ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"চাম্বালা"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"বাফিয়া"_s)
		})
	}));
	return data;
}

LocaleNames_as::LocaleNames_as() {
}

$Class* LocaleNames_as::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_as, name, initialize, &_LocaleNames_as_ClassInfo_, allocate$LocaleNames_as);
	return class$;
}

$Class* LocaleNames_as::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun