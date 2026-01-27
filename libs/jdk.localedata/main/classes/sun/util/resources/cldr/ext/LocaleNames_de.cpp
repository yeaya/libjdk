#include <sun/util/resources/cldr/ext/LocaleNames_de.h>

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

$MethodInfo _LocaleNames_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_de",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_de_MethodInfo_
};

$Object* allocate$LocaleNames_de($Class* clazz) {
	return $of($alloc(LocaleNames_de));
}

void LocaleNames_de::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_de::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, "Fidschi"_s);
	$var($String, metaValue_NU, "Niue"_s);
	$var($String, metaValue_PW, "Palau"_s);
	$var($String, metaValue_ae, "Avestisch"_s);
	$var($String, metaValue_ar, "Arabisch"_s);
	$var($String, metaValue_bn, "Bengalisch"_s);
	$var($String, metaValue_bo, "Tibetisch"_s);
	$var($String, metaValue_el, "Griechisch"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, u"Hebräisch"_s);
	$var($String, metaValue_hy, "Armenisch"_s);
	$var($String, metaValue_ii, "Yi"_s);
	$var($String, metaValue_ja, "Japanisch"_s);
	$var($String, metaValue_ka, "Georgisch"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Koreanisch"_s);
	$var($String, metaValue_lo, "Laotisch"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_mn, "Mongolisch"_s);
	$var($String, metaValue_my, "Birmanisch"_s);
	$var($String, metaValue_or, "Oriya"_s);
	$var($String, metaValue_si, "Singhalesisch"_s);
	$var($String, metaValue_su, "Sundanesisch"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_zh, "Chinesisch"_s);
	$var($String, metaValue_ban, "Balinesisch"_s);
	$var($String, metaValue_bas, "Bassa"_s);
	$var($String, metaValue_bax, "Bamun"_s);
	$var($String, metaValue_bug, "Buginesisch"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Koptisch"_s);
	$var($String, metaValue_got, "Gotisch"_s);
	$var($String, metaValue_kpe, "Kpelle"_s);
	$var($String, metaValue_men, "Mende"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_ota, "Osmanisch"_s);
	$var($String, metaValue_peo, "Altpersisch"_s);
	$var($String, metaValue_phn, u"Phönizisch"_s);
	$var($String, metaValue_sam, "Samaritanisch"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_syr, "Syrisch"_s);
	$var($String, metaValue_uga, "Ugaritisch"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Bliss-Symbole"_s);
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
			$of("Mirandesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symbole"_s)
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
			$of("Lanna-Ziffern (sakral)"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("Emilianisch"_s)
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
			$of("Njiva-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("Mingrelisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Ägyptisch"_s)
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
			$of("Temne"_s)
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
			$of("Rarotonganisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Vereinigte Arabische Emirate"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Flämisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua und Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Äthiopischer Kalender"_s)
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
			$of("Zeitzone"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanien"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenien"_s)
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
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentinien"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Parthisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikanisch-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Österreich"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australien"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Aserbaidschan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Ostarmenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnien und Herzegowina"_s)
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
			$of("Bangladesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Kumükisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgien"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Mittelhochdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarien"_s)
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
			$of(u"St. Barthélemy"_s)
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
			$of("Ersja-Mordwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei Darussalam"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karibische Niederlande"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilien"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
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
			$of("Bouvetinsel"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsuana"_s)
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
			$of("Sichtbare Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Persischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebräische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Zentralafrikanische Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schweiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
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
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbien"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-Insel"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cabo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Weihnachtsinsel"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Balinesische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tschechien"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"Westflämisch"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Deutschland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Althochdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Rukiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of("Goa-Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dschibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dänemark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acholi"_s)
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
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Armenische Ziffern in Kleinschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanische Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Mongondou"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"Mainfränkisch"_s)
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
			$of("Algerien"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("Halbe Breite"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Mittelpersisch"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta und Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanggan"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
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
			$of("Estland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ägypten"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Westsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Tschagataisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook"_s)
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
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Äthiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europäische Union"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregorianischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Gujarati-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus-Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygeisch"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tunesisches Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesien"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Lokale Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöer"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamilisch"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankreich"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelauanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indischer Nationalkalender"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Altgriechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsachurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Wotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Vereinigtes Königreich"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigerianisches Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgien"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Französisch-Guayana"_s)
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
			$of(u"Grönland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Mittelenglisch"_s)
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
			$of(u"Äquatorialguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griechenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Südgeorgien und die Südlichen Sandwichinseln"_s)
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
			$of("Pennsylvaniadeutsch"_s)
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
			$of("Klingonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Zentralkurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Keine Sprachinhalte"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("Plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Österreichisches Deutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Sonderverwaltungsregion Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard und McDonaldinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatien"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Schweizerdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Islamischer Kalender (Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungarn"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("Tarifit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamaseq"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanarische Inseln"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min Nan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah-Li-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Sora-Sompeng-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Xixia"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"Nabatäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Europäische Sortierregeln"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britisches Territorium im Indischen Ozean"_s)
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
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italien"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Mathematische Notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Thai-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"Võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"Wayúu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Posix"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bengalische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"Pfälzisch"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamischer Kalender"_s)
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
			$of("Jordanien"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("Farefare"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Spätes Mittelfranzösisch"_s)
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
			$of("Kannada-Ziffern"_s)
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
			$of("Schweizer Hochdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Sortierung nach Phonetik"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("Ischorisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Buddhistischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Lateinamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodscha"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoren"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts und Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Geerbter Schriftwert"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Südkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Phonetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Neumelanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaimaninseln"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kyrillisch"_s)
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
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Altkirchenslawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Kutchin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Niederdeutsch"_s)
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
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("Zentral-Alaska-Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litauen"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
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
			$of("Libyen"_s)
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
			$of("Republik Moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of("Frauenschrift"_s)
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
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Nordmazedonien"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolei"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Sonderverwaltungsregion Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("Gegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nördliche Marianen"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanien"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
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
			$of(u"Süd-Altaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediven"_s)
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
			$of("Japanischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Buch-Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Subsahara-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebräischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Lexikographische Sortierreihenfolge"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Neukaledonien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Vereinheitlichte überarbeitete Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkinsel"_s)
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
			$of("Psalter-Pahlavi"_s)
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
			$of("Niederlande"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegen"_s)
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
			$of("NU"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
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
			$of("Neuseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitisch kursiv"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Krimtatarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Altenglisch"_s)
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
			$of("Seychellenkreol"_s)
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
			$of(u"Bürgerlicher islamischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kaschubisch"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Tatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Französisch-Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Neuguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippinen"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
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
			$of("St. Pierre und Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairninseln"_s)
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
			$of(u"Palästinensische Autonomiegebiete"_s)
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
			$of("Griechische Ziffern in Kleinschrift"_s)
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
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Schottisches Standardenglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaikanisch-Kreolisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piemontesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Äußeres Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Extremadurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lesgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Phonetisch (UPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Takri-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvaluisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai-Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Welt"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao-Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Südamerika"_s)
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
			$of("Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumänien"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbien"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"Neue Tai-Lü-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Manichäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Arabien"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Ponapeanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Mandäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonen"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Westafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellen"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Mittelamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Ostafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Aramäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("fester Zeilenumbruch"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Zentralafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slowenien"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Südliches Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Spitzbergen und Jan Mayen"_s)
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
			$of("Slowakei"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleaianisch"_s)
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
			$of("Somalia"_s)
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
			$of("Tamilische Ziffern"_s)
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
			$of(u"Südsudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé und Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Algerisches Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Arabisch (Nadschd)"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syrien"_s)
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
			$of(u"Ägyptisches Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Marokkanisches Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotumanisch"_s)
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
			$of(u"US-Maßsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Nördliches Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- und Caicosinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tschad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Französische Süd- und Antarktisgebiete"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Amerikanische Gebärdensprache"_s)
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
			$of("Tadschikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Suche nach Anfangsbuchstaben des koreanischen Alphabets"_s)
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
			$of("Tunesien"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türkei"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad und Tobago"_s)
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
			$of("Russinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orchon-Runen"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Unbekannte Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Ligurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromunisch"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Ostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kongo-Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Südasien"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Südostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("Hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin-Sortierregeln"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Südeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Amerikanische Überseeinseln"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("Livisch"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Vereinte Nationen"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Vereinigte Staaten"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Vereinfachtes Chinesisch - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Altpreußisch"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Zentralatlas-Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Strichfolge"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstadt"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Altprovenzalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent und die Grenadinen"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britische Jungferninseln"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikanische Jungferninseln"_s)
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
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Altnordisch"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasien"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Westarmenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesien"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis und Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Traditionelle Sortierregeln"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesisches Inselgebiet"_s)
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
			$of("Finanzzahlen"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"vorherige Sortierung, Kompatibilität"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walliserdeutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Meitei-Mayek-Ziffern"_s)
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
			$of("Pseudo-Akzente"_s)
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
			$of("Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Brahmi-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Schriftlos"_s)
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
			$of("Battakisch"_s)
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
			$of("Standard-Sortierung"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Pangwe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Gebärdensprache"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Cham-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Südafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Sundanesische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("lockerer Zeilenumbruch"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyin-Sortierregeln"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Unbekannte Region"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runenschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metrisches System"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601-Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nord-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Kreol (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("Fidschi-Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Vereinfacht-chinesische Finanzziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Erweiterte arabisch-indische Ziffern"_s)
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
			$of("Vollbreite Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hethitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Darginisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Maya-Hieroglyphen"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Nördliches Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Alt-Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurtisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Islamischer Kalender (Saudi-Arabien, Beobachtung)"_s)
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
			$of(u"Römische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jakutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("Sharada-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Lettgallisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Kaukasisch-Albanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse-Dialekt"_s)
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
			$of(u"Jüdisch-Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Numerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Native Ziffern"_s)
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
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("Breit"_s)
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
			$of("Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Belutschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"Meänkieli"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bairisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Jüdisch-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Schottisch"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sizilianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchasisch"_s)
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
			$of("type.nu.cakm"_s),
			$of("Chakma-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Solbica-Dialekt"_s)
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
			$of("Japanische Silbenschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Awarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Südkurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbaidschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Osojane-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baschkirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Radikal-Strich-Sortierregeln"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Javanesische Ziffern"_s)
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
			$of("Bretonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnisch"_s)
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
			$of("Laotische Ziffern"_s)
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
			$of("Selkupisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyra Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tschetschenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Revidierte Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsisch"_s)
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
			$of("Tschechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kirchenslawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tschuwaschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Walisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Äthiopische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(metaValue_ii)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Deutsch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Währungsformat (Standard)"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Bedauye"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"Jütisch"_s)
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
			$of("Altirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongolische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Dhivehi"_s)
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
			$of("Chinesischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("Klassisches Chinesisch"_s)
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
			$of("Griechische Ziffern"_s)
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
			$of("normaler Zeilenumbruch"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldauisch"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Englisch"_s)
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
			$of("Lasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Traditionelles Chinesisch - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han mit Bopomofo"_s)
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
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Taschelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Obersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Schan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Vereinfacht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Westliche Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditionell"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Ful"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Tschadisch-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnisch"_s)
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
			$of("Westliches Belutschi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Färöisch"_s)
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
			$of(u"Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Westfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Gälisch (Schottland)"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galicisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhodschpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Unbekannte Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Äthiopischer Kalender \"Amete Alem\""_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Islamischer Kalender (tabellarisch, astronomische Epoche)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Haussa"_s)
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
			$of("Hiri-Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haiti-Kreolisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ungarisch"_s)
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
			$of("Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA Phonetisch"_s)
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
			$of("Tibetische Ziffern"_s)
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
			$of(metaValue_ii)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Mittelfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Altfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Frankoprovenzalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Ostfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjaresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Nordfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Isländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italienisch"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Schlesisch (Niederschlesisch)"_s)
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
			$of(u"Altsüdarabisch"_s)
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
			$of("Lepcha-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Südsamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shaw-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maduresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Khotta"_s)
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
			$of("Blackfoot"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("Wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Malinke"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongolesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Massai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasachisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Grönländisch"_s)
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
			$of("Kaschmiri"_s)
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
			$of("Kurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Latein"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam-Ziffern"_s)
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
			$of("Limburgisch"_s)
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
			$of("Friaulisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"britisches Maßsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Lanna-Ziffern (säkular)"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litauisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Lettisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marschallesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Unicode-Sortierung"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Mazedonisch"_s)
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
			$of("Malaiisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltesisch"_s)
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
			$of("Mokschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Niedersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("allgemeine Suche"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegisch (Bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nord-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandaresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Niederländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegisch (Nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Süd-Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpakisch"_s)
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
			$of("Polytonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Okzitanisch"_s)
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
			$of("Armenische Ziffern"_s)
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
			$of("dtp"_s),
			$of("Zentral-Dusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Srananisch"_s)
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
			$of("Lipovaz-Dialekt"_s)
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
			$of("Bachtiarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Mittelniederländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Saurashtra-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi-Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paschtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugiesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Mittelirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Sortierung"_s)
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
			$of(u"Währungsformat"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj-Bhakha"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of("24-Stunden-Format (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of("24-Stunden-Format (1-24)"_s)
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
			$of("Myanmar-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotekisch"_s)
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
			$of("stq"_s),
			$of("Saterfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Äthiopisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of("12-Stunden-Format (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of("12-Stunden-Format (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rätoromanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Währung"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriya-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Chinesische Dezimalzahlen"_s)
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
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Duployanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Vereinheitlichte Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardisch"_s)
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
			$of("Nordsamisch"_s)
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
			$of("Serbo-Kroatisch"_s)
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
			$of("Sumerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slowenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Arabisch-indische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Währungsformat (Buchhaltung)"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Süd-Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Schwedisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suaheli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Traditionell-chinesische Finanzziffern"_s)
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
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Zentralasien"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Westasien"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadschikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thailändisch"_s)
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
			$of("Turkmenisch"_s)
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
			$of("Tongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Japanische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkisch"_s)
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
			$of("Komorisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarisch"_s)
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
			$of("Tahitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Bela-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Osteuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Westeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uigurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Altitalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Verbreitet"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"Seeländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Standardisierte Resianische Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalmückisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Neue deutsche Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Niedersächsisch"_s)
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
			$of("Kalender der Republik China"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Sakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Stundenformat (12h/24h)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskievica-Orthographie"_s)
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
			$of("Altsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K’iche’"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("Chimborazo Hochland-Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Wallonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagausisch"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("Gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("Kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumerisch-akkadische Keilschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Modernes Hocharabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("UCAS"_s)
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
			$of("Mandschurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Lateinisch - Fraktur-Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Schlesisch (Wasserpolnisch)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Hieroglyphen-Luwisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Meithei"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Lateinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Lateinisch - Gälische Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Vereinfacht-chinesische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Traditionell-chinesische Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Römische Ziffern in Kleinschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lykisch"_s)
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
			$of("gbz"_s),
			$of("Gabri"_s)
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
			$of(u"Klassisches Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
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
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Traditionelle Zahlen"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Westsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Syrisch - Estrangelo-Variante"_s)
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
			$of("Karisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_zh)
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
			$of("Altpermisch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Zeilenumbruchstil"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Telefonbuch-Sortierung"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonisch"_s)
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
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Japanische Finanzziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("Bergmari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Ostsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Myanmarische Shan-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Altnordarabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Ol-Chiki-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Reformierte Sortierreihenfolge"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Ägyptisch - Demotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Ägyptisch - Hieratisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Ägyptische Hieroglyphen"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Chinesisch (vereinfacht)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permjakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Altungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Alte deutsche Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraeanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Venetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Chinesisch (traditionell)"_s)
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
			$of("type.nu.khmr"_s),
			$of("Khmer-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Zypriotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Einheitliches Türkisches Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmukhi-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Mehrsprachig"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Maßsystem"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Kiribatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Allgemeine Rechtschreibung"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Karibisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil-Ziffern"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karatschaiisch-Balkarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Inguschisch"_s)
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
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Zahlen"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Oraon"_s)
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

LocaleNames_de::LocaleNames_de() {
}

$Class* LocaleNames_de::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_de, name, initialize, &_LocaleNames_de_ClassInfo_, allocate$LocaleNames_de);
	return class$;
}

$Class* LocaleNames_de::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun