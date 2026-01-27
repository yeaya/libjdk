#include <sun/util/resources/cldr/ext/LocaleNames_pl.h>

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

$MethodInfo _LocaleNames_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pl_MethodInfo_
};

$Object* allocate$LocaleNames_pl($Class* clazz) {
	return $of($alloc(LocaleNames_pl));
}

void LocaleNames_pl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"gudżarati"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_ml, "malajalam"_s);
	$var($String, metaValue_or, "orija"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_chr, "czirokeski"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_phn, "fenicki"_s);
	$var($String, metaValue_syr, "syryjski"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"gwara kolońska"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("mirandyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbole"_s)
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
			$of("egl"_s),
			$of("emilijski"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("dialekt Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("megrelski"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("czakma"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("staroegipski"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"radźasthani"_s)
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
			$of("teo"_s),
			$of("ateso"_s)
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
			$of(u"Wyspa Wniebowstąpienia"_s)
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
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Zjednoczone Emiraty Arabskie"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua i Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("kalendarz etiopski"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"giliański"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("strefa czasowa"_s)
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
			$of("Antarktyda"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentyna"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("partyjski inskrypcyjny"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa Amerykańskie"_s)
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
			$of(u"angielski amerykański"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Wyspy Alandzkie"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbejdżan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"ormiański wchodni"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bośnia i Hercegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebuański"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesz"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumycki"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"średnio-wysoko-niemiecki"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bułgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrajn"_s)
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
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzja"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Niderlandy Karaibskie"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazylia"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
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
			$of("Wyspa Bouveta"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Białoruś"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Visible Speech"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("kalendarz perski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("cyfry hebrajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Wyspy Kokosowe"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mazanderański"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Demokratyczna Republika Konga"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Republika Środkowoafrykańska"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Szwajcaria"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Wyspy Cooka"_s)
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
			$of("Chiny"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Wyspa Clippertona"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostaryka"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Republika Zielonego Przylądka"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Wyspa Bożego Narodzenia"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cypr"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Czechy"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("zachodnioflamandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Niemcy"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("staro-wysoko-niemiecki"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("aceh"_s)
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
			$of("gom"_s),
			$of("konkani (Goa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("cyfry dewanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dżibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Dania"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("aczoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Braille’a"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"cyfry ormiańskie (małe litery)"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikana"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("gocki"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"meński frankoński"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("meitei mayek"_s)
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
			$of("DZ"_s),
			$of("Algieria"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"połowa szerokości"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta i Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("czibcza"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampango"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwador"_s)
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
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tiw"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Zachodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("czagatajski"_s)
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
			$of(u"żargon czinucki"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("maryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"czipewiański"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("czoktawski"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Erytrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Hiszpania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Unia Europejska"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamicki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"kalendarz gregoriański"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("strefa euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"czejeński"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"cyfry gudżarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adygejski"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("tunezyjski arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidżi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falklandy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezja"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("wariant regionalny"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Wyspy Owcze"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("tamilskie"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francja"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("pikardyjski"_s)
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
			$of("type.ca.indian"_s),
			$of("narodowy kalendarz hinduski"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("starogrecki"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("cachurski"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("wotiacki"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Wielka Brytania"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"pidżyn nigeryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzja"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Gujana Francuska"_s)
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
			$of("tai le"_s)
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
			$of("Grenlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"średnioangielski"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gwinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gwadelupa"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Gwinea Równikowa"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Grecja"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Georgia Południowa i Sandwich Południowy"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"pensylwański"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gwinea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingoński"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("nowy tai lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gujana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"brak treści o charakterze językowym"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"tałyski"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("niemiecki austriacki"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("SRA Hongkong (Chiny)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Wyspy Heard i McDonalda"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorwacja"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("szwajcarski niemiecki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("kalendarz islamski (Umm al-Kura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Węgry"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("tarifit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("tamaszek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Wyspy Kanaryjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"minnański"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezja"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("staroperski"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapolitański"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zazaki"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Wyspa Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"europejskie reguły określania kolejności"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Brytyjskie Terytorium Oceanu Indyjskiego"_s)
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
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Włochy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("notacja matematyczna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("cyfry tajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"wayúu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("komputerowy"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("cyfry bengalskie"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("palatynacki"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"kalendarz muzułmański"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("bengalskie"_s)
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
			$of("Japonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("szesnastowieczny francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("ajnu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga (Niasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("cyfry kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("wysokoniemiecki szwajcarski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("sortowanie fonetyczne"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("ingryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("kalendarz buddyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Ameryka Łacińska"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodża"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("dziedziczone"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("francuski kanadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Korea Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Korea Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"fonetyczny Pollard’a"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("francuski szwajcarski"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwejt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kajmany"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazachstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cyrylica"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liban"_s)
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
			$of(u"cyrylica staro-cerkiewno-słowiańska"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("dolnoniemiecki"_s)
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
			$of("akadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("koptyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"yupik środkowosyberyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"pahlawi książkowy"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litwa"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Łotwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladyński"_s)
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
			$of("lah"_s),
			$of("lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("taana"_s)
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
			$of(u"Mołdawia"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Czarnogóra"_s)
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
			$of("Wyspy Marshalla"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleucki"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("tajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Cyfry vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedonia Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mjanma (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("newarski"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("SRA Makau (Chiny)"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"albański gegijski"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Mariany Północne"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martynika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretania"_s)
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
			$of("capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("transliteracja UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"południowoałtajski"_s)
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
			$of("Meksyk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"kalendarz japoński"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezja"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("inskrypcyjne pahlawi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afryka Subsaharyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("kalendarz hebrajski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"sortowanie słownikowe"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nowa Kaledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"latynizacja Wade’a i Gilesa"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("zreformowana ortografia ujednolicona"_s)
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
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"pahlawi psałterzowy"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawh hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holandia"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegia"_s)
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
			$of(u"cakoński"_s)
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
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Nowa Zelandia"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"cygański"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("meroickie"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("krymskotatarski"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("staroangielski"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("kreolski seszelski"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("staroperskie"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("kalendarz islamski (metoda obliczeniowa)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("kaszubski"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("angielski brytyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("tacki"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinezja Francuska"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Nowa Gwinea"_s)
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
			$of("Polska"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre i Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoryko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Terytoria Palestyńskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("balijskie"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalia"_s)
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
			$of(u"cyfry greckie (małe litery)"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("hebrajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("standardowy szkocki angielski"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("jamajski"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("piemoncki"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Oceania — wyspy dalekie"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("estremadurski"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgijski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("fonetyczny"_s)
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
			$of("001"_s),
			$of(u"świat"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afryka"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Ameryka Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Ameryka Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("Lingua Franca Nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("pontyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunia"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rosja"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("manichejskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("ugaryckie"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("charosti"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabia Saudyjska"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("ponpejski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("mandejskie"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Wyspy Salomona"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Afryka Zachodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seszele"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Ameryka Środkowa"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Szwecja"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afryka Wschodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Afryka Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Wyspa Świętej Heleny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ścisły styl podziału wiersza"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Afryka Środkowa"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Słowenia"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Afryka Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard i Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Ameryka"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Słowacja"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("bamun"_s)
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
			$of("tradycyjne cyfry tamilskie"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sudan Południowy"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Wyspy Świętego Tomasza i Książęca"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("algierski arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salwador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arabski nadżdyjski"_s)
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
			$of("yao"_s),
			$of("yao"_s)
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
			$of("egipski arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"marokański arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("japski"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotumański"_s)
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
			$of(u"amerykański system miar"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Ameryka Północna (USA, Kanada)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks i Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Czad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francuskie Terytoria Południowe i Antarktyczne"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"amerykański język migowy"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tajlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadżykistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karaiby"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Wschodni"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Wyszukiwanie według początkowej spółgłoski hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("dialekt Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunezja"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turcja"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trynidad i Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tajwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"rusiński"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"orchońskie"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("ngumba"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("nieznane pismo"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("liguryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arumuński"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Azja Wschodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuwiński"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("kongijski suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Azja Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Azja Południowo-Wschodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("hakka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"porządek sortowania pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Europa Południowa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("syngaleskie"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Dalekie Wyspy Mniejsze Stanów Zjednoczonych"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("liwski"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Organizacja Narodów Zjednoczonych"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Stany Zjednoczone"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("hawajski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"chiński uproszczony porządek sortowania - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugwaj"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruski"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamazight (Atlas Środkowy)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"porządek akcentów"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Watykan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("staroprowansalski"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent i Grenadyny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Wenezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Brytyjskie Wyspy Dziewicze"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Wyspy Dziewicze Stanów Zjednoczonych"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Wietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogajski"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("staronordyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australazja"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"ormiański zachodni"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezja"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis i Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"tradycyjny porządek sortowania"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Region Mikronezji"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngombe"_s)
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
			$of(u"Liczebniki księgowe"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"poprzedni porządek sortowania, dla zgodności"_s)
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
			$of("wal"_s),
			$of("wolayta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("washo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudoakcenty"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waraj"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudodwukierunkowe"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezja"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosowo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"język bez systemu pisma"_s)
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
			$of("batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("symbole Blissa"_s)
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
			$of(u"standardowa kolejność sortowania"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("lombardzki"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("dialekt regionu Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("pismo znakowe"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majotta"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Republika Południowej Afryki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"luźny styl podziału wiersza"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("dewanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"cyfry gruzińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Nieznany region"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("runiczne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("system metryczny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("kalendarz ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"sotho północny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("cyfry telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kreolski luizjański"_s)
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
			$of("hif"_s),
			$of(u"hindi fidżyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"uproszczone chińskie cyfry księgowe"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("rozszerzone cyfry arabsko-indyjskie"_s)
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
			$of(u"cyfry o pełnej szerokości"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("hetycki"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargwijski"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"hieroglify Majów"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"luryjski północny"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("koptyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("newarski klasyczny"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurcki"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("khmerskie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("kalendarz islamski (Arabia Saudyjska, metoda wzrokowa)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("cyfry rzymskie"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("jakucki"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"łatgalski"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samarytański aramejski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("dialekt Scouse"_s)
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
			$of("tifinagh (berberski)"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("judeo-perski"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of("saurasztryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Liczbowe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Cyfry macierzyste"_s)
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
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"pełna szerokość"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
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
			$of("niamwezi"_s)
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
			$of(u"filipiński"_s)
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
			$of("mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"beludżi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("balijski"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("ugarycki"_s)
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
			$of("bawarski"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("judeoarabski"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"europejski hiszpański"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzema"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sycylijski"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abchaski"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("awestyjski"_s)
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
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amharski"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragoński"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("arabskie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("dialekt Stolvizza/Solbica"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japońskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"sylabariusze japońskie"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("asamski"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("sassarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("linearne A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("awarski"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("linearne B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"południowokurdyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("ajmara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"azerbejdżański"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("dialekt Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("baszkirski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("sortowanie wg kluczy i ich liczby kresek"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"białoruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bułgarski"_s)
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
			$of("bengalski"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tybetański"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretoński"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bośniacki"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneka"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"birmańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"cyfry laotańskie"_s)
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
			$of("selkupski"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"kataloński"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"czeczeński"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("czamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("ortografia zreformowana"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsykański"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("kri"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("czeski"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"cerkiewnosłowiański"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("czuwaski"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("walijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("cyfry etiopskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"duński"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("europejski portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("niemiecki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standardowy format waluty"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bedża"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("jutlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"bugińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("staroirlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Cyfry mongolskie"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("malediwski"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"amerykański hiszpański"_s)
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
			$of(u"kalendarz chiński"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"chiński klasyczny"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"dżerma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"żmudzki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("cyfry greckie"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"normalny styl podziału wiersza"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"mołdawski"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("grecki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("angielski"_s)
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
			$of("lazyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"chiński tradycyjny porządek sortowania - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"hiszpański"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estoński"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"chińskie z bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("baskijski"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"samarytański"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tashelhiyt"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"górnołużycki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"chińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("szan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("perski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("uproszczone"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("cyfry arabskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("tradycyjne"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulani"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("arabski (Czad)"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("xiang"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"fiński"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidżijski"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"beludżi północny"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantoński"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farerski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("transliteracja BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("zachodniofryzyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("szkocki gaelicki"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galicyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhodżpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"nieznany język"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Kalendarz etiopski Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("kalendarz islamski (metoda obliczeniowa, epoka astronomiczna)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("hebrajski"_s)
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
			$of("chorwacki"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"kreolski haitański"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"węgierski"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ormiański"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"cajuński"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"fonetyczny międzynarodowy"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonezyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"cyfry tybetańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"syczuański"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"średniofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("starofrancuski"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("franko-prowansalski"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("wschodniofryzyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"północnofryzyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("islandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"włoski"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"dolnośląski"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japoński"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"południowolapoński"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("jawajski"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("shawa"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madurski"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule"_s)
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
			$of("inari"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruziński"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("wu"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt"_s)
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
			$of("gotyckie"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuju"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masajski"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("kazachski"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("grenlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("khmerski"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"koreański"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kaszmirski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("awestyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kornijski"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("kirgiski"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"łaciński"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("luksemburski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("cyfry malajalam"_s)
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
			$of("limburski"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tybetańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulski"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laotański"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("imperialny system miar"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litewski"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"łotewski"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("sogdyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malgaski"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marszalski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"domyślna kolejność sortowania Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maoryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"macedoński"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("mongolski"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malajski"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltański"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"birmański"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ormiańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksza"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnołużycki"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("armi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"nauruański"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"wyszukiwanie ogólnego zastosowania"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norweski (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ndebele północny"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalski"_s)
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
			$of("niderlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norweski (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norweski"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndebele południowy"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("nawaho"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakałpacki"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"njandża"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kaczin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabylski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("politoniczny"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"oksytański"_s)
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
			$of(u"odżibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"cyfry ormiańskie"_s)
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
			$of("dtp"_s),
			$of("dusun centralny"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("bisznuprija-manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("kreolski Mauritiusa"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"pendżabski"_s)
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
			$of("dialekt Lipovaz w regionie Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("palijski"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("bachtiarski"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polski"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"średniowieczny niderlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"kalendarz koreański"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("paszto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"średnioirlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"kolejność sortowania"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("brazylijski portugalski"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makua"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("format waluty"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradź"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("kalendarz"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laotańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"system 24-godzinny (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"system 24-godzinny (1–24)"_s)
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
			$of(u"cyfry birmańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("keczua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotecki"_s)
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
			$of("stq"_s),
			$of("fryzyjski saterlandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("etiopskie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"system 12-godzinny (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"system 12-godzinny (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"retoromański"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("waluta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumuński"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("dialekt Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("cyfry orija"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"chińskie cyfry dziesiętne"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("rosyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinya-ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("bliss"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kreolski Wysp Zielonego Przylądka"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("angielski australijski"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskryt"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("ortografia ujednolicona"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardyński"_s)
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
			$of(u"północnolapoński"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabu"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("serbsko-chorwacki"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("syngaleski"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("sumeryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"słowacki"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"słoweński"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samoański"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalijski"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("cyfry arabsko-indyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albański"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbski"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("suazi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"księgowy format waluty"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sotho południowy"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("jawajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundajski"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("dialekt Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("szwedzki"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"tradycyjne chińskie cyfry księgowe"_s)
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
			$of("tamilski"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Azja"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("buriacki"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Azja Środkowa"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Azja Zachodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tadżycki"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("tajski"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinia"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugijski"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("angielski kanadyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmeński"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalski"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
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
			$of("diola"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"cyfry japońskie"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turecki"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("komoryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatarski"_s)
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
			$of(u"tahitański"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("dialekt San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Europa Wschodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Europa Północna"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Europa Zachodnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("ujgurski"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"starowłoskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"koreańskie"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"wspólne"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukraiński"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("zelandzki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Kalendarz koptyjski"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("standardowa ortografia regionu Resia"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kałmucki"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("uzbecki"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("ortografia niemiecka z 1996 r."_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"dolnosaksoński"_s)
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
			$of("type.ca.roc"_s),
			$of(u"kalendarz Republiki Chińskiej"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("wietnamski"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"chotański"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("cykl (12- lub 24-godzinny)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("ortografia taraszkiewicka"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("wolapik"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("syriacki"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kicze"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"keczua górski (Chimborazo)"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"waloński"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauski"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("greckie"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"kirmandżki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("lidyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("klinowe sumero-akadyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardowy marokański tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"współczesny arabski"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"zunifikowane symbole kanadyjskich autochtonów"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("mongolskie"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"łaciński - fraktura"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"śląski"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"łacińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"łaciński - odmiana gaelicka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"uproszczone cyfry chińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"tradycyjne cyfry chińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("khosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"cyfry rzymskie (małe litery)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("likijskie"_s)
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
			$of(u"zaratusztriański dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Moon’a"_s)
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
			$of("siedemnastowieczny francuski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("jidysz"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
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
			$of("Liczebniki tradycyjne"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"meksykański hiszpański"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("syryjski (odmiana zachodnia)"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"osmańsko-turecki"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("syriacki estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("wai"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("czuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("karyjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"chiński"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("staropermskie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"styl podziału wiersza"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"porządek sortowania książki telefonicznej"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("monotoniczny"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"gruzińskie"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"japońskie cyfry księgowe"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("czamskie"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("gyyz"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("zachodniomaryjski"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("syryjski (odmiana wschodnia)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("sortowanie zreformowane"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("egipskie demotyczne"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("egipskie hieratyczne"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("hieroglify egipskie"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"gruzińskie chucuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"chiński uproszczony"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permiacki"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"starowęgierskie"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("tradycyjna ortografia niemiecka"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("kosrae"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("wenecki"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"chiński tradycyjny"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("sundajskie"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("wepski"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("cyfry khmerskie"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("walencki"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("cypryjskie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"turecki zunifikowany alfabet łaciński"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("cyfry gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"wiele języków"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kaddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("system miar"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krik"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"głagolica"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"gilbertański"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"ortografia wspólna"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karaibski"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("kajuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("cyfry tamilskie"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karaczajsko-bałkarski"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("inguski"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaraya"_s)
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
			$of("karelski"_s)
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
			$of("cyfry"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("sambala"_s)
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

LocaleNames_pl::LocaleNames_pl() {
}

$Class* LocaleNames_pl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pl, name, initialize, &_LocaleNames_pl_ClassInfo_, allocate$LocaleNames_pl);
	return class$;
}

$Class* LocaleNames_pl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun