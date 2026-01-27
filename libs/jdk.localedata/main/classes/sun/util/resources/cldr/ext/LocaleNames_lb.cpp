#include <sun/util/resources/cldr/ext/LocaleNames_lb.h>

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

$MethodInfo _LocaleNames_lb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lb_MethodInfo_
};

$Object* allocate$LocaleNames_lb($Class* clazz) {
	return $of($alloc(LocaleNames_lb));
}

void LocaleNames_lb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_PW, "Palau"_s);
	$var($String, metaValue_ae, "Avestesch"_s);
	$var($String, metaValue_ar, "Arabesch"_s);
	$var($String, metaValue_bn, "Bengalesch"_s);
	$var($String, metaValue_bo, "Tibetesch"_s);
	$var($String, metaValue_el, "Griichesch"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, u"Hebräesch"_s);
	$var($String, metaValue_hy, "Armenesch"_s);
	$var($String, metaValue_ja, "Japanesch"_s);
	$var($String, metaValue_ka, "Georgesch"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Koreanesch"_s);
	$var($String, metaValue_lo, "Laotesch"_s);
	$var($String, metaValue_mn, "Mongolesch"_s);
	$var($String, metaValue_my, "Birmanesch"_s);
	$var($String, metaValue_si, "Singhalesesch"_s);
	$var($String, metaValue_su, "Sundanesesch"_s);
	$var($String, metaValue_ta, "Tamilesch"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_tl, "Dagalog"_s);
	$var($String, metaValue_zh, "Chinesesch"_s);
	$var($String, metaValue_ban, "Balinesesch"_s);
	$var($String, metaValue_bug, "Buginesesch"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Koptesch"_s);
	$var($String, metaValue_got, "Gotesch"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_ota, "Osmanesch"_s);
	$var($String, metaValue_peo, "Alpersesch"_s);
	$var($String, metaValue_sam, "Samaritanesch"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_syr, "Syresch"_s);
	$var($String, metaValue_uga, "Ugaritesch"_s);
	$var($String, metaValue_zbl, "Bliss-Symboler"_s);
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
			$of("Mirandesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symboler"_s)
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
			$of("egl"_s),
			$of("Emilianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("Mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Njiva-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("Mingrelesch Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Egyptesch"_s)
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
			$of("Ouschterinsel-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotonganesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("Barlavento-Dialektgrupp vu Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Vereenegt Arabesch Emirater"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Flämesch"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ethiopesche Kalenner"_s)
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
			$of("AS"_s),
			$of("Amerikanesch-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Éisträich"_s)
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
			$of("en_US"_s),
			$of("Amerikanescht Englesch"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandinselen"_s)
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
			$of("Ostarmenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnien an Herzegowina"_s)
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
			$of(u"Kumükesch"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belsch"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Mëttelhéichdäitsch"_s)
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
			$of(u"Saint-Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Ersja-Mordwinesch"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivien"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karibescht Holland"_s)
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
			$of(u"Wäissrussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Siichtbar Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Persesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebräesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokosinselen"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazandarani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Zentralafrikanesch Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo-Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Schwäiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookinselen"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
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
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Chrëschtdagsinsel"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypern"_s)
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
			$of("vls"_s),
			$of(u"Westflämesch"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Däitschland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Alhéichdäitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh-Sprooch"_s)
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
			$of("gom"_s),
			$of("Goan-Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari-Zifferen"_s)
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
			$of("Acholi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Blanneschrëft"_s)
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
			$of(u"Armenesch Zifferen a Klengschrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikanesch Republik"_s)
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
			$of(u"Mainfränkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerien"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"Mëttelpersesch"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanggan-Sprooch"_s)
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
			$of("Tiv-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypten"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Westsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Tschagataesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Trukesesch"_s)
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
			$of("Ethiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europäesch Unioun"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregorianesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Gujarati-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Indus-Schrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Adygéiesch"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tunesescht Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandinselen"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesien"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöer"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Frankräich"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picardesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelauanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Dajnko-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indeschen Nationalkalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Algriichesch"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsachuresch"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Wotesch"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Groussbritannien"_s)
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
			$of("Guayane"_s)
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
			$of(u"Mëttelenglesch"_s)
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
			$of("Equatorialguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griicheland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Südgeorgien an déi Südlech Sandwichinselen"_s)
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
			$of(u"Pennsylvaniadäitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingonesch"_s)
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
			$of("Sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Keng Sproochinhalter"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"Plattdäitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Éisträichescht Däitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Spezialverwaltungszon Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard- a McDonald-Inselen"_s)
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
			$of(u"Schwäizerdäitsch"_s)
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
			$of("Kanaresch Inselen"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min-Nan-Chinesesch"_s)
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
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka-Dialekt"_s)
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
			$of("IL"_s),
			$of("Israel"_s)
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
			$of(u"Europäesch Zortéierregelen"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britescht Territorium am Indeschen Ozean"_s)
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
			$of("type.nu.thai"_s),
			$of("Thai-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of("Voro"_s)
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
			$of("Bengalesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"Pfälzesch Däitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamesche Kalenner"_s)
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
			$of("%%EKAVSK"_s),
			$of("Serbesch mat Ekavian-Aussprooch"_s)
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
			$of(u"Spéit Mëttelfranséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Tsonga-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Schwäizer Héichdäitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("Ischoresch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Buddhistesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latäinamerika"_s)
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
			$of("St. Kitts an Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Geierfte Schrëftwäert"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanadescht Franséisch"_s)
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
			$of("Pollard Phonetesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Schwäizer Franséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Neimelanesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kaimaninselen"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kyrillesch"_s)
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
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Phönikesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Alkiercheslawesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Kutchin-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Nidderdäitsch"_s)
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
			$of("Akkadesch"_s)
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
			$of(u"Yup’ik"_s)
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
			$of(u"Lëtzebuerg"_s)
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
			$of("Moldawien"_s)
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
			$of("Lamba-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallinselen"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai-Zifferen"_s)
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
			$of("Spezialverwaltungszon Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("Gegesch"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nërdlech Marianen"_s)
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
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Süd-Alaesch"_s)
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
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Japanesche Kalenner"_s)
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
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebräesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Lexikographesch Zortéierreiefolleg"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Neikaledonien"_s)
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
			$of("Vereenheetlecht iwwerschafft Rechtschreiwung"_s)
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
			$of("Seediq"_s)
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
			$of("Holland"_s)
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
			$of("Tsakonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Phönizesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Neiséiland"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitesch"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Krimtataresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Alenglesch"_s)
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
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Biergerlechen islamesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kaschubesch"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Britescht Englesch"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Tatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Franséisch-Polynesien"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Neiguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippinnen"_s)
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
			$of("St. Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairninselen"_s)
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
			$of("Palestinensesch Autonomiegebidder"_s)
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
			$of("Nias-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Griichesch Zifferen a Klengschrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka-Sprooch"_s)
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
			$of("Schottescht Standardenglesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaikanesch-Kreolesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piemontesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Baussecht Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Extremaduresch"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lesgesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Phonetesch (UPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Elliceanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("Sotavento-Dialekt-Grupp vu Kabuverdianu"_s)
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
			$of("Ao Naga"_s)
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
			$of("Pontesch"_s)
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
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Metelko-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Manichäesch"_s)
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
			$of("Ponapeanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Mandäesch"_s)
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
			$of(u"Mëttelamerika"_s)
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
			$of(u"Aramäesch"_s)
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
			$of("017"_s),
			$of("Zentralafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slowenien"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Südlecht Afrika"_s)
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
			$of("Slowakei"_s)
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
			$of("Arapaho-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Tamilesch Zifferen"_s)
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
			$of(u"São Tomé a Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Algerescht Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
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
			$of("Yao-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Egyptescht Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Marokkanescht Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotumanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu (Tanzania)"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Nërdlecht Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- a Caicosinselen"_s)
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
			$of("TF"_s),
			$of(u"Franséisch Süd- an Antarktisgebidder"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("Amerikanesch Zeechesprooch"_s)
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
			$of("Osttimor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Sich no Ufanksbuschtawen aus dem koreaneschen Alphabet"_s)
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
			$of("%%NULIK"_s),
			$of(u"Modernt Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tierkei"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad an Tobago"_s)
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
			$of("Asturianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("Russinesch"_s)
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
			$of(u"Oncodéiert Schrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrain"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Liguresch"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromunesch"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Ostasien"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuwinesch"_s)
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
			$of("Haida-Sprooch"_s)
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
			$of("Hakka-Chinesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Pinyin-Zortéierregelen"_s)
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
			$of("Amerikanesch-Ozeanien"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("Livesch"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Vereenegt Staaten"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Vereinfacht Chinesesch - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Preisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Mëttlert-Atlas-Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Stréchfolleg"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstad"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Alprovenzalesch"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent an d’Grenadinnen"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britesch Joffereninselen"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikanesch Joffereninselen"_s)
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
			$of("Alnordesch"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Australien an Neiséiland"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Westarmenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesien"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Traditionell Zortéierregelen"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesescht Inselgebitt"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("Novial"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"Hepburn-Romaniséierung"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Walliserdäitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
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
			$of("%%KSCOR"_s),
			$of("Standard-Rechtschreiwung"_s)
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
			$of(u"Ouni Schrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Battakesch"_s)
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
			$of(u"Standard Zortéierreiefolleg"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombardesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Pangwe-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Balanka-Dialekt vun Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Zeechesprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Südafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Zhuyin-Zortéierregelen"_s)
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
			$of("Onbekannt Regioun"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Runeschrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601-Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nord-Sotho-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Rotse-Sprooch"_s)
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
			$of("Vereinfacht-Chinesesch Finanzzifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Erweidert arabesch-indesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Vollbreet Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hethitesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Darginesch"_s)
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
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Al-Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurtesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Réimesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jakutesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Lettgallesch"_s)
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
			$of("Jiddesch-Persesch"_s)
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
			$of("Aluku-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Miao-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Belutschesch"_s)
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
			$of("Olulujia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bairesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Jiddesch-Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Europäescht Spuenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Schottesch"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sizilianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchasesch"_s)
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
			$of(u"Ghomálá’"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonesesch"_s)
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
			$of("Katakana oder Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassaresesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Awaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbaidschanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Osojane-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("Phonetescht Unifon-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baschkiresch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Radikal-Stréch-Zortéierregelen"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Wäissrussesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara-Sprooch"_s)
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
			$of("Bretonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnesch"_s)
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
			$of("Laotesch Zifferen"_s)
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
			$of("Selkupesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyra Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tschetschenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Revidéiert Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tschechesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kiercheslawesch"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tschuwaschesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Walisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Ethiopesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Dänesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Europäescht Portugisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Däitsch"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Bedauye"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"Jütesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Aliresch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongolesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Maldivesch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Latäinamerikanescht Spuenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("Betawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Bhutanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Chinesesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("Klassescht Chinesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("Samogitesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Griichesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldawesch"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Englesch"_s)
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
			$of("Lasesch Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Traditionellt Chinesesch - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spuenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskesch"_s)
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
			$of("Uewersorbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Schan-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Vereinfacht"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Westlech Zifferen"_s)
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
			$of("Tschadesch-Arabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiang-Chinesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fidschianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantonesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Färöesch"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Mbundu-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Franséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Westfriesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Iresch"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Schottescht Gällesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galizesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhodschpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Onbestëmmt Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Ethiopesche Kalenner \"Amete Alem\""_s)
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
			$of("Bikol-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri-Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroatesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ungaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Phonetesch (IPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Tibetesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Mëttelfranséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Alfranséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Frankoprovenzalesch"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Ostfriesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjaresesch"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Nordfriesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Islännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italienesch"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Nidderschlesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malaysesch"_s)
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
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Südsamesch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shaw-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maduresesch"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule-Lappesch"_s)
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
			$of("Inari-Lappesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Blackfoot-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("Wu-Chinesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt-Lappesch"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Manding-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongolesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Massai-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasachesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Grönlännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kambodschanesch"_s)
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
			$of("Kanuri-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaschmiresch"_s)
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
			$of("Kurdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Latäin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Lëtzebuergesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgesch"_s)
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
			$of("Friulesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litauesch"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Lettesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagassi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marschallesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Unicode-Zortéierung"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Mazedonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
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
			$of("Malaiesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltesesch"_s)
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
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Niddersorbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Allgemeng Sich"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegesch Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nord-Ndebele-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandaresesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Hollännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegesch Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegesch"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Süd-Ndebele-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpakesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabylesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Polytonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Okzitanesch"_s)
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
			$of("Mende-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"Fréit Modernt Englesch"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Armenesch Zifferen"_s)
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
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC-Romaniséierung, Editioun vun 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardinesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Srananesch"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Pandschabesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer-Sprooch"_s)
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
			$of("Bachtiaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polnesch"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Mëttelhollännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi-Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paschtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Mëtteliresch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Zortéierung"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brasilianescht Portugisesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Bohorič-Alphabet"_s)
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
			$of("bra"_s),
			$of("Braj-Bhakha"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Kalenner"_s)
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
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Myanmar-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotekesch"_s)
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
			$of("Saterfriesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rätoromanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Währung"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumänesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriya-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Chinesesch Dezimalzuelen"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russesch"_s)
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
			$of("Ruandesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Australescht Englesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Vereenheetlecht Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardesch"_s)
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
			$of("Nordsamesch"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serbo-Kroatesch"_s)
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
			$of("Sumeresch"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowakesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slowenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoanesch"_s)
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
			$of("Arabesch-indesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Süd-Sotho-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanesesch"_s)
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
			$of("Schwedesch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suaheli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Traditionell-Chinesesch Finanzzifferen"_s)
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
			$of("Asien"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjatesch"_s)
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
			$of("Tadschikesch"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thailännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Kanadescht Englesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongaesch"_s)
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
			$of("Japanesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tierkesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Komoresch"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tataresch"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitesch"_s)
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
			$of("Uiguresch"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Alitalesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Onbestëmmt"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"Seelännesch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Koptesche Kalenner"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Standardiséiert Resianesch Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalmückesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbekesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Nei Däitsch Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kalenner vun der Republik China"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Sakesch"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
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
			$of("Alsyresch"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Quiché-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("Kichwa (Chimborazo-Gebidder)"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Wallounesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagausesch"_s)
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
			$of("Gan-Chinesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("Kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Sumeresch-akkadesch Keilschrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Marokkanescht Standard-Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Modernt Héicharabesch"_s)
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
			$of("Mandschuresch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Laténgesch-Fraktur-Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Schlesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Meithei-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Laténgesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Laténgesch-Gällesch Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Vereinfacht-Chinesesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Traditionell-Chinesesch Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Réimesch Zifferen a Klengschrëft"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka-Dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lykesch"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("Zoroastrianescht Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Klassescht Franséisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddesch"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi-Sprooch"_s)
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
			$of("es_MX"_s),
			$of("Mexikanescht Spuenesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Westsyresch"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Syresch-Estrangelo-Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Karesch"_s)
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
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Alpermesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Telefonsbuch-Zortéierung"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Japanesch Finanzzifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("West-Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Ostsyresch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reforméiert Zortéierreiefolleg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyptesch-Demotesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyptesch-Hieratesch"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Kiembu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Egyptesch Hieroglyphen"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Chinesesch (vereinfacht)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permiak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Alungaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Al Däitsch Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraeanesch"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Venezesch"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Chinesesch (traditionell)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Wepsesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilokano-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencianesch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Zypriotesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Eenheetlecht Tierkescht Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("Serbesch mat Ijekavian-Aussprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmukhi-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Méisproocheg"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee-Sprooch"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitesch"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertesesch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Allgemeng Rechtschreiwung"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Karibesch"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil-Zifferen"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karatschaiesch-Balkaresch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Inguschesch"_s)
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
			$of("krl"_s),
			$of("Karelesch"_s)
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
			$of("Zuelen"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Oraon-Sprooch"_s)
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

LocaleNames_lb::LocaleNames_lb() {
}

$Class* LocaleNames_lb::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lb, name, initialize, &_LocaleNames_lb_ClassInfo_, allocate$LocaleNames_lb);
	return class$;
}

$Class* LocaleNames_lb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun