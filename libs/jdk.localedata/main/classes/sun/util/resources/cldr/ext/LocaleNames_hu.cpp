#include <sun/util/resources/cldr/ext/LocaleNames_hu.h>

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

$MethodInfo _LocaleNames_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hu_MethodInfo_
};

$Object* allocate$LocaleNames_hu($Class* clazz) {
	return $of($alloc(LocaleNames_hu));
}

void LocaleNames_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_JP, u"Japán"_s);
	$var($String, metaValue_zbl, u"Bliss jelképrendszer"_s);
	$var($String, metaValue_Hant, u"Hagyományos"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kölsch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandéz"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Szimbólum"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atszam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"márvári"_s)
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
			$of(u"Gniva/Njiva tájszólás"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("csakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"óegyiptomi"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radzsasztáni"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"teszó"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"terenó"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongai"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Egyesült Arab Emírségek"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamand"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antigua és Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Etióp naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Időzóna"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albánia"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Örményország"_s)
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
			$of("Antarktisz"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argentína"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Feliratos parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikai Szamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Ausztria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ausztrália"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("amerikai angol"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbajdzsán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Keleti örmény"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosznia-Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("szebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Banglades"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumük"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"közép felső német"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of(u"Ószogd"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulgária"_s)
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
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzjány"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolívia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Holland Karib-térség"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brazília"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahama-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("szoga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bhután"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarusz"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"Látható beszéd"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Perzsa naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Héber számok"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kókusz (Keeling)-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mázanderáni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongó – Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Közép-afrikai Köztársaság"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongó – Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Svájc"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elefántcsontpart"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-szigetek"_s)
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
			$of(u"Kína"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton-sziget"_s)
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
			$of(u"Zöld-foki Köztársaság"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Karácsony-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Ciprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Csehország"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekadzsuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("Szogd"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Németország"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ófelső német"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"achinéz"_s)
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
			$of("type.nu.deva"_s),
			$of(u"Dévanágari számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Dzsibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dánia"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("akoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Vakírás"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Brámi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Örmény kisbetűs számok"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikai Köztársaság"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"gót"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigré"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Algéria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangaszinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Fél szélesség"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Ceuta és Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("csibcsa"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampangan"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Észtország"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egyiptom"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Nyugat-Szahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"csagatáj"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palaui"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"csukéz"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("csinuk zsargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"csipevé"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"csoktó"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cseroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Spanyolország"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiópia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Európai Unió"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamit"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gergely-naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Eurózóna"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("csejen"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gudzsaráti számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finnország"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fidzsi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronézia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Földrajzi helyvariáns"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Feröer szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Franciaország"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelaui"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"grebó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indiai nemzeti naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ógörög"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votják"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Egyesült Királyság"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigériai pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Grúzia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Francia Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Ghána"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Gibraltár"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grönland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"közép angol"_s)
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
			$of(u"Egyenlítői-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Görögország"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Déli-Georgia és Déli-Sandwich-szigetek"_s)
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
			$of("GW"_s),
			$of("Bissau-Guinea"_s)
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
			$of(u"Új tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"közép-ázsiai kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"nincs nyelvészeti tartalom"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"osztrák német"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hongkong KKT"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard-sziget és McDonald-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Horvátország"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("agem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"svájci német"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Iszlám Umm al-Qura naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Magyarország"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamasek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanári-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"min nan kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonézia"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"óperzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Írország"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"nápolyi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Man-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Európai rendezési szabályok"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Brit Indiai-óceáni Terület"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Irán"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Izland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Olaszország"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Matematikai jelrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Thai számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Számítógép"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengáli számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Iszlám naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Bengáli"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordánia"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Késői közép francia 1606-ig"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("guszii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("nyugati nyasza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kajah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Sziddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"svájci felnémet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetikus rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddhista naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgizisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comore-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saint Kitts és Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Származtatott"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("kanadai francia"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Észak-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Dél-Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard fonetikus"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"svájci francia"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kajmán-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazahsztán"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cirill"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosz"_s)
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
			$of(u"főniciai"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Óegyházi szláv cirill"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("gvicsin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("Luna1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"alsónémet"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Srí Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkád"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libéria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"Könyv pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Litvánia"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Lettország"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Líbia"_s)
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
			$of("%%LAUKIKA"_s),
			$of("Laukika"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marokkó"_s)
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
			$of(u"Montenegró"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagaszkár"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vai számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Észak-Macedónia"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongólia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Makaó KKT"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Északi Mariana-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritánia"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Málta"_s)
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
			$of(u"dél-altaji"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldív-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mexikó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Japán naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajzia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Felriatos pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Szubszaharai Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Héber naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Szótári rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Új-Kaledónia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Wade-Giles átírás"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Egyesített átdolgozott helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk-sziget"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigéria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"tarokó"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Hollandia"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norvégia"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nepál"_s)
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
			$of("Phnx"_s),
			$of(u"Főniciai"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"csimsiáni"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Új-Zéland"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("roma"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitikus"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"krími tatár"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"óangol"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of("Petr1708"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("szeszelva kreol francia"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"Óperzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Iszlám civil naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kasub"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("brit angol"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francia Polinézia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Pápua Új-Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Fülöp-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Lengyelország"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint-Pierre és Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palesztin Autonómia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Balinéz"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Portugália"_s)
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
			$of(u"Görög kisbetűs számok"_s)
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
			$of(u"Héber"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Skót szabványos angol"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niuei"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Külső-Óceánia"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezg"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Világ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Észak-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Dél-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Redzsang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Óceánia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of("Sursilv"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Románia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Szerbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Oroszország"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manicheus"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugari"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Szaúd-Arábia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandai"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salamon-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"szavák"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Nyugat-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelle-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Szudán"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Közép-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Svédország"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Kelet-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"arámi"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Észak-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Szingapúr"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Szent Ilona"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Szűk stílusú sortörés"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Közép-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Szlovénia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Afrika déli része"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard és Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Szlovákia"_s)
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
			$of(u"Szenegál"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Szomália"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapucse"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Hagyományos tamil számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Dél-Szudán"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé és Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("nedzsdi arab"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Szíria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"jaó"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Szváziföld"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("aravak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japi"_s)
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
			$of(u"Amerikai mértékegységrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerika északi része"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- és Caicos-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("jangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Csád"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francia Déli Területek"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Thaiföld"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tádzsikisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Karib-térség"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Kelet-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("jemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Keresés hangul kezdő mássalhangzó szerint"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Türkmenisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunézia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Törökország"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad és Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajvan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asztúr"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzánia"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("ngumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Ismeretlen írásrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajna"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"aromán"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Kelet-Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvai"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"kongói szuahéli"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Dél-Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Délkelet-Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"hakka kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Dél-Európa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Szingaléz"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Az USA lakatlan külbirtokai"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Egyesült Nemzetek Szervezete"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Egyesült Államok"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawaii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"Akadémiai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Egyszerűsített kínai sorrend - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("porosz"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Üzbegisztán"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"közép-atlaszi tamazigt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Vonássorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikán"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"óprovánszi"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saint Vincent és a Grenadine-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brit Virgin-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikai Virgin-szigetek"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Vietnám"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogaj"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwo"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"óskandináv"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Ausztrálázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Nyugati örmény"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanézia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Wallis és Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronéziai régió"_s)
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
			$of("type.nu.finance"_s),
			$of(u"Pénzügyi számok"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"Hepburn romanizáció"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Előző rendezési sorrend a kompatibilitás érdekében"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Szamoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"vasó"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Pszeudo-nyelvjárások"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"varaó"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Pszeudo-kétirányú"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"awádi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polinézia"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Koszovó"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gudzsaráti"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Íratlan nyelvek kódja"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
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
			$of(u"n’kó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Normál rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Reziján"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of("Sutsilv"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Jelírás"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Dél-afrikai Köztársaság"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Tág stílusú sortörés"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Devanagári"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Grúz számok"_s)
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
			$of(u"pinjin átírás"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Ismeretlen körzet"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runikus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Méterrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mongó"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"északi szeszotó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telugu számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("louisianai kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Egyszerűsített kínai pénzügyi számok"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Kibővített arab-indiai számjegyek"_s)
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
			$of(u"Teljes szélességű számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Maja hieroglifák"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"északi luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Emodzsi rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Kopt"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klasszikus newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
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
			$of("szandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Római számok"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("szaha"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"szamaritánus arámi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("szamburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"szantáli"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Berber"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"zsidó-perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Szám"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Natív számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmuki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aluku dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of("Biszkajan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Teljes szélesség"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("szangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"nyamvézi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"nyoró"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filippínó"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delavár"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("balucsi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("szlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balinéz"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugariti"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("lujia"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basza"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"zsidó-arab"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"európai spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"skót"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"szicíliai"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abház"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Nasztalik"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avesztán"_s)
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
			$of("bbj"_s),
			$of("gomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amhara"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonéz"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza/Solbica tájszólás"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arab"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Katakana vagy hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"asszámi"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Lineáris A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Lineáris B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"dél-kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbajdzsáni"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco/Osojane tájszólás"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baskír"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Szótővonás rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belarusz"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bolgár"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("tibeti"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosnyák"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("szeneka"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Burmai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("szena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"szölkup"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalán"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("kojra-szenni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("csecsen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"csamoró"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Átdolgozott helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korzikai"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"krí"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("cseh"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"egyházi szláv"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("csuvas"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Etióp számok"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Ji"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dán"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"európai portugál"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"német"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Normál pénznemformátum"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("bedzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Buginéz"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"óír"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongol számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("latin-amerikai spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kínai naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Görög számok"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Normál stílusú sortörés"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldvai"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"görög"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("angol"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"eszperantó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Hagyományos kínai sorrend - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"észt"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han bopomofóval"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baszk"_s)
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
			$of(u"Szamaritán"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"felső-szorb"_s)
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
			$of("san"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Egyszerűsített"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Nyugati számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"csádi arab"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"xiang kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("finn"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fidzsi"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("nyugati beludzs"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kantoni"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"feröeri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francia"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"szidamó"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"nyugati fríz"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ír"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skóciai kelta"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("gallego"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bodzspuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("ismeretlen nyelv"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etióp amete alem naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudzsaráti"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("man-szigeti"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausza"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"héber"_s)
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
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"horvát"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("haiti kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("magyar"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"örmény"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("cajun francia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA fonetika"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonéz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibeti számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igbó"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"szecsuán ji"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"közép francia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of("Rumgr"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ófrancia"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"idó"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"keleti fríz"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"északi fríz"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("izlandi"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("olasz"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of("Hongorszk"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japán"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Malajálam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Szarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"déli számi"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"jávai"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Shaw ábécé"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of("Bauddha"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurai"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"lulei számi"_s)
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
			$of(u"inari számi"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"grúz"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makaszar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"wu kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"kolta számi"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"mandingó"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"Gót"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazah"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grönlandi"_s)
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
			$of("koreai"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kasmíri"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Avesztán"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurd"_s)
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
			$of("kirgiz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("szoninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luxemburgi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malajálam számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgi"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibeti"_s)
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
			$of(u"Angolszász mértékegységrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litván"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("lett"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgas"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshalli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Alapértelmezett Unicode rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macedón"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malajálam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maráthi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"maláj"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"máltai"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("burmai"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Szaurastra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Örmény"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"moksán"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"alsó-szorb"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Birodalmi arámi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("naurui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Általános célú keresés"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norvég (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"északi ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepáli"_s)
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
			$of("holland"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norvég (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norvég"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"déli ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navahó"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("kara-kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("nyandzsa"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kacsin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabije"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonikus"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okszitán"_s)
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
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("ojibva"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Örmény számok"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("odia"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"oszét"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"ALA-LC romanizáció, 1997-es kiadás"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardi"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("mauritiusi kreol"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"szranai tongó"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pandzsábi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("szerer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Reziján lipovaz tájszólás"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("lengyel"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"közép holland"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Dangi naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of("Vallader"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pastu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugál"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"közép ír"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Rendezési sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"brazíliai portugál"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"makua-metó"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Pénznemformátum"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of("Jauer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of("Surmiran"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 órás rendszer (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 órás rendszer (0–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"szahó"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Mianmari számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kecsua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapoték"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of("Vaidika"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Etióp"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of("Jyutping"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 órás rendszer (0–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 órás rendszer (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rétoromán"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Pénznem"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"román"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Orija számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Kínai tizedes számok"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("orosz"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("koszi"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarvanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("szukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ausztrál angol"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("szanszkrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Egyesített helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"szardíniai"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("szuszu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("szindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"északi számi"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"szangó"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"szerbhorvát"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"szingaléz"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumér"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"szlovák"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"szlovén"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("szamoai"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("sona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"szomáli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arab-indiai számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albán"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("szerb"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("sziszuati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Könyvelési pénznemformátum"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"déli szeszotó"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"Jávai"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"szundanéz"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"svéd"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"szuahéli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Hagyományos kínai pénzügyi számok"_s)
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
			$of("tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burját"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Közép-Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Nyugat-Ázsia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tadzsik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"buginéz"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("kanadai angol"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"türkmén"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"szecsuáni"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongai"_s)
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
			$of(u"Japán számok"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"török"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("conga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("comorei"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Csakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatár"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("diula"_s)
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
			$of(u"San Giorgo/Bila tájszólás"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Európa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Kelet-Európa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Észak-Európa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Nyugat-Európa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgur"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Régi olasz"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koreai"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Meghatározatlan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrán"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Kopt naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Szabványosított reziján helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmük"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"üzbég"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kaszi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996-os német helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"alsószász"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Sylheti nagári"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kínai köztársasági naptár"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnámi"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"kotanéz"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"kojra-csíni"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Óraformátum (12 – 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskijevica helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"klasszikus szír"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Oszmán"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kicse"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"szír"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Görög"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"gan kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"Lídiai"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Ékírásos suméro-akkád"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"marokkói tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"modern szabványos arab"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Egyesített kanadai őslakos jelek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of("Fonxsamp"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gajo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("mandzsu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Fraktur latin"_s)
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
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gael latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Egyszerűsített kínai számok"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Hagyományos kínai számok"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("xhosza"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Római kisbetűs számok"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka dialektus"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"Líciai"_s)
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
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"kakó"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Korai modern francia"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jiddis"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("moszi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Szíriai"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("joruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Hagyományos számok"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"spanyol (mexikói)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Nyugat-szíriai"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ottomán török"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Estrangelo szíriai"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("zsuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Kari"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalendzsin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"Ópermikus"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Sortörés stílusa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Telefonkönyv sorrend"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monoton"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Grúz"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japán pénzügyi számok"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Csám"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Kelet-szíriai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Átalakított rendezési elv"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyiptomi demotikus"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyiptomi hieratikus"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of("Itihasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Egyiptomi hieroglifák"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Grúz kucsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"egyszerűsített kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permják"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Ómagyar"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Hagyományos német helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrei"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"hagyományos kínai"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Szundanéz"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Khmer számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilokó"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Ciprusi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Egyesített türkic latin ábécé"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Gurmuki számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"többszörös nyelvek"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of("Puter"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Mértékegységrendszer"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"krík"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitikus"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("ikiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Meghatározatlan helyesírás"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Cseroki"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamil számjegyek"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karacsáj-balkár"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingus"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karelai"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Számok"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kuruh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("sambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_hu::LocaleNames_hu() {
}

$Class* LocaleNames_hu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hu, name, initialize, &_LocaleNames_hu_ClassInfo_, allocate$LocaleNames_hu);
	return class$;
}

$Class* LocaleNames_hu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun