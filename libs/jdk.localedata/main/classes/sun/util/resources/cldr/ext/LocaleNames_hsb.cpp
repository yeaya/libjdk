#include <sun/util/resources/cldr/ext/LocaleNames_hsb.h>

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

$MethodInfo _LocaleNames_hsb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hsb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hsb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hsb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hsb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hsb_MethodInfo_
};

$Object* allocate$LocaleNames_hsb($Class* clazz) {
	return $of($alloc(LocaleNames_hsb));
}

void LocaleNames_hsb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hsb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, "gujarati"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbole"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipinšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"europska španišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afaršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abchazišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Zjednoćene arabske emiraty"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"flamšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikaanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopiska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanska"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenska"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabsce"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japansce"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentinska"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arabšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Ameriska Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asamšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awstriska"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstralska"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"awaršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ameriska jendźelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"aymaršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajdźan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajdźanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosniska a Hercegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškiršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeš"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"běłorušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bołharska"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bołharšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislamšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibetšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibiska Nižozemska"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazilska"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretonšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("burmasce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laoske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Běłoruska"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persiska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebrejske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyra senni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centralnoafriska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Šwicarska"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"čamoršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chilska"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clippertonowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"čěšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Hodowna kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypern"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"walizišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Čěska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"danšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"europska portugalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Němska"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"němčina"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dźibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danska"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braillowe pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"armenske cyfry, małe pisane"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanska republika"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"gotšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"łaćonskoameriska španišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeriska"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("chinska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("grjekske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estiska"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyptowska"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Zapadna Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldawšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"grjekšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"jendźelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"choctawšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Španiska"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"španišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopiska"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europska unija"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baskišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregorianska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tašelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarati-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"hornjoserbšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("chinsce"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"persišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("zjednorjene"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("arabske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradicionalne"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finska"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidźi"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidźišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"färöšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilsce"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francoska"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francošćina"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"frizišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"iršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Zjednoćene kralestwo"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"šotiska gelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgiska"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francoska Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grönlandska"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galicišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambija"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekwatorialna Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"njeznata rěč"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grjekska"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Južna Georgiska a Južne Sandwichowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gineja-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"žadyn rěčny wobsah"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrejšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"awstriska němčina"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Wosebita zarjadniska cona Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heardowa kupa a McDonaldowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorwatska"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"chorwatšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"aghemšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"šwicarska němčina"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Madźarska"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"madźaršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"armenšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneska"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonešćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irska"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indiska"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britiski teritorij w Indiskim oceanje"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandska"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italska"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuitšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thailandske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malayalamsce"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalsce"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"južnosamišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannadske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lule-samišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"šwicarska wysokoněmčina"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"inari-samišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"georgišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhistiska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"skolt-samišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenija"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Łaćonska Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodźa"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masaišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazachšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"gröndlandšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"khmeršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannadšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannadsce"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"kanadiska francošćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"korejšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Sewjerna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Južna Koreja"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmiršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"šwicarska francošćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmanske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kirgišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyrilisce"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"łaćonšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"luxemburgšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalamske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"gandšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"delnjoněmčina"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("tibetsce"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laošćina"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberija"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litawska"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litawšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburgska"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letiska"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"letišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libyska"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldawska"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malagassišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("thailandsce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"rjadowanski slěd po Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maoršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedonšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malajamšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolska"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongolšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Wosebita zarjadniska cona Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Sewjerne Mariany"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mawretanska"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maratišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediwy"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("japanska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzija"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"burmašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armensce"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"delnjoserbšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibija"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naurušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"powšitkowne pytanje"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norwegšćina (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"židowska protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nowa Kaledoniska"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("sewjero-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkowa kupa"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigerija"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Nižozemska"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"nižozemšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norwegšćina (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegska"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norwegšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaho"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nowoseelandska"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabylšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcitanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"anglosakšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armenske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"orijšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"mauriciska kreolšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandźabšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"britiska jendźelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Francoska Polyneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuwa-Nowa Gineja"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipiny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pólska"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"pólšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnowe kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi-protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinski awtonomny teritorij"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paštunšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"rjadowanski slěd"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"grjekske cyfry, małe pisane"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brazilska portugalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrejsce"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("protyka"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laosce"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmaske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Wonkowna Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"swět"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"saterfrizišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopisce"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Sewjerna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Južna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"kirundišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"měna"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunska"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumunšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oriya-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"chinske decimalne ličby"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Ruska"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"rušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverdšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"awstralska jendźelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Sawdi-Arabska"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomony"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("zapadna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelle"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardinšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindhišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Srjedźna Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Šwedska"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"sewjerosamišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("wuchodna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("sewjerna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"serbochorwatšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"srjedźna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Słowjenska"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"singhalšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"južna Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Słowakska"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"słowakšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"słowjenšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šonašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalija"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somališćina"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"arawkanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arabsko-indiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albanšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tradicionalne tamilske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"serbišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Južny Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé a Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"južnosotšćina (Sesotho)"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundanezišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"šwedšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"suahelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syriska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradicionalne chinske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziska"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamilšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("pare"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("sewjerny ameriski kontinent"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("kupy Turks a Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("centralna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("zapadna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francoski južny a antarktiski teritorij"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadźikšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailandska"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thailandšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrinšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"buginezišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadźikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"kanadiska jendźelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibika"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmenšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmeniska"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkowska"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turkowšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad a Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tataršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahitišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansanija"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("njeznate pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("wuchodna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("wuchodna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("sewjerna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kongoska suahelšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"južna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("zapadna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("juhowuchodna Azija"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujguršćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korejsce"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"powšitkowne"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"južna Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrainšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("singhalsce"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ameriska Oceaniska"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Zjednoćene narody"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Zjednoćene staty Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"hawaiišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"prušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbekšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamazight (srjedźny Marokko)"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikanske město"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent a Grenadiny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("protyka republiki China"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britiske knježniske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Ameriske knježniske kupy"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"walonšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagauzišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Awstralazija"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("grjeksce"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneziska (kupowy region)"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"moderna wysokoarabšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolsce"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polyneziska"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"łaćonsce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("zjednorjene chinske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradicionalne chinske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosowo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"romske cyfry, małe pisane"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("bjez pisma"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawkšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standardowy rjadowanski slěd"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorubašćina"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"mexiska španišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Južna Afrika (Republika)"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chinšćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambija"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zulušćina"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("njeznaty region"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgisce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("protyka po iso-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chinšćina (zjednorjena)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"permska komišćina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("zjednorjene chinske financne cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"rozšěrjene arabsko-indiske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"połnošěroke cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chinšćina (tradicionalna)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmerske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi-cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khmersce"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("romske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ličby"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_hsb::LocaleNames_hsb() {
}

$Class* LocaleNames_hsb::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hsb, name, initialize, &_LocaleNames_hsb_ClassInfo_, allocate$LocaleNames_hsb);
	return class$;
}

$Class* LocaleNames_hsb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun