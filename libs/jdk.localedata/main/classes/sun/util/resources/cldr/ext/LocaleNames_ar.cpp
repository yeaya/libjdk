#include <sun/util/resources/cldr/ext/LocaleNames_ar.h>

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

$MethodInfo _LocaleNames_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ar",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_MethodInfo_
};

$Object* allocate$LocaleNames_ar($Class* clazz) {
	return $of($alloc(LocaleNames_ar));
}

void LocaleNames_ar::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"العربية"_s);
	$var($String, metaValue_bn, u"البنغالية"_s);
	$var($String, metaValue_bo, u"التبتية"_s);
	$var($String, metaValue_el, u"اليونانية"_s);
	$var($String, metaValue_he, u"العبرية"_s);
	$var($String, metaValue_ja, u"اليابانية"_s);
	$var($String, metaValue_jv, u"الجاوية"_s);
	$var($String, metaValue_ka, u"الجورجية"_s);
	$var($String, metaValue_km, u"الخميرية"_s);
	$var($String, metaValue_kn, u"الكانادا"_s);
	$var($String, metaValue_ko, u"الكورية"_s);
	$var($String, metaValue_la, u"اللاتينية"_s);
	$var($String, metaValue_pi, u"البالية"_s);
	$var($String, metaValue_su, u"السوندانية"_s);
	$var($String, metaValue_ta, u"التاميلية"_s);
	$var($String, metaValue_th, u"التايلاندية"_s);
	$var($String, metaValue_chr, u"الشيروكي"_s);
	$var($String, metaValue_cop, u"القبطية"_s);
	$var($String, metaValue_got, u"القوطية"_s);
	$var($String, metaValue_nqo, u"أنكو"_s);
	$var($String, metaValue_peo, u"الفارسية القديمة"_s);
	$var($String, metaValue_phn, u"الفينيقية"_s);
	$var($String, metaValue_syr, u"السريانية"_s);
	$var($String, metaValue_vai, u"الفاي"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"لغة الكولونيان"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"الأوجهام"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"الميرانديز"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"رموز"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"الأتسام"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"الماروارية"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"التاجبانوا"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"إيموجي"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"تشاكما"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"المصرية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"الراجاسثانية"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"الفاجسبا"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"التيمن"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تيسو"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"الراباني"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"التيرينو"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"جزيرة أسينشيون"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"الراروتونجاني"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"التيتم"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"أندورا"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"الإمارات العربية المتحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"الفلمنكية"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"أفغانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"أنتيغوا وبربودا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"التقويم الإثيوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"أنغويلا"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"المنطقة الزمنية"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ألبانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"أرمينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"التينجوار"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"أنغولا"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"أنتاركتيكا"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"الأرجنتين"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ساموا الأمريكية"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"النمسا"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"أستراليا"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"أروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"الإنجليزية الأمريكية"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"جزر آلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"أذربيجان"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"أرمنية شرقية"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"البوسنة والهرسك"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"بربادوس"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"السيبيوانية"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"بنغلاديش"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"القموقية"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بلجيكا"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"الألمانية العليا الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"بوركينا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بلغاريا"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"البحرين"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"بوروندي"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بنين"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"سان بارتليمي"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"برمودا"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"الكتيناي"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"الأرزية"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"بروناي"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بوليفيا"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"هولندا الكاريبية"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"البرازيل"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"جزر البهاما"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"السوغا"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"بوتان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"جزيرة بوفيه"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوتسوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بيلاروس"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بليز"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"الكلام المرئي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"التقويم الفارسي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"الأرقام العبرية"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"كندا"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"جزر كوكوس (كيلينغ)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"المازندرانية"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"الكونغو - كينشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"جمهورية أفريقيا الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"الكونغو - برازافيل"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"سويسرا"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ساحل العاج"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"جزر كوك"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"تشيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"الكاميرون"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"الصين"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"كولومبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"جزيرة كليبيرتون"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"كوستاريكا"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"كوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"الرأس الأخضر"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"كوراساو"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"جزيرة كريسماس"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"قبرص"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"التشيك"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"الإكاجك"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ألمانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"الألمانية العليا القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"الأتشينيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"تشيغا"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"دييغو غارسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"الأرقام الديفانغارية"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"جيبوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"الدانمرك"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"الأكولية"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"الجندي"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"البرايل"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"الهندوسية"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"دومينيكا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"الأرقام الأرمينية الصغيرة"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"جمهورية الدومينيكان"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"الجورونتالو"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"ميتي ماييك"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"الزونية"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"التيغرية"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"البانجاسينان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"نصف العرض"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"البهلوية"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سيوتا وميليلا"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"التشيبشا"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"البامبانجا"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"الإكوادور"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"البابيامينتو"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"الأدانجمية"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"إستونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"التيف"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"الصحراء الغربية"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"التشاجاتاي"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"البالوان"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"التشكيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"الشينوك جارجون"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"الماري"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"الشيباوايان"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"الشوكتو"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"إريتريا"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"إسبانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"إثيوبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"الاتحاد الأوروبي"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"الإمايت"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"التقويم الميلادي"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"منطقة اليورو"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"الشايان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"الأرقام الغوجاراتية"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"اندس - هارابان"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"الأديغة"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فنلندا"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"فيجي"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"جزر فوكلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ميكرونيزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"متغيرات اللغة"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"جزر فارو"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فرنسا"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"التوكيلاو"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"الجريبو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"التقويم القومي الهندي"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"اليونانية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"الغابون"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"الفوتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"المملكة المتحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"البدجنية النيجيرية"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"غرينادا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"جورجيا"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"غويانا الفرنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"غيرنزي"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"غانا"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"التاي لي"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جبل طارق"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"الأفريهيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"غرينلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"الإنجليزية الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"غامبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"غينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"غوادلوب"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"غينيا الاستوائية"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"اليونان"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"جورجيا الجنوبية وجزر ساندويتش الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"غواتيمالا"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"غوام"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"غينيا بيساو"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"التلينغيتية"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"الكلينجون"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"التاى لى الجديد"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"غيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"السورانية الكردية"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"بدون محتوى لغوي"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"الألمانية النمساوية"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"هونغ كونغ الصينية (منطقة إدارية خاصة)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"جزيرة هيرد وجزر ماكدونالد"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"هندوراس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"كرواتيا"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"الأغم"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"الألمانية السويسرية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"التقويم الإسلامي (أم القرى)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"هايتي"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"هنغاريا"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"التاماشيك"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"جزر الكناري"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"مين-نان الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"إندونيسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"أيرلندا"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"النابولية"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"لغة الناما"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"زازا"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"إسرائيل"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"جزيرة مان"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"الهند"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"الإقليم البريطاني في المحيط الهندي"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"العراق"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"إيران"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"آيسلندا"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"إيطاليا"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"تدوين رياضي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"الأرقام التايلاندية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"حاسوب"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"الأرقام البنغالية"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جيرسي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"التقويم الهجري"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"جامايكا"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"الأردن"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"اليابان"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"الآينوية"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"الغيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"تونجا - نياسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"أرقام الكانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"الكياه لى"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"الألمانية العليا السويسرية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ترتيب الفرز الصوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"التقويم البوذي"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"كينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"أمريكا اللاتينية"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"قيرغيزستان"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"كمبوديا"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"كيريباتي"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"جزر القمر"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"سانت كيتس ونيفيس"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"الموروث"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"الفرنسية الكندية"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"كوريا الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"كوريا الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"الصوتيات الجماء"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"الفرنسية السويسرية"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"الكويت"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"التوك بيسين"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"جزر كايمان"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"كازاخستان"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"السيريلية"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"لاوس"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لبنان"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"سانت لوسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"السيريلية السلافية الكنسية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"غوتشن"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"الألمانية السفلى"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ليختنشتاين"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سريلانكا"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"الأكادية"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ليبيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ليسوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ليتوانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"لوكسمبورغ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"لاتفيا"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"الكتكانا"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ليبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"اللادينو"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"الفونجو"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"اللاهندا"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانجي"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"الثعنة"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"المغرب"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"موناكو"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"مولدوفا"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"الجبل الأسود"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"سان مارتن"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"اللامبا"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"مدغشقر"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"جزر مارشال"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"الأليوتية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"أرقام فاي"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"مقدونيا الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"مالي"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ميانمار (بورما)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"منغوليا"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"النوارية"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"منطقة ماكاو الإدارية الخاصة"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"جزر ماريانا الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"جزر المارتينيك"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"موريتانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونتسرات"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالطا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"يو إن جي إي جي إن"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"موريشيوس"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"الألطائية الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"جزر المالديف"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ملاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"المكسيك"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"التقويم الياباني"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ماليزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزمبيق"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ناميبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"أفريقيا جنوب الصحراء الكبرى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"التقويم العبري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ترتيب فرز القاموس"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"كاليدونيا الجديدة"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"المندرين باللاتينية - ويد–جيلز"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"التهجئة المراجعة الموحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"النيجر"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"جزيرة نورفولك"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نيجيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"لغة التاروكو"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نيكاراغوا"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"الباهوه همونج"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"هولندا"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"النرويج"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نيبال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ناورو"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"نيوي"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"الرومبو"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"التسيمشيان"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"نيوزيلندا"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"الغجرية"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"الميرويتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"لغة تتار القرم"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"الإنجليزية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"عُمان"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"الأنجيكا"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"الفرنسية الكريولية السيشيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"بنما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"التقويم الإسلامي المدني"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"الكاشبايان"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"الإنجليزية البريطانية"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"بيرو"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"بولينيزيا الفرنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"بابوا غينيا الجديدة"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"الفلبين"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"باكستان"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"بولندا"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"الإيوندو"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"سان بيير ومكويلون"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"جزر بيتكيرن"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"بورتوريكو"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_pi)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"الأراضي الفلسطينية"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"البرتغال"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"بالاو"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"النياس"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"الأرقام اليونانية الصغيرة"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"باراغواي"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"التامبوكا"_s)
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
			$of("%%SCOTLAND"_s),
			$of(u"الإنجليزية الأسكتلندنية الرسمية"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"النيوي"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"أوقيانوسيا النائية"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"الليزجية"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"التوفالو"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"العالم"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"أمريكا الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"روينيون"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"أمريكا الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"اللوجبان"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"أوقيانوسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"صربيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"رواندا"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"الأجاريتيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"الخاروشتى"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"المملكة العربية السعودية"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"البوهنبيايان"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"المانداينية"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"جزر سليمان"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تاساواق"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"غرب أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"سيشل"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"السودان"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"أمريكا الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"السويد"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"شرق أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"الآرامية"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"شمال أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سنغافورة"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"سانت هيلينا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"نمط فصل السطور: متقارب"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"وسط أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"سلوفينيا"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"أفريقيا الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سفالبارد وجان ماين"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"الأمريكتان"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"سلوفاكيا"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سيراليون"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سان مارينو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"السنغال"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"الصومال"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"المابودونغونية"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"الأراباهو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"الأرقام التاميلية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سورينام"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"جنوب السودان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ساو تومي وبرينسيبي"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"السلفادور"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"اللهجة النجدية"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سانت مارتن"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"سوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"الياو"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"إسواتيني"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"الأراواكية"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"اليابيز"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"تريستان دا كونا"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"الآسو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"نظام القياس الأمريكي"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"شمال أمريكا"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"جزر توركس وكايكوس"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"يانجبن"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"تشاد"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"زوجيي"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"الأقاليم الجنوبية الفرنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"توغو"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"تايلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"طاجيكستان"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"الكاريبي"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"توكيلو"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"تيمور - ليشتي"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"يمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"بحث باستخدام حرف الهانغول الساكن الأول"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"تركمانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تونس"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"تونغا"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"تركيا"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ترينيداد وتوباغو"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"توفالو"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تايوان"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"الأسترية"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"الأورخون"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تنزانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"كواسيو"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"نظام كتابة غير معروف"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"أوكرانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"الأرومانيان"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"شرق آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"التوفية"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"الكونغو السواحلية"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"جنوب آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"الهيدا"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"جنوب شرق آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"أوغندا"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"الهاكا الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"الترتيب الصيني بنيين المبسط"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"جنوب أوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"السينهالا"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"جزر الولايات المتحدة النائية"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"الأمم المتحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"الولايات المتحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"لغة هاواي"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"أكاديمي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ترتيب فرز الصينية المبسطة (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"أورغواي"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"البروسياوية"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"أوزبكستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"الأمازيغية وسط الأطلس"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"الترتيب الصيني بنيين التقليدي"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"لغة النجيمبون"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"الفاتيكان"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"البروفانسية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"سانت فنسنت وجزر غرينادين"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"فنزويلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"جزر فيرجن البريطانية"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"جزر فيرجن التابعة للولايات المتحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"فيتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"فانواتو"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"النوجاي"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"الروا"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"النورس القديم"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"أسترالاسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"أرمنية غربية"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ميلانيزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"جزر والس وفوتونا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ترتيب تقليدي"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"الجزر الميكرونيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نغومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لاكوتا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"الأرقام المالية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ترتيب الفرز السابق: للتوافق"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"الوالسر"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساموا"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"الولاياتا"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"الواشو"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"لكنات تجريبية غير أصلية"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"الواراي"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"لكنات تجريبية ثنائية الاتجاه"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"الأوادية"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"بولينيزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"كوسوفو"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"التاغجراتية"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"غير مكتوب"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"أول تشيكي"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"وارلبيري"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"الباتاك"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"رموز بليس"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"اليمن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ترتيب الفرز القياسي"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"الفانج"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"الفانتي"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مايوت"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"جنوب أفريقيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"نمط فصل السطور: متباعد"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"الديفاناجاري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"الأرقام الجورجية"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"الهيراجانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زامبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"بينيين باللاتينية"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زيمبابوي"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"منطقة غير معروفة"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"الروني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"النظام المتري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"تقويم ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"منغولى"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"السوتو الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"الأرقام التيلوغوية"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"الكريولية اللويزيانية"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"اللوزي"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"الماتشامية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"الأرقام المالية الصينية المبسطة"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"الهيليجينون"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"الأرقام العربية الهندية الممتدة"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"النوير"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"الداكوتا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"أرقام كاملة العرض"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"الحثية"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"الدارجوا"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تيتا"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"المايا الهيروغليفية"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"اللرية الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"النوارية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"الأدمرت"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"التقويم الإسلامي (السعودية - الرؤية)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"الليمبو"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"السانداوي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"الأرقام الرومانية"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"الساخيّة"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"الآرامية السامرية"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سامبورو"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"الساساك"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"السانتالية"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"التيفيناغ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"الفارسية اليهودية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"رقمي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"الأرقام الأصلية"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"نامبي"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"الجرمخي"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"اللبا-لؤلؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"عرض كامل"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانغو"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"اللوسينو"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"النيانكول"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"النيامويزي"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"اللوندا"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"النيورو"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"اللو"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"الفلبينية"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"الهمونجية"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"الديلوير"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"الميزو"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"البلوشية"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"السلافية"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"البالينية"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"اليجاريتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لغة اللويا"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"الباسا"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"بامن"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"العربية اليهودية"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"الإسبانية الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"النزيما"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"الأسكتلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"الصقلية"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"الأفارية"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"الأبخازية"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"نستعليق"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"الأفستية"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"الأفريقانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"الأكانية"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"لغة الغومالا"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"الأمهرية"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"الأراغونية"_s)
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
			$of(u"أبجدية مقطعية يابانية"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"الأسامية"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"الخطية أ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"الأوارية"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"الخطية ب"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"الكردية الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"الأيمارا"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"الأذربيجانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"الباشكيرية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ترتيب تصنيف الجذر والضغطات"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"البيلاروسية"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"البلغارية"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"البيسلامية"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"البامبارا"_s)
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
			$of(u"الدوجريب"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"البريتونية"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"البوسنية"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"السنيكا"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"الميانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"الأرقام اللاوية"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سينا"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"السيلكب"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"الكتالانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"كويرابورو سيني"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"الشيشانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"التشامورو"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"تهجئة تمت مراجعتها"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"الكورسيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"الأوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"الكرى"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"التشيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"سلافية كنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"التشوفاشي"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"الويلزية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"الأرقام الإثيوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"اليي"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"الدانمركية"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"البرتغالية الأوروبية"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"الألمانية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"تنسيق العملة القياسي"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"البيجا"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"الدنكا"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"البجينيز"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"البيمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"الأيرلندية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"الأرقام المغولية"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"المالديفية"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"الإسبانية أمريكا اللاتينية"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"الزونخاية"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بينا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"التقويم الصيني"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"الزارمية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"الأرقام اليونانية"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"الإيوي"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"لغة البافوت"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"نمط فصل السطور: عادي"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"المولدوفية"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"الإنجليزية"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"الإسبرانتو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ترتيب فرز الصينية التقليدية (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"الإسبانية"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"الإستونية"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"هانب"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"الباسكية"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"البهيدية"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"الهانغول"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تشلحيت"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"الصوربية العليا"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"الهان"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"الشان"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"الهانونو"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"الفارسية"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"المبسطة"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"الأرقام الغربية"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"الفولانية"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"العربية التشادية"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"شيانغ الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"الفنلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"الفيجية"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"الفون"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"البلوشية الغربية"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"الكَنْتُونية"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"الفاروية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"بي جي إن"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"الأمبندو"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"الفرنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"السيدامو"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"الفريزيان"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"الأيرلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"الغيلية الأسكتلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"الجاليكية"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"الغوارانية"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"البهوجبورية"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"لغة غير معروفة"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"تقويم أميتي أليم الإثيوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"الغوجاراتية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"التقويم الإسلامي (الحسابات الفلكية)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"المنكية"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"الهوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"الهندية"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"الهبا"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"البيكولية"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"البينية"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"الهيري موتو"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"الكرواتية"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"الكريولية الهايتية"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"الهنغارية"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"الأرمنية"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"الهيريرو"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"الفرنسية الكاجونية"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"اللّغة الوسيطة"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"جامو"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"الإندونيسية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"الأرقام التبتية"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"الإنترلينج"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"الإيجبو"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"السيتشيون يي"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"الفرنسية الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"الإينبياك"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"الفرنسية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"الإيدو"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"الفريزينية الشرقية"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"الفريزينية الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"الأيسلندية"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"الإيطالية"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"الإينكتيتت"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"الماليالام"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"العربية الجنوبية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"الساراتي"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"الدوجرية"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"لغة الكوم"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"السامي الجنوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"الشواني"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"المادريز"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"اللول سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"الماجا"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"المايثيلي"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"الإيناري سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"السيكسيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"الماكاسار"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"الوو الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"السكولت سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"الماندينغ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"الكونغو"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"الكيكيو"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"الماساي"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"الكيونياما"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"الكازاخستانية"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"الكالاليست"_s)
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
			$of(u"الكانوري"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"الكشميرية"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"السيرث"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"الليبتشا - رونج"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"الكردية"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"الكومي"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"الكورنية"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"القيرغيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"السونينك"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"اللكسمبورغية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"الأرقام الملايلامية"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"الغاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"رنجورنجو"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"الليمبورغية"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"اللينجالا"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"الفريلايان"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"اللاوية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"نظام القياس البريطاني"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"الليتوانية"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"اللوبا كاتانغا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"اللاتفية"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"السوجدين"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}، {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"الملغاشي"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"المارشالية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ترتيب فرز Unicode الافتراضي"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"الماورية"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"المقدونية"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"المالايالامية"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"المنغولية"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"الماراثية"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"الماليزية"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"المالطية"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"البورمية"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"الأرمينية"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"الموكشا"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"مابا"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"صوربيا السفلى"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"النورو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"بحث لأغراض عامة"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"النرويجية بوكمال"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"النديبيل الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"النيبالية"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"الندونجا"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"الماندار"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"الهولندية"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"النرويجية نينورسك"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"النرويجية"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"النديبيل الجنوبي"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"النافاجو"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"الكارا-كالباك"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"النيانجا"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"الكاتشين"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"القبيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"متعدد النغمات"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"الأوكسيتانية"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"الجو"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"الكامبا"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"الميند"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"الأوجيبوا"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"الميرو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"الأرقام الأرمينية"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"الأورومية"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"الكوي"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"الأورية"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"الأوسيتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"الكاباردايان"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"المورسيانية"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"السرانان تونجو"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"البنجابية"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"الديولا"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"السرر"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"كانمبو"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(metaValue_pi)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"البولندية"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"الهولندية الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"تقويم دانجي"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"البشتو"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"البرتغالية"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"الأيرلندية الوسطى"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ترتيب الفرز"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"البرتغالية البرازيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"التايابية"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ماخاوا-ميتو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"تنسيق العملة"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"البراجية"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"التقويم"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"اللاو"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ميتا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"نظام 24 ساعة (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"نظام 24 ساعة (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"لغة الساهو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"أرقام ميانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"الكويتشوا"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"الزابوتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"البودو"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"الانا"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ماكونده"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"الأثيوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"نظام 12 ساعة (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"نظام 12 ساعة (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"الرومانشية"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"الرندي"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"العملة"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"الرومانية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"أرقام الأوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"الأرقام العشرية الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"الروسية"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"أكوس"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"الكينيارواندا"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"رموز المعايير الأساسية"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"كابوفيرديانو"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"الميكماكيونية"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"السوكوما"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"الإنجليزية الأسترالية"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"السنسكريتية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"التهجئة الموحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"السردينية"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"السوسو"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"السندية"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"سامي الشمالية"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"المينانجكاباو"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"السانجو"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"صربية-كرواتية"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"السنهالية"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"السومارية"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"السلوفاكية"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"السلوفانية"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"الساموائية"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"الشونا"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"الصومالية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"الأرقام العربية الهندية"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"الألبانية"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"الصربية"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"السواتي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"تنسيق العملة للحسابات"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"السوتو الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"لهجة ناتيسون"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"السويدية"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"السواحلية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"الأرقام المالية الصينية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"الإيبيبيو"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"الإيبان"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"البرياتية"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"وسط آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"التيلوغوية"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"غرب آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"الطاجيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"التغرينية"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"البجينيزية"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"الكورو"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"الإنجليزية الكندية"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"التركمانية"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"التاغالوغية"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"التسوانية"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"التونغية"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"لغة البولو"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا فونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"الأرقام اليابانية"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"التركية"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"السونجا"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"القمرية"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"التترية"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"الدايلا"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"التوي"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"التاهيتية"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"أوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"شرق أوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"شمال أوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"القرعانية"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"غرب أوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"الأويغورية"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"الإيطالية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"عام"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"الأوكرانية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"التقويم القبطي"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"الأوردية"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"الكالميك"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"الزيناجا"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"الأوزبكية"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"الكازية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"التهجئة الألمانية لعام 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"السكسونية السفلى"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"السيلوتي ناغري"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"الفيندا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"تقويم مينجو"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"الفيتنامية"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"الخوتانيز"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"كويرا تشيني"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"نظام التوقيت (12 مقابل 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"لغة الفولابوك"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"سريانية تقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"الأوسمانيا"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"الكيشية"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"الجا"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"الولونية"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"الغاغوز"_s)
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
			$of(u"الغان الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"الليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"الكتابة المسمارية الأكدية السومرية"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"الولوفية"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"التمازيغية المغربية القياسية"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"العربية الفصحى الحديثة"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"مقاطع كندية أصلية موحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"الجايو"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"المغولية"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"المانشو"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"اللاتينية - متغير فراكتر"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"الجبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"المانيبورية"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"اللاتينية - متغير غيلى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"الأرقام الصينية المبسطة"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"الأرقام الصينية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"الخوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"الأرقام الرومانية الصغيرة"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"البلينية"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"الليسية"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"الأوساج"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"لغة الميدومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"مون"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"الموهوك"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"لغة الكاكو"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"اليديشية"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"الموسي"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"الديسيريت"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"اليوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"أرقام تقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"الإسبانية المكسيكية"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"السريانية الغربية"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"التركية العثمانية"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"السريانية الأسترنجيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"الزهيونج"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"الكارية"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"كالينجين"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"الصينية"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"البوبوموفو"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"البيرميكية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"نمط فصل السطور"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"الزولو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ترتيب فرز دليل الهاتف"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"أحادي النغمة"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"الكيمبندو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"الأرقام المالية اليابانية"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"التشامية"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"الجعزية"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"السريانية الشرقية"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"العربية الشمالية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ترتيب فرز محسَّن"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"التغالوغية"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"الديموطيقية"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"الهيراطيقية"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"إمبو"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"الهيروغليفية"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"الأبجدية الجورجية - أسومتافرلي و نسخري"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"الصينية المبسطة"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"كومي-بيرماياك"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"المجرية القديمة"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"الكونكانية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"التهجئة الألمانية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"الكوسراين"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"الصينية التقليدية"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"الكبيل"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"الأرقام الخيمرية"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"الإيلوكو"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"بلنسية"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"القبرصية"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"الأبجدية التركية اللاتينية الموحدة"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"مندنج"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"الأرقام الغورموخية"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"لغات متعددة"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"الكادو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"نظام القياس"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"الكريك"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"الجلاجوليتيك"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"لغة أهل جبل طارق"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"التهجئة العامة"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"الكاريبية"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"الكايوجية"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"الأرقام التاميلية"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"الكاراتشاي-بالكار"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"الإنجوشية"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"الدارية"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"الكاريلية"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"الإفيك"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"الأرقام"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"الكوروخ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شامبالا"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"التيلجو"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"لغة البافيا"_s)
		})
	}));
	return data;
}

LocaleNames_ar::LocaleNames_ar() {
}

$Class* LocaleNames_ar::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar, name, initialize, &_LocaleNames_ar_ClassInfo_, allocate$LocaleNames_ar);
	return class$;
}

$Class* LocaleNames_ar::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun