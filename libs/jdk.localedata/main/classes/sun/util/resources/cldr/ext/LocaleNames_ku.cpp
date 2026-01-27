#include <sun/util/resources/cldr/ext/LocaleNames_ku.h>

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

$MethodInfo _LocaleNames_ku_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ku, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ku, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ku_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ku",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ku_MethodInfo_
};

$Object* allocate$LocaleNames_ku($Class* clazz) {
	return $of($alloc(LocaleNames_ku));
}

void LocaleNames_ku::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ku::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"erebî"_s);
	$var($String, metaValue_bn, u"bengalî"_s);
	$var($String, metaValue_bo, u"tîbetî"_s);
	$var($String, metaValue_el, u"yewnanî"_s);
	$var($String, metaValue_hy, u"ermenî"_s);
	$var($String, metaValue_ka, u"gurcî"_s);
	$var($String, metaValue_km, u"ximêrî"_s);
	$var($String, metaValue_mn, u"mongolî"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"rîpwarî"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("sembol"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"fîlîpînoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balînî"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"skotî"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicîlî"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afarî"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanuyî"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abxazî"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongî"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetûmî"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emîrtiyên Erebî yên Yekbûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamî"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Efxanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrîkansî"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antîgua û Berbûda"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Ermenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharî"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonî"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antarktîka"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arjentîn"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoaya Amerîkanî"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamî"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awistirya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awistralya"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avarî"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arûba"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymarayî"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerî"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosniya û Herzegovîna"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"başkîrî"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"sebwanoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeş"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belçîka"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"belarusî"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Burkîna Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulgarî"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Behreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Burundî"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bîslamayî"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Bênîn"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint-Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bermûda"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambarayî"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzayî"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brûney"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolîvya"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brazîl"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretonî"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnî"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bûtan"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belarûs"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Belîze"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"salnameya îranî"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalanî"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazenderanî"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo - Kînşasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"çeçenî"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Komara Afrîkaya Navend"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Swîsre"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"çamoroyî"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Peravê Diranfîl"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Giravên Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Şîle"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerûn"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Çîn"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsîkayî"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta Rîka"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"çekî"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kûba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"çuvaşî"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Kîpros"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"weylsî"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Çekya"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danmarkî"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Almanya"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"elmanî"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"açehî"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Cîbûtî"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danîmarka"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Domînîka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Komara Domînîk"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bembayî"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"gorontaloyî"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"divehî"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Cezayir"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"conxayî"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"salnameya çînî"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"kapampanganî"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"papyamentoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonya"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"eweyî"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misir"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahraya Rojava"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palawî"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"çûkî"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"îngilîzî"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marî"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"esperantoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"çerokî"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Erîtrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanya"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"spanî"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiyopya"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estonî"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Yekîtiya Ewropayê"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baskî"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"salnameya gregorî"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"çeyenî"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"sorbiya jorîn"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adîgeyî"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"farisî"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulahî"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Fînlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fînî"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fîjî"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fîjî"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Giravên Malvîn"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mîkronezya"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantonî"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Giravên Feroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ferî"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Fransa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"frensî"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frîsî"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"îrî"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Keyaniya Yekbûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"gaelîka skotî"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gurcistan"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guyanaya Fransî"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Cîbraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grînlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galîsî"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Gîne"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guwaranî"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bojpûrî"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gîneya Rojbendî"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Yewnanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gujaratî"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manksî"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gîne-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klîngonî"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hawsayî"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"soranî"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"îbranî"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindî"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Hondûras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatya"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"xirwatî"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"elmanîşî"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Macaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"mecarî"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"hereroyî"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Giravên Qenariyê"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Îndonezya"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonezî"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Îrlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"napolîtanî"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"îgboyî"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"zazakî"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Îsraêl"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Girava Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindistan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"îdoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Îran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Îslenda"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"îzlendî"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Îtalya"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"îtalî"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"înuîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonî"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"salnameya koçî"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Jamaîka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Urdun"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"aynuyî"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javayî"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurayî"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"samiya înarî"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"blakfotî"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Amerîkaya Latînî"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Qirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboca"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Kirîbatî"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masayî"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"qazaxî"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"kalalîsûtî"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komor"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts û Nevîs"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannadayî"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"koreyî"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Korêya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Korêya Başûr"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"keşmîrî"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdî"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komî"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweyt"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornî"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"tokpisinî"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Giravên Kaymanê"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgizî"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Qazaxistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"kirîlî"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libnan"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luksembûrgî"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"lugandayî"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"lîmbûrgî"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Srî Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"lingalayî"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"friyolî"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"lawsî"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Lîberya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lîtvanya"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"lîtwanî"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lûksembûrg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonya"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"latviyayî"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lîbya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladînoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagasî"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Giravên Marşal"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"marşalî"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"alêwîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorî"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Makedonya"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedonî"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Malî"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malayalamî"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birmanya)"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolya"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Giravên Bakurê Marianan"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Morîtanya"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maratî"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malezî"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltayî"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maurîtius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldîv"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malawî"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Meksîk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"salnameya japonî"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezya"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"burmayî"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mozambîk"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokşayî"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"sorbiya jêrîn"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namîbya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nawrûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norwecî (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"salnameya îbranî"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Kaledonyaya Nû"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nîjer"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalî"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Girava Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nîjerya"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tarokoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Nîkaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holenda"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"holendî"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norwecî (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norwêc"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Naûrû"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niûe"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navajoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nû Zelenda"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabîlî"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksîtanî"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"oromoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"oriyayî"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetî"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"sirananî"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"puncabî"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"diwalayî"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perû"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polînezyaya Fransî"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua Gîneya Nû"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filîpîn"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonya"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polonî"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint-Pierre û Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Giravên Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Porto Rîko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Xakên filistînî"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"peştûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portûgal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugalî"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbukayî"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qeter"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("salname"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"nîwî"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezgînî"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"keçwayî"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Cîhan"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Afrîka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Amerîkaya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Amerîkaya Başûr"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"lojbanî"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Okyanûsya"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"romancî"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"diwîz"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"romanî"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbistan"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rûsya"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rusî"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kînyariwandayî"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverdî"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"mîkmakî"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Erebistana Siyûdî"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"sanskrîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Giravên Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seyşel"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardînî"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sûdan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindhî"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Amerîkaya Navîn"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Swêd"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("samiya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"mînangkabawî"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Afrîkaya Bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Singapûr"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenya"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"kîngalî"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerîka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakya"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovakî"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovenî"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"San Marîno"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoayî"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"şonayî"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalya"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somalî"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"elbanî"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Sûrînam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"sirbî"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sûdana Başûr"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"swazî"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tome û Prînsîpe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sotoyiya başûr"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanî"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"swêdî"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"swahîlî"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sûrî"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swazîlenda"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamîlî"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Giravên Turk û Kaîkos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Çad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telûgûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tacikî"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taylenda"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"tayî"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrînî"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugî"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tacîkistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karîb"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"tirkmenî"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Tîmora-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Tirkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tûnis"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"tswanayî"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongî"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tirkiye"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"tirkî"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"tsongayî"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"komorî"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trînîdad û Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"teterî"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tûvalû"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taywan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"astûrî"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahîtî"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"nivîsa nenas"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Ewropa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ûkrayna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromanî"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Ewropaya Rojhilat"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Ewropaya Rojava"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ûganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"oygurî"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("hevpar"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukraynî"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Neteweyên Yekbûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdûyî"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Dewletên Yekbûyî yên Amerîkayê"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawayî"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Ûrûguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prûsyayî"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ûzbêkistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ozbekî"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"temazîxtî"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatîkan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent û Giravên Grenadîn"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"salnameya Komara Çînê"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"viyetnamî"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Viyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapûkî"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanûatû"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"walonî"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"siryanî"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awistralasya"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis û Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Herêma Mîkronezya"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakotayî"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wolofî"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("erebiya standard"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"warayî"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polînezya"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"latînî"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"xosayî"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ne nivîsandî"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawkî"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"yidîşî"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"yorubayî"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afrîkaya Başûr"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"devanagarî"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zuluyî"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zîmbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("salnameya ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotoyiya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkanî"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hîlîgaynonî"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("luriya bakur"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"îlokanoyî"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurtî"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kîrîbatî"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"hejmarên romî"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"îngûşî"_s)
		})
	}));
	return data;
}

LocaleNames_ku::LocaleNames_ku() {
}

$Class* LocaleNames_ku::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ku, name, initialize, &_LocaleNames_ku_ClassInfo_, allocate$LocaleNames_ku);
	return class$;
}

$Class* LocaleNames_ku::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun