#include <sun/util/resources/cldr/ext/LocaleNames_fi.h>

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

$MethodInfo _LocaleNames_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fi_MethodInfo_
};

$Object* allocate$LocaleNames_fi($Class* clazz) {
	return $of($alloc(LocaleNames_fi));
}

void LocaleNames_fi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bax, "bamum"_s);
	$var($String, metaValue_doi, "dogri"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_mak, "makassar"_s);
	$var($String, metaValue_men, "mende"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandeesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbolit"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("taithamin tham-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("emilia"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji-symbolit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("sloveenin resian Gnivan/Njivan alamurre"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("mingreli"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("muinaisegypti"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radžastani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("khutabadi-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension-saari"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"kapverdenkreolin barlaventolainen murreryhmä"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("sinhalan lith-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Arabiemiirikunnat"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flaami"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ja Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("mro-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("etiopialainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"aikavyöhyke"_s)
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
			$of("Teng"_s),
			$of("tengwar"_s)
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
			$of("Argentiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("piirtokirjoitusparthialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikan Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Itävalta"_s)
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
			$of("amerikanenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Ahvenanmaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaidžan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"itäarmenialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia ja Hertsegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumykki"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"keskiyläsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("muinaissogdialainen"_s)
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
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ersä"_s)
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
			$of("Karibian Alankomaat"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama"_s)
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
			$of(u"Bouvet’nsaari"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Valko-Venäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"näkyvä puhe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("persialainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of("oksitaanin Croissantin variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("heprealaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of(u"kitaanin pieni merkistö"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kookossaaret (Keelingsaaret)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazandarani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongon demokraattinen tasavalta"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Keski-Afrikan tasavalta"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongon tasavalta"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Sveitsi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Norsunluurannikko"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookinsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clippertoninsaari"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuuba"_s)
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
			$of("Joulusaari"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypros"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("balilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tšekki"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("zotuallai"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"länsiflaami"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"klassinen volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("sogdialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"muinaisyläsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"atšeh"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of("goankonkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagarinumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Tanska"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"atšoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("braille-pistekirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("armenialaiset piennumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikaaninen tasavalta"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gootti"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("maininfrankki"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("ideogrammin puolikkaan levyinen"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta ja Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"tšibtša"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamentu"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Viro"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypti"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Länsi-Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"tšagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("chinook-jargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of("matemaattiset lihavoidut numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Espanja"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Euroopan unioni"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("gregoriaaninen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("euroalue"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"gudžaratilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("induslainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyge"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("tunisianarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Suomi"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandinsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("maavalinnan muunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamililainen"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Ranska"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of("yksinkertaistettu kielimuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("picardi"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("sloveenin Dajnko-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("intialainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnoli"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("muinaiskreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("tsahuri"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("vatja"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Iso-Britannia"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("nigerianpidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Ranskan Guayana"_s)
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
			$of("tailelainen"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grönlanti"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("keskienglanti"_s)
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
			$of(u"Päiväntasaajan Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Etelä-Georgia ja Eteläiset Sandwichinsaaret"_s)
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
			$of("pennsylvaniansaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("matemaattiset tasalevyiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("uusi tailuelainen"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"soranî"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ei kielellistä sisältöä"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"džurtšen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"tališi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of("oksitaanin vivaro-alpiininen variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"itävallansaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hongkong – Kiinan erityishallintoalue"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vailainen"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard ja McDonaldinsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("sveitsinsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("islamilainen Umm al-Qura -kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Unkari"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("tarifit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamašek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanariansaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("min nan -kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("muinaispersia"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("fulanin adlam-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("kayah li -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlanti"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("napoli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("ndyukan kreolimurre"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("sora sompeng -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("nabatealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Mansaari"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Intia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"yleiseurooppalainen lajittelujärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Brittiläinen Intian valtameren alue"_s)
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
			$of("Islanti"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matemaattinen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thainumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"tietokonemäärittely POSIX"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("pfaltsi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("kyrilliset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islamilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"serbian ekavialainen ääntämys"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordania"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"myöhäiskeskiranska"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of("puolan kociewielainen murre"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("malawintonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannadalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddham-tavukirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"sveitsinyläsaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"äänteellinen järjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("inkeroinen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddhalainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latinalainen Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgisia"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodža"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorit"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ja Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("kannadalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("peritty"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("kanadanranska"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Pohjois-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Etelä-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollardin foneettinen"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("sveitsinranska"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok-pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Caymansaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kyrillinen"_s)
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
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("foinikia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("kyrillinen muinaiskirkkoslaavimuunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwitšin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"venäjän ortografia 1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("alasaksa"_s)
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
			$of("akkadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kopti"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("hmongin nyiakeng puachue"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("alaskanjupik"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("kirjapahlavilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Liettua"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sorang sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of("klassinen sanskriitti"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("mahajanilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("lango"_s)
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
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nüshu"_s)
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
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallinsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleutti"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("thailainen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("vai-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Pohjois-Makedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"matemaattiset kaksoislyöntinumerot"_s)
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
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macao – Kiinan erityishallintoalue"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("gegi"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Pohjois-Mariaanit"_s)
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
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("horemzi"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediivit"_s)
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
			$of("japanilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("piirtokirjoituspahlavilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of("oksitaanin Aranin laakson variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Saharan eteläpuolinen Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("juutalainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"sanakirjajärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Uusi-Kaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("kiinan Wade-Giles-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turojo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"kornin uusittu yhtenäiskirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkinsaari"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("psalttaripahlavilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Alankomaat"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norja"_s)
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
			$of("tsakonia"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("foinikialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsimši"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Uusi-Seelanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("meroiittinen kursiivikirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("portugalin oikeinkirjoitus 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("romani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroiittinen"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krimintataari"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("muinaisenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of("oksitaanin Mistral-vaikutteinen ortografia"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"venäjän Pietarin siviiliaakkosto 1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("seychellienkreoli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("hmongin nyiakeng puachue -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("muinaispersialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("pahawh hmong -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islamilainen siviilikalenteri, perjantai-epookki"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašubi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("britannianenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("tati"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Ranskan Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Uusi-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippiinit"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("oksitaanin Nizzan variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Puola"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre ja Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestiinalaisalue"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("kreikkalaiset piennumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("heprealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("skotlanninenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("jamaikankreolienglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("piemonte"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Oseanian erillissaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("extremadura"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("ahom-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("uralilainen foneettinen aakkosto UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("takri-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"kapverdenkreolin sotaventolainen murreryhmä"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("maailma"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Pohjois-Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Etelä-Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("lingua franca nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("pontoksenkreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oseania"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("elymealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("retoromaanin sursilvan-muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Venäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("uudet tai lue -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("sloveenin Metelko-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manikealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaritilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("kharosthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomonsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Länsi-Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellit"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Väli-Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Ruotsi"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Itä-Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("valtakunnanaramea"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Pohjois-Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("tarkka rivinvaihto"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Keski-Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("myanmarin tai laing -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"eteläinen Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard ja Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("woleai"_s)
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
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("perinteiset tamilinumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Etelä-Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé ja Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("algerianarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arabia – najd"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syyria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("jao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("egyptinarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("marokonarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japi"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("rotuma"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"yhdysvaltalainen mittajärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("pohjoinen Amerikka"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks- ja Caicossaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Tšad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("burmalainen zawgyi-toteutus"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Ranskan eteläiset ja antarktiset alueet"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("amerikkalainen viittomakieli"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thaimaa"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadžikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibia"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Itä-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("haku hangul-alkukonsonantin mukaan"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("englannin boontling-murre"_s)
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
			$of("%%NULIK"_s),
			$of(u"nykyvolapük"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ja Tobago"_s)
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
			$of("asturia"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("ruteeni"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"tuntematon kirjoitusjärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudabadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("liguuri"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("aromania"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Itä-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuva"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kingwana"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Etelä-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Kaakkois-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka-kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"pinyin-järjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Etelä-Eurooppa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("sinhalilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Yhdysvaltain erillissaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("liivi"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Yhdistyneet kansakunnat"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Yhdysvallat"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("havaiji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"valkovenäjän virallinen oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of("bulgarian 1899 ortografia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"yksinkertaistettu kiinalainen järjestys GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("muinaispreussi"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("keskiatlaksentamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"piirtojärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikaani"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("muinaisprovensaali"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ja Grenadiinit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of("esperanton h-kirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Brittiläiset Neitsytsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Yhdysvaltain Neitsytsaaret"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of("oksitaanin Limousin-alueen variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("soyombo-kirjaimisto"_s)
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
			$of(u"tiibetiläinen marchan-kirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("muinaisnorja"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australaasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"länsiarmenialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ja Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"perinteinen järjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikronesian alue"_s)
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
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("talousnumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("japanin Hepburn-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"aiempi lajittelujärjestys yhteensopivuutta varten"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("meetei mayek -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("wolaitta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("pseudoaksentit"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("kaksisuuntainen pseudo"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("kornin Kernowek-ortografia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("brahmilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gudžaratilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("kirjoittamaton"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("batakilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("bliss-symbolit"_s)
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
			$of(u"normaalijärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardi"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of(u"zanabazar-neliökirjaimisto"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("aniin balankalaismurre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("sloveenin resian murre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("retoromaanin sutsilvan-muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
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
			$of("cham-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("englannin newfoundlandilaismurre"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Etelä-Afrikka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("sundalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"väljä rivinvaihto"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"zhuyin-järjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("kiinan pinyin-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("tuntematon alue"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("riimukirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"metrijärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO 8601 -kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("pohjoissotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugulaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("louisianankreoli"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of("Kirshenbaumin foneettinen aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of("akanin asante-variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of("oksitaanin Auvergnen variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"fidžinhindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("yksinkertaistetut kiinalaiset talousnumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaino"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("laajennetut arabialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("ideografin levyiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("heetti"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargi"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maya-hieroglyfit"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("pohjoisluri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"emojien lajittelujärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klassinen newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurtti"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"khmeriläinen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of("pohjoisamerikkalainen foneettinen aakkosto NAPA"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("islamilainen saudiarabialainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbulainen"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("roomalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakuutti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"šarada-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("latgalli"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("samarianaramea"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("kaukasianalbanialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("englannin scouse-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("juutalaispersia"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"sauraštri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("numeerinen muunnos"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("kielen omat numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("alukun kreolimurre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("dives akuru -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luluanluba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("baskin biskajalaismurre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("tirhuta-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("ideogrammin levyinen"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luiseño"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of("oksitaanin italialaisvaikutteinen ortografia"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lusai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"belutši"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("bali"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugarit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of("varang kshiti -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"meänkieli"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("baijeri"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of("portugalin oikeinkirjoitus 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("juutalaisarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("euroopanespanja"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("skotti"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sisilia"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abhaasi"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak-toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("avesta"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of("chakmalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhara"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("sloveenin resian Stolvizzan/Solbican alamurre"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("japanilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"japanin tavumerkistöt"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assami"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sassarinsardi"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("lineaari-A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avaari"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("lineaari-B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"eteläkurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aimara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("azeri"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("rohinjalainen hanifi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of("oksitaanin luoteisitalialainen variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("sloveenin resian Oseaccon/Osojanen alamurre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("englannin foneeminen unifon-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"radikaali- ja piirtojärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"valkovenäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("jaavalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tiibet"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("bretoni"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("sanskritin bhaiksuki-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("burmalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laolaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("selkuppi"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalaani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"tšetšeeni"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"tšamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("uudistettu oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("orijalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"tšekki"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kirkkoslaavi"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"ñeengatú"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"tšuvassi"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("kymri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"yiläinen"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("tanska"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("euroopanportugali"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("saksa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("valuuttojen vakioesitysmuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bedža"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("juutti"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("bugilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("muinaisiiri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("mongolialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("amerikanespanja"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("betawi"_s)
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
			$of("kiinalainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("klassinen kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraserin aakkoset"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("djerma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("samogiitti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("kreikkalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("fut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("normaali rivinvaihto"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("englanti"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("lazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"perinteinen kiinalainen järjestys Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("espanja"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("viro"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("kiinan han ja bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhidilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("samarianaramealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tašelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"yläsorbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("kiinalainen han"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of("skotin ulster-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoolainen"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("persia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("yksinkertaistettu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"länsimaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("perinteinen"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"tšadinarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang-kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("suomi"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"länsibelutši"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantoninkiina"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"fääri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("mbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("ranska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of("akanin akuapem-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"länsifriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("iiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("wancholainen"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("gaeli"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("gondin gunjala"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicia"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("masaram-gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhodžpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("tuntematon kieli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("etiopialainen amete alem -kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudžarati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("islamilainen matemaattinen kalenteri, torstai-epookki"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manksi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("osmanjalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("heprea"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri-motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("unkari"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajunranska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"kansainvälinen foneettinen aakkosto IPA"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("korean hangulin jamo-elementit"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"tiibetiläiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of("oksitaanin Gasconyn variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuanin-yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("keskiranska"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("retoromaanin rumantsch grischun -muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("portugalin oikeinkirjoitussopimus 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("muinaisranska"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("arpitaani"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"itäfriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("pohjoisfriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islanti"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italia"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("sleesiansaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of("englannin cornu-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"norjan högnorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("japani"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("malajalamilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"muinaiseteläarabialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(metaValue_doi)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("lepchanumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"eteläsaame"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("jaava"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"shaw’lainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("sanskriitin buddhalainen sekamuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madura"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("luulajansaame"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inarinsaame"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("wu-kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("koltansaame"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("goottilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("maasai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanjama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazakki"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("korea"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepchalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("avestalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("korni"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiisi"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("multanilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("hatralainen"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malajalamilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tiibetiläinen"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friuli"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"brittiläinen mittajärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("taithamin hora-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("liettua"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("katanganluba"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdi"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagassi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Unicoden oletusjärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("malajalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongoli"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malaiji"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("malta"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burma"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("armenialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokša"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("alasorbi"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("valtakunnanaramealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"yleishakujärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norjan bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("pohjois-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("hollanti"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norjan nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norja"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of("provensaali"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"etelä-ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("modi-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of("osagen aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("karakalpakki"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njandža"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"katšin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabyyli"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("polytoninen kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitaani"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("varhaisnykyenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"odžibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armenialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kavi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("dusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("orija"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("modi-aakkoset"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osseetti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("amerikkalainen kirjastolatinaistus 1997"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bišnupria"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandžabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("sloveenin resian Lipovazin/Lipovecin alamurre"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("paali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("bahtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("puola"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("keskihollanti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("saurashtra-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("reoromaanin vallader-muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paštu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugali"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("keski-iiri"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"lajittelujärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("brasilianportugali"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"sloveenin Bohorič-aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valuuttojen esitysmuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"n’ko-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradž"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("retoromaanin jauer-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("laolainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("retoromaanin surmiran-muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 tunnin järjestelmä (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 tunnin järjestelmä (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ketšua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapoteekki"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("sanskriitin veda-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("saterlandinfriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("kantoninkiinan jyutping-latinaistus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 tunnin järjestelmä (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 tunnin järjestelmä (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("retoromaani"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valuutta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("romania"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("afarin saho-murre"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("orijalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kiinalaiset desimaalinumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"venäjä"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("koose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blisskieli"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kapverdenkreoli"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("australianenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployén pikakirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"kornin yhtenäiskirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardi"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("pohjoissaame"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbokroaatti"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeri"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("sloveeni"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of("Ogdenin perusenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arabialaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("albania"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("valuuttojen laskentatoimen esitysmuoto"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"eteläsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("jaavalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("sloveenin natisonen murre"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("ruotsi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("wancholaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("perinteiset kiinalaiset talousnumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("tamili"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("burjaatti"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Keski-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Länsi-Aasia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadžikki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of("spanglish"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("norsunluurannikonkoro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("kanadanenglanti"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkmeeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turkki"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komori"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakmalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tataari"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of("esperanton x-kirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("djula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("tahiti"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("sloveenin resian San Giorgion/Bilan alamurre"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Eurooppa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Itä-Eurooppa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("hanifilaisen rohingyan numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"matemaattiset pääteviivattomat lihavoidut numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Pohjois-Eurooppa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Länsi-Eurooppa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("uiguuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("muinaisitalialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("korealainen"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"määrittämätön"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("seelanti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("koptilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("sloveenin resian murteen yhdenmukaistettu oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmukki"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbekki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("saksan uusi oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("alankomaidenalasaksa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("syloti nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("varang kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Kiinan tasavallan kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("khotani"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"tuntijärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"valkovenäjän taraškevitsa-oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("muinaissyyria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"matemaattiset pääteviivattomat numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanjalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kʼicheʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("gondin masaram-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"chimborazonylänköketšua"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("newarin newa-tavukirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("valloni"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauzi"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("syyria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("gondin gunjala-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("kreikkalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan-kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lyydialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"sumerilais-akkadilainen nuolenpääkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("vakioitu tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("yleisarabia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"kanadalaisten alkuperäiskansojen yhtenäistetty tavukirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"foneettinen X-SAMPA-merkistö"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mantšu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latinalainen fraktuuramuunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("sleesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("anatolialaiset hieroglyfit"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("latinalainen gaelimuunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("yksinkertaistetut kiinalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("perinteiset kiinalaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("roomalaiset piennumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of(metaValue_doi)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("bilin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("pamakan kreolimurre"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("lyykialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("zoroastrialaisdari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("moon-kohokirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("varhaisnykyranska"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jiddiš"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("syyrialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("perinteiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("meksikonespanja"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"syyrialainen läntinen muunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("osmani"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("syyrialainen estrangelo-muunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("kaarialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("kiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"muinaispermiläinen"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("rivinvaihtotyyli"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"puhelinluettelojärjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotoninen kreikka"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("georgialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"šarada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("oksitaanin lengadocian variantti"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanilaiset talousnumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"tšamilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ge’ez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("vuorimari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"syyrialainen itäinen muunnelma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("myanmarin shan-numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("elbasanilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("muinaispohjoisarabialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("ol chiki -numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"uudistettu järjestys"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tagalogilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"egyptiläinen demoottinen"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"egyptiläinen hieraattinen"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("jesidi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("sanskriitin eeppinen muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("palmyralainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egyptiläiset hieroglyfit"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("muinaisgeorgialainen"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komipermjakki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("muinaisunkarilainen"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("saksan perinteinen oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("venetsia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of("pahawh-hmongin tavukirjoituksen toinen vaihe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of("pahawh-hmongin tavukirjoituksen kolmas vaihe"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of("pahawh-hmongin tavukirjoituksen viimeinen vaihe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("limbunumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundalainen"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"vepsä"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of("oksitaanin klassinen ortografia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"khmeriläiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("katalaanin valencian murre"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("muinaiskyproslainen"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("dives akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"yhtenäistetty turkkilainen latinalainen aakkosto"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"serbian ijekavialainen ääntämys"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhilaiset numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("Bornholmin murre"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"useita kieliä"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("retoromaanin puter-muoto"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"mittajärjestelmä"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("creek"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("glagoliittinen"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("kornin yleiskirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("cherokeelainen"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibi"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilinumerot"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karatšai-balkaari"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"inguuši"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karjala"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("englannin Oxfordin sanakirjan oikeinkirjoitus"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("numerot"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("telugulainen"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_fi::LocaleNames_fi() {
}

$Class* LocaleNames_fi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fi, name, initialize, &_LocaleNames_fi_ClassInfo_, allocate$LocaleNames_fi);
	return class$;
}

$Class* LocaleNames_fi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun