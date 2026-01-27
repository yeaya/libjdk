#include <sun/util/resources/cldr/ext/LocaleNames_ha.h>

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

$MethodInfo _LocaleNames_ha_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ha, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ha, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ha_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ha",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ha_MethodInfo_
};

$Object* allocate$LocaleNames_ha($Class* clazz) {
	return $of($alloc(LocaleNames_ha));
}

void LocaleNames_ha::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ha::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_GR, "Girka"_s);
	$var($String, metaValue_ar, "Larabci"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, "Ibrananci"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Alamomi"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Dan Filifin"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Alama ta hoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Sifaniyanci Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Tsibirin Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Haɗaɗɗiyar Daular Larabawa"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afaganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afirkanci"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua da Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Kalandar Etiofic"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angila"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharik"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antatika"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Jafanis"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arjantiniya"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("kalaman Jafananci"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samowa Ta Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asamisanci"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Ostiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Ostareliya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Turanci Amirka"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Tsibirai na Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azarbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijanci"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosniya da Harzagobina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbadas"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangiladas"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgiyom"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusanci"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgariya"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgariyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Baharan"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Binin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"San Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Barmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Burune"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Birazil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Buretananci"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Tsibirin Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Baswana"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Ƙasar Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Lambobin Yaren Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Kalandar Farisa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Lambobin ƙirga na Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Kataloniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Tsibirai Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Jamhuriyar Dimokuraɗiyyar Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Jamhuriyar Afirka Ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Suwizalan"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Aibari Kwas"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Tsibiran Kuku"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Cayile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamaru"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Tsibirin Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Yaren Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kwasta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Cek"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kyuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Tsibiran Kap Barde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Ƙasar Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Tsibirin Kirsmati"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Sifurus"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Jamhuriyar Cak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Lambobin ƙirga na Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Potugis Ƙasashen Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Jamus"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Jamusanci"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Tsibirn Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Tsarin Kudi Nagartacce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Lambobin Tsarin Rubutu na Devangari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danmark"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Rubutun Makafi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Kananan Haruffan Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Jamhuriyar Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Sifaniyancin Latin Amirka"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Kalandar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta da Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Lambobin ƙirga na Girka"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Salo na Raba Layi na Kodayaushe"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misira"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Yammacin Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Girkanci"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Turanci"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritireya"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sipen"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Sifaniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Habasha"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Istoniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han tare da Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Tarayyar Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Yaren Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalandar Gregoria"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Sashin Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Lambobin Yaren Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Sorbianci ta Sama"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Mutanen Han na ƙasar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Farisa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Sauƙaƙaƙƙen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Lambobi na Yammaci"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Na gargajiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlan"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Yaren mutanen Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Tsibiran Falkilan"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikuronesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Harshen Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Tsibirai na Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Yaren Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Faransa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Faransanci"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Frisian ta Yamma"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Dan Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Biritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Pidgin na Najeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Girnada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Kʼabilan Scots Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Jiwarjiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Gini Ta Faransa"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Yankin Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibaraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Grinlan"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Bagalike"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadaluf"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gini Ta Ikwaita"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Harshen da ba a sani ba"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Kudancin Geogia da Kudancin Tsibirin Sandiwic"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatamala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Gwam"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Kurdawa ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Babu abun cikin yare"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Harshen Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Jamusanci Ostiriya"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Babban Yankin Mulkin Hong Kong na Ƙasar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Tsibirin Heard da McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kurowaishiya"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kuroshiyan"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Jamusanci Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitian Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungari"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Harshen Hungari"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armeniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Yare Tsakanin Kasashe"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Tsibiran Canary"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indunusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Harshen Indunusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Lambobin yaren Tibet"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ayalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israʼila"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle na Mutum"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Yankin Birtaniya Na Tekun Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Iraƙi"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Aisalan"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Yaren mutanen Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italiya"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Alamar Lissafi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Lambobin yaren Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Lambobin Yaren Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japananci"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Yaren Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Kasar Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Kalandar Musulunci"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Jafananci"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Lambobin Yaren Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Jamusanci Suwizalan"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Jojiyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Kalandar Buddist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Harshen Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Kwamoras"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Harshen Kimar"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("San Kiti Da Nebis"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Yaren Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Farasanci Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Harshen Koreya"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Koriya Ta Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Koriya Ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdanci"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Farasanci Suwizalan"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kwiyat"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Tsibiran Kaiman"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgizanci"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lawas"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Dan Kabilar Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Labanan"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("San Lusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Lambobin Yaren Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Low German"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Licansitan"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Siri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Yaren Tibet"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Tsarin Awo na Imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituweniya"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituweniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lukusambur"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Litibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latbiyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Tsarin Rubutun Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Yaren Thaana"_s)
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
			$of("Maldoba"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Mantanegara"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("San Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Tsibiran Marshal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Tsarin Rabewa na Dan-maƙalu na Asali"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Macedonia ta Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Dan Masedoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalamci"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Burma, Miyamar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mangoliya"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoliyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Babban Yankin Mulkin Macao na Ƙasar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Tsibiran Mariyana Na Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Maratinci"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Manserati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Harshen Malai"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Harshen Maltis"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Moritus"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldibi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Makasiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Kalandar Jafan"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmanci"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armeniyawa"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Sorbianci ta kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Bincike na Dalilai-Gamagari"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afirka ta Kudancin Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegian Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Kalandar Ibrananci"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoniya Sabuwa"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("North Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijar"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Tsibirin Narfalk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Najeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaraguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holan"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Holanci"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegian Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwe"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nefal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niyu"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nuzilan"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Lambobin ƙirga na Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Odiya"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Turanci Biritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Feru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Folinesiya Ta Faransa"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuwa Nugini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polan"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Harshen Polan"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("San Piyar da Mikelan"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitakarin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Kalandar Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Yankunan Palasɗinu"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashtanci"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Harshen Potugis"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Tsarin Rabewa"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Kananan Haruffa na Girka"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Faragwai"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Harshen Potugis na Birazil"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Yanayin Kudi"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Yan lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Metaʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Tsarin Awowi 24(0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Tsarin Awowi 24(1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Lambobin Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Bakin Teku"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Duniya"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afirka"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Amurka ta Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Rawuniyan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Tsarin Awowi 12(1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Amurka ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Tsarin Awowi 12(0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Osheniya"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Kudin Kasa"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romaniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Sabiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Lambobin Yaren Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Lambobin Gomiya na Yaren ƙasar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rasha"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Rashanci"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Turanci Ostareliya"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudiyya"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Tsibiran Salaman"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afirka ta Yamma"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindiyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Amurka ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suwedan"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Sami ta Arewa"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afirka ta Gabas"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Arewacin Afirka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("San Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Salo na Raba Layi mai Tsauri"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afirka ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sulobeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhalanci"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Kudancin Afirka"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard da Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Nahiyoyin Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Sulobakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Basulke"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Salewo"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Basulabe"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Sanigal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalianci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Lambobi na Larabawan a Gabas"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albaniyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Lambobin ƙirga na Tamil na Alʼada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Sabiyan"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudan ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Tsarin Kudi na Kididdiga"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sawo Tome Da Paransip"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sesotanci"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Harshen Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salbador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Harshen Suwedan"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Harshen Suwahili"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("San Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Sham, Siriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Lambobin Ƙirgan Kudi na Yaren ƙasar Sin na Alʼada"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tritan da Kunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Tsarin Awo na Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Arewacin Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turkis Da Tsibiran Kaikwas"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asiya ta Tsakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Cadi"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Yammacin Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Yankin Faransi ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailan"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinyanci"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Turanci Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karebiyan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Takelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Tukmenistanci"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Ta Gabas"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkumenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonganci"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Lambobin ƙirga na Jafananci"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkiyya"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Harshen Turkiyya"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tirinidad Da Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tubalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturia"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Rubutun da ba sani ba"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Yukaran"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Gabashin Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Gabashin Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Arewacin Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Kudancin Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Yammacin Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Kudu Maso Gabashin Asiya"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Yuganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Ugiranci"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Rubutun Koriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Gama-gari"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Kudancin Turai"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Harshen Yukuren"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Yaren Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Rukunin Tsibirin U.S"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Majalisar Ɗinkin Duniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdanci"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiianci"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Yurigwai"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Ferusawa"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzubekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight na Atlas Tsaka"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Batikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("San Binsan Da Girnadin"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Benezuwela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kalandar kasar Sin"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Tsibirin Birjin Na Birtaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Tsibiran Birjin Ta Amurka"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Harshen Biyetinam"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Zagayen Awowi"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Biyetinam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Banuwatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Tsibarai na Austraila da New Zealand da maƙota"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Tsibirai na New Guinea da Fiji da maƙota"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walis Da Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Yankin Micronesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Daidaitaccen Moroccan Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Larabci Asali Na Zamani"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Na kasar Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Gogewar Kwalwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Gano wani abu ta hanyar amfani da fasaha"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("tsibiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Lambobin ƙirga na Yaren ƙasar Sin wanda aka Sauƙaƙa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Lambobin Ƙirga na Yaren ƙasar Sin na Alʼada"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Bazosa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kasar Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Lambobin Kirga Kanana na Rumawa"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Ba rubutacce ba"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yamal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Daidaitaccen Kasawa"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yaren Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yarbanci"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Sifaniyanci Mesiko"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayoti"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afirka Ta Kudu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Salo na Raba Layi Sakakke"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Harshen Sinanci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Lambobin ƙirga na Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Tsarin Rubutun Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Salo na Raba Layi"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Harshen Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabuwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Yanki da ba a sani ba"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Tsarin Awo na Metric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalandar ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Lambobin yaren Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Lambobin ƙirgan Kudi na Jafananci"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Sauƙaƙaƙƙen Sinanci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Lambobin Ƙirgan Kudi na Yaren ƙasar Sin wanda aka Sauƙaƙa"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkananci"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Fitattun lambobin lissafi na Larabci"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Lambobi masu Cikakken-Faɗi"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Arewacin Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Sinanci na gargajiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Lambobin Yaren Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Lambobi na Tsarin Rubutun Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Yaren Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Harsuna masu yawa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Tsarin Awo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Lambobin Rumawa"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Lambobin Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Lambobi"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Yaren Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_ha::LocaleNames_ha() {
}

$Class* LocaleNames_ha::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ha, name, initialize, &_LocaleNames_ha_ClassInfo_, allocate$LocaleNames_ha);
	return class$;
}

$Class* LocaleNames_ha::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun