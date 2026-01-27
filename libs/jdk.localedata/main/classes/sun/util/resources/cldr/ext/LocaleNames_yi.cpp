#include <sun/util/resources/cldr/ext/LocaleNames_yi.h>

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

$MethodInfo _LocaleNames_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_yi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_yi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yi_MethodInfo_
};

$Object* allocate$LocaleNames_yi($Class* clazz) {
	return $of($alloc(LocaleNames_yi));
}

void LocaleNames_yi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"פֿידזשי"_s);
	$var($String, metaValue_ar, u"אַראַביש"_s);
	$var($String, metaValue_el, u"גריכיש"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"פּארטא־ריקא"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"פּאַשטאָ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"פּארטוגאַל"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"פּארטוגעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"פֿיליפּינא"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"פּאַראַגווײַ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"מיזא"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"באַלינעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"העברעיש"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"קאַטאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"בײַעריש"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"סקאטס"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"סיציליאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"אַפֿאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"אַנדארע"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"פֿלעמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"אַפֿגהאַניסטאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"אַפֿריקאַנס"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"אַנטיגוע און באַרבודע"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"אַלבאַניע"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"אַרמעניע"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"אַמהאַריש"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"אַראַגאניש"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"אַנגאלע"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"אַנטאַרקטיקע"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"וועלט"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"אַרגענטינע"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"אַפֿריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"אַסאַמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"צפון־אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"עסטרייך"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"רעאוניאן"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"אויסטראַליע"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"דרום־אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"אַרובאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"לאזשבאָן"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"אקעאַניע"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"אַזערביידזשאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"רומעניע"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"רומעניש"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"באסניע הערצעגאווינע"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"באַרבאַדאס"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"סערביע"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"סעבואַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"באַנגלאַדעש"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"בעלגיע"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"רוסלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"בעלאַרוסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"רוסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"מיטל הויכדויטש"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"בורקינע פֿאַסא"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"בולגאַריע"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"רוואַנדע"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"בולגאַריש"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"בורונדי"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"בענין"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"בערמודע"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ברוניי"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"בענגאַליש"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"באליוויע"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"טיבעטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"סאַנסקריט"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"סאלאמאן אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"בראַזיל"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"סיישעל"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ברעטאניש"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"סאַרדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"באַהאַמאַס"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"סודאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"באסניש"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"סינדהי"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"צענטראַל־אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"בהוטאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"שוועדן"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"נארדסאַמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"אַראַמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"סינגאַפּור"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"באצוואַנע"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"סט העלענע"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"סערבא־קראאַטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"סלאוועניע"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"סינהאַליש"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"בעלאַרוס"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"סומעריש"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"בעליז"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"סלאוואַקיי"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"סלאוואַקיש"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"סיערע לעאנע"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"סלאוועניש"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"סאַן מאַרינא"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"סאַמאאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"סענעגאַל"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"שאנאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"סאמאַליע"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"סאמאַליש"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"קאַנאַדע"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"קאַטאַלאניש"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"אַלבאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"סורינאַם"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"סערביש"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"דרום־סודאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"קאנגא־קינשאַזע"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"סאַא טאמע און פּרינסיפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"צענטראַל־אַפֿריקאַנישע רעפּובליק"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"על סאַלוואַדאר"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"שוועדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"סוואַהיליש"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"שווייץ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"העלפֿאַ נדביין בארטן"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"סיריע"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"סוואַזילאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"קוק אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"טשילע"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"קאַמערון"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"כינע"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"קאלאמביע"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"טאַמיל"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"צפונדיקע אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"קאסטאַ ריקאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"צענטראַל־אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"טשאַד"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"טשעכיש"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"מערב־אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"קובאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"קלויסטער־סלאַוויש"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"קאַפּווערדישע אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"טאגא"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"קוראַסאַא"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"טיילאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"וועלשיש"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"קאַראַאיבע"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"טשעכיי"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"טורקמעניש"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"טאַגאַלאג"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"טורקמעניסטאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"טוניסיע"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"טאנגאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"זשאלא־פֿאני"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"מערב פֿלעמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"דעניש"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"טערקיי"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"קאמאריש"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"טרינידאַד און טאבאַגא"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"טאָטעריש"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"דייטשלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"דײַטש"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"אַלט־ הויכדויטש"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"טואוואַלו"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"רוסיניש"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"דזשיבוטי"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"טאַנזאַניע"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"דענמאַרק"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"דאמיניקע"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"דאמיניקאַנישע רעפּובליק"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"אייראפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"אוקראַינע"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"אַלט־איריש"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"מזרח אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"מזרח־אייראפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"גאטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"צפֿון־אייראפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"קאנגא־סוואַהיליש"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"דרום־אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"מערב־אייראפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"דרום־מזרח אַזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"אוגאַנדע"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"טיגרע"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"דרום־אייראפּע"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"אוקראַאיניש"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"ליוויש"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"אורדו"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"עקוואַדאר"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"פֿאַראייניגטע שטאַטן"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"עסטלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"עגיפּטן"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"אורוגוויי"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"פּרייסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"אוזבעקיש"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ענגליש"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"עספּעראַנטא"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"וואַטיקאַן שטאָט"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"עריטרעע"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"שפּאַניע"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"שפּאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"עטיאפּיע"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ווענעזועלע"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"עסטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"אייראפּעישער פֿאַרבאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"באַסקיש"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"גרעגארישער קאַלענדאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"וויעטנאַמעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"אייבער־סארביש"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"וויעטנאַם"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"וואלאַפּוק"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"פּערסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"וואַנואַטו"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"פֿינלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"פֿיניש"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"פֿאַלקלאַנד אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"מיקראנעזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"פֿאַרא אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"פֿאַראיש"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"פֿראַנקרייך"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"פֿראַנצויזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"מערב־פֿריזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"אוראַלט־גריכיש"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"גאַבאן"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"איריש"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"פֿאַראייניגטע קעניגרייך"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"סאַמאאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"גרענאַדאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"סקאטיש געליש"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"גרוזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"פֿראַנצויזישע גויאַנע"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"גערנזי"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"גהאַנע"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"גיבראַלטאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"שלעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"גרינלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"גאַלישיש"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"מיטל ענגליש"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"גאַמביע"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"גינע"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"גוואַדעלופ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"עקוואַטארישע גינע"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"אומבאַוואוסטע שפּראַך"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"פּאלינעזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"גריכנלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"גַלחיש"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"גוואַטעמאַלע"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"גוואַם"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"מאַנקס"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"גינע־ביסאַו"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"גויאַנע"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"קאסאווא"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"האַוסאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"העברעאיש"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"הינדי"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"האנדוראַס"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"קראאַטיע"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"קראאַטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"האַיטי"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"תימן"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"אונגערן"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"אונגעריש"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ייִדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"אַרמעניש"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"קאַנאַרישע אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"אינדאנעזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"מאַיאט"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"אינדאנעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"אַלט פּערסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"אירלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"נאַפּאליטַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"אַלט־פֿראַנצויזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ישראל"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"אינדיע"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"אידא"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"מזרח־פֿריזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"דרום־אַפֿריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"דרום־פֿריזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"איראַן"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"איסלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"איסלאַנדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"איטאַליע"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"איטאַליעניש"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"דעוואַנאַגאַרי"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"כינעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"אונטער שלעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"זאַמביע"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"יאַפּאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"דזשערזי"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"זולו"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"זימבאַבווע"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"אומבאַוואוסטער ראַיאן"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"דזשאַמייקע"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"יאַפּאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"יאַוואַנעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"גרוזיניש"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"קעניע"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"לאַטיין־אַמעריקע"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"קאַמבאדיע"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"קיריבאַטי"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"קאַזאַכיש"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"קאמאראס"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"כמער"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"קאַנאַדאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"קארעאיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"קורדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"קארניש"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"קיימאַן אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"קירגיזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ציריליש"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"לאַאס"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"לאטייניש"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"לבנון"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"לוקסעמבורגיש"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"נידערדײַטש"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ליכטנשטיין"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"סרי־לאַנקאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"אַקאַדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"לאַא"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"פידזשי הינדי"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ליבעריע"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"לעסאטא"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ליטע"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ליטוויש"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"לוקסעמבורג"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"לעטלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"לעטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ליביע"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"לאַדינא"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"מאַראקא"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"מאנאַקא"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"מאלדאווע"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"מאנטענעגרא"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"מאַדאַגאַסקאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"מאַרשאַל אינזלען"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"מאַאריש"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"מאַקעדאניש"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"מאַלי"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"מאַלאַיאַלאַם"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"מיאַנמאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"מאנגאליי"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"מאנגאליש"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"מאַרטיניק"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"מאַריטאַניע"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"מאנטסעראַט"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"מאַלטאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"מאַלטעזיש"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"מאריציוס"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"מאַלדיוון"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"מאַלאַווי"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"מעקסיקע"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"מאַלייזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"בירמאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"מאזאַמביק"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"אונטער־סארביש"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"נאַמיביע"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"נײַ קאַלעדאניע"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ניזשער"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"נעפּאַליש"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"נארפֿאלק אינזל"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ניגעריע"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ניקאַראַגוע"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"האלאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"האלענדיש"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"נײַ־נארוועגיש"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"נארוועגיע"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"נארוועגיש"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"נעפּאַל"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ניו זילאַנד"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"אקסיטאַניש"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"קרים־טערקיש"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"אַלט ענגליש"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"אסעטיש"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"נומערן"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"יידיש־פערסיש"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"פּאַנאַמאַ"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"קאַשוביש"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"פּערו"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"פֿראַנצויזישע פּאלינעזיע"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"פּאַפּואַ נײַ גינע"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"פֿיליפּינען"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"פּאַקיסטאַן"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"פּוילן"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"פּויליש"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"פּיטקערן אינזלען"_s)
		})
	}));
	return data;
}

LocaleNames_yi::LocaleNames_yi() {
}

$Class* LocaleNames_yi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yi, name, initialize, &_LocaleNames_yi_ClassInfo_, allocate$LocaleNames_yi);
	return class$;
}

$Class* LocaleNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun