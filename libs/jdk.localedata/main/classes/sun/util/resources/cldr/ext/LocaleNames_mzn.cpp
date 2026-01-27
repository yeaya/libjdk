#include <sun/util/resources/cldr/ext/LocaleNames_mzn.h>

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

$MethodInfo _LocaleNames_mzn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mzn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mzn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mzn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mzn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mzn_MethodInfo_
};

$Object* allocate$LocaleNames_mzn($Class* clazz) {
	return $of($alloc(LocaleNames_mzn));
}

void LocaleNames_mzn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mzn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_MD, u"مولداوی"_s);
	$var($String, metaValue_SK, u"اسلواکی"_s);
	$var($String, metaValue_ar, u"عربی"_s);
	$var($String, metaValue_bn, u"بنگالی"_s);
	$var($String, metaValue_el, u"یونانی"_s);
	$var($String, metaValue_gu, u"گجراتی"_s);
	$var($String, metaValue_he, u"عبری"_s);
	$var($String, metaValue_hy, u"ارمنی"_s);
	$var($String, metaValue_ja, u"جاپونی"_s);
	$var($String, metaValue_ka, u"گرجی"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانگوو"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نیانکوله"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لوئو"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فیلیپینو"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لوییا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"اروپای ِایسپانیولی"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تسویی"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"آبخازی"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"آسنسیون جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"آندورا"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"متحده عربی امارات"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"فلمیش"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"افغانستون"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"آفریکانس"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"آنتیگوا و باربودا"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"آنگویلا"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"آکان"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"آلبانی"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ارمنستون"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"امهری"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"آنگولا"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"جنوبی یخ\u200cبزه قطب"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"آرژانتین"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"آمریکای ِساموآ"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"آسامی"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"اتریش"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"استرالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"آروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"جنوبی کردی"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"امریکن انگلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"آلند جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"آذربایجون"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"آذری ِترکی"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"بوسنی و هرزگوین"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"باشقیری"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"باربادوس"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"بنگلادش"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بلژیک"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بلاروسی"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"بورکینا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بلغارستون"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بلغاری"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"بحرین"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"بوروندی"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بنین"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"سنت بارتلمی"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"برمودا"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"بامبارایی"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"برونئی"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بولیوی"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"تبتی"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"هلند ِکاراییبی جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"برزیل"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"برِتونی"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"باهاما"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسنیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوگا"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"بوتان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"بووت جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوتساوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بلاروس"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سِنایی"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بلیز"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"کانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"کاتالونی"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"کوک (کیلینگ) جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"مازرونی"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"کویرابورا سنی"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"کنگو کینشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چچنی"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"مرکزی آفریقای جمهوری"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"کنگو برازاویل"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"سوییس"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"عاج ِساحل"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"کوک جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"شیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"کامرون"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"چین"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"کلمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"کورسیکان"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"کلیپرتون جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"کاستاریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"چکی"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"کوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"کیپ ورد"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چوواشی"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"کوراسائو"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"کریسمس جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"قبرس"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ولزی"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"چک جمهوری"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"دانمارکی"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"اروپای ِپرتغالی"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"آلمان"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"آلمانی"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"چیگا"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"دیگو گارسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"جیبوتی"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"دانمارک"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"دومنیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"دومنیکن جمهوری"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بمبایی"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"جنوبی آمریکای ِایسپانیولی"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"دزونگخا"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بنایی"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سوتا و ملیله"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"اکوادر"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زارمایی"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"استونی"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"اوه\u200cیی"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(metaValue_MD)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"غربی صحرا"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"انگلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"اسپرانتو"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چروکیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"اریتره"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ایسپانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ایسپانیولی"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"اتیوپی"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"استونیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"اروپا اتحادیه"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسکی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"هانگول"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تاچلهیت"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"بالایی صربی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"هان"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"فارسی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ساده\u200cبَیی هان"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"سنتی هانت"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"جنوبی آذری ترکی"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فنلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فینیش"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"فیجی"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"فیجیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"فالکلند جزیره\u200cئون"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"میکرونزی"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"غربی بلوچی"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"فارو جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فارویی"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فرانسه"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فرانسوی"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"غربی فیریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"گابون"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ایریش"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"بریتانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"گرانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"گرجستون"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"فرانسه\u200cی ِگویان"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"گرنزی"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"غنا"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جبل طارق"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"گرینلند"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"گالیک"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"گامبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"گینه"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"گورانی"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"گوادلوپ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"استوایی گینه"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"نشناسی\u200cیه زوون"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"یونان"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"جنوبی جورجیا و جنوبی ساندویچ جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"گواتمالا"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"گوئام"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مانکس"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"گینه بیسائو"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"گویان"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"هوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"میونی کوردی"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"این زوون بشناسی\u200cیه نیّه"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"هندی"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"اتریش ِآلمانی"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"هنگ کنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"هارد و مک\u200cدونالد جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"هندوراس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"کرواسی"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"کرواتی"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"آقم"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"سوییس آلمانی"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"هاییتی"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"هائتیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"مجارستون"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"مجاری"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"قناری جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"اندونزی"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"اندونزیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ایرلند"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ایگبو"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ناما"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"سیچوئان یی"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ایسراییل"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"من ِجزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"هند"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"بریتانیای هند ِاوقیانوس ِمناطق"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"عراق"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ایران"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ایسلند"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ایسلندی"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ایتالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ایتالیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"انوکتیتوت"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جرسی"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"جاماییکا"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"اردن"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"جاپون"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"جنوبی سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"جاوایی"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"گوسی"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لوله سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"سوییس ِآلمانی"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ایناری سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"سکولت سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"کنیا"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"لاتین آمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"قرقیزستون"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"کامبوج"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"کیریباتی"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"کیکویو"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ماسایی"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قزاقی"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"کالائلیسوت"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"کومور"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"خمری"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"سنت کیتس و نویس"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"کانّادا"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"کانادای ِفرانسوی"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"کُره\u200cیی"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"شمالی کُره"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"جنوبی کُره"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"کشمیری"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"کوردی"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"سوییس ِفرانسوی"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"کویت"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"کورنیش"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"کیمن جزیره\u200cئون"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"قرقیزی"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"قزاقستون"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"سیریلیک"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"لائوس"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"لاتین"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لبنان"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"لوکزامبورگی"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"سنت لوسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"گاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"پایین آلمانی"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"لیختن اشتاین"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سریلانکا"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لینگالا"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"لائویی"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"لیبریا"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"لسوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"لتونی"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"لتونیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"لوکزامبورگ"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لوبا-کاتانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"لاتویا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لاتویایی"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"کاتاکانا"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"لیبی"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"وونجویی"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانگی"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"مراکش"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"موناکو"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(metaValue_MD)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"مونته\u200cنگرو"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"سنت مارتین"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ماداگاسکار"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"مالاگاسی"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"مارشال جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"مائوری"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"مقدونی"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"مالی"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"مالایالام"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"میانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"مغولستون"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"مغولی"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ماکائو (چین دله)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"شمالی ماریانا جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"مارتینیک جزیره\u200cئون"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"موریتانی"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ماراتی"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونتسرات"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"مالایی"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالت"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالتی"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"مورى تيوس"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"مالدیو"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"مالاوی"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"مکزیک"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"مالزی"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"برمه\u200cیی"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزامبیک"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"پایین صربی"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"نامبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"نروژی بوکمال"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"نیو کالیدونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"شمالی ندبله"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"نیجر"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نپالی"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"نورفولک جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نیجریه"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نیکاراگوئه"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"هلند"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"هلندی"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"نروژی نینورسک"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"نروژ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نپال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"نائورو"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"نیئو"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"رومبو"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"نیوزلند"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"قبایلی"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"کامبایی"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"مِرویی"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"عمان"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"اورومو"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"اوریا"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"موریسین"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"پاناما"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پنجابی"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"دوئالایی"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"بریتیش انگلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"پرو"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"فرانسه\u200cی پولی\u200cنزی"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"پاپوا نو گینه"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"فیلیپین"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاکستون"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"لهستون"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"لهستونی"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"سن پییر و میکلن"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"پیتکارین جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"پورتوریکو"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"فلسطین ِسرزمین"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پشتو"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"پرتغال"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پرتغالی"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"پالائو"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"پاراگوئه"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"برزیل ِپرتغالی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ماخوئا-میتو"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"قطر"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"مِتاء"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"اوقیانوسیه\u200cی ِپرت ِجائون"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"قوئچوئا"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بدویی"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ماکونده"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"جهون"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"اتیوپیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"آفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"شمالی آمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"رئونیون"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"جنوبی آمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"اوقیانوسیه"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانش"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"روندی"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومانی"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"رومانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"صربستون"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روسیه"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"روسی"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"روآندا"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"کنیاروآندایی"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"کیپ وُردی"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"استرالیای ِانگلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"عربستون"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"سانسکریت"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"سلیمون جزیره"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تاساواقی"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"غربی آفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"سیشل"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"سودان"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سندی"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"میونی آمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"سوئد"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"شمالی سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"شرقی آفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"شمالی ۀفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سنگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"سانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"سنت هلنا"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"میونی آفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"اسلوونی"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"سینهالا"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"جنوبی آفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سوالبارد و يان ماين"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(metaValue_SK)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(metaValue_SK)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"آمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سیرالئون"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"اسلوونیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سن مارینو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"سنگال"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"شونا"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"سومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"سومالیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپوچه"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"آلبانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سورینام"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"صربی"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"جنوبی سودان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"سائوتومه و پرینسیپ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"سوندانسی"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"السالوادور"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"سوئدی"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سواحیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سنت مارتن"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"سوریه"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"سوازیلند"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"تریستان دا جونها"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"تامیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"آسو"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"شمالی امریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"تورکس و کایکوس جزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"میونی آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"چاد"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"تلوگویی"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"غربی آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"فرانسه\u200cی جنوبی مناطق"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"توگو"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجیکی"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"تایلند"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"تایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"تیگرینیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"تاجیکستون"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"کانادای ِانگلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"کاراییب"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"توکلائو"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ترکمونی"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"تیمور شرقی"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ترکمونستون"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تونس"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"تونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"تونگانی"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا-فونی"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ترکیه"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ترکی"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ترینیداد و توباگو"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتاری"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"تووالو"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تایوان"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تانزانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"کوئاسیو"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"اوکراین"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"شرقی آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"شرقی اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"شمالی اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"کنگو سواحیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"جنوبی آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"غربی اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"آسیای ِجنوب\u200cشرقی\u200cوَر"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"اوگاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ئوغوری"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"جنوبی اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"اوکراینی"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"آمریکای پَرتِ\u200cپِلا جزیره\u200cئون"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"اردو"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"متحده ایالات"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"هاواییایی"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"اروگوئه"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ازبکستون"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ازبکی"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"میونی اطلس تامزیقی"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"واتیکان"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"پایین ساکسونی"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"سنت وینسنت و گرنادین"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ونزوئلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"بریتانیای ویرجین"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"آمریکای ویرجین"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ویتنامی"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"کویرا چیینی"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ویتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"کئیچه\u200cئی"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"وانواتو"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"روآیی"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"گاگائوزی"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"اوسترالزی"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ملانزی"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"والیس و فوتونا"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"میکرونزی منقطه"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نگومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لاکوتا"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"وولفی"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"مراکش ِاستاندارد ِتامازیقتی"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"مدرن استاندارد عربی"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساموآ"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"پولی\u200cنزی"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"خوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"کوزوو"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"والرپیری"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"موهاک"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"یمن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"نئکو"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"یوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"مکزیک ِایسپانیولی"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مایوت"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"وایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"جنوبی افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"کالنجین"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"دیوانانگری"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"هیراگانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زامبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"بوپوموفو"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"زولو"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زیمبابوه"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"نامَیِّن منطقه"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"امبو"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ماچامه"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ساده چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"کومی-پرمیاک"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"کونکانی"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"نوئر"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تایتا"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"شمالی لُری"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"سنتی چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"موندانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سامبورو"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گورموخی"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شامبالا"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"بافیایی"_s)
		})
	}));
	return data;
}

LocaleNames_mzn::LocaleNames_mzn() {
}

$Class* LocaleNames_mzn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mzn, name, initialize, &_LocaleNames_mzn_ClassInfo_, allocate$LocaleNames_mzn);
	return class$;
}

$Class* LocaleNames_mzn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun