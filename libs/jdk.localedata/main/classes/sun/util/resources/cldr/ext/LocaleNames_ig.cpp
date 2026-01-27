#include <sun/util/resources/cldr/ext/LocaleNames_ig.h>

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

$MethodInfo _LocaleNames_ig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ig, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ig, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ig",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ig_MethodInfo_
};

$Object* allocate$LocaleNames_ig($Class* clazz) {
	return $of($alloc(LocaleNames_ig));
}

void LocaleNames_ig::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ig::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Jamanị"_s);
	$var($String, metaValue_RO, "Romania"_s);
	$var($String, metaValue_lo, u"Laọ"_s);
	$var($String, metaValue_or, u"Ọdịa"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_te, u"Telụgụ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"Sangụ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Colognịan"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Nyakọle"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Akara"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Fịlịpịnọ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Emojị"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Lụyịa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Spanishi ndị Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Tesọ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension Island"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua na Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Kalịnda Etopịa"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amariikị"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Mkpụrụ Okwu Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Arabiikị"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"mkpụrụ ọkwụ Japanịsị"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("American Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Bekee ndị America"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Agwaetiti Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Azerbajanị"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia & Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Cebụanọ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Belarusianụ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bọlụgarịa"_s)
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
			$of("BJ"_s),
			$of("Binin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Barthélemy Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bemuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
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
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Sọga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Agwaetiti Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Ọnụ ọgụgụ Laọ"_s)
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
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Kalịnda Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Ọnụ ọgụgụ Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Agwaetiti Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mazandaranị"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"Kọyraboro Senị"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Central African Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Agwaetiti Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Kọsịan"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Agwaetiti Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Cheekị"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurakao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Agwaetiti Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wesh"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Ọnụ ọgụgụ Etọpịa"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Danịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Asụsụ Portuguese ndị Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Ụsọrọ egọ nzụgbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Ọnụ ọgụgụ Devanagarị"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Braịlle"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ọbere ọnụ ọgụgụ Armenịan"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominican Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Spanishi ndị Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Dọzngọka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kalịnda Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta & Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Ọnụ ọgụgụ Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Akara akanka nkwụsị kwesịrị"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Ọdịda Anyanwụ Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Giriikị"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Bekee"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Ndị Esperantọ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cheroke"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanishi"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Ndị Estọnịa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han na Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Otu nzukọ mba Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Mkpụrụ ọkwụ Hangụl"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalenda Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Gburugburu Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Tachịkịt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Ọnụ ọgụgụ Gụjaratị"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Ụpa Sọrbịa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Mkpụrụ ọkwụ Han"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Peshianụ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Nke dị mfe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ọnụ Ọgụgụ Mpaghara Ọdịda Anyanwụ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Izugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fula"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Fịnịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Agwaetiti Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Katọnịse"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Agwaetiti Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Farọse"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Tamịl"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Fụrenchị"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Westan Frịsịan"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Ịrịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Pidgịn"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Sụkọtịs Gelị"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frenchi Guiana"_s)
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
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galịcịan"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorial Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Asụsụ amaghị"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greece"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia na Agwaetiti South Sandwich"_s)
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
			$of(u"Gụaratị"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Mansị"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
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
			$of("zxx"_s),
			$of(u"Ndị ọzọ abụghị asụsụ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hindị"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Jaman ndị Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Agwaetiti Heard na Agwaetiti McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Kọrọtịan"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("German Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Hati"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haịtịan ndị Cerọle"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Hụngarian"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Intalịgụa"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Agwaetiti Kanarị"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Jamọ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonisia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Ọnụ ọgụgụ Tịbeta"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
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
			$of(u"Sịchụayị"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("British Indian Ocean Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Icịlandịk"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Italịanu"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Mkpụrụ ọkwụ Mgbakọ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Ọnụ ọgụgụ Taị"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Ọnụ ọgụgụ Bang"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japaniisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayala"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Kalịnda Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Mkpụrụ ọkwụ Bangla"_s)
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
			$of("Java"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Gụshị"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Ọnụ ọgụgụ Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Jaman Izugbe ndị Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Maịtịlị"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Inarị Samị"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Geọjịan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Kalịnda Bụddịst"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Kịkụyụ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Masaị"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazak"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Kalaalịsụt"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comorosu"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Keme"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Kitts na Nevis Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kanhada"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannaada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Fụrench ndị Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Korịa"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Ugwu Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("South Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kashmịrị"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Ndị Kụrdịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Fụrench ndị Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Kọnịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Agwaetiti Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kyrayz"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Mkpụrụ Okwu Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Latịn"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Lụxenbọụgịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Lucia Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Ọnụ ọgụgụ Malayala"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Lowa German"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Tịbeta"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Lịngala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Frụlịan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Ụsọrọ Mmeshọ ịmperịa"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituanian"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"Lịba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latviani"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"Vụnjọ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Langị"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Taa"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Morocco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
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
			$of("MF"_s),
			$of(u"Martin Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagasị"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Agwaetiti Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Maọrị"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("North Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Masedọnịa"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Mọngolịan"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Agwaetiti Northern Mariana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Maratị"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleyi"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Matịse"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivesa"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Kalịnda Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Bụrmese"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Mkpụrụ ọkwụ Armenịan"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Lowa Sorbịan"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Ọchụchụ nịle"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Sub-Saharan Afrịka"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Nọrweyịan Bọkmal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Kalịnda Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Nọrtụ Ndabede"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Agwaetiti Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Naịjịrịa"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Dọchị"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Nọrweyịan Nynersk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norway"_s)
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
			$of("rof"_s),
			$of(u"Rọmbọ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
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
			$of(u"Merụ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Ọnụ ọgụgụ Armenịan"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Ọromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Osetik"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Mọrịsye"_s)
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
			$of(u"Dụala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Bekee ndị United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Frenchi Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Poliishi"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Ewọndọ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Pierre na Miquelon Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Agwaetiti Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Kalịnda Dang"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Pashọ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Pọrtụgụese"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Ụsọrọ Nhazị"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Ọbere ọnụ ọgụgụ Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Pọrtụgụese ndị Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Makụwa Metọ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Mkpụrụ ọkwụ Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Ụsọrọ egọ"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalịnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Ụsọrọ Oge okịrịkịrị 24"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Ụsọrọ Ọge okịrịkịrị 24"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Ọnụ ọgụgụ Myamar"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Outlying Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Qụechụa"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"Bọdọ"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Makọnde"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Uwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Mkpụrụ ọkwụ Etọpịa"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Mpaghara Ugwu Amerịka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Ụsọrọ Oge okịrịkịri 12"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Mpaghara Mgbada Ugwu America"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Ụsọrọ Ọge ọkịrịkịri 12"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rọmansị"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"Rụndị"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Egọ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Ọnụ ọgụgụ Ọdịa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Ọnụ ọgụgụ ntụpọ Chịnese"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rụssịa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Rọshian"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Kabụverdịanụ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Bekee ndị Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Sansịkịt"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Agwaetiti Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawa"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Mpaghara Ọdịda Anyanwụ Afrịka"_s)
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
			$of(u"Sịndh"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Etiti America"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Nọrtan Samị"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Mpaghara Ọwụwa Anyanwụ Afrịka"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Mpaghara Ugwu Afrịka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Sangọ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Akara akanka nkwụsị sịrị ịke"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Etiti Afrịka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Mpaghara Mgbada Ugwu Afrịka"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerịka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slova"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Slovịan"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Samọa"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Shọna"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Ọnụ ọgụgụ Arab na Indị"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Ọnụ ọgụgụ ọdịnala Tamịl"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Sebịan"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("South Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Ụsọrọ akantụ egọ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé & Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Sọụth Soto"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Sụwidiishi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Ọnụ ọgụgụ akantụ ọdịnala Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Asụ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Ụsọrọ Mmeshọ US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Mpaghara Ugwu America"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Agwaetiti Turks na Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Etiti Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Mpaghara Ọdịda Anyanwụ Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Ụmụ ngalaba Frenchi Southern"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tajịk"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Taị"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tịgrịnya"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Bekee ndị Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Onye Carrabean"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Turkịs"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tọngan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"Jọla-Fọnyị"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Ọnụ ọgụgụ Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Tọkiishi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad na Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tata"_s)
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
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Kwasịọ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Mkpụrụ okwu amaghị"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Mpaghara Ọwụwa Anyanwụ Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Mpaghara Ọwụwa Anyanwụ Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Mpaghara Ugwu Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Mpaghara Mgbada Ugwu Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Mpaghara Ọdịda Anyanwụ Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Mpaghara Mgbada Ugwu Asia dị na Ọwụwa Anyanwụ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Ụyghụr"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"kọmọn"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Mpaghara Mgbada Ugwu Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ukureenị"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Obere Agwaetiti Dị Na Mpụga U.S"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Mba Ụwa Jikọrọ Ọnụ"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Urdụ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("United States"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaịlịan"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Prụssịan"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Ụzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Nglembọn"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican City"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Vincent na Grenadines Dị nsọ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kalịnda repụblic nke China"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Agwaetiti British Virgin"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Agwaetiti Virgin nke US"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamisi"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Kọyra Chịnị"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Ọge ọkịrịkịrị"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapụ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Mkpụrụ ọkwụ grịk"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mpaghara Micronesian"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Ngọmba"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Wolọf"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Wasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Ụdị Arabiikị nke oge a"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Mọngọlịan"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Manịpụrị"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Ọnụ ọgụgụ mfe Chịnese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Ọnụ ọgụgụ ọdinala chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Xhọsa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Ọbere Ọnụ ọgụgụ Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Mkpụrụ ọkwụ Gụjaratị"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Edeghị ede"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Kakọ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Usoro Nhazi"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Yịdịsh"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Spanishi ndị Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Val"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Akara akanka nkwụsị esịghị ịke"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Kalenjịn"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Mkpụrụ ọkwụ Devangarị"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chainisi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Ọnụ ọgụgụ Geọjịan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Mkpụrụ okwụ Hịragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Mkpụrụ ọkwụ Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Akara akanka nkwụsị"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Mpaghara Amaghị"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Mkpụrụ ọkwụ Geọjịan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Ụsọrọ Metịrịk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalenda ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Ọnụ ọgụgụ Telụgụ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Ọnụ ọgụgụ akantụ Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Ebụm"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Asụsụ Chinese dị mfe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Ọnụ ọgụgụ akantụ mfe nke Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Kọnkanị"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Ọnụ ọgụgụ Arab na Indị agbatịrị"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Nụer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Ọnụ ọgụgụ ọbọsara"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Taịta"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Nọrtụ Lụrị"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Asụsụ Chinese Izugbe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Ọnụ ọgụgụ Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Mụdang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Onụ ọgụgụ Gụmụkh"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Ọtụtụ asụsụ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Ụsọrọ Mmeshọ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Ọnụ ọgụgụ Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Saka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Ọnụ ọgụgụ Tamị"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Sambụrụ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Santalị"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Nọmba"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Mkpụrụ ọkwụ Gụrmụkị"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shabala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Bafịa"_s)
		})
	}));
	return data;
}

LocaleNames_ig::LocaleNames_ig() {
}

$Class* LocaleNames_ig::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ig, name, initialize, &_LocaleNames_ig_ClassInfo_, allocate$LocaleNames_ig);
	return class$;
}

$Class* LocaleNames_ig::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun