#include <sun/util/resources/cldr/ext/LocaleNames_zu.h>

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

$MethodInfo _LocaleNames_zu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zu_MethodInfo_
};

$Object* allocate$LocaleNames_zu($Class* clazz) {
	return $of($alloc(LocaleNames_zu));
}

void LocaleNames_zu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, "isi-Arabic"_s);
	$var($String, metaValue_el, "isi-Greek"_s);
	$var($String, metaValue_gu, "isi-Gujarati"_s);
	$var($String, metaValue_he, "isi-Hebrew"_s);
	$var($String, metaValue_ja, "isi-Japanese"_s);
	$var($String, metaValue_jv, "isi-Javanese"_s);
	$var($String, metaValue_ka, "isi-Georgian"_s);
	$var($String, metaValue_km, "isi-Khmer"_s);
	$var($String, metaValue_kn, "isi-Kannada"_s);
	$var($String, metaValue_ko, "isi-Korean"_s);
	$var($String, metaValue_la, "isi-Latin"_s);
	$var($String, metaValue_lo, "isi-Lao"_s);
	$var($String, metaValue_ml, "isi-Malayalam"_s);
	$var($String, metaValue_mn, "isi-Mongolian"_s);
	$var($String, metaValue_or, "isi-Odia"_s);
	$var($String, metaValue_si, "isi-Sinhala"_s);
	$var($String, metaValue_su, "isi-Sundanese"_s);
	$var($String, metaValue_ta, "isi-Tamil"_s);
	$var($String, metaValue_te, "isi-Telugu"_s);
	$var($String, metaValue_th, "isi-Thai"_s);
	$var($String, metaValue_ban, "isi-Balinese"_s);
	$var($String, metaValue_bug, "isi-Buginese"_s);
	$var($String, metaValue_chr, "isi-Cherokee"_s);
	$var($String, metaValue_nqo, u"isi-N’Ko"_s);
	$var($String, metaValue_syr, "isi-Syriac"_s);
	$var($String, metaValue_vai, "isi-Vai"_s);
	$var($String, metaValue_type_nu_taml, "izinombolo zesi-Tamil"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("isi-Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("i-Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("isi-Mirandese"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("amasimbuli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Izinombolo ze-Tai Tham Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("i-Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("i-Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Ulwimi lwesi-Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("i-Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("i-Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("isi-Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("i-Medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("Izinombolo ze-Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("isi-Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("isi-Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("i-Ascension Island"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("isi-Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("isi-Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("Iqembu lolwomi lwesi-Barlavento lwe-Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("Izinombolo ze-Sinhala Lith"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("i-Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("i-United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("isi-Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("i-Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("i-Antigua ne-Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("Izinombolo ze-Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ikhalenda lesi-Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("i-Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Isikhathi Sendawo"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("i-Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("i-Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("i-Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("i-Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("i-Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("i-Inscriptional Parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("i-American Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("i-Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("i-Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("i-Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("i-American English"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"i-Åland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("i-Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("i-Bosnia ne-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("i-Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("isi-Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("i-Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("isi-Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("i-Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("i-Old Sogdian"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("i-Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("i-Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("i-Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("i-Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("i-Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"i-Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("i-Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("isi-Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("i-Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("i-Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("i-Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("i-Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("i-Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("isi-Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("i-Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("i-Bouvet Island"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("iBotswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("i-Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("i-Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Ikhalenda lesi-Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of("i-CREISS"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("izinombolo zesi-Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("i-Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("i-Khitan small script"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("i-Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("isi-Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("i-Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("i-Central African Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("i-Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("i-Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"i-Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("i-Cook Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("i-Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("isi-Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("i-Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("i-China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("i-Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("i-Clipperton Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("i-Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("i-Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("i-Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"i-Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("i-Christmas Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("i-Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Izinombolo ze-Balinese"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("i-Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("isi-Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("isi-Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("i-Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"I-Volapük Yakudala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("i-Sogdian"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("i-Germany"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("isi-Achinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("isi-Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("i-Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("izinombolo zesi-Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("i-Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("i-Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("isi-Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("i-Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("isi-Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("i-Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("izinombolo ezincane zesi-Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("i-Dominican Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("isi-Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("isi-Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("isi-Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("isi-Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("i-Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("i-Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("isi-Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Ubude obuhhafu"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("i-Cueta ne-Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("isi-Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("i-Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("isi-Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("isi-Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("i-Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("i-Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("i-Western Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("isi-Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("isi-Chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("isi-Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("isi-Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of("Izinombolo ze-Mathematical Bold"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("i-Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("i-Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("i-Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("i-European Union"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("ikhalenda lesi-Gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("I-Eurozone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("isi-Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("amadijithi esi-Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("isi-Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("i-Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("i-Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("i-Falkland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("i-Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Okokwehlukanisa Kwasendaweni"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("i-Faroe Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("i-France"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of("OKULULA"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Uhlamvu lwe-Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("i-Indian National Calender"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("i-Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("i-United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("isi-Nigerian Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("i-Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("i-Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("i-French Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("i-Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("i-Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("isi-Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("i-Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("i-Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("i-Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("i-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("i-Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("i-Equatorial Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("i-Greece"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("i-South Georgia ne-South Sandwich Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("i-Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("i-Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("Izinombolo ze-Mathematical Monospace"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("i-Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("isi-Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("isi-New Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("i-Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("isi-Central Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("akukho okuqukethwe kolimi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("i-VIVARAUP"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("isi-Austrian German"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("i-Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("I-Heard & McDonald Island"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("i-Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("i-Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("isi-Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("isi-Swiss German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Ikhalenda yesi-Islamic (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("i-Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("i-Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("i-Canary Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("isi-Min Nan Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("i-Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("isi-Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Izinombolo ze-Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("i-Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("isi-Neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ulwimi lwesi-Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("isi-Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Izinombolo ze-Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("isi-Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("i-Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("kwa-Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("i-Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("i-Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("i-India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Imithetho Yokuhlunga ye-European"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("i-British Indian Ocean Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("i-Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("i-Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("i-Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("i-Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("i-Mathematical Notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("amadijithi esi-Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Ikhompyutha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("izinombolo zesi-Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Izinombolo ze-Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("i-Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Ikhalenda lesi-Islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("i-Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("isi-Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("isi-Serbian esinokuphimisa kwe-Ekavian"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("i-Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("i-Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Isi-French esimaphakathi kuya ku-1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("isi-Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("i-KOCIEWIE"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("i-Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("isi-Gusli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("amadijithi esi-Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("isi-Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("i-Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Isi-Swiss High German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Hlela Ngokwefonetiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("ikhalenda lesi-Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("i-Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("i-Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("i-Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("i-Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("i-Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("i-Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("i-Saint Kitts ne-Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Okuthethwe"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("isi-Canadian French"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("i-North Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("i-South Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("isi-Pollard Phonetic"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("isi-Swiss French"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("i-Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("isi-Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("i-Cayman Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("i-Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("isi-Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("i-Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("i-Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("i-Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"isi-Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("i-LUNA1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("isi-Low German"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("i-Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("i-Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("i-Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("i-Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("iLesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("i-Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("i-Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("i-Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("isi-Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("i-Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("i-Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("isi-Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("isiVunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("i-LAUKIKA"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("i-Mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("isi-Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("isi-Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("i-Morocco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("i-Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("i-Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"i-Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("i-Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("i-Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("i-Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("i-Marshall Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("isi-Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Izinhlazu Zezinombolo ze-Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("i-North Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("Izinombolo ze-Mathematical Double-Struck"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("iMali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("i-Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("i-Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("isi-Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("i-Macau SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("i-Northern Mariana Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("i-Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("i-Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("i-Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("isi-Chorasmian"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("i-Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("I-UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("i-Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("isi-Southern Altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("i-Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("iMalawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("i-Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Ikhalenda lesi-Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("i-Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("i-Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("i-Inscriptional Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("i-Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("i-ARANES"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sub-Saharan Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Ikhalenda lesi-Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Uhlelo Lokuhlunga Lesichazamazwi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("i-New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("i-Wade-Giles Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("i-Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("i-Norfolk Island"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("i-Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("isi-Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("i-Psalter Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("i-Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("isi-Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("i-Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("i-Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("i-Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("i-Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("i-Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("i-Phoenician"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("isi-Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("i-New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("i-Meroitic Cursive"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("Ubhalomagama lwe-Portuguese-Brazilian lwango-1945"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("i-Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of("i-GRMISTR"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("i-Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("i-PETR1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("isi-Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("i-Seselwa Creole French"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("Izinombolo ze-Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("i-Old Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("Izinombolo ze-Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("i-Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("i-Islamic-Civil Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("i-British English"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("i-Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("i-French Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("i-Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("i-Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("i-Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("i-NICARD"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("i-Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("isi-Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("i-Saint Pierre kanye ne-Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("i-Pitcairn Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("i-Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("i-Palestinian Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("i-Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("i-Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("isi-Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("izinombolo ezincane zesi-Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("i-Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("isi-Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("i-Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("i-English Esezingeni ye-Scotish"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("isi-Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("i-Outlying Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("isi-Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("Izinombolo ze-Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Ifonotiki ye-UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Izinombolo ze-Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("isi-Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("isi-Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("Iqembu lolwimi lwesi-Sotavento lwe-Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of("i-Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("umhlaba"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("i-Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("i-North America"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"i-Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("i-South America"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("isi-Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("i-Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("i-Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("isi-Elymaic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("i-SURSILV"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("i-Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("i-Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("i-Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("i-Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("i-Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("Izinombolo ze-New Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Uhlambu lwe-Metelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("i-Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("i-Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("isi-Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("i-Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("isi-Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("i-Solomon Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("isi-Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("i-Western Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("i-Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("i-Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("i-Central America"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("i-Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("i-Eastern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("i-Northern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("i-Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("i-St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("i-Line Break Style enomthetho oqinile"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("i-Middle Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("i-Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("Izinombolo ze-Myanmar Tai Laing"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("i-Southern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("i-Svalbard ne-Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("i-Americas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("i-Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("isi-Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("i-Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("i-San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("i-Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("i-Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("isi-Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("isi-Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("i-Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("i-South Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"i-São Tomé kanye ne-Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("i-El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("i-Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("i-Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("i-Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("i-Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("isi-Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("isistimu yokulinganisa yase-US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("i-Northern America"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("i-Turks ne-Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("isi-Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("i-Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("i-Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("i-French Southern Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("i-Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("i-Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("i-Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("i-Caribbean"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("i-Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("i-Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("isi-Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Sesha nge-Hangul Ongwaqa Basekuqaleni"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("i-Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("i-Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("i-Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("i-Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"i-Volapük yesimanje"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("i-Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("i-Trinidad ne-Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("i-Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("i-Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("isi-Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("i-Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("i-Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("isi-Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("iskripthi esingaziwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("i-Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("i-Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("isi-Aromanian"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("i-Eastern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("isi-Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("isi-Congo Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("i-Southern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("i-South-Eastern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("i-Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("isi-Hakka Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Ukuhlunga nge-Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("i-Southern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("I-U.S. Outlying Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("I-United Nations"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("i-United States"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("isi-Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Okwemfundo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of("i-IVANCHOV"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Ukuhlunga kwe-Simplified Chinese - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("i-Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("isi-Prussian"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("i-Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("isi-Central Atlas Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Ukuhlunga kwe-Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("isi-Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("i-Vatican City"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("i-Saint Vincent ne-Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("i-HSISTEMO"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("i-Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("i-British Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("i-U.S. Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("i-LEMOSIN"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("i-Soyombo"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("i-Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("i-Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of("i-Marchen"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("isi-Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("isi-Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("i-Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("i-Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("i-Wallis ne-Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Ukuhlunga ngokisiko"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("i-Micronesian Region"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("isi-Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("isi-Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Izinombolo Zezomnotho"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("i-Hepburn romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Ukuhlunga Kwangaphambilini, ngokusebenzisana"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("isi-Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("i-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("isi-Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Izinombolo ze-Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("isi-Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("isi-Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("isi-Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("i-Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("Ubhalomagama olusezingeni"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("i-Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Izinombolo ze-Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("okungabhaliwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("isi-Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("isi-Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("isi-Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("i-Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("I-oda yokuhlunga ejwayelekile"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("i-Zanabazar Square"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Ulwimi lwe-Balank lwe-Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("i-Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("i-SUTSILV"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("i-SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("i-Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Izinombolo ze-Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("i-NEWFOUND"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("iNingizimu Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Izinombolo ze-Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("i-Line Break Style exegayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("isi-Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("izinombolo zesi-Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Ukuhlunga kwe-Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("isi-Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("i-Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("i-Pinyin Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("iZimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("iSifunda esingaziwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("i-Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("isistimu ye-Metric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Ikhalenda le-ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("isi-Northern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("amadijithi esi-Telegu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("isi-Louisiana Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("isi-Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of("i-FONKIRSH"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("i-ASANTE"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("i-AUVERN"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("isi-Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("izinombolo ezicacile zezezimali zesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("isi-Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("amadijithi esi-Arabic-Indic eluliwe"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("isi-Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("isi-Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("ububanzi obugcwele bamadijithi"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("isi-Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("isi-Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("isi-Northern Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("Uhlelo Lokuhlunga le-Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("isi-Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("isi-Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("i-FONNAPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Ikhalenda yesi-Islamic (Saudi Arabia, sighting)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("isi-Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("isi-Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("izinombolo zesi-Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("i-Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("Izinombolo ze-Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("isi-Caucasian Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("i-Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("isi-Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("isi-Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("isi-Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Okwezinombolo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Izinkinobho Zasendaweni"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("isi-Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("isi-Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Ulwimi lwesi-Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("Izinombolo ze-Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("isi-Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("i-BISCAYAN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("Izinombolo ze-Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("i-Fullwidth"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("isi-Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of("i-GRITAL"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("isi-Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("isi-Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("isi-Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("isi-Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("isi-Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("isi-Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of("Izinombolo ze-Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("isi-Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("isi-Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of("Ukwakhiwa kobhalomagama kwango-1943"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("isi-European Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("isi-Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("isi-Sicilian"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("isi-Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("isi-Abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("i-Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("i-Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("isi-Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of("Izinombolo ze-Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("isi-Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("isi-Aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Ulwimi lwesi-Stolvizza/Solbica"_s)
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
			$of("i-Japanese syllabaries"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("isi-Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("i-Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("isi-Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("i-Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("i-Southern Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("isi-Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("isi-Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("isi-Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("isi-Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("i-CISAUP"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Ulwimi lwesi-Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("Uhlamvu lwefonotiki lwe-Unifon"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("isi-Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Ukuhlunga kwe-Radical-Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("isi-Belarusian"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("isi-Bulgari"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("isi-Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Izinombolo ze-Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("isi-Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("isi-Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("isi-Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("isi-Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("isi-Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("isi-Bosnian"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("isi-Bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("isi-Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("amadijithi esi-Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("isi-Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("isi-Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("isi-Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("isi-Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("isi-Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Ubhalomagama Olubuyekeziwe"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("isi-Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("isi-Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("isi-Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("isi-Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("isi-Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("izinombolo zesi-Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("isi-Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("isi-Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("isi-European Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("isi-German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Ifomethi yemali ejwayelekile"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("isi-Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("i-Mongolian Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("isi-Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("isi-Latin American Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("isi-Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("isi-Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Ikhalenda lesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("isi-Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("isi-Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("izinombolo zesi-Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("isi-Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("i-Line Break Style ekahle"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("isi-Moldavian"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("i-English"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("isi-Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Ukuhlunga kwe-Traditional Chinese - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("isi-Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("isi-Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("isi-Hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("isi-Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("isi-Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("isi-Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("i-Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("isi-Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("isi-Upper Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("isi-Han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("i-ULSTER"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("isi-Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("isi-Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("isi-Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("enziwe lula"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("amadijithi ase-Western"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("okosiko"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("isi-Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("isi-Xiang Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("isi-Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("isi-Fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("isi-Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("isi-Western Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("isi-Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("isi-Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("I-BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("isi-Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("isi-French"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("i-AKUAPEM"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("isi-Western Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("isi-Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("isi-Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("isi-Scottish Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("isi-Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("isi-Galicia"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("isi-Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("isi-Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("isi-Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("ulimi olungaziwa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("i-Ethiopic Amete Alem Calender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Ikhalenda yesi-Islamic (tabular, astronomical epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("isi-Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("Izinombolo ze-Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("isi-Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("isi-Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("isi-Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("isi-Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("isi-Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("isi-Haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("isi-Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("isi-Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("isi-Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("isi-Cajun French"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Ifonotiki ye-IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("izilimi ezihlangene"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("isi-Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("isi-Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("amadijithi esi-Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("izimili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("i-GASCON"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("isi-Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("isi-Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("i-RUMGR"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("Isivumelwano Sobhalomagama Lolwimi lesi-Portuguese sango-1990"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("isi-Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("isi-Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("isi-Italian"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("isi-Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of("i-CORNU"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("i-HOGNORSK"_s)
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
			$of("Sarb"_s),
			$of("i-Old South Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("isi-Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Izinombolo ze-Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("isi-Southern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("i-Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("i-BAUDDHA"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("isi-Madurese"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("isi-Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("isi-Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("isi-Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("isi-Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("isi-Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("isi-Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("isi-Wu Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("isi-Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("isi-Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("isi-Gothic"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("isi-Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("isi-Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("isi-Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("isi-Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("isi-Kalaallisut"_s)
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
			$of("isi-Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("isi-Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("isi-Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("isi-Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("isi-Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("isi-Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("isi-Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("isi-Kyrgyz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("isi-Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("i-Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("isi-Hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("isi-Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("amadijithi esi-Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("isi-Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("isi-Limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("i-Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("isi-Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("isi-Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("isistimu yokulinganisa ebusayo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Izinombolo ze-Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("isi-Lithuanian"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("isi-Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("isi-Latvian"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("isi-Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("isi-Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Ukuhlunga okuzenzakalelayo kwe-Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("isi-Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("isi-Macedonian"_s)
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
			$of("isi-Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("isi-Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("isi-Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("isi-Burmese"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("isi-Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("isi-Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("isi-Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("isi-Lower Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("isi-Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("isi-Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Usesho olujwayelekile"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"isi-Norwegian Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("isi-North Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("isi-Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("isi-Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("isi-Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("isi-Norwegian Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("isi-Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of("i-PROVENC"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("isi-South Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("Izinombolo ze-Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of("isi-Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("isi-Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("isi-Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("isi-Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("isi-Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("i-Polytonic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("isi-Occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("isi-Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("isi-Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("isi-Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("i-English Yesimanje"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("isi-Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("izinombolo zesi-Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("isi-Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("i-Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("isi-Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("i-ALA-LC Romanization, i-edishini yango-1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("isi-Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("isi-Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("isi-Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("isi-Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("isi-Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Ulwimi lwesi-Lipovaz lase-Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("isi-Polish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Izinombolo ze-Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Ikhalenda lesi-Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("i-VALLADER"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("isi-Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("isi-Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Uhlelo lokuhlunga"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("isi-Brazillian Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Uhlambu lwe-Bohorič"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("isi-Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("isi-Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Ifomethi yemali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Izinombolo ze-N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Ikhalenda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("i-JAUER"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("i-SURMIRAN"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"isi-Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of("isistimu yamahora angu-24 (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("isistimu yamahora angu-24 (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("isi-Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("amadijithi esi-Maynmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("isi-Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("isi-Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("isi-Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("isi-Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("i-VAIDIKA"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("isi-Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("i-JYUTPING"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("isistimu yamahora angu-12 (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("isistimu yamahora angu-12 (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("isi-Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("isi-Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Imali"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("isi-Romanian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("i-Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Amadijithi ase-Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("izinombolo zezinombolo zesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("isi-Russian"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("isi-Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("isi-Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("isi-Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("isi-Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("i-Australian English"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("isi-Duployan shorthand"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("isi-Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Ubhalomagama Oluhlanganisiwe"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("isi-Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("isi-Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("isi-Northern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("isi-Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("isi-Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("isi-Serbo-Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("isi-Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("isi-Slovenian"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("isi-Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("isi-Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("i-BASICENG"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("isiShona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("isi-Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("amadijithi esi-Arabic-Indic"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("isi-Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("isi-Serbian"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("isiSwati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Ifomethi yemali ye-Accounting"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("isi-Southern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Ulwimi lwesi-Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("isi-Swedish"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("isiSwahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("Izinombolo ze-Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("izinombolo zosiko zezezimali zesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("isi-Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("isi-Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("i-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("i-Central Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("i-Western Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("isi-Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("i-SPANGLIS"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("isi-Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("isi-Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("i-Canadian English"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("isi-Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("isi-Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("isi-Tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("isi-Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("izinombolo zesi-Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("isi-Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("isi-Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("isi-Comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("isi-Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("isi-Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("i-XSISTEMO"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("isi-Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("isi-Tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Ulwimi lwe-San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("i-Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("i-Eastern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("Izinombolo ze-Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("Izinombolo ze-Mathematical Sans-Serif Bold"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("i-Northern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("isi-Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("i-Western Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("isi-Uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("i-Old Italic"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("jwayelekile"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("isi-Ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("i-Coptic Calender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("isi-Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Ubhalomagama lwase-Russia olusezingeni"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("isi-Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("isi-Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("isi-Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Ubhalomagama lwase-German lwango-1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("isi-Low Saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("isi-Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("isi-Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("i-Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Ikhalenda lesi-Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("isi-Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("isi-Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Umjikelezo wehora (12 vs 24"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Ubhalomagama lwesi-Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"isi-Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("Izinombolo ze-Mathematical Sans-Serif"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("i-Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"isi-Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Izinombolo ze-Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("isi-Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("isi-Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("isi-Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("Izinombolo ze-Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("isi-Gan Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("i-Lydian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("i-Sumero-Akkadian Cuneiform"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("isi-Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("isi-Moroccan Tamazight esivamile"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("isi-Arabic esivamile sesimanje"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("i-Unified Canadian Aboriginal Syllabics"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("i-FONXSAMP"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("isi-Anatolian Hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("isi-Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("i-Nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("izinombolo ezicacile zesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("izinombolo zosiko zesi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("isiXhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("isi-Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("isi-Dogra"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("ulwimi lwesi-Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("i-Lycian"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("isi-Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("isi-Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("isi-French Samanje"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("isi-Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("isi-Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("isi-Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("isi-Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Izinombolo Ezijwayelekile"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("isi-Mexican Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("isi-Carian"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("isi-Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("isi-Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("isi-Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("i-Old Permic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("I-Line Break Style"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("isiZulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Ukuhlunga kwebhuku lefoni"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("i-Monotonic"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("i-Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("i-LENGADOC"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("isi-Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("izinombolo zezezimali zesi-Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("isi-Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("isi-Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Izinombolo ze-Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("isi-Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("i-Old North Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Izinombolo ze-Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Ukuhlunga okwenziwe kabusha"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("i-Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("i-Yezidi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("i-ITIHASA"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("i-Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("isi-Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("i-Egyptian hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("isi-Chinese (esenziwe-lula)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("isi-Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("isi-Old Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("isi-Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Ubhalomagama lwase-German losiko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("i-PAHAWH2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("i-PAHAWH3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of("i-PAHAWH4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Izinombolo ze-Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("isi-Chinese (Sasendulo)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("isi-Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of("i-GRCLASS"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("amadijithi esi-Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("i-Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("isi-Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("i-Valencian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("isi-Cypriot"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("isi-Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Uhlamvu lwesi-Turkic Latin oluhlanganisiwe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("Isi-Serbian esinokuphimisa kwe-Ijekavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("isi-Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("amadijithi esi-Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("i-BORNHOLM"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("izilimi ezehlukene"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("i-PUTER"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Isistimu yokulinganisa"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("isi-Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("isi-Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("isi-Gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Ubhalomagama oluvamile"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("amadijithi esi-Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("isi-Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("isi-Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("isi-Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("isi-Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("Ukupela Kwesichazamazwi se-Oxford EnglishOxford English Dictionary spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("isi-Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Izinombolo"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("isi-Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("isiShambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("isi-Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_zu::LocaleNames_zu() {
}

$Class* LocaleNames_zu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zu, name, initialize, &_LocaleNames_zu_ClassInfo_, allocate$LocaleNames_zu);
	return class$;
}

$Class* LocaleNames_zu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun