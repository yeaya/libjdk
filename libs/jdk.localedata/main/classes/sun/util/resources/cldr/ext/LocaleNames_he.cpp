#include <sun/util/resources/cldr/ext/LocaleNames_he.h>

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

$MethodInfo _LocaleNames_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_he",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_he_MethodInfo_
};

$Object* allocate$LocaleNames_he($Class* clazz) {
	return $of($alloc(LocaleNames_he));
}

void LocaleNames_he::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_he::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TK, u"טוקלאו"_s);
	$var($String, metaValue_TV, u"טובאלו"_s);
	$var($String, metaValue_ml, u"מליאלאם"_s);
	$var($String, metaValue_si, u"סינהלה"_s);
	$var($String, metaValue_te, u"טלוגו"_s);
	$var($String, metaValue_nqo, u"נ׳קו"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"קולוניאן"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"מירנדזית"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"סמלים"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"אטסם"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"מרווארי"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"אמוג׳י"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"צ׳אקמה"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"מצרית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ראג׳סטאני"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"טימנה"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"טסו"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"רפאנוי"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"טרנו"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"האי אסנשן"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ררוטונגאן"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"טטום"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"אנדורה"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"איחוד האמירויות הערביות"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"פלמית"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"אפגניסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"אנטיגואה וברבודה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"לוח השנה האתיופי"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"אנגווילה"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"אזור זמן"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"אלבניה"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ארמניה"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"אנגולה"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"אנטארקטיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ארגנטינה"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"סמואה האמריקנית"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"אוסטריה"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"אוסטרליה"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ארובה"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"איי אולנד"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"מאיין"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"אזרבייג׳ן"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"מזרח ארמנית"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"בוסניה והרצגובינה"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ברבדוס"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"סבואנו"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"בנגלדש"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"קומיקית"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"בלגיה"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"גרמנית בינונית-גבוהה"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"בורקינה פאסו"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"בולגריה"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"בחריין"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"בורונדי"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"בנין"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"סנט ברתולומיאו"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ברמודה"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"קוטנאי"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ארזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ברוניי"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"בוליביה"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"האיים הקריביים ההולנדיים"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ברזיל"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"איי בהאמה"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"סוגה"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"בהוטן"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"האי בובה"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"בוצוואנה"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"בלארוס"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"בליז"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"לוח השנה הפרסי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ספרות עבריות"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"קנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"איי קוקוס (קילינג)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"מאזאנדראני"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"קונגו - קינשאסה"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"הרפובליקה המרכז-אפריקאית"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"קונגו - ברזאויל"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"שווייץ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"חוף השנהב"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"איי קוק"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"צ׳ילה"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"קמרון"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"סין"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"קולומביה"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"האי קליפרטון"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"קוסטה ריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"קובה"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"כף ורדה"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"קוראסאו"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"אי חג המולד"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"קפריסין"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"צ׳כיה"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"אקיוק"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"גרמניה"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"גרמנית עתיקה גבוהה"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"אכינזית"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"צ׳יגה"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"דייגו גרסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ספרות של דוונגארי"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ג׳יבוטי"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"דנמרק"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"אקצ׳ולי"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"גונדי"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ברייל"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"דומיניקה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ספרות ארמניות קטנות"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"הרפובליקה הדומיניקנית"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"גורונטאלו"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"גותית"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"מאיטי מאייק"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"זוני"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"טיגרית"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"אלג׳יריה"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"פנגסינאן"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"חצי רוחב"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"פלאבי"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"סאוטה ומלייה"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"צ׳יבצ׳ה"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"פמפאניה"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"אקוודור"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"פפיאמנטו"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"אדנמה"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"אסטוניה"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"טיב"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"מצרים"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"סהרה המערבית"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"צ׳אגאטאי"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"פלוואן"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"צ׳וקסה"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ניב צ׳ינוק"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"מארי"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"צ׳יפוויאן"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"צ׳וקטאו"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"צ׳רוקי"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"אריתריאה"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ספרד"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"אתיופיה"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"האיחוד האירופי"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"עילמית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"לוח השנה הגרגוריאני"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"גוש האירו"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"שאיין"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ספרות גוג׳רטיות"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"אינדוס"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"אדיגית"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"פינלנד"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"פיג׳י"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"איי פוקלנד"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"מיקרונזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"משתנה אזור"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"איי פארו"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"טמיל"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"צרפת"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"גרבו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"לוח השנה ההודי הלאומי"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"יוונית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"גבון"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ווטיק"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"בריטניה"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ניגרית פידג׳ית"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"גרנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"גאורגיה"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"גיאנה הצרפתית"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"גרנזי"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"גאנה"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"גיברלטר"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"אפריהילי"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"גרינלנד"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"אנגלית תיכונה"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"גמביה"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"גינאה"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"גוואדלופ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"גינאה המשוונית"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"יוון"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ג׳ורג׳יה הדרומית ואיי סנדוויץ׳ הדרומיים"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"גואטמלה"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"גואם"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"גינאה-ביסאו"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"טלינגיט"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"קלינגונית"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"גיאנה"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"כורדית סוראנית"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ללא תוכן לשוני"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"הונג קונג (אזור מנהלי מיוחד של סין)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"איי הרד ומקדונלד"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"הונדורס"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"קרואטיה"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"אע׳ם"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"גרמנית שוויצרית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"לוח השנה המוסלמי אום אל-קורא"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"האיטי"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"הונגריה"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"טמאשק"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"האיים הקנריים"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"סינית מין נאן"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"אינדונזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"פרסית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"אירלנד"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"נפוליטנית"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"נאמה"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"זאזא"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ישראל"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"האי מאן"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"הודו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"חוקי סדר אירופיים"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"הטריטוריה הבריטית באוקיינוס ההודי"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"עיראק"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"איראן"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"איסלנד"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"איטליה"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"סימון מתמטי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ספרות תאיות"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"מחשב"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ספרות בנגליות"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ג׳רזי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"לוח השנה המוסלמי"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ג׳מייקה"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"בנגלי"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ירדן"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"יפן"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"אינו"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"גוסי"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ניאסה טונגה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"ספרות של קאנאדה"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"גרמנית (שוויץ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"סדר מיון פונטי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"לוח השנה הבודהיסטי"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"קניה"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"אמריקה הלטינית"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"קירגיזסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"קמבודיה"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"קיריבאטי"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"קומורו"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"סנט קיטס ונוויס"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"קאנאדה"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"מורש"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"קוריאה הצפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"קוריאה הדרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"צרפתית (שוויץ)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"כווית"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"טוק פיסין"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"איי קיימן"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"קזחסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"קירילי"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"לאוס"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"לבנון"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"סנט לוסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"פיניקית"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"קירילי סלאבוני כנסייתי עתיק"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"גוויצ׳ן"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"גרמנית תחתית"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ליכטנשטיין"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"סרי לנקה"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"אכדית"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"קופטית"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ליבריה"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"לסוטו"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ליטא"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"לוקסמבורג"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"לטביה"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"קטקאנה"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"לוב"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"לדינו"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"וונג׳ו"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"לנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"לאנגי"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"תאנה"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"מרוקו"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"מונקו"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"מולדובה"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"מונטנגרו"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"סן מרטן"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"למבה"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"מדגסקר"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"איי מרשל"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"אלאוט"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"תאי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ספרות ואי"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"מקדוניה הצפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"מאלי"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"מיאנמר (בורמה)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"מונגוליה"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"נווארי"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"מקאו (אזור מנהלי מיוחד של סין)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"איי מריאנה הצפוניים"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"מרטיניק"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"מאוריטניה"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"מונסראט"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"מלטה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"מאוריציוס"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"אלטאי דרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"האיים המלדיביים"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"מלאווי"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"מקסיקו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"לוח השנה היפני"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"מלזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"מוזמביק"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"נמיביה"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"אפריקה שמדרום לסהרה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"לוח השנה העברי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"סדר מיון במילון"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"קלדוניה החדשה"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"ווייד-גיילס, שיטה לתעתוק סינית לאותיות לטיניות"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ניז׳ר"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"האי נורפוק"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ניגריה"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"טרוקו"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ניקרגואה"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"הולנד"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"נורווגיה"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"נפאל"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"נאורו"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ניווה"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"פיניקי"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"רומבו"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"טסימשיאן"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ניו זילנד"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"רומאני"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"טטרית של קרים"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"אנגלית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"עומאן"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"אנג׳יקה"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"קריאולית (סיישל)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"פרסי עתיק"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"פנמה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"לוח השנה המוסלמי האזרחי"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"קשובית"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"פרו"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"פולינזיה הצרפתית"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"פפואה גינאה החדשה"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"הפיליפינים"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"פקיסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"פולין"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"אוונדו"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"סנט פייר ומיקלון"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"איי פיטקרן"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"פוארטו ריקו"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"השטחים הפלסטיניים"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"באלינזי"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"פורטוגל"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"פלאו"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ניאס"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ספרות יווניות קטנות"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"פרגוואי"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"טומבוקה"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"עברי"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"קטאר"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"אנגלית סקוטית סטנדרטית"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ניואן"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"טריטוריות באוקיאניה"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"לזגית"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"העולם"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"צפון אמריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ראוניון"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"דרום אמריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"לוז׳באן"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"אוקיאניה"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"רומניה"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"סרביה"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"רוסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"רואנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"אוגריתי"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ערב הסעודית"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"פונפיאן"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"איי שלמה"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"טסוואק"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"מערב אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"איי סיישל"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"סודן"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"מרכז אמריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"שוודיה"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"מזרח אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ארמית"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"צפון אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"סינגפור"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"סנט הלנה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"סגנון מעבר שורה קשיח"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"מרכז אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"סלובניה"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"דרום יבשת אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"סבאלברד ויאן מאיין"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"אמריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"סלובקיה"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"סיירה לאונה"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"סן מרינו"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"סנגל"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"סומליה"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"אראוקנית"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"אראפהו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ספרות טמיליות מסורתיות"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"סורינאם"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"דרום סודן"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"סאו טומה ופרינסיפה"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"אל סלבדור"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"ערבית - נג׳ד"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"סנט מארטן"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"סוריה"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"יאו"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"אסוואטיני"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"ארוואק"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"יאפזית"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"טריסטן דה קונה"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"אסו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"מערכת מדידה אמריקאית"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"אמריקה הצפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"איי טרקס וקייקוס"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"יאנגבן"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"צ׳אד"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"זאוגיי"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"הטריטוריות הדרומיות של צרפת"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"טוגו"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"תאילנד"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"טג׳יקיסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"האיים הקריביים"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"טימור-לסטה"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ימבה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"חפש לפי העיצור הראשון באותיות הנגול"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"טורקמניסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"תוניסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"טונגה"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"טורקיה"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"טרינידד וטובגו"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"טייוואן"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"אסטורית"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"טנזניה"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"קוואסיו"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"כתב שאינו ידוע"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"אוקראינה"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ארומנית"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"מזרח אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"טובינית"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"סווהילי קונגו"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"דרום אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"האידה"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"דרום־מזרח אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"אוגנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"סינית האקה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"מיון פיניין"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"דרום אירופה"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"האיים המרוחקים הקטנים של ארה״ב"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"האומות המאוחדות"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ארצות הברית"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"הוואית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"מיון סינית מודרנית"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"אורוגוואי"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"פרוסית"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"אוזבקיסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"תמאזיגת של מרכז מרוקו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"סדר מיון לפי ספירת תווים"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"נגיאמבון"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"הוותיקן"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"פרובנסאל עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"סנט וינסנט והגרנדינים"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ונצואלה"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"איי הבתולה הבריטיים"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"איי הבתולה של ארצות הברית"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"וייטנאם"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ונואטו"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"נוגאי"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ראווה"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"\u200fנורדית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"אוסטרלאסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"מערב ארמנית"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"מלנזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"איי ווליס ופוטונה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"מיון מסורתי"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"אזור מיקרונזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"נגומבה"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"לקוטה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"ספרות פיננסיות"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"סדר מיון קודם, עבור תאימות"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"וואלסר"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"סמואה"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ווליאטה"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"וואשו"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"מבטאים חלקיים"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ווראי"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"דו-כיווני חלקי"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"אוואדית"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"פולינזיה"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"קוסובו"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"גוג׳רטי"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"לא כתוב"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"אול צ׳יקי"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"וורלפירי"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"תימן"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"סדר מיון רגיל"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"פנג"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"פאנטי"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"מאיוט"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"דרום אפריקה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"סגנון מעבר שורה גמיש"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"דוואנגרי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ספרות גאורגיות"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"הירגאנה"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"זמביה"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"פיניין, שיטת כתב סיני בתעתיק לטיני"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"זימבבואה"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"אזור לא ידוע"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"רוני"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"מערכת מטרית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"לוח שנה ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"מונגו"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"סותו צפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ספרות טלוגו"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"קריאולית לואיזיאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"לוזית"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"מאקאמה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ספרות פיננסיות סיניות פשוטות"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"היליגאינון"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ספרות הודיות-ערביות מורחבות"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"נואר"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"דקוטה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ספרות ברוחב מלא"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"חתית"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"דרגווה"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"טאיטה"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"מאיה"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"לורית צפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"קופטי"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"נווארית קלאסית"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"אודמורט"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"חמרי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"לוח השנה המוסלמי (ערב הסעודית)"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"סנדאווה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ספרות רומיות"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"סאחה"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"ארמית שומרונית"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"סמבורו"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"סאסק"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"סאנטאלי"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"פרסית יהודית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"מספרי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"ספרות מקומיות"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"נגמבאי"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"גורמוקי"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"לובה-לולואה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"רוחב מלא"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"סאנגו"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"לויסנו"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ניאנקולה"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ניאמווזי"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"לונדה"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ניורו"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"לואו"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"פיליפינית"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"המונג"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"דלאוור"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"מיזו"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"באלוצ׳י"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"סלאבית"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"באלינזית"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"אוגריתית"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"לויה"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"בווארית"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"בסאא"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"במום"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ערבית יהודית"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"נזימה"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"סקוטית"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"סיציליאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"אפארית"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"אבחזית"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"נסתעליק"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"אבסטן"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"אפריקאנס"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"אקאן"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"גומאלה"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"אמהרית"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"אראגונית"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ערבי"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"יפני"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ערבית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"הברתי יפני"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"אסאמית"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"אווארית"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"כורדית דרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"איימארית"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"אזרית"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"בשקירית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"סדר מיון לפי ספירת תווים Radical-Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"בלארוסית"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"בולגרית"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ביסלמה"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"במבארה"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"בנגלית"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"טיבטית"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"דוגריב"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ברטונית"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"בוסנית"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"סנקה"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"מיאנמר"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ספרות של לאוס"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"סנה"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"סלקופ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"קטלאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"קויראבורו סני"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"צ׳צ׳נית"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"צ׳מורו"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"קורסיקנית"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"אודייה"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"קרי"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"צ׳כית"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"סלאבית כנסייתית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"צ׳ובאש"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"וולשית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ספרות אתיופיות"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"דנית"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"גרמנית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"תבנית מטבע רגילה"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"בז׳ה"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"דינקה"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"במבה"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"אירית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"ספרות מונגוליות"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"דיבהי"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"דזונקה"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"בנה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"לוח השנה הסיני"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"זארמה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ספרות יווניות"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"אווה"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"באפוט"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"סגנון מעבר שורה רגיל"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"מולדבית"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"יוונית"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"אנגלית"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"אספרנטו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"מיון סינית מסורתית"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ספרדית"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"אסטונית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"האן עם בופומופו"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"בסקית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"האנגול"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"שילה"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"סורבית עילית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"האן"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"שאן"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"פרסית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"פשוט"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ספרות מערביות"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"מסורתי"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"פולה"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"ערבית צ׳אדית"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"סינית שיאנג"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"פינית"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"פיג׳ית"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"פון"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"באלוצ׳י מערבית"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"קנטונזית"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"פארואזית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"מטבע BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"אומבונדו"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"צרפתית"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"סידאמו"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"פריזית מערבית"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"אירית"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"גאלית סקוטית"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"גליציאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"גוארני"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"בוג׳פורי"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"שפה לא ידועה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"לוח השנה אמטה אלם האתיופי"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"גוג׳ארטי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"לוח השנה המוסלמי האסטרולוגי"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"מאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"האוסה"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"עברית"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"הינדי"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"הופה"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ביקול"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ביני"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"הירי מוטו"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"קרואטית"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"קריאולית (האיטי)"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"הונגרית"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ארמנית"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"הררו"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"צרפתית קייג׳ונית"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"\u200fאינטרלינגואה"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ג׳אמו"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"אינדונזית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ספרות טיבטיות"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"אינטרלינגה"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"איגבו"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"סצ׳ואן יי"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"צרפתית תיכונה"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"אינופיאק"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"צרפתית עתיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"אידו"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"פריזית מזרחית"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"פריזית צפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"איסלנדית"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"איטלקית"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"אינוקטיטוט"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"יפנית"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"דוגרי"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"קום"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"סאמי דרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"יאוואית"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"מדורזית"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"לולה סאמי"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"מאגאהית"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"מאפאה"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"מאיטילית"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"אינארי סאמי"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"גאורגית"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"סיקסיקה"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"מקסאר"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"סינית וו"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"סקולט סאמי"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"מנדינגו"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"קונגו"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"גותי"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"קיקויו"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"מסאית"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"קואניאמה"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"קזחית"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"גרינלנדית"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"חמרית"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"קנאדה"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"קוריאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"קאנורי"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"קשמירית"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"כורדית"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"קומי"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"קורנית"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"קירגיזית"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"סונינקה"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"לטינית"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"לוקסמבורגית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ספרות של מליאלאם"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"גאנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"לימבורגית"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"טיבטי"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"לינגלה"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"פריולית"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"לאו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"מערכת מדידה אימפריאלית"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ליטאית"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"לובה-קטנגה"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"לטבית"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"סוגדיאן"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"מלגשית"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"מרשלית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"סדר מיון Unicode המוגדר כברירת מחדל"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"מאורית"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"מקדונית"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"מונגולית"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"מראטהי"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"מלאית"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"מלטית"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"בורמזית"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ארמני"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"מוקשה"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"מאבא"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"סורבית תחתית"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ארמית רשמית"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"נאורית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"חיפוש למטרה כללית"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"נורווגית ספרותית"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"נדבלה צפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"נפאלית"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"נדונגה"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"מנדאר"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"הולנדית"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"נורווגית חדשה"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"נורווגית"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"נדבלה דרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"נאוואחו"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"קארא-קלפאק"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ניאנג׳ה"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"קצ׳ין"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"קבילה"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"אוקסיטנית"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ג׳ו"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"קמבה"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"מנדה"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"אוג׳יבווה"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"מרו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ספרות ארמניות"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"אורומו"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"קאווי"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"אורייה"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"אוסטית"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"קברדית"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"קריאולית מאוריציאנית"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"סרנאן טונגו"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"פנג׳אבי"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"דואלה"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"סרר"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"קנמבו"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"פאלי"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"פולנית"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"הולנדית תיכונה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"לוח השנה הקוריאני"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"פאשטו"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"פורטוגזית"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"אירית תיכונה"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"סדר מיון"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"טיאפ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"מאקוואה מטו"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"תבנית מטבע"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"בראג׳"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"לוח שנה"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"לאי"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"מטא"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"מערכת של 24 שעות (0\u200e–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"מערכת של 24 שעות (1\u200e–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"סאהו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ספרות של מיאנמר"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"קצ׳ואה"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"זאפוטק"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"בודו"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"מקונדה"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"אתיופי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"מערכת של 12 שעות (\u200e1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"מערכת של 12 שעות (\u200e0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"רומאנש"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"קירונדי"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"מטבע"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"רומנית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ספרות אוריה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ספרות סיניות עשרוניות"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"רוסית"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"אקוסה"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"קנירואנדית"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"בליסימבולס"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"קאבוורדיאנו"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"מיקמק"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"סוקומה"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"סנסקריט"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"סרדינית"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"סוסו"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"סינדהית"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"סמי צפונית"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"מיננגקבאו"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"סנגו"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"סרבו-קרואטית"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"שומרית"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"סלובקית"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"סלובנית"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"סמואית"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"שונה"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"סומלית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ספרות הודיות-ערביות"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"אלבנית"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"סרבית"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}:\u200f {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"סאווזי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"תבנית מטבע למטרות חשבונאות"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"סותו דרומית"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"ג׳אוונזי"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"סונדנזית"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"שוודית"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"סווהילי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ספרות פיננסיות סיניות מסורתיות"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"איביביו"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"איבאן"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"טמילית"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"בוריאט"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"מרכז אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"מערב אסיה"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"טג׳יקית"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"תאית"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"תיגרינית"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"בוגינזית"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"קורו"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"טורקמנית"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"טאגאלוג"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"סוואנה"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"טונגאית"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"בולו"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ג׳ולה פונית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ספרות יפניות"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"טורקית"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"טסונגה"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"קומורית"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"טטרית"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"דיולה"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"טווי"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"טהיטית"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"אירופה"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"מזרח אירופה"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"צפון אירופה"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"דזאנגה"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"מערב אירופה"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"אויגור"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"איטלקי עתיק"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"קוריאני"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"רגיל"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"אוקראינית"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"לוח שנה קופטי"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"אורדו"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"קלמיקית"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"זנאגה"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"אוזבקית"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"קהאסי"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"סקסונית תחתית"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"וונדה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"לוח השנה הטייוואני"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"וייטנאמית"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"קוטאנזית"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"קוירה צ׳יני"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"מחזור השעות (12 או 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"\u200fוולאפיק"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"סירית קלאסית"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"קיצ׳ה"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"גא"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ולונית"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"גגאוזית"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"סורית"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"יווני"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"סינית גאן"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"וולוף"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"תמזיע׳ת מרוקאית תקנית"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ערבית ספרותית"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"גאיו"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"מונגולי"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"מנצ׳ו"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"גבאיה"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"מניפורית"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"לטיני"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"לטיני גאלי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ספרות סיניות פשוטות"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ספרות סיניות מסורתיות"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"קוסה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ספרות רומיות קטנות"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"בלין"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"אוסג׳"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"מדומבה"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"מוהוק"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"קאקו"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"יידיש"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"מוסי"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"סורי"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"יורובה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"ספרות מסורתיות"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"סורי מערבי"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"טורקית עות׳מנית"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"וואי"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"זואנג"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"קלנג׳ין"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"סינית"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"בופומופו"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"סגנון מעבר שורה"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"זולו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"מיון ספר טלפונים"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"מונוטונית"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"גאורגי"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"קימבונדו"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ספרות פיננסיות יפניות"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"צ׳אם"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"געז"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"סורי מזרחי"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"סדר מיון מתוקן"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"טגלוג"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"אמבו"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"כתב חרטומים"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"סינית פשוטה"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"קומי-פרמיאקית"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"הונגרי עתיק"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"קונקאני"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"כתיב גרמני מסורתי"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"קוסראיאן"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"סינית מסורתית"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"קפלה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ספרות חמריות"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"אילוקו"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"קפריסאי"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"מונדאנג"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ספרות גורמוקיות"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"מספר שפות"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"קאדו"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"מערכת מדידה"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"קריק"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"קיריבטית"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"צ׳ירוקי"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"קאריב"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"קאיוגה"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ספרות טמיליות"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"קראצ׳י-בלקר"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"אינגושית"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"דארי"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"קארלית"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"אפיק"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"מספרים"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"קורוק"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"שמבאלה"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"באפיה"_s)
		})
	}));
	return data;
}

LocaleNames_he::LocaleNames_he() {
}

$Class* LocaleNames_he::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_he, name, initialize, &_LocaleNames_he_ClassInfo_, allocate$LocaleNames_he);
	return class$;
}

$Class* LocaleNames_he::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun