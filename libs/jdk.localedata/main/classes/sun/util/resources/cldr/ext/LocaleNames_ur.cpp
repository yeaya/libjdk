#include <sun/util/resources/cldr/ext/LocaleNames_ur.h>

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

$MethodInfo _LocaleNames_ur_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ur, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ur, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ur_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ur",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ur_MethodInfo_
};

$Object* allocate$LocaleNames_ur($Class* clazz) {
	return $of($alloc(LocaleNames_ur));
}

void LocaleNames_ur::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ur::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"فجی"_s);
	$var($String, metaValue_MD, u"مالدووا"_s);
	$var($String, metaValue_TR, u"ترکی"_s);
	$var($String, metaValue_ar, u"عربی"_s);
	$var($String, metaValue_bo, u"تبتی"_s);
	$var($String, metaValue_el, u"یونانی"_s);
	$var($String, metaValue_gu, u"گجراتی"_s);
	$var($String, metaValue_he, u"عبرانی"_s);
	$var($String, metaValue_hy, u"آرمینیائی"_s);
	$var($String, metaValue_ja, u"جاپانی"_s);
	$var($String, metaValue_ka, u"جارجیائی"_s);
	$var($String, metaValue_km, u"خمیر"_s);
	$var($String, metaValue_ko, u"کوریائی"_s);
	$var($String, metaValue_la, u"لاطینی"_s);
	$var($String, metaValue_lo, u"لاؤ"_s);
	$var($String, metaValue_or, u"اڑیہ"_s);
	$var($String, metaValue_si, u"سنہالا"_s);
	$var($String, metaValue_ta, u"تمل"_s);
	$var($String, metaValue_te, u"تیلگو"_s);
	$var($String, metaValue_th, u"تھائی"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"کولوگنیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"میرانڈیز"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"علامات"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ایموجی"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"چکمہ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ٹمنے"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"رپانوی"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"اسینشن آئلینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"راروتونگان"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ٹیٹم"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"انڈورا"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"متحدہ عرب امارات"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"فلیمِش"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"افغانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"انٹیگوا اور باربودا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ایتھوپیائی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"انگوئیلا"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"منطقۂ وقت"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"البانیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"آرمینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"انگولا"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"انٹارکٹیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ارجنٹینا"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"امریکی ساموآ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"آسٹریا"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"آسٹریلیا"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"اروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"امریکی انگریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"آلینڈ آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"آذربائیجان"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"بوسنیا اور ہرزیگووینا"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"بارباڈوس"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"سیبوآنو"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"بنگلہ دیش"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"کومیک"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بیلجیم"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"برکینا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بلغاریہ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"بحرین"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"برونڈی"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بینن"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"سینٹ برتھلیمی"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"برمودا"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ارزیا"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"برونائی"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بولیویا"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"کریبیائی نیدرلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"برازیل"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"بہاماس"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوگا"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"بھوٹان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"بؤویٹ آئلینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوتسوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بیلاروس"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بیلائز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"فارسی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"عبرانی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"کینیڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"کوکوس (کیلنگ) جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"مزندرانی"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"کانگو - کنشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"وسط افریقی جمہوریہ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"کانگو - برازاویلے"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"سوئٹزر لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"کوٹ ڈی آئیوری"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"کک آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"چلی"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"کیمرون"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"چین"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"کولمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"کلپرٹن آئلینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"کوسٹا ریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"کیوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"کیپ ورڈی"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"کیوراکاؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"جزیرہ کرسمس"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"قبرص"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"چیکیا"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ایکاجوی"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"جرمنی"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"اچائینیز"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"چیگا"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ڈائجو گارسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"دیوناگری ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"جبوتی"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ڈنمارک"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"اکولی"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"بریل"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ڈومنیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"آرمینیائی زیریں اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"جمہوریہ ڈومينيکن"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"گورانٹالو"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"زونی"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ٹگرے"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"پنگاسنان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"نصف عرض"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سیئوٹا اور میلیلا"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"پامپنگا"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ایکواڈور"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"پاپیامینٹو"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ادانگمے"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"اسٹونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"مغربی صحارا"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"پالاون"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"چوکیز"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ماری"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"چاکٹاؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چیروکی"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"اریٹیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ہسپانیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ایتھوپیا"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"یوروپی یونین"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"جارجیائی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"یوروزون"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"چینّے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"گجراتی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ادیگھے"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فن لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"فاکلینڈ جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"مائکرونیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"مقام کا متغیرہ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"جزائر فارو"_s)
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
			$of("type.ca.indian"_s),
			$of(u"ہندوستانی قومی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"گیبون"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"سلطنت متحدہ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"نائجیریائی پڈگن"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"گریناڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"جارجیا"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"فرینچ گیانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"گوئرنسی"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"گھانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جبل الطارق"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"گرین لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"گیمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"گنی"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"گواڈیلوپ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"استوائی گیانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"یونان"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"جنوبی جارجیا اور جنوبی سینڈوچ جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"گواٹے مالا"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"گوام"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"گنی بساؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"کلنگن"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"گیانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"سینٹرل کردش"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"کوئی لسانی مواد نہیں"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"آسٹریائی جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ہانگ کانگ SAR چین"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ہیرڈ جزیرہ و میکڈولینڈ جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ہونڈاروس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"کروشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"اغم"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"سوئس جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"اسلامی کیلنڈر (ام القراہ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ہیٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ہنگری"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"کینری آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"انڈونیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"آئرلینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"نیاپولیٹن"_s)
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
			$of(u"اسرائیل"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"آئل آف مین"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"بھارت"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"یورپی ترتیبی قوانین"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"برطانوی بحر ہند کا علاقہ"_s)
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
			$of(u"آئس لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"اٹلی"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ریاضی کی علامتیں"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"تھائی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"بنگالی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جرسی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"اسلامی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"جمائیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"بنگالی"_s)
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
			$of(u"اینو"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"گسی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"کنڑ ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"سوئس ہائی جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"صوتی چھٹائی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"بودھ کلینڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"کینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"لاطینی امریکہ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"کرغزستان"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"کمبوڈیا"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"کریباتی"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"کوموروس"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"سینٹ کٹس اور نیویس"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"کنڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"کینیڈین فرانسیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"شمالی کوریا"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"جنوبی کوریا"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"سوئس فرینچ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"کویت"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ٹوک پِسِن"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"کیمین آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"قزاخستان"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"سیریلک"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"لاؤس"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لبنان"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"سینٹ لوسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"گوئچ ان"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ادنی جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"لیشٹنسٹائن"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سری لنکا"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"لائبیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"لیسوتھو"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"لیتھونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"لکسمبرگ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"لٹویا"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"کٹاکانا"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"لیبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"لیڈینو"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ونجو"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانگی"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"تھانا"_s)
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
			$of(u"مونٹے نیگرو"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"سینٹ مارٹن"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"مڈغاسکر"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"مارشل آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"الیوت"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"وائی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"شمالی مقدونیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"مالی"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"میانمار (برما)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"منگولیا"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"نیواری"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"مکاؤ SAR چین"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"شمالی ماریانا آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"مارٹینک"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"موریطانیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونٹسیراٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"UN GEGN ٹرانسلٹریشن"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ماریشس"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"جنوبی الٹائی"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"مالدیپ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ملاوی"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"میکسیکو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"جاپانی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ملائشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزمبیق"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"نامیبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ذیلی صحارن افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"عبرانی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"لغت کی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"نیو کلیڈونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"نائجر"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"نارفوک آئلینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نائجیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ٹوروکو"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نکاراگووا"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"نیدر لینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ناروے"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نیپال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"نؤرو"_s)
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
			$of(u"نیوزی لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"عمان"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"انگیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"سیسلوا کریولے فرانسیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"پانامہ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"اسلامی شہری کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"برطانوی انگریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"پیرو"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"فرانسیسی پولینیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"پاپوآ نیو گنی"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"فلپائن"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"پولینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ایوانڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"سینٹ پیئر اور میکلیئون"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"پٹکائرن جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"پیورٹو ریکو"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"فلسطینی خطے"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"پرتگال"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"پلاؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"نیاس"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"یونانی زیریں اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"پیراگوئے"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ٹمبوکا"_s)
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
			$of(u"نیویائی"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"بیرونی اوشیانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"لیزگیان"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"تووالو"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"دنیا"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"شمالی امریکہ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ری یونین"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"جنوبی امریکہ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"لوجبان"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"اوشیانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومانیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"سربیا"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روس"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"روانڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"سعودی عرب"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"سولومن آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تاساواق"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"مغربی افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"سشلیز"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"سوڈان"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"وسطی امریکہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"سویڈن"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"مشرقی افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"شمالی افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سنگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"سینٹ ہیلینا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"سخت لائن بریک انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"وسطی افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"سلووینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"جنوبی افریقہ کا علاقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سوالبرڈ اور جان ماین"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"امیریکاز"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"سلوواکیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سیرالیون"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سان مارینو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"سینیگل"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"صومالیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپوچے"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"اراپاہو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"روایتی تمل اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سورینام"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"جنوبی سوڈان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ساؤ ٹومے اور پرنسپے"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ال سلواڈور"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سنٹ مارٹن"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"شام"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"سواتنی"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ٹرسٹن ڈا کیونہا"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"آسو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"پیمائش کا امریکی نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"شمالی امریکہ کا علاقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ٹرکس اور کیکوس جزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"یانگبین"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"چاڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"فرانسیسی جنوبی خطے"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ٹوگو"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"تھائی لینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"تاجکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"کریبیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ٹوکیلاؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"تیمور لیسٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"یمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Hangul Initial Consonant کے لحاظ سے تلاش کریں"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ترکمانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تونس"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ٹونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ترینیداد اور ٹوباگو"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"ٹووالو"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تائیوان"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"اسٹوریائی"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تنزانیہ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"کوايسو"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"نامعلوم رسم الخط"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"یوکرین"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ارومانی"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"مشرقی ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"تووینین"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"کانگو سواحلی"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"جنوبی ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"جنوب مشرقی ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"یوگنڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"پن ین کی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"جنوبی یورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"امریکہ سے باہر کے چھوٹے جزائز"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"اقوام متحدہ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ریاست ہائے متحدہ امریکہ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ہوائی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"آسان چینی کی چھٹائی کی ترتیب - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"یوروگوئے"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"پارسی"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ازبکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"سینٹرل ایٹلس ٹمازائٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"سٹروک کی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"نگیمبون"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ویٹیکن سٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"سینٹ ونسنٹ اور گرینیڈائنز"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"وینزوئیلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"برٹش ورجن آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"امریکی ورجن آئلینڈز"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ویتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"وینوآٹو"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"نوگائی"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"روا"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"آسٹریلیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"مالینیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ویلیز اور فیوٹیونا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"روایتی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"مائکرونیشیائی علاقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نگومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لاکوٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"مالیاتی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"سابقہ چھٹائی کی ترتیب، مطابقت کیلئے"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"والسر"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساموآ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"وولایتا"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"بناوٹی لہجے"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"وارے"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"بناوٹی دو سمتی"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"اوادھی"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"پولینیشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"کوسووو"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"غیر تحریر شدہ"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"وارلپیری"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"یمن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"اینکو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"معیاری چھانٹی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مایوٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"جنوبی افریقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ڈھیلا لائن بریک انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"دیوناگری"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"جارجیائی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ہیراگینا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زامبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زمبابوے"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"نامعلوم علاقہ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"میٹرک نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"شمالی سوتھو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"تیلگو ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"لوزیانا کریول"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"لوزی"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ماشیم"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"آسان چینی مالی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ہالیگینون"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"توسیع شدہ عربی ہندی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"نویر"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ڈاکوٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"پورے عرض والے ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"درگوا"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تائتا"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"شمالی لری"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ادمورت"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"سنڈاوے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"رومن اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ساکھا"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سامبورو"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"سنتالی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"عددی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"اصل ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"نگامبے"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گرمکھی"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"لیوبا لولوآ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"پورا عرض"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نینکول"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"لونڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لو"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فلیپینو"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ہمانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"میزو"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"بالینیز"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لویا"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"باسا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"یورپی ہسپانوی"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"سکاٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"سیسیلین"_s)
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
			$of("Aran"_s),
			$of(u"نستعلیق"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"افریقی"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"اکان"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"امہاری"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"اراگونیز"_s)
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
			$of(u"جاپانی سیلابریز"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"آسامی"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"اواری"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"جنوبی کرد"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ایمارا"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"آذربائیجانی"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"باشکیر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"اساسی-سٹروک کی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بیلاروسی"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بلغاری"_s)
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
			$of(u"بنگلہ"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"دوگریب"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"بریٹن"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسنیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"میانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"لاؤ ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سینا"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"کیٹالان"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"کويرابورو سينی"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چیچن"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"چیمارو"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"کوراسیکن"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"چیک"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"چرچ سلاوک"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چوواش"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ویلش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ایتھوپیائی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ڈینش"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"یورپی پرتگالی"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"اسٹینڈرڈ کرنسی فارمیٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بیمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"منگولیائی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ڈیویہی"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"لاطینی امریکی ہسپانوی"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ژونگکھا"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بینا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"چینی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زرما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"یونانی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ایو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"عمومی لائن بریک انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(metaValue_MD)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"انگریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ایسپرانٹو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"روایتی چینی کی چھٹائی کی ترتیب - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ہسپانوی"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"اسٹونین"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ہینب"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسکی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ہنگول"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تشلحيت"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"اپر سربیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ہان"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"شان"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"فارسی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"آسان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"مغربی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"روایتی"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"آزربائیجانی (عربی)"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"فولہ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فینیش"_s)
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
			$of("bgn"_s),
			$of(u"مغربی بلوچی"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"کینٹونیز"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فیروئیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"US BGN ٹرانسلٹریشن"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"اومبوندو"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فرانسیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"مغربی فریسیئن"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"آئرش"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"سکاٹش گیلک"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"گالیشیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"گُارانی"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"بھوجپوری"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"نامعلوم زبان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ایتھوپک امیٹ الیم کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مینکس"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ہؤسا"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ہندی"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ہیوپا"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"بینی"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"کراتی"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ہیتی"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ہنگیرین"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ہریرو"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"کاجن فرانسیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"بین لسانیات"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"جامو"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"انڈونیثیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"تبتی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"اِگبو"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"سچوان ای"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ایڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"آئس لینڈک"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"اطالوی"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"اینُکٹیٹٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"ملیالم"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"جنوبی سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"جاوی"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"مدورسی"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لول سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"مگاہی"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"میتھیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"اناری سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"سکسیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"مکاسر"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"سکولٹ سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"کانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"کیکویو"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"مسائی"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"کونیاما"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قزاخ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"کالاليست"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"کنّاڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"کنوری"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"کشمیری"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"کردش"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"کومی"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"کورنش"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"کرغیزی"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"سوننکے"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"لکسمبرگیش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ملیالم ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"گینڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"لیمبرگش"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لِنگَلا"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"فریولیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"پیمائش کا امپیریل نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"لیتھوینین"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لبا-کاتانجا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لیٹوین"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}،{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ملاگاسی"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"مارشلیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ڈیفالٹ یونی کوڈ چھانٹی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ماؤری"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"مقدونیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"مالایالم"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"منگولین"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"مراٹهی"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"مالے"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"برمی"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"موکشا"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ذیلی سربیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"ناؤرو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"عمومی تلاش"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"نارویجین بوکمل"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"شمالی دبیل"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نیپالی"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"نڈونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ڈچ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"نارویجین نینورسک"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"نارویجین"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"جنوبی نڈیبیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"نواجو"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"نیانجا"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"کاچن"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"قبائلی"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"آکسیٹان"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"جے جو"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"کامبا"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"میندے"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"میرو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"آرمینیائی اعداد"_s)
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
			$of(u"اوسیٹک"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"کبارڈین"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"موریسیین"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"سرانن ٹونگو"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پنجابی"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"دوالا"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"پولش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ڈانگی کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پشتو"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پُرتگالی"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"چھٹائی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"برازیلی پرتگالی"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"تیاپ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ماخاوا-ميتو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"کرنسی فارمیٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"میٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 گھنٹے کا نظام (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 گھنٹے کا نظام (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ساہو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"میانمار کے ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"کویچوآ"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بوڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ماکونده"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ایتھوپیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 گھنٹے کا نظام (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 گھنٹے کا نظام (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانش"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"رونڈی"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"کرنسی"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"رومینین"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"اڑیہ ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"چینی اعشاری اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"روسی"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"کینیاروانڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"کابويرديانو"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"مکمیک"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"سکوما"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"آسٹریلیائی انگریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"سنسکرت"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"سردینین"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سندھی"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"شمالی سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"منانگکباؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ساںغو"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"سربو-کروئیشین"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"سلوواک"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"سلووینیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ساموآن"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"شونا"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"صومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"عربی ہندی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"البانی"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"سربین"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"سواتی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"اکاؤنٹنگ کرنسی فارمیٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"جنوبی سوتھو"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"سنڈانیز"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"سویڈش"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سواحلی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"روایتی چینی مالی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ابی بیو"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ایبان"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"وسطی ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"مغربی ایشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجک"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ٹگرینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"بگینیز"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"کورو"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"کینیڈین انگریزی"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ترکمان"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"ٹیگا لوگ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"سوانا"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ٹونگن"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا فونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"جاپانی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"زونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"کوموریائی"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتار"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"توی"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"تاہیتی"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"یورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"مشرقی یورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"شمالی یورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"دزاگا"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"مغربی یورپ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"یوئگہر"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"عام"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"یوکرینیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"کاپٹک کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"اردو"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"کالمیک"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ازبیک"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"کھاسی"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ادنی سیکسن"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"وینڈا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"منگوو کیلنڈر"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ویتنامی"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"کويرا شيني"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"گھنٹہ سائیکل (12 بنام 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"وولاپوک"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"کيشی"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"گا"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"والون"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"غاغاوز"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"سریانی"_s)
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
			$of("wo"_s),
			$of(u"وولوف"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"اسٹینڈرڈ مراقشی تمازیقی"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ماڈرن اسٹینڈرڈ عربی"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"منگولیائی"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"منی پوری"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"آسان چینی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"روایتی چینی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ژوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"رومن زیریں اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بلین"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"موہاک"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"کاکو"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"یدش"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"موسی"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"یوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"روایتی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"میکسیکن ہسپانوی"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"وائی"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"کالينجين"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"بوپوموفو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"لائن بریک انداز"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"زولو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"فون بک کی چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"کیمبونڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"جاپانی مالی اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"گیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"دوبارہ تشکیل شدہ چھٹنی کی ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"امبو"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"چینی (آسان کردہ)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"کومی پرمیاک"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"کونکنی"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"روایتی چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"کیپیلّے"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"خمیر ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ایلوکو"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"منڈانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"گرمکھی ہندسے"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"متعدد زبانیں"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"پیمائش کا نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"کریک"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"گلبرتیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"تمل اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"کراچے بالکر"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"انگوش"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"دری"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"کیرلین"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ایفِک"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"کوروکھ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شامبالا"_s)
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

LocaleNames_ur::LocaleNames_ur() {
}

$Class* LocaleNames_ur::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ur, name, initialize, &_LocaleNames_ur_ClassInfo_, allocate$LocaleNames_ur);
	return class$;
}

$Class* LocaleNames_ur::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun