#include <sun/util/resources/cldr/ext/LocaleNames_sd.h>

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

$MethodInfo _LocaleNames_sd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sd, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sd, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sd",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sd_MethodInfo_
};

$Object* allocate$LocaleNames_sd($Class* clazz) {
	return $of($alloc(LocaleNames_sd));
}

void LocaleNames_sd::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sd::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CA, u"ڪينيڊا"_s);
	$var($String, metaValue_FJ, u"فجي"_s);
	$var($String, metaValue_HU, u"هنگري"_s);
	$var($String, metaValue_LU, u"لگزمبرگ"_s);
	$var($String, metaValue_NU, u"نووي"_s);
	$var($String, metaValue_TV, u"توالو"_s);
	$var($String, metaValue_ar, u"عربي"_s);
	$var($String, metaValue_bn, u"بنگلا"_s);
	$var($String, metaValue_el, u"يوناني"_s);
	$var($String, metaValue_gu, u"گجراتي"_s);
	$var($String, metaValue_he, u"عبراني"_s);
	$var($String, metaValue_ja, u"جاپاني"_s);
	$var($String, metaValue_km, u"خمر"_s);
	$var($String, metaValue_kn, u"ڪناڊا"_s);
	$var($String, metaValue_ko, u"ڪوريائي"_s);
	$var($String, metaValue_la, u"لاطيني"_s);
	$var($String, metaValue_lo, u"لائو"_s);
	$var($String, metaValue_mn, u"منگولي"_s);
	$var($String, metaValue_or, u"اوڊيا"_s);
	$var($String, metaValue_si, u"سنهالا"_s);
	$var($String, metaValue_ta, u"تامل"_s);
	$var($String, metaValue_te, u"تلگو"_s);
	$var($String, metaValue_th, u"ٿائي"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ڪلونئين"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"مرانڊيز"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"نشانيون"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ايموجي"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"چمڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"تمني"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تيسو"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ريپنوئي"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"طلوع ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ريرو ٽينگو"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"تيتم"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"اندورا"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"متحده عرب امارات"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"فلیمش"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"افغانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"انٽيگا ۽ باربوڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ايٿوپيائي ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"انگويلا"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"البانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ارمینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"انگولا"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"انٽارڪٽيڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ارجنٽينا"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"آمريڪي ساموا"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"آسٽريا"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"آسٽريليا"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"عروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"آمريڪي انگريزي"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"الند ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"آذربائيجان"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"بوسنيا ۽ ھرزيگوينا"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"باربڊوس"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"سبوانو"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"بنگلاديش"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ڪومڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بيلجيم"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"برڪينا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بلغاريا"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"بحرين"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"برونڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بينن"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"سینٽ برٿلیمی"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"برمودا"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ايريزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"برونائي"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بوليويا"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ڪيريبين نيدرلينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"برازيل"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"باهاماس"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوگا"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ڀوٽان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"بووٽ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوٽسوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بیلارس"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بيليز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"فارسي ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"عبراني انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ڪوڪوس ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"مزيندراني"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ڪانگو -ڪنشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"وچ آفريقي جمهوريه"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ڪانگو - برازاویل"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"سوئزرلينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ڪوٽ ڊي وار"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ڪوڪ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"چلي"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ڪيمرون"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"چين"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ڪولمبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ڪلپرٽن ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ڪوسٽا ريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ڪيوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ڪيپ وردي"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ڪيوراسائو"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ڪرسمس ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"سائپرس"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"چيڪيا"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ايڪاجڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"جرمني"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"اچائينيز"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"چگا"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ڊئيگو گارسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ديوناگري عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ڊجبيوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ڊينمارڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"بريلي"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ڊومينيڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ارمينيائي ننڍا انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ڊومينيڪن جمهوريه"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"گورنٽلو"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"زوني"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"تگري"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"پانگا سينان"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سیوٽا ۽ میلیلا"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"پيم پينگا"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ايڪواڊور"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"پاپي امينٽو"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ادنگمي"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ايسٽونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"اولهه صحارا"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"پلون"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"چڪيز"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ماري"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"چوڪ تو"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چروڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ايريٽيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"اسپين"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ايٿوپيا"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"يورپين يونين"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"جارجيائي ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"يورو زون"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"چايان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"گجراتي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"اديگهي"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فن لينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"فاڪ لينڊ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"مائڪرونيشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"فارو ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فرانس"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"گبون"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"برطانيہ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"نائيجرين پجن"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"گرينڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"جارجيا"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"فرانسيسي گيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"گورنسي"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"گهانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جبرالٽر"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"گرين لينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"گيمبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"گني"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"گواڊیلوپ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ايڪوٽوريل گائينا"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"يونان"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ڏکڻ جارجيا ۽ ڏکڻ سينڊوچ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"گوئٽي مالا"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"گوام"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"گني بسائو"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ڪلون"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"گيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"مرڪزي ڪردش"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ڪوئي ٻولي جو مواد ڪونهي"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"آسٽريائي جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"هانگ ڪانگ SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"هرڊ ۽ مڪڊونلڊ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"هنڊورس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ڪروئيشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"اگهيم"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"سوئس جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"هيٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ڪينري ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"انڊونيشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"آئرلينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"نيپولٽن"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ناما"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"زازا"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"اسرائيل"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"انسانن جو ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ڀارت"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"برطانوي هندي سمنڊ خطو"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"عراق"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ايران"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"آئس لينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"اٽلي"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"رياضي جون نشانيون"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ٿائي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"ڪمپيوٽر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"بنگلا عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جرسي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"اسلامي ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"جميڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"اردن"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"جاپان"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"آئينو"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"گشي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"ڪناڊا عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"سوئس هائي جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ٻڌ ڌرم جو ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ڪينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"لاطيني آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ڪرغستان"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ڪمبوڊيا"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ڪرباتي"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ڪوموروس"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"سينٽ ڪٽس و نيوس"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"ڪينيڊيائي فرانسيسي"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"اتر ڪوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ڏکڻ ڪوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"سوئس فرانسيسي"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ڪويت"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"تاڪ پسن"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ڪي مين ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"قازقستان"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"سيريلي"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"لائوس"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لبنان"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"سينٽ لوسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"گوچن"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"لو جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"لچي ٽينسٽين"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سري لنڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"لائبیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ليسوٿو"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"لٿونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"لاتويا"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"ڪٽاڪانا"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"لبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"لڊينو"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ونجو"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانگي"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ٿانا"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"مراڪش"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"موناڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"مالدووا"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"مونٽي نيگرو"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"سينٽ مارٽن"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"مدگاسڪر"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"مارشل ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"اليوٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"اتر مقدونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"مالي"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ميانمار (برما)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"منگوليا"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"نيواري"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"مڪائو SAR چين"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"اتريان ماريانا ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"مارتينڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"موريتانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونٽسراٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالٽا"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"موريشس"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ڏکڻ التائي"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"مالديپ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"مالاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ميڪسيڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"جاپاني ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ملائيشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزمبیق"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"نيميبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"سب-سهارا آفريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"عبراني ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"نیو ڪالیڊونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"نائيجر"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"نورفوڪ ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نائيجيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"تاروڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نڪراگوا"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"نيدرلينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ناروي"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نيپال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"نائورو"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"رومبو"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"نيو زيلينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"عمان"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"انجيڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"سيسلوا ڪريئول فرانسي"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"قديم فارسي"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"پناما"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"برطانوي انگريزي"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"پيرو"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"فرانسيسي پولينيشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"پاپوا نیو گني"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"فلپائن"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاڪستان"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"پولينڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"اوانڊو"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"سینٽ پیئر و میڪوئیلون"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"پٽڪئرن ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"پيوئرٽو ريڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"فلسطيني علائقا"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"پرتگال"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"پلائو"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"نياس"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"يوناني ننڍا انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"پيراگوءِ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"تمبوڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"قطر"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"بيروني سامونڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ليزگهين"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"دنيا"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"آفريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"اتر آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ري يونين"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ڏکڻ آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"لوجبين"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"اوشنيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"سربيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روس"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"روانڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"سعودي عرب"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"سولومون ٻيٽَ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تساوڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"اولهه آفريقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"شي شلز"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"سوڊان"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"وچ آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"سوئيڊن"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"اوڀر آفريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"اتر آفريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سنگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"سينٽ ھيلينا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"سخت لائن ٽوڙ انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"وچ آفريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"سلوینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ڏاکڻي آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سوالبارڊ ۽ جان ماین"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"سلوواڪيا"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سيرا ليون"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سین مرینو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"سينيگال"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"سوماليا"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپوچي"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"اراپائو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"روايتي تامل انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سورينام"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ڏکڻ سوڊان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"سائو ٽوم ۽ پرنسپیي"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ال سلواڊور"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سنٽ مارٽن"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"شام"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ايسواٽني"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ٽرسٽن دا ڪوها"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"اسو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"آمريڪا جو ماپڻ جو نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"اترين آمريڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ترڪ ۽ ڪيڪوس ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"يانگ بين"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"چاڊ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"فرانسيسي ڏاکڻي علائقا"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ٽوگو"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ٿائيليند"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"تاجڪستان"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ڪيريبين"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ٽوڪلائو"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"تيمور ليستي"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ييمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ترڪمانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تيونيسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ٽونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ترڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ٽريني ڊيڊ ۽ ٽوباگو ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تائیوان"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"اسٽورين"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تنزانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ڪويسيو"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"اڻڄاتل لکت"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"يوڪرين"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ارومينين"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"اوڀر ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"تووينيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"ڪونگو سواحيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ڏکڻ ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ڏکڻ اوڀر ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"يوگنڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ڏکڻ يورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"آمريڪي خارجي ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"گڏيل قومون"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"آمريڪا جون گڏيل رياستون"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"هوائي"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"يوروگوءِ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"پرشن"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ازبڪستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"وچ اٽلس تمازائيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"نغيمبون"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ويٽڪين سٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"سینٽ ونسنت ۽ گریناڊینز"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"وينزويلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"برطانوي ورجن ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"آمريڪي ورجن ٻيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ويتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"وينيٽيو"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"نوگائي"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"روا"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"آسٽریلیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"میلانیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"والس ۽ فتونا"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"مائڪرونيشائي خطو"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نغومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لڪوٽا"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"والسر"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساموا"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"وولايٽا"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"سوڊو-لهجا"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"واري"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"سوڊو-بي ڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"اواڌي"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"پولینیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ڪوسووو"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"اڻ لکيل"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"يمن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"نڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"معياري ترتيب ڇانٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مياتي"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ڏکڻ آفريقا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"لوز لائن ٽوڙ انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ديوناگري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"جيارجيائي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"هراگنا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زيمبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زمبابوي"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"اڻڄاتل خطو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ميٽرڪ نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"اتر سوٿو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"تيلگو عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"لوزي"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ميڪم"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"آسان چيني مالي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"هلي گيانان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"وڌايل عربي-هندي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"نيور"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ڊڪوٽا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"پوري-ويڪر انگن"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ڊارگوا"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تائيتا"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"اتر لوري"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ادمورتيا"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"سنداوي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"رومي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ساخا"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سيمبورو"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"سنتالي"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"نغمبي"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گرمکي"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"لوبا-لولوا"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانگوو"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نايانڪول"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"لنڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لو"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فلپائني"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"مونگ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ميزو"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"بالينيس"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لوهيا"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"باسا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"يورپي اسپيني"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"اسڪاٽس"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"سسلي"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"افار"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ابقازیان"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"آفريڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"اڪان"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"امهاري"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ارگني"_s)
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
			$of(u"جاپاني لکت"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"آسامي"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"اويرس"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ایمارا"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"آزربائيجاني"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بيلاروسي"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بلغاريائي"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"بسلاما"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"بمبارا"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"تبيتائي"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"داگرب"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"بريٽن"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسنيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ميانمر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"لائو عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سينا"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ڪيٽالان"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ڪيورابورو سيني"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چیچن"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"چمورو"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"ڪارسيڪائي"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"چيڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"چرچ سلاوی"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چو واش"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ويلش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ايٿوپيائي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ڊينش"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"يورپي پرتگالي"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"معياري سڪو فارميٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بيمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"دويهي"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"لاطيني آمريڪي اسپينش"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"زونخا"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بينا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"چيني ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زارما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"يوناني انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ايو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"عام لائن ٽوڙ انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"مالديوي"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"انگريزي"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ايسپرانٽو"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"هسپانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ايستونائي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"بوپوموفو سان هين"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسق"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"هنگول"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تيچل هاتي"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"اپر سربيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"هين"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"شان"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"فارسي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"سادي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"مغربي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"روايتي"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"فلاهه"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فنش"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"فون"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ڪينٽونيز"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فيروايس"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"اومبنڊو"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فرانسيسي"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"مغربي فريشن"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"آئرش"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"اسڪاٽش گيلڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"گليشئين"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"گواراني"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ڀوجپوري"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"اڻڄاتل ٻولي"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مينڪس"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"هوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"هندي"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"هوپا"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"بني"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ڪروشيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"هيٽي ڪرولي"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ارماني"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"هريرو"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"انٽرلنگئا"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"جامو"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"انڊونيشي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"تبتي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"اگبو"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"سچوان يي"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ادو"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"آئيس لينڊڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"اطالوي"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"انو ڪتوت"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"ملايالم"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"قديم ڏاکڻي عربي"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ڏکڻ سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"جاونيز"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"مدورائي"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لولي سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"مگاهي"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ميٿلي"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"اناري سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"جارجيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"سڪسڪا"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"مڪاسر"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"اسڪاٽ سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"اڪويو"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"مسائي"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ڪنياما"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قازق"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ڪالا ليسٽ"_s)
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
			$of(u"ڪنوري"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ڪشميري"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ڪردي"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"ڪومي"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"ڪورنش"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ڪرغيز"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"سونينڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of(u"ملتاني"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"مليالم عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"گاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"لمبرگش"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"تبيتن"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لنگالا"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"فرائي لئين"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"امپيريل ماپڻ جو نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ليٿونيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لوبا-ڪتانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لاتوين"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ملاگاسي"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"مارشليز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ڊفالٽ يوني ڪوڊ ترتيب ڇانٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"مائوري"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ميسي ڊونيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"مليالم"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"مراٺي"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ملي"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"برمي"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"عرماني"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"موڪشا"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"لوئر سوربين"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"نائو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"عام مقصد جي ڳولا"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"نارويائي بوڪمال"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"اتر دبيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نيپالي"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ڊونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ڊچ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"نارويائي نيوناسڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ڏکڻ دبيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"نواجو"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"نيانجا"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ڪچن"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"ڪبائل"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"آڪسيٽن"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"پوڪيپسي"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"ڪئمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"مينڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ميرو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ارمينيائي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"اورومو"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"اوسيٽڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ڪبارڊيئن"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"موریسیین"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"سرانن تانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پنجابي"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ڊيولا"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"پولش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"دانگي ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پشتو"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پورٽگليز"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ترتيب ڇانٽي"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"برازيلي پرتگالي"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"تياپ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"مخووا ميتو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"سڪي جو فارميٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ميتا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 ڪلاڪ جو سسٽم (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 ڪلاڪ جو سسٽم (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"سهو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ميانمار عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ڪيچوا"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بودو"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"مڪوندي"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ايٿوپيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 ڪلاڪ جو سسٽم (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 ڪلاڪ جو سسٽم (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانش"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"رونڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"سڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"روماني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"اوڊيا عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"چيني اعشاري انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"روسي"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ڪنيار وانڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"ڪيبيو ويرڊيانو"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ميڪ مڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"سڪوما"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"آسٽريليائي انگريزي"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"سنسڪرت"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"سارڊيني"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سنڌي"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"اتر سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"مناڪابوا"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"سانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"سلواڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"سلوويني"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"سموئا"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"شونا"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"سومالي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"عربي-هندي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"الباني"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"سربيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"سواتي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"اڪائونٽنگ سڪو فارميٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ڏکڻ سوٿي"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"جاوانيز"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"سوڊاني"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"سويڊش"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سواحيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"روايتي چيني مالي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ابيبيو"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ايبن"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"وچ ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"اولهه ايشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"تگرينيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"بگنيز"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"ڪورو"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ڪينيڊيائي انگريزي"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ترڪمين"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"تسوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"تونگن"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا فوني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"جاپاني انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ترڪش"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"سونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"ڪمورين"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتار"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"تاهيتي"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"يورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"اوڀر يورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"اترين يورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"دزاگا"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"اولهه يورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"يوغور"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"قديم اطالوي"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ڪامن"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"يوڪراني"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"اردو"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ڪيلمڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ازبڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"خاسي"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"وينڊا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"منگوو ڪئلينڊر"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ويتنامي"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"ڪيورا چني"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ڪلاڪ سائيڪل"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"والپڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ڪچي"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"گا"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ولون"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"شامي"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"وولوف"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"معياري مراڪشي تامازائيٽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"جديد معياري عربي"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ماني پوري"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"آسان چيني انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"روايتي چيني انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"زھوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"رومي ننڍا انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بلن"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"موهاڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ڪڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"يدش"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"موسي"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"يوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ميڪسيڪين اسپيني"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"يا"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"ڪيلين جن"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"چيني"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"بوپوموفو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"لائن ٽوڙڻ انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"زولو"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"جيورجيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"ڪمبونڊو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"جاپاني مالي انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"جيز"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ايمبيو"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"آسان چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"ڪونڪي"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"روايتي چيني"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ڪپيل"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"خمر عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"الوڪو"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"من دانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"گرمکي عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"هڪ کان وڌيڪ ٻوليون"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"ماپڻ جو نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ڪريڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"گلبرٽيز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"تامل عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ڪراچي بالڪر"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"انگش"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"دري"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"ڪريلئين"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ايفڪ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"انگ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"ڪورخ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شمبالا"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"بافيا"_s)
		})
	}));
	return data;
}

LocaleNames_sd::LocaleNames_sd() {
}

$Class* LocaleNames_sd::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sd, name, initialize, &_LocaleNames_sd_ClassInfo_, allocate$LocaleNames_sd);
	return class$;
}

$Class* LocaleNames_sd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun