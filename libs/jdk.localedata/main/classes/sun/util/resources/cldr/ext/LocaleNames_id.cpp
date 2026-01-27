#include <sun/util/resources/cldr/ext/LocaleNames_id.h>

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

$MethodInfo _LocaleNames_id_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_id, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_id, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_id_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_id",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_id_MethodInfo_
};

$Object* allocate$LocaleNames_id($Class* clazz) {
	return $of($alloc(LocaleNames_id));
}

void LocaleNames_id::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_id::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_AL, "Albania"_s);
	$var($String, metaValue_AM, "Armenia"_s);
	$var($String, metaValue_BG, "Bulgaria"_s);
	$var($String, metaValue_CY, "Siprus"_s);
	$var($String, metaValue_DE, "Jerman"_s);
	$var($String, metaValue_ES, "Spanyol"_s);
	$var($String, metaValue_ET, "Etiopia"_s);
	$var($String, metaValue_FJ, "Fiji"_s);
	$var($String, metaValue_FR, "Prancis"_s);
	$var($String, metaValue_GE, "Georgia"_s);
	$var($String, metaValue_GR, "Yunani"_s);
	$var($String, metaValue_HR, "Kroasia"_s);
	$var($String, metaValue_HU, "Hungaria"_s);
	$var($String, metaValue_ID, "Indonesia"_s);
	$var($String, metaValue_IE, "Irlandia"_s);
	$var($String, metaValue_IS, "Islandia"_s);
	$var($String, metaValue_IT, "Italia"_s);
	$var($String, metaValue_JP, "Jepang"_s);
	$var($String, metaValue_LA, "Laos"_s);
	$var($String, metaValue_LU, "Luksemburg"_s);
	$var($String, metaValue_MN, "Mongolia"_s);
	$var($String, metaValue_MT, "Malta"_s);
	$var($String, metaValue_NL, "Belanda"_s);
	$var($String, metaValue_NO, "Norwegia"_s);
	$var($String, metaValue_NR, "Nauru"_s);
	$var($String, metaValue_PW, "Palau"_s);
	$var($String, metaValue_RO, "Rumania"_s);
	$var($String, metaValue_RS, "Serbia"_s);
	$var($String, metaValue_RU, "Rusia"_s);
	$var($String, metaValue_SE, "Swedia"_s);
	$var($String, metaValue_SO, "Somalia"_s);
	$var($String, metaValue_SY, "Suriah"_s);
	$var($String, metaValue_TK, "Tokelau"_s);
	$var($String, metaValue_TO, "Tonga"_s);
	$var($String, metaValue_TR, "Turki"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_UA, "Ukraina"_s);
	$var($String, metaValue_VN, "Vietnam"_s);
	$var($String, metaValue_WS, "Samoa"_s);
	$var($String, metaValue_ae, "Avesta"_s);
	$var($String, metaValue_ar, "Arab"_s);
	$var($String, metaValue_bn, "Bengali"_s);
	$var($String, metaValue_bo, "Tibet"_s);
	$var($String, metaValue_gu, "Gujarat"_s);
	$var($String, metaValue_he, "Ibrani"_s);
	$var($String, metaValue_jv, "Jawa"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Korea"_s);
	$var($String, metaValue_la, "Latin"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_or, "Oriya"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_su, "Sunda"_s);
	$var($String, metaValue_ta, "Tamil"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_bug, "Bugis"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Koptik"_s);
	$var($String, metaValue_kpe, "Kpelle"_s);
	$var($String, metaValue_men, "Mende"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_pal, "Pahlevi"_s);
	$var($String, metaValue_peo, "Persia Kuno"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Blissymbol"_s);
	$var($String, metaValue_key_nu, "Angka"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Dialek Kolsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Miranda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Simbol"_s)
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
			$of("Angka Tai Tham Tham"_s)
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
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Dialek Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Mesir Kuno"_s)
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
			$of("Pulau Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetun"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Uni Emirat Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua dan Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Kalender Etiopia"_s)
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
			$of("Zona Waktu"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(metaValue_AL)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tenghwar"_s)
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
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Prasasti Parthia"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerika"_s)
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
			$of("AX"_s),
			$of("Kepulauan Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Armenia Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia dan Herzegovina"_s)
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
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Jerman Abad Pertengahan"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(metaValue_BG)
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
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
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
			$of("Eryza"_s)
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
			$of("Belanda Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
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
			$of("Pulau Bouvet"_s)
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
			$of("Ucapan Terlihat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Kalender Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Angka Ibrani"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kepulauan Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republik Afrika Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kepulauan Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Cile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Tiongkok"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Pulau Clipperton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Tanjung Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Pulau Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Angka Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Ceko"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Jerman Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Angka Dewanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Angka Huruf Kecil Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republik Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gotik"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
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
			$of("Aljazair"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Lebar separuh"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta dan Melilla"_s)
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
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuuke"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Jargon Chinook"_s)
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
			$of("Koktaw"_s)
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
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Uni Eropa"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Kalender Gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Zona Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Angka Gujarat"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygei"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Arab Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Kepulauan Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Varian Lokal"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Kepulauan Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Kalender Nasional India"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Yunani Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votia"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Inggris Raya"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Pidgin Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyana Prancis"_s)
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
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Inggris Abad Pertengahan"_s)
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
			$of("Guinea Ekuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia Selatan & Kep. Sandwich Selatan"_s)
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
			$of("Jerman Pennsylvania"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
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
			$of("Tai Lue Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Kurdi Sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Tidak ada konten linguistik"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong DAK Tiongkok"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Pulau Heard dan Kepulauan McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(metaValue_HR)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Jerman (Swiss)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Kalender Islam (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kepulauan Canaria"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(metaValue_ID)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Angka Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(metaValue_IE)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Dialek Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
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
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataea"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Pulau Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Aturan Pengurutan Eropa"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Wilayah Inggris di Samudra Hindia"_s)
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
			$of(metaValue_IS)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Notasi Matematika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Angka Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Komputer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Angka Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Kalender Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Yordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Prancis Pertengahan Akhir sampai 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
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
			$of("Angka Kannada"_s)
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
			$of("de_CH"_s),
			$of("Jerman Tinggi (Swiss)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Urutan Sortir Fonetik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Kalender Buddha"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Amerika Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgizstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts dan Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Warisan"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Fonetik Pollard"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kepulauan Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Sirilik"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Funisia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Gereja Slavonia Sirilik Lama"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwich’in"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Jerman Rendah"_s)
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
			$of("Akkadia"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
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
			$of("Phlv"_s),
			$of("Kitab Pahlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
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
			$of("Libya"_s)
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
			$of("lah"_s),
			$of("Lahnda"_s)
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
			$of("Nshu"_s),
			$of("Nushu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
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
			$of("Kepulauan Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Angka Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Makedonia Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makau DAK Tiongkok"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Kepulauan Mariana Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(metaValue_MT)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("Transliterasi GEGN PBB"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Altai Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maladewa"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Kalender Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(metaValue_pal)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrika Sub-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Kalender Ibrani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Urutan Sortir Kamus"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("Ortografi Revisi Terpadu"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Kepulauan Norfolk"_s)
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
			$of("Mazmur Pahlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(metaValue_NL)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(metaValue_NO)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("Phoenix"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshia"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Selandia Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Kursif Meroitik"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitik"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Tatar Krimea"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Inggris Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seselwa Kreol Prancis"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Kalender Sipil Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubia"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Inggris (Inggris)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Tat Muslim"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinesia Prancis"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nugini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polandia"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre dan Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Kepulauan Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Wilayah Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Angka Yunani Huruf Kecil"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
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
			$of("Inggris Standar Skotlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuea"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oseania Luar"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Fonetik UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Dunia"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Amerika Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Amerika Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(metaValue_RS)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("Angka Tai Lue Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manikhei"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugaritik"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arab Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandae"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Kepulauan Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afrika Bagian Barat"_s)
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
			$of("SE"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Amerika Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrika Bagian Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aram"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Afrika Bagian Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Gaya Pemisah Baris Rapat"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrika Bagian Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrika Bagian Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Kepulauan Svalbard dan Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
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
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Angka Tamil Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Sudan Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome dan Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Arab Aljazair"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Arab Najdi"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(metaValue_SY)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("eSwatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Arab Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Arab Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapois"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotuma"_s)
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
			$of("Sistem Pengukuran AS"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Amerika Bagian Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Kepulauan Turks dan Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Wilayah Selatan Prancis"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Bahasa Isyarat Amerika"_s)
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
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Kepulauan Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Pencarian Menurut Konsonan Awal Hangul"_s)
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
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad dan Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
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
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Skrip Tidak Dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Liguria"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Asia Bagian Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinia"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Swahili (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Asia Bagian Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Asia Tenggara"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Urutan Sortir Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Eropa Bagian Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Kepulauan Terluar AS"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Perserikatan Bangsa-Bangsa"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amerika Serikat"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Urutan Sortir Tionghoa Aks. Sederhana - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prusia"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamazight Maroko Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Urutan Sortir Guratan"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Provencal Lama"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent dan Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Kepulauan Virgin Britania Raya"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Kepulauan Virgin Amerika Serikat"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
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
			$of("Norse Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Armenia Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Kepulauan Wallis dan Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Urutan Sortir Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Wilayah Mikronesia"_s)
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
			$of("type.nu.finance"_s),
			$of("Angka Finansial"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Aturan Pengurutan Sebelumnya, untuk kompatibilitas"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Angka Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Aksen Asing"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Warai"_s)
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
			$of("Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Tidak Tertulis"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Chiki Lama"_s)
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
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Aturan Pengurutan Standar"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Tulisan Isyarat"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Angka Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Angka Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Gaya Pemisah Baris Renggang"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Dewanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Angka Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Aturan Pengurutan Zhuyin"_s)
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
			$of("Pinyin Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Wilayah Tidak Dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Sistem Metrik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Kalender ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Sotho Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Angka Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Kreol Louisiana"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("Hindi Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Angka Keuangan Tionghoa Sederhana"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Angka Arab Timur Diperluas"_s)
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
			$of("Angka Lebar Penuh"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hitit"_s)
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
			$of("Hieroglip Maya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Luri Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Newari Klasik"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Kalender Islam (Arab Saudi, penglihatan)"_s)
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
			$of("Angka Romawi"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Aram Samaria"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Albania Kaukasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Skaus"_s)
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
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Ibrani-Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Digit Asli"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambai"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Dialek Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("BISKAY"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Lebar penuh"_s)
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
			$of("Filipino"_s)
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
			$of("Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugarit"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bavaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Ibrani-Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Spanyol (Eropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Skotlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkhaz"_s)
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
			$of(metaValue_ae)
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
			$of("bbj"_s),
			$of("Ghomala"_s)
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
			$of("an"_s),
			$of("Aragon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Dialek Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Katakana atau Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Kurdi Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Dialek Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Urutan Sortir Guratan Radikal"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusia"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(metaValue_BG)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Angka Jawa"_s)
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
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Angka Laos"_s)
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
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Ortografi Revisi"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Kree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Cheska"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Bahasa Gereja Slavonia"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Angka Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Dansk"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Portugis (Eropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Format Mata Uang Standar"_s)
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
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Irlandia Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Angka Mongolia"_s)
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
			$of("Kalender Tionghoa"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Angka Yunani"_s)
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
			$of("Gaya Pemisah Baris Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Inggris"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("Laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Urutan Sortir Tionghoa Tradisional - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Esti"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han dengan Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basque"_s)
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
			$of("Samaria"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Sorbia Hulu"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
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
			$of("Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Sederhana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Angka Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fula"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Arab Suwa"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Suomi"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Balochi Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kanton"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("Transliterasi BGN AS"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Frisia Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(metaValue_IE)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Gaelik Skotlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galisia"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Bahasa Tidak Dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Kalender Amete Alem Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
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
			$of(metaValue_HR)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Kreol Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(metaValue_HU)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Prancis Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Fonetik IPA"_s)
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
			$of(metaValue_ID)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Angka Tibet"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Prancis Abad Pertengahan"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Prancis Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Frisia Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Frisia Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(metaValue_IS)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Silesia Rendah"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("NORWEDIA TINGGI"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Arab Selatan Kuno"_s)
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
			$of("Angka Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavia"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule Sami"_s)
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
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt Sami"_s)
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
			$of("Gothic"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
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
			$of("Kashmir"_s)
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
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(metaValue_LU)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Angka Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgia"_s)
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
			$of("Friuli"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Sistem Pengukuran Imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Angka Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituavi"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvi"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Aturan Pengurutan Unicode Default"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Makedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Melayu"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(metaValue_MT)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_AM)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Sorbia Hilir"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Aram Imperial"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Pencarian Tujuan Umum"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Bokmål Norwegia"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Ndebele Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
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
			$of(metaValue_NL)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nynorsk Norwegia"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(metaValue_NO)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("Ndebele Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Kara-Kalpak"_s)
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
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politon"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Ositania"_s)
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
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Angka Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("ALA-LC Latin, edisi 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisien"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
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
			$of("Dialek Lipovaz Resia"_s)
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
			$of("pl"_s),
			$of("Polski"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Belanda Abad Pertengahan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Angka Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Kalender Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugis"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Irlandia Abad Pertengahan"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Aturan Pengurutan"_s)
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
			$of("Format Mata Uang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Angka N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_LA)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Sistem 24 Jam (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Sistem 24 Jam (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Angka Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotek"_s)
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
			$of("Ethi"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Sistem 12 Jam (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Sistem 12 Jam (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Reto-Roman"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Mata Uang"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(metaValue_RO)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Angka Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Angka Desimal Tionghoa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_RU)
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
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Stenografi Duployan"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskerta"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Ortografi Terpadu"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinia"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Sami Utara"_s)
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
			$of("Serbo-Kroasia"_s)
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
			$of("Sumeria"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Angka Arab Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(metaValue_AL)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(metaValue_RS)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Format Mata Uang Akuntansi"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sotho Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Dialek Natiso"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Angka Keuangan Tionghoa Tradisional"_s)
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
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Asia Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Asia Bagian Barat"_s)
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
			$of("Turkmen"_s)
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
			$of(metaValue_TO)
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
			$of("Angka Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
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
			$of("Komoria"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
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
			$of("Tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Dialek San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Eropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Eropa Bagian Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Eropa Bagian Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Eropa Bagian Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Italia Lama"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Umum"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Kalender Koptik"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Ortografi Resia Standar"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmuk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Ortografi Jerman 1996"_s)
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
			$of("Kalender Min-guo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotan"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Siklus Jam (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Ortografi Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Volapuk"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Suriah Klasik"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_SY)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Cuneiform Sumero-Akkadia"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Tamazight Maroko Standar"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Arab Standar Modern"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Simbol Aborigin Kanada Kesatuan"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_MN)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchuria"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Latin Fraktur"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Silesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Hieroglif Anatolia"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Latin Gaelik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Angka Tionghoa Sederhana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Angka Tionghoa Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Angka Huruf Kecil Romawi"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Dialek Pamaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lycia"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
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
			$of("Prancis Modern Awal"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_SY)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
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
			$of("Angka Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Suriah Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Turki Osmani"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Suriah Estrangelo"_s)
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
			$of("Karia"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Tionghoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Permik Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Gaya Pemisah Baris"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Urutan Sortir Buku Telepon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monoton"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_GE)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Angka Keuangan Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Suriah Timur"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Angka Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Arab Utara Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Angka Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Urutan Sortir yang Diubah Bentuknya"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Demotik Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Hieratik Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmira"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Hieroglip Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Georgian Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Hungaria Kuno"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Ortografi Jerman Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosre"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Venesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Angka Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Angka Khmer"_s)
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
			$of("Valencia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Alfabet Latin Turki Terpadu"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Angka Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Beberapa Bahasa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kado"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Sistem Pengukuran"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Bahasa Muskogee"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbert"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Ortografi Umum"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Karib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Angka Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachai Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingushetia"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("Krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Persia Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelia"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kuruk"_s)
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

LocaleNames_id::LocaleNames_id() {
}

$Class* LocaleNames_id::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_id, name, initialize, &_LocaleNames_id_ClassInfo_, allocate$LocaleNames_id);
	return class$;
}

$Class* LocaleNames_id::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun