#include <sun/util/resources/cldr/ext/LocaleNames_lrc.h>

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

$MethodInfo _LocaleNames_lrc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lrc, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lrc, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lrc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lrc",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lrc_MethodInfo_
};

$Object* allocate$LocaleNames_lrc($Class* clazz) {
	return $of($alloc(LocaleNames_lrc));
}

void LocaleNames_lrc::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lrc::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, u"بأنگالی"_s);
	$var($String, metaValue_bo, u"تأبأتی"_s);
	$var($String, metaValue_el, u"یوٙنانی"_s);
	$var($String, metaValue_gu, u"گوجأراتی"_s);
	$var($String, metaValue_he, u"عئبری"_s);
	$var($String, metaValue_hy, u"أرمأنی"_s);
	$var($String, metaValue_ja, u"جاپوٙنی"_s);
	$var($String, metaValue_ka, u"گورجی"_s);
	$var($String, metaValue_km, u"خئمئر"_s);
	$var($String, metaValue_ko, u"کورئ یی"_s);
	$var($String, metaValue_la, u"لاتین"_s);
	$var($String, metaValue_ml, u"مالایام"_s);
	$var($String, metaValue_mn, u"موغولی"_s);
	$var($String, metaValue_or, u"ئوریا"_s);
	$var($String, metaValue_ta, u"تامیل"_s);
	$var($String, metaValue_te, u"تئلئگو"_s);
	$var($String, metaValue_th, u"تایلأندی"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانگوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نیان کوٙلئ"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پأشتوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پورتئغالی"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"نئشوٙنە یا"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فیلیپینی"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"پورتئغالی بئرئزیل"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ماخوڤا میتو"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لوٙئیا"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"لائو"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"مئتاٛ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ئسپانیایی ئوروٙپا"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تئسو"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"آذأربایئجانی"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"کوچوٙا"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"فئلاماندی"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"آفریکانس"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بودو"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"آکان"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"أمھأری"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ماکوٙندئ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"عأرأڤی"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"دونیا"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"أرأڤی"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ئتوٙیوٙپیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ئفریقا"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"آسامی"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ئمریکا شومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ئمریکا ھارگە"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"کوردی ھارگە"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ئینگیلیسی ئمریکایی"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ھوم پئڤأند جأھوٙن آڤ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"آذأربایئجانی ھارگە"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانش"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"راندی"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"رومانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"باشکیری"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"روٙسیە"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بئلاروٙسی"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"روٙسی"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بولغاری"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"کینیاروآندا"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"کاباردینو"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ئینگیلیسی ئوستارالیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"بامبارا"_s)
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
			$of("sa"_s),
			$of(u"سانسکئریت"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"تاساڤاق"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"بئرئزیل"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"بئرئتون"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسنیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سئندی"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوٙگا"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"مینجا ئمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"سامی شومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"سانگو"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"میانمار"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"سینھالا"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سئنا"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ئمریکا"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ئسلوڤاکی"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ئسلوڤئنیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"شونا"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"سوٙمالی"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپوٙچئ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"أدأدیا عأرأڤی"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"کاتالان"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"آلبانی"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"سئربی"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"مازأندأرانی"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"کیارابورو سئنی"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چئچئنی"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"سوٙدانی"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"سوٙئدی"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سأڤاحیلی"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"چین"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"کوریسکان"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"آسوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ئمریکا ڤارو"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"آسیا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چواشی"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجیکی"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"تیگرینیا"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ڤئلزی"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ئینگیلیسی کانادایی"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"کارائیب"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"تورکأمأنی"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"توٙنگان"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولا فوٙنیی"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"دانمارکی"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"تورکی"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"پورتئغالی ئوروٙپایی"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتار"_s)
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
			$of("Brai"_s),
			$of(u"بئرئیل"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"کئڤاسیوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"نیسئسە نادیار"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بیما"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ئوروٙپا"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"سأڤاحیلی کونگو"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ئویغوٙر"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ئسپانیایی ئمریکا لاتین"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"جائوفتاأ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"زوٙنگخا"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ئوکراینی"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بئنا"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"سیناھالا"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ئوردوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ڤولاتیا یأکاگئرتە"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زارما"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ھاڤایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ئڤئ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"رومانیایی مولداڤی"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ئوزبأکی"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"تامازیغ مینجایی"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ئینگیلیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ئسپئرانتو"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"آلمانی ھارگە جا"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چوروٙکی"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ئسپانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ئستونیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسکی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ھانگوٙل"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"تأقڤیم گأرئگوٙری"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ڤییئتنامی"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"کی یورا چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"تاچئلھیت"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"سوربی ڤارو"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ھانی"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"فارسی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"سادە بیە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"عأدأدیا لاتین"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"سونأتی"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"آذأری ھارگە"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"کیچی"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فأنلاندی"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"فیجی"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"رئڤا"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"بألوٙچی أقتوٙنئشین"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فاروٙسی"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فأرانسە"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فآرانسئ ئی"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"گاگائوز"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"فئریسی أفتونئشین"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نئگوٙمبا"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"لاکوٙتا"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ڤولوف"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ئیرلأندی"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"تامازیغ مأراکئشی"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"بیریتانیا گأپ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"عروی مدرن"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"گالیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"گوٙآرانی"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"زوٙن نادیار"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مانکس"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"خوٙسا"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"نیسئسە نأبیە"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ھائوسا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"کوردی سوٙرانی"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"بی نئشوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ھئنی"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"آلمانی ئوتریشی"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ڤارلپیری"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"موٙھاڤک"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"کوروڤاتی"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"آقئم"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"آلمانی سوٙئیسی"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ھاییتی"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"مأجاری"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"نئکوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"کوٙلاتی ئستاندارد"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"یوروبا"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ئسپانیایی مئکزیک"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"أندونئزیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ئیگبو"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ناما"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ڤای"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"سی چوان یی"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ھئن"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ئیسلأندی"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ئیتالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ئیتالیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ئینوکتیتوٙت"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"کالئجین"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"دیڤانگأری"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"چینی"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ھیراگانا"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"بوٙپوٙ"_s)
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
			$of("zu"_s),
			$of(u"زولو"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"راساگە نادیار"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"جاپوٙن"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"سامی ھارگە"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"جاڤئ یی"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"گوٙسی"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لۉلئ سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"آلمانی سوٙییسی"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ئیناری سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ئسکولت سامی"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ئمریکا لاتین"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"کیکیوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ماسایی"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قأزاق"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"کالالیسوٙت"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"کاناد"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"کانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"فآرانسئ ئی کانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"کأشمیری"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"کوردی کورمانجی"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"فآرانسئ ئی سوٙییس"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"کورنیش"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"قئرقیزی"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"سیریلیک"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"لوٙکزامبوٙرگی"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ئمبو"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"گاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"آلمانی ھاری"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ماچامئ"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لینگالا"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"چینی سادە بیە"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"لاو"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"کومی پئرمیاک"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"کوٙنکانی"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"لیتوڤانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لوٙبا کاتانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لاتوڤیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"کاتانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"نیوٙئر"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ڤوٙنجوٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانگی"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"تانا"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تایتا"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"مالاگاشی"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"مائوری"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"لۊری شومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"چینی سونأتی"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"مأقدوٙنی"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"مأراتی"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"مالایی"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالتی"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"بئرمئ یی"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"سوربی ھاری"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"نورڤئجی بوٙکمال"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"نئدئبئلئ شومالی"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نئپالی"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"موٙندانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ھولأندی"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"نورڤئجی نینورسک"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"رومبو"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"کابیلئ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"کامبا"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"مئرو"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ئوروموٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سامبوٙروٙ"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"موٙریسی"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پأنجابی"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"دوٙالا"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گوٙروٙمخی"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ئینگیلیسی بئریتانیایی"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شامبالا"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"لأھئستانی"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"بافیا"_s)
		})
	}));
	return data;
}

LocaleNames_lrc::LocaleNames_lrc() {
}

$Class* LocaleNames_lrc::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lrc, name, initialize, &_LocaleNames_lrc_ClassInfo_, allocate$LocaleNames_lrc);
	return class$;
}

$Class* LocaleNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun