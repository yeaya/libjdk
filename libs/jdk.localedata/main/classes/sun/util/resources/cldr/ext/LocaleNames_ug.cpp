#include <sun/util/resources/cldr/ext/LocaleNames_ug.h>

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

$MethodInfo _LocaleNames_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ug, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ug, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ug",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ug_MethodInfo_
};

$Object* allocate$LocaleNames_ug($Class* clazz) {
	return $of($alloc(LocaleNames_ug));
}

void LocaleNames_ug::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ug::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BD, u"بېنگال"_s);
	$var($String, metaValue_CY, u"سىپرۇس"_s);
	$var($String, metaValue_bo, u"تىبەتچە"_s);
	$var($String, metaValue_el, u"گىرېكچە"_s);
	$var($String, metaValue_gu, u"گۇجاراتچە"_s);
	$var($String, metaValue_ja, u"ياپونچە"_s);
	$var($String, metaValue_jv, u"ياۋاچە"_s);
	$var($String, metaValue_kn, u"كانناداچە"_s);
	$var($String, metaValue_ko, u"كورېيەچە"_s);
	$var($String, metaValue_la, u"لاتىنچە"_s);
	$var($String, metaValue_lo, u"لائوسچە"_s);
	$var($String, metaValue_mn, u"موڭغۇلچە"_s);
	$var($String, metaValue_my, u"بىرماچە"_s);
	$var($String, metaValue_su, u"سۇنداچە"_s);
	$var($String, metaValue_ta, u"تامىلچە"_s);
	$var($String, metaValue_te, u"تېلۇگۇچە"_s);
	$var($String, metaValue_th, u"تايلاندچە"_s);
	$var($String, metaValue_tl, u"تاگالوگچە"_s);
	$var($String, metaValue_got, u"گوتچە"_s);
	$var($String, metaValue_hmn, u"مۆڭچە"_s);
	$var($String, metaValue_men, u"مېندېچە"_s);
	$var($String, metaValue_nqo, u"نىكوچە"_s);
	$var($String, metaValue_peo, u"قەدىمكى پارىسچە"_s);
	$var($String, metaValue_ssy, u"ساخوچە"_s);
	$var($String, metaValue_uga, u"ئۇگارىتىكچە"_s);
	$var($String, metaValue_vai, u"ۋايچە"_s);
	$var($String, metaValue_zbl, u"بىلىس بەلگىلىرى"_s);
	$var($String, metaValue_Hans, u"ئاددىي خەنچە"_s);
	$var($String, metaValue_Hant, u"مۇرەككەپ خەنچە"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"كولىشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ئوگەمچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"مىراندېسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"بەلگە"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ئاتسامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"مارۋارىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"تاي تامچە تام رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"تاگبانۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"گىنىۋا/نىجىۋا شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"قەدىمكى مىسىرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"راجاستانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"پاسپاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"تېمنېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"تېسوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"راپانىيچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"تېرېناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ئاسسېنسىيون ئارىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"تېتۇمچە"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ئاندوررا"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ئەرەب بىرلەشمە خەلىپىلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ئافغانىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ئانتىگۇئا ۋە باربۇدا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ئېفىيوپىيە يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ئانگۋىللا"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ئالبانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ئەرمېنىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"تېڭۋارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ئانگولا"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ئانتاركتىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ئارگېنتىنا"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"پارتىئانچە ئويما خەت"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ئامېرىكا ساموئا"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ئاۋىستىرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ئاۋسترالىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ئارۇبا"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ئامېرىكا ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ئالاند ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"ميېنېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ئەزەربەيجان"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"شەرقىي ئەرمەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"بوسىنىيە ۋە گېرتسېگوۋىنا"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"باربادوس"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"سېبۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(metaValue_BD)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"قۇمۇقچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"بېلگىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"ئوتتۇرا ئەسىر ئېگىزلىك گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"بۇركىنا فاسو"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"بۇلغارىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"بەھرەين"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"بۇرۇندى"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"بېنىن"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ساينت بارتېلېمى"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"بېرمۇدا"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"كۇتەنايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ئېرزاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"بىرۇنېي"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"بولىۋىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"كارىب دېڭىزى گوللاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"بىرازىلىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"باھاما"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"سوگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"بۇتان"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"بوۋېت ئارىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"بوتسۋانا"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"بېلارۇسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"بېلىز"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"كۆرۈنۈشچان تاۋۇش"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"پارىس يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ئىبرانىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"كانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"كوكوس (كىلىڭ) ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"كونگو - كىنشاسا"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ئوتتۇرا ئافرىقا جۇمھۇرىيىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"كونگو - بىراززاۋىل"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"شىۋېتسارىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"كوتې دې ئىۋوئىر"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"كۇك ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"چىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"كاياتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"كامېرون"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"جۇڭگو"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"كولومبىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"كىلىپپېرتون ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"كوستارىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"كۇبا"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"يېشىل تۇمشۇق"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"كۇراچاۋ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"مىلاد ئارىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"بالىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"چېخ جۇمھۇرىيىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ئېكاجۇكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"ئەنئەنىۋى ۋولاپۇكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"گېرمانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"قەدىمكى ئېگىزلىك گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ئاتجېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"چىگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"دېگو-گارشىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"دېۋاناگارىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"جىبۇتى"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"دانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ئاچولىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"گوندىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"برائىل ئەمالار يېزىقى"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"براخمى"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"دومىنىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ئەرەبچە رەقەملەر (كىچىك ھەرپ)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"دومىنىكا جۇمھۇرىيىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"گورونتالوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"مانىپۇرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"زۇنىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"تىگرېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"تاكرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ئالجىرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"پانگاسىنانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"پەھلەۋىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سېيتا ۋە مېلىلا"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"چىبچاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"پامپانگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ئېكۋاتور"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"پاپىيامېنتوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ئاداڭمېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ئېستونىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"تىۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مىسىر"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"غەربىي ساخارا"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"چاغاتايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"پالاۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"چۇكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"چىنۇك-ژارگونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"مارىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"چىپېۋيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"چوكتاۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"چېروكىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ئېرىترىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ئىسپانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ئېفىيوپىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ياۋروپا ئىتتىپاقى"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"ئېلامىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"مىلادىيە يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"چېيېنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"گۇجاراتچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"ئىندۇسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ئادىگېيچە"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"فىنلاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"فىجى"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"فالكلاند ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"مىكرونېزىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"فارو ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"فىرانسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"كپېللېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"توكېلاۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"گرېبوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"داژىنكو ئېلىپبەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ھىندىستان دۆلەت يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"قەدىمكى گىرېكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"گابون"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ۋوتېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"بىرلەشمە پادىشاھلىق"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"گىرېنادا"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"گىرۇزىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"فىرانسىيەگە قاراشلىق گىۋىيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"گۇرنسېي"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"گانا"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"تاي-لەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"جەبىلتارىق"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"ئافرىخىلىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"گىرېنلاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ئوتتۇرا ئەسىر ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"گامبىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"گىۋىنىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"گىۋادېلۇپ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ئېكۋاتور گىۋىنىيەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"گىرېتسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"جەنۇبىي جورجىيە ۋە جەنۇبىي ساندۋىچ ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"گىۋاتېمالا"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"گۇئام"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"گىۋىنىيە بىسسائۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"تىلىنگىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"كىلىنگونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"يېڭى تاي-لەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"گىۋىيانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"مەركىزىي كۇردچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"تىل مەزمۇنى يوق"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"جۇرچېنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ئاۋستىرىيە گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"شياڭگاڭ ئالاھىدە مەمۇرىي رايونى (جۇڭگو)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ھېرد ئارىلى ۋە ماكدونالد ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ھوندۇراس"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"كىرودىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ئاگەمچە"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"گېرمانچە شىۋىتسارىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ئىسلام ھىجرىيە يىلنامەسى (ئۇم ئەلقۇرا)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ھايتى"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ۋېنگىرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"تاماشېكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"كانارى ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ھىندونېزىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"كاياھچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ئىرېلاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ناپولىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"نىديۇكا شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ناماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"سورا سومپېڭ رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"زازاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"تاڭغۇتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ئىسرائىلىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"ئانباتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"مان ئارىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ھىندىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ياۋروپا تەرتىپلەش قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ئەنگلىيەگە قاراشلىق ھىندى ئوكيان تېررىتورىيەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ئىراق"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ئىران"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ئىسلاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ئىتالىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ماتېماتىكىلىق بەلگە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"تايلاندچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"كومپيۇتېر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"بېنگالچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"جېرسېي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ئىسلام ھىجرىيە يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_BD)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"يامايكا"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ئىيوردانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ياپونىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"ئوتتۇرا ئاخىرقى دەۋردىكى فىرانسۇزچە 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ئاينۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"گۇسىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"نياسا توڭانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"كانناداچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"كاياھچە"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"شىۋىتسارىيە ئېگىزلىك گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"بۇددا يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"كېنىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"لاتىن ئامېرىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"قىرغىزىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"كامبودژا"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"كىرىباتى"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"كومورو"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ساينت كىتىس ۋە نېۋىس"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ئىرسىيەت ئاتالغۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"كانادا فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"چاۋشيەن"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"كورېيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"پوللارد تاۋۇشلىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"شىۋىتسارىيە فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"كۇۋەيت"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"توك-پىسىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"كايمان ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"قازاقىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"كىرىل"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"لائوس"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لىۋان"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ساينت لۇسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"فىنىكىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"قەدىمكى چىركاۋ سىلاۋيانچە كىرىل"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"گىۋىچىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"تۆۋەن گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"لىكتېنستېين"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"سىرىلانكا"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"ئاككادچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"كوپتىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"لىبېرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"لېسوتو"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"پەھلىۋىچە كىتابى تىل"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"لىتۋانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"لىيۇكسېمبۇرگ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"لاتۋىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"كاتاكانا"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"سورا سامپىڭ"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"لىۋىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"لادىنوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ۋۇنجوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"لانداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"لانگىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"تاناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ماراكەش"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"موناكو"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"مولدوۋا"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"نۈشۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"قارا تاغ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ساينت مارتىن"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"لامباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ماداغاسقار"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"مارشال ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ئالېيۇتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ۋايچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"شىمالىي ماكېدونىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"مالى"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"بىرما"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"موڭغۇلىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"نېۋارىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ئاۋمېن ئالاھىدە مەمۇرىي رايونى"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"شىمالىي مارىيانا ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"مارتىنىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ماۋرىتانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونتسېررات"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"مالتا"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ماۋرىتىيۇس"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"جەنۇبى ئالتاي تىللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"مالدىۋې"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"مالاۋى"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"مېكسىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ياپونىيە يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"مالايسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"موزامبىك"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"پەھلىۋىچە ئويما خەت"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"نامىبىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"يەھۇدى يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"لۇغەت تىزىش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"يېڭى كالېدونىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"ۋېي ئائىلىسى پىنيىن لاتىنلاشتۇرۇش"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"بىرلىككە كەلگەن تۈزىتىلگەن ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"نىگېر"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"نورفولك ئارىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"نىگېرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"توروكوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"پەھلىۋىچە شېئىرىي تىل"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"نىكاراگۇئا"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(metaValue_hmn)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"گوللاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"نورۋېگىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"نېپال"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ناۋرۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"نيۇئې"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"فىنىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"رومبوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"سىمشيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"يېڭى زېلاندىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"مېتروئىت يازمىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"سىگانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"مېتروئىت"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"قىرىم تۈركچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"قەدىمكى ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ئومان"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ئانگىكاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"پاناما"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ئىسلام ھىجرىيە يىلنامەسى (مەدىنە)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"كاسزۇبىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ئەنگلىيە ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"پېرۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"فىرانسىيەگە قاراشلىق پولىنېزىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"پاپۇئا يېڭى گىۋىنىيەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"فىلىپپىن"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاكىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"پولشا"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ئېۋوندوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ساينت پىيېر ۋە مىكېلون ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"پىتكايرن ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"پۇئېرتو رىكو"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"پەلەستىن زېمىنى"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"بالى"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"پورتۇگالىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"پالائۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"نىئاسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"گىرېكچە رەقەملەر (كىچىك ھەرپ)"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"پاراگۋاي"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"تۇمبۇكاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"ئىبرانىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"قاتار"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"شوتلاندىيە ئۆلچەملىك ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"نيۇئېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ئوكيانىيە ئەتراپىدىكى ئاراللار"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"لېزگىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA تاۋۇشلىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"تاكرىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"تۇۋالۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"تايلاندچە-ۋىيېتنامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"دۇنيا"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"شىمالىي ئامېرىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"رېيۇنىيون"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"جەنۇبىي ئامېرىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"لوجبانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"رېجاڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ئوكيانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"رومىنىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"سېربىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"مروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"رۇسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"رىۋاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"يېڭى تاي-لەچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"مېتېلكو ئېلىپبەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"مانەكېزەمچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"كاروشتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"سەئۇدىي ئەرەبىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"پوناپېئانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"ماندائىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"سولومون ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"شىمالىي سوڭخايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"غەربىي ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"سېيشېل"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"سۇدان"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ئوتتۇرا ئامېرىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"شىۋېتسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"شەرقىي ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ئارامۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"لوماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"شىمالىي ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"سىنگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ساينىت ھېلېنا"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ئوتتۇرا ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"سىلوۋېنىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"جەنۇبىي ئافرىقا رايونى"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"سىۋالبارد ۋە يان مايېن"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ئامېرىكا"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"سىلوۋاكىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"بامۇم"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"ۋولىئاي"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"سېررالېئون"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"سان مارىنو"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"سېنېگال"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"سومالى"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ماپۇدۇنگۇنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ئاراپاخوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ئەنئەنىۋى تامىلچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"سۇرىنام"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"جەنۇبىي سۇدان"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"سان تومې ۋە پرىنسىپې"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"سالۋادور"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"سىنت مارتېن"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"سۇرىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ياۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"سىۋېزىلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"ئاراۋاكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ياپچە"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ترىستان داكۇنھا"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ئاسۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"شىمالىي ئامېرىكا رايونى"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"تۇركس ۋە كايكوس ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ياڭبەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"چاد"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"فىرانسىيەنىڭ جەنۇبىي زېمىنى"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"توگو"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"تايلاند"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"تاجىكىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"كارىب دېڭىزى"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"توكېلاۋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"شەرقىي تىمور"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"يېمباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"كورىيەچە ئۈزۈك تاۋۇش بويىچە ئىزدەش"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"تۈركمەنىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"بۇنتلىڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تۇنىس"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"تونگا"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"زامانىۋى ۋولاپۇكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"تۈركىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"تىرىنىداد ۋە توباگو"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"تۇۋالۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"تەيۋەن"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ئاستۇرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ئورخۇنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"تانزانىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"كۋاسىيوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"يوچۇن يېزىق"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"كۇداۋادچە"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ئۇكرائىنا"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ئارومانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"شەرقىي ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"توۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"كونگو سىۋالىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"جەنۇبىي ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ھەيدەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"شەرقىي جەنۇبىي ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ئۇگاندا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"پىنيىن تىزىش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"جەنۇبىي ياۋروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"سىنخالاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ئا ق ش تاشقى ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ئامېرىكا قوشما ئىشتاتلىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ھاۋايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"ئاكادېمىك"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ئاددىي خەنچە تىزىش تەرتىپى - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ئۇرۇگۋاي"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ئۆزبېكىستان"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"مەركىزىي ئاتلاس تامازايتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"سىزىق بويىچە تەرتىپلەش"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"نگېمبۇنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ۋاتىكان"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"قەدىمكى پروۋېنچالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ساينت ۋىنسېنت ۋە گىرېنادىنېس"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ۋېنېسۇئېلا"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ئەنگلىيە ۋىرگىن ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ئا ق ش ۋىرگىن ئاراللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ۋىيېتنام"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ۋانۇئاتۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"نوغايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"رىۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"قەدىمكى نورۋېگچە"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ئاۋسترالئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"غەربىي ئەرمەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"مېلانېسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ۋاللىس ۋە فۇتۇنا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ئەنئەنىۋى تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"مىكرونېزىيە رايونى"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"نگومباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"خېپبۇرن لاتىنلاشتۇرۇش"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ۋالسېرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ساموئا"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"باسسا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"مانىپۇرىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ۋولايتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ۋاشوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ۋارايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ئاۋادىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"پولىنىزىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"ئۆلچەملىك ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"كوسوۋو"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"بىراخمىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"يېزىلمىغان"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ئول-چىكىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"باتاك"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"يەمەن"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ئۆلچەملىك تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"فاڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"رېسىيان"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"فانتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ئىشارەت تىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"مايوتى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"چامچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"جەنۇبىي ئافرىقا"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"سۇنداچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"دېۋاناگارى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"گىرۇزىنچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"ترانسكرىپسىيە تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"خىراگانا"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"زامبىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"پىنيىن لاتىنلاشتۇرۇش"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"زىمبابۋې"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"يوچۇن جاي"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"رۇنىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"مونگوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"شىمالىي سوتوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"تېلۇگۇچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"لوزىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"ناشىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ماچامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ئاددىي خەنچە پۇل-مۇئامىلە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"خىلىگاينونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"كېڭەيتىلگەن ئەرەبچە-ھىندىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"مۇئېرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"داكوتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"تولۇق كەڭلىكتىكى رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"خىتتىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"دارگىۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"تايتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"ماياچە تەسۋىرىي يېزىق"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"كوپتىك"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"نېۋارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ئۇدمۇرتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"كېخمېرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ئىسلام ھىجرىيە يىلنامەسى (سەئۇدى ئەرەبىستان ئاي)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"لىمبۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"سانداۋېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"رىم رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ساخاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"شاراداچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"سامارىتانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"سىكاۋۇز"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"سامبۇرۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ساساكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"سانتالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"تىفىناغچە"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ئىبرانى پارسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"نگامبايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گۇرمۇكىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"ئالۇكۇ شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"لۇبا-لۇئاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"سانگۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"لۇيسېنگوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"نىيانكولېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"نيامۋېزىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"لۇنداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"نىئوروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"لۇئوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(metaValue_hmn)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"فىلىپپىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"دېلاۋارېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"مىزوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"بېلۇجىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"سلاۋچە"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"بالىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"لۇياچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"باساچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"بامۇنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ئىبرانى ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ياۋروپا ئىسپانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"نىزەماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"شوتلاندىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"سىتسىلىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"ئافارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ئابخازچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"ئاۋېستاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ئافرىكانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ئاكانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"چاكماچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"گومالاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ئامھارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ئاراگونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ئەرەب"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"سىتولۋىززا/سولبىكا شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ياپونچە خىراگانا ياكى كاتاكانا"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ئاسامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"سىزىقلىق A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ئاۋارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"سىزىقلىق B"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ئايماراچە"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ئەزەربەيجانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"خوجكىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"ئوسېئاككو/ئوسوجەن شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"باشقىرتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"يان بۆلەك سىزىق بويچە تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"بېلارۇسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"بۇلغارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"بىسلاماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"ياۋاچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"بامباراچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"بېنگالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"دوگرىبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"بىرېتونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"بوسىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"سېكنېكاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"لائوسچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"سېناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"سېلكاپچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"كاتالانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"شەرقىي سوڭخايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"چېچىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"چامورروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"تۈزىتىلگەن ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"كورسۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ئورىياچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"كرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"چېخچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"قەدىمكى سلاۋيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"چۇۋاشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ۋېلشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ئېفىيوپىيەچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"يىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"دانىشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ياۋروپا پورتۇگالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"گېرمانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"بېجاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"دىنكاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"بۇگى"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"بېمباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"قەدىمكى ئىرېلاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"موڭغۇلچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"دىۋېخچە"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"لاتىن ئامېرىكا ئىسپانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"زوڭخاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"بېناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"دېھقانلار يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"فراسېرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"زارماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"گىرېكچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ئېۋېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"بافۇتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ئېسپرانتوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"مۇرەككەپ خەنچە تىزىش تەرتىپى - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ئىسپانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ئېستونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"باسكىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"بۇخىت"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"سامارىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"شىلخاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ئۈستۈن سوربچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"خەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"شانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"خانۇنۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"پارسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"غەربچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"فۇلاھچە"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"چاد ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"فىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"فىجىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"فونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"گۇاڭدوڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فائېروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ئۇمبۇندۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"سىداموچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"غەربىي فىرسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ئىرېلاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"شوتلاندىيە گايلچىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"گالىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"گۇئارانىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"بوجپۇرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"يوچۇن تىل"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ئېفىيوپىيە ئامېتې ئالېم يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ئىسلام ھىجرىيە يىلنامەسى (ئاسترونومىيە دەۋرى)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"مانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"ئوسمانىيە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"خائۇساچە"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ئىبرانىيچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ھىندىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"خۇپاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"بىكولچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"بىنىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ھىرى موتۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"كىرودىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ھايتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ۋېنگىرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ئەرمېنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"خېرېروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"IPA تاۋۇشلىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ئارىلىق تىل"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ھىندونېزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"تىبەتچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ئىنتىرلىڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ئىگبوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"يىچە (سىچۈەن)"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"ئوتتۇرا ئەسىر فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ئىنۇپىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"قەدىمكى فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ئىدوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"شەرقى فىرىزيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"شىمالى فىرىزيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ئىسلاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ئىتالىيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ئىنۇكتىتۇتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"مالايامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"قەدىمكى جەنۇبى ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"ساراتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"دوگرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"لەپچاچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"كومچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"جەنۇبىي سامىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"شاۋىيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"مادۇرېسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"لۇلې سامىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ماگاخىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"مافاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"مايتىلىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ئىنارى سامىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"گىرۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"سىكسىكاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ماكاسارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"سكولت سامىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"ماندىنگوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"كونگوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"كىكۇيۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ماسايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"كىۋانياماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"قازاقچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"گىرېنلاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"كىمېرچە"_s)
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
			$of(u"كانۇرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"كەشمىرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"كىرسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"لەپچاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"ئاۋېستا"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"كۇردچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"كومىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"كورنىشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"قىرغىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"سونىنكەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"لىيۇكسېمبۇرگچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"مالايالامچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"گانداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"روڭگوروڭگو"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"لىمبۇرگچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"لىنگالاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"فىرىئۇلىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"تاي تامچە خورا رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"لىتۋانىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"لۇبا-كاتانگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"لاتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"سوغدىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}، {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"مالاگاسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"مارشالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"كۆڭۈلدىكى يۇنىكود تىزىش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ماۋرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ماكېدونچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"مالايالامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ماراتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"مالايچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"مالتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"سائۇراشتىراچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ئەرمەن"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"موكشاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"ماباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"تۆۋەن سوربچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"خان جەمەتى ئارامۇ"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"ناۋرۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ئادەتتىكى ئىزدەش"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"نورۋىگىيە بوكمالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"شىمالى ندەبەلەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"نېپالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ندونگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"ماندارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"گوللاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"يېڭى نورۋېگچە"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"نورۋېگچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"جەنۇبى ندەبەلەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ناۋاخوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"قارا-قالپاقچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"نىيانجاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"كاچىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"كابىلېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"پولىتونىك"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ئوكسىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"جۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"كامباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"دەسلەپكى مەزگىلدىكى زامانىۋى ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ئوجىبۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"مېرۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ئەرمەنچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ئوروموچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"كاۋىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ئودىياچە"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ئوسسېتچەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC لاتىنلاشتۇرۇش، 1997 نەشرى"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"كاباردەيچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"مورىسيېنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"سىرانان-توڭوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پەنجابچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"دۇئالاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"سېرېرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"رېسىياننىڭ لىپوۋاز شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"كانېمبۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"پالىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"پولەكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"ئوتتۇرا گوللاندىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"سائۇراشتىراچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"دانگى يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پۇشتۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"پورتۇگالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ئوتتۇرا ئەسىر ئىرېلاندچە"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"بىرازىلىيە پورتۇگالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"بوخورىچ ئېلىپبەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"تياپچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ماكۇۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"نىكوچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"بىراجچە"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"يىلنامە"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"مېتاچە’"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"بېرماچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"كېچىۋاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"زاپوتېكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"بودوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"لانناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ماكوندېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ئېفىيوپىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"رومانسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"رۇندىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"پۇل"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"رومىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ئورىياچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"خەنچە ئونلۇق رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"رۇسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"ئاكۇسچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"كېنىيەرىۋانداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"كابۇۋېردىيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"مىكماكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"سۇكۇماچە"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ئاۋسترالىيە ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"دۇپلويان تېز خاتىرىلەش"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"سانسكرىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"بىرلىككە كەلگەن ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ساردىنىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"سۇسۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"سىندىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"شىمالىي سامىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"مىناڭكابائۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"سانگوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"سېرب-كرودىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"سىنگالچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"سۈمەرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"سىلوۋاكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"سىلوۋېنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"گىرانتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ساموئاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"شوناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"سومالىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ئەرەبچە-ھىندىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ئالبانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"سېربچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"سىۋاتىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"سوتوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"ناتىسون شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"شىۋېدچە"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"سىۋاھىلچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"مۇرەككەپ خەنچە پۇل-مۇئامىلە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ئىبىبىئوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ئىبانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"بۇرىياتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ئوتتۇرا ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"غەربىي ئاسىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"تاجىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"تىگرىنياچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"بۇگىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"كوروچە"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"كانادا ئىنگلىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"تۈركمەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"سىۋاناچە"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"تونگانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"بۇلۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"جولاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ياپونچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"تۈركچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"سونگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"كومورىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"چاكما"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"تاتارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"دىيۇلاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"تىۋىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"تاختىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"سان گىيورگىيو/بىلا شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ياۋروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"شەرقىي ياۋروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"شىمالىي ياۋروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"دازاگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"غەربىي ياۋروپا"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ئۇيغۇرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"قەدىمكى ئىتاليانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ئورتاق"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ئۇكرائىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"كوپتىك يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ئوردۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"ئۆلچەملەشتۈرۈلگەن رېسىيان ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"قالماقچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"زېناگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ئۆزبېكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"كاسىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"گېرمانچە ئىملا قائىدىسى 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"سىيولوتى-ناگرىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ۋېنداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"ۋاراڭ كىشىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"مىنگو يىلنامەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ۋىيېتنامچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"خوتەنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"كويرا چىنىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"تاراسكىۋىتسا ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ۋولاپۇكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"قەدىمىي سۇرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ئوسمانيە"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"گاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ۋاللۇنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"سۇرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"لىدىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"سۇمېر-ئاككادىيان مىخ خەت"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ۋولوفچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ئۆلچەملىك ماراكەش تامازىتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ھازىرقى زامان ئۆلچەملىك ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"بىرلىككە كەلگەن كانادا يەرلىك بوغۇم جەدۋىلى"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"گايوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"مانجۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"فىراكتۇر لاتىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"ئاناتولىيە تەسۋىرىي يېزىق"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"گىباياچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"مانىپۇرچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"سىكوت لاتىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ئاددىي خەنچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"مۇرەككەپ خەنچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"خوساچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"رىم رەقەملەر (كىچىك ھەرپ)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بىلىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"پاماكا شىۋەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"لىسىيانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ئوساگېلارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"مېدۇمباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"كورىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"موخاۋكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"كاكوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"دەسلەپكى مەزگىلدىكى زامانىۋى فىرانسۇزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"يىددىشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"موسسىچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"سۈرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"دېزېرېت"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"يورۇباچە"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"مېكسىكا ئىسپانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"غەربىي سۈرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ئوسمان تۈركچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"سۈرىيەچە ئەبجەت"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"جۇاڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"كارىيا"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"كالېنجىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"خەنزۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"ئافاكا"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"خەنچە پىنيىن"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"قەدىمكى پېرمىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"زۇلۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"تېلېفون نومۇر تىزىش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"ئاددىي"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"گىرۇزىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"شاراداچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"كىمبۇندۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ياپونچە پۇل-مۇئامىلە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"چام"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"گىزچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"شەرقىي سۈرىيەچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"بېرما شانچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"قەدىمكى شىمالىي ئەرەبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"ئول-چىكىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ياخشىلانغان تەرتىپلەش تەرتىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"دېموتىكچە مىسىر"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"خىيەراتىكچە مىسىر"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"پالمىراچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ئېمبۇچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"تەسۋىرىي يېزىق مىسىر"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"خۇتسۇرى گىرۇزىنچە"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(metaValue_Hans)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"قەدىمكى ماجارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"كونكانچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ئەنئەنىۋى گېرمانچە ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"كوسرايېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"لىمبۇچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"كىپەللېچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"كېخمېرچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"تىرخۇتاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ئىلوكانوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"ۋالېنسىيە"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"بىرلىككە كەلگەن تۈرك لاتىن ئېلىپبەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"مۇنداڭچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"گۇرمۇكىچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"كۆپ تىللار"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"كاددوچە"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"كىرىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"گىلاگوتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"گىلبېرتچە"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"ئورتاق ئىملا قائىدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"چېروكى"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"كارىبچە"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"كايۇگاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"تامىلچە رەقەملەر"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"قاراچاي-بالقارچە"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ئىنگۇشچە"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"كارەلچە"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ئېفىكچە"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"سان"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"كۇرۇخچە"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"شامبالاچە"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"بافىياچە"_s)
		})
	}));
	return data;
}

LocaleNames_ug::LocaleNames_ug() {
}

$Class* LocaleNames_ug::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ug, name, initialize, &_LocaleNames_ug_ClassInfo_, allocate$LocaleNames_ug);
	return class$;
}

$Class* LocaleNames_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun