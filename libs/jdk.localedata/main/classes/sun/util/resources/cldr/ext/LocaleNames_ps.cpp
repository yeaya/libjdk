#include <sun/util/resources/cldr/ext/LocaleNames_ps.h>

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

$MethodInfo _LocaleNames_ps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ps, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ps, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ps",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ps_MethodInfo_
};

$Object* allocate$LocaleNames_ps($Class* clazz) {
	return $of($alloc(LocaleNames_ps));
}

void LocaleNames_ps::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ps::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"نایرو"_s);
	$var($String, metaValue_TR, u"ترکي"_s);
	$var($String, metaValue_ar, u"عربي"_s);
	$var($String, metaValue_bo, u"تبتي"_s);
	$var($String, metaValue_el, u"یوناني"_s);
	$var($String, metaValue_gu, u"ګجراتي"_s);
	$var($String, metaValue_he, u"عبراني"_s);
	$var($String, metaValue_ja, u"جاپاني"_s);
	$var($String, metaValue_km, u"خمر"_s);
	$var($String, metaValue_kn, u"کناډا"_s);
	$var($String, metaValue_ko, u"کوریایی"_s);
	$var($String, metaValue_ta, u"تامل"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"کولوګنيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"مرانديز"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"سمبولونه"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ایموجي"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"چکما"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"تیمني"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"رپانوئي"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"اسينشان ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"راروټانګان"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"تتوم"_s)
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
			$of(u"فلېمېشي"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"افغانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"انټيګوا او باربودا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ایتوپيک جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"انګیلا"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"البانیه"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ارمنستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"انګولا"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"انتارکتیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ارجنټاين"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"امریکایی ساماوا"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"اتریش"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"آسټرالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"آروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"الاند ټاپوان"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"اذربايجان"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"بوسنيا او هېرزګوينا"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"باربادوس"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"سیبوانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"بنگله دېش"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"کومک"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بیلجیم"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"بورکینا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بلغاریه"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"بحرين"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"بروندي"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بینن"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"سينټ بارتيلمي"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"برمودا"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ارزيا"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"برونائي"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بولیویا"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"کیریبین هالینډ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"برازیل"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"باهماس"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوګا"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"بهوټان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"بوویټ ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوتسوانه"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بیلاروس"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بلیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"فارسي جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"عبراني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"کاناډا"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"کوکوز (کيلنګ) ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"مزاندراني"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"کانګو - کینشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"وسطي افريقا جمهور"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"کانګو - بروزوییل"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"سویس"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"د عاج ساحل"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"کوک ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"چیلي"_s)
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
			$of(u"کولمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"د کلپرټون ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"کوستاریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"کیوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"کیپ ورد"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"کوراکاو"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"د کريسمس ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"قبرس"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"چکیا"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"اکجک"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"المان"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"اچيني"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"چيگايي"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ډایګو ګارسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ديوانګري اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"جبوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ډنمارک"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"بریلي"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"دومینیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"آرمينيايي کوچني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"جمهوريه ډومينيکن"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ګورن ټالو"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"زوني"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"تیګر"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجزایر"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"پانګاسین"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سيوتا او ماليلا"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"پمپانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"اکوادور"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"پاپيامينتو"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ادانگمي"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"استونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"لويديځ صحارا"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"پالان"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"چواوکي"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ماري"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"چوکټاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چېروکي"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"اریتره"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"هسپانیه"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"حبشه"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"اروپايي اتحاديه"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ګريګورين جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"اروپايي سيمه"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"شيني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ګوجراتي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"اديغي"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فنلینډ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"فجي"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"فاکلينډ ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"میکرونیزیا"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"فارو ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فرانسه"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ګابن"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"برتانیه"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"نائجیریا پیدجن"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ګرنادا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"گورجستان"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"فرانسوي ګانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ګرنسي"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ګانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جبل الطارق"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ګرینلینډ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ګامبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ګینه"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ګوادلوپ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"استوایی ګیني"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"یونان"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"سويلي جارجيا او سويلي سېنډوچ ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ګواتیمالا"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ګوام"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ګینه بیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"کلينګاني"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ګیانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"منځنۍ کوردي"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"نه ژبني منځپانګه"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"اتريشي آلماني"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"هانګ کانګ SAR چین"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"هارډ او ميکډانلډ ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"هانډوراس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"کرواشيا"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"اغیمي"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"سویس جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"هایټي"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"مجارستان"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"د کناري ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"اندونیزیا"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"آيرلېنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"نيپالين"_s)
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
			$of(u"اسراييل"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"د آئل آف مین"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"هند"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"د برتانوي هند سمندري سيمه"_s)
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
			$of(u"آیسلینډ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ایټالیه"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"د ریاضیاتو نوټیشن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"تايي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"د بنګلا اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جرسی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"اسلامي جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"جمیکا"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"بنګله"_s)
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
			$of(u"اينويي"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ګوسي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"کاناډا يي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"سویس های جرمن"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"بودايي جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"کینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"لاتیني امریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"قرغزستان"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"کمبودیا"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"کیري باتي"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"کوموروس"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"سینټ کټس او نیویس"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"کاناډايي فرانسوي"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"شمالی کوریا"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"سویلي کوریا"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"سويسي فرانسوي"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"کويت"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"توک پیسین"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"کیمان ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"قزاقستان"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"سیریلیک"_s)
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
			$of("LC"_s),
			$of(u"سینټ لوسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ګیچین"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"کښته آلماني"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"لیختن اشتاین"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سريلنکا"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"لايبيريا"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"لسوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"لیتوانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"لوګزامبورګ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ليتهويا"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"کاتاکانا"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"لیبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"لاډینو"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"وونجو"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لنګی"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"تهانا"_s)
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
			$of(u"مولدوا"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"مونټینیګرو"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"سینټ مارټن"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"مدغاسکر"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"مارشل ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"اليوتي"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"تایلنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"شمالي مقدونيه"_s)
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
			$of(u"منګوليا"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"نيواري"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"مکاو SAR چین"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"شمالي ماريانا ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"مارټینیک"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"موریتانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مانټیسیرت"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالټا"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"موریشیس"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"سویل الټای"_s)
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
			$of(u"میکسیکو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"جاپاني جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"مالیزیا"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزمبيق"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"نیمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"سب سهارن افريقا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"جورجویان جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"نوی کالیډونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"نايجير"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"نارفولک ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نایجیریا"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"تاروکو"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نکاراګوا"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"هالېنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ناروۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نیپال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"نیوو"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"رومبو"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"نیوزیلنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"عمان"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"انگيکي"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"سسيلوا ڪروئل فرانسوي"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"پاناما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"اسلامي جنتري (جدولي، مدني عصر)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"بريتانوی انګلیسي"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"پیرو"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"فرانسوي پولينيسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"پاپوا نيو ګيني"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"فلپين"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"پولنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"اوونڊو"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"سینټ پییر او میکولون"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"پيټکيرن ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"پورتو ریکو"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"فلسطیني سيمې"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"پورتګال"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"پلاؤ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"نياس"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"يوناني کوچني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"پاراګوی"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"تامبوکا"_s)
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
			$of(u"نیان"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"بهرنۍ اوسيانه"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"لیګغیان"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"تووالو"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"نړۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"افريقا"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"شمالی امریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ریونین"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"سويلي امريکا"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"لوجبان"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"اوقيانوسيه"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"سربيا"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روسیه"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"روندا"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"سعودي عربستان"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"سليمان ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تساواق"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"لویدیځ افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"سیچیلیس"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"سوډان"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"منخنۍ امريکا"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"سویډن"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ختیځ افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"شمالي افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سينگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"سینټ هیلینا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"د سختې ماتې کرښې ډول"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"منځنۍ افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"سلوانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"سويلي افريقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سوالبارد او جان ميين"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"امريکې"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"سلواکیا"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سییرا لیون"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سان مارینو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"سينيګال"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"سومالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپوچه"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"اراپاهوي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"دوديز تامل اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سورینام"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"سويلي سوډان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ساو ټیم او پرنسیپ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"سالوېډور"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سینټ مارټین"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"سوریه"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"اسواټيني"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"تریستان دا کنها"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"اسويي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"د متحده آيالاتو د ناپ نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"شمالي امریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"د ترکیې او کیکاسو ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ینګبین"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"چاډ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"د فرانسې جنوبي سیمې"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ټوګو"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"تهايلنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"تاجکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"کیریبین"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"توکیلو"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"تيمور-ليسټ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"یمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"تورکمنستان"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تونس"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"تونګا"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ټرينيډاډ او ټوباګو"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"توالیو"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تائيوان"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"استورياني"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تنزانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"کواسیو"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"نامعلومه سکرېپټ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"اوکراین"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"اروماني"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ختیځ آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"توینیان"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"کانګو سواهلی"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"سويلي آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"سويلي ختيځ آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"یوګانډا"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"سويلي اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"سنهالا"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"د متحده ایالاتو ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ملگري ملتونه"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"متحده آيالات"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"هوایی"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"یوروګوی"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"پروشين"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"اوزبکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"مرکزی اطلس تمازائيٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"نایجیمون"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"واتیکان ښار"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"سینټ ویسنټینټ او ګرینډینز"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"وینزویلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"بریتانوی ویګور ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"د متحده آيالاتو ورجن ټاپوګان"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"وېتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"واناتو"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"نوګی"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"روا"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"آسترالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ملانشیا"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"والیس او فوتونا"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"د مایکرونیسینین سیمه"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نګومبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لکوټا"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ولسیر"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساماوا"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ولایټا"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"جعلي خج"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"وارۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"سیډو بیډی"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"اوادي"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"پولنيسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"کوسوو"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ناليکلی"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"یمن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"نکو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"د معیاري لټي ترتیب"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مايوټ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"سویلي افریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"د غړندې ماتې کرښې ډول"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"دیواناګري"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ګريګورين اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"هیراګانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زیمبیا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زیمبابوی"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"نامعلومه سيمه"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ميټرک نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"شمالي سوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"تيلوګو اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"لوزی"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ماچمی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ساده چيني مالي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ھلیګینون"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"غځېدلې عربي ۔ اينډيک عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"نویر"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"داکوتا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"د بشپړه پراختيا اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"درگوا"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ټایټا"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"شمالي لوری"_s)
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
			$of(u"سنډاوی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"رومن اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"سخا"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سمبورو"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"سنتالي"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"نګبای"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ګرومي"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"لبا لولوا"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانګوو"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نینکول"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"لندا"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لو"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فلیپیني"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"همونګ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ميزو"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"بلوڅي"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"بالنی"_s)
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
			$of(u"اروپايي هسپانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"سکاټس"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"سیلیسي"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"افري"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ابخازي"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"افریکانسي"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"اکاني"_s)
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
			$of(u"اراگونېسي"_s)
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
			$of(u"د جاپاني سیلابري"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"اسامي"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"اواري"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ایماري"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"اذربایجاني"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"باشکير"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بېلاروسي"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بلغاري"_s)
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
			$of(u"بنگالي"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"داگرب"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"برېتون"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسني"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"میانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"لاوي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سینا"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"کټلاني"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"کوییرابورو سینی"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چيچني"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"چمورو"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"کورسيکاني"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"اوديا"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"چېکي"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"د کليسا سلاوي"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چوواشي"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ويلشي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ايتهوپيايي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ډنمارکي"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"اروپايي پرتګالي"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"الماني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"معياري اسعارو بڼه"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بيمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ديویهی"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"لاتيني امريکايي هسپانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ژونگکه"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بينا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"د چين جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زرما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"يوناني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ايو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"د عادي ماتې کرښې ډول"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"مولداویایی"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"انګليسي"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"اسپرانتو"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"هسپانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"حبشي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"هن او بوپوفومو"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسکي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"هنګولي"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تاکلهیټ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"پورته سربيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"هن"_s)
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
			$of(u"ساده شوی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"لويديځ عددونه"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"دودیزه"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"فولاح"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فینلنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"فجیان"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"فان"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"کانټوني"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فاروئې"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"امبوندو"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فرانسوي"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"لوېديځ فريشي"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ائيرلېنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"سکاټلېنډي ګېلک"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ګلېشيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ګوراني"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"بهوجپوري"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"نامعلومه ژبه"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"اسلامي جنتري (جدولي، ستورپوهنيز عصر)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مینکس"_s)
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
			$of(u"ھوپا"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"بینی"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"کروايشيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"هيټي کريول"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"هنګري"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"آرمينيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"هیرورو"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"انټرلنګوا"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"جامو"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"انډونېزي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"تبتي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"اګبو"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"سیچیان یی"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"اڊو"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ايسلنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ایټالوي"_s)
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
			$of("Mlym"_s),
			$of(u"مالایالم"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"سویلي سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"جاوايي"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"مدراسی"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لول سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"مګهي"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"مایتھلي"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"اناري سميع"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"جورجيائي"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"سکسيکا"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"مکاسار"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"سکولټ سمیع"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"ککوؤو"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ماسائي"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"کواناما"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قازق"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"کلالیسٹ"_s)
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
			$of(u"کنوری"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"کشمیري"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"کردي"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"کومی"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"کورنيشي"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"کرغيزي"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"سونینګ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"لاتیني"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"لوګزامبورګي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ملاي لام اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ګانده"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"لمبرگیانی"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لنګالا"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"فرائیلیین"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"لاو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"امپيريل د ناپ نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ليتواني"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لوبا-کټنګا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لېټواني"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ملغاسي"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"مارشلیز"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ډيفالټ يونيکوډ ترتيب"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ماوري"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"مقدوني"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"مالايالم"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"منګولیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"مراټهي"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ملایا"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالټايي"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"برمایی"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ارمانیایي"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"موکشا"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"کښته سربيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"د عمومي موخي لټون"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ناروېئي (بوکمال)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"شمالي نديبل"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نېپالي"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ندونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"هالېنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ناروېئي (نائنورسک)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ناروېئي"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"سويلي نديبيل"_s)
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
			$of(u"کاچین"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"کیبیل"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"اوکسيټاني"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ججو"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"کامبا"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"مینڊي"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ميرو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"آرمينيايي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"اورومو"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"اوڊيا"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"اوسيټک"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"کابیرین"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ماریسیسن"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"سوران ټونګو"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پنجابي"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"دوالا"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"پولنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ډانګي جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پښتو"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پورتګالي"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ترتيب"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"برازیلي پرتګالي"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"تایپ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"مکھوامیتو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"اسعارو بڼه"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"لاوو"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ميټا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"د ۲۴ ساعتو نظام (۰ـ۲۳)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"د ساعتو نظام (۱ـ۲۴)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"سهو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"د ميانمار اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"کېچوا"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بودو"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ميکونډي"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ایتوپي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"د ۱۲ ساعتو نظام (۱ ـ ۱۲)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"د ۱۲ ساعتو نظام (۰ـ۱۱)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانیش"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"رونډی"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"اسعارو"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"رومانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"د اوډيا اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"چايني اعشاري اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"روسي"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"کینیارونډا"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"کابوورډیانو"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ممکق"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"سکوما"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"آسټرالياوي انګليسي"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"سنسکریټ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"سارڊيني"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سندهي"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"شمالي سامي"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"مينيگاباو"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"سانګو"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"سينهالي"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"سلوواکي"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"سلوواني"_s)
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
			$of(u"سومالي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"عربي - انډیک عددونه"_s)
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
			$of(u"سواتی"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"محاسبه اسعارو بڼه"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"سويلي سوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"سوډاني"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"سویډنی"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سواهېلي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"دوديز چيني مالي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ابیبیو"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ابن"_s)
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
			$of("143"_s),
			$of(u"منځنۍ آسيا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"تېليګو"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"لویدیځ آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجکي"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"تايلېنډي"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"تيګريني"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"بگنيايي"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"کورو"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"کاناډايي انګلیسي"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ترکمني"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"سووانا"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"تونګان"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا فوني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"جاپاني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"سونګا"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"کومورياني"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتار"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"تاهیتي"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ختيځ اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"شمالي اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ډزاګا"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"لوېديځ اروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"اويغوري"_s)
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
			$of(u"اوکرايني"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"اردو"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"کالمک"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"اوزبکي"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"خاسې"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ویندا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"منگوو جنتري"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"وېتنامي"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"کویرا چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"د ساعت چکر (۱۲ پرتله ۲۴)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"والاپوک"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"کچی"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"والون"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"سوریاني"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ولوف"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"معياري مراکشي تمازيټ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"نوې معياري عربي"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"منګولیایي"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"مانی پوری"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"لاتين/لاتيني"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ساده چيني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"دوديز چيني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"خوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"رومن کوچني اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بلین"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"محاواک"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"کاکو"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"يديش"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ماسي"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"یوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ميکسيکي هسپانوي"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"وای"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"کلینجن"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"چیني"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"بوپوموفو"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"د ماتې کرښې ډول"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"زولو"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"ګرجستاني"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"کیمبوندو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"جاپاني مالي اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ګیز"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ايمبو"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ساده چيني"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"کونکاني"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"دوديزه چيني"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"کیلي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"خمري اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"الوکو"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"مندانګ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ګرمخې اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"متعدد ژبې"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"د ناپ نظام"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"کريکي"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"گلبرتي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"تامل اعداد"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"کراچی بالکر"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"انگش"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"دری (افغانستان)"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"کاریلین"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"افک"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"شمېرې"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"کورخ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شمبالا"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"تیلیګو"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"بفیا"_s)
		})
	}));
	return data;
}

LocaleNames_ps::LocaleNames_ps() {
}

$Class* LocaleNames_ps::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ps, name, initialize, &_LocaleNames_ps_ClassInfo_, allocate$LocaleNames_ps);
	return class$;
}

$Class* LocaleNames_ps::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun