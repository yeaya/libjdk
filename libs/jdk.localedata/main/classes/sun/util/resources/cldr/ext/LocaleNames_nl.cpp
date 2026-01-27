#include <sun/util/resources/cldr/ext/LocaleNames_nl.h>

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

$MethodInfo _LocaleNames_nl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_nl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nl_MethodInfo_
};

$Object* allocate$LocaleNames_nl($Class* clazz) {
	return $of($alloc(LocaleNames_nl));
}

void LocaleNames_nl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, "Arabisch"_s);
	$var($String, metaValue_bn, "Bengaals"_s);
	$var($String, metaValue_bo, "Tibetaans"_s);
	$var($String, metaValue_el, "Grieks"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, "Hebreeuws"_s);
	$var($String, metaValue_hy, "Armeens"_s);
	$var($String, metaValue_ii, "Yi"_s);
	$var($String, metaValue_ja, "Japans"_s);
	$var($String, metaValue_jv, "Javaans"_s);
	$var($String, metaValue_ka, "Georgisch"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Koreaans"_s);
	$var($String, metaValue_lo, "Laotiaans"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_mn, "Mongools"_s);
	$var($String, metaValue_my, "Birmaans"_s);
	$var($String, metaValue_or, "Odia"_s);
	$var($String, metaValue_sd, "Sindhi"_s);
	$var($String, metaValue_si, "Singalees"_s);
	$var($String, metaValue_su, "Soendanees"_s);
	$var($String, metaValue_ta, "Tamil"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_ban, "Balinees"_s);
	$var($String, metaValue_bax, "Bamoun"_s);
	$var($String, metaValue_bug, "Buginees"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Koptisch"_s);
	$var($String, metaValue_got, "Gothisch"_s);
	$var($String, metaValue_kpe, "Kpelle"_s);
	$var($String, metaValue_men, "Mende"_s);
	$var($String, metaValue_mni, "Meitei"_s);
	$var($String, metaValue_new, "Newari"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_osa, "Osage"_s);
	$var($String, metaValue_peo, "Oudperzisch"_s);
	$var($String, metaValue_phn, "Foenicisch"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_sog, "Sogdisch"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Blissymbolen"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Kölsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandees"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbolen"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Tai Tham Tham cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("Emiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("Mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gniva/Njiva-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("Mingreels"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Oudegyptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("Medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("Khudawadi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("Barlavento-dialectgroep van Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("Sinhala Lith cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Verenigde Arabische Emiraten"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua en Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("Mro cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ethiopische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("Gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Tijdzone"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albanië"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armenië"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
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
			$of("AR"_s),
			$of(u"Argentinië"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Inscriptioneel Parthisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikaans-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Oostenrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Australië"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbeidzjan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Oost-Armeens"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnië en Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Koemuks"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"België"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Middelhoogduits"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("Oud Sogdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarije"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrein"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint-Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzja"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribisch Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brazilië"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bahama’s"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouveteiland"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Zichtbare spraak"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Perzische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of("Creiss"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Hebreeuwse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("Kitaans kleinschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocoseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Centraal-Afrikaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Zwitserland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ivoorkust"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kameroen"_s)
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
			$of("CP"_s),
			$of("Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Kaapverdië"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Christmaseiland"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Balinese cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tsjechië"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("West-Vlaams"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Klassiek Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Duitsland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Oudhoogduits"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Atjehs"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of("Goa Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denemarken"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("kleine Armeense cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominicaanse Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("Opperfrankisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerije"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Halve breedte"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta en Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiaments"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Westelijke Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palaus"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukees"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook Jargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of("vette wiskundige cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanje"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ethiopië"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Europese Unie"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregoriaanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("eurozone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Gujarati cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygees"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tunesisch Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Landvariant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faeröer"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of("Simpel"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelaus"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Dajnko-alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indiase nationale kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Oudgrieks"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Verenigd Koninkrijk"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigeriaans Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Georgië"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Frans-Guyana"_s)
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
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Groenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Middelengels"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinee"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatoriaal-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griekenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Zuid-Georgia en Zuidelijke Sandwicheilanden"_s)
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
			$of("pdc"_s),
			$of("Pennsylvania-Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("niet-proportionele wiskundige cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinee-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Nieuw Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Soranî"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"geen linguïstische inhoud"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talysh"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("Vivaraup"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("Plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong SAR van China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard en McDonaldeilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroatië"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Zwitserduits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Islamitische kalender (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hongarije"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("Riffijns"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Canarische Eilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Minnanyu"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonesië"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah Li cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ierland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Napolitaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Sora Sompeng cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israël"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabateaans"_s)
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
			$of("type.co.eor"_s),
			$of("Europese sorteerregels"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brits Indische Oceaanterritorium"_s)
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
			$of("IJsland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Italië"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("wiskundige notatie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Thaise cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"Võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("Wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Computer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bengaalse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("Paltsisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Cyrillische cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamitische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("Servisch met Ekaviaanse uitspraak"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordanië"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("Gurune"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Laat Middelfrans tot 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Aino"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("Kociewie"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Fonetische sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("Ingrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Boeddhistische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latijns-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizië"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoren"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts en Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Overgeërfd"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Noord-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Zuid-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard-fonetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koeweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaaimaneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillisch"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Oudkerkslavisch Cyrillisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("Russische spelling van 1917"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Nedersaksisch"_s)
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
			$of("akk"_s),
			$of("Akkadisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Boek Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litouwen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Libië"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("Alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("Laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("Mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
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
			$of(u"Moldavië"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshalleilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleoetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai-cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Noord-Macedonië"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("wiskundige cijfers met dubbele lijn"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(metaValue_new)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongolië"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macau SAR van China"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("Gegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Noordelijke Marianen"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritanië"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("Chorasmisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Zuid-Altaïsch"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiven"_s)
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
			$of("Japanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Maleisië"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Inscriptioneel Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namibië"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("Aranees"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sub-Saharaans Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebreeuwse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Woordenboeksorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nieuw-Caledonië"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles-romanisering"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("Eenvormig herziene spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalmen Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nederland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noorwegen"_s)
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
			$of("tsd"_s),
			$of("Tsakonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nieuw-Zeeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitisch cursief"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("Portugese-Braziliaanse spellingsverdrag van 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Meroïtisch"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Krim-Tataars"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Oudengels"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of("Grmistr"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("Petr1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seychellencreools"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("Nyiakeng Puachue Hmong cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("Pahawh Hmong cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamitische kalender (cyclisch)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kasjoebisch"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Moslim Tat"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Frans-Polynesië"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papoea-Nieuw-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipijnen"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("Nicard"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polen"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre en Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestijnse gebieden"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("kleine Griekse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Toemboeka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Schots standaard-Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaicaans Creools"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"Piëmontees"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niueaans"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"overig Oceanië"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Extremeens"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("Ahom cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Oeralisch Fonetisch Alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Takri cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvaluaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("Sotavento-dialectgroep van Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("wereld"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Noord-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Zuid-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("Lingua Franca Nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("Pontisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oceanië"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("Elymaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("Sursilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roemenië"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Servië"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("nieuwe Tai Lue cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Metelko-alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manicheaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugaritisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saoedi-Arabië"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandaeans"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("West-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellen"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Soedan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Midden-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Zweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Oost-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Noord-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Sint-Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("strikte stijl regelafbreking"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Centraal-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Slovenië"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("Myanmar Tai Laing cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Zuidelijk Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Spitsbergen en Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakije"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Somalië"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("traditionele Tamil cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Zuid-Soedan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomé en Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Algerijns Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Nadjdi-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint-Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Syrië"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Egyptisch Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Marokkaans Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapees"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotumaans"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Amerikaans imperiaal stelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Noordelijk Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- en Caicoseilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tsjaad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Franse Gebieden in de zuidelijke Indische Oceaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Amerikaanse Gebarentaal"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadzjikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribisch gebied"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Oost-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Zoeken op eerste Hangul-medeklinker"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunesië"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"Modern Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkije"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad en Tobago"_s)
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
			$of("ast"_s),
			$of("Asturisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("Roetheens"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Ngumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("onbekend schriftsysteem"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(metaValue_sd)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Oekraïne"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Ligurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aroemeens"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Oost-Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Toevaans"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Zuid-Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Zuidoost-Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Oeganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("Hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyinvolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Zuid-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Kleine afgelegen eilanden van de Verenigde Staten"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("Lijfs"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Verenigde Naties"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Verenigde Staten"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaïaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Academisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of("Ivanchov"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Vereenvoudigd-Chinese sorteervolgorde - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Oudpruisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Oezbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight (Centraal-Marokko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Streeksorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vaticaanstad"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Oudprovençaals"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent en de Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("H-sistemo"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britse Maagdeneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikaanse Maagdeneilanden"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("Lemosin"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("Soyombo"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of("Marchen"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Oudnoors"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Australazië"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("West-Armeens"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanesië"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis en Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Traditionele sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Micronesische regio"_s)
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
			$of("nov"_s),
			$of("Novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Financiële cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn-romanisering"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("vorige sorteervolgorde, voor compatibiliteit"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Meetei Mayek cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accenten"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polynesië"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("Standaardspelling"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Brahmi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("ongeschreven"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standaard sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("vierkant Zanabazar"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Balanka-dialect van Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("Sutsilvan"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Cham cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("Newfound"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Zuid-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Sundanese cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("losse stijl regelafbreking"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgische cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyinvolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("onbekend gebied"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metriek stelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Noord-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana-Creools"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of("Fonkirsh"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("Asante"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("Auvern"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("Fijisch Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"vereenvoudigd Chinese financiële cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("uitgebreide Arabisch-Indische cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("cijfers met volledige breedte"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hettitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Mayahiërogliefen"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Noordelijk Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("emojisorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Klassiek Nepalbhasa"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Oedmoerts"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("Fonnapa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Islamitische kalender (Saudi–Arabië)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Romeinse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jakoets"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("Sharada cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Letgaals"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritaans-Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Kaukasisch Albanees"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Liverpools (Scouse)"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Judeo-Perzisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numeriek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Binnenlandse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aloekoe-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("Dives Akuru cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("Biskajaans"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("Tirhuta cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Volledige breedte"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of("Grital"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipijns"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Beloetsji"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slavey"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Oegaritisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of("Warang Citi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of("Tornedal-Fins"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Beiers"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of("Spellingsformulering van 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Judeo-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Schots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Siciliaans"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchazisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestisch"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of("Chakma cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Ghomala’"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amhaars"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonees"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Stolvizza/Solbica-dialect"_s)
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
			$of("Katakana of Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamees"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassarees"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Lineair A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Lineair B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Pahlavani"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbeidzjaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("Cisaup"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Oseacco/Osojane-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("Unifon fonetisch alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Basjkiers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Sorteervolgorde radicalen/strepen"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaars"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Javaanse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
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
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bretons"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("Bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Laotiaanse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkoeps"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tsjetsjeens"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Gewijzigde spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsicaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tsjechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kerkslavisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tsjoevasjisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Ethiopische cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(metaValue_ii)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Deens"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standaard valutanotatie"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("Jutlands"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Oudiers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongoolse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("Betawi"_s)
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
			$of("Chinese kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("Klassiek Chinees"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("Samogitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Griekse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("normale stijl regelafbreking"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("Lazisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Traditioneel-Chinese sorteervolgorde - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spaans"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han met Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritaans"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tashelhiyt"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Oppersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("Ulster"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Perzisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("vereenvoudigd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Westerse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("traditioneel"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Tsjadisch Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiangyu"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fins"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fijisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Westers Beloetsji"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantonees"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Faeröers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("Akuapem"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Fries"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Iers"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Schots-Gaelisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galicisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("onbekende taal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Ethiopische Amete Alem-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Islamitische kalender (epoche)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("Osmanya cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haïtiaans Creools"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hongaars"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Cajun-Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Internationaal Fonetisch Alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Tibetaanse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("Gascon"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(metaValue_ii)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Middelfrans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("Rumgr"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("Portugese spellingsovereenkomst van 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Oudfrans"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitaans"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Oost-Fries"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Noord-Fries"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("IJslands"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Silezisch Duits"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of("Cornu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("Hoognoors"_s)
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
			$of("Oud Zuid-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("Selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Lepcha cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Zuid-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("Bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madoerees"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassaars"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("Wuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Gikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Maa"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazachs"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Groenlands"_s)
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
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kasjmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Koerdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Latijn"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("Hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Luganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgs"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Brits imperiaal stelsel"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Tai Tham Hora cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litouws"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(metaValue_sog)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Lets"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagassisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("standaard Unicode-sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonisch"_s)
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
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Maleis"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltees"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksja"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Nedersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Keizerlijk Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruaans"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("algemeen zoeken"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Noors - Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Noord-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalees"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Nederlands"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Noors - Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Noors"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of("Provenc"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Zuid-Ndbele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("Modi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpaks"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabylisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Polytonaal"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Occitaans"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("Vroegmodern Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Armeense cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Afaan Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("Dusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("Romanisering ALA-LC, editie 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranantongo"_s)
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
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Het Lipovaz-dialect van het Resiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("Bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Pools"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Middelnederlands"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Saurashtra cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi-kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pasjtoe"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugees"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Middeliers"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Bohorič-alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valutanotatie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("Surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of("24-uursysteem (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("24-uursysteem (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Myanmarese cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("Vaidika"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("Saterfries"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("12-uursysteem (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("12-uursysteem (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Romaans"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Roemeens"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Odia cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Chinese decimale getallen"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kaapverdisch Creools"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"Mi’kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Duployan snelschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskriet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Eenvormige spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardijns"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Soesoe"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(metaValue_sd)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Noord-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Servo-Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("Kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Soemerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowaaks"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloveens"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("Standaard Engels"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Arabisch-Indische cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanees"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Servisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"financiële valutanotatie"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Zuid-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Zweeds"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("Wancho cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"traditioneel Chinese financiële cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Boerjatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Centraal-Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"West-Azië"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadzjieks"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("Spanglis"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmeens"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongaans"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Japanse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turks"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Shimaore"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tataars"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("X-sistemo"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("San Giorgio/Bila-dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Oost-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("Hanifi Rohingya cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("schreefloze vette wiskundige cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Noord-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("West-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Oeigoers"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Oud-italisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("algemeen"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Oekraïens"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("Zeeuws"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Gestandaardiseerde Resiaanse spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmuks"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Oezbeeks"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Duitse spelling van 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Nederduits"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kalender van de Chinese Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamees"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotanees"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("uursysteem (12 of 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskievica-spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("Khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Klassiek Syrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("schreefloze wiskundige cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Masaram Gondi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("Kichwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(metaValue_new)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Waals"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagaoezisch"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("Gunjala Gondi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("Ganyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"Kirmanckî"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumero-Akkadian Cuneiform"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Standaard Marokkaanse Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Verenigde Canadese Aboriginal-symbolen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("Transcriptie volgens X-SAMPA"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Mantsjoe"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Gotisch Latijns"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Silezisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"Anatolische hiërogliefen"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latijns"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gaelisch Latijns"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("Nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("vereenvoudigd Chinese cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("traditioneel Chinese cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("kleine Romeinse cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("Dogra"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lycisch"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("Zoroastrisch Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Vroeg modern Frans"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Traditionele cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("West-Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Ottomaans-Turks"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Estrangelo Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Carisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinees"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Defaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Oudpermisch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("stijl regelafbreking"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zoeloe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Telefoonboeksorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonaal"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("Lengadoc"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japanse financiële cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Ge’ez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("West-Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Oost-Aramees"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Myanmarese Shan cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Oud Noord-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Ol Chiki cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Herziene sorteervolgorde"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyptisch demotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Egyptisch hiëratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("Jezidi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("Episch Sanskriet"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyreens"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Egyptische hiërogliefen"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Georgisch Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permjaaks"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Oudhongaars"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Traditionele Duitse spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraeaans"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Venetiaans"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("Pahawh2"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("Pahawh3"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of("Pahawh4"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Wepsisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of("Grclass"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valenciaans"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cyprisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Eenvormig Turkse Latijnse alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("Servisch met Ijekaviaanse uitspraak"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmukhi cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("Bornholms"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("meerdere talen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("maatsysteem"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertees"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Algemene spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Caribisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karatsjaj-Balkarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingoesjetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("Kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("Krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("Spelling volgens het Oxford English Dictionary"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("cijfers"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_nl::LocaleNames_nl() {
}

$Class* LocaleNames_nl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nl, name, initialize, &_LocaleNames_nl_ClassInfo_, allocate$LocaleNames_nl);
	return class$;
}

$Class* LocaleNames_nl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun